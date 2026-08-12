using UnityEngine;
using System.Collections;

public class Rotate : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		transform.Rotate(Vector3.up, Time.deltaTime * 80.0f);
	}

	void OnGUI()
	{
		GUILayout.Label("Build PC Standalone application to Export folder, and name the executable as Child.exe.");
	}
}
