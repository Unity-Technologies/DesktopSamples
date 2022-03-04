//
// App.xaml.cpp
// Implementation of the App class.
//

#include "pch.h"
#include "MainPage.xaml.h"
#include "UnityGenerated.h"

using namespace UWP_IL2CPP_WithCSharpProject_Example;

using namespace Platform;
using namespace UnityPlayer;
using namespace Windows::ApplicationModel::Activation;
using namespace Windows::UI::ViewManagement;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Interop;

// The Blank Application template is documented at http://go.microsoft.com/fwlink/?LinkId=402347&clcid=0x409

/// <summary>
/// Initializes the singleton application object.  This is the first line of authored code
/// executed, and as such is the logical equivalent of main() or WinMain().
/// </summary>
App::App()
{
    InitializeComponent();
    SetupOrientation();
    m_AppCallbacks = ref new AppCallbacks();
}

/// <summary>
/// Invoked when the application is launched normally by the end user.  Other entry points
/// will be used such as when the application is launched to open a specific file.
/// </summary>
/// <param name="e">Details about the launch request and process.</param>
void App::OnLaunched(LaunchActivatedEventArgs^ e)
{
    m_SplashScreen = e->SplashScreen;
    InitializeUnity(e->Arguments);
}

/// <summary>
/// Invoked when application is launched through protocol.
/// Read more - http://msdn.microsoft.com/library/windows/apps/br224742
/// </summary>
/// <param name="args"></param>
void App::OnActivated(IActivatedEventArgs^ args)
{
    String^ appArgs = "";

    if (args->Kind == ActivationKind::Protocol)
    {
        auto eventArgs = safe_cast<ProtocolActivatedEventArgs^>(args);
        m_SplashScreen = eventArgs->SplashScreen;
        appArgs += String::Concat("Uri={0}", eventArgs->Uri->AbsoluteUri);
    }

    InitializeUnity(appArgs);
}

/// <summary>
/// Invoked when application is launched via file
/// Read more - http://msdn.microsoft.com/library/windows/apps/br224742
/// </summary>
/// <param name="args"></param>
void App::OnFileActivated(FileActivatedEventArgs^ args)
{
    String^ appArgs = "File=";

    m_SplashScreen = args->SplashScreen;

    bool firstFileAdded = false;

    for (auto file : args->Files)
    {
        if (firstFileAdded)
        {
            appArgs += ";";
        }
        else
        {
            firstFileAdded = true;
        }

        appArgs += file->Path;
    }

    InitializeUnity(appArgs);
}

void App::InitializeUnity(String^ args)
{
    ApplicationView::GetForCurrentView()->SuppressSystemOverlays = true;

    m_AppCallbacks->SetAppArguments(args);
    auto rootFrame = safe_cast<Frame^>(Window::Current->Content);

    // Do not repeat app initialization when the Window already has content,
    // just ensure that the window is active
    if (rootFrame == nullptr && !m_AppCallbacks->IsInitialized())
    {
        rootFrame = ref new Frame();
        Window::Current->Content = rootFrame;
#if !UNITY_HOLOGRAPHIC
        Window::Current->Activate();
#endif

        rootFrame->Navigate(TypeName(MainPage::typeid ));
    }

    Window::Current->Activate();
}

void App::SetupOrientation()
{
    Unity::SetupDisplay();
}
