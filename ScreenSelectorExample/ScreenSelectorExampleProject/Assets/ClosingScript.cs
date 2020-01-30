using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public class ClosingScript : MonoBehaviour
{
    private void OnApplicationQuit()
    {
        List<string> settings = new List<string>
            {
                "Screenmanager Resolution Width",
                "Screenmanager Resolution Height",
                "Screenmanager Fullscreen mode",
                "Screenmanager Stereo 3D",
                "UnityGraphicsQuality",
                "UnitySelectMonitor"
            };

        using (StreamWriter file = new StreamWriter(Path.Combine(Application.persistentDataPath, "ScreenSelectorPrefs.txt")))
        {
            foreach (string key in settings)
            {
                file.WriteLine(PlayerPrefs.GetInt(key, 0).ToString());
            }
        }
    }
}
