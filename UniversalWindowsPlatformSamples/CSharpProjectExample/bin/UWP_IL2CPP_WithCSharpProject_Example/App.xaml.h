//
// App.xaml.h
// Declaration of the App class.
//

#pragma once

#include "App.g.h"

namespace UWP_IL2CPP_WithCSharpProject_Example
{
    /// <summary>
    /// Provides application-specific behavior to supplement the default Application class.
    /// </summary>
    ref class App sealed
    {
    protected:
        virtual void OnLaunched(Windows::ApplicationModel::Activation::LaunchActivatedEventArgs^ e) override;
        virtual void OnActivated(Windows::ApplicationModel::Activation::IActivatedEventArgs^ args) override;
        virtual void OnFileActivated(Windows::ApplicationModel::Activation::FileActivatedEventArgs^ args) override;

    internal:
        App();
        inline Windows::ApplicationModel::Activation::SplashScreen^ GetSplashScreen() const { return m_SplashScreen; }

    private:
        UnityPlayer::AppCallbacks^ m_AppCallbacks;
        Windows::ApplicationModel::Activation::SplashScreen^ m_SplashScreen;

        void InitializeUnity(Platform::String^ args);
        void SetupOrientation();
    };
}
