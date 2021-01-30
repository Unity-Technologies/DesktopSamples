Windows Store App example showing how to navigate between a regular XAML page and XAML page with Unity inside

QuickStart
* Open project with Unity 5.3 or higher
* Build to Windows Store Apps (SDK 8.1) on top of Export folder
* Open the generated solution
* Right click on the solution in the solution explorer, add existing item. Add Global.cs, StartPage.xaml, StartPage.xaml.cs
* Build & Run
* StartPage should start
* Clicking "Start Unity" button, will instantiate MainPage and Unity itself (Note: In MainPage.xaml, there's a property NavigationCacheMode="Required", which ensures that MainPage is not recreated when we navigate to it)
* You can go back to StartPage, by clicking "Go Back" button in Unity application

P.S As you may note, it takes a while to instantiate MainPage, because Unity needs time to initialize, check App.xaml.cs and uncomment rootFrame.Navigate(typeof (MainPage), null);
It should look like this:
rootFrame.Navigate(typeof (MainPage), null);
rootFrame.Navigate(typeof (StartPage), null);

the StartPage will still be the first page to start, but in this case Unity will be initializing in the background while you're interacting in the StartPage, thus when you click "Start Unity", it should switch immediatly this time