using UnityEngine;
using System.Collections;
using System.Runtime.InteropServices;

public class Example : MonoBehaviour {
	
	[DllImport ("Plugins")]
	private static extern int GetInteger ();
	
	public void OnGUI()
	{
		GUILayout.Label ("GetInteger returns " + GetInteger());
	}
}
