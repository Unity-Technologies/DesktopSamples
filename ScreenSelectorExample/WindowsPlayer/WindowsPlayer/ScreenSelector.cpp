#include "PrecompiledHeader.h"
#include "Preferences.h"
#include "resource.h"
#include "ScreenSelector.h"

#include <algorithm>
#include <codecvt>
#include <dxgi.h>
#include <dxgi1_2.h>
#include <fstream>
#include <math.h>
#include <set>
#include <ShlObj.h>
#include <sstream>
#include <string>
#include <vector>
#include <Windows.h>
#include <windowsx.h>
#include <wrl/client.h>

using Microsoft::WRL::ComPtr;

static const char* kLogoImage = "ScreenSelector.png";

static HBITMAP s_logoBitmap = NULL;
static Preferences s_preferences;
static std::vector<ComPtr<IDXGIOutput>> s_outputs;
static const wchar_t* kDefaultQualityLevelNames[] =
{
    L"Very Low",
    L"Low",
    L"Medium",
    L"High",
    L"Very High",
    L"Ultra"
};
static bool s_stereo3d = true;
static std::vector<Resolution> s_resolutions;

// Current resolution width and height for windowed and full screen modes.
// These values get updated the first time FillResolutionsList is called.
static int s_CurrResolutionWidthWindowed = 0;
static int s_CurrResolutionHeightWindowed = 0;
static int s_CurrResolutionWidthFullScreen = 0;
static int s_CurrResolutionHeightFullScreen = 0;


void CenterWindowOnParent(HWND window)
{
    // center on parent or screen
    RECT rc, rcOwner, rcWindow;
    HWND hwndOwner = GetParent(window);
    if (hwndOwner == NULL)
        hwndOwner = GetDesktopWindow();
    GetWindowRect(hwndOwner, &rcOwner);
    GetWindowRect(window, &rcWindow);
    CopyRect(&rc, &rcOwner);

    OffsetRect(&rcWindow, -rcWindow.left, -rcWindow.top);
    OffsetRect(&rc, -rc.left, -rc.top);
    OffsetRect(&rc, -rcWindow.right, -rcWindow.bottom);

    SetWindowPos(window, HWND_TOP,
        rcOwner.left + (rc.right / 2),
        rcOwner.top + (rc.bottom / 2),
        0, 0, // no size arguments
        SWP_NOSIZE | SWP_NOACTIVATE);
}

static DXGI_OUTPUT_DESC GetDescriptionFromOutput(const ComPtr<IDXGIOutput>& output)
{
    DXGI_OUTPUT_DESC description;
    output->GetDesc(&description);
    return description;
}

static void PopulateDisplayList()
{
    // Try and get monitors
    HRESULT result;
    ComPtr<IDXGIFactory1> dxgiFactory;
    ComPtr<IDXGIAdapter1> dxgiAdapter;
    ComPtr<IDXGIOutput> dxgiOutput;
    result = CreateDXGIFactory1(__uuidof(IDXGIFactory1), &dxgiFactory);
    // Leave if we can't go further?
    if (result != S_OK)
        return;

    // Get all the adapters and their outputs (if they have any)
    int i = 0;
    while (dxgiFactory->EnumAdapters1(i, &dxgiAdapter) == S_OK)
    {
        int j = 0;
        while (dxgiAdapter->EnumOutputs(j, &dxgiOutput) == S_OK)
        {
            s_outputs.push_back(dxgiOutput);
            // Put the primary display in the first slot
            DXGI_OUTPUT_DESC description = GetDescriptionFromOutput(dxgiOutput);
            if (description.DesktopCoordinates.left == 0 && description.DesktopCoordinates.bottom == 0)
                std::swap(s_outputs.front(), s_outputs.back());
            ++j;
        }
        ++i;
    }

    std::sort(s_outputs.begin() + 1, s_outputs.end(),
        [](const ComPtr<IDXGIOutput>& one, const ComPtr<IDXGIOutput>& other) -> bool
        {
            return GetDescriptionFromOutput(one).DesktopCoordinates.left < GetDescriptionFromOutput(other).DesktopCoordinates.left;
        });
}

static int FillSelectMonitorList(HWND hDlg)
{
    if (s_outputs.size() <= 0)
        PopulateDisplayList();

    HWND lstWnd = GetDlgItem(hDlg, IDC_CMB_MONITOR);
    ComboBox_ResetContent(lstWnd);

    if (s_outputs.size() == 0)
        return 0;

    for (int i = 0; i < s_outputs.size(); ++i)
    {
        ComboBox_AddString(lstWnd, GetDescriptionFromOutput(s_outputs[i]).DeviceName);
    }

    int selected = s_preferences.GetMonitorSelection();
    selected = std::min(std::max(selected, 0), int(s_outputs.size()) - 1);
    ComboBox_SetCurSel(GetDlgItem(hDlg, IDC_CMB_MONITOR), selected);

    return selected;
}

