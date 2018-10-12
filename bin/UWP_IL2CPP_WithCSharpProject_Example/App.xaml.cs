using UnityPlayer;
using Windows.ApplicationModel.Activation;
using Windows.Graphics.Display;
using Windows.UI.ViewManagement;
using Windows.UI.Xaml;
using Windows.UI.Xaml.Controls;

// The Blank Application template is documented at http://go.microsoft.com/fwlink/?LinkId=234227
namespace UWP_IL2CPP_WithCSharpProject_Example
{
    /// <summary>
    /// Provides application-specific behavior to supplement the default Application class.
    /// </summary>
    sealed partial class App : Application
    {
        private AppCallbacks m_AppCallbacks;
        public SplashScreen splashScreen;

        /// <summary>
        /// Initializes the singleton application object.  This is the first line of authored code
        /// executed, and as such is the logical equivalent of main() or WinMain().
        /// </summary>
        public App()
        {
            this.InitializeComponent();
            SetupOrientation();
            m_AppCallbacks = new AppCallbacks();
        }

        /// <summary>
        /// Invoked when application is launched through protocol.
        /// Read more - http://msdn.microsoft.com/library/windows/apps/br224742
        /// </summary>
        /// <param name="args"></param>
        protected override void OnActivated(IActivatedEventArgs args)
        {
            string appArgs = "";

            switch (args.Kind)
            {
                case ActivationKind.Protocol:
                    ProtocolActivatedEventArgs eventArgs = args as ProtocolActivatedEventArgs;
                    splashScreen = eventArgs.SplashScreen;
                    appArgs += string.Format("Uri={0}", eventArgs.Uri.AbsoluteUri);
                    break;
            }
            InitializeUnity(appArgs);
        }

        /// <summary>
        /// Invoked when application is launched via file
        /// Read more - http://msdn.microsoft.com/library/windows/apps/br224742
        /// </summary>
        /// <param name="args"></param>
        protected override void OnFileActivated(FileActivatedEventArgs args)
        {
            string appArgs = "";

            splashScreen = args.SplashScreen;
            appArgs += "File=";
            bool firstFileAdded = false;
            foreach (var file in args.Files)
            {
                if (firstFileAdded) appArgs += ";";
                appArgs += file.Path;
                firstFileAdded = true;
            }

            InitializeUnity(appArgs);
        }

        /// <summary>
        /// Invoked when the application is launched normally by the end user.  Other entry points
        /// will be used when the application is launched to open a specific file, to display
        /// search results, and so forth.
        /// </summary>
        /// <param name="args">Details about the launch request and process.</param>
        protected override void OnLaunched(LaunchActivatedEventArgs args)
        {
            splashScreen = args.SplashScreen;
            InitializeUnity(args.Arguments);
        }

        private void InitializeUnity(string args)
        {
            ApplicationView.GetForCurrentView().SuppressSystemOverlays = true;

            m_AppCallbacks.SetAppArguments(args);
            Frame rootFrame = Window.Current.Content as Frame;

            // Do not repeat app initialization when the Window already has content,
            // just ensure that the window is active
            if (rootFrame == null && !m_AppCallbacks.IsInitialized())
            {
                rootFrame = new Frame();
                Window.Current.Content = rootFrame;
#if !UNITY_HOLOGRAPHIC
                Window.Current.Activate();
#endif
                rootFrame.Navigate(typeof(MainPage));
            }

            Window.Current.Activate();
        }

        void SetupOrientation()
        {
            DisplayInformation.AutoRotationPreferences = DisplayOrientations.Landscape | DisplayOrientations.LandscapeFlipped | DisplayOrientations.Portrait | DisplayOrientations.PortraitFlipped;
            ApplicationView.PreferredLaunchWindowingMode = ApplicationViewWindowingMode.FullScreen;
        }
    }
}
