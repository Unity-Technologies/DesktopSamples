using UnityEngine;
using System.Collections;

public class SimpleScript : MonoBehaviour
{
	// This callback should be set from MainPage.xaml.cs
	public delegate void NavigateBack();
	public static NavigateBack navigateBack;

	private int clickCount = 0;
	private float time = 0.0f;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update ()
	{
		time += Time.deltaTime;
		transform.Rotate(Vector3.up, Time.deltaTime * 20.0f);
		if (Input.GetMouseButtonDown(0))
			clickCount++;
	}

	void OnGUI()
	{
#if UNITY_EDITOR
		GUILayout.Label("Build to Windows Store Apps (SDK 8.1) on top of Export directory");
#endif
		GUILayout.Box("Time: " + time);
		GUILayout.Box(string.Format("{0} x {1} - {2} clicks", Input.mousePosition.x, Input.mousePosition.y, clickCount));
		if (GUILayout.Button("Navigate Back"))
		{
#if UNITY_METRO || UNITY_WSA
			UnityEngine.WSA.Application.InvokeOnUIThread(() =>
			{
				navigateBack();
			}, false);
#endif
		}
	}
}