static void FillQualitiesList(HWND hDlg)
{
    HWND lstWnd = GetDlgItem(hDlg, IDC_CMB_QUALITY);
    for (const wchar_t* name : kDefaultQualityLevelNames)
    {
        ComboBox_AddString(lstWnd, name);
    }

    ComboBox_SetCurSel(GetDlgItem(hDlg, IDC_CMB_QUALITY), s_preferences.GetGraphicsQualityIndex());
}

int FindClosestResolution(int width, int height, int& closestResolutionWidth, int& closestResolutionHeight)
{
    closestResolutionWidth = closestResolutionHeight = 0;
    int index = 0;

    if (s_resolutions.empty())
        return index;

    int maxDistance = std::numeric_limits<int>::max();
    auto itr = s_resolutions.begin();
    for (int i = 0; i < s_resolutions.size(); i++)
    {

        int curWidth = itr->width;
        int curHeight = itr->height;
        int distance = std::abs(width - curWidth) + std::abs(height - curHeight);
        if (distance < maxDistance)
        {
            index = i;
            maxDistance = distance;
            closestResolutionWidth = itr->width;
            closestResolutionHeight = itr->height;
        }
        itr++;
    }
    return index;
}

static void FillResolutionsList(HWND hDlg, int monitorIndex)
{
    s_resolutions.clear();

    if (s_outputs.size() <= 0)
        PopulateDisplayList();

    if (s_outputs.size() <= 0)
        return;

    if (monitorIndex >= s_outputs.size())
        monitorIndex = 0;

    ComPtr<IDXGIOutput> monitor = s_outputs[monitorIndex];
    UINT numDisplayModes = 0;
    // Get number of display modes here
    HRESULT result = monitor->GetDisplayModeList(DXGI_FORMAT_B8G8R8A8_UNORM, 0, &numDisplayModes, NULL);
    
    if (result != S_OK)
        return;

    // Allocate appropriately sized array
    std::unique_ptr<DXGI_MODE_DESC[]> descriptions(new DXGI_MODE_DESC[numDisplayModes]);

    // Actually get descriptions here
    result = monitor->GetDisplayModeList(DXGI_FORMAT_B8G8R8A8_UNORM, 0, &numDisplayModes, descriptions.get());

    if (result != S_OK)
        return;

    std::sort(descriptions.get(), &descriptions[numDisplayModes],
        [](const DXGI_MODE_DESC& one, const DXGI_MODE_DESC& other) -> bool
        {
            if (one.Height == other.Height)
                return one.Width < other.Width;
            return one.Height < other.Height;
        });

    DXGI_MODE_DESC* end = std::unique(descriptions.get(), &descriptions[numDisplayModes],
        [](const DXGI_MODE_DESC& one, const DXGI_MODE_DESC& other) -> bool
        {
            return (one.Width == other.Width) && (one.Height == other.Height);
        });

    HWND lstWnd = GetDlgItem(hDlg, IDC_CMB_RES);
    ComboBox_ResetContent(lstWnd);

    for (int i = 0; &descriptions[i] != end; i++)
    {
        wchar_t buffer[50];
        int numWritten = swprintf(buffer, 50, L"%d x %d", descriptions[i].Width, descriptions[i].Height);
        if (numWritten <= 0)
            return;
        ComboBox_AddString(lstWnd, buffer);
        s_resolutions.emplace_back(Resolution(descriptions[i].Width, descriptions[i].Height));
    }

    int width = s_preferences.GetWidth();
    int height = s_preferences.GetHeight();
    
    int closestResolutionWidth, closestResolutionHeight;
    int row = FindClosestResolution(width, height, closestResolutionWidth, closestResolutionHeight);
    ComboBox_SetCurSel(lstWnd, row);
}


HBITMAP ResizeLogoImageIfNeeded(HBITMAP image, const RECT& logoWindowRect)
{
    BITMAP size;
    if (!GetObject(image, sizeof(size), &size))
        return image;

    int requiredHeight = logoWindowRect.bottom - logoWindowRect.top;

    // If logo image height matches with logo window height no need to resize
    if (requiredHeight == size.bmHeight)
        return image;

    // Scale image, but preserve aspect ratio
    float scale = (float)requiredHeight / (float)size.bmHeight;
    int newHeight = requiredHeight;
    int newWidth = int(scale * size.bmWidth + 0.5f);

    return (HBITMAP)CopyImage(image, IMAGE_BITMAP, newWidth, newHeight, LR_COPYDELETEORG);
}

