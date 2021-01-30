using UnityEngine;
using System.Collections;

public class AssocationLaunching : MonoBehaviour
{
	private string uri = "http://www.unity3d.com";
	private string extension = ".txt";
	private string relativeFilePath = "Data\\StreamingAssets\\hello.txt";
	private string assocationFilePath = "Data\\StreamingAssets\\hello.myunitygame";

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void OnGUI ()
	{
#if UNITY_WSA
#if UNITY_EDITOR
		GUILayout.Label("Build to Windows Store Apps first!");
#endif
		GUILayout.Label("Application args: " + UnityEngine.WSA.Application.arguments);
		GUILayout.Space(15);
		GUILayout.Label("1. Example: shows how to open an URL in a browser");
		uri = GUILayout.TextField(uri);
		if (GUILayout.Button("Launch via Uri"))
			UnityEngine.WSA.Launcher.LaunchUri(uri, true);

		GUILayout.Space(15);
		// Note: myunitygame tag must match with the one in Package.appxmanifest under Protocol field
		// You can also Wnd+R, and type myunitygame:// , this will also launch this application.
		GUILayout.Label("2. Example: shows how to open this Windows Store application via protocol, this way you can open this application from another Windows Store application.");
		if (GUILayout.Button("Launch via Uri with 'myunitygame'"))
		{
			// This will invoke OnActivated function in App.xaml.cs
			UnityEngine.WSA.Launcher.LaunchUri("myunitygame://", true);
		}
		GUILayout.Space(15);
		// Note: myunitygame extension must match with the one in Package.appxmanifest under File Type Assocations
		GUILayout.Label("3. Example: shows how to open this Windows Store application via file association. Try creating a file, for ex., 'test.myunitygame', open it, this WSA application should open.");
		if (GUILayout.Button("Launch via File '" + assocationFilePath + "'"))
		{
			// This will invoke OnFileActivated function in App.xaml.cs
			UnityEngine.WSA.Launcher.LaunchFile(UnityEngine.WSA.Folder.Installation, assocationFilePath, true);
		}
		GUILayout.Space(15);
		GUILayout.Label(string.Format("4. Example: open an application associated {0} extension (by default it's notepad.exe)", extension));
		extension = GUILayout.TextField(extension);
		if (GUILayout.Button("Launch via File Picker"))
			UnityEngine.WSA.Launcher.LaunchFileWithPicker(extension);

		GUILayout.Space(15);
		relativeFilePath = GUILayout.TextField(relativeFilePath);
		GUILayout.Label("5. Example: shows how to open a file from application data folder");
		if (GUILayout.Button("Launch via File"))
			UnityEngine.WSA.Launcher.LaunchFile(UnityEngine.WSA.Folder.Installation, relativeFilePath, true);
#else
		GUILayout.Label("Please switch to Windows Store Apps");
#endif
	}
}
