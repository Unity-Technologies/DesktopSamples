using UnityEngine;
using System.Collections;

public class XAMLConnection : MonoBehaviour
{
    public Material material;

    public delegate void OnEvent(object arg);

    public OnEvent onEvent = null;

	void Start () 
    {
	
	}
	
	void Update () 
    {
	
	}
    void OnGUI()
    {
        GUI.Label(new Rect(30, 220, 300, 30), "Communication from Unity to XAML");
		if (GUI.Button(new Rect(30, 250, 200, 30), "Send event to XAML"))
        {
            if (onEvent != null) onEvent(this);
        }
    }
}