static INT_PTR CALLBACK screenSelDialogProc(HWND hDlg, UINT msg, WPARAM wParam, LPARAM lParam)
{
    UNREFERENCED_PARAMETER(wParam);
    UNREFERENCED_PARAMETER(lParam);

    switch (msg)
    {
        case WM_INITDIALOG:
        {
            CenterWindowOnParent(hDlg);
            SetForegroundWindow(hDlg);

            // set logo image
            HWND logoWnd = GetDlgItem(hDlg, IDC_S_LOGO);
            RECT logoWndRC;
            GetWindowRect(logoWnd, &logoWndRC);

            s_logoBitmap = ResizeLogoImageIfNeeded(s_logoBitmap, logoWndRC);
            if (NULL != s_logoBitmap)
            {
                SendMessage(logoWnd, STM_SETIMAGE, (WPARAM)IMAGE_BITMAP, (LPARAM)s_logoBitmap);

                // get logo size
                BITMAP logoSize;
                if (GetObject(s_logoBitmap, sizeof(logoSize), &logoSize))
                {
                    int logoW = logoSize.bmWidth;
                    int logoH = logoSize.bmHeight;
                    RECT rc;
                    GetWindowRect(logoWnd, &rc);
                    int smallerW = (rc.right - rc.left) - logoW;
                    if (smallerW < 0)
                        smallerW = 0;
                    int smallerH = (rc.bottom - rc.top) - logoH;
                    if (smallerH < 0)
                        smallerH = 0;
                    if (smallerW > 0 || smallerH > 0)
                    {
                        POINT pUL, pDR;
                        pUL.x = rc.left; pUL.y = rc.top;
                        pDR.x = rc.right; pDR.y = rc.bottom;
                        ScreenToClient(hDlg, &pUL);
                        ScreenToClient(hDlg, &pDR);

                        SetWindowPos(logoWnd, NULL,
                            pUL.x + smallerW / 2,
                            pUL.y + smallerH / 2,
                            pDR.x - pUL.x - smallerW,
                            pDR.y - pUL.y - smallerH,
                            SWP_NOZORDER);
                    }
                }
            }

            // set title
            std::wstring wideTitle = L"Configuration";
            SetWindowTextW(hDlg, wideTitle.c_str());

            // fill select monitor list
            int selectedMonitor = FillSelectMonitorList(hDlg);
            // fill resolutions list
            FillResolutionsList(hDlg, selectedMonitor);
            // select quality radio button
            FillQualitiesList(hDlg);

            // check windowed
            CheckDlgButton(hDlg, IDC_CHK_WINDOW, s_preferences.GetFullscreen() ? BST_UNCHECKED : BST_CHECKED);

            // checkbox for stereo mode
            ComPtr<IDXGIFactory2> factory2;
            HRESULT result = CreateDXGIFactory1(__uuidof(IDXGIFactory2), &factory2);
            if (result != S_OK)
            {
                ShowWindow(GetDlgItem(hDlg, IDC_CHK_STEREO3D), SW_HIDE);
                return TRUE;
            }

            s_stereo3d = factory2 && factory2->IsWindowedStereoEnabled();
            if (s_stereo3d)
                CheckDlgButton(hDlg, IDC_CHK_STEREO3D, BST_CHECKED);
            else
                ShowWindow(GetDlgItem(hDlg, IDC_CHK_STEREO3D), SW_HIDE);
        }

        return TRUE;

        case WM_NOTIFY:
            return FALSE;

        case WM_COMMAND:
            switch (LOWORD(wParam))
            {
                case IDOK:
                {
                    // apply settings
                    HWND lstWnd = GetDlgItem(hDlg, IDC_CMB_RES);
                    int selModeIndex = ComboBox_GetCurSel(lstWnd);
                    if (selModeIndex >= 0)
                    {
                        s_preferences.SetWidth(s_resolutions[selModeIndex].width);
                        s_preferences.SetHeight(s_resolutions[selModeIndex].height);
                    }

                    int qual = ComboBox_GetCurSel(GetDlgItem(hDlg, IDC_CMB_QUALITY));
                    s_preferences.SetGraphicsQualityIndex(qual);

                    s_preferences.SetFullscreen(!IsDlgButtonChecked(hDlg, IDC_CHK_WINDOW));

                    if (s_stereo3d)
                        s_preferences.SetStereo3d(IsDlgButtonChecked(hDlg, IDC_CHK_STEREO3D));

                    int monitor = ComboBox_GetCurSel(GetDlgItem(hDlg, IDC_CMB_MONITOR));
                    if (monitor != CB_ERR)
                        s_preferences.SetMonitorSelection(monitor);
                }
                EndDialog(hDlg, IDOK);
                break;
                case IDCANCEL:
                    EndDialog(hDlg, IDCANCEL);
                    break;
                case IDC_CMB_MONITOR:
                    if (HIWORD(wParam) == CBN_SELCHANGE)
                    {
                        int monitor = ComboBox_GetCurSel((HWND)lParam);
                        if (monitor != CB_ERR)
                            s_preferences.SetMonitorSelection(monitor);
                        FillResolutionsList(hDlg, monitor);
                    }
                    break;
                case IDC_CMB_RES:
                    if (HIWORD(wParam) == CBN_SELCHANGE)
                    {
                        // Update the current resolution widths and heights.
                        HWND lstWnd = GetDlgItem(hDlg, IDC_CMB_RES);
                        int selModeIndex = ComboBox_GetCurSel(lstWnd);
                        if (selModeIndex >= 0)
                        {
                            s_CurrResolutionWidthWindowed = s_CurrResolutionWidthFullScreen = s_resolutions[selModeIndex].width;
                            s_CurrResolutionHeightWindowed = s_CurrResolutionHeightFullScreen = s_resolutions[selModeIndex].height;
                        }
                    }
                    break;
                case IDC_CHK_WINDOW:
                    FillResolutionsList(hDlg, s_preferences.GetMonitorSelection());
                    break;
            }
            return TRUE;

        case WM_DISPLAYCHANGE:
        {
            s_outputs.clear();
            s_resolutions.clear();
            int selectedMonitor = FillSelectMonitorList(hDlg);
            FillResolutionsList(hDlg, selectedMonitor);
        }
        return TRUE;

        default:
            return FALSE;
        }

}

