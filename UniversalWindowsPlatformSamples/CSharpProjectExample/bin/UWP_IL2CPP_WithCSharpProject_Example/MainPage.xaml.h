//
// MainPage.xaml.h
// Declaration of the MainPage class.
//

#pragma once

#include "MainPage.g.h"

namespace UWP_IL2CPP_WithCSharpProject_Example
{
    /// <summary>
    /// An empty page that can be used on its own or navigated to within a Frame.
    /// </summary>
    public ref class MainPage sealed
    {
    protected:
        virtual void OnNavigatedTo(Windows::UI::Xaml::Navigation::NavigationEventArgs^ e) override;

    public:
        MainPage();

    private:
        Windows::ApplicationModel::Activation::SplashScreen^ m_SplashScreen;
        Windows::Foundation::Rect m_SplashImageRect;
        Windows::Foundation::EventRegistrationToken m_SplashScreenRemovalEventToken;
        Windows::Foundation::EventRegistrationToken m_OnResizeRegistrationToken;

        ~MainPage();

        void OnResize();
        void PositionImage();
        void GetSplashBackgroundColor(Windows::UI::Core::CoreDispatcher^ dispatcher);
        void RemoveSplashScreen();
    };
}
