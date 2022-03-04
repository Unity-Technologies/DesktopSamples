//
// MainPage.xaml.cpp
// Implementation of the MainPage class.
//

#include "pch.h"
#include "MainPage.xaml.h"

using namespace UWP_IL2CPP_WithCSharpProject_Example;

using namespace Concurrency;
using namespace Platform;
using namespace UnityPlayer;
using namespace Windows::ApplicationModel::Activation;
using namespace Windows::Foundation;
using namespace Windows::Storage;
using namespace Windows::System::Threading;
using namespace Windows::UI;
using namespace Windows::UI::Core;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;

// The Blank Page item template is documented at http://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x409

MainPage::MainPage()
{
    m_SplashScreenRemovalEventToken.Value = 0;
    m_OnResizeRegistrationToken.Value = 0;

    InitializeComponent();
    NavigationCacheMode = ::NavigationCacheMode::Required;

    auto appCallbacks = AppCallbacks::Instance;

    bool isWindowsHolographic = false;

#if UNITY_HOLOGRAPHIC
    // If application was exported as Holographic check if the device actually supports it,
    // otherwise we treat this as a normal XAML application
    isWindowsHolographic = AppCallbacks::IsMixedRealitySupported();
#endif

    if (isWindowsHolographic)
    {
        appCallbacks->InitializeViewManager(Window::Current->CoreWindow);
    }
    else
    {
        m_SplashScreenRemovalEventToken = appCallbacks->RenderingStarted += ref new RenderingStartedHandler(this, &MainPage::RemoveSplashScreen);

        appCallbacks->SetSwapChainPanel(m_DXSwapChainPanel);
        appCallbacks->SetCoreWindowEvents(Window::Current->CoreWindow);
        appCallbacks->InitializeD3DXAML();

        m_SplashScreen = safe_cast<App^>(App::Current)->GetSplashScreen();

        auto dispatcher = CoreWindow::GetForCurrentThread()->Dispatcher;
        ThreadPool::RunAsync(ref new WorkItemHandler([this, dispatcher](IAsyncAction^)
        {
            GetSplashBackgroundColor(dispatcher);
        }));

        OnResize();

        m_OnResizeRegistrationToken = Window::Current->SizeChanged += ref new WindowSizeChangedEventHandler([this](Object^, WindowSizeChangedEventArgs^)
        {
            OnResize();
        });
    }
}

MainPage::~MainPage()
{
    if (m_SplashScreenRemovalEventToken.Value != 0)
    {
        AppCallbacks::Instance->RenderingStarted -= m_SplashScreenRemovalEventToken;
        m_SplashScreenRemovalEventToken.Value = 0;
    }

    if (m_OnResizeRegistrationToken.Value != 0)
    {
        Window::Current->SizeChanged -= m_OnResizeRegistrationToken;
        m_OnResizeRegistrationToken.Value = 0;
    }
}

/// <summary>
/// Invoked when this page is about to be displayed in a Frame.
/// </summary>
/// <param name="e">Event data that describes how this page was reached.  The Parameter
/// property is typically used to configure the page.</param>
void MainPage::OnNavigatedTo(NavigationEventArgs^ e)
{
    m_SplashScreen = safe_cast<SplashScreen^>(e->Parameter);
    OnResize();
}

void MainPage::OnResize()
{
    if (m_SplashScreen != nullptr)
    {
        m_SplashImageRect = m_SplashScreen->ImageLocation;
        PositionImage();
    }
}

void MainPage::PositionImage()
{
    auto inverseScaleX = 1.0f;
    auto inverseScaleY = 1.0f;

    m_ExtendedSplashImage->SetValue(Canvas::LeftProperty, m_SplashImageRect.X * inverseScaleX);
    m_ExtendedSplashImage->SetValue(Canvas::TopProperty, m_SplashImageRect.Y * inverseScaleY);
    m_ExtendedSplashImage->Height = m_SplashImageRect.Height * inverseScaleY;
    m_ExtendedSplashImage->Width = m_SplashImageRect.Width * inverseScaleX;
}

void MainPage::GetSplashBackgroundColor(CoreDispatcher^ dispatcher)
{
    HandleHolder manifestHandle = CreateFile2(L"AppxManifest.xml", GENERIC_READ, FILE_SHARE_READ, OPEN_EXISTING, nullptr);
    if (manifestHandle == nullptr)
        return;

    LARGE_INTEGER fileSize;
    auto result = GetFileSizeEx(manifestHandle, &fileSize);
    if (result == FALSE)
        return;

    std::string manifest;
    manifest.resize(static_cast<size_t>(fileSize.QuadPart));

    DWORD bytesRead;
    result = ReadFile(manifestHandle, &manifest[0], static_cast<DWORD>(fileSize.QuadPart), &bytesRead, nullptr);
    if (result == FALSE)
        return;
    if (bytesRead != fileSize.QuadPart)
        return;

    auto idx = manifest.find("SplashScreen");

    if (idx == std::string::npos)
        return;

    manifest = manifest.substr(idx);
    idx = manifest.find("BackgroundColor");

    if (idx == std::string::npos)
        return;

    manifest = manifest.substr(idx);
    idx = manifest.find("\"");

    if (idx == std::string::npos || idx + 2 > manifest.length())
        return;

    manifest = manifest.substr(idx + 1); // also remove quote and # char after it
    idx = manifest.find("\"");

    if (idx == std::string::npos)
        return;

    manifest = manifest.substr(0, idx);

    int value = 0;
    bool transparent = false;
    if (manifest == "transparent")
        transparent = true;
    else if (manifest[0] == '#')
    {
        // color value has leading #
        value = std::stoi(manifest.substr(1), 0, 16);
    }
    else
        return; // we reach this point if values like 'red', 'blue' etc are used Unity does not set such, so you probably want to use hardcoded value here too

    uint8_t r = static_cast<uint8_t>(value >> 16);
    uint8_t g = static_cast<uint8_t>((value & 0x0000FF00) >> 8);
    uint8_t b = static_cast<uint8_t>(value & 0x000000FF);

    dispatcher->RunAsync(CoreDispatcherPriority::High, ref new DispatchedHandler([this, r, g, b, transparent]
    {
        Color color;
        color.R = r;
        color.G = g;
        color.B = b;
        color.A = transparent ? 0x00 : 0xFF;
        m_ExtendedSplashGrid->Background = ref new SolidColorBrush(color);
    }));
}

void MainPage::RemoveSplashScreen()
{
    uint32_t index;

    if (m_DXSwapChainPanel->Children->IndexOf(m_ExtendedSplashGrid, &index))
        m_DXSwapChainPanel->Children->RemoveAt(index);

    if (m_OnResizeRegistrationToken.Value != 0)
    {
        Window::Current->SizeChanged -= m_OnResizeRegistrationToken;
        m_OnResizeRegistrationToken.Value = 0;
    }
}
