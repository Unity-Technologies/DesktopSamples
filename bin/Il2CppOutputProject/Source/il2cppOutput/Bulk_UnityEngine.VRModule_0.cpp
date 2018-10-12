#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// System.Action`1<UnityEngine.XR.WSA.Input.GestureErrorEventArgs>
struct Action_1_t3114543800;
// System.Action`1<UnityEngine.XR.WSA.Input.HoldCanceledEventArgs>
struct Action_1_t464622055;
// System.Action`1<UnityEngine.XR.WSA.Input.HoldCompletedEventArgs>
struct Action_1_t1168103046;
// System.Action`1<UnityEngine.XR.WSA.Input.HoldStartedEventArgs>
struct Action_1_t3725713036;
// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCanceledEventArgs>
struct Action_1_t765149492;
// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCompletedEventArgs>
struct Action_1_t1957047783;
// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationStartedEventArgs>
struct Action_1_t1288711754;
// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationUpdatedEventArgs>
struct Action_1_t40843125;
// System.Action`1<UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs>
struct Action_1_t3270971242;
// System.Action`1<UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs>
struct Action_1_t341761863;
// System.Action`1<UnityEngine.XR.WSA.Input.NavigationStartedEventArgs>
struct Action_1_t3544757211;
// System.Action`1<UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs>
struct Action_1_t1156518837;
// System.Action`1<UnityEngine.XR.WSA.Input.RecognitionEndedEventArgs>
struct Action_1_t4073128488;
// System.Action`1<UnityEngine.XR.WSA.Input.RecognitionStartedEventArgs>
struct Action_1_t1098359099;
// System.Action`1<UnityEngine.XR.WSA.Input.TappedEventArgs>
struct Action_1_t2902256995;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Delegate
struct Delegate_t1188392813;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Void
struct Void_t1185182177;
// UnityEngine.MeshCollider
struct MeshCollider_t903564387;
// UnityEngine.MeshFilter
struct MeshFilter_t3523625662;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.XR.WSA.Input.GestureRecognizer
struct GestureRecognizer_t1566529591;
// UnityEngine.XR.WSA.Input.GestureRecognizer/GestureErrorDelegate
struct GestureErrorDelegate_t3254371646;
// UnityEngine.XR.WSA.Input.GestureRecognizer/HoldCanceledEventDelegate
struct HoldCanceledEventDelegate_t3242927192;
// UnityEngine.XR.WSA.Input.GestureRecognizer/HoldCompletedEventDelegate
struct HoldCompletedEventDelegate_t4112318659;
// UnityEngine.XR.WSA.Input.GestureRecognizer/HoldStartedEventDelegate
struct HoldStartedEventDelegate_t1669693510;
// UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationCanceledEventDelegate
struct ManipulationCanceledEventDelegate_t3141027694;
// UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationCompletedEventDelegate
struct ManipulationCompletedEventDelegate_t3126788776;
// UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationStartedEventDelegate
struct ManipulationStartedEventDelegate_t1581880091;
// UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationUpdatedEventDelegate
struct ManipulationUpdatedEventDelegate_t2990350064;
// UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationCanceledEventDelegate
struct NavigationCanceledEventDelegate_t2505886250;
// UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationCompletedEventDelegate
struct NavigationCompletedEventDelegate_t3119650473;
// UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationStartedEventDelegate
struct NavigationStartedEventDelegate_t3496816902;
// UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationUpdatedEventDelegate
struct NavigationUpdatedEventDelegate_t2894903996;
// UnityEngine.XR.WSA.Input.GestureRecognizer/RecognitionEndedEventDelegate
struct RecognitionEndedEventDelegate_t2892804592;
// UnityEngine.XR.WSA.Input.GestureRecognizer/RecognitionStartedEventDelegate
struct RecognitionStartedEventDelegate_t3727320336;
// UnityEngine.XR.WSA.Input.GestureRecognizer/TappedEventDelegate
struct TappedEventDelegate_t286622765;
// UnityEngine.XR.WSA.Persistence.WorldAnchorStore
struct WorldAnchorStore_t633400888;
// UnityEngine.XR.WSA.Persistence.WorldAnchorStore/GetAsyncDelegate
struct GetAsyncDelegate_t3153225836;
// UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch
struct WorldAnchorTransferBatch_t2392365061;
// UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch/DeserializationCompleteDelegate
struct DeserializationCompleteDelegate_t3326018783;
// UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch/SerializationCompleteDelegate
struct SerializationCompleteDelegate_t3297462927;
// UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch/SerializationDataAvailableDelegate
struct SerializationDataAvailableDelegate_t503932525;
// UnityEngine.XR.WSA.SurfaceObserver
struct SurfaceObserver_t1930409633;
// UnityEngine.XR.WSA.SurfaceObserver/SurfaceChangedDelegate
struct SurfaceChangedDelegate_t2591813092;
// UnityEngine.XR.WSA.SurfaceObserver/SurfaceDataReadyDelegate
struct SurfaceDataReadyDelegate_t4152308677;
// UnityEngine.XR.WSA.WebCam.PhotoCapture
struct PhotoCapture_t3135222410;
// UnityEngine.XR.WSA.WebCam.PhotoCapture/OnCaptureResourceCreatedCallback
struct OnCaptureResourceCreatedCallback_t3785377276;
// UnityEngine.XR.WSA.WebCam.PhotoCapture/OnCapturedToDiskCallback
struct OnCapturedToDiskCallback_t406265622;
// UnityEngine.XR.WSA.WebCam.PhotoCapture/OnCapturedToMemoryCallback
struct OnCapturedToMemoryCallback_t287362928;
// UnityEngine.XR.WSA.WebCam.PhotoCapture/OnPhotoModeStartedCallback
struct OnPhotoModeStartedCallback_t4210568704;
// UnityEngine.XR.WSA.WebCam.PhotoCapture/OnPhotoModeStoppedCallback
struct OnPhotoModeStoppedCallback_t1205025237;
// UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame
struct PhotoCaptureFrame_t831849718;
// UnityEngine.XR.WSA.WebCam.VideoCapture
struct VideoCapture_t3191060632;
// UnityEngine.XR.WSA.WebCam.VideoCapture/OnStartedRecordingVideoCallback
struct OnStartedRecordingVideoCallback_t3861839134;
// UnityEngine.XR.WSA.WebCam.VideoCapture/OnStoppedRecordingVideoCallback
struct OnStoppedRecordingVideoCallback_t2563676185;
// UnityEngine.XR.WSA.WebCam.VideoCapture/OnVideoCaptureResourceCreatedCallback
struct OnVideoCaptureResourceCreatedCallback_t794232766;
// UnityEngine.XR.WSA.WebCam.VideoCapture/OnVideoModeStartedCallback
struct OnVideoModeStartedCallback_t3407805878;
// UnityEngine.XR.WSA.WebCam.VideoCapture/OnVideoModeStoppedCallback
struct OnVideoModeStoppedCallback_t3606558731;
// UnityEngine.XR.WSA.WorldAnchor
struct WorldAnchor_t2161774153;
// UnityEngine.XR.WSA.WorldAnchor/OnTrackingChangedDelegate
struct OnTrackingChangedDelegate_t3480415086;
// UnityEngine.XR.WSA.WorldManager/OnPositionalLocatorStateChangedDelegate
struct OnPositionalLocatorStateChangedDelegate_t1145932820;

extern RuntimeClass* Action_1_t1098359099_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t1156518837_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t1168103046_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t1288711754_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t1957047783_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t2902256995_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t3114543800_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t3270971242_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t341761863_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t3544757211_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t3725713036_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t4073128488_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t40843125_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t464622055_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t765149492_il2cpp_TypeInfo_var;
extern RuntimeClass* Boolean_t97287965_il2cpp_TypeInfo_var;
extern RuntimeClass* Bounds_t2266837910_il2cpp_TypeInfo_var;
extern RuntimeClass* DateTime_t3738529785_il2cpp_TypeInfo_var;
extern RuntimeClass* GC_t959872083_il2cpp_TypeInfo_var;
extern RuntimeClass* GestureErrorDelegate_t3254371646_il2cpp_TypeInfo_var;
extern RuntimeClass* HoldCanceledEventDelegate_t3242927192_il2cpp_TypeInfo_var;
extern RuntimeClass* HoldCompletedEventDelegate_t4112318659_il2cpp_TypeInfo_var;
extern RuntimeClass* HoldStartedEventDelegate_t1669693510_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
extern RuntimeClass* InteractionSourceKind_t3005082353_il2cpp_TypeInfo_var;
extern RuntimeClass* InteractionSource_t872619030_il2cpp_TypeInfo_var;
extern RuntimeClass* ManipulationCanceledEventDelegate_t3141027694_il2cpp_TypeInfo_var;
extern RuntimeClass* ManipulationCompletedEventDelegate_t3126788776_il2cpp_TypeInfo_var;
extern RuntimeClass* ManipulationStartedEventDelegate_t1581880091_il2cpp_TypeInfo_var;
extern RuntimeClass* ManipulationUpdatedEventDelegate_t2990350064_il2cpp_TypeInfo_var;
extern RuntimeClass* NavigationCanceledEventDelegate_t2505886250_il2cpp_TypeInfo_var;
extern RuntimeClass* NavigationCompletedEventDelegate_t3119650473_il2cpp_TypeInfo_var;
extern RuntimeClass* NavigationStartedEventDelegate_t3496816902_il2cpp_TypeInfo_var;
extern RuntimeClass* NavigationUpdatedEventDelegate_t2894903996_il2cpp_TypeInfo_var;
extern RuntimeClass* Nullable_1_t2595181112_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* PhotoCaptureFrame_t831849718_il2cpp_TypeInfo_var;
extern RuntimeClass* PhotoCaptureResult_t1090015350_il2cpp_TypeInfo_var;
extern RuntimeClass* PhotoCapture_t3135222410_il2cpp_TypeInfo_var;
extern RuntimeClass* PositionalLocatorState_t1296119239_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern RuntimeClass* Ray_t3785851493_il2cpp_TypeInfo_var;
extern RuntimeClass* RecognitionEndedEventDelegate_t2892804592_il2cpp_TypeInfo_var;
extern RuntimeClass* RecognitionStartedEventDelegate_t3727320336_il2cpp_TypeInfo_var;
extern RuntimeClass* SerializationCompletionReason_t2316507860_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern RuntimeClass* SurfaceChange_t1487785866_il2cpp_TypeInfo_var;
extern RuntimeClass* SurfaceData_t200825419_il2cpp_TypeInfo_var;
extern RuntimeClass* SurfaceId_t2999094746_il2cpp_TypeInfo_var;
extern RuntimeClass* TappedEventDelegate_t286622765_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern RuntimeClass* VideoCaptureResult_t880209540_il2cpp_TypeInfo_var;
extern RuntimeClass* VideoCapture_t3191060632_il2cpp_TypeInfo_var;
extern RuntimeClass* WorldAnchorStore_t633400888_il2cpp_TypeInfo_var;
extern RuntimeClass* WorldAnchorTransferBatch_t2392365061_il2cpp_TypeInfo_var;
extern RuntimeClass* WorldManager_t2593341179_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Action_1_Invoke_m1029213443_RuntimeMethod_var;
extern const RuntimeMethod* Action_1_Invoke_m1051473384_RuntimeMethod_var;
extern const RuntimeMethod* Action_1_Invoke_m1389206130_RuntimeMethod_var;
extern const RuntimeMethod* Action_1_Invoke_m1449216168_RuntimeMethod_var;
extern const RuntimeMethod* Action_1_Invoke_m1736012830_RuntimeMethod_var;
extern const RuntimeMethod* Action_1_Invoke_m1848790106_RuntimeMethod_var;
extern const RuntimeMethod* Action_1_Invoke_m2147270457_RuntimeMethod_var;
extern const RuntimeMethod* Action_1_Invoke_m2481529521_RuntimeMethod_var;
extern const RuntimeMethod* Action_1_Invoke_m3105741079_RuntimeMethod_var;
extern const RuntimeMethod* Action_1_Invoke_m3474815515_RuntimeMethod_var;
extern const RuntimeMethod* Action_1_Invoke_m355844915_RuntimeMethod_var;
extern const RuntimeMethod* Action_1_Invoke_m3567823837_RuntimeMethod_var;
extern const RuntimeMethod* Action_1_Invoke_m4120412433_RuntimeMethod_var;
extern const RuntimeMethod* Action_1_Invoke_m635090190_RuntimeMethod_var;
extern const RuntimeMethod* Action_1_Invoke_m671841968_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_get_HasValue_m3483213605_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_get_Value_m3671873047_RuntimeMethod_var;
extern const uint32_t DeserializationCompleteDelegate_BeginInvoke_m518896393_MetadataUsageId;
extern const uint32_t GestureErrorDelegate_BeginInvoke_m2034699318_MetadataUsageId;
extern const uint32_t GestureRecognizer_Dispose_m2018281144_MetadataUsageId;
extern const uint32_t GestureRecognizer_Finalize_m3169068568_MetadataUsageId;
extern const uint32_t GestureRecognizer_InvokeErrorEvent_m2406480045_MetadataUsageId;
extern const uint32_t GestureRecognizer_InvokeHoldCanceled_m3838851892_MetadataUsageId;
extern const uint32_t GestureRecognizer_InvokeHoldCompleted_m2361928871_MetadataUsageId;
extern const uint32_t GestureRecognizer_InvokeHoldStarted_m1401420631_MetadataUsageId;
extern const uint32_t GestureRecognizer_InvokeManipulationCanceled_m3147763940_MetadataUsageId;
extern const uint32_t GestureRecognizer_InvokeManipulationCompleted_m3540372862_MetadataUsageId;
extern const uint32_t GestureRecognizer_InvokeManipulationStarted_m3142003172_MetadataUsageId;
extern const uint32_t GestureRecognizer_InvokeManipulationUpdated_m276703598_MetadataUsageId;
extern const uint32_t GestureRecognizer_InvokeNavigationCanceled_m3125019982_MetadataUsageId;
extern const uint32_t GestureRecognizer_InvokeNavigationCompleted_m892864007_MetadataUsageId;
extern const uint32_t GestureRecognizer_InvokeNavigationStarted_m2566118741_MetadataUsageId;
extern const uint32_t GestureRecognizer_InvokeNavigationUpdated_m422298312_MetadataUsageId;
extern const uint32_t GestureRecognizer_InvokeRecognitionEnded_m4163328125_MetadataUsageId;
extern const uint32_t GestureRecognizer_InvokeRecognitionStarted_m2218284341_MetadataUsageId;
extern const uint32_t GestureRecognizer_InvokeTapped_m341965164_MetadataUsageId;
extern const uint32_t GestureRecognizer_t1566529591_com_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t GestureRecognizer_t1566529591_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t HoldCanceledEventDelegate_BeginInvoke_m303661746_MetadataUsageId;
extern const uint32_t HoldCompletedEventDelegate_BeginInvoke_m3635203122_MetadataUsageId;
extern const uint32_t HoldStartedEventDelegate_BeginInvoke_m732977840_MetadataUsageId;
extern const uint32_t InteractionSource_Equals_m3370649879_MetadataUsageId;
extern const uint32_t ManipulationCanceledEventDelegate_BeginInvoke_m3906507283_MetadataUsageId;
extern const uint32_t ManipulationCompletedEventDelegate_BeginInvoke_m2701514021_MetadataUsageId;
extern const uint32_t ManipulationStartedEventDelegate_BeginInvoke_m3487151117_MetadataUsageId;
extern const uint32_t ManipulationUpdatedEventDelegate_BeginInvoke_m337262976_MetadataUsageId;
extern const uint32_t NavigationCanceledEventDelegate_BeginInvoke_m4001118042_MetadataUsageId;
extern const uint32_t NavigationCompletedEventDelegate_BeginInvoke_m1369223494_MetadataUsageId;
extern const uint32_t NavigationStartedEventDelegate_BeginInvoke_m2025529565_MetadataUsageId;
extern const uint32_t NavigationUpdatedEventDelegate_BeginInvoke_m765171714_MetadataUsageId;
extern const uint32_t OnCapturedToDiskCallback_BeginInvoke_m3179254044_MetadataUsageId;
extern const uint32_t OnCapturedToMemoryCallback_BeginInvoke_m2150099500_MetadataUsageId;
extern const uint32_t OnPhotoModeStartedCallback_BeginInvoke_m3184901267_MetadataUsageId;
extern const uint32_t OnPhotoModeStoppedCallback_BeginInvoke_m3462190928_MetadataUsageId;
extern const uint32_t OnPositionalLocatorStateChangedDelegate_BeginInvoke_m118329416_MetadataUsageId;
extern const uint32_t OnStartedRecordingVideoCallback_BeginInvoke_m3829405792_MetadataUsageId;
extern const uint32_t OnStoppedRecordingVideoCallback_BeginInvoke_m4062312512_MetadataUsageId;
extern const uint32_t OnTrackingChangedDelegate_BeginInvoke_m969530128_MetadataUsageId;
extern const uint32_t OnVideoModeStartedCallback_BeginInvoke_m3782198279_MetadataUsageId;
extern const uint32_t OnVideoModeStoppedCallback_BeginInvoke_m1016876654_MetadataUsageId;
extern const uint32_t PhotoCaptureFrame_Cleanup_m3036154540_MetadataUsageId;
extern const uint32_t PhotoCaptureFrame_Dispose_m3253225398_MetadataUsageId;
extern const uint32_t PhotoCaptureFrame__ctor_m606131785_MetadataUsageId;
extern const uint32_t PhotoCapture_Dispose_m3767860830_MetadataUsageId;
extern const uint32_t PhotoCapture_Finalize_m1628315134_MetadataUsageId;
extern const uint32_t PhotoCapture_InvokeOnCapturedPhotoToDiskDelegate_m4035703221_MetadataUsageId;
extern const uint32_t PhotoCapture_InvokeOnCapturedPhotoToMemoryDelegate_m3004748368_MetadataUsageId;
extern const uint32_t PhotoCapture_InvokeOnCreatedResourceDelegate_m2990079858_MetadataUsageId;
extern const uint32_t PhotoCapture_InvokeOnPhotoModeStartedDelegate_m2733257272_MetadataUsageId;
extern const uint32_t PhotoCapture_InvokeOnPhotoModeStoppedDelegate_m1056175338_MetadataUsageId;
extern const uint32_t PhotoCapture_MakeCaptureResult_m1924927526_MetadataUsageId;
extern const uint32_t PhotoCapture__cctor_m502322675_MetadataUsageId;
extern const uint32_t RecognitionEndedEventDelegate_BeginInvoke_m3427552214_MetadataUsageId;
extern const uint32_t RecognitionStartedEventDelegate_BeginInvoke_m615709693_MetadataUsageId;
extern const uint32_t SerializationCompleteDelegate_BeginInvoke_m833846824_MetadataUsageId;
extern const uint32_t SurfaceChangedDelegate_BeginInvoke_m4041879836_MetadataUsageId;
extern const uint32_t SurfaceDataReadyDelegate_BeginInvoke_m135711948_MetadataUsageId;
extern const uint32_t SurfaceObserver_Dispose_m3692775015_MetadataUsageId;
extern const uint32_t SurfaceObserver_Finalize_m675213516_MetadataUsageId;
extern const uint32_t SurfaceObserver_InvokeSurfaceChangedEvent_m749734495_MetadataUsageId;
extern const uint32_t TappedEventDelegate_BeginInvoke_m3402740888_MetadataUsageId;
extern const uint32_t VideoCapture_Dispose_m1925742270_MetadataUsageId;
extern const uint32_t VideoCapture_Finalize_m1163336295_MetadataUsageId;
extern const uint32_t VideoCapture_InvokeOnCreatedVideoCaptureResourceDelegate_m1534159244_MetadataUsageId;
extern const uint32_t VideoCapture_InvokeOnStartedRecordingVideoToDiskDelegate_m2837517037_MetadataUsageId;
extern const uint32_t VideoCapture_InvokeOnStoppedRecordingVideoToDiskDelegate_m484902260_MetadataUsageId;
extern const uint32_t VideoCapture_InvokeOnVideoModeStartedDelegate_m1608578268_MetadataUsageId;
extern const uint32_t VideoCapture_InvokeOnVideoModeStoppedDelegate_m1194356745_MetadataUsageId;
extern const uint32_t VideoCapture_MakeCaptureResult_m2984416805_MetadataUsageId;
extern const uint32_t VideoCapture__cctor_m2665993362_MetadataUsageId;
extern const uint32_t WorldAnchorStore_Dispose_m1403625064_MetadataUsageId;
extern const uint32_t WorldAnchorStore_InvokeGetAsyncDelegate_m2349742641_MetadataUsageId;
extern const uint32_t WorldAnchorStore__cctor_m91730420_MetadataUsageId;
extern const uint32_t WorldAnchorTransferBatch_Dispose_m337801525_MetadataUsageId;
extern const uint32_t WorldAnchorTransferBatch_Finalize_m3476272275_MetadataUsageId;
extern const uint32_t WorldAnchorTransferBatch_InvokeWorldAnchorDeserializationCompleteDelegate_m1335602964_MetadataUsageId;
extern const uint32_t WorldAnchorTransferBatch__ctor_m1276800205_MetadataUsageId;
extern const uint32_t WorldAnchor_Internal_TriggerEventOnTrackingLost_m2317342579_MetadataUsageId;
extern const uint32_t WorldManager_Internal_TriggerPositionalLocatorStateChanged_m1968051306_MetadataUsageId;
struct PhotoCapture_t3135222410;;
struct PhotoCapture_t3135222410_marshaled_pinvoke;
struct PhotoCapture_t3135222410_marshaled_pinvoke;;
struct VideoCapture_t3191060632;;
struct VideoCapture_t3191060632_marshaled_pinvoke;
struct VideoCapture_t3191060632_marshaled_pinvoke;;
struct WorldAnchorStore_t633400888;;
struct WorldAnchorStore_t633400888_marshaled_pinvoke;
struct WorldAnchorStore_t633400888_marshaled_pinvoke;;
struct WorldAnchorTransferBatch_t2392365061;;
struct WorldAnchorTransferBatch_t2392365061_marshaled_pinvoke;
struct WorldAnchorTransferBatch_t2392365061_marshaled_pinvoke;;

struct ByteU5BU5D_t4116647657;
struct DelegateU5BU5D_t1703627840;


#ifndef U3CMODULEU3E_T692745553_H
#define U3CMODULEU3E_T692745553_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745553 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745553_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef WORLDMANAGER_T2593341179_H
#define WORLDMANAGER_T2593341179_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.WorldManager
struct  WorldManager_t2593341179  : public RuntimeObject
{
public:

public:
};

struct WorldManager_t2593341179_StaticFields
{
public:
	// UnityEngine.XR.WSA.WorldManager/OnPositionalLocatorStateChangedDelegate UnityEngine.XR.WSA.WorldManager::OnPositionalLocatorStateChanged
	OnPositionalLocatorStateChangedDelegate_t1145932820 * ___OnPositionalLocatorStateChanged_0;

public:
	inline static int32_t get_offset_of_OnPositionalLocatorStateChanged_0() { return static_cast<int32_t>(offsetof(WorldManager_t2593341179_StaticFields, ___OnPositionalLocatorStateChanged_0)); }
	inline OnPositionalLocatorStateChangedDelegate_t1145932820 * get_OnPositionalLocatorStateChanged_0() const { return ___OnPositionalLocatorStateChanged_0; }
	inline OnPositionalLocatorStateChangedDelegate_t1145932820 ** get_address_of_OnPositionalLocatorStateChanged_0() { return &___OnPositionalLocatorStateChanged_0; }
	inline void set_OnPositionalLocatorStateChanged_0(OnPositionalLocatorStateChangedDelegate_t1145932820 * value)
	{
		___OnPositionalLocatorStateChanged_0 = value;
		Il2CppCodeGenWriteBarrier((&___OnPositionalLocatorStateChanged_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WORLDMANAGER_T2593341179_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
#ifndef DATETIME_T3738529785_H
#define DATETIME_T3738529785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3738529785 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t3738529785_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t385246372* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t385246372* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3738529785  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3738529785  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t385246372* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t385246372** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t385246372* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth365_29), value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t385246372* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t385246372** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t385246372* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth366_30), value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MinValue_31)); }
	inline DateTime_t3738529785  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t3738529785 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t3738529785  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MaxValue_32)); }
	inline DateTime_t3738529785  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t3738529785 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t3738529785  value)
	{
		___MaxValue_32 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3738529785_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t3528271667* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t3528271667* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t3528271667** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t3528271667* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef UINT16_T2177724958_H
#define UINT16_T2177724958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt16
struct  UInt16_t2177724958 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t2177724958, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16_T2177724958_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t1185182177__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_0;
	// System.Single UnityEngine.Vector3::y
	float ___y_1;
	// System.Single UnityEngine.Vector3::z
	float ___z_2;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_3;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_12;

public:
	inline static int32_t get_offset_of_zeroVector_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_3)); }
	inline Vector3_t3722313464  get_zeroVector_3() const { return ___zeroVector_3; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_3() { return &___zeroVector_3; }
	inline void set_zeroVector_3(Vector3_t3722313464  value)
	{
		___zeroVector_3 = value;
	}

	inline static int32_t get_offset_of_oneVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_4)); }
	inline Vector3_t3722313464  get_oneVector_4() const { return ___oneVector_4; }
	inline Vector3_t3722313464 * get_address_of_oneVector_4() { return &___oneVector_4; }
	inline void set_oneVector_4(Vector3_t3722313464  value)
	{
		___oneVector_4 = value;
	}

	inline static int32_t get_offset_of_upVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_5)); }
	inline Vector3_t3722313464  get_upVector_5() const { return ___upVector_5; }
	inline Vector3_t3722313464 * get_address_of_upVector_5() { return &___upVector_5; }
	inline void set_upVector_5(Vector3_t3722313464  value)
	{
		___upVector_5 = value;
	}

	inline static int32_t get_offset_of_downVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_6)); }
	inline Vector3_t3722313464  get_downVector_6() const { return ___downVector_6; }
	inline Vector3_t3722313464 * get_address_of_downVector_6() { return &___downVector_6; }
	inline void set_downVector_6(Vector3_t3722313464  value)
	{
		___downVector_6 = value;
	}

	inline static int32_t get_offset_of_leftVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_7)); }
	inline Vector3_t3722313464  get_leftVector_7() const { return ___leftVector_7; }
	inline Vector3_t3722313464 * get_address_of_leftVector_7() { return &___leftVector_7; }
	inline void set_leftVector_7(Vector3_t3722313464  value)
	{
		___leftVector_7 = value;
	}

	inline static int32_t get_offset_of_rightVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_8)); }
	inline Vector3_t3722313464  get_rightVector_8() const { return ___rightVector_8; }
	inline Vector3_t3722313464 * get_address_of_rightVector_8() { return &___rightVector_8; }
	inline void set_rightVector_8(Vector3_t3722313464  value)
	{
		___rightVector_8 = value;
	}

	inline static int32_t get_offset_of_forwardVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_9)); }
	inline Vector3_t3722313464  get_forwardVector_9() const { return ___forwardVector_9; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_9() { return &___forwardVector_9; }
	inline void set_forwardVector_9(Vector3_t3722313464  value)
	{
		___forwardVector_9 = value;
	}

	inline static int32_t get_offset_of_backVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_10)); }
	inline Vector3_t3722313464  get_backVector_10() const { return ___backVector_10; }
	inline Vector3_t3722313464 * get_address_of_backVector_10() { return &___backVector_10; }
	inline void set_backVector_10(Vector3_t3722313464  value)
	{
		___backVector_10 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_11)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_11() const { return ___positiveInfinityVector_11; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_11() { return &___positiveInfinityVector_11; }
	inline void set_positiveInfinityVector_11(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_11 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_12)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_12() const { return ___negativeInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_12() { return &___negativeInfinityVector_12; }
	inline void set_negativeInfinityVector_12(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef GESTUREERROREVENTARGS_T2942076205_H
#define GESTUREERROREVENTARGS_T2942076205_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.GestureErrorEventArgs
struct  GestureErrorEventArgs_t2942076205 
{
public:
	// System.String UnityEngine.XR.WSA.Input.GestureErrorEventArgs::<error>k__BackingField
	String_t* ___U3CerrorU3Ek__BackingField_0;
	// System.Int32 UnityEngine.XR.WSA.Input.GestureErrorEventArgs::<hresult>k__BackingField
	int32_t ___U3ChresultU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CerrorU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(GestureErrorEventArgs_t2942076205, ___U3CerrorU3Ek__BackingField_0)); }
	inline String_t* get_U3CerrorU3Ek__BackingField_0() const { return ___U3CerrorU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CerrorU3Ek__BackingField_0() { return &___U3CerrorU3Ek__BackingField_0; }
	inline void set_U3CerrorU3Ek__BackingField_0(String_t* value)
	{
		___U3CerrorU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CerrorU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3ChresultU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(GestureErrorEventArgs_t2942076205, ___U3ChresultU3Ek__BackingField_1)); }
	inline int32_t get_U3ChresultU3Ek__BackingField_1() const { return ___U3ChresultU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3ChresultU3Ek__BackingField_1() { return &___U3ChresultU3Ek__BackingField_1; }
	inline void set_U3ChresultU3Ek__BackingField_1(int32_t value)
	{
		___U3ChresultU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.WSA.Input.GestureErrorEventArgs
struct GestureErrorEventArgs_t2942076205_marshaled_pinvoke
{
	char* ___U3CerrorU3Ek__BackingField_0;
	int32_t ___U3ChresultU3Ek__BackingField_1;
};
// Native definition for COM marshalling of UnityEngine.XR.WSA.Input.GestureErrorEventArgs
struct GestureErrorEventArgs_t2942076205_marshaled_com
{
	Il2CppChar* ___U3CerrorU3Ek__BackingField_0;
	int32_t ___U3ChresultU3Ek__BackingField_1;
};
#endif // GESTUREERROREVENTARGS_T2942076205_H
#ifndef SURFACEID_T2999094746_H
#define SURFACEID_T2999094746_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.SurfaceId
struct  SurfaceId_t2999094746 
{
public:
	// System.Int32 UnityEngine.XR.WSA.SurfaceId::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(SurfaceId_t2999094746, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SURFACEID_T2999094746_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_9)); }
	inline DelegateData_t1677132599 * get_data_9() const { return ___data_9; }
	inline DelegateData_t1677132599 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1677132599 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t1188392813_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t1188392813_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T1188392813_H
#ifndef BOUNDS_T2266837910_H
#define BOUNDS_T2266837910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Bounds
struct  Bounds_t2266837910 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t3722313464  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t3722313464  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t2266837910, ___m_Center_0)); }
	inline Vector3_t3722313464  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t3722313464 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t3722313464  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t2266837910, ___m_Extents_1)); }
	inline Vector3_t3722313464  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t3722313464 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t3722313464  value)
	{
		___m_Extents_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDS_T2266837910_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef POSE_T545244865_H
#define POSE_T545244865_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Pose
struct  Pose_t545244865 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t3722313464  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t2301928331  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t545244865, ___position_0)); }
	inline Vector3_t3722313464  get_position_0() const { return ___position_0; }
	inline Vector3_t3722313464 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t3722313464  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t545244865, ___rotation_1)); }
	inline Quaternion_t2301928331  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t2301928331 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t2301928331  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t545244865_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t545244865  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t545244865_StaticFields, ___k_Identity_2)); }
	inline Pose_t545244865  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t545244865 * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t545244865  value)
	{
		___k_Identity_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSE_T545244865_H
#ifndef RAY_T3785851493_H
#define RAY_T3785851493_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Ray
struct  Ray_t3785851493 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t3722313464  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t3722313464  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t3785851493, ___m_Origin_0)); }
	inline Vector3_t3722313464  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t3722313464 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t3722313464  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t3785851493, ___m_Direction_1)); }
	inline Vector3_t3722313464  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t3722313464 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t3722313464  value)
	{
		___m_Direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAY_T3785851493_H
#ifndef GESTURERECOGNIZER_T1566529591_H
#define GESTURERECOGNIZER_T1566529591_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.GestureRecognizer
struct  GestureRecognizer_t1566529591  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.XR.WSA.Input.GestureRecognizer::m_Recognizer
	intptr_t ___m_Recognizer_0;
	// System.Action`1<UnityEngine.XR.WSA.Input.HoldCanceledEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::HoldCanceled
	Action_1_t464622055 * ___HoldCanceled_1;
	// System.Action`1<UnityEngine.XR.WSA.Input.HoldCompletedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::HoldCompleted
	Action_1_t1168103046 * ___HoldCompleted_2;
	// System.Action`1<UnityEngine.XR.WSA.Input.HoldStartedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::HoldStarted
	Action_1_t3725713036 * ___HoldStarted_3;
	// System.Action`1<UnityEngine.XR.WSA.Input.TappedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::Tapped
	Action_1_t2902256995 * ___Tapped_4;
	// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCanceledEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationCanceled
	Action_1_t765149492 * ___ManipulationCanceled_5;
	// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCompletedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationCompleted
	Action_1_t1957047783 * ___ManipulationCompleted_6;
	// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationStartedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationStarted
	Action_1_t1288711754 * ___ManipulationStarted_7;
	// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationUpdatedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationUpdated
	Action_1_t40843125 * ___ManipulationUpdated_8;
	// System.Action`1<UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationCanceled
	Action_1_t3270971242 * ___NavigationCanceled_9;
	// System.Action`1<UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationCompleted
	Action_1_t341761863 * ___NavigationCompleted_10;
	// System.Action`1<UnityEngine.XR.WSA.Input.NavigationStartedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationStarted
	Action_1_t3544757211 * ___NavigationStarted_11;
	// System.Action`1<UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationUpdated
	Action_1_t1156518837 * ___NavigationUpdated_12;
	// System.Action`1<UnityEngine.XR.WSA.Input.RecognitionEndedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::RecognitionEnded
	Action_1_t4073128488 * ___RecognitionEnded_13;
	// System.Action`1<UnityEngine.XR.WSA.Input.RecognitionStartedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::RecognitionStarted
	Action_1_t1098359099 * ___RecognitionStarted_14;
	// System.Action`1<UnityEngine.XR.WSA.Input.GestureErrorEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::GestureError
	Action_1_t3114543800 * ___GestureError_15;
	// UnityEngine.XR.WSA.Input.GestureRecognizer/HoldCanceledEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::HoldCanceledEvent
	HoldCanceledEventDelegate_t3242927192 * ___HoldCanceledEvent_16;
	// UnityEngine.XR.WSA.Input.GestureRecognizer/HoldCompletedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::HoldCompletedEvent
	HoldCompletedEventDelegate_t4112318659 * ___HoldCompletedEvent_17;
	// UnityEngine.XR.WSA.Input.GestureRecognizer/HoldStartedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::HoldStartedEvent
	HoldStartedEventDelegate_t1669693510 * ___HoldStartedEvent_18;
	// UnityEngine.XR.WSA.Input.GestureRecognizer/TappedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::TappedEvent
	TappedEventDelegate_t286622765 * ___TappedEvent_19;
	// UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationCanceledEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationCanceledEvent
	ManipulationCanceledEventDelegate_t3141027694 * ___ManipulationCanceledEvent_20;
	// UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationCompletedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationCompletedEvent
	ManipulationCompletedEventDelegate_t3126788776 * ___ManipulationCompletedEvent_21;
	// UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationStartedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationStartedEvent
	ManipulationStartedEventDelegate_t1581880091 * ___ManipulationStartedEvent_22;
	// UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationUpdatedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationUpdatedEvent
	ManipulationUpdatedEventDelegate_t2990350064 * ___ManipulationUpdatedEvent_23;
	// UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationCanceledEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationCanceledEvent
	NavigationCanceledEventDelegate_t2505886250 * ___NavigationCanceledEvent_24;
	// UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationCompletedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationCompletedEvent
	NavigationCompletedEventDelegate_t3119650473 * ___NavigationCompletedEvent_25;
	// UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationStartedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationStartedEvent
	NavigationStartedEventDelegate_t3496816902 * ___NavigationStartedEvent_26;
	// UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationUpdatedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationUpdatedEvent
	NavigationUpdatedEventDelegate_t2894903996 * ___NavigationUpdatedEvent_27;
	// UnityEngine.XR.WSA.Input.GestureRecognizer/RecognitionEndedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::RecognitionEndedEvent
	RecognitionEndedEventDelegate_t2892804592 * ___RecognitionEndedEvent_28;
	// UnityEngine.XR.WSA.Input.GestureRecognizer/RecognitionStartedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::RecognitionStartedEvent
	RecognitionStartedEventDelegate_t3727320336 * ___RecognitionStartedEvent_29;
	// UnityEngine.XR.WSA.Input.GestureRecognizer/GestureErrorDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::GestureErrorEvent
	GestureErrorDelegate_t3254371646 * ___GestureErrorEvent_30;

public:
	inline static int32_t get_offset_of_m_Recognizer_0() { return static_cast<int32_t>(offsetof(GestureRecognizer_t1566529591, ___m_Recognizer_0)); }
	inline intptr_t get_m_Recognizer_0() const { return ___m_Recognizer_0; }
	inline intptr_t* get_address_of_m_Recognizer_0() { return &___m_Recognizer_0; }
	inline void set_m_Recognizer_0(intptr_t value)
	{
		___m_Recognizer_0 = value;
	}

	inline static int32_t get_offset_of_HoldCanceled_1() { return static_cast<int32_t>(offsetof(GestureRecognizer_t1566529591, ___HoldCanceled_1)); }
	inline Action_1_t464622055 * get_HoldCanceled_1() const { return ___HoldCanceled_1; }
	inline Action_1_t464622055 ** get_address_of_HoldCanceled_1() { return &___HoldCanceled_1; }
	inline void set_HoldCanceled_1(Action_1_t464622055 * value)
	{
		___HoldCanceled_1 = value;
		Il2CppCodeGenWriteBarrier((&___HoldCanceled_1), value);
	}

	inline static int32_t get_offset_of_HoldCompleted_2() { return static_cast<int32_t>(offsetof(GestureRecognizer_t1566529591, ___HoldCompleted_2)); }
	inline Action_1_t1168103046 * get_HoldCompleted_2() const { return ___HoldCompleted_2; }
	inline Action_1_t1168103046 ** get_address_of_HoldCompleted_2() { return &___HoldCompleted_2; }
	inline void set_HoldCompleted_2(Action_1_t1168103046 * value)
	{
		___HoldCompleted_2 = value;
		Il2CppCodeGenWriteBarrier((&___HoldCompleted_2), value);
	}

	inline static int32_t get_offset_of_HoldStarted_3() { return static_cast<int32_t>(offsetof(GestureRecognizer_t1566529591, ___HoldStarted_3)); }
	inline Action_1_t3725713036 * get_HoldStarted_3() const { return ___HoldStarted_3; }
	inline Action_1_t3725713036 ** get_address_of_HoldStarted_3() { return &___HoldStarted_3; }
	inline void set_HoldStarted_3(Action_1_t3725713036 * value)
	{
		___HoldStarted_3 = value;
		Il2CppCodeGenWriteBarrier((&___HoldStarted_3), value);
	}

	inline static int32_t get_offset_of_Tapped_4() { return static_cast<int32_t>(offsetof(GestureRecognizer_t1566529591, ___Tapped_4)); }
	inline Action_1_t2902256995 * get_Tapped_4() const { return ___Tapped_4; }
	inline Action_1_t2902256995 ** get_address_of_Tapped_4() { return &___Tapped_4; }
	inline void set_Tapped_4(Action_1_t2902256995 * value)
	{
		___Tapped_4 = value;
		Il2CppCodeGenWriteBarrier((&___Tapped_4), value);
	}

	inline static int32_t get_offset_of_ManipulationCanceled_5() { return static_cast<int32_t>(offsetof(GestureRecognizer_t1566529591, ___ManipulationCanceled_5)); }
	inline Action_1_t765149492 * get_ManipulationCanceled_5() const { return ___ManipulationCanceled_5; }
	inline Action_1_t765149492 ** get_address_of_ManipulationCanceled_5() { return &___ManipulationCanceled_5; }
	inline void set_ManipulationCanceled_5(Action_1_t765149492 * value)
	{
		___ManipulationCanceled_5 = value;
		Il2CppCodeGenWriteBarrier((&___ManipulationCanceled_5), value);
	}

	inline static int32_t get_offset_of_ManipulationCompleted_6() { return static_cast<int32_t>(offsetof(GestureRecognizer_t1566529591, ___ManipulationCompleted_6)); }
	inline Action_1_t1957047783 * get_ManipulationCompleted_6() const { return ___ManipulationCompleted_6; }
	inline Action_1_t1957047783 ** get_address_of_ManipulationCompleted_6() { return &___ManipulationCompleted_6; }
	inline void set_ManipulationCompleted_6(Action_1_t1957047783 * value)
	{
		___ManipulationCompleted_6 = value;
		Il2CppCodeGenWriteBarrier((&___ManipulationCompleted_6), value);
	}

	inline static int32_t get_offset_of_ManipulationStarted_7() { return static_cast<int32_t>(offsetof(GestureRecognizer_t1566529591, ___ManipulationStarted_7)); }
	inline Action_1_t1288711754 * get_ManipulationStarted_7() const { return ___ManipulationStarted_7; }
	inline Action_1_t1288711754 ** get_address_of_ManipulationStarted_7() { return &___ManipulationStarted_7; }
	inline void set_ManipulationStarted_7(Action_1_t1288711754 * value)
	{
		___ManipulationStarted_7 = value;
		Il2CppCodeGenWriteBarrier((&___ManipulationStarted_7), value);
	}

	inline static int32_t get_offset_of_ManipulationUpdated_8() { return static_cast<int32_t>(offsetof(GestureRecognizer_t1566529591, ___ManipulationUpdated_8)); }
	inline Action_1_t40843125 * get_ManipulationUpdated_8() const { return ___ManipulationUpdated_8; }
	inline Action_1_t40843125 ** get_address_of_ManipulationUpdated_8() { return &___ManipulationUpdated_8; }
	inline void set_ManipulationUpdated_8(Action_1_t40843125 * value)
	{
		___ManipulationUpdated_8 = value;
		Il2CppCodeGenWriteBarrier((&___ManipulationUpdated_8), value);
	}

	inline static int32_t get_offset_of_NavigationCanceled_9() { return static_cast<int32_t>(offsetof(GestureRecognizer_t1566529591, ___NavigationCanceled_9)); }
	inline Action_1_t3270971242 * get_NavigationCanceled_9() const { return ___NavigationCanceled_9; }
	inline Action_1_t3270971242 ** get_address_of_NavigationCanceled_9() { return &___NavigationCanceled_9; }
	inline void set_NavigationCanceled_9(Action_1_t3270971242 * value)
	{
		___NavigationCanceled_9 = value;
		Il2CppCodeGenWriteBarrier((&___NavigationCanceled_9), value);
	}

	inline static int32_t get_offset_of_NavigationCompleted_10() { return static_cast<int32_t>(offsetof(GestureRecognizer_t1566529591, ___NavigationCompleted_10)); }
	inline Action_1_t341761863 * get_NavigationCompleted_10() const { return ___NavigationCompleted_10; }
	inline Action_1_t341761863 ** get_address_of_NavigationCompleted_10() { return &___NavigationCompleted_10; }
	inline void set_NavigationCompleted_10(Action_1_t341761863 * value)
	{
		___NavigationCompleted_10 = value;
		Il2CppCodeGenWriteBarrier((&___NavigationCompleted_10), value);
	}

	inline static int32_t get_offset_of_NavigationStarted_11() { return static_cast<int32_t>(offsetof(GestureRecognizer_t1566529591, ___NavigationStarted_11)); }
	inline Action_1_t3544757211 * get_NavigationStarted_11() const { return ___NavigationStarted_11; }
	inline Action_1_t3544757211 ** get_address_of_NavigationStarted_11() { return &___NavigationStarted_11; }
	inline void set_NavigationStarted_11(Action_1_t3544757211 * value)
	{
		___NavigationStarted_11 = value;
		Il2CppCodeGenWriteBarrier((&___NavigationStarted_11), value);
	}

	inline static int32_t get_offset_of_NavigationUpdated_12() { return static_cast<int32_t>(offsetof(GestureRecognizer_t1566529591, ___NavigationUpdated_12)); }
	inline Action_1_t1156518837 * get_NavigationUpdated_12() const { return ___NavigationUpdated_12; }
	inline Action_1_t1156518837 ** get_address_of_NavigationUpdated_12() { return &___NavigationUpdated_12; }
	inline void set_NavigationUpdated_12(Action_1_t1156518837 * value)
	{
		___NavigationUpdated_12 = value;
		Il2CppCodeGenWriteBarrier((&___NavigationUpdated_12), value);
	}

	inline static int32_t get_offset_of_RecognitionEnded_13() { return static_cast<int32_t>(offsetof(GestureRecognizer_t1566529591, ___RecognitionEnded_13)); }
	inline Action_1_t4073128488 * get_RecognitionEnded_13() const { return ___RecognitionEnded_13; }
	inline Action_1_t4073128488 ** get_address_of_RecognitionEnded_13() { return &___RecognitionEnded_13; }
	inline void set_RecognitionEnded_13(Action_1_t4073128488 * value)
	{
		___RecognitionEnded_13 = value;
		Il2CppCodeGenWriteBarrier((&___RecognitionEnded_13), value);
	}

	inline static int32_t get_offset_of_RecognitionStarted_14() { return static_cast<int32_t>(offsetof(GestureRecognizer_t1566529591, ___RecognitionStarted_14)); }
	inline Action_1_t1098359099 * get_RecognitionStarted_14() const { return ___RecognitionStarted_14; }
	inline Action_1_t1098359099 ** get_address_of_RecognitionStarted_14() { return &___RecognitionStarted_14; }
	inline void set_RecognitionStarted_14(Action_1_t1098359099 * value)
	{
		___RecognitionStarted_14 = value;
		Il2CppCodeGenWriteBarrier((&___RecognitionStarted_14), value);
	}

	inline static int32_t get_offset_of_GestureError_15() { return static_cast<int32_t>(offsetof(GestureRecognizer_t1566529591, ___GestureError_15)); }
	inline Action_1_t3114543800 * get_GestureError_15() const { return ___GestureError_15; }
	inline Action_1_t3114543800 ** get_address_of_GestureError_15() { return &___GestureError_15; }
	inline void set_GestureError_15(Action_1_t3114543800 * value)
	{
		___GestureError_15 = value;
		Il2CppCodeGenWriteBarrier((&___GestureError_15), value);
	}

	inline static int32_t get_offset_of_HoldCanceledEvent_16() { return static_cast<int32_t>(offsetof(GestureRecognizer_t1566529591, ___HoldCanceledEvent_16)); }
	inline HoldCanceledEventDelegate_t3242927192 * get_HoldCanceledEvent_16() const { return ___HoldCanceledEvent_16; }
	inline HoldCanceledEventDelegate_t3242927192 ** get_address_of_HoldCanceledEvent_16() { return &___HoldCanceledEvent_16; }
	inline void set_HoldCanceledEvent_16(HoldCanceledEventDelegate_t3242927192 * value)
	{
		___HoldCanceledEvent_16 = value;
		Il2CppCodeGenWriteBarrier((&___HoldCanceledEvent_16), value);
	}

	inline static int32_t get_offset_of_HoldCompletedEvent_17() { return static_cast<int32_t>(offsetof(GestureRecognizer_t1566529591, ___HoldCompletedEvent_17)); }
	inline HoldCompletedEventDelegate_t4112318659 * get_HoldCompletedEvent_17() const { return ___HoldCompletedEvent_17; }
	inline HoldCompletedEventDelegate_t4112318659 ** get_address_of_HoldCompletedEvent_17() { return &___HoldCompletedEvent_17; }
	inline void set_HoldCompletedEvent_17(HoldCompletedEventDelegate_t4112318659 * value)
	{
		___HoldCompletedEvent_17 = value;
		Il2CppCodeGenWriteBarrier((&___HoldCompletedEvent_17), value);
	}

	inline static int32_t get_offset_of_HoldStartedEvent_18() { return static_cast<int32_t>(offsetof(GestureRecognizer_t1566529591, ___HoldStartedEvent_18)); }
	inline HoldStartedEventDelegate_t1669693510 * get_HoldStartedEvent_18() const { return ___HoldStartedEvent_18; }
	inline HoldStartedEventDelegate_t1669693510 ** get_address_of_HoldStartedEvent_18() { return &___HoldStartedEvent_18; }
	inline void set_HoldStartedEvent_18(HoldStartedEventDelegate_t1669693510 * value)
	{
		___HoldStartedEvent_18 = value;
		Il2CppCodeGenWriteBarrier((&___HoldStartedEvent_18), value);
	}

	inline static int32_t get_offset_of_TappedEvent_19() { return static_cast<int32_t>(offsetof(GestureRecognizer_t1566529591, ___TappedEvent_19)); }
	inline TappedEventDelegate_t286622765 * get_TappedEvent_19() const { return ___TappedEvent_19; }
	inline TappedEventDelegate_t286622765 ** get_address_of_TappedEvent_19() { return &___TappedEvent_19; }
	inline void set_TappedEvent_19(TappedEventDelegate_t286622765 * value)
	{
		___TappedEvent_19 = value;
		Il2CppCodeGenWriteBarrier((&___TappedEvent_19), value);
	}

	inline static int32_t get_offset_of_ManipulationCanceledEvent_20() { return static_cast<int32_t>(offsetof(GestureRecognizer_t1566529591, ___ManipulationCanceledEvent_20)); }
	inline ManipulationCanceledEventDelegate_t3141027694 * get_ManipulationCanceledEvent_20() const { return ___ManipulationCanceledEvent_20; }
	inline ManipulationCanceledEventDelegate_t3141027694 ** get_address_of_ManipulationCanceledEvent_20() { return &___ManipulationCanceledEvent_20; }
	inline void set_ManipulationCanceledEvent_20(ManipulationCanceledEventDelegate_t3141027694 * value)
	{
		___ManipulationCanceledEvent_20 = value;
		Il2CppCodeGenWriteBarrier((&___ManipulationCanceledEvent_20), value);
	}

	inline static int32_t get_offset_of_ManipulationCompletedEvent_21() { return static_cast<int32_t>(offsetof(GestureRecognizer_t1566529591, ___ManipulationCompletedEvent_21)); }
	inline ManipulationCompletedEventDelegate_t3126788776 * get_ManipulationCompletedEvent_21() const { return ___ManipulationCompletedEvent_21; }
	inline ManipulationCompletedEventDelegate_t3126788776 ** get_address_of_ManipulationCompletedEvent_21() { return &___ManipulationCompletedEvent_21; }
	inline void set_ManipulationCompletedEvent_21(ManipulationCompletedEventDelegate_t3126788776 * value)
	{
		___ManipulationCompletedEvent_21 = value;
		Il2CppCodeGenWriteBarrier((&___ManipulationCompletedEvent_21), value);
	}

	inline static int32_t get_offset_of_ManipulationStartedEvent_22() { return static_cast<int32_t>(offsetof(GestureRecognizer_t1566529591, ___ManipulationStartedEvent_22)); }
	inline ManipulationStartedEventDelegate_t1581880091 * get_ManipulationStartedEvent_22() const { return ___ManipulationStartedEvent_22; }
	inline ManipulationStartedEventDelegate_t1581880091 ** get_address_of_ManipulationStartedEvent_22() { return &___ManipulationStartedEvent_22; }
	inline void set_ManipulationStartedEvent_22(ManipulationStartedEventDelegate_t1581880091 * value)
	{
		___ManipulationStartedEvent_22 = value;
		Il2CppCodeGenWriteBarrier((&___ManipulationStartedEvent_22), value);
	}

	inline static int32_t get_offset_of_ManipulationUpdatedEvent_23() { return static_cast<int32_t>(offsetof(GestureRecognizer_t1566529591, ___ManipulationUpdatedEvent_23)); }
	inline ManipulationUpdatedEventDelegate_t2990350064 * get_ManipulationUpdatedEvent_23() const { return ___ManipulationUpdatedEvent_23; }
	inline ManipulationUpdatedEventDelegate_t2990350064 ** get_address_of_ManipulationUpdatedEvent_23() { return &___ManipulationUpdatedEvent_23; }
	inline void set_ManipulationUpdatedEvent_23(ManipulationUpdatedEventDelegate_t2990350064 * value)
	{
		___ManipulationUpdatedEvent_23 = value;
		Il2CppCodeGenWriteBarrier((&___ManipulationUpdatedEvent_23), value);
	}

	inline static int32_t get_offset_of_NavigationCanceledEvent_24() { return static_cast<int32_t>(offsetof(GestureRecognizer_t1566529591, ___NavigationCanceledEvent_24)); }
	inline NavigationCanceledEventDelegate_t2505886250 * get_NavigationCanceledEvent_24() const { return ___NavigationCanceledEvent_24; }
	inline NavigationCanceledEventDelegate_t2505886250 ** get_address_of_NavigationCanceledEvent_24() { return &___NavigationCanceledEvent_24; }
	inline void set_NavigationCanceledEvent_24(NavigationCanceledEventDelegate_t2505886250 * value)
	{
		___NavigationCanceledEvent_24 = value;
		Il2CppCodeGenWriteBarrier((&___NavigationCanceledEvent_24), value);
	}

	inline static int32_t get_offset_of_NavigationCompletedEvent_25() { return static_cast<int32_t>(offsetof(GestureRecognizer_t1566529591, ___NavigationCompletedEvent_25)); }
	inline NavigationCompletedEventDelegate_t3119650473 * get_NavigationCompletedEvent_25() const { return ___NavigationCompletedEvent_25; }
	inline NavigationCompletedEventDelegate_t3119650473 ** get_address_of_NavigationCompletedEvent_25() { return &___NavigationCompletedEvent_25; }
	inline void set_NavigationCompletedEvent_25(NavigationCompletedEventDelegate_t3119650473 * value)
	{
		___NavigationCompletedEvent_25 = value;
		Il2CppCodeGenWriteBarrier((&___NavigationCompletedEvent_25), value);
	}

	inline static int32_t get_offset_of_NavigationStartedEvent_26() { return static_cast<int32_t>(offsetof(GestureRecognizer_t1566529591, ___NavigationStartedEvent_26)); }
	inline NavigationStartedEventDelegate_t3496816902 * get_NavigationStartedEvent_26() const { return ___NavigationStartedEvent_26; }
	inline NavigationStartedEventDelegate_t3496816902 ** get_address_of_NavigationStartedEvent_26() { return &___NavigationStartedEvent_26; }
	inline void set_NavigationStartedEvent_26(NavigationStartedEventDelegate_t3496816902 * value)
	{
		___NavigationStartedEvent_26 = value;
		Il2CppCodeGenWriteBarrier((&___NavigationStartedEvent_26), value);
	}

	inline static int32_t get_offset_of_NavigationUpdatedEvent_27() { return static_cast<int32_t>(offsetof(GestureRecognizer_t1566529591, ___NavigationUpdatedEvent_27)); }
	inline NavigationUpdatedEventDelegate_t2894903996 * get_NavigationUpdatedEvent_27() const { return ___NavigationUpdatedEvent_27; }
	inline NavigationUpdatedEventDelegate_t2894903996 ** get_address_of_NavigationUpdatedEvent_27() { return &___NavigationUpdatedEvent_27; }
	inline void set_NavigationUpdatedEvent_27(NavigationUpdatedEventDelegate_t2894903996 * value)
	{
		___NavigationUpdatedEvent_27 = value;
		Il2CppCodeGenWriteBarrier((&___NavigationUpdatedEvent_27), value);
	}

	inline static int32_t get_offset_of_RecognitionEndedEvent_28() { return static_cast<int32_t>(offsetof(GestureRecognizer_t1566529591, ___RecognitionEndedEvent_28)); }
	inline RecognitionEndedEventDelegate_t2892804592 * get_RecognitionEndedEvent_28() const { return ___RecognitionEndedEvent_28; }
	inline RecognitionEndedEventDelegate_t2892804592 ** get_address_of_RecognitionEndedEvent_28() { return &___RecognitionEndedEvent_28; }
	inline void set_RecognitionEndedEvent_28(RecognitionEndedEventDelegate_t2892804592 * value)
	{
		___RecognitionEndedEvent_28 = value;
		Il2CppCodeGenWriteBarrier((&___RecognitionEndedEvent_28), value);
	}

	inline static int32_t get_offset_of_RecognitionStartedEvent_29() { return static_cast<int32_t>(offsetof(GestureRecognizer_t1566529591, ___RecognitionStartedEvent_29)); }
	inline RecognitionStartedEventDelegate_t3727320336 * get_RecognitionStartedEvent_29() const { return ___RecognitionStartedEvent_29; }
	inline RecognitionStartedEventDelegate_t3727320336 ** get_address_of_RecognitionStartedEvent_29() { return &___RecognitionStartedEvent_29; }
	inline void set_RecognitionStartedEvent_29(RecognitionStartedEventDelegate_t3727320336 * value)
	{
		___RecognitionStartedEvent_29 = value;
		Il2CppCodeGenWriteBarrier((&___RecognitionStartedEvent_29), value);
	}

	inline static int32_t get_offset_of_GestureErrorEvent_30() { return static_cast<int32_t>(offsetof(GestureRecognizer_t1566529591, ___GestureErrorEvent_30)); }
	inline GestureErrorDelegate_t3254371646 * get_GestureErrorEvent_30() const { return ___GestureErrorEvent_30; }
	inline GestureErrorDelegate_t3254371646 ** get_address_of_GestureErrorEvent_30() { return &___GestureErrorEvent_30; }
	inline void set_GestureErrorEvent_30(GestureErrorDelegate_t3254371646 * value)
	{
		___GestureErrorEvent_30 = value;
		Il2CppCodeGenWriteBarrier((&___GestureErrorEvent_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.WSA.Input.GestureRecognizer
struct GestureRecognizer_t1566529591_marshaled_pinvoke
{
	intptr_t ___m_Recognizer_0;
	Il2CppMethodPointer ___HoldCanceled_1;
	Il2CppMethodPointer ___HoldCompleted_2;
	Il2CppMethodPointer ___HoldStarted_3;
	Il2CppMethodPointer ___Tapped_4;
	Il2CppMethodPointer ___ManipulationCanceled_5;
	Il2CppMethodPointer ___ManipulationCompleted_6;
	Il2CppMethodPointer ___ManipulationStarted_7;
	Il2CppMethodPointer ___ManipulationUpdated_8;
	Il2CppMethodPointer ___NavigationCanceled_9;
	Il2CppMethodPointer ___NavigationCompleted_10;
	Il2CppMethodPointer ___NavigationStarted_11;
	Il2CppMethodPointer ___NavigationUpdated_12;
	Il2CppMethodPointer ___RecognitionEnded_13;
	Il2CppMethodPointer ___RecognitionStarted_14;
	Il2CppMethodPointer ___GestureError_15;
	Il2CppMethodPointer ___HoldCanceledEvent_16;
	Il2CppMethodPointer ___HoldCompletedEvent_17;
	Il2CppMethodPointer ___HoldStartedEvent_18;
	Il2CppMethodPointer ___TappedEvent_19;
	Il2CppMethodPointer ___ManipulationCanceledEvent_20;
	Il2CppMethodPointer ___ManipulationCompletedEvent_21;
	Il2CppMethodPointer ___ManipulationStartedEvent_22;
	Il2CppMethodPointer ___ManipulationUpdatedEvent_23;
	Il2CppMethodPointer ___NavigationCanceledEvent_24;
	Il2CppMethodPointer ___NavigationCompletedEvent_25;
	Il2CppMethodPointer ___NavigationStartedEvent_26;
	Il2CppMethodPointer ___NavigationUpdatedEvent_27;
	Il2CppMethodPointer ___RecognitionEndedEvent_28;
	Il2CppMethodPointer ___RecognitionStartedEvent_29;
	Il2CppMethodPointer ___GestureErrorEvent_30;
};
// Native definition for COM marshalling of UnityEngine.XR.WSA.Input.GestureRecognizer
struct GestureRecognizer_t1566529591_marshaled_com
{
	intptr_t ___m_Recognizer_0;
	Il2CppMethodPointer ___HoldCanceled_1;
	Il2CppMethodPointer ___HoldCompleted_2;
	Il2CppMethodPointer ___HoldStarted_3;
	Il2CppMethodPointer ___Tapped_4;
	Il2CppMethodPointer ___ManipulationCanceled_5;
	Il2CppMethodPointer ___ManipulationCompleted_6;
	Il2CppMethodPointer ___ManipulationStarted_7;
	Il2CppMethodPointer ___ManipulationUpdated_8;
	Il2CppMethodPointer ___NavigationCanceled_9;
	Il2CppMethodPointer ___NavigationCompleted_10;
	Il2CppMethodPointer ___NavigationStarted_11;
	Il2CppMethodPointer ___NavigationUpdated_12;
	Il2CppMethodPointer ___RecognitionEnded_13;
	Il2CppMethodPointer ___RecognitionStarted_14;
	Il2CppMethodPointer ___GestureError_15;
	Il2CppMethodPointer ___HoldCanceledEvent_16;
	Il2CppMethodPointer ___HoldCompletedEvent_17;
	Il2CppMethodPointer ___HoldStartedEvent_18;
	Il2CppMethodPointer ___TappedEvent_19;
	Il2CppMethodPointer ___ManipulationCanceledEvent_20;
	Il2CppMethodPointer ___ManipulationCompletedEvent_21;
	Il2CppMethodPointer ___ManipulationStartedEvent_22;
	Il2CppMethodPointer ___ManipulationUpdatedEvent_23;
	Il2CppMethodPointer ___NavigationCanceledEvent_24;
	Il2CppMethodPointer ___NavigationCompletedEvent_25;
	Il2CppMethodPointer ___NavigationStartedEvent_26;
	Il2CppMethodPointer ___NavigationUpdatedEvent_27;
	Il2CppMethodPointer ___RecognitionEndedEvent_28;
	Il2CppMethodPointer ___RecognitionStartedEvent_29;
	Il2CppMethodPointer ___GestureErrorEvent_30;
};
#endif // GESTURERECOGNIZER_T1566529591_H
#ifndef INTERACTIONSOURCEFLAGS_T1798650303_H
#define INTERACTIONSOURCEFLAGS_T1798650303_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.InteractionSourceFlags
struct  InteractionSourceFlags_t1798650303 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionSourceFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourceFlags_t1798650303, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERACTIONSOURCEFLAGS_T1798650303_H
#ifndef INTERACTIONSOURCEHANDEDNESS_T3096408347_H
#define INTERACTIONSOURCEHANDEDNESS_T3096408347_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.InteractionSourceHandedness
struct  InteractionSourceHandedness_t3096408347 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionSourceHandedness::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourceHandedness_t3096408347, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERACTIONSOURCEHANDEDNESS_T3096408347_H
#ifndef INTERACTIONSOURCEKIND_T3005082353_H
#define INTERACTIONSOURCEKIND_T3005082353_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.InteractionSourceKind
struct  InteractionSourceKind_t3005082353 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionSourceKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourceKind_t3005082353, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERACTIONSOURCEKIND_T3005082353_H
#ifndef INTERACTIONSOURCEPOSEFLAGS_T2451043420_H
#define INTERACTIONSOURCEPOSEFLAGS_T2451043420_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.InteractionSourcePoseFlags
struct  InteractionSourcePoseFlags_t2451043420 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionSourcePoseFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourcePoseFlags_t2451043420, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERACTIONSOURCEPOSEFLAGS_T2451043420_H
#ifndef INTERACTIONSOURCEPOSITIONACCURACY_T1863622708_H
#define INTERACTIONSOURCEPOSITIONACCURACY_T1863622708_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.InteractionSourcePositionAccuracy
struct  InteractionSourcePositionAccuracy_t1863622708 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionSourcePositionAccuracy::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourcePositionAccuracy_t1863622708, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERACTIONSOURCEPOSITIONACCURACY_T1863622708_H
#ifndef INTERACTIONSOURCESTATEFLAGS_T3764589998_H
#define INTERACTIONSOURCESTATEFLAGS_T3764589998_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.InteractionSourceStateFlags
struct  InteractionSourceStateFlags_t3764589998 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionSourceStateFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourceStateFlags_t3764589998, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERACTIONSOURCESTATEFLAGS_T3764589998_H
#ifndef WORLDANCHORSTORE_T633400888_H
#define WORLDANCHORSTORE_T633400888_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Persistence.WorldAnchorStore
struct  WorldAnchorStore_t633400888  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.XR.WSA.Persistence.WorldAnchorStore::m_NativePtr
	intptr_t ___m_NativePtr_0;

public:
	inline static int32_t get_offset_of_m_NativePtr_0() { return static_cast<int32_t>(offsetof(WorldAnchorStore_t633400888, ___m_NativePtr_0)); }
	inline intptr_t get_m_NativePtr_0() const { return ___m_NativePtr_0; }
	inline intptr_t* get_address_of_m_NativePtr_0() { return &___m_NativePtr_0; }
	inline void set_m_NativePtr_0(intptr_t value)
	{
		___m_NativePtr_0 = value;
	}
};

struct WorldAnchorStore_t633400888_StaticFields
{
public:
	// UnityEngine.XR.WSA.Persistence.WorldAnchorStore UnityEngine.XR.WSA.Persistence.WorldAnchorStore::s_Instance
	WorldAnchorStore_t633400888 * ___s_Instance_1;

public:
	inline static int32_t get_offset_of_s_Instance_1() { return static_cast<int32_t>(offsetof(WorldAnchorStore_t633400888_StaticFields, ___s_Instance_1)); }
	inline WorldAnchorStore_t633400888 * get_s_Instance_1() const { return ___s_Instance_1; }
	inline WorldAnchorStore_t633400888 ** get_address_of_s_Instance_1() { return &___s_Instance_1; }
	inline void set_s_Instance_1(WorldAnchorStore_t633400888 * value)
	{
		___s_Instance_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_Instance_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.WSA.Persistence.WorldAnchorStore
struct WorldAnchorStore_t633400888_marshaled_pinvoke
{
	intptr_t ___m_NativePtr_0;
};
// Native definition for COM marshalling of UnityEngine.XR.WSA.Persistence.WorldAnchorStore
struct WorldAnchorStore_t633400888_marshaled_com
{
	intptr_t ___m_NativePtr_0;
};
#endif // WORLDANCHORSTORE_T633400888_H
#ifndef POSITIONALLOCATORSTATE_T1296119239_H
#define POSITIONALLOCATORSTATE_T1296119239_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.PositionalLocatorState
struct  PositionalLocatorState_t1296119239 
{
public:
	// System.Int32 UnityEngine.XR.WSA.PositionalLocatorState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PositionalLocatorState_t1296119239, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSITIONALLOCATORSTATE_T1296119239_H
#ifndef SERIALIZATIONCOMPLETIONREASON_T2316507860_H
#define SERIALIZATIONCOMPLETIONREASON_T2316507860_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Sharing.SerializationCompletionReason
struct  SerializationCompletionReason_t2316507860 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Sharing.SerializationCompletionReason::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SerializationCompletionReason_t2316507860, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONCOMPLETIONREASON_T2316507860_H
#ifndef WORLDANCHORTRANSFERBATCH_T2392365061_H
#define WORLDANCHORTRANSFERBATCH_T2392365061_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch
struct  WorldAnchorTransferBatch_t2392365061  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::m_NativePtr
	intptr_t ___m_NativePtr_0;

public:
	inline static int32_t get_offset_of_m_NativePtr_0() { return static_cast<int32_t>(offsetof(WorldAnchorTransferBatch_t2392365061, ___m_NativePtr_0)); }
	inline intptr_t get_m_NativePtr_0() const { return ___m_NativePtr_0; }
	inline intptr_t* get_address_of_m_NativePtr_0() { return &___m_NativePtr_0; }
	inline void set_m_NativePtr_0(intptr_t value)
	{
		___m_NativePtr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch
struct WorldAnchorTransferBatch_t2392365061_marshaled_pinvoke
{
	intptr_t ___m_NativePtr_0;
};
// Native definition for COM marshalling of UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch
struct WorldAnchorTransferBatch_t2392365061_marshaled_com
{
	intptr_t ___m_NativePtr_0;
};
#endif // WORLDANCHORTRANSFERBATCH_T2392365061_H
#ifndef SURFACECHANGE_T1487785866_H
#define SURFACECHANGE_T1487785866_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.SurfaceChange
struct  SurfaceChange_t1487785866 
{
public:
	// System.Int32 UnityEngine.XR.WSA.SurfaceChange::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SurfaceChange_t1487785866, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SURFACECHANGE_T1487785866_H
#ifndef SURFACEDATA_T200825419_H
#define SURFACEDATA_T200825419_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.SurfaceData
struct  SurfaceData_t200825419 
{
public:
	// UnityEngine.XR.WSA.SurfaceId UnityEngine.XR.WSA.SurfaceData::id
	SurfaceId_t2999094746  ___id_0;
	// UnityEngine.MeshFilter UnityEngine.XR.WSA.SurfaceData::outputMesh
	MeshFilter_t3523625662 * ___outputMesh_1;
	// UnityEngine.XR.WSA.WorldAnchor UnityEngine.XR.WSA.SurfaceData::outputAnchor
	WorldAnchor_t2161774153 * ___outputAnchor_2;
	// UnityEngine.MeshCollider UnityEngine.XR.WSA.SurfaceData::outputCollider
	MeshCollider_t903564387 * ___outputCollider_3;
	// System.Single UnityEngine.XR.WSA.SurfaceData::trianglesPerCubicMeter
	float ___trianglesPerCubicMeter_4;
	// System.Boolean UnityEngine.XR.WSA.SurfaceData::bakeCollider
	bool ___bakeCollider_5;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(SurfaceData_t200825419, ___id_0)); }
	inline SurfaceId_t2999094746  get_id_0() const { return ___id_0; }
	inline SurfaceId_t2999094746 * get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(SurfaceId_t2999094746  value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_outputMesh_1() { return static_cast<int32_t>(offsetof(SurfaceData_t200825419, ___outputMesh_1)); }
	inline MeshFilter_t3523625662 * get_outputMesh_1() const { return ___outputMesh_1; }
	inline MeshFilter_t3523625662 ** get_address_of_outputMesh_1() { return &___outputMesh_1; }
	inline void set_outputMesh_1(MeshFilter_t3523625662 * value)
	{
		___outputMesh_1 = value;
		Il2CppCodeGenWriteBarrier((&___outputMesh_1), value);
	}

	inline static int32_t get_offset_of_outputAnchor_2() { return static_cast<int32_t>(offsetof(SurfaceData_t200825419, ___outputAnchor_2)); }
	inline WorldAnchor_t2161774153 * get_outputAnchor_2() const { return ___outputAnchor_2; }
	inline WorldAnchor_t2161774153 ** get_address_of_outputAnchor_2() { return &___outputAnchor_2; }
	inline void set_outputAnchor_2(WorldAnchor_t2161774153 * value)
	{
		___outputAnchor_2 = value;
		Il2CppCodeGenWriteBarrier((&___outputAnchor_2), value);
	}

	inline static int32_t get_offset_of_outputCollider_3() { return static_cast<int32_t>(offsetof(SurfaceData_t200825419, ___outputCollider_3)); }
	inline MeshCollider_t903564387 * get_outputCollider_3() const { return ___outputCollider_3; }
	inline MeshCollider_t903564387 ** get_address_of_outputCollider_3() { return &___outputCollider_3; }
	inline void set_outputCollider_3(MeshCollider_t903564387 * value)
	{
		___outputCollider_3 = value;
		Il2CppCodeGenWriteBarrier((&___outputCollider_3), value);
	}

	inline static int32_t get_offset_of_trianglesPerCubicMeter_4() { return static_cast<int32_t>(offsetof(SurfaceData_t200825419, ___trianglesPerCubicMeter_4)); }
	inline float get_trianglesPerCubicMeter_4() const { return ___trianglesPerCubicMeter_4; }
	inline float* get_address_of_trianglesPerCubicMeter_4() { return &___trianglesPerCubicMeter_4; }
	inline void set_trianglesPerCubicMeter_4(float value)
	{
		___trianglesPerCubicMeter_4 = value;
	}

	inline static int32_t get_offset_of_bakeCollider_5() { return static_cast<int32_t>(offsetof(SurfaceData_t200825419, ___bakeCollider_5)); }
	inline bool get_bakeCollider_5() const { return ___bakeCollider_5; }
	inline bool* get_address_of_bakeCollider_5() { return &___bakeCollider_5; }
	inline void set_bakeCollider_5(bool value)
	{
		___bakeCollider_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.WSA.SurfaceData
struct SurfaceData_t200825419_marshaled_pinvoke
{
	SurfaceId_t2999094746  ___id_0;
	MeshFilter_t3523625662 * ___outputMesh_1;
	WorldAnchor_t2161774153 * ___outputAnchor_2;
	MeshCollider_t903564387 * ___outputCollider_3;
	float ___trianglesPerCubicMeter_4;
	int32_t ___bakeCollider_5;
};
// Native definition for COM marshalling of UnityEngine.XR.WSA.SurfaceData
struct SurfaceData_t200825419_marshaled_com
{
	SurfaceId_t2999094746  ___id_0;
	MeshFilter_t3523625662 * ___outputMesh_1;
	WorldAnchor_t2161774153 * ___outputAnchor_2;
	MeshCollider_t903564387 * ___outputCollider_3;
	float ___trianglesPerCubicMeter_4;
	int32_t ___bakeCollider_5;
};
#endif // SURFACEDATA_T200825419_H
#ifndef SURFACEOBSERVER_T1930409633_H
#define SURFACEOBSERVER_T1930409633_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.SurfaceObserver
struct  SurfaceObserver_t1930409633  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.XR.WSA.SurfaceObserver::m_Observer
	intptr_t ___m_Observer_0;

public:
	inline static int32_t get_offset_of_m_Observer_0() { return static_cast<int32_t>(offsetof(SurfaceObserver_t1930409633, ___m_Observer_0)); }
	inline intptr_t get_m_Observer_0() const { return ___m_Observer_0; }
	inline intptr_t* get_address_of_m_Observer_0() { return &___m_Observer_0; }
	inline void set_m_Observer_0(intptr_t value)
	{
		___m_Observer_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.WSA.SurfaceObserver
struct SurfaceObserver_t1930409633_marshaled_pinvoke
{
	intptr_t ___m_Observer_0;
};
// Native definition for COM marshalling of UnityEngine.XR.WSA.SurfaceObserver
struct SurfaceObserver_t1930409633_marshaled_com
{
	intptr_t ___m_Observer_0;
};
#endif // SURFACEOBSERVER_T1930409633_H
#ifndef CAPTUREPIXELFORMAT_T2783176351_H
#define CAPTUREPIXELFORMAT_T2783176351_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.WebCam.CapturePixelFormat
struct  CapturePixelFormat_t2783176351 
{
public:
	// System.Int32 UnityEngine.XR.WSA.WebCam.CapturePixelFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CapturePixelFormat_t2783176351, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAPTUREPIXELFORMAT_T2783176351_H
#ifndef PHOTOCAPTURE_T3135222410_H
#define PHOTOCAPTURE_T3135222410_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.WebCam.PhotoCapture
struct  PhotoCapture_t3135222410  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.XR.WSA.WebCam.PhotoCapture::m_NativePtr
	intptr_t ___m_NativePtr_0;

public:
	inline static int32_t get_offset_of_m_NativePtr_0() { return static_cast<int32_t>(offsetof(PhotoCapture_t3135222410, ___m_NativePtr_0)); }
	inline intptr_t get_m_NativePtr_0() const { return ___m_NativePtr_0; }
	inline intptr_t* get_address_of_m_NativePtr_0() { return &___m_NativePtr_0; }
	inline void set_m_NativePtr_0(intptr_t value)
	{
		___m_NativePtr_0 = value;
	}
};

struct PhotoCapture_t3135222410_StaticFields
{
public:
	// System.Int64 UnityEngine.XR.WSA.WebCam.PhotoCapture::HR_SUCCESS
	int64_t ___HR_SUCCESS_1;

public:
	inline static int32_t get_offset_of_HR_SUCCESS_1() { return static_cast<int32_t>(offsetof(PhotoCapture_t3135222410_StaticFields, ___HR_SUCCESS_1)); }
	inline int64_t get_HR_SUCCESS_1() const { return ___HR_SUCCESS_1; }
	inline int64_t* get_address_of_HR_SUCCESS_1() { return &___HR_SUCCESS_1; }
	inline void set_HR_SUCCESS_1(int64_t value)
	{
		___HR_SUCCESS_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.WSA.WebCam.PhotoCapture
struct PhotoCapture_t3135222410_marshaled_pinvoke
{
	intptr_t ___m_NativePtr_0;
};
// Native definition for COM marshalling of UnityEngine.XR.WSA.WebCam.PhotoCapture
struct PhotoCapture_t3135222410_marshaled_com
{
	intptr_t ___m_NativePtr_0;
};
#endif // PHOTOCAPTURE_T3135222410_H
#ifndef CAPTURERESULTTYPE_T1197684473_H
#define CAPTURERESULTTYPE_T1197684473_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.WebCam.PhotoCapture/CaptureResultType
struct  CaptureResultType_t1197684473 
{
public:
	// System.Int32 UnityEngine.XR.WSA.WebCam.PhotoCapture/CaptureResultType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CaptureResultType_t1197684473, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAPTURERESULTTYPE_T1197684473_H
#ifndef VIDEOCAPTURE_T3191060632_H
#define VIDEOCAPTURE_T3191060632_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.WebCam.VideoCapture
struct  VideoCapture_t3191060632  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.XR.WSA.WebCam.VideoCapture::m_NativePtr
	intptr_t ___m_NativePtr_0;

public:
	inline static int32_t get_offset_of_m_NativePtr_0() { return static_cast<int32_t>(offsetof(VideoCapture_t3191060632, ___m_NativePtr_0)); }
	inline intptr_t get_m_NativePtr_0() const { return ___m_NativePtr_0; }
	inline intptr_t* get_address_of_m_NativePtr_0() { return &___m_NativePtr_0; }
	inline void set_m_NativePtr_0(intptr_t value)
	{
		___m_NativePtr_0 = value;
	}
};

struct VideoCapture_t3191060632_StaticFields
{
public:
	// System.Int64 UnityEngine.XR.WSA.WebCam.VideoCapture::HR_SUCCESS
	int64_t ___HR_SUCCESS_1;

public:
	inline static int32_t get_offset_of_HR_SUCCESS_1() { return static_cast<int32_t>(offsetof(VideoCapture_t3191060632_StaticFields, ___HR_SUCCESS_1)); }
	inline int64_t get_HR_SUCCESS_1() const { return ___HR_SUCCESS_1; }
	inline int64_t* get_address_of_HR_SUCCESS_1() { return &___HR_SUCCESS_1; }
	inline void set_HR_SUCCESS_1(int64_t value)
	{
		___HR_SUCCESS_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.WSA.WebCam.VideoCapture
struct VideoCapture_t3191060632_marshaled_pinvoke
{
	intptr_t ___m_NativePtr_0;
};
// Native definition for COM marshalling of UnityEngine.XR.WSA.WebCam.VideoCapture
struct VideoCapture_t3191060632_marshaled_com
{
	intptr_t ___m_NativePtr_0;
};
#endif // VIDEOCAPTURE_T3191060632_H
#ifndef CAPTURERESULTTYPE_T561272424_H
#define CAPTURERESULTTYPE_T561272424_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.WebCam.VideoCapture/CaptureResultType
struct  CaptureResultType_t561272424 
{
public:
	// System.Int32 UnityEngine.XR.WSA.WebCam.VideoCapture/CaptureResultType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CaptureResultType_t561272424, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAPTURERESULTTYPE_T561272424_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t1703627840* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t1703627840* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t1703627840** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t1703627840* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t1188392813_marshaled_pinvoke
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t1188392813_marshaled_com
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef INTERACTIONSOURCE_T872619030_H
#define INTERACTIONSOURCE_T872619030_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.InteractionSource
struct  InteractionSource_t872619030 
{
public:
	// System.UInt32 UnityEngine.XR.WSA.Input.InteractionSource::m_Id
	uint32_t ___m_Id_0;
	// UnityEngine.XR.WSA.Input.InteractionSourceKind UnityEngine.XR.WSA.Input.InteractionSource::m_SourceKind
	int32_t ___m_SourceKind_1;
	// UnityEngine.XR.WSA.Input.InteractionSourceHandedness UnityEngine.XR.WSA.Input.InteractionSource::m_Handedness
	int32_t ___m_Handedness_2;
	// UnityEngine.XR.WSA.Input.InteractionSourceFlags UnityEngine.XR.WSA.Input.InteractionSource::m_Flags
	int32_t ___m_Flags_3;
	// System.UInt16 UnityEngine.XR.WSA.Input.InteractionSource::m_VendorId
	uint16_t ___m_VendorId_4;
	// System.UInt16 UnityEngine.XR.WSA.Input.InteractionSource::m_ProductId
	uint16_t ___m_ProductId_5;
	// System.UInt16 UnityEngine.XR.WSA.Input.InteractionSource::m_ProductVersion
	uint16_t ___m_ProductVersion_6;

public:
	inline static int32_t get_offset_of_m_Id_0() { return static_cast<int32_t>(offsetof(InteractionSource_t872619030, ___m_Id_0)); }
	inline uint32_t get_m_Id_0() const { return ___m_Id_0; }
	inline uint32_t* get_address_of_m_Id_0() { return &___m_Id_0; }
	inline void set_m_Id_0(uint32_t value)
	{
		___m_Id_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceKind_1() { return static_cast<int32_t>(offsetof(InteractionSource_t872619030, ___m_SourceKind_1)); }
	inline int32_t get_m_SourceKind_1() const { return ___m_SourceKind_1; }
	inline int32_t* get_address_of_m_SourceKind_1() { return &___m_SourceKind_1; }
	inline void set_m_SourceKind_1(int32_t value)
	{
		___m_SourceKind_1 = value;
	}

	inline static int32_t get_offset_of_m_Handedness_2() { return static_cast<int32_t>(offsetof(InteractionSource_t872619030, ___m_Handedness_2)); }
	inline int32_t get_m_Handedness_2() const { return ___m_Handedness_2; }
	inline int32_t* get_address_of_m_Handedness_2() { return &___m_Handedness_2; }
	inline void set_m_Handedness_2(int32_t value)
	{
		___m_Handedness_2 = value;
	}

	inline static int32_t get_offset_of_m_Flags_3() { return static_cast<int32_t>(offsetof(InteractionSource_t872619030, ___m_Flags_3)); }
	inline int32_t get_m_Flags_3() const { return ___m_Flags_3; }
	inline int32_t* get_address_of_m_Flags_3() { return &___m_Flags_3; }
	inline void set_m_Flags_3(int32_t value)
	{
		___m_Flags_3 = value;
	}

	inline static int32_t get_offset_of_m_VendorId_4() { return static_cast<int32_t>(offsetof(InteractionSource_t872619030, ___m_VendorId_4)); }
	inline uint16_t get_m_VendorId_4() const { return ___m_VendorId_4; }
	inline uint16_t* get_address_of_m_VendorId_4() { return &___m_VendorId_4; }
	inline void set_m_VendorId_4(uint16_t value)
	{
		___m_VendorId_4 = value;
	}

	inline static int32_t get_offset_of_m_ProductId_5() { return static_cast<int32_t>(offsetof(InteractionSource_t872619030, ___m_ProductId_5)); }
	inline uint16_t get_m_ProductId_5() const { return ___m_ProductId_5; }
	inline uint16_t* get_address_of_m_ProductId_5() { return &___m_ProductId_5; }
	inline void set_m_ProductId_5(uint16_t value)
	{
		___m_ProductId_5 = value;
	}

	inline static int32_t get_offset_of_m_ProductVersion_6() { return static_cast<int32_t>(offsetof(InteractionSource_t872619030, ___m_ProductVersion_6)); }
	inline uint16_t get_m_ProductVersion_6() const { return ___m_ProductVersion_6; }
	inline uint16_t* get_address_of_m_ProductVersion_6() { return &___m_ProductVersion_6; }
	inline void set_m_ProductVersion_6(uint16_t value)
	{
		___m_ProductVersion_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERACTIONSOURCE_T872619030_H
#ifndef INTERACTIONSOURCEPOSE_T752709879_H
#define INTERACTIONSOURCEPOSE_T752709879_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.InteractionSourcePose
struct  InteractionSourcePose_t752709879 
{
public:
	// UnityEngine.Quaternion UnityEngine.XR.WSA.Input.InteractionSourcePose::m_GripRotation
	Quaternion_t2301928331  ___m_GripRotation_0;
	// UnityEngine.Quaternion UnityEngine.XR.WSA.Input.InteractionSourcePose::m_PointerRotation
	Quaternion_t2301928331  ___m_PointerRotation_1;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.InteractionSourcePose::m_GripPosition
	Vector3_t3722313464  ___m_GripPosition_2;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.InteractionSourcePose::m_PointerPosition
	Vector3_t3722313464  ___m_PointerPosition_3;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.InteractionSourcePose::m_Velocity
	Vector3_t3722313464  ___m_Velocity_4;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.InteractionSourcePose::m_AngularVelocity
	Vector3_t3722313464  ___m_AngularVelocity_5;
	// UnityEngine.XR.WSA.Input.InteractionSourcePositionAccuracy UnityEngine.XR.WSA.Input.InteractionSourcePose::m_PositionAccuracy
	int32_t ___m_PositionAccuracy_6;
	// UnityEngine.XR.WSA.Input.InteractionSourcePoseFlags UnityEngine.XR.WSA.Input.InteractionSourcePose::m_Flags
	int32_t ___m_Flags_7;

public:
	inline static int32_t get_offset_of_m_GripRotation_0() { return static_cast<int32_t>(offsetof(InteractionSourcePose_t752709879, ___m_GripRotation_0)); }
	inline Quaternion_t2301928331  get_m_GripRotation_0() const { return ___m_GripRotation_0; }
	inline Quaternion_t2301928331 * get_address_of_m_GripRotation_0() { return &___m_GripRotation_0; }
	inline void set_m_GripRotation_0(Quaternion_t2301928331  value)
	{
		___m_GripRotation_0 = value;
	}

	inline static int32_t get_offset_of_m_PointerRotation_1() { return static_cast<int32_t>(offsetof(InteractionSourcePose_t752709879, ___m_PointerRotation_1)); }
	inline Quaternion_t2301928331  get_m_PointerRotation_1() const { return ___m_PointerRotation_1; }
	inline Quaternion_t2301928331 * get_address_of_m_PointerRotation_1() { return &___m_PointerRotation_1; }
	inline void set_m_PointerRotation_1(Quaternion_t2301928331  value)
	{
		___m_PointerRotation_1 = value;
	}

	inline static int32_t get_offset_of_m_GripPosition_2() { return static_cast<int32_t>(offsetof(InteractionSourcePose_t752709879, ___m_GripPosition_2)); }
	inline Vector3_t3722313464  get_m_GripPosition_2() const { return ___m_GripPosition_2; }
	inline Vector3_t3722313464 * get_address_of_m_GripPosition_2() { return &___m_GripPosition_2; }
	inline void set_m_GripPosition_2(Vector3_t3722313464  value)
	{
		___m_GripPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PointerPosition_3() { return static_cast<int32_t>(offsetof(InteractionSourcePose_t752709879, ___m_PointerPosition_3)); }
	inline Vector3_t3722313464  get_m_PointerPosition_3() const { return ___m_PointerPosition_3; }
	inline Vector3_t3722313464 * get_address_of_m_PointerPosition_3() { return &___m_PointerPosition_3; }
	inline void set_m_PointerPosition_3(Vector3_t3722313464  value)
	{
		___m_PointerPosition_3 = value;
	}

	inline static int32_t get_offset_of_m_Velocity_4() { return static_cast<int32_t>(offsetof(InteractionSourcePose_t752709879, ___m_Velocity_4)); }
	inline Vector3_t3722313464  get_m_Velocity_4() const { return ___m_Velocity_4; }
	inline Vector3_t3722313464 * get_address_of_m_Velocity_4() { return &___m_Velocity_4; }
	inline void set_m_Velocity_4(Vector3_t3722313464  value)
	{
		___m_Velocity_4 = value;
	}

	inline static int32_t get_offset_of_m_AngularVelocity_5() { return static_cast<int32_t>(offsetof(InteractionSourcePose_t752709879, ___m_AngularVelocity_5)); }
	inline Vector3_t3722313464  get_m_AngularVelocity_5() const { return ___m_AngularVelocity_5; }
	inline Vector3_t3722313464 * get_address_of_m_AngularVelocity_5() { return &___m_AngularVelocity_5; }
	inline void set_m_AngularVelocity_5(Vector3_t3722313464  value)
	{
		___m_AngularVelocity_5 = value;
	}

	inline static int32_t get_offset_of_m_PositionAccuracy_6() { return static_cast<int32_t>(offsetof(InteractionSourcePose_t752709879, ___m_PositionAccuracy_6)); }
	inline int32_t get_m_PositionAccuracy_6() const { return ___m_PositionAccuracy_6; }
	inline int32_t* get_address_of_m_PositionAccuracy_6() { return &___m_PositionAccuracy_6; }
	inline void set_m_PositionAccuracy_6(int32_t value)
	{
		___m_PositionAccuracy_6 = value;
	}

	inline static int32_t get_offset_of_m_Flags_7() { return static_cast<int32_t>(offsetof(InteractionSourcePose_t752709879, ___m_Flags_7)); }
	inline int32_t get_m_Flags_7() const { return ___m_Flags_7; }
	inline int32_t* get_address_of_m_Flags_7() { return &___m_Flags_7; }
	inline void set_m_Flags_7(int32_t value)
	{
		___m_Flags_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERACTIONSOURCEPOSE_T752709879_H
#ifndef PHOTOCAPTURERESULT_T1090015350_H
#define PHOTOCAPTURERESULT_T1090015350_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.WebCam.PhotoCapture/PhotoCaptureResult
struct  PhotoCaptureResult_t1090015350 
{
public:
	// UnityEngine.XR.WSA.WebCam.PhotoCapture/CaptureResultType UnityEngine.XR.WSA.WebCam.PhotoCapture/PhotoCaptureResult::resultType
	int32_t ___resultType_0;
	// System.Int64 UnityEngine.XR.WSA.WebCam.PhotoCapture/PhotoCaptureResult::hResult
	int64_t ___hResult_1;

public:
	inline static int32_t get_offset_of_resultType_0() { return static_cast<int32_t>(offsetof(PhotoCaptureResult_t1090015350, ___resultType_0)); }
	inline int32_t get_resultType_0() const { return ___resultType_0; }
	inline int32_t* get_address_of_resultType_0() { return &___resultType_0; }
	inline void set_resultType_0(int32_t value)
	{
		___resultType_0 = value;
	}

	inline static int32_t get_offset_of_hResult_1() { return static_cast<int32_t>(offsetof(PhotoCaptureResult_t1090015350, ___hResult_1)); }
	inline int64_t get_hResult_1() const { return ___hResult_1; }
	inline int64_t* get_address_of_hResult_1() { return &___hResult_1; }
	inline void set_hResult_1(int64_t value)
	{
		___hResult_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHOTOCAPTURERESULT_T1090015350_H
#ifndef PHOTOCAPTUREFRAME_T831849718_H
#define PHOTOCAPTUREFRAME_T831849718_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame
struct  PhotoCaptureFrame_t831849718  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame::m_NativePtr
	intptr_t ___m_NativePtr_0;
	// System.Int32 UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame::<dataLength>k__BackingField
	int32_t ___U3CdataLengthU3Ek__BackingField_1;
	// System.Boolean UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame::<hasLocationData>k__BackingField
	bool ___U3ChasLocationDataU3Ek__BackingField_2;
	// UnityEngine.XR.WSA.WebCam.CapturePixelFormat UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame::<pixelFormat>k__BackingField
	int32_t ___U3CpixelFormatU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_NativePtr_0() { return static_cast<int32_t>(offsetof(PhotoCaptureFrame_t831849718, ___m_NativePtr_0)); }
	inline intptr_t get_m_NativePtr_0() const { return ___m_NativePtr_0; }
	inline intptr_t* get_address_of_m_NativePtr_0() { return &___m_NativePtr_0; }
	inline void set_m_NativePtr_0(intptr_t value)
	{
		___m_NativePtr_0 = value;
	}

	inline static int32_t get_offset_of_U3CdataLengthU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PhotoCaptureFrame_t831849718, ___U3CdataLengthU3Ek__BackingField_1)); }
	inline int32_t get_U3CdataLengthU3Ek__BackingField_1() const { return ___U3CdataLengthU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CdataLengthU3Ek__BackingField_1() { return &___U3CdataLengthU3Ek__BackingField_1; }
	inline void set_U3CdataLengthU3Ek__BackingField_1(int32_t value)
	{
		___U3CdataLengthU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3ChasLocationDataU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PhotoCaptureFrame_t831849718, ___U3ChasLocationDataU3Ek__BackingField_2)); }
	inline bool get_U3ChasLocationDataU3Ek__BackingField_2() const { return ___U3ChasLocationDataU3Ek__BackingField_2; }
	inline bool* get_address_of_U3ChasLocationDataU3Ek__BackingField_2() { return &___U3ChasLocationDataU3Ek__BackingField_2; }
	inline void set_U3ChasLocationDataU3Ek__BackingField_2(bool value)
	{
		___U3ChasLocationDataU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CpixelFormatU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PhotoCaptureFrame_t831849718, ___U3CpixelFormatU3Ek__BackingField_3)); }
	inline int32_t get_U3CpixelFormatU3Ek__BackingField_3() const { return ___U3CpixelFormatU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CpixelFormatU3Ek__BackingField_3() { return &___U3CpixelFormatU3Ek__BackingField_3; }
	inline void set_U3CpixelFormatU3Ek__BackingField_3(int32_t value)
	{
		___U3CpixelFormatU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHOTOCAPTUREFRAME_T831849718_H
#ifndef VIDEOCAPTURERESULT_T880209540_H
#define VIDEOCAPTURERESULT_T880209540_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.WebCam.VideoCapture/VideoCaptureResult
struct  VideoCaptureResult_t880209540 
{
public:
	// UnityEngine.XR.WSA.WebCam.VideoCapture/CaptureResultType UnityEngine.XR.WSA.WebCam.VideoCapture/VideoCaptureResult::resultType
	int32_t ___resultType_0;
	// System.Int64 UnityEngine.XR.WSA.WebCam.VideoCapture/VideoCaptureResult::hResult
	int64_t ___hResult_1;

public:
	inline static int32_t get_offset_of_resultType_0() { return static_cast<int32_t>(offsetof(VideoCaptureResult_t880209540, ___resultType_0)); }
	inline int32_t get_resultType_0() const { return ___resultType_0; }
	inline int32_t* get_address_of_resultType_0() { return &___resultType_0; }
	inline void set_resultType_0(int32_t value)
	{
		___resultType_0 = value;
	}

	inline static int32_t get_offset_of_hResult_1() { return static_cast<int32_t>(offsetof(VideoCaptureResult_t880209540, ___hResult_1)); }
	inline int64_t get_hResult_1() const { return ___hResult_1; }
	inline int64_t* get_address_of_hResult_1() { return &___hResult_1; }
	inline void set_hResult_1(int64_t value)
	{
		___hResult_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOCAPTURERESULT_T880209540_H
#ifndef ACTION_1_T3114543800_H
#define ACTION_1_T3114543800_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.XR.WSA.Input.GestureErrorEventArgs>
struct  Action_1_t3114543800  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T3114543800_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
#ifndef NULLABLE_1_T2595181112_H
#define NULLABLE_1_T2595181112_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<UnityEngine.XR.WSA.Input.InteractionSource>
struct  Nullable_1_t2595181112 
{
public:
	// T System.Nullable`1::value
	InteractionSource_t872619030  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t2595181112, ___value_0)); }
	inline InteractionSource_t872619030  get_value_0() const { return ___value_0; }
	inline InteractionSource_t872619030 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(InteractionSource_t872619030  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t2595181112, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T2595181112_H
#ifndef COLLIDER_T1773347010_H
#define COLLIDER_T1773347010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider
struct  Collider_t1773347010  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER_T1773347010_H
#ifndef MESHFILTER_T3523625662_H
#define MESHFILTER_T3523625662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshFilter
struct  MeshFilter_t3523625662  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHFILTER_T3523625662_H
#ifndef GESTUREERRORDELEGATE_T3254371646_H
#define GESTUREERRORDELEGATE_T3254371646_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.GestureRecognizer/GestureErrorDelegate
struct  GestureErrorDelegate_t3254371646  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GESTUREERRORDELEGATE_T3254371646_H
#ifndef HOLDCANCELEDEVENTDELEGATE_T3242927192_H
#define HOLDCANCELEDEVENTDELEGATE_T3242927192_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.GestureRecognizer/HoldCanceledEventDelegate
struct  HoldCanceledEventDelegate_t3242927192  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HOLDCANCELEDEVENTDELEGATE_T3242927192_H
#ifndef HOLDCOMPLETEDEVENTDELEGATE_T4112318659_H
#define HOLDCOMPLETEDEVENTDELEGATE_T4112318659_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.GestureRecognizer/HoldCompletedEventDelegate
struct  HoldCompletedEventDelegate_t4112318659  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HOLDCOMPLETEDEVENTDELEGATE_T4112318659_H
#ifndef HOLDSTARTEDEVENTDELEGATE_T1669693510_H
#define HOLDSTARTEDEVENTDELEGATE_T1669693510_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.GestureRecognizer/HoldStartedEventDelegate
struct  HoldStartedEventDelegate_t1669693510  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HOLDSTARTEDEVENTDELEGATE_T1669693510_H
#ifndef MANIPULATIONCANCELEDEVENTDELEGATE_T3141027694_H
#define MANIPULATIONCANCELEDEVENTDELEGATE_T3141027694_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationCanceledEventDelegate
struct  ManipulationCanceledEventDelegate_t3141027694  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MANIPULATIONCANCELEDEVENTDELEGATE_T3141027694_H
#ifndef MANIPULATIONCOMPLETEDEVENTDELEGATE_T3126788776_H
#define MANIPULATIONCOMPLETEDEVENTDELEGATE_T3126788776_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationCompletedEventDelegate
struct  ManipulationCompletedEventDelegate_t3126788776  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MANIPULATIONCOMPLETEDEVENTDELEGATE_T3126788776_H
#ifndef MANIPULATIONSTARTEDEVENTDELEGATE_T1581880091_H
#define MANIPULATIONSTARTEDEVENTDELEGATE_T1581880091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationStartedEventDelegate
struct  ManipulationStartedEventDelegate_t1581880091  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MANIPULATIONSTARTEDEVENTDELEGATE_T1581880091_H
#ifndef MANIPULATIONUPDATEDEVENTDELEGATE_T2990350064_H
#define MANIPULATIONUPDATEDEVENTDELEGATE_T2990350064_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationUpdatedEventDelegate
struct  ManipulationUpdatedEventDelegate_t2990350064  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MANIPULATIONUPDATEDEVENTDELEGATE_T2990350064_H
#ifndef NAVIGATIONCANCELEDEVENTDELEGATE_T2505886250_H
#define NAVIGATIONCANCELEDEVENTDELEGATE_T2505886250_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationCanceledEventDelegate
struct  NavigationCanceledEventDelegate_t2505886250  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAVIGATIONCANCELEDEVENTDELEGATE_T2505886250_H
#ifndef NAVIGATIONCOMPLETEDEVENTDELEGATE_T3119650473_H
#define NAVIGATIONCOMPLETEDEVENTDELEGATE_T3119650473_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationCompletedEventDelegate
struct  NavigationCompletedEventDelegate_t3119650473  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAVIGATIONCOMPLETEDEVENTDELEGATE_T3119650473_H
#ifndef NAVIGATIONSTARTEDEVENTDELEGATE_T3496816902_H
#define NAVIGATIONSTARTEDEVENTDELEGATE_T3496816902_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationStartedEventDelegate
struct  NavigationStartedEventDelegate_t3496816902  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAVIGATIONSTARTEDEVENTDELEGATE_T3496816902_H
#ifndef NAVIGATIONUPDATEDEVENTDELEGATE_T2894903996_H
#define NAVIGATIONUPDATEDEVENTDELEGATE_T2894903996_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationUpdatedEventDelegate
struct  NavigationUpdatedEventDelegate_t2894903996  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAVIGATIONUPDATEDEVENTDELEGATE_T2894903996_H
#ifndef RECOGNITIONENDEDEVENTDELEGATE_T2892804592_H
#define RECOGNITIONENDEDEVENTDELEGATE_T2892804592_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.GestureRecognizer/RecognitionEndedEventDelegate
struct  RecognitionEndedEventDelegate_t2892804592  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECOGNITIONENDEDEVENTDELEGATE_T2892804592_H
#ifndef RECOGNITIONSTARTEDEVENTDELEGATE_T3727320336_H
#define RECOGNITIONSTARTEDEVENTDELEGATE_T3727320336_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.GestureRecognizer/RecognitionStartedEventDelegate
struct  RecognitionStartedEventDelegate_t3727320336  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECOGNITIONSTARTEDEVENTDELEGATE_T3727320336_H
#ifndef TAPPEDEVENTDELEGATE_T286622765_H
#define TAPPEDEVENTDELEGATE_T286622765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.GestureRecognizer/TappedEventDelegate
struct  TappedEventDelegate_t286622765  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TAPPEDEVENTDELEGATE_T286622765_H
#ifndef HOLDCANCELEDEVENTARGS_T292154460_H
#define HOLDCANCELEDEVENTARGS_T292154460_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.HoldCanceledEventArgs
struct  HoldCanceledEventArgs_t292154460 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.HoldCanceledEventArgs::m_Source
	InteractionSource_t872619030  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.HoldCanceledEventArgs::m_SourcePose
	InteractionSourcePose_t752709879  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.HoldCanceledEventArgs::m_HeadPose
	Pose_t545244865  ___m_HeadPose_2;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(HoldCanceledEventArgs_t292154460, ___m_Source_0)); }
	inline InteractionSource_t872619030  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t872619030 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t872619030  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(HoldCanceledEventArgs_t292154460, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t752709879  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t752709879 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t752709879  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(HoldCanceledEventArgs_t292154460, ___m_HeadPose_2)); }
	inline Pose_t545244865  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t545244865 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t545244865  value)
	{
		___m_HeadPose_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HOLDCANCELEDEVENTARGS_T292154460_H
#ifndef HOLDCOMPLETEDEVENTARGS_T995635451_H
#define HOLDCOMPLETEDEVENTARGS_T995635451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.HoldCompletedEventArgs
struct  HoldCompletedEventArgs_t995635451 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.HoldCompletedEventArgs::m_Source
	InteractionSource_t872619030  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.HoldCompletedEventArgs::m_SourcePose
	InteractionSourcePose_t752709879  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.HoldCompletedEventArgs::m_HeadPose
	Pose_t545244865  ___m_HeadPose_2;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(HoldCompletedEventArgs_t995635451, ___m_Source_0)); }
	inline InteractionSource_t872619030  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t872619030 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t872619030  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(HoldCompletedEventArgs_t995635451, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t752709879  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t752709879 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t752709879  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(HoldCompletedEventArgs_t995635451, ___m_HeadPose_2)); }
	inline Pose_t545244865  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t545244865 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t545244865  value)
	{
		___m_HeadPose_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HOLDCOMPLETEDEVENTARGS_T995635451_H
#ifndef HOLDSTARTEDEVENTARGS_T3553245441_H
#define HOLDSTARTEDEVENTARGS_T3553245441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.HoldStartedEventArgs
struct  HoldStartedEventArgs_t3553245441 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.HoldStartedEventArgs::m_Source
	InteractionSource_t872619030  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.HoldStartedEventArgs::m_SourcePose
	InteractionSourcePose_t752709879  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.HoldStartedEventArgs::m_HeadPose
	Pose_t545244865  ___m_HeadPose_2;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(HoldStartedEventArgs_t3553245441, ___m_Source_0)); }
	inline InteractionSource_t872619030  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t872619030 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t872619030  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(HoldStartedEventArgs_t3553245441, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t752709879  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t752709879 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t752709879  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(HoldStartedEventArgs_t3553245441, ___m_HeadPose_2)); }
	inline Pose_t545244865  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t545244865 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t545244865  value)
	{
		___m_HeadPose_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HOLDSTARTEDEVENTARGS_T3553245441_H
#ifndef INTERACTIONSOURCEPROPERTIES_T3202230305_H
#define INTERACTIONSOURCEPROPERTIES_T3202230305_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.InteractionSourceProperties
struct  InteractionSourceProperties_t3202230305 
{
public:
	// System.Double UnityEngine.XR.WSA.Input.InteractionSourceProperties::m_SourceLossRisk
	double ___m_SourceLossRisk_0;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.InteractionSourceProperties::m_SourceLossMitigationDirection
	Vector3_t3722313464  ___m_SourceLossMitigationDirection_1;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.InteractionSourceProperties::m_SourcePose
	InteractionSourcePose_t752709879  ___m_SourcePose_2;

public:
	inline static int32_t get_offset_of_m_SourceLossRisk_0() { return static_cast<int32_t>(offsetof(InteractionSourceProperties_t3202230305, ___m_SourceLossRisk_0)); }
	inline double get_m_SourceLossRisk_0() const { return ___m_SourceLossRisk_0; }
	inline double* get_address_of_m_SourceLossRisk_0() { return &___m_SourceLossRisk_0; }
	inline void set_m_SourceLossRisk_0(double value)
	{
		___m_SourceLossRisk_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceLossMitigationDirection_1() { return static_cast<int32_t>(offsetof(InteractionSourceProperties_t3202230305, ___m_SourceLossMitigationDirection_1)); }
	inline Vector3_t3722313464  get_m_SourceLossMitigationDirection_1() const { return ___m_SourceLossMitigationDirection_1; }
	inline Vector3_t3722313464 * get_address_of_m_SourceLossMitigationDirection_1() { return &___m_SourceLossMitigationDirection_1; }
	inline void set_m_SourceLossMitigationDirection_1(Vector3_t3722313464  value)
	{
		___m_SourceLossMitigationDirection_1 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_2() { return static_cast<int32_t>(offsetof(InteractionSourceProperties_t3202230305, ___m_SourcePose_2)); }
	inline InteractionSourcePose_t752709879  get_m_SourcePose_2() const { return ___m_SourcePose_2; }
	inline InteractionSourcePose_t752709879 * get_address_of_m_SourcePose_2() { return &___m_SourcePose_2; }
	inline void set_m_SourcePose_2(InteractionSourcePose_t752709879  value)
	{
		___m_SourcePose_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERACTIONSOURCEPROPERTIES_T3202230305_H
#ifndef MANIPULATIONCANCELEDEVENTARGS_T592681897_H
#define MANIPULATIONCANCELEDEVENTARGS_T592681897_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.ManipulationCanceledEventArgs
struct  ManipulationCanceledEventArgs_t592681897 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.ManipulationCanceledEventArgs::m_Source
	InteractionSource_t872619030  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.ManipulationCanceledEventArgs::m_SourcePose
	InteractionSourcePose_t752709879  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.ManipulationCanceledEventArgs::m_HeadPose
	Pose_t545244865  ___m_HeadPose_2;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(ManipulationCanceledEventArgs_t592681897, ___m_Source_0)); }
	inline InteractionSource_t872619030  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t872619030 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t872619030  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(ManipulationCanceledEventArgs_t592681897, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t752709879  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t752709879 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t752709879  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(ManipulationCanceledEventArgs_t592681897, ___m_HeadPose_2)); }
	inline Pose_t545244865  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t545244865 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t545244865  value)
	{
		___m_HeadPose_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MANIPULATIONCANCELEDEVENTARGS_T592681897_H
#ifndef MANIPULATIONCOMPLETEDEVENTARGS_T1784580188_H
#define MANIPULATIONCOMPLETEDEVENTARGS_T1784580188_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.ManipulationCompletedEventArgs
struct  ManipulationCompletedEventArgs_t1784580188 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.ManipulationCompletedEventArgs::m_Source
	InteractionSource_t872619030  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.ManipulationCompletedEventArgs::m_SourcePose
	InteractionSourcePose_t752709879  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.ManipulationCompletedEventArgs::m_HeadPose
	Pose_t545244865  ___m_HeadPose_2;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.ManipulationCompletedEventArgs::m_CumulativeDelta
	Vector3_t3722313464  ___m_CumulativeDelta_3;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(ManipulationCompletedEventArgs_t1784580188, ___m_Source_0)); }
	inline InteractionSource_t872619030  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t872619030 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t872619030  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(ManipulationCompletedEventArgs_t1784580188, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t752709879  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t752709879 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t752709879  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(ManipulationCompletedEventArgs_t1784580188, ___m_HeadPose_2)); }
	inline Pose_t545244865  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t545244865 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t545244865  value)
	{
		___m_HeadPose_2 = value;
	}

	inline static int32_t get_offset_of_m_CumulativeDelta_3() { return static_cast<int32_t>(offsetof(ManipulationCompletedEventArgs_t1784580188, ___m_CumulativeDelta_3)); }
	inline Vector3_t3722313464  get_m_CumulativeDelta_3() const { return ___m_CumulativeDelta_3; }
	inline Vector3_t3722313464 * get_address_of_m_CumulativeDelta_3() { return &___m_CumulativeDelta_3; }
	inline void set_m_CumulativeDelta_3(Vector3_t3722313464  value)
	{
		___m_CumulativeDelta_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MANIPULATIONCOMPLETEDEVENTARGS_T1784580188_H
#ifndef MANIPULATIONSTARTEDEVENTARGS_T1116244159_H
#define MANIPULATIONSTARTEDEVENTARGS_T1116244159_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.ManipulationStartedEventArgs
struct  ManipulationStartedEventArgs_t1116244159 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.ManipulationStartedEventArgs::m_Source
	InteractionSource_t872619030  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.ManipulationStartedEventArgs::m_SourcePose
	InteractionSourcePose_t752709879  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.ManipulationStartedEventArgs::m_HeadPose
	Pose_t545244865  ___m_HeadPose_2;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(ManipulationStartedEventArgs_t1116244159, ___m_Source_0)); }
	inline InteractionSource_t872619030  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t872619030 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t872619030  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(ManipulationStartedEventArgs_t1116244159, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t752709879  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t752709879 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t752709879  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(ManipulationStartedEventArgs_t1116244159, ___m_HeadPose_2)); }
	inline Pose_t545244865  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t545244865 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t545244865  value)
	{
		___m_HeadPose_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MANIPULATIONSTARTEDEVENTARGS_T1116244159_H
#ifndef MANIPULATIONUPDATEDEVENTARGS_T4163342826_H
#define MANIPULATIONUPDATEDEVENTARGS_T4163342826_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.ManipulationUpdatedEventArgs
struct  ManipulationUpdatedEventArgs_t4163342826 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.ManipulationUpdatedEventArgs::m_Source
	InteractionSource_t872619030  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.ManipulationUpdatedEventArgs::m_SourcePose
	InteractionSourcePose_t752709879  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.ManipulationUpdatedEventArgs::m_HeadPose
	Pose_t545244865  ___m_HeadPose_2;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.ManipulationUpdatedEventArgs::m_CumulativeDelta
	Vector3_t3722313464  ___m_CumulativeDelta_3;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(ManipulationUpdatedEventArgs_t4163342826, ___m_Source_0)); }
	inline InteractionSource_t872619030  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t872619030 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t872619030  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(ManipulationUpdatedEventArgs_t4163342826, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t752709879  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t752709879 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t752709879  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(ManipulationUpdatedEventArgs_t4163342826, ___m_HeadPose_2)); }
	inline Pose_t545244865  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t545244865 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t545244865  value)
	{
		___m_HeadPose_2 = value;
	}

	inline static int32_t get_offset_of_m_CumulativeDelta_3() { return static_cast<int32_t>(offsetof(ManipulationUpdatedEventArgs_t4163342826, ___m_CumulativeDelta_3)); }
	inline Vector3_t3722313464  get_m_CumulativeDelta_3() const { return ___m_CumulativeDelta_3; }
	inline Vector3_t3722313464 * get_address_of_m_CumulativeDelta_3() { return &___m_CumulativeDelta_3; }
	inline void set_m_CumulativeDelta_3(Vector3_t3722313464  value)
	{
		___m_CumulativeDelta_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MANIPULATIONUPDATEDEVENTARGS_T4163342826_H
#ifndef NAVIGATIONCANCELEDEVENTARGS_T3098503647_H
#define NAVIGATIONCANCELEDEVENTARGS_T3098503647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs
struct  NavigationCanceledEventArgs_t3098503647 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs::m_Source
	InteractionSource_t872619030  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs::m_SourcePose
	InteractionSourcePose_t752709879  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs::m_HeadPose
	Pose_t545244865  ___m_HeadPose_2;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(NavigationCanceledEventArgs_t3098503647, ___m_Source_0)); }
	inline InteractionSource_t872619030  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t872619030 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t872619030  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(NavigationCanceledEventArgs_t3098503647, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t752709879  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t752709879 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t752709879  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(NavigationCanceledEventArgs_t3098503647, ___m_HeadPose_2)); }
	inline Pose_t545244865  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t545244865 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t545244865  value)
	{
		___m_HeadPose_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAVIGATIONCANCELEDEVENTARGS_T3098503647_H
#ifndef NAVIGATIONCOMPLETEDEVENTARGS_T169294268_H
#define NAVIGATIONCOMPLETEDEVENTARGS_T169294268_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs
struct  NavigationCompletedEventArgs_t169294268 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs::m_Source
	InteractionSource_t872619030  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs::m_SourcePose
	InteractionSourcePose_t752709879  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs::m_HeadPose
	Pose_t545244865  ___m_HeadPose_2;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs::m_NormalizedOffset
	Vector3_t3722313464  ___m_NormalizedOffset_3;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(NavigationCompletedEventArgs_t169294268, ___m_Source_0)); }
	inline InteractionSource_t872619030  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t872619030 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t872619030  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(NavigationCompletedEventArgs_t169294268, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t752709879  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t752709879 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t752709879  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(NavigationCompletedEventArgs_t169294268, ___m_HeadPose_2)); }
	inline Pose_t545244865  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t545244865 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t545244865  value)
	{
		___m_HeadPose_2 = value;
	}

	inline static int32_t get_offset_of_m_NormalizedOffset_3() { return static_cast<int32_t>(offsetof(NavigationCompletedEventArgs_t169294268, ___m_NormalizedOffset_3)); }
	inline Vector3_t3722313464  get_m_NormalizedOffset_3() const { return ___m_NormalizedOffset_3; }
	inline Vector3_t3722313464 * get_address_of_m_NormalizedOffset_3() { return &___m_NormalizedOffset_3; }
	inline void set_m_NormalizedOffset_3(Vector3_t3722313464  value)
	{
		___m_NormalizedOffset_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAVIGATIONCOMPLETEDEVENTARGS_T169294268_H
#ifndef NAVIGATIONSTARTEDEVENTARGS_T3372289616_H
#define NAVIGATIONSTARTEDEVENTARGS_T3372289616_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.NavigationStartedEventArgs
struct  NavigationStartedEventArgs_t3372289616 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.NavigationStartedEventArgs::m_Source
	InteractionSource_t872619030  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.NavigationStartedEventArgs::m_SourcePose
	InteractionSourcePose_t752709879  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.NavigationStartedEventArgs::m_HeadPose
	Pose_t545244865  ___m_HeadPose_2;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(NavigationStartedEventArgs_t3372289616, ___m_Source_0)); }
	inline InteractionSource_t872619030  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t872619030 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t872619030  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(NavigationStartedEventArgs_t3372289616, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t752709879  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t752709879 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t752709879  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(NavigationStartedEventArgs_t3372289616, ___m_HeadPose_2)); }
	inline Pose_t545244865  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t545244865 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t545244865  value)
	{
		___m_HeadPose_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAVIGATIONSTARTEDEVENTARGS_T3372289616_H
#ifndef NAVIGATIONUPDATEDEVENTARGS_T984051242_H
#define NAVIGATIONUPDATEDEVENTARGS_T984051242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs
struct  NavigationUpdatedEventArgs_t984051242 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs::m_Source
	InteractionSource_t872619030  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs::m_SourcePose
	InteractionSourcePose_t752709879  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs::m_HeadPose
	Pose_t545244865  ___m_HeadPose_2;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs::m_NormalizedOffset
	Vector3_t3722313464  ___m_NormalizedOffset_3;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(NavigationUpdatedEventArgs_t984051242, ___m_Source_0)); }
	inline InteractionSource_t872619030  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t872619030 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t872619030  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(NavigationUpdatedEventArgs_t984051242, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t752709879  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t752709879 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t752709879  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(NavigationUpdatedEventArgs_t984051242, ___m_HeadPose_2)); }
	inline Pose_t545244865  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t545244865 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t545244865  value)
	{
		___m_HeadPose_2 = value;
	}

	inline static int32_t get_offset_of_m_NormalizedOffset_3() { return static_cast<int32_t>(offsetof(NavigationUpdatedEventArgs_t984051242, ___m_NormalizedOffset_3)); }
	inline Vector3_t3722313464  get_m_NormalizedOffset_3() const { return ___m_NormalizedOffset_3; }
	inline Vector3_t3722313464 * get_address_of_m_NormalizedOffset_3() { return &___m_NormalizedOffset_3; }
	inline void set_m_NormalizedOffset_3(Vector3_t3722313464  value)
	{
		___m_NormalizedOffset_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAVIGATIONUPDATEDEVENTARGS_T984051242_H
#ifndef RECOGNITIONENDEDEVENTARGS_T3900660893_H
#define RECOGNITIONENDEDEVENTARGS_T3900660893_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.RecognitionEndedEventArgs
struct  RecognitionEndedEventArgs_t3900660893 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.RecognitionEndedEventArgs::m_Source
	InteractionSource_t872619030  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.RecognitionEndedEventArgs::m_SourcePose
	InteractionSourcePose_t752709879  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.RecognitionEndedEventArgs::m_HeadPose
	Pose_t545244865  ___m_HeadPose_2;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(RecognitionEndedEventArgs_t3900660893, ___m_Source_0)); }
	inline InteractionSource_t872619030  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t872619030 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t872619030  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(RecognitionEndedEventArgs_t3900660893, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t752709879  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t752709879 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t752709879  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(RecognitionEndedEventArgs_t3900660893, ___m_HeadPose_2)); }
	inline Pose_t545244865  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t545244865 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t545244865  value)
	{
		___m_HeadPose_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECOGNITIONENDEDEVENTARGS_T3900660893_H
#ifndef RECOGNITIONSTARTEDEVENTARGS_T925891504_H
#define RECOGNITIONSTARTEDEVENTARGS_T925891504_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.RecognitionStartedEventArgs
struct  RecognitionStartedEventArgs_t925891504 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.RecognitionStartedEventArgs::m_Source
	InteractionSource_t872619030  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.RecognitionStartedEventArgs::m_SourcePose
	InteractionSourcePose_t752709879  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.RecognitionStartedEventArgs::m_HeadPose
	Pose_t545244865  ___m_HeadPose_2;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(RecognitionStartedEventArgs_t925891504, ___m_Source_0)); }
	inline InteractionSource_t872619030  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t872619030 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t872619030  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(RecognitionStartedEventArgs_t925891504, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t752709879  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t752709879 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t752709879  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(RecognitionStartedEventArgs_t925891504, ___m_HeadPose_2)); }
	inline Pose_t545244865  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t545244865 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t545244865  value)
	{
		___m_HeadPose_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECOGNITIONSTARTEDEVENTARGS_T925891504_H
#ifndef TAPPEDEVENTARGS_T2729789400_H
#define TAPPEDEVENTARGS_T2729789400_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.TappedEventArgs
struct  TappedEventArgs_t2729789400 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.TappedEventArgs::m_Source
	InteractionSource_t872619030  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.TappedEventArgs::m_SourcePose
	InteractionSourcePose_t752709879  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.TappedEventArgs::m_HeadPose
	Pose_t545244865  ___m_HeadPose_2;
	// System.Int32 UnityEngine.XR.WSA.Input.TappedEventArgs::m_TapCount
	int32_t ___m_TapCount_3;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(TappedEventArgs_t2729789400, ___m_Source_0)); }
	inline InteractionSource_t872619030  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t872619030 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t872619030  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(TappedEventArgs_t2729789400, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t752709879  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t752709879 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t752709879  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(TappedEventArgs_t2729789400, ___m_HeadPose_2)); }
	inline Pose_t545244865  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t545244865 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t545244865  value)
	{
		___m_HeadPose_2 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_3() { return static_cast<int32_t>(offsetof(TappedEventArgs_t2729789400, ___m_TapCount_3)); }
	inline int32_t get_m_TapCount_3() const { return ___m_TapCount_3; }
	inline int32_t* get_address_of_m_TapCount_3() { return &___m_TapCount_3; }
	inline void set_m_TapCount_3(int32_t value)
	{
		___m_TapCount_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TAPPEDEVENTARGS_T2729789400_H
#ifndef GETASYNCDELEGATE_T3153225836_H
#define GETASYNCDELEGATE_T3153225836_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Persistence.WorldAnchorStore/GetAsyncDelegate
struct  GetAsyncDelegate_t3153225836  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETASYNCDELEGATE_T3153225836_H
#ifndef DESERIALIZATIONCOMPLETEDELEGATE_T3326018783_H
#define DESERIALIZATIONCOMPLETEDELEGATE_T3326018783_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch/DeserializationCompleteDelegate
struct  DeserializationCompleteDelegate_t3326018783  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESERIALIZATIONCOMPLETEDELEGATE_T3326018783_H
#ifndef SERIALIZATIONCOMPLETEDELEGATE_T3297462927_H
#define SERIALIZATIONCOMPLETEDELEGATE_T3297462927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch/SerializationCompleteDelegate
struct  SerializationCompleteDelegate_t3297462927  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONCOMPLETEDELEGATE_T3297462927_H
#ifndef SERIALIZATIONDATAAVAILABLEDELEGATE_T503932525_H
#define SERIALIZATIONDATAAVAILABLEDELEGATE_T503932525_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch/SerializationDataAvailableDelegate
struct  SerializationDataAvailableDelegate_t503932525  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONDATAAVAILABLEDELEGATE_T503932525_H
#ifndef SURFACECHANGEDDELEGATE_T2591813092_H
#define SURFACECHANGEDDELEGATE_T2591813092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.SurfaceObserver/SurfaceChangedDelegate
struct  SurfaceChangedDelegate_t2591813092  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SURFACECHANGEDDELEGATE_T2591813092_H
#ifndef SURFACEDATAREADYDELEGATE_T4152308677_H
#define SURFACEDATAREADYDELEGATE_T4152308677_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.SurfaceObserver/SurfaceDataReadyDelegate
struct  SurfaceDataReadyDelegate_t4152308677  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SURFACEDATAREADYDELEGATE_T4152308677_H
#ifndef ONCAPTURERESOURCECREATEDCALLBACK_T3785377276_H
#define ONCAPTURERESOURCECREATEDCALLBACK_T3785377276_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.WebCam.PhotoCapture/OnCaptureResourceCreatedCallback
struct  OnCaptureResourceCreatedCallback_t3785377276  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONCAPTURERESOURCECREATEDCALLBACK_T3785377276_H
#ifndef ONCAPTUREDTODISKCALLBACK_T406265622_H
#define ONCAPTUREDTODISKCALLBACK_T406265622_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.WebCam.PhotoCapture/OnCapturedToDiskCallback
struct  OnCapturedToDiskCallback_t406265622  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONCAPTUREDTODISKCALLBACK_T406265622_H
#ifndef ONCAPTUREDTOMEMORYCALLBACK_T287362928_H
#define ONCAPTUREDTOMEMORYCALLBACK_T287362928_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.WebCam.PhotoCapture/OnCapturedToMemoryCallback
struct  OnCapturedToMemoryCallback_t287362928  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONCAPTUREDTOMEMORYCALLBACK_T287362928_H
#ifndef ONPHOTOMODESTARTEDCALLBACK_T4210568704_H
#define ONPHOTOMODESTARTEDCALLBACK_T4210568704_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.WebCam.PhotoCapture/OnPhotoModeStartedCallback
struct  OnPhotoModeStartedCallback_t4210568704  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONPHOTOMODESTARTEDCALLBACK_T4210568704_H
#ifndef ONPHOTOMODESTOPPEDCALLBACK_T1205025237_H
#define ONPHOTOMODESTOPPEDCALLBACK_T1205025237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.WebCam.PhotoCapture/OnPhotoModeStoppedCallback
struct  OnPhotoModeStoppedCallback_t1205025237  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONPHOTOMODESTOPPEDCALLBACK_T1205025237_H
#ifndef ONSTARTEDRECORDINGVIDEOCALLBACK_T3861839134_H
#define ONSTARTEDRECORDINGVIDEOCALLBACK_T3861839134_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.WebCam.VideoCapture/OnStartedRecordingVideoCallback
struct  OnStartedRecordingVideoCallback_t3861839134  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONSTARTEDRECORDINGVIDEOCALLBACK_T3861839134_H
#ifndef ONSTOPPEDRECORDINGVIDEOCALLBACK_T2563676185_H
#define ONSTOPPEDRECORDINGVIDEOCALLBACK_T2563676185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.WebCam.VideoCapture/OnStoppedRecordingVideoCallback
struct  OnStoppedRecordingVideoCallback_t2563676185  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONSTOPPEDRECORDINGVIDEOCALLBACK_T2563676185_H
#ifndef ONVIDEOCAPTURERESOURCECREATEDCALLBACK_T794232766_H
#define ONVIDEOCAPTURERESOURCECREATEDCALLBACK_T794232766_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.WebCam.VideoCapture/OnVideoCaptureResourceCreatedCallback
struct  OnVideoCaptureResourceCreatedCallback_t794232766  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONVIDEOCAPTURERESOURCECREATEDCALLBACK_T794232766_H
#ifndef ONVIDEOMODESTARTEDCALLBACK_T3407805878_H
#define ONVIDEOMODESTARTEDCALLBACK_T3407805878_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.WebCam.VideoCapture/OnVideoModeStartedCallback
struct  OnVideoModeStartedCallback_t3407805878  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONVIDEOMODESTARTEDCALLBACK_T3407805878_H
#ifndef ONVIDEOMODESTOPPEDCALLBACK_T3606558731_H
#define ONVIDEOMODESTOPPEDCALLBACK_T3606558731_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.WebCam.VideoCapture/OnVideoModeStoppedCallback
struct  OnVideoModeStoppedCallback_t3606558731  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONVIDEOMODESTOPPEDCALLBACK_T3606558731_H
#ifndef WORLDANCHOR_T2161774153_H
#define WORLDANCHOR_T2161774153_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.WorldAnchor
struct  WorldAnchor_t2161774153  : public Component_t1923634451
{
public:
	// UnityEngine.XR.WSA.WorldAnchor/OnTrackingChangedDelegate UnityEngine.XR.WSA.WorldAnchor::OnTrackingChanged
	OnTrackingChangedDelegate_t3480415086 * ___OnTrackingChanged_4;

public:
	inline static int32_t get_offset_of_OnTrackingChanged_4() { return static_cast<int32_t>(offsetof(WorldAnchor_t2161774153, ___OnTrackingChanged_4)); }
	inline OnTrackingChangedDelegate_t3480415086 * get_OnTrackingChanged_4() const { return ___OnTrackingChanged_4; }
	inline OnTrackingChangedDelegate_t3480415086 ** get_address_of_OnTrackingChanged_4() { return &___OnTrackingChanged_4; }
	inline void set_OnTrackingChanged_4(OnTrackingChangedDelegate_t3480415086 * value)
	{
		___OnTrackingChanged_4 = value;
		Il2CppCodeGenWriteBarrier((&___OnTrackingChanged_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WORLDANCHOR_T2161774153_H
#ifndef ONTRACKINGCHANGEDDELEGATE_T3480415086_H
#define ONTRACKINGCHANGEDDELEGATE_T3480415086_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.WorldAnchor/OnTrackingChangedDelegate
struct  OnTrackingChangedDelegate_t3480415086  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONTRACKINGCHANGEDDELEGATE_T3480415086_H
#ifndef ONPOSITIONALLOCATORSTATECHANGEDDELEGATE_T1145932820_H
#define ONPOSITIONALLOCATORSTATECHANGEDDELEGATE_T1145932820_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.WorldManager/OnPositionalLocatorStateChangedDelegate
struct  OnPositionalLocatorStateChangedDelegate_t1145932820  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONPOSITIONALLOCATORSTATECHANGEDDELEGATE_T1145932820_H
#ifndef ACTION_1_T464622055_H
#define ACTION_1_T464622055_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.XR.WSA.Input.HoldCanceledEventArgs>
struct  Action_1_t464622055  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T464622055_H
#ifndef ACTION_1_T1168103046_H
#define ACTION_1_T1168103046_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.XR.WSA.Input.HoldCompletedEventArgs>
struct  Action_1_t1168103046  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T1168103046_H
#ifndef ACTION_1_T3725713036_H
#define ACTION_1_T3725713036_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.XR.WSA.Input.HoldStartedEventArgs>
struct  Action_1_t3725713036  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T3725713036_H
#ifndef ACTION_1_T765149492_H
#define ACTION_1_T765149492_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCanceledEventArgs>
struct  Action_1_t765149492  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T765149492_H
#ifndef ACTION_1_T1957047783_H
#define ACTION_1_T1957047783_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCompletedEventArgs>
struct  Action_1_t1957047783  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T1957047783_H
#ifndef ACTION_1_T1288711754_H
#define ACTION_1_T1288711754_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationStartedEventArgs>
struct  Action_1_t1288711754  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T1288711754_H
#ifndef ACTION_1_T40843125_H
#define ACTION_1_T40843125_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationUpdatedEventArgs>
struct  Action_1_t40843125  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T40843125_H
#ifndef ACTION_1_T3270971242_H
#define ACTION_1_T3270971242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs>
struct  Action_1_t3270971242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T3270971242_H
#ifndef ACTION_1_T341761863_H
#define ACTION_1_T341761863_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs>
struct  Action_1_t341761863  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T341761863_H
#ifndef ACTION_1_T3544757211_H
#define ACTION_1_T3544757211_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.XR.WSA.Input.NavigationStartedEventArgs>
struct  Action_1_t3544757211  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T3544757211_H
#ifndef ACTION_1_T1156518837_H
#define ACTION_1_T1156518837_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs>
struct  Action_1_t1156518837  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T1156518837_H
#ifndef ACTION_1_T4073128488_H
#define ACTION_1_T4073128488_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.XR.WSA.Input.RecognitionEndedEventArgs>
struct  Action_1_t4073128488  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T4073128488_H
#ifndef ACTION_1_T1098359099_H
#define ACTION_1_T1098359099_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.XR.WSA.Input.RecognitionStartedEventArgs>
struct  Action_1_t1098359099  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T1098359099_H
#ifndef ACTION_1_T2902256995_H
#define ACTION_1_T2902256995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.XR.WSA.Input.TappedEventArgs>
struct  Action_1_t2902256995  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T2902256995_H
#ifndef MESHCOLLIDER_T903564387_H
#define MESHCOLLIDER_T903564387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshCollider
struct  MeshCollider_t903564387  : public Collider_t1773347010
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHCOLLIDER_T903564387_H
#ifndef INTERACTIONSOURCESTATE_T3425813774_H
#define INTERACTIONSOURCESTATE_T3425813774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.InteractionSourceState
struct  InteractionSourceState_t3425813774 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSourceProperties UnityEngine.XR.WSA.Input.InteractionSourceState::m_Properties
	InteractionSourceProperties_t3202230305  ___m_Properties_0;
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.InteractionSourceState::m_Source
	InteractionSource_t872619030  ___m_Source_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.InteractionSourceState::m_HeadPose
	Pose_t545244865  ___m_HeadPose_2;
	// UnityEngine.Vector2 UnityEngine.XR.WSA.Input.InteractionSourceState::m_ThumbstickPosition
	Vector2_t2156229523  ___m_ThumbstickPosition_3;
	// UnityEngine.Vector2 UnityEngine.XR.WSA.Input.InteractionSourceState::m_TouchpadPosition
	Vector2_t2156229523  ___m_TouchpadPosition_4;
	// System.Single UnityEngine.XR.WSA.Input.InteractionSourceState::m_SelectPressedAmount
	float ___m_SelectPressedAmount_5;
	// UnityEngine.XR.WSA.Input.InteractionSourceStateFlags UnityEngine.XR.WSA.Input.InteractionSourceState::m_Flags
	int32_t ___m_Flags_6;

public:
	inline static int32_t get_offset_of_m_Properties_0() { return static_cast<int32_t>(offsetof(InteractionSourceState_t3425813774, ___m_Properties_0)); }
	inline InteractionSourceProperties_t3202230305  get_m_Properties_0() const { return ___m_Properties_0; }
	inline InteractionSourceProperties_t3202230305 * get_address_of_m_Properties_0() { return &___m_Properties_0; }
	inline void set_m_Properties_0(InteractionSourceProperties_t3202230305  value)
	{
		___m_Properties_0 = value;
	}

	inline static int32_t get_offset_of_m_Source_1() { return static_cast<int32_t>(offsetof(InteractionSourceState_t3425813774, ___m_Source_1)); }
	inline InteractionSource_t872619030  get_m_Source_1() const { return ___m_Source_1; }
	inline InteractionSource_t872619030 * get_address_of_m_Source_1() { return &___m_Source_1; }
	inline void set_m_Source_1(InteractionSource_t872619030  value)
	{
		___m_Source_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(InteractionSourceState_t3425813774, ___m_HeadPose_2)); }
	inline Pose_t545244865  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t545244865 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t545244865  value)
	{
		___m_HeadPose_2 = value;
	}

	inline static int32_t get_offset_of_m_ThumbstickPosition_3() { return static_cast<int32_t>(offsetof(InteractionSourceState_t3425813774, ___m_ThumbstickPosition_3)); }
	inline Vector2_t2156229523  get_m_ThumbstickPosition_3() const { return ___m_ThumbstickPosition_3; }
	inline Vector2_t2156229523 * get_address_of_m_ThumbstickPosition_3() { return &___m_ThumbstickPosition_3; }
	inline void set_m_ThumbstickPosition_3(Vector2_t2156229523  value)
	{
		___m_ThumbstickPosition_3 = value;
	}

	inline static int32_t get_offset_of_m_TouchpadPosition_4() { return static_cast<int32_t>(offsetof(InteractionSourceState_t3425813774, ___m_TouchpadPosition_4)); }
	inline Vector2_t2156229523  get_m_TouchpadPosition_4() const { return ___m_TouchpadPosition_4; }
	inline Vector2_t2156229523 * get_address_of_m_TouchpadPosition_4() { return &___m_TouchpadPosition_4; }
	inline void set_m_TouchpadPosition_4(Vector2_t2156229523  value)
	{
		___m_TouchpadPosition_4 = value;
	}

	inline static int32_t get_offset_of_m_SelectPressedAmount_5() { return static_cast<int32_t>(offsetof(InteractionSourceState_t3425813774, ___m_SelectPressedAmount_5)); }
	inline float get_m_SelectPressedAmount_5() const { return ___m_SelectPressedAmount_5; }
	inline float* get_address_of_m_SelectPressedAmount_5() { return &___m_SelectPressedAmount_5; }
	inline void set_m_SelectPressedAmount_5(float value)
	{
		___m_SelectPressedAmount_5 = value;
	}

	inline static int32_t get_offset_of_m_Flags_6() { return static_cast<int32_t>(offsetof(InteractionSourceState_t3425813774, ___m_Flags_6)); }
	inline int32_t get_m_Flags_6() const { return ___m_Flags_6; }
	inline int32_t* get_address_of_m_Flags_6() { return &___m_Flags_6; }
	inline void set_m_Flags_6(int32_t value)
	{
		___m_Flags_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERACTIONSOURCESTATE_T3425813774_H
// System.Delegate[]
struct DelegateU5BU5D_t1703627840  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t1188392813 * m_Items[1];

public:
	inline Delegate_t1188392813 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t1188392813 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t1188392813 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Delegate_t1188392813 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t1188392813 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t1188392813 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Byte[]
struct ByteU5BU5D_t4116647657  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};

extern "C" void WorldAnchorStore_t633400888_marshal_pinvoke(const WorldAnchorStore_t633400888& unmarshaled, WorldAnchorStore_t633400888_marshaled_pinvoke& marshaled);
extern "C" void WorldAnchorStore_t633400888_marshal_pinvoke_back(const WorldAnchorStore_t633400888_marshaled_pinvoke& marshaled, WorldAnchorStore_t633400888& unmarshaled);
extern "C" void WorldAnchorStore_t633400888_marshal_pinvoke_cleanup(WorldAnchorStore_t633400888_marshaled_pinvoke& marshaled);
extern "C" void WorldAnchorTransferBatch_t2392365061_marshal_pinvoke(const WorldAnchorTransferBatch_t2392365061& unmarshaled, WorldAnchorTransferBatch_t2392365061_marshaled_pinvoke& marshaled);
extern "C" void WorldAnchorTransferBatch_t2392365061_marshal_pinvoke_back(const WorldAnchorTransferBatch_t2392365061_marshaled_pinvoke& marshaled, WorldAnchorTransferBatch_t2392365061& unmarshaled);
extern "C" void WorldAnchorTransferBatch_t2392365061_marshal_pinvoke_cleanup(WorldAnchorTransferBatch_t2392365061_marshaled_pinvoke& marshaled);
extern "C" void PhotoCapture_t3135222410_marshal_pinvoke(const PhotoCapture_t3135222410& unmarshaled, PhotoCapture_t3135222410_marshaled_pinvoke& marshaled);
extern "C" void PhotoCapture_t3135222410_marshal_pinvoke_back(const PhotoCapture_t3135222410_marshaled_pinvoke& marshaled, PhotoCapture_t3135222410& unmarshaled);
extern "C" void PhotoCapture_t3135222410_marshal_pinvoke_cleanup(PhotoCapture_t3135222410_marshaled_pinvoke& marshaled);
extern "C" void VideoCapture_t3191060632_marshal_pinvoke(const VideoCapture_t3191060632& unmarshaled, VideoCapture_t3191060632_marshaled_pinvoke& marshaled);
extern "C" void VideoCapture_t3191060632_marshal_pinvoke_back(const VideoCapture_t3191060632_marshaled_pinvoke& marshaled, VideoCapture_t3191060632& unmarshaled);
extern "C" void VideoCapture_t3191060632_marshal_pinvoke_cleanup(VideoCapture_t3191060632_marshaled_pinvoke& marshaled);

// System.Void System.Action`1<UnityEngine.XR.WSA.Input.HoldCanceledEventArgs>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR void Action_1_Invoke_m2147270457_gshared (Action_1_t464622055 * __this, HoldCanceledEventArgs_t292154460  p0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.HoldCompletedEventArgs>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR void Action_1_Invoke_m1736012830_gshared (Action_1_t1168103046 * __this, HoldCompletedEventArgs_t995635451  p0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.HoldStartedEventArgs>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR void Action_1_Invoke_m1848790106_gshared (Action_1_t3725713036 * __this, HoldStartedEventArgs_t3553245441  p0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.TappedEventArgs>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR void Action_1_Invoke_m1051473384_gshared (Action_1_t2902256995 * __this, TappedEventArgs_t2729789400  p0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCanceledEventArgs>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR void Action_1_Invoke_m4120412433_gshared (Action_1_t765149492 * __this, ManipulationCanceledEventArgs_t592681897  p0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCompletedEventArgs>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR void Action_1_Invoke_m2481529521_gshared (Action_1_t1957047783 * __this, ManipulationCompletedEventArgs_t1784580188  p0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.ManipulationStartedEventArgs>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR void Action_1_Invoke_m1029213443_gshared (Action_1_t1288711754 * __this, ManipulationStartedEventArgs_t1116244159  p0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.ManipulationUpdatedEventArgs>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR void Action_1_Invoke_m3567823837_gshared (Action_1_t40843125 * __this, ManipulationUpdatedEventArgs_t4163342826  p0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR void Action_1_Invoke_m3105741079_gshared (Action_1_t3270971242 * __this, NavigationCanceledEventArgs_t3098503647  p0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR void Action_1_Invoke_m1389206130_gshared (Action_1_t341761863 * __this, NavigationCompletedEventArgs_t169294268  p0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.NavigationStartedEventArgs>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR void Action_1_Invoke_m1449216168_gshared (Action_1_t3544757211 * __this, NavigationStartedEventArgs_t3372289616  p0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR void Action_1_Invoke_m3474815515_gshared (Action_1_t1156518837 * __this, NavigationUpdatedEventArgs_t984051242  p0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.RecognitionEndedEventArgs>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR void Action_1_Invoke_m635090190_gshared (Action_1_t4073128488 * __this, RecognitionEndedEventArgs_t3900660893  p0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.RecognitionStartedEventArgs>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR void Action_1_Invoke_m671841968_gshared (Action_1_t1098359099 * __this, RecognitionStartedEventArgs_t925891504  p0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.GestureErrorEventArgs>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR void Action_1_Invoke_m355844915_gshared (Action_1_t3114543800 * __this, GestureErrorEventArgs_t2942076205  p0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UnityEngine.XR.WSA.Input.InteractionSource>::get_HasValue()
extern "C" IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m3483213605_gshared (Nullable_1_t2595181112 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<UnityEngine.XR.WSA.Input.InteractionSource>::get_Value()
extern "C" IL2CPP_METHOD_ATTR InteractionSource_t872619030  Nullable_1_get_Value_m3671873047_gshared (Nullable_1_t2595181112 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.XR.WSA.Input.GestureErrorEventArgs::set_error(System.String)
extern "C" IL2CPP_METHOD_ATTR void GestureErrorEventArgs_set_error_m1885211944 (GestureErrorEventArgs_t2942076205 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.GestureErrorEventArgs::set_hresult(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void GestureErrorEventArgs_set_hresult_m2125462606 (GestureErrorEventArgs_t2942076205 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.GestureErrorEventArgs::.ctor(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void GestureErrorEventArgs__ctor_m1144453585 (GestureErrorEventArgs_t2942076205 * __this, String_t* ___error0, int32_t ___hresult1, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m3063970704 (RuntimeObject * __this /* static, unused */, intptr_t p0, intptr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::DestroyThreaded()
extern "C" IL2CPP_METHOD_ATTR void GestureRecognizer_DestroyThreaded_m1228448031 (GestureRecognizer_t1566529591 * __this, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
extern "C" IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m1177400158 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
extern "C" IL2CPP_METHOD_ATTR void Object_Finalize_m3076187857 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::Destroy()
extern "C" IL2CPP_METHOD_ATTR void GestureRecognizer_Destroy_m1373344732 (GestureRecognizer_t1566529591 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_forward_m3100859705 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Quaternion_op_Multiply_m2607404835 (RuntimeObject * __this /* static, unused */, Quaternion_t2301928331  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Ray__ctor_m168149494 (Ray_t3785851493 * __this, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/HoldCanceledEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR void HoldCanceledEventDelegate_Invoke_m2852931578 (HoldCanceledEventDelegate_t3242927192 * __this, int32_t ___source0, Ray_t3785851493  ___headRay1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.HoldCanceledEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m2147270457 (Action_1_t464622055 * __this, HoldCanceledEventArgs_t292154460  p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t464622055 *, HoldCanceledEventArgs_t292154460 , const RuntimeMethod*))Action_1_Invoke_m2147270457_gshared)(__this, p0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/HoldCompletedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR void HoldCompletedEventDelegate_Invoke_m776961770 (HoldCompletedEventDelegate_t4112318659 * __this, int32_t ___source0, Ray_t3785851493  ___headRay1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.HoldCompletedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m1736012830 (Action_1_t1168103046 * __this, HoldCompletedEventArgs_t995635451  p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t1168103046 *, HoldCompletedEventArgs_t995635451 , const RuntimeMethod*))Action_1_Invoke_m1736012830_gshared)(__this, p0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/HoldStartedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR void HoldStartedEventDelegate_Invoke_m3613134118 (HoldStartedEventDelegate_t1669693510 * __this, int32_t ___source0, Ray_t3785851493  ___headRay1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.HoldStartedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m1848790106 (Action_1_t3725713036 * __this, HoldStartedEventArgs_t3553245441  p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3725713036 *, HoldStartedEventArgs_t3553245441 , const RuntimeMethod*))Action_1_Invoke_m1848790106_gshared)(__this, p0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/TappedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,System.Int32,UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR void TappedEventDelegate_Invoke_m537578258 (TappedEventDelegate_t286622765 * __this, int32_t ___source0, int32_t ___tapCount1, Ray_t3785851493  ___headRay2, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.TappedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m1051473384 (Action_1_t2902256995 * __this, TappedEventArgs_t2729789400  p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t2902256995 *, TappedEventArgs_t2729789400 , const RuntimeMethod*))Action_1_Invoke_m1051473384_gshared)(__this, p0, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_zero_m1409827619 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationCanceledEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR void ManipulationCanceledEventDelegate_Invoke_m730403681 (ManipulationCanceledEventDelegate_t3141027694 * __this, int32_t ___source0, Vector3_t3722313464  ___cumulativeDelta1, Ray_t3785851493  ___headRay2, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCanceledEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m4120412433 (Action_1_t765149492 * __this, ManipulationCanceledEventArgs_t592681897  p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t765149492 *, ManipulationCanceledEventArgs_t592681897 , const RuntimeMethod*))Action_1_Invoke_m4120412433_gshared)(__this, p0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationCompletedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR void ManipulationCompletedEventDelegate_Invoke_m1444946867 (ManipulationCompletedEventDelegate_t3126788776 * __this, int32_t ___source0, Vector3_t3722313464  ___cumulativeDelta1, Ray_t3785851493  ___headRay2, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCompletedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m2481529521 (Action_1_t1957047783 * __this, ManipulationCompletedEventArgs_t1784580188  p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t1957047783 *, ManipulationCompletedEventArgs_t1784580188 , const RuntimeMethod*))Action_1_Invoke_m2481529521_gshared)(__this, p0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationStartedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR void ManipulationStartedEventDelegate_Invoke_m78456035 (ManipulationStartedEventDelegate_t1581880091 * __this, int32_t ___source0, Vector3_t3722313464  ___cumulativeDelta1, Ray_t3785851493  ___headRay2, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.ManipulationStartedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m1029213443 (Action_1_t1288711754 * __this, ManipulationStartedEventArgs_t1116244159  p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t1288711754 *, ManipulationStartedEventArgs_t1116244159 , const RuntimeMethod*))Action_1_Invoke_m1029213443_gshared)(__this, p0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationUpdatedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR void ManipulationUpdatedEventDelegate_Invoke_m3096075429 (ManipulationUpdatedEventDelegate_t2990350064 * __this, int32_t ___source0, Vector3_t3722313464  ___cumulativeDelta1, Ray_t3785851493  ___headRay2, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.ManipulationUpdatedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m3567823837 (Action_1_t40843125 * __this, ManipulationUpdatedEventArgs_t4163342826  p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t40843125 *, ManipulationUpdatedEventArgs_t4163342826 , const RuntimeMethod*))Action_1_Invoke_m3567823837_gshared)(__this, p0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationCanceledEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR void NavigationCanceledEventDelegate_Invoke_m2344031408 (NavigationCanceledEventDelegate_t2505886250 * __this, int32_t ___source0, Vector3_t3722313464  ___normalizedOffset1, Ray_t3785851493  ___headRay2, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m3105741079 (Action_1_t3270971242 * __this, NavigationCanceledEventArgs_t3098503647  p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3270971242 *, NavigationCanceledEventArgs_t3098503647 , const RuntimeMethod*))Action_1_Invoke_m3105741079_gshared)(__this, p0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationCompletedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR void NavigationCompletedEventDelegate_Invoke_m2058281490 (NavigationCompletedEventDelegate_t3119650473 * __this, int32_t ___source0, Vector3_t3722313464  ___normalizedOffset1, Ray_t3785851493  ___headRay2, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m1389206130 (Action_1_t341761863 * __this, NavigationCompletedEventArgs_t169294268  p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t341761863 *, NavigationCompletedEventArgs_t169294268 , const RuntimeMethod*))Action_1_Invoke_m1389206130_gshared)(__this, p0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationStartedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR void NavigationStartedEventDelegate_Invoke_m3831826425 (NavigationStartedEventDelegate_t3496816902 * __this, int32_t ___source0, Vector3_t3722313464  ___normalizedOffset1, Ray_t3785851493  ___headRay2, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.NavigationStartedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m1449216168 (Action_1_t3544757211 * __this, NavigationStartedEventArgs_t3372289616  p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3544757211 *, NavigationStartedEventArgs_t3372289616 , const RuntimeMethod*))Action_1_Invoke_m1449216168_gshared)(__this, p0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationUpdatedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR void NavigationUpdatedEventDelegate_Invoke_m3669550307 (NavigationUpdatedEventDelegate_t2894903996 * __this, int32_t ___source0, Vector3_t3722313464  ___normalizedOffset1, Ray_t3785851493  ___headRay2, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m3474815515 (Action_1_t1156518837 * __this, NavigationUpdatedEventArgs_t984051242  p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t1156518837 *, NavigationUpdatedEventArgs_t984051242 , const RuntimeMethod*))Action_1_Invoke_m3474815515_gshared)(__this, p0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/RecognitionEndedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR void RecognitionEndedEventDelegate_Invoke_m3917742942 (RecognitionEndedEventDelegate_t2892804592 * __this, int32_t ___source0, Ray_t3785851493  ___headRay1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.RecognitionEndedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m635090190 (Action_1_t4073128488 * __this, RecognitionEndedEventArgs_t3900660893  p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t4073128488 *, RecognitionEndedEventArgs_t3900660893 , const RuntimeMethod*))Action_1_Invoke_m635090190_gshared)(__this, p0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/RecognitionStartedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR void RecognitionStartedEventDelegate_Invoke_m285038765 (RecognitionStartedEventDelegate_t3727320336 * __this, int32_t ___source0, Ray_t3785851493  ___headRay1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.RecognitionStartedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m671841968 (Action_1_t1098359099 * __this, RecognitionStartedEventArgs_t925891504  p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t1098359099 *, RecognitionStartedEventArgs_t925891504 , const RuntimeMethod*))Action_1_Invoke_m671841968_gshared)(__this, p0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/GestureErrorDelegate::Invoke(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void GestureErrorDelegate_Invoke_m91315099 (GestureErrorDelegate_t3254371646 * __this, String_t* ___error0, int32_t ___hresult1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.GestureErrorEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m355844915 (Action_1_t3114543800 * __this, GestureErrorEventArgs_t2942076205  p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3114543800 *, GestureErrorEventArgs_t2942076205 , const RuntimeMethod*))Action_1_Invoke_m355844915_gshared)(__this, p0, method);
}
// System.Boolean System.Nullable`1<UnityEngine.XR.WSA.Input.InteractionSource>::get_HasValue()
inline bool Nullable_1_get_HasValue_m3483213605 (Nullable_1_t2595181112 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t2595181112 *, const RuntimeMethod*))Nullable_1_get_HasValue_m3483213605_gshared)(__this, method);
}
// !0 System.Nullable`1<UnityEngine.XR.WSA.Input.InteractionSource>::get_Value()
inline InteractionSource_t872619030  Nullable_1_get_Value_m3671873047 (Nullable_1_t2595181112 * __this, const RuntimeMethod* method)
{
	return ((  InteractionSource_t872619030  (*) (Nullable_1_t2595181112 *, const RuntimeMethod*))Nullable_1_get_Value_m3671873047_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSource::Equals(UnityEngine.XR.WSA.Input.InteractionSource)
extern "C" IL2CPP_METHOD_ATTR bool InteractionSource_Equals_m1974645348 (InteractionSource_t872619030 * __this, InteractionSource_t872619030  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSource::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool InteractionSource_Equals_m3370649879 (InteractionSource_t872619030 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.WSA.Input.InteractionSource::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t InteractionSource_GetHashCode_m3583249664 (InteractionSource_t872619030 * __this, const RuntimeMethod* method);
// System.UInt32 UnityEngine.XR.WSA.Input.InteractionSource::get_id()
extern "C" IL2CPP_METHOD_ATTR uint32_t InteractionSource_get_id_m1355705482 (InteractionSource_t872619030 * __this, const RuntimeMethod* method);
// UnityEngine.XR.WSA.Input.InteractionSourceKind UnityEngine.XR.WSA.Input.InteractionSource::get_kind()
extern "C" IL2CPP_METHOD_ATTR int32_t InteractionSource_get_kind_m2286468273 (InteractionSource_t872619030 * __this, const RuntimeMethod* method);
// UnityEngine.XR.WSA.Input.InteractionSourceHandedness UnityEngine.XR.WSA.Input.InteractionSource::get_handedness()
extern "C" IL2CPP_METHOD_ATTR int32_t InteractionSource_get_handedness_m1998723134 (InteractionSource_t872619030 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSource::get_supportsGrasp()
extern "C" IL2CPP_METHOD_ATTR bool InteractionSource_get_supportsGrasp_m1074556827 (InteractionSource_t872619030 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSource::get_supportsMenu()
extern "C" IL2CPP_METHOD_ATTR bool InteractionSource_get_supportsMenu_m1494580913 (InteractionSource_t872619030 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSource::get_supportsPointing()
extern "C" IL2CPP_METHOD_ATTR bool InteractionSource_get_supportsPointing_m662541407 (InteractionSource_t872619030 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSource::get_supportsThumbstick()
extern "C" IL2CPP_METHOD_ATTR bool InteractionSource_get_supportsThumbstick_m1801711152 (InteractionSource_t872619030 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSource::get_supportsTouchpad()
extern "C" IL2CPP_METHOD_ATTR bool InteractionSource_get_supportsTouchpad_m2009445912 (InteractionSource_t872619030 * __this, const RuntimeMethod* method);
// System.UInt16 UnityEngine.XR.WSA.Input.InteractionSource::get_vendorId()
extern "C" IL2CPP_METHOD_ATTR uint16_t InteractionSource_get_vendorId_m319805202 (InteractionSource_t872619030 * __this, const RuntimeMethod* method);
// System.UInt16 UnityEngine.XR.WSA.Input.InteractionSource::get_productId()
extern "C" IL2CPP_METHOD_ATTR uint16_t InteractionSource_get_productId_m985142844 (InteractionSource_t872619030 * __this, const RuntimeMethod* method);
// System.UInt16 UnityEngine.XR.WSA.Input.InteractionSource::get_productVersion()
extern "C" IL2CPP_METHOD_ATTR uint16_t InteractionSource_get_productVersion_m2206272038 (InteractionSource_t872619030 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Persistence.WorldAnchorStore::.ctor(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void WorldAnchorStore__ctor_m759187739 (WorldAnchorStore_t633400888 * __this, intptr_t ___nativePtr0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Persistence.WorldAnchorStore/GetAsyncDelegate::Invoke(UnityEngine.XR.WSA.Persistence.WorldAnchorStore)
extern "C" IL2CPP_METHOD_ATTR void GetAsyncDelegate_Invoke_m794042970 (GetAsyncDelegate_t3153225836 * __this, WorldAnchorStore_t633400888 * ___store0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Persistence.WorldAnchorStore::Internal_Destroy()
extern "C" IL2CPP_METHOD_ATTR void WorldAnchorStore_Internal_Destroy_m4041745196 (WorldAnchorStore_t633400888 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::DisposeThreaded_Internal()
extern "C" IL2CPP_METHOD_ATTR void WorldAnchorTransferBatch_DisposeThreaded_Internal_m4272061354 (WorldAnchorTransferBatch_t2392365061 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::Dispose_Internal()
extern "C" IL2CPP_METHOD_ATTR void WorldAnchorTransferBatch_Dispose_Internal_m2937056051 (WorldAnchorTransferBatch_t2392365061 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch/SerializationDataAvailableDelegate::Invoke(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void SerializationDataAvailableDelegate_Invoke_m3547478441 (SerializationDataAvailableDelegate_t503932525 * __this, ByteU5BU5D_t4116647657* ___data0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch/SerializationCompleteDelegate::Invoke(UnityEngine.XR.WSA.Sharing.SerializationCompletionReason)
extern "C" IL2CPP_METHOD_ATTR void SerializationCompleteDelegate_Invoke_m3529283275 (SerializationCompleteDelegate_t3297462927 * __this, int32_t ___completionReason0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::.ctor(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void WorldAnchorTransferBatch__ctor_m1276800205 (WorldAnchorTransferBatch_t2392365061 * __this, intptr_t ___nativePtr0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch/DeserializationCompleteDelegate::Invoke(UnityEngine.XR.WSA.Sharing.SerializationCompletionReason,UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch)
extern "C" IL2CPP_METHOD_ATTR void DeserializationCompleteDelegate_Invoke_m3021627786 (DeserializationCompleteDelegate_t3326018783 * __this, int32_t ___completionReason0, WorldAnchorTransferBatch_t2392365061 * ___deserializedTransferBatch1, const RuntimeMethod* method);
// System.DateTime System.DateTime::FromFileTime(System.Int64)
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  DateTime_FromFileTime_m47770515 (RuntimeObject * __this /* static, unused */, int64_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SurfaceObserver/SurfaceChangedDelegate::Invoke(UnityEngine.XR.WSA.SurfaceId,UnityEngine.XR.WSA.SurfaceChange,UnityEngine.Bounds,System.DateTime)
extern "C" IL2CPP_METHOD_ATTR void SurfaceChangedDelegate_Invoke_m2788123310 (SurfaceChangedDelegate_t2591813092 * __this, SurfaceId_t2999094746  ___surfaceId0, int32_t ___changeType1, Bounds_t2266837910  ___bounds2, DateTime_t3738529785  ___updateTime3, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SurfaceObserver/SurfaceDataReadyDelegate::Invoke(UnityEngine.XR.WSA.SurfaceData,System.Boolean,System.Single)
extern "C" IL2CPP_METHOD_ATTR void SurfaceDataReadyDelegate_Invoke_m145795677 (SurfaceDataReadyDelegate_t4152308677 * __this, SurfaceData_t200825419  ___bakedData0, bool ___outputWritten1, float ___elapsedBakeTimeSeconds2, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SurfaceObserver::DestroyThreaded()
extern "C" IL2CPP_METHOD_ATTR void SurfaceObserver_DestroyThreaded_m2892117220 (SurfaceObserver_t1930409633 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SurfaceObserver::Destroy()
extern "C" IL2CPP_METHOD_ATTR void SurfaceObserver_Destroy_m3658786827 (SurfaceObserver_t1930409633 * __this, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m408849716 (RuntimeObject * __this /* static, unused */, intptr_t p0, intptr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture/OnCaptureResourceCreatedCallback::Invoke(UnityEngine.XR.WSA.WebCam.PhotoCapture)
extern "C" IL2CPP_METHOD_ATTR void OnCaptureResourceCreatedCallback_Invoke_m4080042670 (OnCaptureResourceCreatedCallback_t3785377276 * __this, PhotoCapture_t3135222410 * ___captureObject0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture::.ctor(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void PhotoCapture__ctor_m4119059844 (PhotoCapture_t3135222410 * __this, intptr_t ___nativeCaptureObject0, const RuntimeMethod* method);
// UnityEngine.XR.WSA.WebCam.PhotoCapture/PhotoCaptureResult UnityEngine.XR.WSA.WebCam.PhotoCapture::MakeCaptureResult(System.Int64)
extern "C" IL2CPP_METHOD_ATTR PhotoCaptureResult_t1090015350  PhotoCapture_MakeCaptureResult_m1924927526 (RuntimeObject * __this /* static, unused */, int64_t ___hResult0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture/OnPhotoModeStartedCallback::Invoke(UnityEngine.XR.WSA.WebCam.PhotoCapture/PhotoCaptureResult)
extern "C" IL2CPP_METHOD_ATTR void OnPhotoModeStartedCallback_Invoke_m3688565566 (OnPhotoModeStartedCallback_t4210568704 * __this, PhotoCaptureResult_t1090015350  ___result0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture/OnPhotoModeStoppedCallback::Invoke(UnityEngine.XR.WSA.WebCam.PhotoCapture/PhotoCaptureResult)
extern "C" IL2CPP_METHOD_ATTR void OnPhotoModeStoppedCallback_Invoke_m2313188363 (OnPhotoModeStoppedCallback_t1205025237 * __this, PhotoCaptureResult_t1090015350  ___result0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture/OnCapturedToDiskCallback::Invoke(UnityEngine.XR.WSA.WebCam.PhotoCapture/PhotoCaptureResult)
extern "C" IL2CPP_METHOD_ATTR void OnCapturedToDiskCallback_Invoke_m3252107161 (OnCapturedToDiskCallback_t406265622 * __this, PhotoCaptureResult_t1090015350  ___result0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame::.ctor(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void PhotoCaptureFrame__ctor_m606131785 (PhotoCaptureFrame_t831849718 * __this, intptr_t ___nativePtr0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture/OnCapturedToMemoryCallback::Invoke(UnityEngine.XR.WSA.WebCam.PhotoCapture/PhotoCaptureResult,UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame)
extern "C" IL2CPP_METHOD_ATTR void OnCapturedToMemoryCallback_Invoke_m3002007005 (OnCapturedToMemoryCallback_t287362928 * __this, PhotoCaptureResult_t1090015350  ___result0, PhotoCaptureFrame_t831849718 * ___photoCaptureFrame1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture::Dispose_Internal()
extern "C" IL2CPP_METHOD_ATTR void PhotoCapture_Dispose_Internal_m1183514933 (PhotoCapture_t3135222410 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture::DisposeThreaded_Internal()
extern "C" IL2CPP_METHOD_ATTR void PhotoCapture_DisposeThreaded_Internal_m3505357448 (PhotoCapture_t3135222410 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame::GetDataLength()
extern "C" IL2CPP_METHOD_ATTR int32_t PhotoCaptureFrame_GetDataLength_m1534572832 (PhotoCaptureFrame_t831849718 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame::set_dataLength(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void PhotoCaptureFrame_set_dataLength_m444842192 (PhotoCaptureFrame_t831849718 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame::GetHasLocationData()
extern "C" IL2CPP_METHOD_ATTR bool PhotoCaptureFrame_GetHasLocationData_m282091044 (PhotoCaptureFrame_t831849718 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame::set_hasLocationData(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void PhotoCaptureFrame_set_hasLocationData_m1699222113 (PhotoCaptureFrame_t831849718 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.XR.WSA.WebCam.CapturePixelFormat UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame::GetCapturePixelFormat()
extern "C" IL2CPP_METHOD_ATTR int32_t PhotoCaptureFrame_GetCapturePixelFormat_m3608178055 (PhotoCaptureFrame_t831849718 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame::set_pixelFormat(UnityEngine.XR.WSA.WebCam.CapturePixelFormat)
extern "C" IL2CPP_METHOD_ATTR void PhotoCaptureFrame_set_pixelFormat_m592693207 (PhotoCaptureFrame_t831849718 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame::get_dataLength()
extern "C" IL2CPP_METHOD_ATTR int32_t PhotoCaptureFrame_get_dataLength_m698767877 (PhotoCaptureFrame_t831849718 * __this, const RuntimeMethod* method);
// System.Void System.GC::AddMemoryPressure(System.Int64)
extern "C" IL2CPP_METHOD_ATTR void GC_AddMemoryPressure_m410792512 (RuntimeObject * __this /* static, unused */, int64_t p0, const RuntimeMethod* method);
// System.Void System.GC::RemoveMemoryPressure(System.Int64)
extern "C" IL2CPP_METHOD_ATTR void GC_RemoveMemoryPressure_m3919346798 (RuntimeObject * __this /* static, unused */, int64_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame::Dispose_Internal()
extern "C" IL2CPP_METHOD_ATTR void PhotoCaptureFrame_Dispose_Internal_m2221519305 (PhotoCaptureFrame_t831849718 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame::Cleanup()
extern "C" IL2CPP_METHOD_ATTR void PhotoCaptureFrame_Cleanup_m3036154540 (PhotoCaptureFrame_t831849718 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture/OnVideoCaptureResourceCreatedCallback::Invoke(UnityEngine.XR.WSA.WebCam.VideoCapture)
extern "C" IL2CPP_METHOD_ATTR void OnVideoCaptureResourceCreatedCallback_Invoke_m1901797426 (OnVideoCaptureResourceCreatedCallback_t794232766 * __this, VideoCapture_t3191060632 * ___captureObject0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture::.ctor(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void VideoCapture__ctor_m1447976283 (VideoCapture_t3191060632 * __this, intptr_t ___nativeCaptureObject0, const RuntimeMethod* method);
// UnityEngine.XR.WSA.WebCam.VideoCapture/VideoCaptureResult UnityEngine.XR.WSA.WebCam.VideoCapture::MakeCaptureResult(System.Int64)
extern "C" IL2CPP_METHOD_ATTR VideoCaptureResult_t880209540  VideoCapture_MakeCaptureResult_m2984416805 (RuntimeObject * __this /* static, unused */, int64_t ___hResult0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture/OnVideoModeStartedCallback::Invoke(UnityEngine.XR.WSA.WebCam.VideoCapture/VideoCaptureResult)
extern "C" IL2CPP_METHOD_ATTR void OnVideoModeStartedCallback_Invoke_m2745026342 (OnVideoModeStartedCallback_t3407805878 * __this, VideoCaptureResult_t880209540  ___result0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture/OnVideoModeStoppedCallback::Invoke(UnityEngine.XR.WSA.WebCam.VideoCapture/VideoCaptureResult)
extern "C" IL2CPP_METHOD_ATTR void OnVideoModeStoppedCallback_Invoke_m3094092899 (OnVideoModeStoppedCallback_t3606558731 * __this, VideoCaptureResult_t880209540  ___result0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture/OnStartedRecordingVideoCallback::Invoke(UnityEngine.XR.WSA.WebCam.VideoCapture/VideoCaptureResult)
extern "C" IL2CPP_METHOD_ATTR void OnStartedRecordingVideoCallback_Invoke_m2218155126 (OnStartedRecordingVideoCallback_t3861839134 * __this, VideoCaptureResult_t880209540  ___result0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture/OnStoppedRecordingVideoCallback::Invoke(UnityEngine.XR.WSA.WebCam.VideoCapture/VideoCaptureResult)
extern "C" IL2CPP_METHOD_ATTR void OnStoppedRecordingVideoCallback_Invoke_m1725009027 (OnStoppedRecordingVideoCallback_t2563676185 * __this, VideoCaptureResult_t880209540  ___result0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture::Dispose_Internal()
extern "C" IL2CPP_METHOD_ATTR void VideoCapture_Dispose_Internal_m3532959447 (VideoCapture_t3191060632 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture::DisposeThreaded_Internal()
extern "C" IL2CPP_METHOD_ATTR void VideoCapture_DisposeThreaded_Internal_m4280317370 (VideoCapture_t3191060632 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.WorldAnchor/OnTrackingChangedDelegate::Invoke(UnityEngine.XR.WSA.WorldAnchor,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void OnTrackingChangedDelegate_Invoke_m3564199058 (OnTrackingChangedDelegate_t3480415086 * __this, WorldAnchor_t2161774153 * ___worldAnchor0, bool ___located1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.WorldManager/OnPositionalLocatorStateChangedDelegate::Invoke(UnityEngine.XR.WSA.PositionalLocatorState,UnityEngine.XR.WSA.PositionalLocatorState)
extern "C" IL2CPP_METHOD_ATTR void OnPositionalLocatorStateChangedDelegate_Invoke_m3979255273 (OnPositionalLocatorStateChangedDelegate_t1145932820 * __this, int32_t ___oldState0, int32_t ___newState1, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.XR.WSA.Input.GestureErrorEventArgs
extern "C" void GestureErrorEventArgs_t2942076205_marshal_pinvoke(const GestureErrorEventArgs_t2942076205& unmarshaled, GestureErrorEventArgs_t2942076205_marshaled_pinvoke& marshaled)
{
	marshaled.___U3CerrorU3Ek__BackingField_0 = il2cpp_codegen_marshal_string(unmarshaled.get_U3CerrorU3Ek__BackingField_0());
	marshaled.___U3ChresultU3Ek__BackingField_1 = unmarshaled.get_U3ChresultU3Ek__BackingField_1();
}
extern "C" void GestureErrorEventArgs_t2942076205_marshal_pinvoke_back(const GestureErrorEventArgs_t2942076205_marshaled_pinvoke& marshaled, GestureErrorEventArgs_t2942076205& unmarshaled)
{
	unmarshaled.set_U3CerrorU3Ek__BackingField_0(il2cpp_codegen_marshal_string_result(marshaled.___U3CerrorU3Ek__BackingField_0));
	int32_t unmarshaled_U3ChresultU3Ek__BackingField_temp_1 = 0;
	unmarshaled_U3ChresultU3Ek__BackingField_temp_1 = marshaled.___U3ChresultU3Ek__BackingField_1;
	unmarshaled.set_U3ChresultU3Ek__BackingField_1(unmarshaled_U3ChresultU3Ek__BackingField_temp_1);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.Input.GestureErrorEventArgs
extern "C" void GestureErrorEventArgs_t2942076205_marshal_pinvoke_cleanup(GestureErrorEventArgs_t2942076205_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___U3CerrorU3Ek__BackingField_0);
	marshaled.___U3CerrorU3Ek__BackingField_0 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.XR.WSA.Input.GestureErrorEventArgs
extern "C" void GestureErrorEventArgs_t2942076205_marshal_com(const GestureErrorEventArgs_t2942076205& unmarshaled, GestureErrorEventArgs_t2942076205_marshaled_com& marshaled)
{
	marshaled.___U3CerrorU3Ek__BackingField_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_U3CerrorU3Ek__BackingField_0());
	marshaled.___U3ChresultU3Ek__BackingField_1 = unmarshaled.get_U3ChresultU3Ek__BackingField_1();
}
extern "C" void GestureErrorEventArgs_t2942076205_marshal_com_back(const GestureErrorEventArgs_t2942076205_marshaled_com& marshaled, GestureErrorEventArgs_t2942076205& unmarshaled)
{
	unmarshaled.set_U3CerrorU3Ek__BackingField_0(il2cpp_codegen_marshal_bstring_result(marshaled.___U3CerrorU3Ek__BackingField_0));
	int32_t unmarshaled_U3ChresultU3Ek__BackingField_temp_1 = 0;
	unmarshaled_U3ChresultU3Ek__BackingField_temp_1 = marshaled.___U3ChresultU3Ek__BackingField_1;
	unmarshaled.set_U3ChresultU3Ek__BackingField_1(unmarshaled_U3ChresultU3Ek__BackingField_temp_1);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.Input.GestureErrorEventArgs
extern "C" void GestureErrorEventArgs_t2942076205_marshal_com_cleanup(GestureErrorEventArgs_t2942076205_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___U3CerrorU3Ek__BackingField_0);
	marshaled.___U3CerrorU3Ek__BackingField_0 = NULL;
}
// System.Void UnityEngine.XR.WSA.Input.GestureErrorEventArgs::.ctor(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void GestureErrorEventArgs__ctor_m1144453585 (GestureErrorEventArgs_t2942076205 * __this, String_t* ___error0, int32_t ___hresult1, const RuntimeMethod* method)
{
	{
		il2cpp_codegen_initobj(__this, sizeof(GestureErrorEventArgs_t2942076205 ));
		String_t* L_0 = ___error0;
		GestureErrorEventArgs_set_error_m1885211944((GestureErrorEventArgs_t2942076205 *)__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___hresult1;
		GestureErrorEventArgs_set_hresult_m2125462606((GestureErrorEventArgs_t2942076205 *)__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void GestureErrorEventArgs__ctor_m1144453585_AdjustorThunk (RuntimeObject * __this, String_t* ___error0, int32_t ___hresult1, const RuntimeMethod* method)
{
	GestureErrorEventArgs_t2942076205 * _thisAdjusted = reinterpret_cast<GestureErrorEventArgs_t2942076205 *>(__this + 1);
	GestureErrorEventArgs__ctor_m1144453585(_thisAdjusted, ___error0, ___hresult1, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureErrorEventArgs::set_error(System.String)
extern "C" IL2CPP_METHOD_ATTR void GestureErrorEventArgs_set_error_m1885211944 (GestureErrorEventArgs_t2942076205 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CerrorU3Ek__BackingField_0(L_0);
		return;
	}
}
extern "C"  void GestureErrorEventArgs_set_error_m1885211944_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	GestureErrorEventArgs_t2942076205 * _thisAdjusted = reinterpret_cast<GestureErrorEventArgs_t2942076205 *>(__this + 1);
	GestureErrorEventArgs_set_error_m1885211944(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureErrorEventArgs::set_hresult(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void GestureErrorEventArgs_set_hresult_m2125462606 (GestureErrorEventArgs_t2942076205 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3ChresultU3Ek__BackingField_1(L_0);
		return;
	}
}
extern "C"  void GestureErrorEventArgs_set_hresult_m2125462606_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	GestureErrorEventArgs_t2942076205 * _thisAdjusted = reinterpret_cast<GestureErrorEventArgs_t2942076205 *>(__this + 1);
	GestureErrorEventArgs_set_hresult_m2125462606(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.XR.WSA.Input.GestureRecognizer
extern "C" void GestureRecognizer_t1566529591_marshal_pinvoke(const GestureRecognizer_t1566529591& unmarshaled, GestureRecognizer_t1566529591_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Recognizer_0 = unmarshaled.get_m_Recognizer_0();
	marshaled.___HoldCanceled_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_HoldCanceled_1()));
	marshaled.___HoldCompleted_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_HoldCompleted_2()));
	marshaled.___HoldStarted_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_HoldStarted_3()));
	marshaled.___Tapped_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_Tapped_4()));
	marshaled.___ManipulationCanceled_5 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationCanceled_5()));
	marshaled.___ManipulationCompleted_6 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationCompleted_6()));
	marshaled.___ManipulationStarted_7 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationStarted_7()));
	marshaled.___ManipulationUpdated_8 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationUpdated_8()));
	marshaled.___NavigationCanceled_9 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationCanceled_9()));
	marshaled.___NavigationCompleted_10 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationCompleted_10()));
	marshaled.___NavigationStarted_11 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationStarted_11()));
	marshaled.___NavigationUpdated_12 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationUpdated_12()));
	marshaled.___RecognitionEnded_13 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_RecognitionEnded_13()));
	marshaled.___RecognitionStarted_14 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_RecognitionStarted_14()));
	marshaled.___GestureError_15 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GestureError_15()));
	marshaled.___HoldCanceledEvent_16 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_HoldCanceledEvent_16()));
	marshaled.___HoldCompletedEvent_17 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_HoldCompletedEvent_17()));
	marshaled.___HoldStartedEvent_18 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_HoldStartedEvent_18()));
	marshaled.___TappedEvent_19 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_TappedEvent_19()));
	marshaled.___ManipulationCanceledEvent_20 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationCanceledEvent_20()));
	marshaled.___ManipulationCompletedEvent_21 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationCompletedEvent_21()));
	marshaled.___ManipulationStartedEvent_22 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationStartedEvent_22()));
	marshaled.___ManipulationUpdatedEvent_23 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationUpdatedEvent_23()));
	marshaled.___NavigationCanceledEvent_24 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationCanceledEvent_24()));
	marshaled.___NavigationCompletedEvent_25 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationCompletedEvent_25()));
	marshaled.___NavigationStartedEvent_26 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationStartedEvent_26()));
	marshaled.___NavigationUpdatedEvent_27 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationUpdatedEvent_27()));
	marshaled.___RecognitionEndedEvent_28 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_RecognitionEndedEvent_28()));
	marshaled.___RecognitionStartedEvent_29 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_RecognitionStartedEvent_29()));
	marshaled.___GestureErrorEvent_30 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GestureErrorEvent_30()));
}
extern "C" void GestureRecognizer_t1566529591_marshal_pinvoke_back(const GestureRecognizer_t1566529591_marshaled_pinvoke& marshaled, GestureRecognizer_t1566529591& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_t1566529591_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t unmarshaled_m_Recognizer_temp_0;
	memset(&unmarshaled_m_Recognizer_temp_0, 0, sizeof(unmarshaled_m_Recognizer_temp_0));
	unmarshaled_m_Recognizer_temp_0 = marshaled.___m_Recognizer_0;
	unmarshaled.set_m_Recognizer_0(unmarshaled_m_Recognizer_temp_0);
	unmarshaled.set_HoldCanceled_1(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t464622055>(marshaled.___HoldCanceled_1, Action_1_t464622055_il2cpp_TypeInfo_var));
	unmarshaled.set_HoldCompleted_2(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t1168103046>(marshaled.___HoldCompleted_2, Action_1_t1168103046_il2cpp_TypeInfo_var));
	unmarshaled.set_HoldStarted_3(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t3725713036>(marshaled.___HoldStarted_3, Action_1_t3725713036_il2cpp_TypeInfo_var));
	unmarshaled.set_Tapped_4(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t2902256995>(marshaled.___Tapped_4, Action_1_t2902256995_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationCanceled_5(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t765149492>(marshaled.___ManipulationCanceled_5, Action_1_t765149492_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationCompleted_6(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t1957047783>(marshaled.___ManipulationCompleted_6, Action_1_t1957047783_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationStarted_7(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t1288711754>(marshaled.___ManipulationStarted_7, Action_1_t1288711754_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationUpdated_8(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t40843125>(marshaled.___ManipulationUpdated_8, Action_1_t40843125_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationCanceled_9(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t3270971242>(marshaled.___NavigationCanceled_9, Action_1_t3270971242_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationCompleted_10(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t341761863>(marshaled.___NavigationCompleted_10, Action_1_t341761863_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationStarted_11(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t3544757211>(marshaled.___NavigationStarted_11, Action_1_t3544757211_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationUpdated_12(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t1156518837>(marshaled.___NavigationUpdated_12, Action_1_t1156518837_il2cpp_TypeInfo_var));
	unmarshaled.set_RecognitionEnded_13(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t4073128488>(marshaled.___RecognitionEnded_13, Action_1_t4073128488_il2cpp_TypeInfo_var));
	unmarshaled.set_RecognitionStarted_14(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t1098359099>(marshaled.___RecognitionStarted_14, Action_1_t1098359099_il2cpp_TypeInfo_var));
	unmarshaled.set_GestureError_15(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t3114543800>(marshaled.___GestureError_15, Action_1_t3114543800_il2cpp_TypeInfo_var));
	unmarshaled.set_HoldCanceledEvent_16(il2cpp_codegen_marshal_function_ptr_to_delegate<HoldCanceledEventDelegate_t3242927192>(marshaled.___HoldCanceledEvent_16, HoldCanceledEventDelegate_t3242927192_il2cpp_TypeInfo_var));
	unmarshaled.set_HoldCompletedEvent_17(il2cpp_codegen_marshal_function_ptr_to_delegate<HoldCompletedEventDelegate_t4112318659>(marshaled.___HoldCompletedEvent_17, HoldCompletedEventDelegate_t4112318659_il2cpp_TypeInfo_var));
	unmarshaled.set_HoldStartedEvent_18(il2cpp_codegen_marshal_function_ptr_to_delegate<HoldStartedEventDelegate_t1669693510>(marshaled.___HoldStartedEvent_18, HoldStartedEventDelegate_t1669693510_il2cpp_TypeInfo_var));
	unmarshaled.set_TappedEvent_19(il2cpp_codegen_marshal_function_ptr_to_delegate<TappedEventDelegate_t286622765>(marshaled.___TappedEvent_19, TappedEventDelegate_t286622765_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationCanceledEvent_20(il2cpp_codegen_marshal_function_ptr_to_delegate<ManipulationCanceledEventDelegate_t3141027694>(marshaled.___ManipulationCanceledEvent_20, ManipulationCanceledEventDelegate_t3141027694_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationCompletedEvent_21(il2cpp_codegen_marshal_function_ptr_to_delegate<ManipulationCompletedEventDelegate_t3126788776>(marshaled.___ManipulationCompletedEvent_21, ManipulationCompletedEventDelegate_t3126788776_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationStartedEvent_22(il2cpp_codegen_marshal_function_ptr_to_delegate<ManipulationStartedEventDelegate_t1581880091>(marshaled.___ManipulationStartedEvent_22, ManipulationStartedEventDelegate_t1581880091_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationUpdatedEvent_23(il2cpp_codegen_marshal_function_ptr_to_delegate<ManipulationUpdatedEventDelegate_t2990350064>(marshaled.___ManipulationUpdatedEvent_23, ManipulationUpdatedEventDelegate_t2990350064_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationCanceledEvent_24(il2cpp_codegen_marshal_function_ptr_to_delegate<NavigationCanceledEventDelegate_t2505886250>(marshaled.___NavigationCanceledEvent_24, NavigationCanceledEventDelegate_t2505886250_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationCompletedEvent_25(il2cpp_codegen_marshal_function_ptr_to_delegate<NavigationCompletedEventDelegate_t3119650473>(marshaled.___NavigationCompletedEvent_25, NavigationCompletedEventDelegate_t3119650473_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationStartedEvent_26(il2cpp_codegen_marshal_function_ptr_to_delegate<NavigationStartedEventDelegate_t3496816902>(marshaled.___NavigationStartedEvent_26, NavigationStartedEventDelegate_t3496816902_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationUpdatedEvent_27(il2cpp_codegen_marshal_function_ptr_to_delegate<NavigationUpdatedEventDelegate_t2894903996>(marshaled.___NavigationUpdatedEvent_27, NavigationUpdatedEventDelegate_t2894903996_il2cpp_TypeInfo_var));
	unmarshaled.set_RecognitionEndedEvent_28(il2cpp_codegen_marshal_function_ptr_to_delegate<RecognitionEndedEventDelegate_t2892804592>(marshaled.___RecognitionEndedEvent_28, RecognitionEndedEventDelegate_t2892804592_il2cpp_TypeInfo_var));
	unmarshaled.set_RecognitionStartedEvent_29(il2cpp_codegen_marshal_function_ptr_to_delegate<RecognitionStartedEventDelegate_t3727320336>(marshaled.___RecognitionStartedEvent_29, RecognitionStartedEventDelegate_t3727320336_il2cpp_TypeInfo_var));
	unmarshaled.set_GestureErrorEvent_30(il2cpp_codegen_marshal_function_ptr_to_delegate<GestureErrorDelegate_t3254371646>(marshaled.___GestureErrorEvent_30, GestureErrorDelegate_t3254371646_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.Input.GestureRecognizer
extern "C" void GestureRecognizer_t1566529591_marshal_pinvoke_cleanup(GestureRecognizer_t1566529591_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.WSA.Input.GestureRecognizer
extern "C" void GestureRecognizer_t1566529591_marshal_com(const GestureRecognizer_t1566529591& unmarshaled, GestureRecognizer_t1566529591_marshaled_com& marshaled)
{
	marshaled.___m_Recognizer_0 = unmarshaled.get_m_Recognizer_0();
	marshaled.___HoldCanceled_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_HoldCanceled_1()));
	marshaled.___HoldCompleted_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_HoldCompleted_2()));
	marshaled.___HoldStarted_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_HoldStarted_3()));
	marshaled.___Tapped_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_Tapped_4()));
	marshaled.___ManipulationCanceled_5 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationCanceled_5()));
	marshaled.___ManipulationCompleted_6 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationCompleted_6()));
	marshaled.___ManipulationStarted_7 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationStarted_7()));
	marshaled.___ManipulationUpdated_8 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationUpdated_8()));
	marshaled.___NavigationCanceled_9 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationCanceled_9()));
	marshaled.___NavigationCompleted_10 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationCompleted_10()));
	marshaled.___NavigationStarted_11 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationStarted_11()));
	marshaled.___NavigationUpdated_12 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationUpdated_12()));
	marshaled.___RecognitionEnded_13 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_RecognitionEnded_13()));
	marshaled.___RecognitionStarted_14 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_RecognitionStarted_14()));
	marshaled.___GestureError_15 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GestureError_15()));
	marshaled.___HoldCanceledEvent_16 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_HoldCanceledEvent_16()));
	marshaled.___HoldCompletedEvent_17 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_HoldCompletedEvent_17()));
	marshaled.___HoldStartedEvent_18 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_HoldStartedEvent_18()));
	marshaled.___TappedEvent_19 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_TappedEvent_19()));
	marshaled.___ManipulationCanceledEvent_20 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationCanceledEvent_20()));
	marshaled.___ManipulationCompletedEvent_21 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationCompletedEvent_21()));
	marshaled.___ManipulationStartedEvent_22 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationStartedEvent_22()));
	marshaled.___ManipulationUpdatedEvent_23 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationUpdatedEvent_23()));
	marshaled.___NavigationCanceledEvent_24 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationCanceledEvent_24()));
	marshaled.___NavigationCompletedEvent_25 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationCompletedEvent_25()));
	marshaled.___NavigationStartedEvent_26 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationStartedEvent_26()));
	marshaled.___NavigationUpdatedEvent_27 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationUpdatedEvent_27()));
	marshaled.___RecognitionEndedEvent_28 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_RecognitionEndedEvent_28()));
	marshaled.___RecognitionStartedEvent_29 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_RecognitionStartedEvent_29()));
	marshaled.___GestureErrorEvent_30 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GestureErrorEvent_30()));
}
extern "C" void GestureRecognizer_t1566529591_marshal_com_back(const GestureRecognizer_t1566529591_marshaled_com& marshaled, GestureRecognizer_t1566529591& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_t1566529591_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t unmarshaled_m_Recognizer_temp_0;
	memset(&unmarshaled_m_Recognizer_temp_0, 0, sizeof(unmarshaled_m_Recognizer_temp_0));
	unmarshaled_m_Recognizer_temp_0 = marshaled.___m_Recognizer_0;
	unmarshaled.set_m_Recognizer_0(unmarshaled_m_Recognizer_temp_0);
	unmarshaled.set_HoldCanceled_1(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t464622055>(marshaled.___HoldCanceled_1, Action_1_t464622055_il2cpp_TypeInfo_var));
	unmarshaled.set_HoldCompleted_2(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t1168103046>(marshaled.___HoldCompleted_2, Action_1_t1168103046_il2cpp_TypeInfo_var));
	unmarshaled.set_HoldStarted_3(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t3725713036>(marshaled.___HoldStarted_3, Action_1_t3725713036_il2cpp_TypeInfo_var));
	unmarshaled.set_Tapped_4(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t2902256995>(marshaled.___Tapped_4, Action_1_t2902256995_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationCanceled_5(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t765149492>(marshaled.___ManipulationCanceled_5, Action_1_t765149492_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationCompleted_6(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t1957047783>(marshaled.___ManipulationCompleted_6, Action_1_t1957047783_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationStarted_7(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t1288711754>(marshaled.___ManipulationStarted_7, Action_1_t1288711754_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationUpdated_8(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t40843125>(marshaled.___ManipulationUpdated_8, Action_1_t40843125_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationCanceled_9(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t3270971242>(marshaled.___NavigationCanceled_9, Action_1_t3270971242_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationCompleted_10(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t341761863>(marshaled.___NavigationCompleted_10, Action_1_t341761863_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationStarted_11(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t3544757211>(marshaled.___NavigationStarted_11, Action_1_t3544757211_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationUpdated_12(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t1156518837>(marshaled.___NavigationUpdated_12, Action_1_t1156518837_il2cpp_TypeInfo_var));
	unmarshaled.set_RecognitionEnded_13(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t4073128488>(marshaled.___RecognitionEnded_13, Action_1_t4073128488_il2cpp_TypeInfo_var));
	unmarshaled.set_RecognitionStarted_14(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t1098359099>(marshaled.___RecognitionStarted_14, Action_1_t1098359099_il2cpp_TypeInfo_var));
	unmarshaled.set_GestureError_15(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t3114543800>(marshaled.___GestureError_15, Action_1_t3114543800_il2cpp_TypeInfo_var));
	unmarshaled.set_HoldCanceledEvent_16(il2cpp_codegen_marshal_function_ptr_to_delegate<HoldCanceledEventDelegate_t3242927192>(marshaled.___HoldCanceledEvent_16, HoldCanceledEventDelegate_t3242927192_il2cpp_TypeInfo_var));
	unmarshaled.set_HoldCompletedEvent_17(il2cpp_codegen_marshal_function_ptr_to_delegate<HoldCompletedEventDelegate_t4112318659>(marshaled.___HoldCompletedEvent_17, HoldCompletedEventDelegate_t4112318659_il2cpp_TypeInfo_var));
	unmarshaled.set_HoldStartedEvent_18(il2cpp_codegen_marshal_function_ptr_to_delegate<HoldStartedEventDelegate_t1669693510>(marshaled.___HoldStartedEvent_18, HoldStartedEventDelegate_t1669693510_il2cpp_TypeInfo_var));
	unmarshaled.set_TappedEvent_19(il2cpp_codegen_marshal_function_ptr_to_delegate<TappedEventDelegate_t286622765>(marshaled.___TappedEvent_19, TappedEventDelegate_t286622765_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationCanceledEvent_20(il2cpp_codegen_marshal_function_ptr_to_delegate<ManipulationCanceledEventDelegate_t3141027694>(marshaled.___ManipulationCanceledEvent_20, ManipulationCanceledEventDelegate_t3141027694_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationCompletedEvent_21(il2cpp_codegen_marshal_function_ptr_to_delegate<ManipulationCompletedEventDelegate_t3126788776>(marshaled.___ManipulationCompletedEvent_21, ManipulationCompletedEventDelegate_t3126788776_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationStartedEvent_22(il2cpp_codegen_marshal_function_ptr_to_delegate<ManipulationStartedEventDelegate_t1581880091>(marshaled.___ManipulationStartedEvent_22, ManipulationStartedEventDelegate_t1581880091_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationUpdatedEvent_23(il2cpp_codegen_marshal_function_ptr_to_delegate<ManipulationUpdatedEventDelegate_t2990350064>(marshaled.___ManipulationUpdatedEvent_23, ManipulationUpdatedEventDelegate_t2990350064_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationCanceledEvent_24(il2cpp_codegen_marshal_function_ptr_to_delegate<NavigationCanceledEventDelegate_t2505886250>(marshaled.___NavigationCanceledEvent_24, NavigationCanceledEventDelegate_t2505886250_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationCompletedEvent_25(il2cpp_codegen_marshal_function_ptr_to_delegate<NavigationCompletedEventDelegate_t3119650473>(marshaled.___NavigationCompletedEvent_25, NavigationCompletedEventDelegate_t3119650473_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationStartedEvent_26(il2cpp_codegen_marshal_function_ptr_to_delegate<NavigationStartedEventDelegate_t3496816902>(marshaled.___NavigationStartedEvent_26, NavigationStartedEventDelegate_t3496816902_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationUpdatedEvent_27(il2cpp_codegen_marshal_function_ptr_to_delegate<NavigationUpdatedEventDelegate_t2894903996>(marshaled.___NavigationUpdatedEvent_27, NavigationUpdatedEventDelegate_t2894903996_il2cpp_TypeInfo_var));
	unmarshaled.set_RecognitionEndedEvent_28(il2cpp_codegen_marshal_function_ptr_to_delegate<RecognitionEndedEventDelegate_t2892804592>(marshaled.___RecognitionEndedEvent_28, RecognitionEndedEventDelegate_t2892804592_il2cpp_TypeInfo_var));
	unmarshaled.set_RecognitionStartedEvent_29(il2cpp_codegen_marshal_function_ptr_to_delegate<RecognitionStartedEventDelegate_t3727320336>(marshaled.___RecognitionStartedEvent_29, RecognitionStartedEventDelegate_t3727320336_il2cpp_TypeInfo_var));
	unmarshaled.set_GestureErrorEvent_30(il2cpp_codegen_marshal_function_ptr_to_delegate<GestureErrorDelegate_t3254371646>(marshaled.___GestureErrorEvent_30, GestureErrorDelegate_t3254371646_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.Input.GestureRecognizer
extern "C" void GestureRecognizer_t1566529591_marshal_com_cleanup(GestureRecognizer_t1566529591_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::Finalize()
extern "C" IL2CPP_METHOD_ATTR void GestureRecognizer_Finalize_m3169068568 (GestureRecognizer_t1566529591 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_Finalize_m3169068568_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = __this->get_m_Recognizer_0();
			bool L_1 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_0, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_1)
			{
				goto IL_002f;
			}
		}

IL_0016:
		{
			GestureRecognizer_DestroyThreaded_m1228448031(__this, /*hidden argument*/NULL);
			__this->set_m_Recognizer_0((intptr_t)(0));
			IL2CPP_RUNTIME_CLASS_INIT(GC_t959872083_il2cpp_TypeInfo_var);
			GC_SuppressFinalize_m1177400158(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		}

IL_002f:
		{
			IL2CPP_LEAVE(0x3B, FINALLY_0034);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0034;
	}

FINALLY_0034:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(52)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(52)
	{
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003b:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::DestroyThreaded()
extern "C" IL2CPP_METHOD_ATTR void GestureRecognizer_DestroyThreaded_m1228448031 (GestureRecognizer_t1566529591 * __this, const RuntimeMethod* method)
{
	typedef void (*GestureRecognizer_DestroyThreaded_m1228448031_ftn) (GestureRecognizer_t1566529591 *);
	static GestureRecognizer_DestroyThreaded_m1228448031_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GestureRecognizer_DestroyThreaded_m1228448031_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.Input.GestureRecognizer::DestroyThreaded()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::Dispose()
extern "C" IL2CPP_METHOD_ATTR void GestureRecognizer_Dispose_m2018281144 (GestureRecognizer_t1566529591 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_Dispose_m2018281144_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_m_Recognizer_0();
		bool L_1 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		GestureRecognizer_Destroy_m1373344732(__this, /*hidden argument*/NULL);
		__this->set_m_Recognizer_0((intptr_t)(0));
	}

IL_0029:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GC_t959872083_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m1177400158(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::Destroy()
extern "C" IL2CPP_METHOD_ATTR void GestureRecognizer_Destroy_m1373344732 (GestureRecognizer_t1566529591 * __this, const RuntimeMethod* method)
{
	typedef void (*GestureRecognizer_Destroy_m1373344732_ftn) (GestureRecognizer_t1566529591 *);
	static GestureRecognizer_Destroy_m1373344732_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GestureRecognizer_Destroy_m1373344732_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.Input.GestureRecognizer::Destroy()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeHoldCanceled(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose)
extern "C" IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeHoldCanceled_m3838851892 (GestureRecognizer_t1566529591 * __this, InteractionSource_t872619030  ___source0, InteractionSourcePose_t752709879  ___sourcePose1, Pose_t545244865  ___headPose2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeHoldCanceled_m3838851892_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HoldCanceledEventDelegate_t3242927192 * V_0 = NULL;
	Action_1_t464622055 * V_1 = NULL;
	HoldCanceledEventArgs_t292154460  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		HoldCanceledEventDelegate_t3242927192 * L_0 = __this->get_HoldCanceledEvent_16();
		V_0 = L_0;
		HoldCanceledEventDelegate_t3242927192 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		HoldCanceledEventDelegate_t3242927192 * L_2 = V_0;
		int32_t L_3 = (&___source0)->get_m_SourceKind_1();
		Vector3_t3722313464  L_4 = (&___headPose2)->get_position_0();
		Quaternion_t2301928331  L_5 = (&___headPose2)->get_rotation_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_6 = Vector3_get_forward_m3100859705(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_7 = Quaternion_op_Multiply_m2607404835(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		Ray_t3785851493  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Ray__ctor_m168149494((&L_8), L_4, L_7, /*hidden argument*/NULL);
		NullCheck(L_2);
		HoldCanceledEventDelegate_Invoke_m2852931578(L_2, L_3, L_8, /*hidden argument*/NULL);
	}

IL_0038:
	{
		Action_1_t464622055 * L_9 = __this->get_HoldCanceled_1();
		V_1 = L_9;
		Action_1_t464622055 * L_10 = V_1;
		if (!L_10)
		{
			goto IL_0066;
		}
	}
	{
		InteractionSource_t872619030  L_11 = ___source0;
		(&V_2)->set_m_Source_0(L_11);
		InteractionSourcePose_t752709879  L_12 = ___sourcePose1;
		(&V_2)->set_m_SourcePose_1(L_12);
		Pose_t545244865  L_13 = ___headPose2;
		(&V_2)->set_m_HeadPose_2(L_13);
		Action_1_t464622055 * L_14 = V_1;
		HoldCanceledEventArgs_t292154460  L_15 = V_2;
		NullCheck(L_14);
		Action_1_Invoke_m2147270457(L_14, L_15, /*hidden argument*/Action_1_Invoke_m2147270457_RuntimeMethod_var);
	}

IL_0066:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeHoldCompleted(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose)
extern "C" IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeHoldCompleted_m2361928871 (GestureRecognizer_t1566529591 * __this, InteractionSource_t872619030  ___source0, InteractionSourcePose_t752709879  ___sourcePose1, Pose_t545244865  ___headPose2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeHoldCompleted_m2361928871_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HoldCompletedEventDelegate_t4112318659 * V_0 = NULL;
	Action_1_t1168103046 * V_1 = NULL;
	HoldCompletedEventArgs_t995635451  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		HoldCompletedEventDelegate_t4112318659 * L_0 = __this->get_HoldCompletedEvent_17();
		V_0 = L_0;
		HoldCompletedEventDelegate_t4112318659 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		HoldCompletedEventDelegate_t4112318659 * L_2 = V_0;
		int32_t L_3 = (&___source0)->get_m_SourceKind_1();
		Vector3_t3722313464  L_4 = (&___headPose2)->get_position_0();
		Quaternion_t2301928331  L_5 = (&___headPose2)->get_rotation_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_6 = Vector3_get_forward_m3100859705(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_7 = Quaternion_op_Multiply_m2607404835(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		Ray_t3785851493  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Ray__ctor_m168149494((&L_8), L_4, L_7, /*hidden argument*/NULL);
		NullCheck(L_2);
		HoldCompletedEventDelegate_Invoke_m776961770(L_2, L_3, L_8, /*hidden argument*/NULL);
	}

IL_0038:
	{
		Action_1_t1168103046 * L_9 = __this->get_HoldCompleted_2();
		V_1 = L_9;
		Action_1_t1168103046 * L_10 = V_1;
		if (!L_10)
		{
			goto IL_0066;
		}
	}
	{
		InteractionSource_t872619030  L_11 = ___source0;
		(&V_2)->set_m_Source_0(L_11);
		InteractionSourcePose_t752709879  L_12 = ___sourcePose1;
		(&V_2)->set_m_SourcePose_1(L_12);
		Pose_t545244865  L_13 = ___headPose2;
		(&V_2)->set_m_HeadPose_2(L_13);
		Action_1_t1168103046 * L_14 = V_1;
		HoldCompletedEventArgs_t995635451  L_15 = V_2;
		NullCheck(L_14);
		Action_1_Invoke_m1736012830(L_14, L_15, /*hidden argument*/Action_1_Invoke_m1736012830_RuntimeMethod_var);
	}

IL_0066:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeHoldStarted(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose)
extern "C" IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeHoldStarted_m1401420631 (GestureRecognizer_t1566529591 * __this, InteractionSource_t872619030  ___source0, InteractionSourcePose_t752709879  ___sourcePose1, Pose_t545244865  ___headPose2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeHoldStarted_m1401420631_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HoldStartedEventDelegate_t1669693510 * V_0 = NULL;
	Action_1_t3725713036 * V_1 = NULL;
	HoldStartedEventArgs_t3553245441  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		HoldStartedEventDelegate_t1669693510 * L_0 = __this->get_HoldStartedEvent_18();
		V_0 = L_0;
		HoldStartedEventDelegate_t1669693510 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		HoldStartedEventDelegate_t1669693510 * L_2 = V_0;
		int32_t L_3 = (&___source0)->get_m_SourceKind_1();
		Vector3_t3722313464  L_4 = (&___headPose2)->get_position_0();
		Quaternion_t2301928331  L_5 = (&___headPose2)->get_rotation_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_6 = Vector3_get_forward_m3100859705(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_7 = Quaternion_op_Multiply_m2607404835(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		Ray_t3785851493  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Ray__ctor_m168149494((&L_8), L_4, L_7, /*hidden argument*/NULL);
		NullCheck(L_2);
		HoldStartedEventDelegate_Invoke_m3613134118(L_2, L_3, L_8, /*hidden argument*/NULL);
	}

IL_0038:
	{
		Action_1_t3725713036 * L_9 = __this->get_HoldStarted_3();
		V_1 = L_9;
		Action_1_t3725713036 * L_10 = V_1;
		if (!L_10)
		{
			goto IL_0066;
		}
	}
	{
		InteractionSource_t872619030  L_11 = ___source0;
		(&V_2)->set_m_Source_0(L_11);
		InteractionSourcePose_t752709879  L_12 = ___sourcePose1;
		(&V_2)->set_m_SourcePose_1(L_12);
		Pose_t545244865  L_13 = ___headPose2;
		(&V_2)->set_m_HeadPose_2(L_13);
		Action_1_t3725713036 * L_14 = V_1;
		HoldStartedEventArgs_t3553245441  L_15 = V_2;
		NullCheck(L_14);
		Action_1_Invoke_m1848790106(L_14, L_15, /*hidden argument*/Action_1_Invoke_m1848790106_RuntimeMethod_var);
	}

IL_0066:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeTapped(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeTapped_m341965164 (GestureRecognizer_t1566529591 * __this, InteractionSource_t872619030  ___source0, InteractionSourcePose_t752709879  ___sourcePose1, Pose_t545244865  ___headPose2, int32_t ___tapCount3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeTapped_m341965164_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TappedEventDelegate_t286622765 * V_0 = NULL;
	Action_1_t2902256995 * V_1 = NULL;
	TappedEventArgs_t2729789400  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		TappedEventDelegate_t286622765 * L_0 = __this->get_TappedEvent_19();
		V_0 = L_0;
		TappedEventDelegate_t286622765 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		TappedEventDelegate_t286622765 * L_2 = V_0;
		int32_t L_3 = (&___source0)->get_m_SourceKind_1();
		int32_t L_4 = ___tapCount3;
		Vector3_t3722313464  L_5 = (&___headPose2)->get_position_0();
		Quaternion_t2301928331  L_6 = (&___headPose2)->get_rotation_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_7 = Vector3_get_forward_m3100859705(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_8 = Quaternion_op_Multiply_m2607404835(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		Ray_t3785851493  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Ray__ctor_m168149494((&L_9), L_5, L_8, /*hidden argument*/NULL);
		NullCheck(L_2);
		TappedEventDelegate_Invoke_m537578258(L_2, L_3, L_4, L_9, /*hidden argument*/NULL);
	}

IL_003a:
	{
		Action_1_t2902256995 * L_10 = __this->get_Tapped_4();
		V_1 = L_10;
		Action_1_t2902256995 * L_11 = V_1;
		if (!L_11)
		{
			goto IL_0071;
		}
	}
	{
		InteractionSource_t872619030  L_12 = ___source0;
		(&V_2)->set_m_Source_0(L_12);
		InteractionSourcePose_t752709879  L_13 = ___sourcePose1;
		(&V_2)->set_m_SourcePose_1(L_13);
		Pose_t545244865  L_14 = ___headPose2;
		(&V_2)->set_m_HeadPose_2(L_14);
		int32_t L_15 = ___tapCount3;
		(&V_2)->set_m_TapCount_3(L_15);
		Action_1_t2902256995 * L_16 = V_1;
		TappedEventArgs_t2729789400  L_17 = V_2;
		NullCheck(L_16);
		Action_1_Invoke_m1051473384(L_16, L_17, /*hidden argument*/Action_1_Invoke_m1051473384_RuntimeMethod_var);
	}

IL_0071:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeManipulationCanceled(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose)
extern "C" IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeManipulationCanceled_m3147763940 (GestureRecognizer_t1566529591 * __this, InteractionSource_t872619030  ___source0, InteractionSourcePose_t752709879  ___sourcePose1, Pose_t545244865  ___headPose2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeManipulationCanceled_m3147763940_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ManipulationCanceledEventDelegate_t3141027694 * V_0 = NULL;
	Action_1_t765149492 * V_1 = NULL;
	ManipulationCanceledEventArgs_t592681897  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		ManipulationCanceledEventDelegate_t3141027694 * L_0 = __this->get_ManipulationCanceledEvent_20();
		V_0 = L_0;
		ManipulationCanceledEventDelegate_t3141027694 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		ManipulationCanceledEventDelegate_t3141027694 * L_2 = V_0;
		int32_t L_3 = (&___source0)->get_m_SourceKind_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_4 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_5 = (&___headPose2)->get_position_0();
		Quaternion_t2301928331  L_6 = (&___headPose2)->get_rotation_1();
		Vector3_t3722313464  L_7 = Vector3_get_forward_m3100859705(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_8 = Quaternion_op_Multiply_m2607404835(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		Ray_t3785851493  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Ray__ctor_m168149494((&L_9), L_5, L_8, /*hidden argument*/NULL);
		NullCheck(L_2);
		ManipulationCanceledEventDelegate_Invoke_m730403681(L_2, L_3, L_4, L_9, /*hidden argument*/NULL);
	}

IL_003d:
	{
		Action_1_t765149492 * L_10 = __this->get_ManipulationCanceled_5();
		V_1 = L_10;
		Action_1_t765149492 * L_11 = V_1;
		if (!L_11)
		{
			goto IL_006b;
		}
	}
	{
		InteractionSource_t872619030  L_12 = ___source0;
		(&V_2)->set_m_Source_0(L_12);
		InteractionSourcePose_t752709879  L_13 = ___sourcePose1;
		(&V_2)->set_m_SourcePose_1(L_13);
		Pose_t545244865  L_14 = ___headPose2;
		(&V_2)->set_m_HeadPose_2(L_14);
		Action_1_t765149492 * L_15 = V_1;
		ManipulationCanceledEventArgs_t592681897  L_16 = V_2;
		NullCheck(L_15);
		Action_1_Invoke_m4120412433(L_15, L_16, /*hidden argument*/Action_1_Invoke_m4120412433_RuntimeMethod_var);
	}

IL_006b:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeManipulationCompleted(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeManipulationCompleted_m3540372862 (GestureRecognizer_t1566529591 * __this, InteractionSource_t872619030  ___source0, InteractionSourcePose_t752709879  ___sourcePose1, Pose_t545244865  ___headPose2, Vector3_t3722313464  ___cumulativeDelta3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeManipulationCompleted_m3540372862_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ManipulationCompletedEventDelegate_t3126788776 * V_0 = NULL;
	Action_1_t1957047783 * V_1 = NULL;
	ManipulationCompletedEventArgs_t1784580188  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		ManipulationCompletedEventDelegate_t3126788776 * L_0 = __this->get_ManipulationCompletedEvent_21();
		V_0 = L_0;
		ManipulationCompletedEventDelegate_t3126788776 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		ManipulationCompletedEventDelegate_t3126788776 * L_2 = V_0;
		int32_t L_3 = (&___source0)->get_m_SourceKind_1();
		Vector3_t3722313464  L_4 = ___cumulativeDelta3;
		Vector3_t3722313464  L_5 = (&___headPose2)->get_position_0();
		Quaternion_t2301928331  L_6 = (&___headPose2)->get_rotation_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_7 = Vector3_get_forward_m3100859705(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_8 = Quaternion_op_Multiply_m2607404835(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		Ray_t3785851493  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Ray__ctor_m168149494((&L_9), L_5, L_8, /*hidden argument*/NULL);
		NullCheck(L_2);
		ManipulationCompletedEventDelegate_Invoke_m1444946867(L_2, L_3, L_4, L_9, /*hidden argument*/NULL);
	}

IL_003a:
	{
		Action_1_t1957047783 * L_10 = __this->get_ManipulationCompleted_6();
		V_1 = L_10;
		Action_1_t1957047783 * L_11 = V_1;
		if (!L_11)
		{
			goto IL_0071;
		}
	}
	{
		InteractionSource_t872619030  L_12 = ___source0;
		(&V_2)->set_m_Source_0(L_12);
		InteractionSourcePose_t752709879  L_13 = ___sourcePose1;
		(&V_2)->set_m_SourcePose_1(L_13);
		Pose_t545244865  L_14 = ___headPose2;
		(&V_2)->set_m_HeadPose_2(L_14);
		Vector3_t3722313464  L_15 = ___cumulativeDelta3;
		(&V_2)->set_m_CumulativeDelta_3(L_15);
		Action_1_t1957047783 * L_16 = V_1;
		ManipulationCompletedEventArgs_t1784580188  L_17 = V_2;
		NullCheck(L_16);
		Action_1_Invoke_m2481529521(L_16, L_17, /*hidden argument*/Action_1_Invoke_m2481529521_RuntimeMethod_var);
	}

IL_0071:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeManipulationStarted(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose)
extern "C" IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeManipulationStarted_m3142003172 (GestureRecognizer_t1566529591 * __this, InteractionSource_t872619030  ___source0, InteractionSourcePose_t752709879  ___sourcePose1, Pose_t545244865  ___headPose2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeManipulationStarted_m3142003172_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ManipulationStartedEventDelegate_t1581880091 * V_0 = NULL;
	Action_1_t1288711754 * V_1 = NULL;
	ManipulationStartedEventArgs_t1116244159  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		ManipulationStartedEventDelegate_t1581880091 * L_0 = __this->get_ManipulationStartedEvent_22();
		V_0 = L_0;
		ManipulationStartedEventDelegate_t1581880091 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		ManipulationStartedEventDelegate_t1581880091 * L_2 = V_0;
		int32_t L_3 = (&___source0)->get_m_SourceKind_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_4 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_5 = (&___headPose2)->get_position_0();
		Quaternion_t2301928331  L_6 = (&___headPose2)->get_rotation_1();
		Vector3_t3722313464  L_7 = Vector3_get_forward_m3100859705(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_8 = Quaternion_op_Multiply_m2607404835(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		Ray_t3785851493  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Ray__ctor_m168149494((&L_9), L_5, L_8, /*hidden argument*/NULL);
		NullCheck(L_2);
		ManipulationStartedEventDelegate_Invoke_m78456035(L_2, L_3, L_4, L_9, /*hidden argument*/NULL);
	}

IL_003d:
	{
		Action_1_t1288711754 * L_10 = __this->get_ManipulationStarted_7();
		V_1 = L_10;
		Action_1_t1288711754 * L_11 = V_1;
		if (!L_11)
		{
			goto IL_006b;
		}
	}
	{
		InteractionSource_t872619030  L_12 = ___source0;
		(&V_2)->set_m_Source_0(L_12);
		InteractionSourcePose_t752709879  L_13 = ___sourcePose1;
		(&V_2)->set_m_SourcePose_1(L_13);
		Pose_t545244865  L_14 = ___headPose2;
		(&V_2)->set_m_HeadPose_2(L_14);
		Action_1_t1288711754 * L_15 = V_1;
		ManipulationStartedEventArgs_t1116244159  L_16 = V_2;
		NullCheck(L_15);
		Action_1_Invoke_m1029213443(L_15, L_16, /*hidden argument*/Action_1_Invoke_m1029213443_RuntimeMethod_var);
	}

IL_006b:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeManipulationUpdated(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeManipulationUpdated_m276703598 (GestureRecognizer_t1566529591 * __this, InteractionSource_t872619030  ___source0, InteractionSourcePose_t752709879  ___sourcePose1, Pose_t545244865  ___headPose2, Vector3_t3722313464  ___cumulativeDelta3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeManipulationUpdated_m276703598_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ManipulationUpdatedEventDelegate_t2990350064 * V_0 = NULL;
	Action_1_t40843125 * V_1 = NULL;
	ManipulationUpdatedEventArgs_t4163342826  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		ManipulationUpdatedEventDelegate_t2990350064 * L_0 = __this->get_ManipulationUpdatedEvent_23();
		V_0 = L_0;
		ManipulationUpdatedEventDelegate_t2990350064 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		ManipulationUpdatedEventDelegate_t2990350064 * L_2 = V_0;
		int32_t L_3 = (&___source0)->get_m_SourceKind_1();
		Vector3_t3722313464  L_4 = ___cumulativeDelta3;
		Vector3_t3722313464  L_5 = (&___headPose2)->get_position_0();
		Quaternion_t2301928331  L_6 = (&___headPose2)->get_rotation_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_7 = Vector3_get_forward_m3100859705(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_8 = Quaternion_op_Multiply_m2607404835(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		Ray_t3785851493  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Ray__ctor_m168149494((&L_9), L_5, L_8, /*hidden argument*/NULL);
		NullCheck(L_2);
		ManipulationUpdatedEventDelegate_Invoke_m3096075429(L_2, L_3, L_4, L_9, /*hidden argument*/NULL);
	}

IL_003a:
	{
		Action_1_t40843125 * L_10 = __this->get_ManipulationUpdated_8();
		V_1 = L_10;
		Action_1_t40843125 * L_11 = V_1;
		if (!L_11)
		{
			goto IL_0071;
		}
	}
	{
		InteractionSource_t872619030  L_12 = ___source0;
		(&V_2)->set_m_Source_0(L_12);
		InteractionSourcePose_t752709879  L_13 = ___sourcePose1;
		(&V_2)->set_m_SourcePose_1(L_13);
		Pose_t545244865  L_14 = ___headPose2;
		(&V_2)->set_m_HeadPose_2(L_14);
		Vector3_t3722313464  L_15 = ___cumulativeDelta3;
		(&V_2)->set_m_CumulativeDelta_3(L_15);
		Action_1_t40843125 * L_16 = V_1;
		ManipulationUpdatedEventArgs_t4163342826  L_17 = V_2;
		NullCheck(L_16);
		Action_1_Invoke_m3567823837(L_16, L_17, /*hidden argument*/Action_1_Invoke_m3567823837_RuntimeMethod_var);
	}

IL_0071:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeNavigationCanceled(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose)
extern "C" IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeNavigationCanceled_m3125019982 (GestureRecognizer_t1566529591 * __this, InteractionSource_t872619030  ___source0, InteractionSourcePose_t752709879  ___sourcePose1, Pose_t545244865  ___headPose2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeNavigationCanceled_m3125019982_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NavigationCanceledEventDelegate_t2505886250 * V_0 = NULL;
	Action_1_t3270971242 * V_1 = NULL;
	NavigationCanceledEventArgs_t3098503647  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		NavigationCanceledEventDelegate_t2505886250 * L_0 = __this->get_NavigationCanceledEvent_24();
		V_0 = L_0;
		NavigationCanceledEventDelegate_t2505886250 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		NavigationCanceledEventDelegate_t2505886250 * L_2 = V_0;
		int32_t L_3 = (&___source0)->get_m_SourceKind_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_4 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_5 = (&___headPose2)->get_position_0();
		Quaternion_t2301928331  L_6 = (&___headPose2)->get_rotation_1();
		Vector3_t3722313464  L_7 = Vector3_get_forward_m3100859705(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_8 = Quaternion_op_Multiply_m2607404835(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		Ray_t3785851493  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Ray__ctor_m168149494((&L_9), L_5, L_8, /*hidden argument*/NULL);
		NullCheck(L_2);
		NavigationCanceledEventDelegate_Invoke_m2344031408(L_2, L_3, L_4, L_9, /*hidden argument*/NULL);
	}

IL_003d:
	{
		Action_1_t3270971242 * L_10 = __this->get_NavigationCanceled_9();
		V_1 = L_10;
		Action_1_t3270971242 * L_11 = V_1;
		if (!L_11)
		{
			goto IL_006b;
		}
	}
	{
		InteractionSource_t872619030  L_12 = ___source0;
		(&V_2)->set_m_Source_0(L_12);
		InteractionSourcePose_t752709879  L_13 = ___sourcePose1;
		(&V_2)->set_m_SourcePose_1(L_13);
		Pose_t545244865  L_14 = ___headPose2;
		(&V_2)->set_m_HeadPose_2(L_14);
		Action_1_t3270971242 * L_15 = V_1;
		NavigationCanceledEventArgs_t3098503647  L_16 = V_2;
		NullCheck(L_15);
		Action_1_Invoke_m3105741079(L_15, L_16, /*hidden argument*/Action_1_Invoke_m3105741079_RuntimeMethod_var);
	}

IL_006b:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeNavigationCompleted(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeNavigationCompleted_m892864007 (GestureRecognizer_t1566529591 * __this, InteractionSource_t872619030  ___source0, InteractionSourcePose_t752709879  ___sourcePose1, Pose_t545244865  ___headPose2, Vector3_t3722313464  ___normalizedOffset3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeNavigationCompleted_m892864007_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NavigationCompletedEventDelegate_t3119650473 * V_0 = NULL;
	Action_1_t341761863 * V_1 = NULL;
	NavigationCompletedEventArgs_t169294268  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		NavigationCompletedEventDelegate_t3119650473 * L_0 = __this->get_NavigationCompletedEvent_25();
		V_0 = L_0;
		NavigationCompletedEventDelegate_t3119650473 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		NavigationCompletedEventDelegate_t3119650473 * L_2 = V_0;
		int32_t L_3 = (&___source0)->get_m_SourceKind_1();
		Vector3_t3722313464  L_4 = ___normalizedOffset3;
		Vector3_t3722313464  L_5 = (&___headPose2)->get_position_0();
		Quaternion_t2301928331  L_6 = (&___headPose2)->get_rotation_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_7 = Vector3_get_forward_m3100859705(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_8 = Quaternion_op_Multiply_m2607404835(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		Ray_t3785851493  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Ray__ctor_m168149494((&L_9), L_5, L_8, /*hidden argument*/NULL);
		NullCheck(L_2);
		NavigationCompletedEventDelegate_Invoke_m2058281490(L_2, L_3, L_4, L_9, /*hidden argument*/NULL);
	}

IL_003a:
	{
		Action_1_t341761863 * L_10 = __this->get_NavigationCompleted_10();
		V_1 = L_10;
		Action_1_t341761863 * L_11 = V_1;
		if (!L_11)
		{
			goto IL_0071;
		}
	}
	{
		InteractionSource_t872619030  L_12 = ___source0;
		(&V_2)->set_m_Source_0(L_12);
		InteractionSourcePose_t752709879  L_13 = ___sourcePose1;
		(&V_2)->set_m_SourcePose_1(L_13);
		Pose_t545244865  L_14 = ___headPose2;
		(&V_2)->set_m_HeadPose_2(L_14);
		Vector3_t3722313464  L_15 = ___normalizedOffset3;
		(&V_2)->set_m_NormalizedOffset_3(L_15);
		Action_1_t341761863 * L_16 = V_1;
		NavigationCompletedEventArgs_t169294268  L_17 = V_2;
		NullCheck(L_16);
		Action_1_Invoke_m1389206130(L_16, L_17, /*hidden argument*/Action_1_Invoke_m1389206130_RuntimeMethod_var);
	}

IL_0071:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeNavigationStarted(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose)
extern "C" IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeNavigationStarted_m2566118741 (GestureRecognizer_t1566529591 * __this, InteractionSource_t872619030  ___source0, InteractionSourcePose_t752709879  ___sourcePose1, Pose_t545244865  ___headPose2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeNavigationStarted_m2566118741_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NavigationStartedEventDelegate_t3496816902 * V_0 = NULL;
	Action_1_t3544757211 * V_1 = NULL;
	NavigationStartedEventArgs_t3372289616  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		NavigationStartedEventDelegate_t3496816902 * L_0 = __this->get_NavigationStartedEvent_26();
		V_0 = L_0;
		NavigationStartedEventDelegate_t3496816902 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		NavigationStartedEventDelegate_t3496816902 * L_2 = V_0;
		int32_t L_3 = (&___source0)->get_m_SourceKind_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_4 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_5 = (&___headPose2)->get_position_0();
		Quaternion_t2301928331  L_6 = (&___headPose2)->get_rotation_1();
		Vector3_t3722313464  L_7 = Vector3_get_forward_m3100859705(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_8 = Quaternion_op_Multiply_m2607404835(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		Ray_t3785851493  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Ray__ctor_m168149494((&L_9), L_5, L_8, /*hidden argument*/NULL);
		NullCheck(L_2);
		NavigationStartedEventDelegate_Invoke_m3831826425(L_2, L_3, L_4, L_9, /*hidden argument*/NULL);
	}

IL_003d:
	{
		Action_1_t3544757211 * L_10 = __this->get_NavigationStarted_11();
		V_1 = L_10;
		Action_1_t3544757211 * L_11 = V_1;
		if (!L_11)
		{
			goto IL_006b;
		}
	}
	{
		InteractionSource_t872619030  L_12 = ___source0;
		(&V_2)->set_m_Source_0(L_12);
		InteractionSourcePose_t752709879  L_13 = ___sourcePose1;
		(&V_2)->set_m_SourcePose_1(L_13);
		Pose_t545244865  L_14 = ___headPose2;
		(&V_2)->set_m_HeadPose_2(L_14);
		Action_1_t3544757211 * L_15 = V_1;
		NavigationStartedEventArgs_t3372289616  L_16 = V_2;
		NullCheck(L_15);
		Action_1_Invoke_m1449216168(L_15, L_16, /*hidden argument*/Action_1_Invoke_m1449216168_RuntimeMethod_var);
	}

IL_006b:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeNavigationUpdated(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeNavigationUpdated_m422298312 (GestureRecognizer_t1566529591 * __this, InteractionSource_t872619030  ___source0, InteractionSourcePose_t752709879  ___sourcePose1, Pose_t545244865  ___headPose2, Vector3_t3722313464  ___normalizedOffset3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeNavigationUpdated_m422298312_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NavigationUpdatedEventDelegate_t2894903996 * V_0 = NULL;
	Action_1_t1156518837 * V_1 = NULL;
	NavigationUpdatedEventArgs_t984051242  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		NavigationUpdatedEventDelegate_t2894903996 * L_0 = __this->get_NavigationUpdatedEvent_27();
		V_0 = L_0;
		NavigationUpdatedEventDelegate_t2894903996 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		NavigationUpdatedEventDelegate_t2894903996 * L_2 = V_0;
		int32_t L_3 = (&___source0)->get_m_SourceKind_1();
		Vector3_t3722313464  L_4 = ___normalizedOffset3;
		Vector3_t3722313464  L_5 = (&___headPose2)->get_position_0();
		Quaternion_t2301928331  L_6 = (&___headPose2)->get_rotation_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_7 = Vector3_get_forward_m3100859705(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_8 = Quaternion_op_Multiply_m2607404835(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		Ray_t3785851493  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Ray__ctor_m168149494((&L_9), L_5, L_8, /*hidden argument*/NULL);
		NullCheck(L_2);
		NavigationUpdatedEventDelegate_Invoke_m3669550307(L_2, L_3, L_4, L_9, /*hidden argument*/NULL);
	}

IL_003a:
	{
		Action_1_t1156518837 * L_10 = __this->get_NavigationUpdated_12();
		V_1 = L_10;
		Action_1_t1156518837 * L_11 = V_1;
		if (!L_11)
		{
			goto IL_0071;
		}
	}
	{
		InteractionSource_t872619030  L_12 = ___source0;
		(&V_2)->set_m_Source_0(L_12);
		InteractionSourcePose_t752709879  L_13 = ___sourcePose1;
		(&V_2)->set_m_SourcePose_1(L_13);
		Pose_t545244865  L_14 = ___headPose2;
		(&V_2)->set_m_HeadPose_2(L_14);
		Vector3_t3722313464  L_15 = ___normalizedOffset3;
		(&V_2)->set_m_NormalizedOffset_3(L_15);
		Action_1_t1156518837 * L_16 = V_1;
		NavigationUpdatedEventArgs_t984051242  L_17 = V_2;
		NullCheck(L_16);
		Action_1_Invoke_m3474815515(L_16, L_17, /*hidden argument*/Action_1_Invoke_m3474815515_RuntimeMethod_var);
	}

IL_0071:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeRecognitionEnded(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose)
extern "C" IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeRecognitionEnded_m4163328125 (GestureRecognizer_t1566529591 * __this, InteractionSource_t872619030  ___source0, InteractionSourcePose_t752709879  ___sourcePose1, Pose_t545244865  ___headPose2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeRecognitionEnded_m4163328125_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RecognitionEndedEventDelegate_t2892804592 * V_0 = NULL;
	Action_1_t4073128488 * V_1 = NULL;
	RecognitionEndedEventArgs_t3900660893  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		RecognitionEndedEventDelegate_t2892804592 * L_0 = __this->get_RecognitionEndedEvent_28();
		V_0 = L_0;
		RecognitionEndedEventDelegate_t2892804592 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		RecognitionEndedEventDelegate_t2892804592 * L_2 = V_0;
		int32_t L_3 = (&___source0)->get_m_SourceKind_1();
		Vector3_t3722313464  L_4 = (&___headPose2)->get_position_0();
		Quaternion_t2301928331  L_5 = (&___headPose2)->get_rotation_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_6 = Vector3_get_forward_m3100859705(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_7 = Quaternion_op_Multiply_m2607404835(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		Ray_t3785851493  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Ray__ctor_m168149494((&L_8), L_4, L_7, /*hidden argument*/NULL);
		NullCheck(L_2);
		RecognitionEndedEventDelegate_Invoke_m3917742942(L_2, L_3, L_8, /*hidden argument*/NULL);
	}

IL_0038:
	{
		Action_1_t4073128488 * L_9 = __this->get_RecognitionEnded_13();
		V_1 = L_9;
		Action_1_t4073128488 * L_10 = V_1;
		if (!L_10)
		{
			goto IL_0066;
		}
	}
	{
		InteractionSource_t872619030  L_11 = ___source0;
		(&V_2)->set_m_Source_0(L_11);
		InteractionSourcePose_t752709879  L_12 = ___sourcePose1;
		(&V_2)->set_m_SourcePose_1(L_12);
		Pose_t545244865  L_13 = ___headPose2;
		(&V_2)->set_m_HeadPose_2(L_13);
		Action_1_t4073128488 * L_14 = V_1;
		RecognitionEndedEventArgs_t3900660893  L_15 = V_2;
		NullCheck(L_14);
		Action_1_Invoke_m635090190(L_14, L_15, /*hidden argument*/Action_1_Invoke_m635090190_RuntimeMethod_var);
	}

IL_0066:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeRecognitionStarted(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose)
extern "C" IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeRecognitionStarted_m2218284341 (GestureRecognizer_t1566529591 * __this, InteractionSource_t872619030  ___source0, InteractionSourcePose_t752709879  ___sourcePose1, Pose_t545244865  ___headPose2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeRecognitionStarted_m2218284341_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RecognitionStartedEventDelegate_t3727320336 * V_0 = NULL;
	Action_1_t1098359099 * V_1 = NULL;
	RecognitionStartedEventArgs_t925891504  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		RecognitionStartedEventDelegate_t3727320336 * L_0 = __this->get_RecognitionStartedEvent_29();
		V_0 = L_0;
		RecognitionStartedEventDelegate_t3727320336 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		RecognitionStartedEventDelegate_t3727320336 * L_2 = V_0;
		int32_t L_3 = (&___source0)->get_m_SourceKind_1();
		Vector3_t3722313464  L_4 = (&___headPose2)->get_position_0();
		Quaternion_t2301928331  L_5 = (&___headPose2)->get_rotation_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_6 = Vector3_get_forward_m3100859705(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_7 = Quaternion_op_Multiply_m2607404835(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		Ray_t3785851493  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Ray__ctor_m168149494((&L_8), L_4, L_7, /*hidden argument*/NULL);
		NullCheck(L_2);
		RecognitionStartedEventDelegate_Invoke_m285038765(L_2, L_3, L_8, /*hidden argument*/NULL);
	}

IL_0038:
	{
		Action_1_t1098359099 * L_9 = __this->get_RecognitionStarted_14();
		V_1 = L_9;
		Action_1_t1098359099 * L_10 = V_1;
		if (!L_10)
		{
			goto IL_0066;
		}
	}
	{
		InteractionSource_t872619030  L_11 = ___source0;
		(&V_2)->set_m_Source_0(L_11);
		InteractionSourcePose_t752709879  L_12 = ___sourcePose1;
		(&V_2)->set_m_SourcePose_1(L_12);
		Pose_t545244865  L_13 = ___headPose2;
		(&V_2)->set_m_HeadPose_2(L_13);
		Action_1_t1098359099 * L_14 = V_1;
		RecognitionStartedEventArgs_t925891504  L_15 = V_2;
		NullCheck(L_14);
		Action_1_Invoke_m671841968(L_14, L_15, /*hidden argument*/Action_1_Invoke_m671841968_RuntimeMethod_var);
	}

IL_0066:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeErrorEvent(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeErrorEvent_m2406480045 (GestureRecognizer_t1566529591 * __this, String_t* ___error0, int32_t ___hresult1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeErrorEvent_m2406480045_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GestureErrorDelegate_t3254371646 * V_0 = NULL;
	Action_1_t3114543800 * V_1 = NULL;
	{
		GestureErrorDelegate_t3254371646 * L_0 = __this->get_GestureErrorEvent_30();
		V_0 = L_0;
		GestureErrorDelegate_t3254371646 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		GestureErrorDelegate_t3254371646 * L_2 = V_0;
		String_t* L_3 = ___error0;
		int32_t L_4 = ___hresult1;
		NullCheck(L_2);
		GestureErrorDelegate_Invoke_m91315099(L_2, L_3, L_4, /*hidden argument*/NULL);
	}

IL_0016:
	{
		Action_1_t3114543800 * L_5 = __this->get_GestureError_15();
		V_1 = L_5;
		Action_1_t3114543800 * L_6 = V_1;
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		Action_1_t3114543800 * L_7 = V_1;
		String_t* L_8 = ___error0;
		int32_t L_9 = ___hresult1;
		GestureErrorEventArgs_t2942076205  L_10;
		memset(&L_10, 0, sizeof(L_10));
		GestureErrorEventArgs__ctor_m1144453585((&L_10), L_8, L_9, /*hidden argument*/NULL);
		NullCheck(L_7);
		Action_1_Invoke_m355844915(L_7, L_10, /*hidden argument*/Action_1_Invoke_m355844915_RuntimeMethod_var);
	}

IL_0030:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_GestureErrorDelegate_t3254371646 (GestureErrorDelegate_t3254371646 * __this, String_t* ___error0, int32_t ___hresult1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___error0' to native representation
	char* ____error0_marshaled = NULL;
	____error0_marshaled = il2cpp_codegen_marshal_string(___error0);

	// Native function invocation
	il2cppPInvokeFunc(____error0_marshaled, ___hresult1);

	// Marshaling cleanup of parameter '___error0' native representation
	il2cpp_codegen_marshal_free(____error0_marshaled);
	____error0_marshaled = NULL;

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/GestureErrorDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GestureErrorDelegate__ctor_m4044609359 (GestureErrorDelegate_t3254371646 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/GestureErrorDelegate::Invoke(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void GestureErrorDelegate_Invoke_m91315099 (GestureErrorDelegate_t3254371646 * __this, String_t* ___error0, int32_t ___hresult1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
				{
					// open
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, String_t*, int32_t, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___error0, ___hresult1, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, String_t*, int32_t, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___error0, ___hresult1, targetMethod);
					}
				}
			}
			else
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker2< String_t*, int32_t >::Invoke(targetMethod, targetThis, ___error0, ___hresult1);
							else
								GenericVirtActionInvoker2< String_t*, int32_t >::Invoke(targetMethod, targetThis, ___error0, ___hresult1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker2< String_t*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___error0, ___hresult1);
							else
								VirtActionInvoker2< String_t*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___error0, ___hresult1);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, String_t*, int32_t, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___error0, ___hresult1, targetMethod);
					}
				}
				else
				{
					// open
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, ___error0, ___hresult1);
							else
								GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, ___error0, ___hresult1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___error0, ___hresult1);
							else
								VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___error0, ___hresult1);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (String_t*, int32_t, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___error0, ___hresult1, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
			{
				// open
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, String_t*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___error0, ___hresult1, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, String_t*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___error0, ___hresult1, targetMethod);
				}
			}
		}
		else
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker2< String_t*, int32_t >::Invoke(targetMethod, targetThis, ___error0, ___hresult1);
						else
							GenericVirtActionInvoker2< String_t*, int32_t >::Invoke(targetMethod, targetThis, ___error0, ___hresult1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker2< String_t*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___error0, ___hresult1);
						else
							VirtActionInvoker2< String_t*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___error0, ___hresult1);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___error0, ___hresult1, targetMethod);
				}
			}
			else
			{
				// open
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, ___error0, ___hresult1);
						else
							GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, ___error0, ___hresult1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___error0, ___hresult1);
						else
							VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___error0, ___hresult1);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (String_t*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___error0, ___hresult1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer/GestureErrorDelegate::BeginInvoke(System.String,System.Int32,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GestureErrorDelegate_BeginInvoke_m2034699318 (GestureErrorDelegate_t3254371646 * __this, String_t* ___error0, int32_t ___hresult1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureErrorDelegate_BeginInvoke_m2034699318_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___error0;
	__d_args[1] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___hresult1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/GestureErrorDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void GestureErrorDelegate_EndInvoke_m2015020503 (GestureErrorDelegate_t3254371646 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_HoldCanceledEventDelegate_t3242927192 (HoldCanceledEventDelegate_t3242927192 * __this, int32_t ___source0, Ray_t3785851493  ___headRay1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Ray_t3785851493 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___headRay1);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/HoldCanceledEventDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void HoldCanceledEventDelegate__ctor_m245974380 (HoldCanceledEventDelegate_t3242927192 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/HoldCanceledEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR void HoldCanceledEventDelegate_Invoke_m2852931578 (HoldCanceledEventDelegate_t3242927192 * __this, int32_t ___source0, Ray_t3785851493  ___headRay1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
				{
					// open
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, Ray_t3785851493 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___source0, ___headRay1, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, Ray_t3785851493 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___source0, ___headRay1, targetMethod);
					}
				}
			}
			else
			{
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker2< int32_t, Ray_t3785851493  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
							else
								GenericVirtActionInvoker2< int32_t, Ray_t3785851493  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker2< int32_t, Ray_t3785851493  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___headRay1);
							else
								VirtActionInvoker2< int32_t, Ray_t3785851493  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___headRay1);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, int32_t, Ray_t3785851493 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___headRay1, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
			{
				// open
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, Ray_t3785851493 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___source0, ___headRay1, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, Ray_t3785851493 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___source0, ___headRay1, targetMethod);
				}
			}
		}
		else
		{
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker2< int32_t, Ray_t3785851493  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
						else
							GenericVirtActionInvoker2< int32_t, Ray_t3785851493  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker2< int32_t, Ray_t3785851493  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___headRay1);
						else
							VirtActionInvoker2< int32_t, Ray_t3785851493  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___headRay1);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, Ray_t3785851493 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___headRay1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer/HoldCanceledEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* HoldCanceledEventDelegate_BeginInvoke_m303661746 (HoldCanceledEventDelegate_t3242927192 * __this, int32_t ___source0, Ray_t3785851493  ___headRay1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HoldCanceledEventDelegate_BeginInvoke_m303661746_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(InteractionSourceKind_t3005082353_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Ray_t3785851493_il2cpp_TypeInfo_var, &___headRay1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/HoldCanceledEventDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void HoldCanceledEventDelegate_EndInvoke_m133341510 (HoldCanceledEventDelegate_t3242927192 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_HoldCompletedEventDelegate_t4112318659 (HoldCompletedEventDelegate_t4112318659 * __this, int32_t ___source0, Ray_t3785851493  ___headRay1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Ray_t3785851493 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___headRay1);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/HoldCompletedEventDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void HoldCompletedEventDelegate__ctor_m4032306600 (HoldCompletedEventDelegate_t4112318659 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/HoldCompletedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR void HoldCompletedEventDelegate_Invoke_m776961770 (HoldCompletedEventDelegate_t4112318659 * __this, int32_t ___source0, Ray_t3785851493  ___headRay1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
				{
					// open
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, Ray_t3785851493 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___source0, ___headRay1, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, Ray_t3785851493 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___source0, ___headRay1, targetMethod);
					}
				}
			}
			else
			{
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker2< int32_t, Ray_t3785851493  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
							else
								GenericVirtActionInvoker2< int32_t, Ray_t3785851493  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker2< int32_t, Ray_t3785851493  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___headRay1);
							else
								VirtActionInvoker2< int32_t, Ray_t3785851493  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___headRay1);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, int32_t, Ray_t3785851493 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___headRay1, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
			{
				// open
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, Ray_t3785851493 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___source0, ___headRay1, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, Ray_t3785851493 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___source0, ___headRay1, targetMethod);
				}
			}
		}
		else
		{
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker2< int32_t, Ray_t3785851493  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
						else
							GenericVirtActionInvoker2< int32_t, Ray_t3785851493  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker2< int32_t, Ray_t3785851493  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___headRay1);
						else
							VirtActionInvoker2< int32_t, Ray_t3785851493  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___headRay1);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, Ray_t3785851493 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___headRay1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer/HoldCompletedEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* HoldCompletedEventDelegate_BeginInvoke_m3635203122 (HoldCompletedEventDelegate_t4112318659 * __this, int32_t ___source0, Ray_t3785851493  ___headRay1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HoldCompletedEventDelegate_BeginInvoke_m3635203122_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(InteractionSourceKind_t3005082353_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Ray_t3785851493_il2cpp_TypeInfo_var, &___headRay1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/HoldCompletedEventDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void HoldCompletedEventDelegate_EndInvoke_m3187447305 (HoldCompletedEventDelegate_t4112318659 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_HoldStartedEventDelegate_t1669693510 (HoldStartedEventDelegate_t1669693510 * __this, int32_t ___source0, Ray_t3785851493  ___headRay1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Ray_t3785851493 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___headRay1);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/HoldStartedEventDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void HoldStartedEventDelegate__ctor_m1185996882 (HoldStartedEventDelegate_t1669693510 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/HoldStartedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR void HoldStartedEventDelegate_Invoke_m3613134118 (HoldStartedEventDelegate_t1669693510 * __this, int32_t ___source0, Ray_t3785851493  ___headRay1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
				{
					// open
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, Ray_t3785851493 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___source0, ___headRay1, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, Ray_t3785851493 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___source0, ___headRay1, targetMethod);
					}
				}
			}
			else
			{
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker2< int32_t, Ray_t3785851493  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
							else
								GenericVirtActionInvoker2< int32_t, Ray_t3785851493  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker2< int32_t, Ray_t3785851493  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___headRay1);
							else
								VirtActionInvoker2< int32_t, Ray_t3785851493  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___headRay1);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, int32_t, Ray_t3785851493 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___headRay1, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
			{
				// open
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, Ray_t3785851493 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___source0, ___headRay1, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, Ray_t3785851493 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___source0, ___headRay1, targetMethod);
				}
			}
		}
		else
		{
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker2< int32_t, Ray_t3785851493  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
						else
							GenericVirtActionInvoker2< int32_t, Ray_t3785851493  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker2< int32_t, Ray_t3785851493  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___headRay1);
						else
							VirtActionInvoker2< int32_t, Ray_t3785851493  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___headRay1);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, Ray_t3785851493 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___headRay1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer/HoldStartedEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* HoldStartedEventDelegate_BeginInvoke_m732977840 (HoldStartedEventDelegate_t1669693510 * __this, int32_t ___source0, Ray_t3785851493  ___headRay1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HoldStartedEventDelegate_BeginInvoke_m732977840_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(InteractionSourceKind_t3005082353_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Ray_t3785851493_il2cpp_TypeInfo_var, &___headRay1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/HoldStartedEventDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void HoldStartedEventDelegate_EndInvoke_m3226760149 (HoldStartedEventDelegate_t1669693510 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_ManipulationCanceledEventDelegate_t3141027694 (ManipulationCanceledEventDelegate_t3141027694 * __this, int32_t ___source0, Vector3_t3722313464  ___cumulativeDelta1, Ray_t3785851493  ___headRay2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Vector3_t3722313464 , Ray_t3785851493 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___cumulativeDelta1, ___headRay2);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationCanceledEventDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ManipulationCanceledEventDelegate__ctor_m1778554256 (ManipulationCanceledEventDelegate_t3141027694 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationCanceledEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR void ManipulationCanceledEventDelegate_Invoke_m730403681 (ManipulationCanceledEventDelegate_t3141027694 * __this, int32_t ___source0, Vector3_t3722313464  ___cumulativeDelta1, Ray_t3785851493  ___headRay2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 3)
				{
					// open
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, Vector3_t3722313464 , Ray_t3785851493 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, Vector3_t3722313464 , Ray_t3785851493 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
					}
				}
			}
			else
			{
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker3< int32_t, Vector3_t3722313464 , Ray_t3785851493  >::Invoke(targetMethod, targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
							else
								GenericVirtActionInvoker3< int32_t, Vector3_t3722313464 , Ray_t3785851493  >::Invoke(targetMethod, targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker3< int32_t, Vector3_t3722313464 , Ray_t3785851493  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
							else
								VirtActionInvoker3< int32_t, Vector3_t3722313464 , Ray_t3785851493  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, int32_t, Vector3_t3722313464 , Ray_t3785851493 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 3)
			{
				// open
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, Vector3_t3722313464 , Ray_t3785851493 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, Vector3_t3722313464 , Ray_t3785851493 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
				}
			}
		}
		else
		{
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker3< int32_t, Vector3_t3722313464 , Ray_t3785851493  >::Invoke(targetMethod, targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
						else
							GenericVirtActionInvoker3< int32_t, Vector3_t3722313464 , Ray_t3785851493  >::Invoke(targetMethod, targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker3< int32_t, Vector3_t3722313464 , Ray_t3785851493  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
						else
							VirtActionInvoker3< int32_t, Vector3_t3722313464 , Ray_t3785851493  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, Vector3_t3722313464 , Ray_t3785851493 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationCanceledEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ManipulationCanceledEventDelegate_BeginInvoke_m3906507283 (ManipulationCanceledEventDelegate_t3141027694 * __this, int32_t ___source0, Vector3_t3722313464  ___cumulativeDelta1, Ray_t3785851493  ___headRay2, AsyncCallback_t3962456242 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManipulationCanceledEventDelegate_BeginInvoke_m3906507283_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(InteractionSourceKind_t3005082353_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Vector3_t3722313464_il2cpp_TypeInfo_var, &___cumulativeDelta1);
	__d_args[2] = Box(Ray_t3785851493_il2cpp_TypeInfo_var, &___headRay2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationCanceledEventDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void ManipulationCanceledEventDelegate_EndInvoke_m2227659345 (ManipulationCanceledEventDelegate_t3141027694 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_ManipulationCompletedEventDelegate_t3126788776 (ManipulationCompletedEventDelegate_t3126788776 * __this, int32_t ___source0, Vector3_t3722313464  ___cumulativeDelta1, Ray_t3785851493  ___headRay2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Vector3_t3722313464 , Ray_t3785851493 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___cumulativeDelta1, ___headRay2);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationCompletedEventDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ManipulationCompletedEventDelegate__ctor_m638277183 (ManipulationCompletedEventDelegate_t3126788776 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationCompletedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR void ManipulationCompletedEventDelegate_Invoke_m1444946867 (ManipulationCompletedEventDelegate_t3126788776 * __this, int32_t ___source0, Vector3_t3722313464  ___cumulativeDelta1, Ray_t3785851493  ___headRay2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 3)
				{
					// open
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, Vector3_t3722313464 , Ray_t3785851493 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, Vector3_t3722313464 , Ray_t3785851493 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
					}
				}
			}
			else
			{
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker3< int32_t, Vector3_t3722313464 , Ray_t3785851493  >::Invoke(targetMethod, targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
							else
								GenericVirtActionInvoker3< int32_t, Vector3_t3722313464 , Ray_t3785851493  >::Invoke(targetMethod, targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker3< int32_t, Vector3_t3722313464 , Ray_t3785851493  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
							else
								VirtActionInvoker3< int32_t, Vector3_t3722313464 , Ray_t3785851493  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, int32_t, Vector3_t3722313464 , Ray_t3785851493 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 3)
			{
				// open
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, Vector3_t3722313464 , Ray_t3785851493 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, Vector3_t3722313464 , Ray_t3785851493 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
				}
			}
		}
		else
		{
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker3< int32_t, Vector3_t3722313464 , Ray_t3785851493  >::Invoke(targetMethod, targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
						else
							GenericVirtActionInvoker3< int32_t, Vector3_t3722313464 , Ray_t3785851493  >::Invoke(targetMethod, targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker3< int32_t, Vector3_t3722313464 , Ray_t3785851493  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
						else
							VirtActionInvoker3< int32_t, Vector3_t3722313464 , Ray_t3785851493  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, Vector3_t3722313464 , Ray_t3785851493 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationCompletedEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ManipulationCompletedEventDelegate_BeginInvoke_m2701514021 (ManipulationCompletedEventDelegate_t3126788776 * __this, int32_t ___source0, Vector3_t3722313464  ___cumulativeDelta1, Ray_t3785851493  ___headRay2, AsyncCallback_t3962456242 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManipulationCompletedEventDelegate_BeginInvoke_m2701514021_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(InteractionSourceKind_t3005082353_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Vector3_t3722313464_il2cpp_TypeInfo_var, &___cumulativeDelta1);
	__d_args[2] = Box(Ray_t3785851493_il2cpp_TypeInfo_var, &___headRay2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationCompletedEventDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void ManipulationCompletedEventDelegate_EndInvoke_m1917613320 (ManipulationCompletedEventDelegate_t3126788776 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_ManipulationStartedEventDelegate_t1581880091 (ManipulationStartedEventDelegate_t1581880091 * __this, int32_t ___source0, Vector3_t3722313464  ___cumulativeDelta1, Ray_t3785851493  ___headRay2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Vector3_t3722313464 , Ray_t3785851493 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___cumulativeDelta1, ___headRay2);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationStartedEventDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ManipulationStartedEventDelegate__ctor_m3703941610 (ManipulationStartedEventDelegate_t1581880091 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationStartedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR void ManipulationStartedEventDelegate_Invoke_m78456035 (ManipulationStartedEventDelegate_t1581880091 * __this, int32_t ___source0, Vector3_t3722313464  ___cumulativeDelta1, Ray_t3785851493  ___headRay2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 3)
				{
					// open
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, Vector3_t3722313464 , Ray_t3785851493 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, Vector3_t3722313464 , Ray_t3785851493 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
					}
				}
			}
			else
			{
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker3< int32_t, Vector3_t3722313464 , Ray_t3785851493  >::Invoke(targetMethod, targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
							else
								GenericVirtActionInvoker3< int32_t, Vector3_t3722313464 , Ray_t3785851493  >::Invoke(targetMethod, targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker3< int32_t, Vector3_t3722313464 , Ray_t3785851493  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
							else
								VirtActionInvoker3< int32_t, Vector3_t3722313464 , Ray_t3785851493  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, int32_t, Vector3_t3722313464 , Ray_t3785851493 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 3)
			{
				// open
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, Vector3_t3722313464 , Ray_t3785851493 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, Vector3_t3722313464 , Ray_t3785851493 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
				}
			}
		}
		else
		{
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker3< int32_t, Vector3_t3722313464 , Ray_t3785851493  >::Invoke(targetMethod, targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
						else
							GenericVirtActionInvoker3< int32_t, Vector3_t3722313464 , Ray_t3785851493  >::Invoke(targetMethod, targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker3< int32_t, Vector3_t3722313464 , Ray_t3785851493  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
						else
							VirtActionInvoker3< int32_t, Vector3_t3722313464 , Ray_t3785851493  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, Vector3_t3722313464 , Ray_t3785851493 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationStartedEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ManipulationStartedEventDelegate_BeginInvoke_m3487151117 (ManipulationStartedEventDelegate_t1581880091 * __this, int32_t ___source0, Vector3_t3722313464  ___cumulativeDelta1, Ray_t3785851493  ___headRay2, AsyncCallback_t3962456242 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManipulationStartedEventDelegate_BeginInvoke_m3487151117_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(InteractionSourceKind_t3005082353_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Vector3_t3722313464_il2cpp_TypeInfo_var, &___cumulativeDelta1);
	__d_args[2] = Box(Ray_t3785851493_il2cpp_TypeInfo_var, &___headRay2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationStartedEventDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void ManipulationStartedEventDelegate_EndInvoke_m3737982803 (ManipulationStartedEventDelegate_t1581880091 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_ManipulationUpdatedEventDelegate_t2990350064 (ManipulationUpdatedEventDelegate_t2990350064 * __this, int32_t ___source0, Vector3_t3722313464  ___cumulativeDelta1, Ray_t3785851493  ___headRay2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Vector3_t3722313464 , Ray_t3785851493 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___cumulativeDelta1, ___headRay2);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationUpdatedEventDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ManipulationUpdatedEventDelegate__ctor_m3240093736 (ManipulationUpdatedEventDelegate_t2990350064 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationUpdatedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR void ManipulationUpdatedEventDelegate_Invoke_m3096075429 (ManipulationUpdatedEventDelegate_t2990350064 * __this, int32_t ___source0, Vector3_t3722313464  ___cumulativeDelta1, Ray_t3785851493  ___headRay2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 3)
				{
					// open
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, Vector3_t3722313464 , Ray_t3785851493 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, Vector3_t3722313464 , Ray_t3785851493 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
					}
				}
			}
			else
			{
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker3< int32_t, Vector3_t3722313464 , Ray_t3785851493  >::Invoke(targetMethod, targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
							else
								GenericVirtActionInvoker3< int32_t, Vector3_t3722313464 , Ray_t3785851493  >::Invoke(targetMethod, targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker3< int32_t, Vector3_t3722313464 , Ray_t3785851493  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
							else
								VirtActionInvoker3< int32_t, Vector3_t3722313464 , Ray_t3785851493  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, int32_t, Vector3_t3722313464 , Ray_t3785851493 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 3)
			{
				// open
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, Vector3_t3722313464 , Ray_t3785851493 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, Vector3_t3722313464 , Ray_t3785851493 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
				}
			}
		}
		else
		{
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker3< int32_t, Vector3_t3722313464 , Ray_t3785851493  >::Invoke(targetMethod, targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
						else
							GenericVirtActionInvoker3< int32_t, Vector3_t3722313464 , Ray_t3785851493  >::Invoke(targetMethod, targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker3< int32_t, Vector3_t3722313464 , Ray_t3785851493  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
						else
							VirtActionInvoker3< int32_t, Vector3_t3722313464 , Ray_t3785851493  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, Vector3_t3722313464 , Ray_t3785851493 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationUpdatedEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ManipulationUpdatedEventDelegate_BeginInvoke_m337262976 (ManipulationUpdatedEventDelegate_t2990350064 * __this, int32_t ___source0, Vector3_t3722313464  ___cumulativeDelta1, Ray_t3785851493  ___headRay2, AsyncCallback_t3962456242 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManipulationUpdatedEventDelegate_BeginInvoke_m337262976_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(InteractionSourceKind_t3005082353_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Vector3_t3722313464_il2cpp_TypeInfo_var, &___cumulativeDelta1);
	__d_args[2] = Box(Ray_t3785851493_il2cpp_TypeInfo_var, &___headRay2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationUpdatedEventDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void ManipulationUpdatedEventDelegate_EndInvoke_m3217578736 (ManipulationUpdatedEventDelegate_t2990350064 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_NavigationCanceledEventDelegate_t2505886250 (NavigationCanceledEventDelegate_t2505886250 * __this, int32_t ___source0, Vector3_t3722313464  ___normalizedOffset1, Ray_t3785851493  ___headRay2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Vector3_t3722313464 , Ray_t3785851493 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___normalizedOffset1, ___headRay2);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationCanceledEventDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void NavigationCanceledEventDelegate__ctor_m3218604906 (NavigationCanceledEventDelegate_t2505886250 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationCanceledEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR void NavigationCanceledEventDelegate_Invoke_m2344031408 (NavigationCanceledEventDelegate_t2505886250 * __this, int32_t ___source0, Vector3_t3722313464  ___normalizedOffset1, Ray_t3785851493  ___headRay2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 3)
				{
					// open
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, Vector3_t3722313464 , Ray_t3785851493 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___source0, ___normalizedOffset1, ___headRay2, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, Vector3_t3722313464 , Ray_t3785851493 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___source0, ___normalizedOffset1, ___headRay2, targetMethod);
					}
				}
			}
			else
			{
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker3< int32_t, Vector3_t3722313464 , Ray_t3785851493  >::Invoke(targetMethod, targetThis, ___source0, ___normalizedOffset1, ___headRay2);
							else
								GenericVirtActionInvoker3< int32_t, Vector3_t3722313464 , Ray_t3785851493  >::Invoke(targetMethod, targetThis, ___source0, ___normalizedOffset1, ___headRay2);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker3< int32_t, Vector3_t3722313464 , Ray_t3785851493  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___normalizedOffset1, ___headRay2);
							else
								VirtActionInvoker3< int32_t, Vector3_t3722313464 , Ray_t3785851493  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___normalizedOffset1, ___headRay2);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, int32_t, Vector3_t3722313464 , Ray_t3785851493 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___normalizedOffset1, ___headRay2, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 3)
			{
				// open
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, Vector3_t3722313464 , Ray_t3785851493 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___source0, ___normalizedOffset1, ___headRay2, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, Vector3_t3722313464 , Ray_t3785851493 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___source0, ___normalizedOffset1, ___headRay2, targetMethod);
				}
			}
		}
		else
		{
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker3< int32_t, Vector3_t3722313464 , Ray_t3785851493  >::Invoke(targetMethod, targetThis, ___source0, ___normalizedOffset1, ___headRay2);
						else
							GenericVirtActionInvoker3< int32_t, Vector3_t3722313464 , Ray_t3785851493  >::Invoke(targetMethod, targetThis, ___source0, ___normalizedOffset1, ___headRay2);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker3< int32_t, Vector3_t3722313464 , Ray_t3785851493  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___normalizedOffset1, ___headRay2);
						else
							VirtActionInvoker3< int32_t, Vector3_t3722313464 , Ray_t3785851493  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___normalizedOffset1, ___headRay2);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, Vector3_t3722313464 , Ray_t3785851493 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___normalizedOffset1, ___headRay2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationCanceledEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* NavigationCanceledEventDelegate_BeginInvoke_m4001118042 (NavigationCanceledEventDelegate_t2505886250 * __this, int32_t ___source0, Vector3_t3722313464  ___normalizedOffset1, Ray_t3785851493  ___headRay2, AsyncCallback_t3962456242 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NavigationCanceledEventDelegate_BeginInvoke_m4001118042_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(InteractionSourceKind_t3005082353_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Vector3_t3722313464_il2cpp_TypeInfo_var, &___normalizedOffset1);
	__d_args[2] = Box(Ray_t3785851493_il2cpp_TypeInfo_var, &___headRay2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationCanceledEventDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void NavigationCanceledEventDelegate_EndInvoke_m655321100 (NavigationCanceledEventDelegate_t2505886250 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_NavigationCompletedEventDelegate_t3119650473 (NavigationCompletedEventDelegate_t3119650473 * __this, int32_t ___source0, Vector3_t3722313464  ___normalizedOffset1, Ray_t3785851493  ___headRay2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Vector3_t3722313464 , Ray_t3785851493 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___normalizedOffset1, ___headRay2);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationCompletedEventDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void NavigationCompletedEventDelegate__ctor_m2504385361 (NavigationCompletedEventDelegate_t3119650473 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationCompletedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR void NavigationCompletedEventDelegate_Invoke_m2058281490 (NavigationCompletedEventDelegate_t3119650473 * __this, int32_t ___source0, Vector3_t3722313464  ___normalizedOffset1, Ray_t3785851493  ___headRay2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 3)
				{
					// open
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, Vector3_t3722313464 , Ray_t3785851493 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___source0, ___normalizedOffset1, ___headRay2, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, Vector3_t3722313464 , Ray_t3785851493 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___source0, ___normalizedOffset1, ___headRay2, targetMethod);
					}
				}
			}
			else
			{
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker3< int32_t, Vector3_t3722313464 , Ray_t3785851493  >::Invoke(targetMethod, targetThis, ___source0, ___normalizedOffset1, ___headRay2);
							else
								GenericVirtActionInvoker3< int32_t, Vector3_t3722313464 , Ray_t3785851493  >::Invoke(targetMethod, targetThis, ___source0, ___normalizedOffset1, ___headRay2);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker3< int32_t, Vector3_t3722313464 , Ray_t3785851493  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___normalizedOffset1, ___headRay2);
							else
								VirtActionInvoker3< int32_t, Vector3_t3722313464 , Ray_t3785851493  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___normalizedOffset1, ___headRay2);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, int32_t, Vector3_t3722313464 , Ray_t3785851493 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___normalizedOffset1, ___headRay2, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 3)
			{
				// open
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, Vector3_t3722313464 , Ray_t3785851493 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___source0, ___normalizedOffset1, ___headRay2, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, Vector3_t3722313464 , Ray_t3785851493 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___source0, ___normalizedOffset1, ___headRay2, targetMethod);
				}
			}
		}
		else
		{
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker3< int32_t, Vector3_t3722313464 , Ray_t3785851493  >::Invoke(targetMethod, targetThis, ___source0, ___normalizedOffset1, ___headRay2);
						else
							GenericVirtActionInvoker3< int32_t, Vector3_t3722313464 , Ray_t3785851493  >::Invoke(targetMethod, targetThis, ___source0, ___normalizedOffset1, ___headRay2);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker3< int32_t, Vector3_t3722313464 , Ray_t3785851493  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___normalizedOffset1, ___headRay2);
						else
							VirtActionInvoker3< int32_t, Vector3_t3722313464 , Ray_t3785851493  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___normalizedOffset1, ___headRay2);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, Vector3_t3722313464 , Ray_t3785851493 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___normalizedOffset1, ___headRay2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationCompletedEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* NavigationCompletedEventDelegate_BeginInvoke_m1369223494 (NavigationCompletedEventDelegate_t3119650473 * __this, int32_t ___source0, Vector3_t3722313464  ___normalizedOffset1, Ray_t3785851493  ___headRay2, AsyncCallback_t3962456242 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NavigationCompletedEventDelegate_BeginInvoke_m1369223494_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(InteractionSourceKind_t3005082353_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Vector3_t3722313464_il2cpp_TypeInfo_var, &___normalizedOffset1);
	__d_args[2] = Box(Ray_t3785851493_il2cpp_TypeInfo_var, &___headRay2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationCompletedEventDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void NavigationCompletedEventDelegate_EndInvoke_m2173839195 (NavigationCompletedEventDelegate_t3119650473 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_NavigationStartedEventDelegate_t3496816902 (NavigationStartedEventDelegate_t3496816902 * __this, int32_t ___source0, Vector3_t3722313464  ___normalizedOffset1, Ray_t3785851493  ___headRay2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Vector3_t3722313464 , Ray_t3785851493 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___normalizedOffset1, ___headRay2);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationStartedEventDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void NavigationStartedEventDelegate__ctor_m2597936276 (NavigationStartedEventDelegate_t3496816902 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationStartedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR void NavigationStartedEventDelegate_Invoke_m3831826425 (NavigationStartedEventDelegate_t3496816902 * __this, int32_t ___source0, Vector3_t3722313464  ___normalizedOffset1, Ray_t3785851493  ___headRay2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 3)
				{
					// open
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, Vector3_t3722313464 , Ray_t3785851493 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___source0, ___normalizedOffset1, ___headRay2, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, Vector3_t3722313464 , Ray_t3785851493 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___source0, ___normalizedOffset1, ___headRay2, targetMethod);
					}
				}
			}
			else
			{
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker3< int32_t, Vector3_t3722313464 , Ray_t3785851493  >::Invoke(targetMethod, targetThis, ___source0, ___normalizedOffset1, ___headRay2);
							else
								GenericVirtActionInvoker3< int32_t, Vector3_t3722313464 , Ray_t3785851493  >::Invoke(targetMethod, targetThis, ___source0, ___normalizedOffset1, ___headRay2);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker3< int32_t, Vector3_t3722313464 , Ray_t3785851493  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___normalizedOffset1, ___headRay2);
							else
								VirtActionInvoker3< int32_t, Vector3_t3722313464 , Ray_t3785851493  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___normalizedOffset1, ___headRay2);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, int32_t, Vector3_t3722313464 , Ray_t3785851493 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___normalizedOffset1, ___headRay2, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 3)
			{
				// open
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, Vector3_t3722313464 , Ray_t3785851493 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___source0, ___normalizedOffset1, ___headRay2, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, Vector3_t3722313464 , Ray_t3785851493 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___source0, ___normalizedOffset1, ___headRay2, targetMethod);
				}
			}
		}
		else
		{
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker3< int32_t, Vector3_t3722313464 , Ray_t3785851493  >::Invoke(targetMethod, targetThis, ___source0, ___normalizedOffset1, ___headRay2);
						else
							GenericVirtActionInvoker3< int32_t, Vector3_t3722313464 , Ray_t3785851493  >::Invoke(targetMethod, targetThis, ___source0, ___normalizedOffset1, ___headRay2);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker3< int32_t, Vector3_t3722313464 , Ray_t3785851493  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___normalizedOffset1, ___headRay2);
						else
							VirtActionInvoker3< int32_t, Vector3_t3722313464 , Ray_t3785851493  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___normalizedOffset1, ___headRay2);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, Vector3_t3722313464 , Ray_t3785851493 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___normalizedOffset1, ___headRay2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationStartedEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* NavigationStartedEventDelegate_BeginInvoke_m2025529565 (NavigationStartedEventDelegate_t3496816902 * __this, int32_t ___source0, Vector3_t3722313464  ___normalizedOffset1, Ray_t3785851493  ___headRay2, AsyncCallback_t3962456242 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NavigationStartedEventDelegate_BeginInvoke_m2025529565_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(InteractionSourceKind_t3005082353_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Vector3_t3722313464_il2cpp_TypeInfo_var, &___normalizedOffset1);
	__d_args[2] = Box(Ray_t3785851493_il2cpp_TypeInfo_var, &___headRay2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationStartedEventDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void NavigationStartedEventDelegate_EndInvoke_m53065947 (NavigationStartedEventDelegate_t3496816902 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_NavigationUpdatedEventDelegate_t2894903996 (NavigationUpdatedEventDelegate_t2894903996 * __this, int32_t ___source0, Vector3_t3722313464  ___normalizedOffset1, Ray_t3785851493  ___headRay2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Vector3_t3722313464 , Ray_t3785851493 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___normalizedOffset1, ___headRay2);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationUpdatedEventDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void NavigationUpdatedEventDelegate__ctor_m2572917665 (NavigationUpdatedEventDelegate_t2894903996 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationUpdatedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR void NavigationUpdatedEventDelegate_Invoke_m3669550307 (NavigationUpdatedEventDelegate_t2894903996 * __this, int32_t ___source0, Vector3_t3722313464  ___normalizedOffset1, Ray_t3785851493  ___headRay2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 3)
				{
					// open
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, Vector3_t3722313464 , Ray_t3785851493 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___source0, ___normalizedOffset1, ___headRay2, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, Vector3_t3722313464 , Ray_t3785851493 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___source0, ___normalizedOffset1, ___headRay2, targetMethod);
					}
				}
			}
			else
			{
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker3< int32_t, Vector3_t3722313464 , Ray_t3785851493  >::Invoke(targetMethod, targetThis, ___source0, ___normalizedOffset1, ___headRay2);
							else
								GenericVirtActionInvoker3< int32_t, Vector3_t3722313464 , Ray_t3785851493  >::Invoke(targetMethod, targetThis, ___source0, ___normalizedOffset1, ___headRay2);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker3< int32_t, Vector3_t3722313464 , Ray_t3785851493  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___normalizedOffset1, ___headRay2);
							else
								VirtActionInvoker3< int32_t, Vector3_t3722313464 , Ray_t3785851493  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___normalizedOffset1, ___headRay2);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, int32_t, Vector3_t3722313464 , Ray_t3785851493 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___normalizedOffset1, ___headRay2, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 3)
			{
				// open
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, Vector3_t3722313464 , Ray_t3785851493 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___source0, ___normalizedOffset1, ___headRay2, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, Vector3_t3722313464 , Ray_t3785851493 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___source0, ___normalizedOffset1, ___headRay2, targetMethod);
				}
			}
		}
		else
		{
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker3< int32_t, Vector3_t3722313464 , Ray_t3785851493  >::Invoke(targetMethod, targetThis, ___source0, ___normalizedOffset1, ___headRay2);
						else
							GenericVirtActionInvoker3< int32_t, Vector3_t3722313464 , Ray_t3785851493  >::Invoke(targetMethod, targetThis, ___source0, ___normalizedOffset1, ___headRay2);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker3< int32_t, Vector3_t3722313464 , Ray_t3785851493  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___normalizedOffset1, ___headRay2);
						else
							VirtActionInvoker3< int32_t, Vector3_t3722313464 , Ray_t3785851493  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___normalizedOffset1, ___headRay2);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, Vector3_t3722313464 , Ray_t3785851493 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___normalizedOffset1, ___headRay2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationUpdatedEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* NavigationUpdatedEventDelegate_BeginInvoke_m765171714 (NavigationUpdatedEventDelegate_t2894903996 * __this, int32_t ___source0, Vector3_t3722313464  ___normalizedOffset1, Ray_t3785851493  ___headRay2, AsyncCallback_t3962456242 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NavigationUpdatedEventDelegate_BeginInvoke_m765171714_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(InteractionSourceKind_t3005082353_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Vector3_t3722313464_il2cpp_TypeInfo_var, &___normalizedOffset1);
	__d_args[2] = Box(Ray_t3785851493_il2cpp_TypeInfo_var, &___headRay2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationUpdatedEventDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void NavigationUpdatedEventDelegate_EndInvoke_m2504725508 (NavigationUpdatedEventDelegate_t2894903996 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_RecognitionEndedEventDelegate_t2892804592 (RecognitionEndedEventDelegate_t2892804592 * __this, int32_t ___source0, Ray_t3785851493  ___headRay1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Ray_t3785851493 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___headRay1);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/RecognitionEndedEventDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void RecognitionEndedEventDelegate__ctor_m516655688 (RecognitionEndedEventDelegate_t2892804592 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/RecognitionEndedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR void RecognitionEndedEventDelegate_Invoke_m3917742942 (RecognitionEndedEventDelegate_t2892804592 * __this, int32_t ___source0, Ray_t3785851493  ___headRay1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
				{
					// open
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, Ray_t3785851493 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___source0, ___headRay1, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, Ray_t3785851493 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___source0, ___headRay1, targetMethod);
					}
				}
			}
			else
			{
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker2< int32_t, Ray_t3785851493  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
							else
								GenericVirtActionInvoker2< int32_t, Ray_t3785851493  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker2< int32_t, Ray_t3785851493  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___headRay1);
							else
								VirtActionInvoker2< int32_t, Ray_t3785851493  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___headRay1);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, int32_t, Ray_t3785851493 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___headRay1, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
			{
				// open
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, Ray_t3785851493 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___source0, ___headRay1, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, Ray_t3785851493 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___source0, ___headRay1, targetMethod);
				}
			}
		}
		else
		{
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker2< int32_t, Ray_t3785851493  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
						else
							GenericVirtActionInvoker2< int32_t, Ray_t3785851493  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker2< int32_t, Ray_t3785851493  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___headRay1);
						else
							VirtActionInvoker2< int32_t, Ray_t3785851493  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___headRay1);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, Ray_t3785851493 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___headRay1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer/RecognitionEndedEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* RecognitionEndedEventDelegate_BeginInvoke_m3427552214 (RecognitionEndedEventDelegate_t2892804592 * __this, int32_t ___source0, Ray_t3785851493  ___headRay1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecognitionEndedEventDelegate_BeginInvoke_m3427552214_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(InteractionSourceKind_t3005082353_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Ray_t3785851493_il2cpp_TypeInfo_var, &___headRay1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/RecognitionEndedEventDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void RecognitionEndedEventDelegate_EndInvoke_m3286384794 (RecognitionEndedEventDelegate_t2892804592 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_RecognitionStartedEventDelegate_t3727320336 (RecognitionStartedEventDelegate_t3727320336 * __this, int32_t ___source0, Ray_t3785851493  ___headRay1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Ray_t3785851493 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___headRay1);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/RecognitionStartedEventDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void RecognitionStartedEventDelegate__ctor_m2955498481 (RecognitionStartedEventDelegate_t3727320336 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/RecognitionStartedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR void RecognitionStartedEventDelegate_Invoke_m285038765 (RecognitionStartedEventDelegate_t3727320336 * __this, int32_t ___source0, Ray_t3785851493  ___headRay1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
				{
					// open
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, Ray_t3785851493 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___source0, ___headRay1, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, Ray_t3785851493 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___source0, ___headRay1, targetMethod);
					}
				}
			}
			else
			{
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker2< int32_t, Ray_t3785851493  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
							else
								GenericVirtActionInvoker2< int32_t, Ray_t3785851493  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker2< int32_t, Ray_t3785851493  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___headRay1);
							else
								VirtActionInvoker2< int32_t, Ray_t3785851493  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___headRay1);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, int32_t, Ray_t3785851493 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___headRay1, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
			{
				// open
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, Ray_t3785851493 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___source0, ___headRay1, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, Ray_t3785851493 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___source0, ___headRay1, targetMethod);
				}
			}
		}
		else
		{
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker2< int32_t, Ray_t3785851493  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
						else
							GenericVirtActionInvoker2< int32_t, Ray_t3785851493  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker2< int32_t, Ray_t3785851493  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___headRay1);
						else
							VirtActionInvoker2< int32_t, Ray_t3785851493  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___headRay1);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, Ray_t3785851493 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___headRay1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer/RecognitionStartedEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* RecognitionStartedEventDelegate_BeginInvoke_m615709693 (RecognitionStartedEventDelegate_t3727320336 * __this, int32_t ___source0, Ray_t3785851493  ___headRay1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecognitionStartedEventDelegate_BeginInvoke_m615709693_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(InteractionSourceKind_t3005082353_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Ray_t3785851493_il2cpp_TypeInfo_var, &___headRay1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/RecognitionStartedEventDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void RecognitionStartedEventDelegate_EndInvoke_m25839766 (RecognitionStartedEventDelegate_t3727320336 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_TappedEventDelegate_t286622765 (TappedEventDelegate_t286622765 * __this, int32_t ___source0, int32_t ___tapCount1, Ray_t3785851493  ___headRay2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int32_t, Ray_t3785851493 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___tapCount1, ___headRay2);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/TappedEventDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void TappedEventDelegate__ctor_m1519131917 (TappedEventDelegate_t286622765 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/TappedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,System.Int32,UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR void TappedEventDelegate_Invoke_m537578258 (TappedEventDelegate_t286622765 * __this, int32_t ___source0, int32_t ___tapCount1, Ray_t3785851493  ___headRay2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 3)
				{
					// open
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, int32_t, Ray_t3785851493 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___source0, ___tapCount1, ___headRay2, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, int32_t, Ray_t3785851493 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___source0, ___tapCount1, ___headRay2, targetMethod);
					}
				}
			}
			else
			{
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker3< int32_t, int32_t, Ray_t3785851493  >::Invoke(targetMethod, targetThis, ___source0, ___tapCount1, ___headRay2);
							else
								GenericVirtActionInvoker3< int32_t, int32_t, Ray_t3785851493  >::Invoke(targetMethod, targetThis, ___source0, ___tapCount1, ___headRay2);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker3< int32_t, int32_t, Ray_t3785851493  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___tapCount1, ___headRay2);
							else
								VirtActionInvoker3< int32_t, int32_t, Ray_t3785851493  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___tapCount1, ___headRay2);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, int32_t, int32_t, Ray_t3785851493 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___tapCount1, ___headRay2, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 3)
			{
				// open
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, int32_t, Ray_t3785851493 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___source0, ___tapCount1, ___headRay2, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, int32_t, Ray_t3785851493 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___source0, ___tapCount1, ___headRay2, targetMethod);
				}
			}
		}
		else
		{
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker3< int32_t, int32_t, Ray_t3785851493  >::Invoke(targetMethod, targetThis, ___source0, ___tapCount1, ___headRay2);
						else
							GenericVirtActionInvoker3< int32_t, int32_t, Ray_t3785851493  >::Invoke(targetMethod, targetThis, ___source0, ___tapCount1, ___headRay2);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker3< int32_t, int32_t, Ray_t3785851493  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___tapCount1, ___headRay2);
						else
							VirtActionInvoker3< int32_t, int32_t, Ray_t3785851493  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___tapCount1, ___headRay2);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, int32_t, Ray_t3785851493 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___tapCount1, ___headRay2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer/TappedEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,System.Int32,UnityEngine.Ray,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* TappedEventDelegate_BeginInvoke_m3402740888 (TappedEventDelegate_t286622765 * __this, int32_t ___source0, int32_t ___tapCount1, Ray_t3785851493  ___headRay2, AsyncCallback_t3962456242 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TappedEventDelegate_BeginInvoke_m3402740888_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(InteractionSourceKind_t3005082353_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___tapCount1);
	__d_args[2] = Box(Ray_t3785851493_il2cpp_TypeInfo_var, &___headRay2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/TappedEventDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void TappedEventDelegate_EndInvoke_m4292437112 (TappedEventDelegate_t286622765 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSource::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool InteractionSource_Equals_m3370649879 (InteractionSource_t872619030 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InteractionSource_Equals_m3370649879_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t2595181112  V_0;
	memset(&V_0, 0, sizeof(V_0));
	bool V_1 = false;
	{
		RuntimeObject * L_0 = ___obj0;
		void* L_1 = alloca(sizeof(Nullable_1_t2595181112 ));
		UnBoxNullable(((RuntimeObject *)IsInst((RuntimeObject*)L_0, Nullable_1_t2595181112_il2cpp_TypeInfo_var)), InteractionSource_t872619030_il2cpp_TypeInfo_var, L_1);
		V_0 = ((*(Nullable_1_t2595181112 *)((Nullable_1_t2595181112 *)L_1)));
		bool L_2 = Nullable_1_get_HasValue_m3483213605((Nullable_1_t2595181112 *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_m3483213605_RuntimeMethod_var);
		if (!((((int32_t)L_2) == ((int32_t)0))? 1 : 0))
		{
			goto IL_0023;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0036;
	}

IL_0023:
	{
		InteractionSource_t872619030  L_3 = Nullable_1_get_Value_m3671873047((Nullable_1_t2595181112 *)(&V_0), /*hidden argument*/Nullable_1_get_Value_m3671873047_RuntimeMethod_var);
		bool L_4 = InteractionSource_Equals_m1974645348((InteractionSource_t872619030 *)__this, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_0036;
	}

IL_0036:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
extern "C"  bool InteractionSource_Equals_m3370649879_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	InteractionSource_t872619030 * _thisAdjusted = reinterpret_cast<InteractionSource_t872619030 *>(__this + 1);
	return InteractionSource_Equals_m3370649879(_thisAdjusted, ___obj0, method);
}
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSource::Equals(UnityEngine.XR.WSA.Input.InteractionSource)
extern "C" IL2CPP_METHOD_ATTR bool InteractionSource_Equals_m1974645348 (InteractionSource_t872619030 * __this, InteractionSource_t872619030  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		uint32_t L_0 = (&___other0)->get_m_Id_0();
		uint32_t L_1 = __this->get_m_Id_0();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		goto IL_0016;
	}

IL_0016:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
extern "C"  bool InteractionSource_Equals_m1974645348_AdjustorThunk (RuntimeObject * __this, InteractionSource_t872619030  ___other0, const RuntimeMethod* method)
{
	InteractionSource_t872619030 * _thisAdjusted = reinterpret_cast<InteractionSource_t872619030 *>(__this + 1);
	return InteractionSource_Equals_m1974645348(_thisAdjusted, ___other0, method);
}
// System.Int32 UnityEngine.XR.WSA.Input.InteractionSource::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t InteractionSource_GetHashCode_m3583249664 (InteractionSource_t872619030 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_Id_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
extern "C"  int32_t InteractionSource_GetHashCode_m3583249664_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	InteractionSource_t872619030 * _thisAdjusted = reinterpret_cast<InteractionSource_t872619030 *>(__this + 1);
	return InteractionSource_GetHashCode_m3583249664(_thisAdjusted, method);
}
// System.UInt32 UnityEngine.XR.WSA.Input.InteractionSource::get_id()
extern "C" IL2CPP_METHOD_ATTR uint32_t InteractionSource_get_id_m1355705482 (InteractionSource_t872619030 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_Id_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
extern "C"  uint32_t InteractionSource_get_id_m1355705482_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	InteractionSource_t872619030 * _thisAdjusted = reinterpret_cast<InteractionSource_t872619030 *>(__this + 1);
	return InteractionSource_get_id_m1355705482(_thisAdjusted, method);
}
// UnityEngine.XR.WSA.Input.InteractionSourceKind UnityEngine.XR.WSA.Input.InteractionSource::get_kind()
extern "C" IL2CPP_METHOD_ATTR int32_t InteractionSource_get_kind_m2286468273 (InteractionSource_t872619030 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_SourceKind_1();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
extern "C"  int32_t InteractionSource_get_kind_m2286468273_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	InteractionSource_t872619030 * _thisAdjusted = reinterpret_cast<InteractionSource_t872619030 *>(__this + 1);
	return InteractionSource_get_kind_m2286468273(_thisAdjusted, method);
}
// UnityEngine.XR.WSA.Input.InteractionSourceHandedness UnityEngine.XR.WSA.Input.InteractionSource::get_handedness()
extern "C" IL2CPP_METHOD_ATTR int32_t InteractionSource_get_handedness_m1998723134 (InteractionSource_t872619030 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Handedness_2();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
extern "C"  int32_t InteractionSource_get_handedness_m1998723134_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	InteractionSource_t872619030 * _thisAdjusted = reinterpret_cast<InteractionSource_t872619030 *>(__this + 1);
	return InteractionSource_get_handedness_m1998723134(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSource::get_supportsGrasp()
extern "C" IL2CPP_METHOD_ATTR bool InteractionSource_get_supportsGrasp_m1074556827 (InteractionSource_t872619030 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_m_Flags_3();
		V_0 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)8))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0015:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
extern "C"  bool InteractionSource_get_supportsGrasp_m1074556827_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	InteractionSource_t872619030 * _thisAdjusted = reinterpret_cast<InteractionSource_t872619030 *>(__this + 1);
	return InteractionSource_get_supportsGrasp_m1074556827(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSource::get_supportsMenu()
extern "C" IL2CPP_METHOD_ATTR bool InteractionSource_get_supportsMenu_m1494580913 (InteractionSource_t872619030 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_m_Flags_3();
		V_0 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)16)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0016;
	}

IL_0016:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
extern "C"  bool InteractionSource_get_supportsMenu_m1494580913_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	InteractionSource_t872619030 * _thisAdjusted = reinterpret_cast<InteractionSource_t872619030 *>(__this + 1);
	return InteractionSource_get_supportsMenu_m1494580913(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSource::get_supportsPointing()
extern "C" IL2CPP_METHOD_ATTR bool InteractionSource_get_supportsPointing_m662541407 (InteractionSource_t872619030 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_m_Flags_3();
		V_0 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)4))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0015:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
extern "C"  bool InteractionSource_get_supportsPointing_m662541407_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	InteractionSource_t872619030 * _thisAdjusted = reinterpret_cast<InteractionSource_t872619030 *>(__this + 1);
	return InteractionSource_get_supportsPointing_m662541407(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSource::get_supportsThumbstick()
extern "C" IL2CPP_METHOD_ATTR bool InteractionSource_get_supportsThumbstick_m1801711152 (InteractionSource_t872619030 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_m_Flags_3();
		V_0 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0015:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
extern "C"  bool InteractionSource_get_supportsThumbstick_m1801711152_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	InteractionSource_t872619030 * _thisAdjusted = reinterpret_cast<InteractionSource_t872619030 *>(__this + 1);
	return InteractionSource_get_supportsThumbstick_m1801711152(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSource::get_supportsTouchpad()
extern "C" IL2CPP_METHOD_ATTR bool InteractionSource_get_supportsTouchpad_m2009445912 (InteractionSource_t872619030 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_m_Flags_3();
		V_0 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)1))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0015:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
extern "C"  bool InteractionSource_get_supportsTouchpad_m2009445912_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	InteractionSource_t872619030 * _thisAdjusted = reinterpret_cast<InteractionSource_t872619030 *>(__this + 1);
	return InteractionSource_get_supportsTouchpad_m2009445912(_thisAdjusted, method);
}
// System.UInt16 UnityEngine.XR.WSA.Input.InteractionSource::get_vendorId()
extern "C" IL2CPP_METHOD_ATTR uint16_t InteractionSource_get_vendorId_m319805202 (InteractionSource_t872619030 * __this, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->get_m_VendorId_4();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
extern "C"  uint16_t InteractionSource_get_vendorId_m319805202_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	InteractionSource_t872619030 * _thisAdjusted = reinterpret_cast<InteractionSource_t872619030 *>(__this + 1);
	return InteractionSource_get_vendorId_m319805202(_thisAdjusted, method);
}
// System.UInt16 UnityEngine.XR.WSA.Input.InteractionSource::get_productId()
extern "C" IL2CPP_METHOD_ATTR uint16_t InteractionSource_get_productId_m985142844 (InteractionSource_t872619030 * __this, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->get_m_ProductId_5();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
extern "C"  uint16_t InteractionSource_get_productId_m985142844_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	InteractionSource_t872619030 * _thisAdjusted = reinterpret_cast<InteractionSource_t872619030 *>(__this + 1);
	return InteractionSource_get_productId_m985142844(_thisAdjusted, method);
}
// System.UInt16 UnityEngine.XR.WSA.Input.InteractionSource::get_productVersion()
extern "C" IL2CPP_METHOD_ATTR uint16_t InteractionSource_get_productVersion_m2206272038 (InteractionSource_t872619030 * __this, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->get_m_ProductVersion_6();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
extern "C"  uint16_t InteractionSource_get_productVersion_m2206272038_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	InteractionSource_t872619030 * _thisAdjusted = reinterpret_cast<InteractionSource_t872619030 *>(__this + 1);
	return InteractionSource_get_productVersion_m2206272038(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.XR.WSA.Persistence.WorldAnchorStore
extern "C" void WorldAnchorStore_t633400888_marshal_pinvoke(const WorldAnchorStore_t633400888& unmarshaled, WorldAnchorStore_t633400888_marshaled_pinvoke& marshaled)
{
	marshaled.___m_NativePtr_0 = unmarshaled.get_m_NativePtr_0();
}
extern "C" void WorldAnchorStore_t633400888_marshal_pinvoke_back(const WorldAnchorStore_t633400888_marshaled_pinvoke& marshaled, WorldAnchorStore_t633400888& unmarshaled)
{
	intptr_t unmarshaled_m_NativePtr_temp_0;
	memset(&unmarshaled_m_NativePtr_temp_0, 0, sizeof(unmarshaled_m_NativePtr_temp_0));
	unmarshaled_m_NativePtr_temp_0 = marshaled.___m_NativePtr_0;
	unmarshaled.set_m_NativePtr_0(unmarshaled_m_NativePtr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.Persistence.WorldAnchorStore
extern "C" void WorldAnchorStore_t633400888_marshal_pinvoke_cleanup(WorldAnchorStore_t633400888_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.WSA.Persistence.WorldAnchorStore
extern "C" void WorldAnchorStore_t633400888_marshal_com(const WorldAnchorStore_t633400888& unmarshaled, WorldAnchorStore_t633400888_marshaled_com& marshaled)
{
	marshaled.___m_NativePtr_0 = unmarshaled.get_m_NativePtr_0();
}
extern "C" void WorldAnchorStore_t633400888_marshal_com_back(const WorldAnchorStore_t633400888_marshaled_com& marshaled, WorldAnchorStore_t633400888& unmarshaled)
{
	intptr_t unmarshaled_m_NativePtr_temp_0;
	memset(&unmarshaled_m_NativePtr_temp_0, 0, sizeof(unmarshaled_m_NativePtr_temp_0));
	unmarshaled_m_NativePtr_temp_0 = marshaled.___m_NativePtr_0;
	unmarshaled.set_m_NativePtr_0(unmarshaled_m_NativePtr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.Persistence.WorldAnchorStore
extern "C" void WorldAnchorStore_t633400888_marshal_com_cleanup(WorldAnchorStore_t633400888_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.XR.WSA.Persistence.WorldAnchorStore::.ctor(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void WorldAnchorStore__ctor_m759187739 (WorldAnchorStore_t633400888 * __this, intptr_t ___nativePtr0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___nativePtr0;
		__this->set_m_NativePtr_0(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Persistence.WorldAnchorStore::InvokeGetAsyncDelegate(UnityEngine.XR.WSA.Persistence.WorldAnchorStore/GetAsyncDelegate,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void WorldAnchorStore_InvokeGetAsyncDelegate_m2349742641 (RuntimeObject * __this /* static, unused */, GetAsyncDelegate_t3153225836 * ___handler0, intptr_t ___nativePtr1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldAnchorStore_InvokeGetAsyncDelegate_m2349742641_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___nativePtr1;
		WorldAnchorStore_t633400888 * L_1 = (WorldAnchorStore_t633400888 *)il2cpp_codegen_object_new(WorldAnchorStore_t633400888_il2cpp_TypeInfo_var);
		WorldAnchorStore__ctor_m759187739(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WorldAnchorStore_t633400888_il2cpp_TypeInfo_var);
		((WorldAnchorStore_t633400888_StaticFields*)il2cpp_codegen_static_fields_for(WorldAnchorStore_t633400888_il2cpp_TypeInfo_var))->set_s_Instance_1(L_1);
		GetAsyncDelegate_t3153225836 * L_2 = ___handler0;
		WorldAnchorStore_t633400888 * L_3 = ((WorldAnchorStore_t633400888_StaticFields*)il2cpp_codegen_static_fields_for(WorldAnchorStore_t633400888_il2cpp_TypeInfo_var))->get_s_Instance_1();
		NullCheck(L_2);
		GetAsyncDelegate_Invoke_m794042970(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Persistence.WorldAnchorStore::Dispose()
extern "C" IL2CPP_METHOD_ATTR void WorldAnchorStore_Dispose_m1403625064 (WorldAnchorStore_t633400888 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldAnchorStore_Dispose_m1403625064_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_m_NativePtr_0();
		bool L_1 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		WorldAnchorStore_Internal_Destroy_m4041745196(__this, /*hidden argument*/NULL);
	}

IL_001c:
	{
		__this->set_m_NativePtr_0((intptr_t)(0));
		IL2CPP_RUNTIME_CLASS_INIT(GC_t959872083_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m1177400158(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Persistence.WorldAnchorStore::Internal_Destroy()
extern "C" IL2CPP_METHOD_ATTR void WorldAnchorStore_Internal_Destroy_m4041745196 (WorldAnchorStore_t633400888 * __this, const RuntimeMethod* method)
{
	typedef void (*WorldAnchorStore_Internal_Destroy_m4041745196_ftn) (WorldAnchorStore_t633400888 *);
	static WorldAnchorStore_Internal_Destroy_m4041745196_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WorldAnchorStore_Internal_Destroy_m4041745196_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.Persistence.WorldAnchorStore::Internal_Destroy()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.XR.WSA.Persistence.WorldAnchorStore::.cctor()
extern "C" IL2CPP_METHOD_ATTR void WorldAnchorStore__cctor_m91730420 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldAnchorStore__cctor_m91730420_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((WorldAnchorStore_t633400888_StaticFields*)il2cpp_codegen_static_fields_for(WorldAnchorStore_t633400888_il2cpp_TypeInfo_var))->set_s_Instance_1((WorldAnchorStore_t633400888 *)NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_GetAsyncDelegate_t3153225836 (GetAsyncDelegate_t3153225836 * __this, WorldAnchorStore_t633400888 * ___store0, const RuntimeMethod* method)
{


	typedef void (DEFAULT_CALL *PInvokeFunc)(WorldAnchorStore_t633400888_marshaled_pinvoke*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___store0' to native representation
	WorldAnchorStore_t633400888_marshaled_pinvoke ____store0_marshaled = {};
	if (___store0 != NULL) WorldAnchorStore_t633400888_marshal_pinvoke(*___store0, ____store0_marshaled);

	// Native function invocation
	il2cppPInvokeFunc(___store0 != NULL ? &____store0_marshaled : NULL);

	// Marshaling cleanup of parameter '___store0' native representation
	if (___store0 != NULL) WorldAnchorStore_t633400888_marshal_pinvoke_cleanup(____store0_marshaled);

}
// System.Void UnityEngine.XR.WSA.Persistence.WorldAnchorStore/GetAsyncDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GetAsyncDelegate__ctor_m1654304307 (GetAsyncDelegate_t3153225836 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Persistence.WorldAnchorStore/GetAsyncDelegate::Invoke(UnityEngine.XR.WSA.Persistence.WorldAnchorStore)
extern "C" IL2CPP_METHOD_ATTR void GetAsyncDelegate_Invoke_m794042970 (GetAsyncDelegate_t3153225836 * __this, WorldAnchorStore_t633400888 * ___store0, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
				{
					// open
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, WorldAnchorStore_t633400888 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___store0, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, WorldAnchorStore_t633400888 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___store0, targetMethod);
					}
				}
			}
			else
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< WorldAnchorStore_t633400888 * >::Invoke(targetMethod, targetThis, ___store0);
							else
								GenericVirtActionInvoker1< WorldAnchorStore_t633400888 * >::Invoke(targetMethod, targetThis, ___store0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< WorldAnchorStore_t633400888 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___store0);
							else
								VirtActionInvoker1< WorldAnchorStore_t633400888 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___store0);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, WorldAnchorStore_t633400888 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___store0, targetMethod);
					}
				}
				else
				{
					// open
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker0::Invoke(targetMethod, ___store0);
							else
								GenericVirtActionInvoker0::Invoke(targetMethod, ___store0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___store0);
							else
								VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___store0);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (WorldAnchorStore_t633400888 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___store0, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
			{
				// open
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, WorldAnchorStore_t633400888 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___store0, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, WorldAnchorStore_t633400888 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___store0, targetMethod);
				}
			}
		}
		else
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< WorldAnchorStore_t633400888 * >::Invoke(targetMethod, targetThis, ___store0);
						else
							GenericVirtActionInvoker1< WorldAnchorStore_t633400888 * >::Invoke(targetMethod, targetThis, ___store0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< WorldAnchorStore_t633400888 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___store0);
						else
							VirtActionInvoker1< WorldAnchorStore_t633400888 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___store0);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, WorldAnchorStore_t633400888 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___store0, targetMethod);
				}
			}
			else
			{
				// open
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker0::Invoke(targetMethod, ___store0);
						else
							GenericVirtActionInvoker0::Invoke(targetMethod, ___store0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___store0);
						else
							VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___store0);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (WorldAnchorStore_t633400888 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___store0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Persistence.WorldAnchorStore/GetAsyncDelegate::BeginInvoke(UnityEngine.XR.WSA.Persistence.WorldAnchorStore,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GetAsyncDelegate_BeginInvoke_m4049909931 (GetAsyncDelegate_t3153225836 * __this, WorldAnchorStore_t633400888 * ___store0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___store0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.WSA.Persistence.WorldAnchorStore/GetAsyncDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void GetAsyncDelegate_EndInvoke_m1121402310 (GetAsyncDelegate_t3153225836 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch
extern "C" void WorldAnchorTransferBatch_t2392365061_marshal_pinvoke(const WorldAnchorTransferBatch_t2392365061& unmarshaled, WorldAnchorTransferBatch_t2392365061_marshaled_pinvoke& marshaled)
{
	marshaled.___m_NativePtr_0 = unmarshaled.get_m_NativePtr_0();
}
extern "C" void WorldAnchorTransferBatch_t2392365061_marshal_pinvoke_back(const WorldAnchorTransferBatch_t2392365061_marshaled_pinvoke& marshaled, WorldAnchorTransferBatch_t2392365061& unmarshaled)
{
	intptr_t unmarshaled_m_NativePtr_temp_0;
	memset(&unmarshaled_m_NativePtr_temp_0, 0, sizeof(unmarshaled_m_NativePtr_temp_0));
	unmarshaled_m_NativePtr_temp_0 = marshaled.___m_NativePtr_0;
	unmarshaled.set_m_NativePtr_0(unmarshaled_m_NativePtr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch
extern "C" void WorldAnchorTransferBatch_t2392365061_marshal_pinvoke_cleanup(WorldAnchorTransferBatch_t2392365061_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch
extern "C" void WorldAnchorTransferBatch_t2392365061_marshal_com(const WorldAnchorTransferBatch_t2392365061& unmarshaled, WorldAnchorTransferBatch_t2392365061_marshaled_com& marshaled)
{
	marshaled.___m_NativePtr_0 = unmarshaled.get_m_NativePtr_0();
}
extern "C" void WorldAnchorTransferBatch_t2392365061_marshal_com_back(const WorldAnchorTransferBatch_t2392365061_marshaled_com& marshaled, WorldAnchorTransferBatch_t2392365061& unmarshaled)
{
	intptr_t unmarshaled_m_NativePtr_temp_0;
	memset(&unmarshaled_m_NativePtr_temp_0, 0, sizeof(unmarshaled_m_NativePtr_temp_0));
	unmarshaled_m_NativePtr_temp_0 = marshaled.___m_NativePtr_0;
	unmarshaled.set_m_NativePtr_0(unmarshaled_m_NativePtr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch
extern "C" void WorldAnchorTransferBatch_t2392365061_marshal_com_cleanup(WorldAnchorTransferBatch_t2392365061_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::.ctor(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void WorldAnchorTransferBatch__ctor_m1276800205 (WorldAnchorTransferBatch_t2392365061 * __this, intptr_t ___nativePtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldAnchorTransferBatch__ctor_m1276800205_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_NativePtr_0((intptr_t)(0));
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___nativePtr0;
		__this->set_m_NativePtr_0(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::Finalize()
extern "C" IL2CPP_METHOD_ATTR void WorldAnchorTransferBatch_Finalize_m3476272275 (WorldAnchorTransferBatch_t2392365061 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldAnchorTransferBatch_Finalize_m3476272275_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = __this->get_m_NativePtr_0();
			bool L_1 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_0, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_1)
			{
				goto IL_0029;
			}
		}

IL_0016:
		{
			WorldAnchorTransferBatch_DisposeThreaded_Internal_m4272061354(__this, /*hidden argument*/NULL);
			__this->set_m_NativePtr_0((intptr_t)(0));
		}

IL_0029:
		{
			IL2CPP_LEAVE(0x35, FINALLY_002e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002e;
	}

FINALLY_002e:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(46)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(46)
	{
		IL2CPP_JUMP_TBL(0x35, IL_0035)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0035:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::DisposeThreaded_Internal()
extern "C" IL2CPP_METHOD_ATTR void WorldAnchorTransferBatch_DisposeThreaded_Internal_m4272061354 (WorldAnchorTransferBatch_t2392365061 * __this, const RuntimeMethod* method)
{
	typedef void (*WorldAnchorTransferBatch_DisposeThreaded_Internal_m4272061354_ftn) (WorldAnchorTransferBatch_t2392365061 *);
	static WorldAnchorTransferBatch_DisposeThreaded_Internal_m4272061354_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WorldAnchorTransferBatch_DisposeThreaded_Internal_m4272061354_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::DisposeThreaded_Internal()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::Dispose()
extern "C" IL2CPP_METHOD_ATTR void WorldAnchorTransferBatch_Dispose_m337801525 (WorldAnchorTransferBatch_t2392365061 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldAnchorTransferBatch_Dispose_m337801525_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_m_NativePtr_0();
		bool L_1 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		WorldAnchorTransferBatch_Dispose_Internal_m2937056051(__this, /*hidden argument*/NULL);
		__this->set_m_NativePtr_0((intptr_t)(0));
	}

IL_0029:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GC_t959872083_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m1177400158(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::Dispose_Internal()
extern "C" IL2CPP_METHOD_ATTR void WorldAnchorTransferBatch_Dispose_Internal_m2937056051 (WorldAnchorTransferBatch_t2392365061 * __this, const RuntimeMethod* method)
{
	typedef void (*WorldAnchorTransferBatch_Dispose_Internal_m2937056051_ftn) (WorldAnchorTransferBatch_t2392365061 *);
	static WorldAnchorTransferBatch_Dispose_Internal_m2937056051_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WorldAnchorTransferBatch_Dispose_Internal_m2937056051_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::Dispose_Internal()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::InvokeWorldAnchorSerializationDataAvailableDelegate(UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch/SerializationDataAvailableDelegate,System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void WorldAnchorTransferBatch_InvokeWorldAnchorSerializationDataAvailableDelegate_m3211008625 (RuntimeObject * __this /* static, unused */, SerializationDataAvailableDelegate_t503932525 * ___onSerializationDataAvailable0, ByteU5BU5D_t4116647657* ___data1, const RuntimeMethod* method)
{
	{
		SerializationDataAvailableDelegate_t503932525 * L_0 = ___onSerializationDataAvailable0;
		ByteU5BU5D_t4116647657* L_1 = ___data1;
		NullCheck(L_0);
		SerializationDataAvailableDelegate_Invoke_m3547478441(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::InvokeWorldAnchorSerializationCompleteDelegate(UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch/SerializationCompleteDelegate,UnityEngine.XR.WSA.Sharing.SerializationCompletionReason)
extern "C" IL2CPP_METHOD_ATTR void WorldAnchorTransferBatch_InvokeWorldAnchorSerializationCompleteDelegate_m248816733 (RuntimeObject * __this /* static, unused */, SerializationCompleteDelegate_t3297462927 * ___onSerializationComplete0, int32_t ___completionReason1, const RuntimeMethod* method)
{
	{
		SerializationCompleteDelegate_t3297462927 * L_0 = ___onSerializationComplete0;
		int32_t L_1 = ___completionReason1;
		NullCheck(L_0);
		SerializationCompleteDelegate_Invoke_m3529283275(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::InvokeWorldAnchorDeserializationCompleteDelegate(UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch/DeserializationCompleteDelegate,UnityEngine.XR.WSA.Sharing.SerializationCompletionReason,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void WorldAnchorTransferBatch_InvokeWorldAnchorDeserializationCompleteDelegate_m1335602964 (RuntimeObject * __this /* static, unused */, DeserializationCompleteDelegate_t3326018783 * ___onDeserializationComplete0, int32_t ___completionReason1, intptr_t ___nativePtr2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldAnchorTransferBatch_InvokeWorldAnchorDeserializationCompleteDelegate_m1335602964_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WorldAnchorTransferBatch_t2392365061 * V_0 = NULL;
	{
		intptr_t L_0 = ___nativePtr2;
		WorldAnchorTransferBatch_t2392365061 * L_1 = (WorldAnchorTransferBatch_t2392365061 *)il2cpp_codegen_object_new(WorldAnchorTransferBatch_t2392365061_il2cpp_TypeInfo_var);
		WorldAnchorTransferBatch__ctor_m1276800205(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		DeserializationCompleteDelegate_t3326018783 * L_2 = ___onDeserializationComplete0;
		int32_t L_3 = ___completionReason1;
		WorldAnchorTransferBatch_t2392365061 * L_4 = V_0;
		NullCheck(L_2);
		DeserializationCompleteDelegate_Invoke_m3021627786(L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_DeserializationCompleteDelegate_t3326018783 (DeserializationCompleteDelegate_t3326018783 * __this, int32_t ___completionReason0, WorldAnchorTransferBatch_t2392365061 * ___deserializedTransferBatch1, const RuntimeMethod* method)
{


	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, WorldAnchorTransferBatch_t2392365061_marshaled_pinvoke*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___deserializedTransferBatch1' to native representation
	WorldAnchorTransferBatch_t2392365061_marshaled_pinvoke ____deserializedTransferBatch1_marshaled = {};
	if (___deserializedTransferBatch1 != NULL) WorldAnchorTransferBatch_t2392365061_marshal_pinvoke(*___deserializedTransferBatch1, ____deserializedTransferBatch1_marshaled);

	// Native function invocation
	il2cppPInvokeFunc(___completionReason0, ___deserializedTransferBatch1 != NULL ? &____deserializedTransferBatch1_marshaled : NULL);

	// Marshaling cleanup of parameter '___deserializedTransferBatch1' native representation
	if (___deserializedTransferBatch1 != NULL) WorldAnchorTransferBatch_t2392365061_marshal_pinvoke_cleanup(____deserializedTransferBatch1_marshaled);

}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch/DeserializationCompleteDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void DeserializationCompleteDelegate__ctor_m1356632588 (DeserializationCompleteDelegate_t3326018783 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch/DeserializationCompleteDelegate::Invoke(UnityEngine.XR.WSA.Sharing.SerializationCompletionReason,UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch)
extern "C" IL2CPP_METHOD_ATTR void DeserializationCompleteDelegate_Invoke_m3021627786 (DeserializationCompleteDelegate_t3326018783 * __this, int32_t ___completionReason0, WorldAnchorTransferBatch_t2392365061 * ___deserializedTransferBatch1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
				{
					// open
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, WorldAnchorTransferBatch_t2392365061 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___completionReason0, ___deserializedTransferBatch1, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, WorldAnchorTransferBatch_t2392365061 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___completionReason0, ___deserializedTransferBatch1, targetMethod);
					}
				}
			}
			else
			{
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker2< int32_t, WorldAnchorTransferBatch_t2392365061 * >::Invoke(targetMethod, targetThis, ___completionReason0, ___deserializedTransferBatch1);
							else
								GenericVirtActionInvoker2< int32_t, WorldAnchorTransferBatch_t2392365061 * >::Invoke(targetMethod, targetThis, ___completionReason0, ___deserializedTransferBatch1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker2< int32_t, WorldAnchorTransferBatch_t2392365061 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___completionReason0, ___deserializedTransferBatch1);
							else
								VirtActionInvoker2< int32_t, WorldAnchorTransferBatch_t2392365061 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___completionReason0, ___deserializedTransferBatch1);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, int32_t, WorldAnchorTransferBatch_t2392365061 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___completionReason0, ___deserializedTransferBatch1, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
			{
				// open
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, WorldAnchorTransferBatch_t2392365061 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___completionReason0, ___deserializedTransferBatch1, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, WorldAnchorTransferBatch_t2392365061 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___completionReason0, ___deserializedTransferBatch1, targetMethod);
				}
			}
		}
		else
		{
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker2< int32_t, WorldAnchorTransferBatch_t2392365061 * >::Invoke(targetMethod, targetThis, ___completionReason0, ___deserializedTransferBatch1);
						else
							GenericVirtActionInvoker2< int32_t, WorldAnchorTransferBatch_t2392365061 * >::Invoke(targetMethod, targetThis, ___completionReason0, ___deserializedTransferBatch1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker2< int32_t, WorldAnchorTransferBatch_t2392365061 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___completionReason0, ___deserializedTransferBatch1);
						else
							VirtActionInvoker2< int32_t, WorldAnchorTransferBatch_t2392365061 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___completionReason0, ___deserializedTransferBatch1);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, WorldAnchorTransferBatch_t2392365061 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___completionReason0, ___deserializedTransferBatch1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch/DeserializationCompleteDelegate::BeginInvoke(UnityEngine.XR.WSA.Sharing.SerializationCompletionReason,UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* DeserializationCompleteDelegate_BeginInvoke_m518896393 (DeserializationCompleteDelegate_t3326018783 * __this, int32_t ___completionReason0, WorldAnchorTransferBatch_t2392365061 * ___deserializedTransferBatch1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DeserializationCompleteDelegate_BeginInvoke_m518896393_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(SerializationCompletionReason_t2316507860_il2cpp_TypeInfo_var, &___completionReason0);
	__d_args[1] = ___deserializedTransferBatch1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch/DeserializationCompleteDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void DeserializationCompleteDelegate_EndInvoke_m3960443569 (DeserializationCompleteDelegate_t3326018783 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_SerializationCompleteDelegate_t3297462927 (SerializationCompleteDelegate_t3297462927 * __this, int32_t ___completionReason0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___completionReason0);

}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch/SerializationCompleteDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SerializationCompleteDelegate__ctor_m973973221 (SerializationCompleteDelegate_t3297462927 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch/SerializationCompleteDelegate::Invoke(UnityEngine.XR.WSA.Sharing.SerializationCompletionReason)
extern "C" IL2CPP_METHOD_ATTR void SerializationCompleteDelegate_Invoke_m3529283275 (SerializationCompleteDelegate_t3297462927 * __this, int32_t ___completionReason0, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
				{
					// open
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___completionReason0, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___completionReason0, targetMethod);
					}
				}
			}
			else
			{
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___completionReason0);
							else
								GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___completionReason0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___completionReason0);
							else
								VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___completionReason0);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___completionReason0, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
			{
				// open
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___completionReason0, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___completionReason0, targetMethod);
				}
			}
		}
		else
		{
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___completionReason0);
						else
							GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___completionReason0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___completionReason0);
						else
							VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___completionReason0);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___completionReason0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch/SerializationCompleteDelegate::BeginInvoke(UnityEngine.XR.WSA.Sharing.SerializationCompletionReason,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SerializationCompleteDelegate_BeginInvoke_m833846824 (SerializationCompleteDelegate_t3297462927 * __this, int32_t ___completionReason0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SerializationCompleteDelegate_BeginInvoke_m833846824_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(SerializationCompletionReason_t2316507860_il2cpp_TypeInfo_var, &___completionReason0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch/SerializationCompleteDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void SerializationCompleteDelegate_EndInvoke_m3141839008 (SerializationCompleteDelegate_t3297462927 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_SerializationDataAvailableDelegate_t503932525 (SerializationDataAvailableDelegate_t503932525 * __this, ByteU5BU5D_t4116647657* ___data0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(uint8_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___data0' to native representation
	uint8_t* ____data0_marshaled = NULL;
	if (___data0 != NULL)
	{
		____data0_marshaled = reinterpret_cast<uint8_t*>((___data0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(____data0_marshaled);

}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch/SerializationDataAvailableDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SerializationDataAvailableDelegate__ctor_m2356191806 (SerializationDataAvailableDelegate_t503932525 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch/SerializationDataAvailableDelegate::Invoke(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void SerializationDataAvailableDelegate_Invoke_m3547478441 (SerializationDataAvailableDelegate_t503932525 * __this, ByteU5BU5D_t4116647657* ___data0, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
				{
					// open
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, ByteU5BU5D_t4116647657*, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___data0, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, ByteU5BU5D_t4116647657*, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___data0, targetMethod);
					}
				}
			}
			else
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< ByteU5BU5D_t4116647657* >::Invoke(targetMethod, targetThis, ___data0);
							else
								GenericVirtActionInvoker1< ByteU5BU5D_t4116647657* >::Invoke(targetMethod, targetThis, ___data0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< ByteU5BU5D_t4116647657* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___data0);
							else
								VirtActionInvoker1< ByteU5BU5D_t4116647657* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___data0);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, ByteU5BU5D_t4116647657*, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, targetMethod);
					}
				}
				else
				{
					// open
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker0::Invoke(targetMethod, ___data0);
							else
								GenericVirtActionInvoker0::Invoke(targetMethod, ___data0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___data0);
							else
								VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___data0);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (ByteU5BU5D_t4116647657*, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___data0, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
			{
				// open
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, ByteU5BU5D_t4116647657*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___data0, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, ByteU5BU5D_t4116647657*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___data0, targetMethod);
				}
			}
		}
		else
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< ByteU5BU5D_t4116647657* >::Invoke(targetMethod, targetThis, ___data0);
						else
							GenericVirtActionInvoker1< ByteU5BU5D_t4116647657* >::Invoke(targetMethod, targetThis, ___data0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< ByteU5BU5D_t4116647657* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___data0);
						else
							VirtActionInvoker1< ByteU5BU5D_t4116647657* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___data0);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, ByteU5BU5D_t4116647657*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, targetMethod);
				}
			}
			else
			{
				// open
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker0::Invoke(targetMethod, ___data0);
						else
							GenericVirtActionInvoker0::Invoke(targetMethod, ___data0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___data0);
						else
							VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___data0);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (ByteU5BU5D_t4116647657*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___data0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch/SerializationDataAvailableDelegate::BeginInvoke(System.Byte[],System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SerializationDataAvailableDelegate_BeginInvoke_m529473925 (SerializationDataAvailableDelegate_t503932525 * __this, ByteU5BU5D_t4116647657* ___data0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___data0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch/SerializationDataAvailableDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void SerializationDataAvailableDelegate_EndInvoke_m1828960913 (SerializationDataAvailableDelegate_t503932525 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.XR.WSA.SurfaceData
extern "C" void SurfaceData_t200825419_marshal_pinvoke(const SurfaceData_t200825419& unmarshaled, SurfaceData_t200825419_marshaled_pinvoke& marshaled)
{
	Exception_t* ___outputMesh_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'outputMesh' of type 'SurfaceData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___outputMesh_1Exception, NULL, NULL);
}
extern "C" void SurfaceData_t200825419_marshal_pinvoke_back(const SurfaceData_t200825419_marshaled_pinvoke& marshaled, SurfaceData_t200825419& unmarshaled)
{
	Exception_t* ___outputMesh_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'outputMesh' of type 'SurfaceData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___outputMesh_1Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.SurfaceData
extern "C" void SurfaceData_t200825419_marshal_pinvoke_cleanup(SurfaceData_t200825419_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.WSA.SurfaceData
extern "C" void SurfaceData_t200825419_marshal_com(const SurfaceData_t200825419& unmarshaled, SurfaceData_t200825419_marshaled_com& marshaled)
{
	Exception_t* ___outputMesh_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'outputMesh' of type 'SurfaceData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___outputMesh_1Exception, NULL, NULL);
}
extern "C" void SurfaceData_t200825419_marshal_com_back(const SurfaceData_t200825419_marshaled_com& marshaled, SurfaceData_t200825419& unmarshaled)
{
	Exception_t* ___outputMesh_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'outputMesh' of type 'SurfaceData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___outputMesh_1Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.SurfaceData
extern "C" void SurfaceData_t200825419_marshal_com_cleanup(SurfaceData_t200825419_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.XR.WSA.SurfaceObserver
extern "C" void SurfaceObserver_t1930409633_marshal_pinvoke(const SurfaceObserver_t1930409633& unmarshaled, SurfaceObserver_t1930409633_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Observer_0 = unmarshaled.get_m_Observer_0();
}
extern "C" void SurfaceObserver_t1930409633_marshal_pinvoke_back(const SurfaceObserver_t1930409633_marshaled_pinvoke& marshaled, SurfaceObserver_t1930409633& unmarshaled)
{
	intptr_t unmarshaled_m_Observer_temp_0;
	memset(&unmarshaled_m_Observer_temp_0, 0, sizeof(unmarshaled_m_Observer_temp_0));
	unmarshaled_m_Observer_temp_0 = marshaled.___m_Observer_0;
	unmarshaled.set_m_Observer_0(unmarshaled_m_Observer_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.SurfaceObserver
extern "C" void SurfaceObserver_t1930409633_marshal_pinvoke_cleanup(SurfaceObserver_t1930409633_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.WSA.SurfaceObserver
extern "C" void SurfaceObserver_t1930409633_marshal_com(const SurfaceObserver_t1930409633& unmarshaled, SurfaceObserver_t1930409633_marshaled_com& marshaled)
{
	marshaled.___m_Observer_0 = unmarshaled.get_m_Observer_0();
}
extern "C" void SurfaceObserver_t1930409633_marshal_com_back(const SurfaceObserver_t1930409633_marshaled_com& marshaled, SurfaceObserver_t1930409633& unmarshaled)
{
	intptr_t unmarshaled_m_Observer_temp_0;
	memset(&unmarshaled_m_Observer_temp_0, 0, sizeof(unmarshaled_m_Observer_temp_0));
	unmarshaled_m_Observer_temp_0 = marshaled.___m_Observer_0;
	unmarshaled.set_m_Observer_0(unmarshaled_m_Observer_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.SurfaceObserver
extern "C" void SurfaceObserver_t1930409633_marshal_com_cleanup(SurfaceObserver_t1930409633_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.XR.WSA.SurfaceObserver::InvokeSurfaceChangedEvent(UnityEngine.XR.WSA.SurfaceObserver/SurfaceChangedDelegate,System.Int32,UnityEngine.XR.WSA.SurfaceChange,UnityEngine.Bounds,System.Int64)
extern "C" IL2CPP_METHOD_ATTR void SurfaceObserver_InvokeSurfaceChangedEvent_m749734495 (RuntimeObject * __this /* static, unused */, SurfaceChangedDelegate_t2591813092 * ___onSurfaceChanged0, int32_t ___surfaceId1, int32_t ___changeType2, Bounds_t2266837910  ___bounds3, int64_t ___updateTime4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceObserver_InvokeSurfaceChangedEvent_m749734495_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SurfaceId_t2999094746  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		SurfaceChangedDelegate_t2591813092 * L_0 = ___onSurfaceChanged0;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_1 = ___surfaceId1;
		(&V_0)->set_handle_0(L_1);
		SurfaceChangedDelegate_t2591813092 * L_2 = ___onSurfaceChanged0;
		SurfaceId_t2999094746  L_3 = V_0;
		int32_t L_4 = ___changeType2;
		Bounds_t2266837910  L_5 = ___bounds3;
		int64_t L_6 = ___updateTime4;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_7 = DateTime_FromFileTime_m47770515(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		NullCheck(L_2);
		SurfaceChangedDelegate_Invoke_m2788123310(L_2, L_3, L_4, L_5, L_7, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SurfaceObserver::InvokeSurfaceDataReadyEvent(UnityEngine.XR.WSA.SurfaceObserver/SurfaceDataReadyDelegate,System.Int32,UnityEngine.MeshFilter,UnityEngine.XR.WSA.WorldAnchor,UnityEngine.MeshCollider,System.Single,System.Boolean,System.Boolean,System.Single)
extern "C" IL2CPP_METHOD_ATTR void SurfaceObserver_InvokeSurfaceDataReadyEvent_m3138683137 (RuntimeObject * __this /* static, unused */, SurfaceDataReadyDelegate_t4152308677 * ___onDataReady0, int32_t ___surfaceId1, MeshFilter_t3523625662 * ___outputMesh2, WorldAnchor_t2161774153 * ___outputAnchor3, MeshCollider_t903564387 * ___outputCollider4, float ___trisPerCubicMeter5, bool ___bakeCollider6, bool ___outputWritten7, float ___elapsedBakeTimeSeconds8, const RuntimeMethod* method)
{
	SurfaceData_t200825419  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		SurfaceDataReadyDelegate_t4152308677 * L_0 = ___onDataReady0;
		if (!L_0)
		{
			goto IL_004c;
		}
	}
	{
		SurfaceId_t2999094746 * L_1 = (&V_0)->get_address_of_id_0();
		int32_t L_2 = ___surfaceId1;
		L_1->set_handle_0(L_2);
		MeshFilter_t3523625662 * L_3 = ___outputMesh2;
		(&V_0)->set_outputMesh_1(L_3);
		WorldAnchor_t2161774153 * L_4 = ___outputAnchor3;
		(&V_0)->set_outputAnchor_2(L_4);
		MeshCollider_t903564387 * L_5 = ___outputCollider4;
		(&V_0)->set_outputCollider_3(L_5);
		float L_6 = ___trisPerCubicMeter5;
		(&V_0)->set_trianglesPerCubicMeter_4(L_6);
		bool L_7 = ___bakeCollider6;
		(&V_0)->set_bakeCollider_5(L_7);
		SurfaceDataReadyDelegate_t4152308677 * L_8 = ___onDataReady0;
		SurfaceData_t200825419  L_9 = V_0;
		bool L_10 = ___outputWritten7;
		float L_11 = ___elapsedBakeTimeSeconds8;
		NullCheck(L_8);
		SurfaceDataReadyDelegate_Invoke_m145795677(L_8, L_9, L_10, L_11, /*hidden argument*/NULL);
	}

IL_004c:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SurfaceObserver::Finalize()
extern "C" IL2CPP_METHOD_ATTR void SurfaceObserver_Finalize_m675213516 (SurfaceObserver_t1930409633 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceObserver_Finalize_m675213516_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = __this->get_m_Observer_0();
			bool L_1 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_0, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_1)
			{
				goto IL_002f;
			}
		}

IL_0016:
		{
			SurfaceObserver_DestroyThreaded_m2892117220(__this, /*hidden argument*/NULL);
			__this->set_m_Observer_0((intptr_t)(0));
			IL2CPP_RUNTIME_CLASS_INIT(GC_t959872083_il2cpp_TypeInfo_var);
			GC_SuppressFinalize_m1177400158(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		}

IL_002f:
		{
			IL2CPP_LEAVE(0x3B, FINALLY_0034);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0034;
	}

FINALLY_0034:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(52)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(52)
	{
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003b:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SurfaceObserver::DestroyThreaded()
extern "C" IL2CPP_METHOD_ATTR void SurfaceObserver_DestroyThreaded_m2892117220 (SurfaceObserver_t1930409633 * __this, const RuntimeMethod* method)
{
	typedef void (*SurfaceObserver_DestroyThreaded_m2892117220_ftn) (SurfaceObserver_t1930409633 *);
	static SurfaceObserver_DestroyThreaded_m2892117220_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SurfaceObserver_DestroyThreaded_m2892117220_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.SurfaceObserver::DestroyThreaded()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.XR.WSA.SurfaceObserver::Dispose()
extern "C" IL2CPP_METHOD_ATTR void SurfaceObserver_Dispose_m3692775015 (SurfaceObserver_t1930409633 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceObserver_Dispose_m3692775015_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_m_Observer_0();
		bool L_1 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		SurfaceObserver_Destroy_m3658786827(__this, /*hidden argument*/NULL);
		__this->set_m_Observer_0((intptr_t)(0));
	}

IL_0029:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GC_t959872083_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m1177400158(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SurfaceObserver::Destroy()
extern "C" IL2CPP_METHOD_ATTR void SurfaceObserver_Destroy_m3658786827 (SurfaceObserver_t1930409633 * __this, const RuntimeMethod* method)
{
	typedef void (*SurfaceObserver_Destroy_m3658786827_ftn) (SurfaceObserver_t1930409633 *);
	static SurfaceObserver_Destroy_m3658786827_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SurfaceObserver_Destroy_m3658786827_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.SurfaceObserver::Destroy()");
	_il2cpp_icall_func(__this);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.WSA.SurfaceObserver/SurfaceChangedDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SurfaceChangedDelegate__ctor_m2596031620 (SurfaceChangedDelegate_t2591813092 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.SurfaceObserver/SurfaceChangedDelegate::Invoke(UnityEngine.XR.WSA.SurfaceId,UnityEngine.XR.WSA.SurfaceChange,UnityEngine.Bounds,System.DateTime)
extern "C" IL2CPP_METHOD_ATTR void SurfaceChangedDelegate_Invoke_m2788123310 (SurfaceChangedDelegate_t2591813092 * __this, SurfaceId_t2999094746  ___surfaceId0, int32_t ___changeType1, Bounds_t2266837910  ___bounds2, DateTime_t3738529785  ___updateTime3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 4)
				{
					// open
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, SurfaceId_t2999094746 , int32_t, Bounds_t2266837910 , DateTime_t3738529785 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___surfaceId0, ___changeType1, ___bounds2, ___updateTime3, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, SurfaceId_t2999094746 , int32_t, Bounds_t2266837910 , DateTime_t3738529785 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___surfaceId0, ___changeType1, ___bounds2, ___updateTime3, targetMethod);
					}
				}
			}
			else
			{
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker4< SurfaceId_t2999094746 , int32_t, Bounds_t2266837910 , DateTime_t3738529785  >::Invoke(targetMethod, targetThis, ___surfaceId0, ___changeType1, ___bounds2, ___updateTime3);
							else
								GenericVirtActionInvoker4< SurfaceId_t2999094746 , int32_t, Bounds_t2266837910 , DateTime_t3738529785  >::Invoke(targetMethod, targetThis, ___surfaceId0, ___changeType1, ___bounds2, ___updateTime3);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker4< SurfaceId_t2999094746 , int32_t, Bounds_t2266837910 , DateTime_t3738529785  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___surfaceId0, ___changeType1, ___bounds2, ___updateTime3);
							else
								VirtActionInvoker4< SurfaceId_t2999094746 , int32_t, Bounds_t2266837910 , DateTime_t3738529785  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___surfaceId0, ___changeType1, ___bounds2, ___updateTime3);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, SurfaceId_t2999094746 , int32_t, Bounds_t2266837910 , DateTime_t3738529785 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___surfaceId0, ___changeType1, ___bounds2, ___updateTime3, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 4)
			{
				// open
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, SurfaceId_t2999094746 , int32_t, Bounds_t2266837910 , DateTime_t3738529785 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___surfaceId0, ___changeType1, ___bounds2, ___updateTime3, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, SurfaceId_t2999094746 , int32_t, Bounds_t2266837910 , DateTime_t3738529785 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___surfaceId0, ___changeType1, ___bounds2, ___updateTime3, targetMethod);
				}
			}
		}
		else
		{
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker4< SurfaceId_t2999094746 , int32_t, Bounds_t2266837910 , DateTime_t3738529785  >::Invoke(targetMethod, targetThis, ___surfaceId0, ___changeType1, ___bounds2, ___updateTime3);
						else
							GenericVirtActionInvoker4< SurfaceId_t2999094746 , int32_t, Bounds_t2266837910 , DateTime_t3738529785  >::Invoke(targetMethod, targetThis, ___surfaceId0, ___changeType1, ___bounds2, ___updateTime3);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker4< SurfaceId_t2999094746 , int32_t, Bounds_t2266837910 , DateTime_t3738529785  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___surfaceId0, ___changeType1, ___bounds2, ___updateTime3);
						else
							VirtActionInvoker4< SurfaceId_t2999094746 , int32_t, Bounds_t2266837910 , DateTime_t3738529785  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___surfaceId0, ___changeType1, ___bounds2, ___updateTime3);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, SurfaceId_t2999094746 , int32_t, Bounds_t2266837910 , DateTime_t3738529785 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___surfaceId0, ___changeType1, ___bounds2, ___updateTime3, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.SurfaceObserver/SurfaceChangedDelegate::BeginInvoke(UnityEngine.XR.WSA.SurfaceId,UnityEngine.XR.WSA.SurfaceChange,UnityEngine.Bounds,System.DateTime,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SurfaceChangedDelegate_BeginInvoke_m4041879836 (SurfaceChangedDelegate_t2591813092 * __this, SurfaceId_t2999094746  ___surfaceId0, int32_t ___changeType1, Bounds_t2266837910  ___bounds2, DateTime_t3738529785  ___updateTime3, AsyncCallback_t3962456242 * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceChangedDelegate_BeginInvoke_m4041879836_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(SurfaceId_t2999094746_il2cpp_TypeInfo_var, &___surfaceId0);
	__d_args[1] = Box(SurfaceChange_t1487785866_il2cpp_TypeInfo_var, &___changeType1);
	__d_args[2] = Box(Bounds_t2266837910_il2cpp_TypeInfo_var, &___bounds2);
	__d_args[3] = Box(DateTime_t3738529785_il2cpp_TypeInfo_var, &___updateTime3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Void UnityEngine.XR.WSA.SurfaceObserver/SurfaceChangedDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void SurfaceChangedDelegate_EndInvoke_m226880227 (SurfaceChangedDelegate_t2591813092 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.WSA.SurfaceObserver/SurfaceDataReadyDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SurfaceDataReadyDelegate__ctor_m2681927192 (SurfaceDataReadyDelegate_t4152308677 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.SurfaceObserver/SurfaceDataReadyDelegate::Invoke(UnityEngine.XR.WSA.SurfaceData,System.Boolean,System.Single)
extern "C" IL2CPP_METHOD_ATTR void SurfaceDataReadyDelegate_Invoke_m145795677 (SurfaceDataReadyDelegate_t4152308677 * __this, SurfaceData_t200825419  ___bakedData0, bool ___outputWritten1, float ___elapsedBakeTimeSeconds2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 3)
				{
					// open
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, SurfaceData_t200825419 , bool, float, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___bakedData0, ___outputWritten1, ___elapsedBakeTimeSeconds2, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, SurfaceData_t200825419 , bool, float, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___bakedData0, ___outputWritten1, ___elapsedBakeTimeSeconds2, targetMethod);
					}
				}
			}
			else
			{
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker3< SurfaceData_t200825419 , bool, float >::Invoke(targetMethod, targetThis, ___bakedData0, ___outputWritten1, ___elapsedBakeTimeSeconds2);
							else
								GenericVirtActionInvoker3< SurfaceData_t200825419 , bool, float >::Invoke(targetMethod, targetThis, ___bakedData0, ___outputWritten1, ___elapsedBakeTimeSeconds2);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker3< SurfaceData_t200825419 , bool, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___bakedData0, ___outputWritten1, ___elapsedBakeTimeSeconds2);
							else
								VirtActionInvoker3< SurfaceData_t200825419 , bool, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___bakedData0, ___outputWritten1, ___elapsedBakeTimeSeconds2);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, SurfaceData_t200825419 , bool, float, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___bakedData0, ___outputWritten1, ___elapsedBakeTimeSeconds2, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 3)
			{
				// open
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, SurfaceData_t200825419 , bool, float, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___bakedData0, ___outputWritten1, ___elapsedBakeTimeSeconds2, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, SurfaceData_t200825419 , bool, float, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___bakedData0, ___outputWritten1, ___elapsedBakeTimeSeconds2, targetMethod);
				}
			}
		}
		else
		{
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker3< SurfaceData_t200825419 , bool, float >::Invoke(targetMethod, targetThis, ___bakedData0, ___outputWritten1, ___elapsedBakeTimeSeconds2);
						else
							GenericVirtActionInvoker3< SurfaceData_t200825419 , bool, float >::Invoke(targetMethod, targetThis, ___bakedData0, ___outputWritten1, ___elapsedBakeTimeSeconds2);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker3< SurfaceData_t200825419 , bool, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___bakedData0, ___outputWritten1, ___elapsedBakeTimeSeconds2);
						else
							VirtActionInvoker3< SurfaceData_t200825419 , bool, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___bakedData0, ___outputWritten1, ___elapsedBakeTimeSeconds2);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, SurfaceData_t200825419 , bool, float, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___bakedData0, ___outputWritten1, ___elapsedBakeTimeSeconds2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.SurfaceObserver/SurfaceDataReadyDelegate::BeginInvoke(UnityEngine.XR.WSA.SurfaceData,System.Boolean,System.Single,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SurfaceDataReadyDelegate_BeginInvoke_m135711948 (SurfaceDataReadyDelegate_t4152308677 * __this, SurfaceData_t200825419  ___bakedData0, bool ___outputWritten1, float ___elapsedBakeTimeSeconds2, AsyncCallback_t3962456242 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceDataReadyDelegate_BeginInvoke_m135711948_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(SurfaceData_t200825419_il2cpp_TypeInfo_var, &___bakedData0);
	__d_args[1] = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &___outputWritten1);
	__d_args[2] = Box(Single_t1397266774_il2cpp_TypeInfo_var, &___elapsedBakeTimeSeconds2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.XR.WSA.SurfaceObserver/SurfaceDataReadyDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void SurfaceDataReadyDelegate_EndInvoke_m459545712 (SurfaceDataReadyDelegate_t4152308677 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.XR.WSA.WebCam.PhotoCapture
extern "C" void PhotoCapture_t3135222410_marshal_pinvoke(const PhotoCapture_t3135222410& unmarshaled, PhotoCapture_t3135222410_marshaled_pinvoke& marshaled)
{
	marshaled.___m_NativePtr_0 = unmarshaled.get_m_NativePtr_0();
}
extern "C" void PhotoCapture_t3135222410_marshal_pinvoke_back(const PhotoCapture_t3135222410_marshaled_pinvoke& marshaled, PhotoCapture_t3135222410& unmarshaled)
{
	intptr_t unmarshaled_m_NativePtr_temp_0;
	memset(&unmarshaled_m_NativePtr_temp_0, 0, sizeof(unmarshaled_m_NativePtr_temp_0));
	unmarshaled_m_NativePtr_temp_0 = marshaled.___m_NativePtr_0;
	unmarshaled.set_m_NativePtr_0(unmarshaled_m_NativePtr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.WebCam.PhotoCapture
extern "C" void PhotoCapture_t3135222410_marshal_pinvoke_cleanup(PhotoCapture_t3135222410_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.WSA.WebCam.PhotoCapture
extern "C" void PhotoCapture_t3135222410_marshal_com(const PhotoCapture_t3135222410& unmarshaled, PhotoCapture_t3135222410_marshaled_com& marshaled)
{
	marshaled.___m_NativePtr_0 = unmarshaled.get_m_NativePtr_0();
}
extern "C" void PhotoCapture_t3135222410_marshal_com_back(const PhotoCapture_t3135222410_marshaled_com& marshaled, PhotoCapture_t3135222410& unmarshaled)
{
	intptr_t unmarshaled_m_NativePtr_temp_0;
	memset(&unmarshaled_m_NativePtr_temp_0, 0, sizeof(unmarshaled_m_NativePtr_temp_0));
	unmarshaled_m_NativePtr_temp_0 = marshaled.___m_NativePtr_0;
	unmarshaled.set_m_NativePtr_0(unmarshaled_m_NativePtr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.WebCam.PhotoCapture
extern "C" void PhotoCapture_t3135222410_marshal_com_cleanup(PhotoCapture_t3135222410_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture::.ctor(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void PhotoCapture__ctor_m4119059844 (PhotoCapture_t3135222410 * __this, intptr_t ___nativeCaptureObject0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___nativeCaptureObject0;
		__this->set_m_NativePtr_0(L_0);
		return;
	}
}
// UnityEngine.XR.WSA.WebCam.PhotoCapture/PhotoCaptureResult UnityEngine.XR.WSA.WebCam.PhotoCapture::MakeCaptureResult(System.Int64)
extern "C" IL2CPP_METHOD_ATTR PhotoCaptureResult_t1090015350  PhotoCapture_MakeCaptureResult_m1924927526 (RuntimeObject * __this /* static, unused */, int64_t ___hResult0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotoCapture_MakeCaptureResult_m1924927526_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PhotoCaptureResult_t1090015350  V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t V_1 = 0;
	PhotoCaptureResult_t1090015350  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(PhotoCaptureResult_t1090015350 ));
		int64_t L_0 = ___hResult0;
		IL2CPP_RUNTIME_CLASS_INIT(PhotoCapture_t3135222410_il2cpp_TypeInfo_var);
		int64_t L_1 = ((PhotoCapture_t3135222410_StaticFields*)il2cpp_codegen_static_fields_for(PhotoCapture_t3135222410_il2cpp_TypeInfo_var))->get_HR_SUCCESS_1();
		if ((!(((uint64_t)L_0) == ((uint64_t)L_1))))
		{
			goto IL_001d;
		}
	}
	{
		V_1 = 0;
		goto IL_0021;
	}

IL_001d:
	{
		V_1 = 1;
	}

IL_0021:
	{
		int32_t L_2 = V_1;
		(&V_0)->set_resultType_0(L_2);
		int64_t L_3 = ___hResult0;
		(&V_0)->set_hResult_1(L_3);
		PhotoCaptureResult_t1090015350  L_4 = V_0;
		V_2 = L_4;
		goto IL_0038;
	}

IL_0038:
	{
		PhotoCaptureResult_t1090015350  L_5 = V_2;
		return L_5;
	}
}
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture::InvokeOnCreatedResourceDelegate(UnityEngine.XR.WSA.WebCam.PhotoCapture/OnCaptureResourceCreatedCallback,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void PhotoCapture_InvokeOnCreatedResourceDelegate_m2990079858 (RuntimeObject * __this /* static, unused */, OnCaptureResourceCreatedCallback_t3785377276 * ___callback0, intptr_t ___nativePtr1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotoCapture_InvokeOnCreatedResourceDelegate_m2990079858_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___nativePtr1;
		bool L_1 = IntPtr_op_Equality_m408849716(NULL /*static, unused*/, L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		OnCaptureResourceCreatedCallback_t3785377276 * L_2 = ___callback0;
		NullCheck(L_2);
		OnCaptureResourceCreatedCallback_Invoke_m4080042670(L_2, (PhotoCapture_t3135222410 *)NULL, /*hidden argument*/NULL);
		goto IL_002d;
	}

IL_001f:
	{
		OnCaptureResourceCreatedCallback_t3785377276 * L_3 = ___callback0;
		intptr_t L_4 = ___nativePtr1;
		PhotoCapture_t3135222410 * L_5 = (PhotoCapture_t3135222410 *)il2cpp_codegen_object_new(PhotoCapture_t3135222410_il2cpp_TypeInfo_var);
		PhotoCapture__ctor_m4119059844(L_5, L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		OnCaptureResourceCreatedCallback_Invoke_m4080042670(L_3, L_5, /*hidden argument*/NULL);
	}

IL_002d:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture::InvokeOnPhotoModeStartedDelegate(UnityEngine.XR.WSA.WebCam.PhotoCapture/OnPhotoModeStartedCallback,System.Int64)
extern "C" IL2CPP_METHOD_ATTR void PhotoCapture_InvokeOnPhotoModeStartedDelegate_m2733257272 (RuntimeObject * __this /* static, unused */, OnPhotoModeStartedCallback_t4210568704 * ___callback0, int64_t ___hResult1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotoCapture_InvokeOnPhotoModeStartedDelegate_m2733257272_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnPhotoModeStartedCallback_t4210568704 * L_0 = ___callback0;
		int64_t L_1 = ___hResult1;
		IL2CPP_RUNTIME_CLASS_INIT(PhotoCapture_t3135222410_il2cpp_TypeInfo_var);
		PhotoCaptureResult_t1090015350  L_2 = PhotoCapture_MakeCaptureResult_m1924927526(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		OnPhotoModeStartedCallback_Invoke_m3688565566(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture::InvokeOnPhotoModeStoppedDelegate(UnityEngine.XR.WSA.WebCam.PhotoCapture/OnPhotoModeStoppedCallback,System.Int64)
extern "C" IL2CPP_METHOD_ATTR void PhotoCapture_InvokeOnPhotoModeStoppedDelegate_m1056175338 (RuntimeObject * __this /* static, unused */, OnPhotoModeStoppedCallback_t1205025237 * ___callback0, int64_t ___hResult1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotoCapture_InvokeOnPhotoModeStoppedDelegate_m1056175338_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnPhotoModeStoppedCallback_t1205025237 * L_0 = ___callback0;
		int64_t L_1 = ___hResult1;
		IL2CPP_RUNTIME_CLASS_INIT(PhotoCapture_t3135222410_il2cpp_TypeInfo_var);
		PhotoCaptureResult_t1090015350  L_2 = PhotoCapture_MakeCaptureResult_m1924927526(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		OnPhotoModeStoppedCallback_Invoke_m2313188363(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture::InvokeOnCapturedPhotoToDiskDelegate(UnityEngine.XR.WSA.WebCam.PhotoCapture/OnCapturedToDiskCallback,System.Int64)
extern "C" IL2CPP_METHOD_ATTR void PhotoCapture_InvokeOnCapturedPhotoToDiskDelegate_m4035703221 (RuntimeObject * __this /* static, unused */, OnCapturedToDiskCallback_t406265622 * ___callback0, int64_t ___hResult1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotoCapture_InvokeOnCapturedPhotoToDiskDelegate_m4035703221_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnCapturedToDiskCallback_t406265622 * L_0 = ___callback0;
		int64_t L_1 = ___hResult1;
		IL2CPP_RUNTIME_CLASS_INIT(PhotoCapture_t3135222410_il2cpp_TypeInfo_var);
		PhotoCaptureResult_t1090015350  L_2 = PhotoCapture_MakeCaptureResult_m1924927526(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		OnCapturedToDiskCallback_Invoke_m3252107161(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture::InvokeOnCapturedPhotoToMemoryDelegate(UnityEngine.XR.WSA.WebCam.PhotoCapture/OnCapturedToMemoryCallback,System.Int64,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void PhotoCapture_InvokeOnCapturedPhotoToMemoryDelegate_m3004748368 (RuntimeObject * __this /* static, unused */, OnCapturedToMemoryCallback_t287362928 * ___callback0, int64_t ___hResult1, intptr_t ___photoCaptureFramePtr2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotoCapture_InvokeOnCapturedPhotoToMemoryDelegate_m3004748368_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PhotoCaptureFrame_t831849718 * V_0 = NULL;
	{
		V_0 = (PhotoCaptureFrame_t831849718 *)NULL;
		intptr_t L_0 = ___photoCaptureFramePtr2;
		bool L_1 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		intptr_t L_2 = ___photoCaptureFramePtr2;
		PhotoCaptureFrame_t831849718 * L_3 = (PhotoCaptureFrame_t831849718 *)il2cpp_codegen_object_new(PhotoCaptureFrame_t831849718_il2cpp_TypeInfo_var);
		PhotoCaptureFrame__ctor_m606131785(L_3, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_001c:
	{
		OnCapturedToMemoryCallback_t287362928 * L_4 = ___callback0;
		int64_t L_5 = ___hResult1;
		IL2CPP_RUNTIME_CLASS_INIT(PhotoCapture_t3135222410_il2cpp_TypeInfo_var);
		PhotoCaptureResult_t1090015350  L_6 = PhotoCapture_MakeCaptureResult_m1924927526(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		PhotoCaptureFrame_t831849718 * L_7 = V_0;
		NullCheck(L_4);
		OnCapturedToMemoryCallback_Invoke_m3002007005(L_4, L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture::Dispose()
extern "C" IL2CPP_METHOD_ATTR void PhotoCapture_Dispose_m3767860830 (PhotoCapture_t3135222410 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotoCapture_Dispose_m3767860830_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_m_NativePtr_0();
		bool L_1 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		PhotoCapture_Dispose_Internal_m1183514933(__this, /*hidden argument*/NULL);
		__this->set_m_NativePtr_0((intptr_t)(0));
	}

IL_0029:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GC_t959872083_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m1177400158(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture::Dispose_Internal()
extern "C" IL2CPP_METHOD_ATTR void PhotoCapture_Dispose_Internal_m1183514933 (PhotoCapture_t3135222410 * __this, const RuntimeMethod* method)
{
	typedef void (*PhotoCapture_Dispose_Internal_m1183514933_ftn) (PhotoCapture_t3135222410 *);
	static PhotoCapture_Dispose_Internal_m1183514933_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PhotoCapture_Dispose_Internal_m1183514933_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.WebCam.PhotoCapture::Dispose_Internal()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture::Finalize()
extern "C" IL2CPP_METHOD_ATTR void PhotoCapture_Finalize_m1628315134 (PhotoCapture_t3135222410 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotoCapture_Finalize_m1628315134_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = __this->get_m_NativePtr_0();
			bool L_1 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_0, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_1)
			{
				goto IL_0029;
			}
		}

IL_0016:
		{
			PhotoCapture_DisposeThreaded_Internal_m3505357448(__this, /*hidden argument*/NULL);
			__this->set_m_NativePtr_0((intptr_t)(0));
		}

IL_0029:
		{
			IL2CPP_LEAVE(0x35, FINALLY_002e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002e;
	}

FINALLY_002e:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(46)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(46)
	{
		IL2CPP_JUMP_TBL(0x35, IL_0035)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0035:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture::DisposeThreaded_Internal()
extern "C" IL2CPP_METHOD_ATTR void PhotoCapture_DisposeThreaded_Internal_m3505357448 (PhotoCapture_t3135222410 * __this, const RuntimeMethod* method)
{
	typedef void (*PhotoCapture_DisposeThreaded_Internal_m3505357448_ftn) (PhotoCapture_t3135222410 *);
	static PhotoCapture_DisposeThreaded_Internal_m3505357448_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PhotoCapture_DisposeThreaded_Internal_m3505357448_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.WebCam.PhotoCapture::DisposeThreaded_Internal()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture::.cctor()
extern "C" IL2CPP_METHOD_ATTR void PhotoCapture__cctor_m502322675 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotoCapture__cctor_m502322675_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((PhotoCapture_t3135222410_StaticFields*)il2cpp_codegen_static_fields_for(PhotoCapture_t3135222410_il2cpp_TypeInfo_var))->set_HR_SUCCESS_1((((int64_t)((int64_t)0))));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_OnCaptureResourceCreatedCallback_t3785377276 (OnCaptureResourceCreatedCallback_t3785377276 * __this, PhotoCapture_t3135222410 * ___captureObject0, const RuntimeMethod* method)
{


	typedef void (DEFAULT_CALL *PInvokeFunc)(PhotoCapture_t3135222410_marshaled_pinvoke*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___captureObject0' to native representation
	PhotoCapture_t3135222410_marshaled_pinvoke ____captureObject0_marshaled = {};
	if (___captureObject0 != NULL) PhotoCapture_t3135222410_marshal_pinvoke(*___captureObject0, ____captureObject0_marshaled);

	// Native function invocation
	il2cppPInvokeFunc(___captureObject0 != NULL ? &____captureObject0_marshaled : NULL);

	// Marshaling cleanup of parameter '___captureObject0' native representation
	if (___captureObject0 != NULL) PhotoCapture_t3135222410_marshal_pinvoke_cleanup(____captureObject0_marshaled);

}
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture/OnCaptureResourceCreatedCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void OnCaptureResourceCreatedCallback__ctor_m3985878288 (OnCaptureResourceCreatedCallback_t3785377276 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture/OnCaptureResourceCreatedCallback::Invoke(UnityEngine.XR.WSA.WebCam.PhotoCapture)
extern "C" IL2CPP_METHOD_ATTR void OnCaptureResourceCreatedCallback_Invoke_m4080042670 (OnCaptureResourceCreatedCallback_t3785377276 * __this, PhotoCapture_t3135222410 * ___captureObject0, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
				{
					// open
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, PhotoCapture_t3135222410 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___captureObject0, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, PhotoCapture_t3135222410 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___captureObject0, targetMethod);
					}
				}
			}
			else
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< PhotoCapture_t3135222410 * >::Invoke(targetMethod, targetThis, ___captureObject0);
							else
								GenericVirtActionInvoker1< PhotoCapture_t3135222410 * >::Invoke(targetMethod, targetThis, ___captureObject0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< PhotoCapture_t3135222410 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___captureObject0);
							else
								VirtActionInvoker1< PhotoCapture_t3135222410 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___captureObject0);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, PhotoCapture_t3135222410 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___captureObject0, targetMethod);
					}
				}
				else
				{
					// open
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker0::Invoke(targetMethod, ___captureObject0);
							else
								GenericVirtActionInvoker0::Invoke(targetMethod, ___captureObject0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___captureObject0);
							else
								VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___captureObject0);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (PhotoCapture_t3135222410 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___captureObject0, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
			{
				// open
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, PhotoCapture_t3135222410 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___captureObject0, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, PhotoCapture_t3135222410 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___captureObject0, targetMethod);
				}
			}
		}
		else
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< PhotoCapture_t3135222410 * >::Invoke(targetMethod, targetThis, ___captureObject0);
						else
							GenericVirtActionInvoker1< PhotoCapture_t3135222410 * >::Invoke(targetMethod, targetThis, ___captureObject0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< PhotoCapture_t3135222410 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___captureObject0);
						else
							VirtActionInvoker1< PhotoCapture_t3135222410 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___captureObject0);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, PhotoCapture_t3135222410 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___captureObject0, targetMethod);
				}
			}
			else
			{
				// open
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker0::Invoke(targetMethod, ___captureObject0);
						else
							GenericVirtActionInvoker0::Invoke(targetMethod, ___captureObject0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___captureObject0);
						else
							VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___captureObject0);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (PhotoCapture_t3135222410 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___captureObject0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.WebCam.PhotoCapture/OnCaptureResourceCreatedCallback::BeginInvoke(UnityEngine.XR.WSA.WebCam.PhotoCapture,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* OnCaptureResourceCreatedCallback_BeginInvoke_m1303183891 (OnCaptureResourceCreatedCallback_t3785377276 * __this, PhotoCapture_t3135222410 * ___captureObject0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___captureObject0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture/OnCaptureResourceCreatedCallback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void OnCaptureResourceCreatedCallback_EndInvoke_m3597152667 (OnCaptureResourceCreatedCallback_t3785377276 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_OnCapturedToDiskCallback_t406265622 (OnCapturedToDiskCallback_t406265622 * __this, PhotoCaptureResult_t1090015350  ___result0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(PhotoCaptureResult_t1090015350 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___result0);

}
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture/OnCapturedToDiskCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void OnCapturedToDiskCallback__ctor_m327347338 (OnCapturedToDiskCallback_t406265622 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture/OnCapturedToDiskCallback::Invoke(UnityEngine.XR.WSA.WebCam.PhotoCapture/PhotoCaptureResult)
extern "C" IL2CPP_METHOD_ATTR void OnCapturedToDiskCallback_Invoke_m3252107161 (OnCapturedToDiskCallback_t406265622 * __this, PhotoCaptureResult_t1090015350  ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
				{
					// open
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, PhotoCaptureResult_t1090015350 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___result0, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, PhotoCaptureResult_t1090015350 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___result0, targetMethod);
					}
				}
			}
			else
			{
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< PhotoCaptureResult_t1090015350  >::Invoke(targetMethod, targetThis, ___result0);
							else
								GenericVirtActionInvoker1< PhotoCaptureResult_t1090015350  >::Invoke(targetMethod, targetThis, ___result0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< PhotoCaptureResult_t1090015350  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___result0);
							else
								VirtActionInvoker1< PhotoCaptureResult_t1090015350  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___result0);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, PhotoCaptureResult_t1090015350 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
			{
				// open
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, PhotoCaptureResult_t1090015350 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___result0, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, PhotoCaptureResult_t1090015350 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___result0, targetMethod);
				}
			}
		}
		else
		{
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< PhotoCaptureResult_t1090015350  >::Invoke(targetMethod, targetThis, ___result0);
						else
							GenericVirtActionInvoker1< PhotoCaptureResult_t1090015350  >::Invoke(targetMethod, targetThis, ___result0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< PhotoCaptureResult_t1090015350  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___result0);
						else
							VirtActionInvoker1< PhotoCaptureResult_t1090015350  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___result0);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, PhotoCaptureResult_t1090015350 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.WebCam.PhotoCapture/OnCapturedToDiskCallback::BeginInvoke(UnityEngine.XR.WSA.WebCam.PhotoCapture/PhotoCaptureResult,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* OnCapturedToDiskCallback_BeginInvoke_m3179254044 (OnCapturedToDiskCallback_t406265622 * __this, PhotoCaptureResult_t1090015350  ___result0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnCapturedToDiskCallback_BeginInvoke_m3179254044_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(PhotoCaptureResult_t1090015350_il2cpp_TypeInfo_var, &___result0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture/OnCapturedToDiskCallback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void OnCapturedToDiskCallback_EndInvoke_m825312304 (OnCapturedToDiskCallback_t406265622 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture/OnCapturedToMemoryCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void OnCapturedToMemoryCallback__ctor_m2645554997 (OnCapturedToMemoryCallback_t287362928 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture/OnCapturedToMemoryCallback::Invoke(UnityEngine.XR.WSA.WebCam.PhotoCapture/PhotoCaptureResult,UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame)
extern "C" IL2CPP_METHOD_ATTR void OnCapturedToMemoryCallback_Invoke_m3002007005 (OnCapturedToMemoryCallback_t287362928 * __this, PhotoCaptureResult_t1090015350  ___result0, PhotoCaptureFrame_t831849718 * ___photoCaptureFrame1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
				{
					// open
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, PhotoCaptureResult_t1090015350 , PhotoCaptureFrame_t831849718 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___result0, ___photoCaptureFrame1, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, PhotoCaptureResult_t1090015350 , PhotoCaptureFrame_t831849718 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___result0, ___photoCaptureFrame1, targetMethod);
					}
				}
			}
			else
			{
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker2< PhotoCaptureResult_t1090015350 , PhotoCaptureFrame_t831849718 * >::Invoke(targetMethod, targetThis, ___result0, ___photoCaptureFrame1);
							else
								GenericVirtActionInvoker2< PhotoCaptureResult_t1090015350 , PhotoCaptureFrame_t831849718 * >::Invoke(targetMethod, targetThis, ___result0, ___photoCaptureFrame1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker2< PhotoCaptureResult_t1090015350 , PhotoCaptureFrame_t831849718 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___result0, ___photoCaptureFrame1);
							else
								VirtActionInvoker2< PhotoCaptureResult_t1090015350 , PhotoCaptureFrame_t831849718 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___result0, ___photoCaptureFrame1);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, PhotoCaptureResult_t1090015350 , PhotoCaptureFrame_t831849718 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, ___photoCaptureFrame1, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
			{
				// open
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, PhotoCaptureResult_t1090015350 , PhotoCaptureFrame_t831849718 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___result0, ___photoCaptureFrame1, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, PhotoCaptureResult_t1090015350 , PhotoCaptureFrame_t831849718 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___result0, ___photoCaptureFrame1, targetMethod);
				}
			}
		}
		else
		{
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker2< PhotoCaptureResult_t1090015350 , PhotoCaptureFrame_t831849718 * >::Invoke(targetMethod, targetThis, ___result0, ___photoCaptureFrame1);
						else
							GenericVirtActionInvoker2< PhotoCaptureResult_t1090015350 , PhotoCaptureFrame_t831849718 * >::Invoke(targetMethod, targetThis, ___result0, ___photoCaptureFrame1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker2< PhotoCaptureResult_t1090015350 , PhotoCaptureFrame_t831849718 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___result0, ___photoCaptureFrame1);
						else
							VirtActionInvoker2< PhotoCaptureResult_t1090015350 , PhotoCaptureFrame_t831849718 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___result0, ___photoCaptureFrame1);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, PhotoCaptureResult_t1090015350 , PhotoCaptureFrame_t831849718 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, ___photoCaptureFrame1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.WebCam.PhotoCapture/OnCapturedToMemoryCallback::BeginInvoke(UnityEngine.XR.WSA.WebCam.PhotoCapture/PhotoCaptureResult,UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* OnCapturedToMemoryCallback_BeginInvoke_m2150099500 (OnCapturedToMemoryCallback_t287362928 * __this, PhotoCaptureResult_t1090015350  ___result0, PhotoCaptureFrame_t831849718 * ___photoCaptureFrame1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnCapturedToMemoryCallback_BeginInvoke_m2150099500_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(PhotoCaptureResult_t1090015350_il2cpp_TypeInfo_var, &___result0);
	__d_args[1] = ___photoCaptureFrame1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture/OnCapturedToMemoryCallback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void OnCapturedToMemoryCallback_EndInvoke_m4090898737 (OnCapturedToMemoryCallback_t287362928 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_OnPhotoModeStartedCallback_t4210568704 (OnPhotoModeStartedCallback_t4210568704 * __this, PhotoCaptureResult_t1090015350  ___result0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(PhotoCaptureResult_t1090015350 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___result0);

}
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture/OnPhotoModeStartedCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void OnPhotoModeStartedCallback__ctor_m3092405683 (OnPhotoModeStartedCallback_t4210568704 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture/OnPhotoModeStartedCallback::Invoke(UnityEngine.XR.WSA.WebCam.PhotoCapture/PhotoCaptureResult)
extern "C" IL2CPP_METHOD_ATTR void OnPhotoModeStartedCallback_Invoke_m3688565566 (OnPhotoModeStartedCallback_t4210568704 * __this, PhotoCaptureResult_t1090015350  ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
				{
					// open
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, PhotoCaptureResult_t1090015350 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___result0, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, PhotoCaptureResult_t1090015350 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___result0, targetMethod);
					}
				}
			}
			else
			{
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< PhotoCaptureResult_t1090015350  >::Invoke(targetMethod, targetThis, ___result0);
							else
								GenericVirtActionInvoker1< PhotoCaptureResult_t1090015350  >::Invoke(targetMethod, targetThis, ___result0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< PhotoCaptureResult_t1090015350  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___result0);
							else
								VirtActionInvoker1< PhotoCaptureResult_t1090015350  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___result0);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, PhotoCaptureResult_t1090015350 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
			{
				// open
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, PhotoCaptureResult_t1090015350 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___result0, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, PhotoCaptureResult_t1090015350 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___result0, targetMethod);
				}
			}
		}
		else
		{
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< PhotoCaptureResult_t1090015350  >::Invoke(targetMethod, targetThis, ___result0);
						else
							GenericVirtActionInvoker1< PhotoCaptureResult_t1090015350  >::Invoke(targetMethod, targetThis, ___result0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< PhotoCaptureResult_t1090015350  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___result0);
						else
							VirtActionInvoker1< PhotoCaptureResult_t1090015350  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___result0);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, PhotoCaptureResult_t1090015350 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.WebCam.PhotoCapture/OnPhotoModeStartedCallback::BeginInvoke(UnityEngine.XR.WSA.WebCam.PhotoCapture/PhotoCaptureResult,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* OnPhotoModeStartedCallback_BeginInvoke_m3184901267 (OnPhotoModeStartedCallback_t4210568704 * __this, PhotoCaptureResult_t1090015350  ___result0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnPhotoModeStartedCallback_BeginInvoke_m3184901267_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(PhotoCaptureResult_t1090015350_il2cpp_TypeInfo_var, &___result0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture/OnPhotoModeStartedCallback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void OnPhotoModeStartedCallback_EndInvoke_m2330757147 (OnPhotoModeStartedCallback_t4210568704 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_OnPhotoModeStoppedCallback_t1205025237 (OnPhotoModeStoppedCallback_t1205025237 * __this, PhotoCaptureResult_t1090015350  ___result0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(PhotoCaptureResult_t1090015350 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___result0);

}
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture/OnPhotoModeStoppedCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void OnPhotoModeStoppedCallback__ctor_m972691011 (OnPhotoModeStoppedCallback_t1205025237 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture/OnPhotoModeStoppedCallback::Invoke(UnityEngine.XR.WSA.WebCam.PhotoCapture/PhotoCaptureResult)
extern "C" IL2CPP_METHOD_ATTR void OnPhotoModeStoppedCallback_Invoke_m2313188363 (OnPhotoModeStoppedCallback_t1205025237 * __this, PhotoCaptureResult_t1090015350  ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
				{
					// open
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, PhotoCaptureResult_t1090015350 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___result0, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, PhotoCaptureResult_t1090015350 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___result0, targetMethod);
					}
				}
			}
			else
			{
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< PhotoCaptureResult_t1090015350  >::Invoke(targetMethod, targetThis, ___result0);
							else
								GenericVirtActionInvoker1< PhotoCaptureResult_t1090015350  >::Invoke(targetMethod, targetThis, ___result0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< PhotoCaptureResult_t1090015350  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___result0);
							else
								VirtActionInvoker1< PhotoCaptureResult_t1090015350  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___result0);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, PhotoCaptureResult_t1090015350 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
			{
				// open
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, PhotoCaptureResult_t1090015350 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___result0, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, PhotoCaptureResult_t1090015350 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___result0, targetMethod);
				}
			}
		}
		else
		{
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< PhotoCaptureResult_t1090015350  >::Invoke(targetMethod, targetThis, ___result0);
						else
							GenericVirtActionInvoker1< PhotoCaptureResult_t1090015350  >::Invoke(targetMethod, targetThis, ___result0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< PhotoCaptureResult_t1090015350  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___result0);
						else
							VirtActionInvoker1< PhotoCaptureResult_t1090015350  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___result0);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, PhotoCaptureResult_t1090015350 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.WebCam.PhotoCapture/OnPhotoModeStoppedCallback::BeginInvoke(UnityEngine.XR.WSA.WebCam.PhotoCapture/PhotoCaptureResult,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* OnPhotoModeStoppedCallback_BeginInvoke_m3462190928 (OnPhotoModeStoppedCallback_t1205025237 * __this, PhotoCaptureResult_t1090015350  ___result0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnPhotoModeStoppedCallback_BeginInvoke_m3462190928_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(PhotoCaptureResult_t1090015350_il2cpp_TypeInfo_var, &___result0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture/OnPhotoModeStoppedCallback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void OnPhotoModeStoppedCallback_EndInvoke_m3096308232 (OnPhotoModeStoppedCallback_t1205025237 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame::.ctor(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void PhotoCaptureFrame__ctor_m606131785 (PhotoCaptureFrame_t831849718 * __this, intptr_t ___nativePtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotoCaptureFrame__ctor_m606131785_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___nativePtr0;
		__this->set_m_NativePtr_0(L_0);
		int32_t L_1 = PhotoCaptureFrame_GetDataLength_m1534572832(__this, /*hidden argument*/NULL);
		PhotoCaptureFrame_set_dataLength_m444842192(__this, L_1, /*hidden argument*/NULL);
		bool L_2 = PhotoCaptureFrame_GetHasLocationData_m282091044(__this, /*hidden argument*/NULL);
		PhotoCaptureFrame_set_hasLocationData_m1699222113(__this, L_2, /*hidden argument*/NULL);
		int32_t L_3 = PhotoCaptureFrame_GetCapturePixelFormat_m3608178055(__this, /*hidden argument*/NULL);
		PhotoCaptureFrame_set_pixelFormat_m592693207(__this, L_3, /*hidden argument*/NULL);
		int32_t L_4 = PhotoCaptureFrame_get_dataLength_m698767877(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GC_t959872083_il2cpp_TypeInfo_var);
		GC_AddMemoryPressure_m410792512(NULL /*static, unused*/, (((int64_t)((int64_t)L_4))), /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame::get_dataLength()
extern "C" IL2CPP_METHOD_ATTR int32_t PhotoCaptureFrame_get_dataLength_m698767877 (PhotoCaptureFrame_t831849718 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CdataLengthU3Ek__BackingField_1();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame::set_dataLength(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void PhotoCaptureFrame_set_dataLength_m444842192 (PhotoCaptureFrame_t831849718 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CdataLengthU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame::set_hasLocationData(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void PhotoCaptureFrame_set_hasLocationData_m1699222113 (PhotoCaptureFrame_t831849718 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3ChasLocationDataU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame::set_pixelFormat(UnityEngine.XR.WSA.WebCam.CapturePixelFormat)
extern "C" IL2CPP_METHOD_ATTR void PhotoCaptureFrame_set_pixelFormat_m592693207 (PhotoCaptureFrame_t831849718 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CpixelFormatU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Int32 UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame::GetDataLength()
extern "C" IL2CPP_METHOD_ATTR int32_t PhotoCaptureFrame_GetDataLength_m1534572832 (PhotoCaptureFrame_t831849718 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*PhotoCaptureFrame_GetDataLength_m1534572832_ftn) (PhotoCaptureFrame_t831849718 *);
	static PhotoCaptureFrame_GetDataLength_m1534572832_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PhotoCaptureFrame_GetDataLength_m1534572832_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame::GetDataLength()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame::GetHasLocationData()
extern "C" IL2CPP_METHOD_ATTR bool PhotoCaptureFrame_GetHasLocationData_m282091044 (PhotoCaptureFrame_t831849718 * __this, const RuntimeMethod* method)
{
	typedef bool (*PhotoCaptureFrame_GetHasLocationData_m282091044_ftn) (PhotoCaptureFrame_t831849718 *);
	static PhotoCaptureFrame_GetHasLocationData_m282091044_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PhotoCaptureFrame_GetHasLocationData_m282091044_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame::GetHasLocationData()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.XR.WSA.WebCam.CapturePixelFormat UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame::GetCapturePixelFormat()
extern "C" IL2CPP_METHOD_ATTR int32_t PhotoCaptureFrame_GetCapturePixelFormat_m3608178055 (PhotoCaptureFrame_t831849718 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*PhotoCaptureFrame_GetCapturePixelFormat_m3608178055_ftn) (PhotoCaptureFrame_t831849718 *);
	static PhotoCaptureFrame_GetCapturePixelFormat_m3608178055_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PhotoCaptureFrame_GetCapturePixelFormat_m3608178055_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame::GetCapturePixelFormat()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame::Cleanup()
extern "C" IL2CPP_METHOD_ATTR void PhotoCaptureFrame_Cleanup_m3036154540 (PhotoCaptureFrame_t831849718 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotoCaptureFrame_Cleanup_m3036154540_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_m_NativePtr_0();
		bool L_1 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_2 = PhotoCaptureFrame_get_dataLength_m698767877(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GC_t959872083_il2cpp_TypeInfo_var);
		GC_RemoveMemoryPressure_m3919346798(NULL /*static, unused*/, (((int64_t)((int64_t)L_2))), /*hidden argument*/NULL);
		PhotoCaptureFrame_Dispose_Internal_m2221519305(__this, /*hidden argument*/NULL);
		__this->set_m_NativePtr_0((intptr_t)(0));
	}

IL_0035:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame::Dispose_Internal()
extern "C" IL2CPP_METHOD_ATTR void PhotoCaptureFrame_Dispose_Internal_m2221519305 (PhotoCaptureFrame_t831849718 * __this, const RuntimeMethod* method)
{
	typedef void (*PhotoCaptureFrame_Dispose_Internal_m2221519305_ftn) (PhotoCaptureFrame_t831849718 *);
	static PhotoCaptureFrame_Dispose_Internal_m2221519305_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PhotoCaptureFrame_Dispose_Internal_m2221519305_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame::Dispose_Internal()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame::Dispose()
extern "C" IL2CPP_METHOD_ATTR void PhotoCaptureFrame_Dispose_m3253225398 (PhotoCaptureFrame_t831849718 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotoCaptureFrame_Dispose_m3253225398_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PhotoCaptureFrame_Cleanup_m3036154540(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GC_t959872083_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m1177400158(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame::Finalize()
extern "C" IL2CPP_METHOD_ATTR void PhotoCaptureFrame_Finalize_m1025748384 (PhotoCaptureFrame_t831849718 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		PhotoCaptureFrame_Cleanup_m3036154540(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x13, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_JUMP_TBL(0x13, IL_0013)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0013:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.XR.WSA.WebCam.VideoCapture
extern "C" void VideoCapture_t3191060632_marshal_pinvoke(const VideoCapture_t3191060632& unmarshaled, VideoCapture_t3191060632_marshaled_pinvoke& marshaled)
{
	marshaled.___m_NativePtr_0 = unmarshaled.get_m_NativePtr_0();
}
extern "C" void VideoCapture_t3191060632_marshal_pinvoke_back(const VideoCapture_t3191060632_marshaled_pinvoke& marshaled, VideoCapture_t3191060632& unmarshaled)
{
	intptr_t unmarshaled_m_NativePtr_temp_0;
	memset(&unmarshaled_m_NativePtr_temp_0, 0, sizeof(unmarshaled_m_NativePtr_temp_0));
	unmarshaled_m_NativePtr_temp_0 = marshaled.___m_NativePtr_0;
	unmarshaled.set_m_NativePtr_0(unmarshaled_m_NativePtr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.WebCam.VideoCapture
extern "C" void VideoCapture_t3191060632_marshal_pinvoke_cleanup(VideoCapture_t3191060632_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.WSA.WebCam.VideoCapture
extern "C" void VideoCapture_t3191060632_marshal_com(const VideoCapture_t3191060632& unmarshaled, VideoCapture_t3191060632_marshaled_com& marshaled)
{
	marshaled.___m_NativePtr_0 = unmarshaled.get_m_NativePtr_0();
}
extern "C" void VideoCapture_t3191060632_marshal_com_back(const VideoCapture_t3191060632_marshaled_com& marshaled, VideoCapture_t3191060632& unmarshaled)
{
	intptr_t unmarshaled_m_NativePtr_temp_0;
	memset(&unmarshaled_m_NativePtr_temp_0, 0, sizeof(unmarshaled_m_NativePtr_temp_0));
	unmarshaled_m_NativePtr_temp_0 = marshaled.___m_NativePtr_0;
	unmarshaled.set_m_NativePtr_0(unmarshaled_m_NativePtr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.WebCam.VideoCapture
extern "C" void VideoCapture_t3191060632_marshal_com_cleanup(VideoCapture_t3191060632_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture::.ctor(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void VideoCapture__ctor_m1447976283 (VideoCapture_t3191060632 * __this, intptr_t ___nativeCaptureObject0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___nativeCaptureObject0;
		__this->set_m_NativePtr_0(L_0);
		return;
	}
}
// UnityEngine.XR.WSA.WebCam.VideoCapture/VideoCaptureResult UnityEngine.XR.WSA.WebCam.VideoCapture::MakeCaptureResult(System.Int64)
extern "C" IL2CPP_METHOD_ATTR VideoCaptureResult_t880209540  VideoCapture_MakeCaptureResult_m2984416805 (RuntimeObject * __this /* static, unused */, int64_t ___hResult0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoCapture_MakeCaptureResult_m2984416805_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	VideoCaptureResult_t880209540  V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t V_1 = 0;
	VideoCaptureResult_t880209540  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(VideoCaptureResult_t880209540 ));
		int64_t L_0 = ___hResult0;
		IL2CPP_RUNTIME_CLASS_INIT(VideoCapture_t3191060632_il2cpp_TypeInfo_var);
		int64_t L_1 = ((VideoCapture_t3191060632_StaticFields*)il2cpp_codegen_static_fields_for(VideoCapture_t3191060632_il2cpp_TypeInfo_var))->get_HR_SUCCESS_1();
		if ((!(((uint64_t)L_0) == ((uint64_t)L_1))))
		{
			goto IL_001d;
		}
	}
	{
		V_1 = 0;
		goto IL_0021;
	}

IL_001d:
	{
		V_1 = 1;
	}

IL_0021:
	{
		int32_t L_2 = V_1;
		(&V_0)->set_resultType_0(L_2);
		int64_t L_3 = ___hResult0;
		(&V_0)->set_hResult_1(L_3);
		VideoCaptureResult_t880209540  L_4 = V_0;
		V_2 = L_4;
		goto IL_0038;
	}

IL_0038:
	{
		VideoCaptureResult_t880209540  L_5 = V_2;
		return L_5;
	}
}
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture::InvokeOnCreatedVideoCaptureResourceDelegate(UnityEngine.XR.WSA.WebCam.VideoCapture/OnVideoCaptureResourceCreatedCallback,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void VideoCapture_InvokeOnCreatedVideoCaptureResourceDelegate_m1534159244 (RuntimeObject * __this /* static, unused */, OnVideoCaptureResourceCreatedCallback_t794232766 * ___callback0, intptr_t ___nativePtr1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoCapture_InvokeOnCreatedVideoCaptureResourceDelegate_m1534159244_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___nativePtr1;
		bool L_1 = IntPtr_op_Equality_m408849716(NULL /*static, unused*/, L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		OnVideoCaptureResourceCreatedCallback_t794232766 * L_2 = ___callback0;
		NullCheck(L_2);
		OnVideoCaptureResourceCreatedCallback_Invoke_m1901797426(L_2, (VideoCapture_t3191060632 *)NULL, /*hidden argument*/NULL);
		goto IL_002d;
	}

IL_001f:
	{
		OnVideoCaptureResourceCreatedCallback_t794232766 * L_3 = ___callback0;
		intptr_t L_4 = ___nativePtr1;
		VideoCapture_t3191060632 * L_5 = (VideoCapture_t3191060632 *)il2cpp_codegen_object_new(VideoCapture_t3191060632_il2cpp_TypeInfo_var);
		VideoCapture__ctor_m1447976283(L_5, L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		OnVideoCaptureResourceCreatedCallback_Invoke_m1901797426(L_3, L_5, /*hidden argument*/NULL);
	}

IL_002d:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture::InvokeOnVideoModeStartedDelegate(UnityEngine.XR.WSA.WebCam.VideoCapture/OnVideoModeStartedCallback,System.Int64)
extern "C" IL2CPP_METHOD_ATTR void VideoCapture_InvokeOnVideoModeStartedDelegate_m1608578268 (RuntimeObject * __this /* static, unused */, OnVideoModeStartedCallback_t3407805878 * ___callback0, int64_t ___hResult1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoCapture_InvokeOnVideoModeStartedDelegate_m1608578268_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnVideoModeStartedCallback_t3407805878 * L_0 = ___callback0;
		int64_t L_1 = ___hResult1;
		IL2CPP_RUNTIME_CLASS_INIT(VideoCapture_t3191060632_il2cpp_TypeInfo_var);
		VideoCaptureResult_t880209540  L_2 = VideoCapture_MakeCaptureResult_m2984416805(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		OnVideoModeStartedCallback_Invoke_m2745026342(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture::InvokeOnVideoModeStoppedDelegate(UnityEngine.XR.WSA.WebCam.VideoCapture/OnVideoModeStoppedCallback,System.Int64)
extern "C" IL2CPP_METHOD_ATTR void VideoCapture_InvokeOnVideoModeStoppedDelegate_m1194356745 (RuntimeObject * __this /* static, unused */, OnVideoModeStoppedCallback_t3606558731 * ___callback0, int64_t ___hResult1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoCapture_InvokeOnVideoModeStoppedDelegate_m1194356745_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnVideoModeStoppedCallback_t3606558731 * L_0 = ___callback0;
		int64_t L_1 = ___hResult1;
		IL2CPP_RUNTIME_CLASS_INIT(VideoCapture_t3191060632_il2cpp_TypeInfo_var);
		VideoCaptureResult_t880209540  L_2 = VideoCapture_MakeCaptureResult_m2984416805(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		OnVideoModeStoppedCallback_Invoke_m3094092899(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture::InvokeOnStartedRecordingVideoToDiskDelegate(UnityEngine.XR.WSA.WebCam.VideoCapture/OnStartedRecordingVideoCallback,System.Int64)
extern "C" IL2CPP_METHOD_ATTR void VideoCapture_InvokeOnStartedRecordingVideoToDiskDelegate_m2837517037 (RuntimeObject * __this /* static, unused */, OnStartedRecordingVideoCallback_t3861839134 * ___callback0, int64_t ___hResult1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoCapture_InvokeOnStartedRecordingVideoToDiskDelegate_m2837517037_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnStartedRecordingVideoCallback_t3861839134 * L_0 = ___callback0;
		int64_t L_1 = ___hResult1;
		IL2CPP_RUNTIME_CLASS_INIT(VideoCapture_t3191060632_il2cpp_TypeInfo_var);
		VideoCaptureResult_t880209540  L_2 = VideoCapture_MakeCaptureResult_m2984416805(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		OnStartedRecordingVideoCallback_Invoke_m2218155126(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture::InvokeOnStoppedRecordingVideoToDiskDelegate(UnityEngine.XR.WSA.WebCam.VideoCapture/OnStoppedRecordingVideoCallback,System.Int64)
extern "C" IL2CPP_METHOD_ATTR void VideoCapture_InvokeOnStoppedRecordingVideoToDiskDelegate_m484902260 (RuntimeObject * __this /* static, unused */, OnStoppedRecordingVideoCallback_t2563676185 * ___callback0, int64_t ___hResult1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoCapture_InvokeOnStoppedRecordingVideoToDiskDelegate_m484902260_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnStoppedRecordingVideoCallback_t2563676185 * L_0 = ___callback0;
		int64_t L_1 = ___hResult1;
		IL2CPP_RUNTIME_CLASS_INIT(VideoCapture_t3191060632_il2cpp_TypeInfo_var);
		VideoCaptureResult_t880209540  L_2 = VideoCapture_MakeCaptureResult_m2984416805(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		OnStoppedRecordingVideoCallback_Invoke_m1725009027(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture::Dispose()
extern "C" IL2CPP_METHOD_ATTR void VideoCapture_Dispose_m1925742270 (VideoCapture_t3191060632 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoCapture_Dispose_m1925742270_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_m_NativePtr_0();
		bool L_1 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		VideoCapture_Dispose_Internal_m3532959447(__this, /*hidden argument*/NULL);
		__this->set_m_NativePtr_0((intptr_t)(0));
	}

IL_0029:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GC_t959872083_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m1177400158(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture::Dispose_Internal()
extern "C" IL2CPP_METHOD_ATTR void VideoCapture_Dispose_Internal_m3532959447 (VideoCapture_t3191060632 * __this, const RuntimeMethod* method)
{
	typedef void (*VideoCapture_Dispose_Internal_m3532959447_ftn) (VideoCapture_t3191060632 *);
	static VideoCapture_Dispose_Internal_m3532959447_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoCapture_Dispose_Internal_m3532959447_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.WebCam.VideoCapture::Dispose_Internal()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture::Finalize()
extern "C" IL2CPP_METHOD_ATTR void VideoCapture_Finalize_m1163336295 (VideoCapture_t3191060632 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoCapture_Finalize_m1163336295_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = __this->get_m_NativePtr_0();
			bool L_1 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_0, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_1)
			{
				goto IL_0029;
			}
		}

IL_0016:
		{
			VideoCapture_DisposeThreaded_Internal_m4280317370(__this, /*hidden argument*/NULL);
			__this->set_m_NativePtr_0((intptr_t)(0));
		}

IL_0029:
		{
			IL2CPP_LEAVE(0x35, FINALLY_002e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002e;
	}

FINALLY_002e:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(46)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(46)
	{
		IL2CPP_JUMP_TBL(0x35, IL_0035)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0035:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture::DisposeThreaded_Internal()
extern "C" IL2CPP_METHOD_ATTR void VideoCapture_DisposeThreaded_Internal_m4280317370 (VideoCapture_t3191060632 * __this, const RuntimeMethod* method)
{
	typedef void (*VideoCapture_DisposeThreaded_Internal_m4280317370_ftn) (VideoCapture_t3191060632 *);
	static VideoCapture_DisposeThreaded_Internal_m4280317370_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoCapture_DisposeThreaded_Internal_m4280317370_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.WebCam.VideoCapture::DisposeThreaded_Internal()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture::.cctor()
extern "C" IL2CPP_METHOD_ATTR void VideoCapture__cctor_m2665993362 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoCapture__cctor_m2665993362_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((VideoCapture_t3191060632_StaticFields*)il2cpp_codegen_static_fields_for(VideoCapture_t3191060632_il2cpp_TypeInfo_var))->set_HR_SUCCESS_1((((int64_t)((int64_t)0))));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_OnStartedRecordingVideoCallback_t3861839134 (OnStartedRecordingVideoCallback_t3861839134 * __this, VideoCaptureResult_t880209540  ___result0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(VideoCaptureResult_t880209540 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___result0);

}
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture/OnStartedRecordingVideoCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void OnStartedRecordingVideoCallback__ctor_m3002148718 (OnStartedRecordingVideoCallback_t3861839134 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture/OnStartedRecordingVideoCallback::Invoke(UnityEngine.XR.WSA.WebCam.VideoCapture/VideoCaptureResult)
extern "C" IL2CPP_METHOD_ATTR void OnStartedRecordingVideoCallback_Invoke_m2218155126 (OnStartedRecordingVideoCallback_t3861839134 * __this, VideoCaptureResult_t880209540  ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
				{
					// open
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, VideoCaptureResult_t880209540 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___result0, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, VideoCaptureResult_t880209540 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___result0, targetMethod);
					}
				}
			}
			else
			{
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< VideoCaptureResult_t880209540  >::Invoke(targetMethod, targetThis, ___result0);
							else
								GenericVirtActionInvoker1< VideoCaptureResult_t880209540  >::Invoke(targetMethod, targetThis, ___result0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< VideoCaptureResult_t880209540  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___result0);
							else
								VirtActionInvoker1< VideoCaptureResult_t880209540  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___result0);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, VideoCaptureResult_t880209540 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
			{
				// open
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, VideoCaptureResult_t880209540 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___result0, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, VideoCaptureResult_t880209540 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___result0, targetMethod);
				}
			}
		}
		else
		{
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< VideoCaptureResult_t880209540  >::Invoke(targetMethod, targetThis, ___result0);
						else
							GenericVirtActionInvoker1< VideoCaptureResult_t880209540  >::Invoke(targetMethod, targetThis, ___result0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< VideoCaptureResult_t880209540  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___result0);
						else
							VirtActionInvoker1< VideoCaptureResult_t880209540  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___result0);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, VideoCaptureResult_t880209540 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.WebCam.VideoCapture/OnStartedRecordingVideoCallback::BeginInvoke(UnityEngine.XR.WSA.WebCam.VideoCapture/VideoCaptureResult,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* OnStartedRecordingVideoCallback_BeginInvoke_m3829405792 (OnStartedRecordingVideoCallback_t3861839134 * __this, VideoCaptureResult_t880209540  ___result0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnStartedRecordingVideoCallback_BeginInvoke_m3829405792_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(VideoCaptureResult_t880209540_il2cpp_TypeInfo_var, &___result0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture/OnStartedRecordingVideoCallback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void OnStartedRecordingVideoCallback_EndInvoke_m856681986 (OnStartedRecordingVideoCallback_t3861839134 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_OnStoppedRecordingVideoCallback_t2563676185 (OnStoppedRecordingVideoCallback_t2563676185 * __this, VideoCaptureResult_t880209540  ___result0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(VideoCaptureResult_t880209540 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___result0);

}
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture/OnStoppedRecordingVideoCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void OnStoppedRecordingVideoCallback__ctor_m362271540 (OnStoppedRecordingVideoCallback_t2563676185 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture/OnStoppedRecordingVideoCallback::Invoke(UnityEngine.XR.WSA.WebCam.VideoCapture/VideoCaptureResult)
extern "C" IL2CPP_METHOD_ATTR void OnStoppedRecordingVideoCallback_Invoke_m1725009027 (OnStoppedRecordingVideoCallback_t2563676185 * __this, VideoCaptureResult_t880209540  ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
				{
					// open
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, VideoCaptureResult_t880209540 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___result0, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, VideoCaptureResult_t880209540 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___result0, targetMethod);
					}
				}
			}
			else
			{
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< VideoCaptureResult_t880209540  >::Invoke(targetMethod, targetThis, ___result0);
							else
								GenericVirtActionInvoker1< VideoCaptureResult_t880209540  >::Invoke(targetMethod, targetThis, ___result0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< VideoCaptureResult_t880209540  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___result0);
							else
								VirtActionInvoker1< VideoCaptureResult_t880209540  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___result0);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, VideoCaptureResult_t880209540 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
			{
				// open
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, VideoCaptureResult_t880209540 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___result0, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, VideoCaptureResult_t880209540 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___result0, targetMethod);
				}
			}
		}
		else
		{
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< VideoCaptureResult_t880209540  >::Invoke(targetMethod, targetThis, ___result0);
						else
							GenericVirtActionInvoker1< VideoCaptureResult_t880209540  >::Invoke(targetMethod, targetThis, ___result0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< VideoCaptureResult_t880209540  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___result0);
						else
							VirtActionInvoker1< VideoCaptureResult_t880209540  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___result0);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, VideoCaptureResult_t880209540 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.WebCam.VideoCapture/OnStoppedRecordingVideoCallback::BeginInvoke(UnityEngine.XR.WSA.WebCam.VideoCapture/VideoCaptureResult,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* OnStoppedRecordingVideoCallback_BeginInvoke_m4062312512 (OnStoppedRecordingVideoCallback_t2563676185 * __this, VideoCaptureResult_t880209540  ___result0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnStoppedRecordingVideoCallback_BeginInvoke_m4062312512_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(VideoCaptureResult_t880209540_il2cpp_TypeInfo_var, &___result0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture/OnStoppedRecordingVideoCallback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void OnStoppedRecordingVideoCallback_EndInvoke_m1709863021 (OnStoppedRecordingVideoCallback_t2563676185 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_OnVideoCaptureResourceCreatedCallback_t794232766 (OnVideoCaptureResourceCreatedCallback_t794232766 * __this, VideoCapture_t3191060632 * ___captureObject0, const RuntimeMethod* method)
{


	typedef void (DEFAULT_CALL *PInvokeFunc)(VideoCapture_t3191060632_marshaled_pinvoke*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___captureObject0' to native representation
	VideoCapture_t3191060632_marshaled_pinvoke ____captureObject0_marshaled = {};
	if (___captureObject0 != NULL) VideoCapture_t3191060632_marshal_pinvoke(*___captureObject0, ____captureObject0_marshaled);

	// Native function invocation
	il2cppPInvokeFunc(___captureObject0 != NULL ? &____captureObject0_marshaled : NULL);

	// Marshaling cleanup of parameter '___captureObject0' native representation
	if (___captureObject0 != NULL) VideoCapture_t3191060632_marshal_pinvoke_cleanup(____captureObject0_marshaled);

}
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture/OnVideoCaptureResourceCreatedCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void OnVideoCaptureResourceCreatedCallback__ctor_m161863664 (OnVideoCaptureResourceCreatedCallback_t794232766 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture/OnVideoCaptureResourceCreatedCallback::Invoke(UnityEngine.XR.WSA.WebCam.VideoCapture)
extern "C" IL2CPP_METHOD_ATTR void OnVideoCaptureResourceCreatedCallback_Invoke_m1901797426 (OnVideoCaptureResourceCreatedCallback_t794232766 * __this, VideoCapture_t3191060632 * ___captureObject0, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
				{
					// open
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, VideoCapture_t3191060632 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___captureObject0, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, VideoCapture_t3191060632 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___captureObject0, targetMethod);
					}
				}
			}
			else
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< VideoCapture_t3191060632 * >::Invoke(targetMethod, targetThis, ___captureObject0);
							else
								GenericVirtActionInvoker1< VideoCapture_t3191060632 * >::Invoke(targetMethod, targetThis, ___captureObject0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< VideoCapture_t3191060632 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___captureObject0);
							else
								VirtActionInvoker1< VideoCapture_t3191060632 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___captureObject0);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, VideoCapture_t3191060632 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___captureObject0, targetMethod);
					}
				}
				else
				{
					// open
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker0::Invoke(targetMethod, ___captureObject0);
							else
								GenericVirtActionInvoker0::Invoke(targetMethod, ___captureObject0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___captureObject0);
							else
								VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___captureObject0);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (VideoCapture_t3191060632 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___captureObject0, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
			{
				// open
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, VideoCapture_t3191060632 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___captureObject0, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, VideoCapture_t3191060632 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___captureObject0, targetMethod);
				}
			}
		}
		else
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< VideoCapture_t3191060632 * >::Invoke(targetMethod, targetThis, ___captureObject0);
						else
							GenericVirtActionInvoker1< VideoCapture_t3191060632 * >::Invoke(targetMethod, targetThis, ___captureObject0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< VideoCapture_t3191060632 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___captureObject0);
						else
							VirtActionInvoker1< VideoCapture_t3191060632 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___captureObject0);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, VideoCapture_t3191060632 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___captureObject0, targetMethod);
				}
			}
			else
			{
				// open
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker0::Invoke(targetMethod, ___captureObject0);
						else
							GenericVirtActionInvoker0::Invoke(targetMethod, ___captureObject0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___captureObject0);
						else
							VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___captureObject0);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (VideoCapture_t3191060632 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___captureObject0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.WebCam.VideoCapture/OnVideoCaptureResourceCreatedCallback::BeginInvoke(UnityEngine.XR.WSA.WebCam.VideoCapture,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* OnVideoCaptureResourceCreatedCallback_BeginInvoke_m2830087095 (OnVideoCaptureResourceCreatedCallback_t794232766 * __this, VideoCapture_t3191060632 * ___captureObject0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___captureObject0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture/OnVideoCaptureResourceCreatedCallback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void OnVideoCaptureResourceCreatedCallback_EndInvoke_m1936908566 (OnVideoCaptureResourceCreatedCallback_t794232766 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_OnVideoModeStartedCallback_t3407805878 (OnVideoModeStartedCallback_t3407805878 * __this, VideoCaptureResult_t880209540  ___result0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(VideoCaptureResult_t880209540 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___result0);

}
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture/OnVideoModeStartedCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void OnVideoModeStartedCallback__ctor_m1548452879 (OnVideoModeStartedCallback_t3407805878 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture/OnVideoModeStartedCallback::Invoke(UnityEngine.XR.WSA.WebCam.VideoCapture/VideoCaptureResult)
extern "C" IL2CPP_METHOD_ATTR void OnVideoModeStartedCallback_Invoke_m2745026342 (OnVideoModeStartedCallback_t3407805878 * __this, VideoCaptureResult_t880209540  ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
				{
					// open
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, VideoCaptureResult_t880209540 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___result0, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, VideoCaptureResult_t880209540 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___result0, targetMethod);
					}
				}
			}
			else
			{
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< VideoCaptureResult_t880209540  >::Invoke(targetMethod, targetThis, ___result0);
							else
								GenericVirtActionInvoker1< VideoCaptureResult_t880209540  >::Invoke(targetMethod, targetThis, ___result0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< VideoCaptureResult_t880209540  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___result0);
							else
								VirtActionInvoker1< VideoCaptureResult_t880209540  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___result0);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, VideoCaptureResult_t880209540 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
			{
				// open
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, VideoCaptureResult_t880209540 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___result0, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, VideoCaptureResult_t880209540 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___result0, targetMethod);
				}
			}
		}
		else
		{
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< VideoCaptureResult_t880209540  >::Invoke(targetMethod, targetThis, ___result0);
						else
							GenericVirtActionInvoker1< VideoCaptureResult_t880209540  >::Invoke(targetMethod, targetThis, ___result0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< VideoCaptureResult_t880209540  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___result0);
						else
							VirtActionInvoker1< VideoCaptureResult_t880209540  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___result0);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, VideoCaptureResult_t880209540 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.WebCam.VideoCapture/OnVideoModeStartedCallback::BeginInvoke(UnityEngine.XR.WSA.WebCam.VideoCapture/VideoCaptureResult,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* OnVideoModeStartedCallback_BeginInvoke_m3782198279 (OnVideoModeStartedCallback_t3407805878 * __this, VideoCaptureResult_t880209540  ___result0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnVideoModeStartedCallback_BeginInvoke_m3782198279_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(VideoCaptureResult_t880209540_il2cpp_TypeInfo_var, &___result0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture/OnVideoModeStartedCallback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void OnVideoModeStartedCallback_EndInvoke_m268188242 (OnVideoModeStartedCallback_t3407805878 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_OnVideoModeStoppedCallback_t3606558731 (OnVideoModeStoppedCallback_t3606558731 * __this, VideoCaptureResult_t880209540  ___result0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(VideoCaptureResult_t880209540 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___result0);

}
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture/OnVideoModeStoppedCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void OnVideoModeStoppedCallback__ctor_m892942050 (OnVideoModeStoppedCallback_t3606558731 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture/OnVideoModeStoppedCallback::Invoke(UnityEngine.XR.WSA.WebCam.VideoCapture/VideoCaptureResult)
extern "C" IL2CPP_METHOD_ATTR void OnVideoModeStoppedCallback_Invoke_m3094092899 (OnVideoModeStoppedCallback_t3606558731 * __this, VideoCaptureResult_t880209540  ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
				{
					// open
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, VideoCaptureResult_t880209540 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___result0, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, VideoCaptureResult_t880209540 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___result0, targetMethod);
					}
				}
			}
			else
			{
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< VideoCaptureResult_t880209540  >::Invoke(targetMethod, targetThis, ___result0);
							else
								GenericVirtActionInvoker1< VideoCaptureResult_t880209540  >::Invoke(targetMethod, targetThis, ___result0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< VideoCaptureResult_t880209540  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___result0);
							else
								VirtActionInvoker1< VideoCaptureResult_t880209540  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___result0);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, VideoCaptureResult_t880209540 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
			{
				// open
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, VideoCaptureResult_t880209540 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___result0, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, VideoCaptureResult_t880209540 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___result0, targetMethod);
				}
			}
		}
		else
		{
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< VideoCaptureResult_t880209540  >::Invoke(targetMethod, targetThis, ___result0);
						else
							GenericVirtActionInvoker1< VideoCaptureResult_t880209540  >::Invoke(targetMethod, targetThis, ___result0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< VideoCaptureResult_t880209540  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___result0);
						else
							VirtActionInvoker1< VideoCaptureResult_t880209540  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___result0);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, VideoCaptureResult_t880209540 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.WebCam.VideoCapture/OnVideoModeStoppedCallback::BeginInvoke(UnityEngine.XR.WSA.WebCam.VideoCapture/VideoCaptureResult,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* OnVideoModeStoppedCallback_BeginInvoke_m1016876654 (OnVideoModeStoppedCallback_t3606558731 * __this, VideoCaptureResult_t880209540  ___result0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnVideoModeStoppedCallback_BeginInvoke_m1016876654_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(VideoCaptureResult_t880209540_il2cpp_TypeInfo_var, &___result0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture/OnVideoModeStoppedCallback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void OnVideoModeStoppedCallback_EndInvoke_m3539997570 (OnVideoModeStoppedCallback_t3606558731 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.WSA.WorldAnchor::Internal_TriggerEventOnTrackingLost(UnityEngine.XR.WSA.WorldAnchor,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void WorldAnchor_Internal_TriggerEventOnTrackingLost_m2317342579 (RuntimeObject * __this /* static, unused */, WorldAnchor_t2161774153 * ___worldAnchor0, bool ___located1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldAnchor_Internal_TriggerEventOnTrackingLost_m2317342579_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WorldAnchor_t2161774153 * L_0 = ___worldAnchor0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		WorldAnchor_t2161774153 * L_2 = ___worldAnchor0;
		NullCheck(L_2);
		OnTrackingChangedDelegate_t3480415086 * L_3 = L_2->get_OnTrackingChanged_4();
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		WorldAnchor_t2161774153 * L_4 = ___worldAnchor0;
		NullCheck(L_4);
		OnTrackingChangedDelegate_t3480415086 * L_5 = L_4->get_OnTrackingChanged_4();
		WorldAnchor_t2161774153 * L_6 = ___worldAnchor0;
		bool L_7 = ___located1;
		NullCheck(L_5);
		OnTrackingChangedDelegate_Invoke_m3564199058(L_5, L_6, L_7, /*hidden argument*/NULL);
	}

IL_0027:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.WSA.WorldAnchor/OnTrackingChangedDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void OnTrackingChangedDelegate__ctor_m637460647 (OnTrackingChangedDelegate_t3480415086 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.WorldAnchor/OnTrackingChangedDelegate::Invoke(UnityEngine.XR.WSA.WorldAnchor,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void OnTrackingChangedDelegate_Invoke_m3564199058 (OnTrackingChangedDelegate_t3480415086 * __this, WorldAnchor_t2161774153 * ___worldAnchor0, bool ___located1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
				{
					// open
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, WorldAnchor_t2161774153 *, bool, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___worldAnchor0, ___located1, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, WorldAnchor_t2161774153 *, bool, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___worldAnchor0, ___located1, targetMethod);
					}
				}
			}
			else
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker2< WorldAnchor_t2161774153 *, bool >::Invoke(targetMethod, targetThis, ___worldAnchor0, ___located1);
							else
								GenericVirtActionInvoker2< WorldAnchor_t2161774153 *, bool >::Invoke(targetMethod, targetThis, ___worldAnchor0, ___located1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker2< WorldAnchor_t2161774153 *, bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___worldAnchor0, ___located1);
							else
								VirtActionInvoker2< WorldAnchor_t2161774153 *, bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___worldAnchor0, ___located1);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, WorldAnchor_t2161774153 *, bool, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___worldAnchor0, ___located1, targetMethod);
					}
				}
				else
				{
					// open
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< bool >::Invoke(targetMethod, ___worldAnchor0, ___located1);
							else
								GenericVirtActionInvoker1< bool >::Invoke(targetMethod, ___worldAnchor0, ___located1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___worldAnchor0, ___located1);
							else
								VirtActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___worldAnchor0, ___located1);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (WorldAnchor_t2161774153 *, bool, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___worldAnchor0, ___located1, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
			{
				// open
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, WorldAnchor_t2161774153 *, bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___worldAnchor0, ___located1, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, WorldAnchor_t2161774153 *, bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___worldAnchor0, ___located1, targetMethod);
				}
			}
		}
		else
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker2< WorldAnchor_t2161774153 *, bool >::Invoke(targetMethod, targetThis, ___worldAnchor0, ___located1);
						else
							GenericVirtActionInvoker2< WorldAnchor_t2161774153 *, bool >::Invoke(targetMethod, targetThis, ___worldAnchor0, ___located1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker2< WorldAnchor_t2161774153 *, bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___worldAnchor0, ___located1);
						else
							VirtActionInvoker2< WorldAnchor_t2161774153 *, bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___worldAnchor0, ___located1);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, WorldAnchor_t2161774153 *, bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___worldAnchor0, ___located1, targetMethod);
				}
			}
			else
			{
				// open
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< bool >::Invoke(targetMethod, ___worldAnchor0, ___located1);
						else
							GenericVirtActionInvoker1< bool >::Invoke(targetMethod, ___worldAnchor0, ___located1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___worldAnchor0, ___located1);
						else
							VirtActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___worldAnchor0, ___located1);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (WorldAnchor_t2161774153 *, bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___worldAnchor0, ___located1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.WorldAnchor/OnTrackingChangedDelegate::BeginInvoke(UnityEngine.XR.WSA.WorldAnchor,System.Boolean,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* OnTrackingChangedDelegate_BeginInvoke_m969530128 (OnTrackingChangedDelegate_t3480415086 * __this, WorldAnchor_t2161774153 * ___worldAnchor0, bool ___located1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnTrackingChangedDelegate_BeginInvoke_m969530128_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___worldAnchor0;
	__d_args[1] = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &___located1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.XR.WSA.WorldAnchor/OnTrackingChangedDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void OnTrackingChangedDelegate_EndInvoke_m2717016340 (OnTrackingChangedDelegate_t3480415086 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.WSA.WorldManager::Internal_TriggerPositionalLocatorStateChanged(UnityEngine.XR.WSA.PositionalLocatorState,UnityEngine.XR.WSA.PositionalLocatorState)
extern "C" IL2CPP_METHOD_ATTR void WorldManager_Internal_TriggerPositionalLocatorStateChanged_m1968051306 (RuntimeObject * __this /* static, unused */, int32_t ___oldState0, int32_t ___newState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldManager_Internal_TriggerPositionalLocatorStateChanged_m1968051306_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnPositionalLocatorStateChangedDelegate_t1145932820 * L_0 = ((WorldManager_t2593341179_StaticFields*)il2cpp_codegen_static_fields_for(WorldManager_t2593341179_il2cpp_TypeInfo_var))->get_OnPositionalLocatorStateChanged_0();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		OnPositionalLocatorStateChangedDelegate_t1145932820 * L_1 = ((WorldManager_t2593341179_StaticFields*)il2cpp_codegen_static_fields_for(WorldManager_t2593341179_il2cpp_TypeInfo_var))->get_OnPositionalLocatorStateChanged_0();
		int32_t L_2 = ___oldState0;
		int32_t L_3 = ___newState1;
		NullCheck(L_1);
		OnPositionalLocatorStateChangedDelegate_Invoke_m3979255273(L_1, L_2, L_3, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_OnPositionalLocatorStateChangedDelegate_t1145932820 (OnPositionalLocatorStateChangedDelegate_t1145932820 * __this, int32_t ___oldState0, int32_t ___newState1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___oldState0, ___newState1);

}
// System.Void UnityEngine.XR.WSA.WorldManager/OnPositionalLocatorStateChangedDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void OnPositionalLocatorStateChangedDelegate__ctor_m1714032751 (OnPositionalLocatorStateChangedDelegate_t1145932820 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.WorldManager/OnPositionalLocatorStateChangedDelegate::Invoke(UnityEngine.XR.WSA.PositionalLocatorState,UnityEngine.XR.WSA.PositionalLocatorState)
extern "C" IL2CPP_METHOD_ATTR void OnPositionalLocatorStateChangedDelegate_Invoke_m3979255273 (OnPositionalLocatorStateChangedDelegate_t1145932820 * __this, int32_t ___oldState0, int32_t ___newState1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
				{
					// open
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, int32_t, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___oldState0, ___newState1, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, int32_t, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___oldState0, ___newState1, targetMethod);
					}
				}
			}
			else
			{
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker2< int32_t, int32_t >::Invoke(targetMethod, targetThis, ___oldState0, ___newState1);
							else
								GenericVirtActionInvoker2< int32_t, int32_t >::Invoke(targetMethod, targetThis, ___oldState0, ___newState1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker2< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___oldState0, ___newState1);
							else
								VirtActionInvoker2< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___oldState0, ___newState1);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, int32_t, int32_t, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___oldState0, ___newState1, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
			{
				// open
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___oldState0, ___newState1, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___oldState0, ___newState1, targetMethod);
				}
			}
		}
		else
		{
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker2< int32_t, int32_t >::Invoke(targetMethod, targetThis, ___oldState0, ___newState1);
						else
							GenericVirtActionInvoker2< int32_t, int32_t >::Invoke(targetMethod, targetThis, ___oldState0, ___newState1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker2< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___oldState0, ___newState1);
						else
							VirtActionInvoker2< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___oldState0, ___newState1);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___oldState0, ___newState1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.WorldManager/OnPositionalLocatorStateChangedDelegate::BeginInvoke(UnityEngine.XR.WSA.PositionalLocatorState,UnityEngine.XR.WSA.PositionalLocatorState,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* OnPositionalLocatorStateChangedDelegate_BeginInvoke_m118329416 (OnPositionalLocatorStateChangedDelegate_t1145932820 * __this, int32_t ___oldState0, int32_t ___newState1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnPositionalLocatorStateChangedDelegate_BeginInvoke_m118329416_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(PositionalLocatorState_t1296119239_il2cpp_TypeInfo_var, &___oldState0);
	__d_args[1] = Box(PositionalLocatorState_t1296119239_il2cpp_TypeInfo_var, &___newState1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.XR.WSA.WorldManager/OnPositionalLocatorStateChangedDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void OnPositionalLocatorStateChangedDelegate_EndInvoke_m2665878330 (OnPositionalLocatorStateChangedDelegate_t1145932820 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
