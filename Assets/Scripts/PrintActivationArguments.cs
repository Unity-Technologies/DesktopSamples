using AOT;
using System.Runtime.InteropServices;
using System.Text;
using UnityEngine;

#if ENABLE_WINMD_SUPPORT && UNITY_WSA
using Windows.ApplicationModel.Activation;
#endif

public class PrintActivationArguments : MonoBehaviour
{
#if ENABLE_WINMD_SUPPORT && UNITY_WSA
    delegate void AppActivatedDelegate(IActivatedEventArgs activatedArgs);

    [MonoPInvokeCallback(typeof(AppActivatedDelegate))]
    static void OnAppActivated(IActivatedEventArgs activatedArgs)
    {
        if (UnityEngine.WSA.Application.RunningOnAppThread())
        {
            LogAppActivated(activatedArgs);
        }
        else
        {
            UnityEngine.WSA.Application.InvokeOnAppThread(() =>
            {
                LogAppActivated(activatedArgs);
            }, false);
        }
    }

    private static void LogAppActivated(IActivatedEventArgs activatedArgs)
    {
        var activatedArgsMessage = new StringBuilder();
        activatedArgsMessage.AppendLine("ActivatedEventArgs:");
        activatedArgsMessage.AppendLine("    Kind: ActivationKind." + activatedArgs.Kind);
        activatedArgsMessage.AppendLine("    PreviousExecutionState: ApplicationExecutionState." + activatedArgs.PreviousExecutionState);

        if (activatedArgs.Kind == ActivationKind.Protocol)
        {
            var protocolArgs = (ProtocolActivatedEventArgs)activatedArgs;
            activatedArgsMessage.AppendLine("    ProtocolActivatedEventArgs.Uri: " + protocolArgs.Uri);
        }

        Debug.Log(activatedArgsMessage.ToString());
    }

    [DllImport("__Internal")]
    extern static void SetupActivatedEventCallback(AppActivatedDelegate callback);
#endif

    void Awake()
    {
#if ENABLE_WINMD_SUPPORT && UNITY_WSA
        SetupActivatedEventCallback(OnAppActivated);
#endif
    }
}