std::wstring ConstructCommandLine()
{
    std::wstring command;
    // Unity expects a 1-based monitor selection - not 0-based
    command.append(L" -monitor ");
    command.append(std::to_wstring(s_preferences.GetMonitorSelection() + 1));
    command.append(L" -screen-width ");
    command.append(std::to_wstring(s_preferences.GetWidth()));
    command.append(L" -screen-height ");
    command.append(std::to_wstring(s_preferences.GetHeight()));
    command.append(L" -screen-quality ");
    command.append(std::to_wstring(s_preferences.GetGraphicsQualityIndex()));
    command.append(L" -screen-fullscreen ");
    if (s_preferences.GetFullscreen())
        command.append(std::to_wstring(1));
    else
        command.append(std::to_wstring(0));

    if (!s_preferences.GetStereo3d())
    {
        command.append(L" -no-stereo-rendering");
    }

    return command;
}

std::wstring GetDataPath()
{
    std::wstring path;
    std::wstring dir;

    // When run from VS or other debugging places, current working directory can be set to something else.
    dir.resize(MAX_PATH);
    GetModuleFileName(NULL, LPWSTR(dir.data()), MAX_PATH);

    size_t pathCharLocation = dir.find_last_of(L"\\");
    if (pathCharLocation == std::string::npos)
        return path;

    dir.replace(pathCharLocation + 1, dir.length(), L"PersistentDataPath.txt");


    // Get AppData path
    PWSTR appDataLocalLow = NULL;
    HRESULT result = SHGetKnownFolderPath(FOLDERID_LocalAppDataLow, 0, NULL, &appDataLocalLow);

    if (result != S_OK)
    {
        return std::wstring();
    }

    path.append(appDataLocalLow);
    CoTaskMemFree(appDataLocalLow);
    appDataLocalLow = NULL;


    // Get data path
    std::wifstream pathFile(dir);

    if (!pathFile.is_open())
        return std::wstring();

    std::wstring pathInfo;
    std::getline(pathFile, pathInfo);
    pathFile.close();

    path.append(L"\\" + pathInfo + L"\\ScreenSelectorPrefs.txt");

    return path;
}


void ReadPreferences()
{
    // Open, read, and close file
    std::ifstream file(GetDataPath());
    const int numPrefs = 6;
    int values[numPrefs] = { 0 };

    if (!file.is_open())
        return;

    std::string line;
    std::getline(file, line);

    int i = 0;
    while (file.good() && i < numPrefs)
    {
        values[i] = std::stoi(line);
        std::getline(file, line);
        i++;
    }

    file.close();

    // Set values from file
    const int windowed = 3; // Windowed in Unity
    s_preferences.SetWidth(values[0]);
    s_preferences.SetHeight(values[1]);
    s_preferences.SetFullscreen(values[2] != windowed);
    s_preferences.SetStereo3d(values[3] != 0);
    s_preferences.SetGraphicsQualityIndex(values[4]);
    s_preferences.SetMonitorSelection(values[5]);
}

bool DisplayScreenSelector(std::wstring& commandline)
{
    ReadPreferences();

    bool cont = (IDCANCEL != DialogBox(NULL, MAKEINTRESOURCE(IDD_SCEENSEL), NULL, screenSelDialogProc));

    commandline = ConstructCommandLine();
    return cont;
}
