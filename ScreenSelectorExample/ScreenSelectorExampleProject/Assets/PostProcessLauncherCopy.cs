#if UNITY_EDITOR

using UnityEngine;
using UnityEditor;
using UnityEditor.Callbacks;
using System.IO;

public class PostProcessLauncherCopy
{
    [PostProcessBuildAttribute(1)]
    public static void OnPostprocessBuild(BuildTarget target, string pathToBuiltProject)
    {
        string dataPath = Path.Combine(Path.GetDirectoryName(pathToBuiltProject), "PersistentDataPath.txt");
        using (StreamWriter file = new StreamWriter(dataPath))
        {
            file.WriteLine(Path.Combine(Application.companyName, Application.productName));
        }

        switch (target)
        {
            case BuildTarget.StandaloneWindows:
                {
                    string launcherDir = Path.Combine(Directory.GetCurrentDirectory(), "LauncherExecutable", "x86", "WindowsPlayer.exe");
                    FileUtil.ReplaceFile(launcherDir, pathToBuiltProject);
                }
                break;

            case BuildTarget.StandaloneWindows64:
                {
                    string launcherDir = Path.Combine(Directory.GetCurrentDirectory(), "LauncherExecutable", "x64", "WindowsPlayer.exe");
                    FileUtil.ReplaceFile(launcherDir, pathToBuiltProject);
                }
                break;

            default:
                break;
        }
    }
}
#endif