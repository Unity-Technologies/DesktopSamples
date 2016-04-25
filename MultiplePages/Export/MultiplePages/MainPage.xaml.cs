using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using UnityEngine.Windows;
using Windows.ApplicationModel.Activation;
using Windows.Foundation;
using Windows.Foundation.Collections;
using Windows.Storage;
using Windows.UI;
using Windows.UI.Core;
using Windows.UI.Xaml;
using Windows.UI.Xaml.Controls;
using Windows.UI.Xaml.Controls.Primitives;
using Windows.UI.Xaml.Data;
using Windows.UI.Xaml.Input;
using Windows.UI.Xaml.Media;
using Windows.UI.Xaml.Navigation;

// The Blank Page item template is documented at http://go.microsoft.com/fwlink/?LinkId=234238
using UnityPlayer;

namespace Template
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	public sealed partial class MainPage : Page
	{
		private WinRTBridge.WinRTBridge _bridge;
		private AppCallbacks appCallbacks;

		public MainPage()
		{
			this.InitializeComponent();
			appCallbacks = new AppCallbacks();

#if UNITY_WP_8_1
			ApplicationView.GetForCurrentView().SuppressSystemOverlays = true;
#pragma warning disable 4014
			StatusBar.GetForCurrentView().HideAsync();
#pragma warning restore 4014
#endif
			SimpleScript.navigateBack = NavigateBack;
			appCallbacks.SetAppArguments(Globals.ApplicationArguments);
				// Setup scripting bridge
			_bridge = new WinRTBridge.WinRTBridge();
			appCallbacks.SetBridge(_bridge);

#if !UNITY_WP_8_1
			appCallbacks.SetKeyboardTriggerControl(this);
#endif

			appCallbacks.SetSwapChainPanel(this.GetSwapChainPanel());
			appCallbacks.SetCoreWindowEvents(Window.Current.CoreWindow);
			appCallbacks.InitializeD3DXAML();
			appCallbacks.UnityActivate(Window.Current.CoreWindow, CoreWindowActivationState.CodeActivated);
			appCallbacks.Initialized += OnInitialized;
#if UNITY_WP_8_1
			SetupLocationService();
#endif
		}

#if UNITY_WP_8_1
		// This is the default setup to show location consent message box to the user
		// You can customize it to your needs, but do not remove it completely if your application
		// uses location services, as it is a requirement in Windows Store certification process
		private async void SetupLocationService()
		{
			if (!appCallbacks.IsLocationCapabilitySet())
			{
				return;
			}

			const string settingName = "LocationContent";
			bool userGaveConsent = false;

			object consent;
			var settings = Windows.Storage.ApplicationData.Current.LocalSettings;
			var userWasAskedBefore = settings.Values.TryGetValue(settingName, out consent);

			if (!userWasAskedBefore)
			{
				var messageDialog = new Windows.UI.Popups.MessageDialog("Can this application use your location?", "Location services");

				var acceptCommand = new Windows.UI.Popups.UICommand("Yes");
				var declineCommand = new Windows.UI.Popups.UICommand("No");

				messageDialog.Commands.Add(acceptCommand);
				messageDialog.Commands.Add(declineCommand);

				userGaveConsent = (await messageDialog.ShowAsync()) == acceptCommand;
				settings.Values.Add(settingName, userGaveConsent);
			}
			else
			{
				userGaveConsent = (bool)consent;
			}

			if (userGaveConsent)
			{	// Must be called from UI thread
				appCallbacks.SetupGeolocator();
			}
		}
#endif
		private void OnInitialized()
		{
			// If we're not showing this page, we want to start Unity in paused state
			if (Frame.Content != this)
			{
				appCallbacks.UnityPause(1);
			}
		}

		private void NavigateBack()
		{
			// Pause Unity before leaving this page, otherwise the game will continue to update in the background
			// Also if you don't pause, Unity will be accepting input as well
			appCallbacks.UnityPause(1);
			Frame.Navigate(typeof(StartPage));
		}
		/// <summary>
		/// Invoked when this page is about to be displayed in a Frame.
		/// </summary>
		/// <param name="e">Event data that describes how this page was reached.  The Parameter
		/// property is typically used to configure the page.</param>
		protected override void OnNavigatedTo(NavigationEventArgs e)
		{
			if (appCallbacks.IsInitialized())
			{
				appCallbacks.UnityPause(0);
			}
		}

		public SwapChainPanel GetSwapChainPanel()
		{
			return DXSwapChainPanel;
		}

#if !UNITY_WP_8_1
		protected override Windows.UI.Xaml.Automation.Peers.AutomationPeer OnCreateAutomationPeer()
		{
			return new UnityPlayer.XamlPageAutomationPeer(this);
		}
#endif
	}
}
