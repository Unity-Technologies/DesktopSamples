#include "PrecompiledHeader.h"
#include "..\UnityPlayerStub\Exports.h"
#include "ScreenSelector.h"

#include <string>

// Hint that the discrete gpu should be enabled on optimus/enduro systems
// NVIDIA docs: http://developer.download.nvidia.com/devzone/devcenter/gamegraphics/files/OptimusRenderingPolicies.pdf
// AMD forum post: http://devgurus.amd.com/thread/169965
extern "C"
{
__declspec(dllexport) DWORD NvOptimusEnablement = 0x00000001;
__declspec(dllexport) int AmdPowerXpressRequestHighPerformance = 1;
}

int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPWSTR lpCmdLine, int nShowCmd)
{
    std::wstring cmdLine = lpCmdLine;
    bool display = DisplayScreenSelector(cmdLine);

    return display ? UnityMain(hInstance, hPrevInstance, LPWSTR(cmdLine.c_str()), nShowCmd) : 0;
}
