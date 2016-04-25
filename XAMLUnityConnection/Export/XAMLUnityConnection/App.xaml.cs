using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Runtime.InteropServices.WindowsRuntime;
using Windows.ApplicationModel;
using Windows.ApplicationModel.Activation;
using Windows.Foundation;
using Windows.Foundation.Collections;
using Windows.UI.Core;
using Windows.UI.Xaml;
using Windows.UI.Xaml.Controls;
using Windows.UI.Xaml.Controls.Primitives;
using Windows.UI.Xaml.Data;
using Windows.UI.Xaml.Input;
using Windows.UI.Xaml.Media;
using Windows.UI.Xaml.Navigation;
using UnityPlayer;
// The Blank Application template is documented at http://go.microsoft.com/fwlink/?LinkId=234227

namespace Template
{
	/// <summary>
	/// Provides application-specific behavior to supplement the default Application class.
	/// </summary>
	sealed partial class App : Application
	{
		private WinRTBridge.WinRTBridge _bridge;
		private AppCallbacks appCallbacks;
		/// <summary>
		/// Initializes the singleton application object.  This is the first line of authored code
		/// executed, and as such is the logical equivalent of main() or WinMain().
		/// </summary>
		public App()
		{
			this.InitializeComponent();
			appCallbacks = new AppCallbacks(false);
            appCallbacks.Initialized += RemoveSplashScreen;
		}

		/// <summary>
		/// Invoked when the application is launched normally by the end user.  Other entry points
		/// will be used when the application is launched to open a specific file, to display
		/// search results, and so forth.
		/// </summary>
		/// <param name="args">Details about the launch request and process.</param>
		protected override void OnLaunched(LaunchActivatedEventArgs args)
		{
            appCallbacks.SetAppArguments(args.Arguments);
			Frame rootFrame = Window.Current.Content as Frame;

			// Do not repeat app initialization when the Window already has content,
			// just ensure that the window is active
			if (rootFrame == null && !appCallbacks.IsInitialized())
			{
				var mainPage = new MainPage(args.SplashScreen);
				Window.Current.Content = mainPage;
				Window.Current.Activate();

				// Setup scripting bridge
				_bridge = new WinRTBridge.WinRTBridge();
				appCallbacks.SetBridge(_bridge);

                appCallbacks.SetSwapChainBackgroundPanel(mainPage.GetSwapChainBackgroundPanel());


				appCallbacks.SetCoreWindowEvents(Window.Current.CoreWindow);

				appCallbacks.InitializeD3DXAML();
			}

			Window.Current.Activate();
		}

        private void RemoveSplashScreen()
        {
            try
            {
                MainPage page = (MainPage)Window.Current.Content;
                page.RemoveSplashScreen();
            }
            catch (InvalidCastException)
            { }
        }
	}
}
