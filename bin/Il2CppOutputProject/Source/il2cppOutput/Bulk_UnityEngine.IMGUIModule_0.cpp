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

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Action
struct Action_t1264377477;
// System.Action`1<UnityEngine.Font>
struct Action_1_t2129269699;
// System.ArgumentException
struct ArgumentException_t132251570;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>[]
struct EntryU5BU5D_t1674866966;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.GUIStyle>[]
struct EntryU5BU5D_t1986487551;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
struct KeyCollection_t3451665974;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.GUIStyle>
struct KeyCollection_t3931833281;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
struct ValueCollection_t683067525;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>
struct ValueCollection_t1163234832;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1968819495;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
struct Dictionary_2_t3261990503;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct Dictionary_2_t3742157810;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t763310475;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>
struct List_1_t391719016;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t3923495619;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Delegate
struct Delegate_t1188392813;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.Exception
struct Exception_t;
// System.Func`2<System.Exception,System.Boolean>
struct Func_2_t3450341358;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t3759279471;
// System.Func`3<System.Int32,System.IntPtr,System.Boolean>
struct Func_3_t4119323734;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Reflection.Binder
struct Binder_t2999457153;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Void
struct Void_t1185182177;
// UnityEngine.Event
struct Event_t2956885303;
// UnityEngine.Font
struct Font_t1956802104;
// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_t2467502454;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t3146511083;
// UnityEngine.GUIContent
struct GUIContent_t3050628031;
// UnityEngine.GUILayoutEntry
struct GUILayoutEntry_t3214611570;
// UnityEngine.GUILayoutEntry[]
struct GUILayoutEntryU5BU5D_t2079236487;
// UnityEngine.GUILayoutGroup
struct GUILayoutGroup_t2157789695;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t811797299;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t2510215842;
// UnityEngine.GUILayoutUtility/LayoutCache
struct LayoutCache_t78309876;
// UnityEngine.GUIScrollGroup
struct GUIScrollGroup_t1523329021;
// UnityEngine.GUISettings
struct GUISettings_t1774757634;
// UnityEngine.GUISkin
struct GUISkin_t1244372282;
// UnityEngine.GUISkin/SkinChangedDelegate
struct SkinChangedDelegate_t1143955295;
// UnityEngine.GUIStyle
struct GUIStyle_t3956901511;
// UnityEngine.GUIStyleState
struct GUIStyleState_t1397964415;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t2383250302;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.RectOffset
struct RectOffset_t1369453676;
// UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522;
// UnityEngine.ScrollViewState
struct ScrollViewState_t3797911395;
// UnityEngine.SliderState
struct SliderState_t2207048770;
// UnityEngine.TextEditor
struct TextEditor_t2759855366;
// UnityEngine.Texture
struct Texture_t3661962703;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t731888065;
// UnityEngineInternal.GenericStack
struct GenericStack_t1310059385;

extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern RuntimeClass* DateTime_t3738529785_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t3261990503_il2cpp_TypeInfo_var;
extern RuntimeClass* EventModifiers_t2016417398_il2cpp_TypeInfo_var;
extern RuntimeClass* EventType_t3528516131_il2cpp_TypeInfo_var;
extern RuntimeClass* Event_t2956885303_il2cpp_TypeInfo_var;
extern RuntimeClass* ExitGUIException_t133215258_il2cpp_TypeInfo_var;
extern RuntimeClass* GUIContent_t3050628031_il2cpp_TypeInfo_var;
extern RuntimeClass* GUILayoutEntry_t3214611570_il2cpp_TypeInfo_var;
extern RuntimeClass* GUILayoutGroup_t2157789695_il2cpp_TypeInfo_var;
extern RuntimeClass* GUILayoutOptionU5BU5D_t2510215842_il2cpp_TypeInfo_var;
extern RuntimeClass* GUILayoutOption_t811797299_il2cpp_TypeInfo_var;
extern RuntimeClass* GUILayoutUtility_t66395690_il2cpp_TypeInfo_var;
extern RuntimeClass* GUISettings_t1774757634_il2cpp_TypeInfo_var;
extern RuntimeClass* GUISkin_t1244372282_il2cpp_TypeInfo_var;
extern RuntimeClass* GUIStyleU5BU5D_t2383250302_il2cpp_TypeInfo_var;
extern RuntimeClass* GUIStyle_t3956901511_il2cpp_TypeInfo_var;
extern RuntimeClass* GUIUtility_t1868551600_il2cpp_TypeInfo_var;
extern RuntimeClass* GUI_t1624858472_il2cpp_TypeInfo_var;
extern RuntimeClass* GenericStack_t1310059385_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyCode_t2599294277_il2cpp_TypeInfo_var;
extern RuntimeClass* LayoutCache_t78309876_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t391719016_il2cpp_TypeInfo_var;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* RectOffset_t1369453676_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* TargetInvocationException_t4266643902_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1207742195;
extern String_t* _stringLiteral1262317653;
extern String_t* _stringLiteral1420157070;
extern String_t* _stringLiteral1602229408;
extern String_t* _stringLiteral1704952932;
extern String_t* _stringLiteral2075829449;
extern String_t* _stringLiteral2081353410;
extern String_t* _stringLiteral2110742732;
extern String_t* _stringLiteral212333324;
extern String_t* _stringLiteral2737274358;
extern String_t* _stringLiteral2886375297;
extern String_t* _stringLiteral2956319655;
extern String_t* _stringLiteral3173274056;
extern String_t* _stringLiteral3186493525;
extern String_t* _stringLiteral3452614528;
extern String_t* _stringLiteral3452614531;
extern String_t* _stringLiteral3452614533;
extern String_t* _stringLiteral3452614566;
extern String_t* _stringLiteral3452614611;
extern String_t* _stringLiteral3544956457;
extern String_t* _stringLiteral3787516126;
extern String_t* _stringLiteral4166749152;
extern String_t* _stringLiteral4199752235;
extern String_t* _stringLiteral4223655990;
extern String_t* _stringLiteral495249995;
extern String_t* _stringLiteral7432421;
extern String_t* _stringLiteral7457329;
extern String_t* _stringLiteral757602046;
extern String_t* _stringLiteral775122699;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m4148288222_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m610848861_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m2818144_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m3494652212_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m2324433341_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m2663170093_RuntimeMethod_var;
extern const RuntimeMethod* Func_2_Invoke_m2401667781_RuntimeMethod_var;
extern const RuntimeMethod* Func_3_Invoke_m4134091626_RuntimeMethod_var;
extern const RuntimeMethod* GUIUtility_CheckOnGUI_m3924092168_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m1934946323_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m1360362241_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m1057782749_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m3839229424_RuntimeMethod_var;
extern const RuntimeMethod* Stack_1_Clear_m2415304221_RuntimeMethod_var;
extern const RuntimeMethod* Stack_1_Push_m1669856732_RuntimeMethod_var;
extern const uint32_t Event_Equals_m321840542_MetadataUsageId;
extern const uint32_t Event_Finalize_m2235592665_MetadataUsageId;
extern const uint32_t Event_Internal_MakeMasterEventCurrent_m112421958_MetadataUsageId;
extern const uint32_t Event_ToString_m1688862299_MetadataUsageId;
extern const uint32_t Event_get_current_m2393892120_MetadataUsageId;
extern const uint32_t GUIContent_ClearStaticCache_m1205116045_MetadataUsageId;
extern const uint32_t GUIContent__cctor_m3964999451_MetadataUsageId;
extern const uint32_t GUIContent__ctor_m2166411317_MetadataUsageId;
extern const uint32_t GUIContent__ctor_m3360759894_MetadataUsageId;
extern const uint32_t GUIContent__ctor_m890195579_MetadataUsageId;
extern const uint32_t GUILayoutEntry_ApplyOptions_m1741659338_MetadataUsageId;
extern const uint32_t GUILayoutEntry_ToString_m3366663569_MetadataUsageId;
extern const uint32_t GUILayoutEntry__cctor_m663865902_MetadataUsageId;
extern const uint32_t GUILayoutEntry__ctor_m2229197035_MetadataUsageId;
extern const uint32_t GUILayoutGroup_ApplyOptions_m2649434325_MetadataUsageId;
extern const uint32_t GUILayoutGroup_CalcHeight_m1669391299_MetadataUsageId;
extern const uint32_t GUILayoutGroup_CalcWidth_m1389741370_MetadataUsageId;
extern const uint32_t GUILayoutGroup_SetHorizontal_m996475327_MetadataUsageId;
extern const uint32_t GUILayoutGroup_SetVertical_m2446642182_MetadataUsageId;
extern const uint32_t GUILayoutGroup_ToString_m3162736776_MetadataUsageId;
extern const uint32_t GUILayoutGroup__ctor_m3245996524_MetadataUsageId;
extern const uint32_t GUILayoutUtility_BeginWindow_m2240221150_MetadataUsageId;
extern const uint32_t GUILayoutUtility_Begin_m1358735224_MetadataUsageId;
extern const uint32_t GUILayoutUtility_Internal_GetWindowRect_m2131267775_MetadataUsageId;
extern const uint32_t GUILayoutUtility_Internal_MoveWindow_m3463958180_MetadataUsageId;
extern const uint32_t GUILayoutUtility_LayoutFreeGroup_m2955697397_MetadataUsageId;
extern const uint32_t GUILayoutUtility_LayoutFromEditorWindow_m2914699782_MetadataUsageId;
extern const uint32_t GUILayoutUtility_LayoutSingleGroup_m700786689_MetadataUsageId;
extern const uint32_t GUILayoutUtility_Layout_m1159951704_MetadataUsageId;
extern const uint32_t GUILayoutUtility_SelectIDList_m294753167_MetadataUsageId;
extern const uint32_t GUILayoutUtility__cctor_m554256666_MetadataUsageId;
extern const uint32_t GUILayoutUtility_get_spaceStyle_m3392862907_MetadataUsageId;
extern const uint32_t GUILayout_Height_m3349769634_MetadataUsageId;
extern const uint32_t GUILayout_Width_m1777696537_MetadataUsageId;
extern const uint32_t GUISkin_MakeCurrent_m3239192349_MetadataUsageId;
extern const uint32_t GUISkin__ctor_m3576427628_MetadataUsageId;
extern const uint32_t GUIStyleState_Finalize_m1466589588_MetadataUsageId;
extern const uint32_t GUIStyle_Finalize_m1912900812_MetadataUsageId;
extern const uint32_t GUIStyle_ToString_m3014660435_MetadataUsageId;
extern const uint32_t GUIStyle__cctor_m3477697449_MetadataUsageId;
extern const uint32_t GUIStyle__ctor_m4038363858_MetadataUsageId;
extern const uint32_t GUIStyle_get_margin_m3595798603_MetadataUsageId;
extern const uint32_t GUIStyle_get_none_m1545577352_MetadataUsageId;
extern const uint32_t GUIStyle_get_padding_m3526264743_MetadataUsageId;
extern const uint32_t GUIUtility_BeginGUI_m1428629348_MetadataUsageId;
extern const uint32_t GUIUtility_CheckOnGUI_m3924092168_MetadataUsageId;
extern const uint32_t GUIUtility_EndContainerGUIFromException_m530164245_MetadataUsageId;
extern const uint32_t GUIUtility_EndGUI_m1799980929_MetadataUsageId;
extern const uint32_t GUIUtility_GetDefaultSkin_m1141001896_MetadataUsageId;
extern const uint32_t GUIUtility_IsExitGUIException_m3644066650_MetadataUsageId;
extern const uint32_t GUIUtility_ProcessEvent_m3254259822_MetadataUsageId;
extern const uint32_t GUIUtility_RemoveCapture_m1294193818_MetadataUsageId;
extern const uint32_t GUIUtility_ResetGlobalState_m2426294461_MetadataUsageId;
extern const uint32_t GUIUtility_TakeCapture_m1130863121_MetadataUsageId;
extern const uint32_t GUIUtility_set_guiIsExiting_m1558910088_MetadataUsageId;
extern const uint32_t GUI_CallWindowDelegate_m3309453386_MetadataUsageId;
extern const uint32_t GUI_DoSetSkin_m604425702_MetadataUsageId;
extern const uint32_t GUI__cctor_m3051457990_MetadataUsageId;
extern const uint32_t GUI_get_skin_m1874615010_MetadataUsageId;
extern const uint32_t GUI_set_nextScrollStepTime_m1026410471_MetadataUsageId;
extern const uint32_t GUI_set_skin_m3073574632_MetadataUsageId;
extern const uint32_t LayoutCache__ctor_m3885940174_MetadataUsageId;
extern const uint32_t TextEditor__ctor_m242049450_MetadataUsageId;
extern const uint32_t WindowFunction_BeginInvoke_m3381614433_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct GUIStyleState_t1397964415;;
struct GUIStyleState_t1397964415_marshaled_com;
struct GUIStyleState_t1397964415_marshaled_com;;
struct GUIStyleState_t1397964415_marshaled_pinvoke;
struct GUIStyleState_t1397964415_marshaled_pinvoke;;
struct GUIStyle_t3956901511;;
struct GUIStyle_t3956901511_marshaled_com;
struct GUIStyle_t3956901511_marshaled_com;;
struct GUIStyle_t3956901511_marshaled_pinvoke;
struct GUIStyle_t3956901511_marshaled_pinvoke;;
struct RectOffset_t1369453676;;
struct RectOffset_t1369453676_marshaled_com;
struct RectOffset_t1369453676_marshaled_com;;
struct RectOffset_t1369453676_marshaled_pinvoke;
struct RectOffset_t1369453676_marshaled_pinvoke;;

struct DelegateU5BU5D_t1703627840;
struct ObjectU5BU5D_t2843939325;
struct GUILayoutOptionU5BU5D_t2510215842;
struct GUIStyleU5BU5D_t2383250302;


#ifndef U3CMODULEU3E_T692745536_H
#define U3CMODULEU3E_T692745536_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745536 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745536_H
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
#ifndef ATTRIBUTE_T861562559_H
#define ATTRIBUTE_T861562559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t861562559  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T861562559_H
#ifndef DICTIONARY_2_T3261990503_H
#define DICTIONARY_2_T3261990503_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
struct  Dictionary_2_t3261990503  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t385246372* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t1674866966* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t3451665974 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t683067525 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t3261990503, ___buckets_0)); }
	inline Int32U5BU5D_t385246372* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t385246372** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t385246372* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t3261990503, ___entries_1)); }
	inline EntryU5BU5D_t1674866966* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t1674866966** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t1674866966* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t3261990503, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t3261990503, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3261990503, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3261990503, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3261990503, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3261990503, ___keys_7)); }
	inline KeyCollection_t3451665974 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t3451665974 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t3451665974 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3261990503, ___values_8)); }
	inline ValueCollection_t683067525 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t683067525 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t683067525 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3261990503, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T3261990503_H
#ifndef DICTIONARY_2_T3742157810_H
#define DICTIONARY_2_T3742157810_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct  Dictionary_2_t3742157810  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t385246372* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t1986487551* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t3931833281 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t1163234832 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t3742157810, ___buckets_0)); }
	inline Int32U5BU5D_t385246372* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t385246372** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t385246372* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t3742157810, ___entries_1)); }
	inline EntryU5BU5D_t1986487551* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t1986487551** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t1986487551* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t3742157810, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t3742157810, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3742157810, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3742157810, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3742157810, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3742157810, ___keys_7)); }
	inline KeyCollection_t3931833281 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t3931833281 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t3931833281 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3742157810, ___values_8)); }
	inline ValueCollection_t1163234832 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t1163234832 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t1163234832 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3742157810, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T3742157810_H
#ifndef LIST_1_T391719016_H
#define LIST_1_T391719016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>
struct  List_1_t391719016  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GUILayoutEntryU5BU5D_t2079236487* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t391719016, ____items_1)); }
	inline GUILayoutEntryU5BU5D_t2079236487* get__items_1() const { return ____items_1; }
	inline GUILayoutEntryU5BU5D_t2079236487** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GUILayoutEntryU5BU5D_t2079236487* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t391719016, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t391719016, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t391719016, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t391719016_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GUILayoutEntryU5BU5D_t2079236487* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t391719016_StaticFields, ____emptyArray_5)); }
	inline GUILayoutEntryU5BU5D_t2079236487* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GUILayoutEntryU5BU5D_t2079236487** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GUILayoutEntryU5BU5D_t2079236487* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T391719016_H
#ifndef STACK_1_T3923495619_H
#define STACK_1_T3923495619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Stack`1<System.Object>
struct  Stack_1_t3923495619  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	ObjectU5BU5D_t2843939325* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t3923495619, ____array_0)); }
	inline ObjectU5BU5D_t2843939325* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_t2843939325** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_t2843939325* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t3923495619, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t3923495619, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_1_t3923495619, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACK_1_T3923495619_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4013366056* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t2481557153 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t2481557153 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t2481557153 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t1169129676* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t1169129676** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t1169129676* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4013366056* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4013366056* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
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
#ifndef GUICONTENT_T3050628031_H
#define GUICONTENT_T3050628031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIContent
struct  GUIContent_t3050628031  : public RuntimeObject
{
public:
	// System.String UnityEngine.GUIContent::m_Text
	String_t* ___m_Text_0;
	// UnityEngine.Texture UnityEngine.GUIContent::m_Image
	Texture_t3661962703 * ___m_Image_1;
	// System.String UnityEngine.GUIContent::m_Tooltip
	String_t* ___m_Tooltip_2;

public:
	inline static int32_t get_offset_of_m_Text_0() { return static_cast<int32_t>(offsetof(GUIContent_t3050628031, ___m_Text_0)); }
	inline String_t* get_m_Text_0() const { return ___m_Text_0; }
	inline String_t** get_address_of_m_Text_0() { return &___m_Text_0; }
	inline void set_m_Text_0(String_t* value)
	{
		___m_Text_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_0), value);
	}

	inline static int32_t get_offset_of_m_Image_1() { return static_cast<int32_t>(offsetof(GUIContent_t3050628031, ___m_Image_1)); }
	inline Texture_t3661962703 * get_m_Image_1() const { return ___m_Image_1; }
	inline Texture_t3661962703 ** get_address_of_m_Image_1() { return &___m_Image_1; }
	inline void set_m_Image_1(Texture_t3661962703 * value)
	{
		___m_Image_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Image_1), value);
	}

	inline static int32_t get_offset_of_m_Tooltip_2() { return static_cast<int32_t>(offsetof(GUIContent_t3050628031, ___m_Tooltip_2)); }
	inline String_t* get_m_Tooltip_2() const { return ___m_Tooltip_2; }
	inline String_t** get_address_of_m_Tooltip_2() { return &___m_Tooltip_2; }
	inline void set_m_Tooltip_2(String_t* value)
	{
		___m_Tooltip_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Tooltip_2), value);
	}
};

struct GUIContent_t3050628031_StaticFields
{
public:
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Text
	GUIContent_t3050628031 * ___s_Text_3;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Image
	GUIContent_t3050628031 * ___s_Image_4;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_TextImage
	GUIContent_t3050628031 * ___s_TextImage_5;
	// UnityEngine.GUIContent UnityEngine.GUIContent::none
	GUIContent_t3050628031 * ___none_6;

public:
	inline static int32_t get_offset_of_s_Text_3() { return static_cast<int32_t>(offsetof(GUIContent_t3050628031_StaticFields, ___s_Text_3)); }
	inline GUIContent_t3050628031 * get_s_Text_3() const { return ___s_Text_3; }
	inline GUIContent_t3050628031 ** get_address_of_s_Text_3() { return &___s_Text_3; }
	inline void set_s_Text_3(GUIContent_t3050628031 * value)
	{
		___s_Text_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_Text_3), value);
	}

	inline static int32_t get_offset_of_s_Image_4() { return static_cast<int32_t>(offsetof(GUIContent_t3050628031_StaticFields, ___s_Image_4)); }
	inline GUIContent_t3050628031 * get_s_Image_4() const { return ___s_Image_4; }
	inline GUIContent_t3050628031 ** get_address_of_s_Image_4() { return &___s_Image_4; }
	inline void set_s_Image_4(GUIContent_t3050628031 * value)
	{
		___s_Image_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_Image_4), value);
	}

	inline static int32_t get_offset_of_s_TextImage_5() { return static_cast<int32_t>(offsetof(GUIContent_t3050628031_StaticFields, ___s_TextImage_5)); }
	inline GUIContent_t3050628031 * get_s_TextImage_5() const { return ___s_TextImage_5; }
	inline GUIContent_t3050628031 ** get_address_of_s_TextImage_5() { return &___s_TextImage_5; }
	inline void set_s_TextImage_5(GUIContent_t3050628031 * value)
	{
		___s_TextImage_5 = value;
		Il2CppCodeGenWriteBarrier((&___s_TextImage_5), value);
	}

	inline static int32_t get_offset_of_none_6() { return static_cast<int32_t>(offsetof(GUIContent_t3050628031_StaticFields, ___none_6)); }
	inline GUIContent_t3050628031 * get_none_6() const { return ___none_6; }
	inline GUIContent_t3050628031 ** get_address_of_none_6() { return &___none_6; }
	inline void set_none_6(GUIContent_t3050628031 * value)
	{
		___none_6 = value;
		Il2CppCodeGenWriteBarrier((&___none_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.GUIContent
struct GUIContent_t3050628031_marshaled_pinvoke
{
	char* ___m_Text_0;
	Texture_t3661962703 * ___m_Image_1;
	char* ___m_Tooltip_2;
};
// Native definition for COM marshalling of UnityEngine.GUIContent
struct GUIContent_t3050628031_marshaled_com
{
	Il2CppChar* ___m_Text_0;
	Texture_t3661962703 * ___m_Image_1;
	Il2CppChar* ___m_Tooltip_2;
};
#endif // GUICONTENT_T3050628031_H
#ifndef GUILAYOUT_T3503650450_H
#define GUILAYOUT_T3503650450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayout
struct  GUILayout_t3503650450  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUILAYOUT_T3503650450_H
#ifndef LAYOUTCACHE_T78309876_H
#define LAYOUTCACHE_T78309876_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayoutUtility/LayoutCache
struct  LayoutCache_t78309876  : public RuntimeObject
{
public:
	// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility/LayoutCache::topLevel
	GUILayoutGroup_t2157789695 * ___topLevel_0;
	// UnityEngineInternal.GenericStack UnityEngine.GUILayoutUtility/LayoutCache::layoutGroups
	GenericStack_t1310059385 * ___layoutGroups_1;
	// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility/LayoutCache::windows
	GUILayoutGroup_t2157789695 * ___windows_2;

public:
	inline static int32_t get_offset_of_topLevel_0() { return static_cast<int32_t>(offsetof(LayoutCache_t78309876, ___topLevel_0)); }
	inline GUILayoutGroup_t2157789695 * get_topLevel_0() const { return ___topLevel_0; }
	inline GUILayoutGroup_t2157789695 ** get_address_of_topLevel_0() { return &___topLevel_0; }
	inline void set_topLevel_0(GUILayoutGroup_t2157789695 * value)
	{
		___topLevel_0 = value;
		Il2CppCodeGenWriteBarrier((&___topLevel_0), value);
	}

	inline static int32_t get_offset_of_layoutGroups_1() { return static_cast<int32_t>(offsetof(LayoutCache_t78309876, ___layoutGroups_1)); }
	inline GenericStack_t1310059385 * get_layoutGroups_1() const { return ___layoutGroups_1; }
	inline GenericStack_t1310059385 ** get_address_of_layoutGroups_1() { return &___layoutGroups_1; }
	inline void set_layoutGroups_1(GenericStack_t1310059385 * value)
	{
		___layoutGroups_1 = value;
		Il2CppCodeGenWriteBarrier((&___layoutGroups_1), value);
	}

	inline static int32_t get_offset_of_windows_2() { return static_cast<int32_t>(offsetof(LayoutCache_t78309876, ___windows_2)); }
	inline GUILayoutGroup_t2157789695 * get_windows_2() const { return ___windows_2; }
	inline GUILayoutGroup_t2157789695 ** get_address_of_windows_2() { return &___windows_2; }
	inline void set_windows_2(GUILayoutGroup_t2157789695 * value)
	{
		___windows_2 = value;
		Il2CppCodeGenWriteBarrier((&___windows_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAYOUTCACHE_T78309876_H
#ifndef GUIUTILITY_T1868551600_H
#define GUIUTILITY_T1868551600_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIUtility
struct  GUIUtility_t1868551600  : public RuntimeObject
{
public:

public:
};

struct GUIUtility_t1868551600_StaticFields
{
public:
	// System.Int32 UnityEngine.GUIUtility::s_SkinMode
	int32_t ___s_SkinMode_0;
	// System.Int32 UnityEngine.GUIUtility::s_OriginalID
	int32_t ___s_OriginalID_1;
	// System.Action UnityEngine.GUIUtility::takeCapture
	Action_t1264377477 * ___takeCapture_2;
	// System.Action UnityEngine.GUIUtility::releaseCapture
	Action_t1264377477 * ___releaseCapture_3;
	// System.Func`3<System.Int32,System.IntPtr,System.Boolean> UnityEngine.GUIUtility::processEvent
	Func_3_t4119323734 * ___processEvent_4;
	// System.Func`2<System.Exception,System.Boolean> UnityEngine.GUIUtility::endContainerGUIFromException
	Func_2_t3450341358 * ___endContainerGUIFromException_5;
	// System.Boolean UnityEngine.GUIUtility::<guiIsExiting>k__BackingField
	bool ___U3CguiIsExitingU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_s_SkinMode_0() { return static_cast<int32_t>(offsetof(GUIUtility_t1868551600_StaticFields, ___s_SkinMode_0)); }
	inline int32_t get_s_SkinMode_0() const { return ___s_SkinMode_0; }
	inline int32_t* get_address_of_s_SkinMode_0() { return &___s_SkinMode_0; }
	inline void set_s_SkinMode_0(int32_t value)
	{
		___s_SkinMode_0 = value;
	}

	inline static int32_t get_offset_of_s_OriginalID_1() { return static_cast<int32_t>(offsetof(GUIUtility_t1868551600_StaticFields, ___s_OriginalID_1)); }
	inline int32_t get_s_OriginalID_1() const { return ___s_OriginalID_1; }
	inline int32_t* get_address_of_s_OriginalID_1() { return &___s_OriginalID_1; }
	inline void set_s_OriginalID_1(int32_t value)
	{
		___s_OriginalID_1 = value;
	}

	inline static int32_t get_offset_of_takeCapture_2() { return static_cast<int32_t>(offsetof(GUIUtility_t1868551600_StaticFields, ___takeCapture_2)); }
	inline Action_t1264377477 * get_takeCapture_2() const { return ___takeCapture_2; }
	inline Action_t1264377477 ** get_address_of_takeCapture_2() { return &___takeCapture_2; }
	inline void set_takeCapture_2(Action_t1264377477 * value)
	{
		___takeCapture_2 = value;
		Il2CppCodeGenWriteBarrier((&___takeCapture_2), value);
	}

	inline static int32_t get_offset_of_releaseCapture_3() { return static_cast<int32_t>(offsetof(GUIUtility_t1868551600_StaticFields, ___releaseCapture_3)); }
	inline Action_t1264377477 * get_releaseCapture_3() const { return ___releaseCapture_3; }
	inline Action_t1264377477 ** get_address_of_releaseCapture_3() { return &___releaseCapture_3; }
	inline void set_releaseCapture_3(Action_t1264377477 * value)
	{
		___releaseCapture_3 = value;
		Il2CppCodeGenWriteBarrier((&___releaseCapture_3), value);
	}

	inline static int32_t get_offset_of_processEvent_4() { return static_cast<int32_t>(offsetof(GUIUtility_t1868551600_StaticFields, ___processEvent_4)); }
	inline Func_3_t4119323734 * get_processEvent_4() const { return ___processEvent_4; }
	inline Func_3_t4119323734 ** get_address_of_processEvent_4() { return &___processEvent_4; }
	inline void set_processEvent_4(Func_3_t4119323734 * value)
	{
		___processEvent_4 = value;
		Il2CppCodeGenWriteBarrier((&___processEvent_4), value);
	}

	inline static int32_t get_offset_of_endContainerGUIFromException_5() { return static_cast<int32_t>(offsetof(GUIUtility_t1868551600_StaticFields, ___endContainerGUIFromException_5)); }
	inline Func_2_t3450341358 * get_endContainerGUIFromException_5() const { return ___endContainerGUIFromException_5; }
	inline Func_2_t3450341358 ** get_address_of_endContainerGUIFromException_5() { return &___endContainerGUIFromException_5; }
	inline void set_endContainerGUIFromException_5(Func_2_t3450341358 * value)
	{
		___endContainerGUIFromException_5 = value;
		Il2CppCodeGenWriteBarrier((&___endContainerGUIFromException_5), value);
	}

	inline static int32_t get_offset_of_U3CguiIsExitingU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(GUIUtility_t1868551600_StaticFields, ___U3CguiIsExitingU3Ek__BackingField_6)); }
	inline bool get_U3CguiIsExitingU3Ek__BackingField_6() const { return ___U3CguiIsExitingU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CguiIsExitingU3Ek__BackingField_6() { return &___U3CguiIsExitingU3Ek__BackingField_6; }
	inline void set_U3CguiIsExitingU3Ek__BackingField_6(bool value)
	{
		___U3CguiIsExitingU3Ek__BackingField_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIUTILITY_T1868551600_H
#ifndef SCROLLVIEWSTATE_T3797911395_H
#define SCROLLVIEWSTATE_T3797911395_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScrollViewState
struct  ScrollViewState_t3797911395  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCROLLVIEWSTATE_T3797911395_H
#ifndef SLIDERSTATE_T2207048770_H
#define SLIDERSTATE_T2207048770_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SliderState
struct  SliderState_t2207048770  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SLIDERSTATE_T2207048770_H
#ifndef APPLICATIONEXCEPTION_T2339761290_H
#define APPLICATIONEXCEPTION_T2339761290_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ApplicationException
struct  ApplicationException_t2339761290  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATIONEXCEPTION_T2339761290_H
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
#ifndef CHAR_T3634460470_H
#define CHAR_T3634460470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3634460470 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_t4116647657* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_t4116647657* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_t4116647657* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((&___categoryForLatin1_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
#ifndef ENUMERATOR_T2146457487_H
#define ENUMERATOR_T2146457487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_t2146457487 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t257213610 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___list_0)); }
	inline List_1_t257213610 * get_list_0() const { return ___list_0; }
	inline List_1_t257213610 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t257213610 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2146457487_H
#ifndef ENUMERATOR_T2280962893_H
#define ENUMERATOR_T2280962893_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>
struct  Enumerator_t2280962893 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t391719016 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	GUILayoutEntry_t3214611570 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t2280962893, ___list_0)); }
	inline List_1_t391719016 * get_list_0() const { return ___list_0; }
	inline List_1_t391719016 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t391719016 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t2280962893, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t2280962893, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2280962893, ___current_3)); }
	inline GUILayoutEntry_t3214611570 * get_current_3() const { return ___current_3; }
	inline GUILayoutEntry_t3214611570 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(GUILayoutEntry_t3214611570 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2280962893_H
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
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
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
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef EXITGUIEXCEPTION_T133215258_H
#define EXITGUIEXCEPTION_T133215258_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ExitGUIException
struct  ExitGUIException_t133215258  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXITGUIEXCEPTION_T133215258_H
#ifndef GUITARGETATTRIBUTE_T25796337_H
#define GUITARGETATTRIBUTE_T25796337_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUITargetAttribute
struct  GUITargetAttribute_t25796337  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUITARGETATTRIBUTE_T25796337_H
#ifndef RECT_T2360479859_H
#define RECT_T2360479859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t2360479859 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2360479859_H
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
#ifndef GENERICSTACK_T1310059385_H
#define GENERICSTACK_T1310059385_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.GenericStack
struct  GenericStack_t1310059385  : public Stack_1_t3923495619
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICSTACK_T1310059385_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_paramName_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
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
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___2)); }
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
#endif // BINDINGFLAGS_T2721792723_H
#ifndef TARGETINVOCATIONEXCEPTION_T4266643902_H
#define TARGETINVOCATIONEXCEPTION_T4266643902_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TargetInvocationException
struct  TargetInvocationException_t4266643902  : public ApplicationException_t2339761290
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TARGETINVOCATIONEXCEPTION_T4266643902_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef EVENT_T2956885303_H
#define EVENT_T2956885303_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Event
struct  Event_t2956885303  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Event::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Event_t2956885303, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

struct Event_t2956885303_StaticFields
{
public:
	// UnityEngine.Event UnityEngine.Event::s_Current
	Event_t2956885303 * ___s_Current_1;
	// UnityEngine.Event UnityEngine.Event::s_MasterEvent
	Event_t2956885303 * ___s_MasterEvent_2;

public:
	inline static int32_t get_offset_of_s_Current_1() { return static_cast<int32_t>(offsetof(Event_t2956885303_StaticFields, ___s_Current_1)); }
	inline Event_t2956885303 * get_s_Current_1() const { return ___s_Current_1; }
	inline Event_t2956885303 ** get_address_of_s_Current_1() { return &___s_Current_1; }
	inline void set_s_Current_1(Event_t2956885303 * value)
	{
		___s_Current_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_Current_1), value);
	}

	inline static int32_t get_offset_of_s_MasterEvent_2() { return static_cast<int32_t>(offsetof(Event_t2956885303_StaticFields, ___s_MasterEvent_2)); }
	inline Event_t2956885303 * get_s_MasterEvent_2() const { return ___s_MasterEvent_2; }
	inline Event_t2956885303 ** get_address_of_s_MasterEvent_2() { return &___s_MasterEvent_2; }
	inline void set_s_MasterEvent_2(Event_t2956885303 * value)
	{
		___s_MasterEvent_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_MasterEvent_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Event
struct Event_t2956885303_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Event
struct Event_t2956885303_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // EVENT_T2956885303_H
#ifndef EVENTMODIFIERS_T2016417398_H
#define EVENTMODIFIERS_T2016417398_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventModifiers
struct  EventModifiers_t2016417398 
{
public:
	// System.Int32 UnityEngine.EventModifiers::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventModifiers_t2016417398, ___value___2)); }
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
#endif // EVENTMODIFIERS_T2016417398_H
#ifndef EVENTTYPE_T3528516131_H
#define EVENTTYPE_T3528516131_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventType
struct  EventType_t3528516131 
{
public:
	// System.Int32 UnityEngine.EventType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventType_t3528516131, ___value___2)); }
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
#endif // EVENTTYPE_T3528516131_H
#ifndef GUI_T1624858472_H
#define GUI_T1624858472_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUI
struct  GUI_t1624858472  : public RuntimeObject
{
public:

public:
};

struct GUI_t1624858472_StaticFields
{
public:
	// System.Int32 UnityEngine.GUI::s_HotTextField
	int32_t ___s_HotTextField_0;
	// System.Int32 UnityEngine.GUI::s_BoxHash
	int32_t ___s_BoxHash_1;
	// System.Int32 UnityEngine.GUI::s_RepeatButtonHash
	int32_t ___s_RepeatButtonHash_2;
	// System.Int32 UnityEngine.GUI::s_ToggleHash
	int32_t ___s_ToggleHash_3;
	// System.Int32 UnityEngine.GUI::s_ButtonGridHash
	int32_t ___s_ButtonGridHash_4;
	// System.Int32 UnityEngine.GUI::s_SliderHash
	int32_t ___s_SliderHash_5;
	// System.Int32 UnityEngine.GUI::s_BeginGroupHash
	int32_t ___s_BeginGroupHash_6;
	// System.Int32 UnityEngine.GUI::s_ScrollviewHash
	int32_t ___s_ScrollviewHash_7;
	// System.DateTime UnityEngine.GUI::<nextScrollStepTime>k__BackingField
	DateTime_t3738529785  ___U3CnextScrollStepTimeU3Ek__BackingField_8;
	// UnityEngine.GUISkin UnityEngine.GUI::s_Skin
	GUISkin_t1244372282 * ___s_Skin_9;
	// UnityEngineInternal.GenericStack UnityEngine.GUI::s_ScrollViewStates
	GenericStack_t1310059385 * ___s_ScrollViewStates_10;

public:
	inline static int32_t get_offset_of_s_HotTextField_0() { return static_cast<int32_t>(offsetof(GUI_t1624858472_StaticFields, ___s_HotTextField_0)); }
	inline int32_t get_s_HotTextField_0() const { return ___s_HotTextField_0; }
	inline int32_t* get_address_of_s_HotTextField_0() { return &___s_HotTextField_0; }
	inline void set_s_HotTextField_0(int32_t value)
	{
		___s_HotTextField_0 = value;
	}

	inline static int32_t get_offset_of_s_BoxHash_1() { return static_cast<int32_t>(offsetof(GUI_t1624858472_StaticFields, ___s_BoxHash_1)); }
	inline int32_t get_s_BoxHash_1() const { return ___s_BoxHash_1; }
	inline int32_t* get_address_of_s_BoxHash_1() { return &___s_BoxHash_1; }
	inline void set_s_BoxHash_1(int32_t value)
	{
		___s_BoxHash_1 = value;
	}

	inline static int32_t get_offset_of_s_RepeatButtonHash_2() { return static_cast<int32_t>(offsetof(GUI_t1624858472_StaticFields, ___s_RepeatButtonHash_2)); }
	inline int32_t get_s_RepeatButtonHash_2() const { return ___s_RepeatButtonHash_2; }
	inline int32_t* get_address_of_s_RepeatButtonHash_2() { return &___s_RepeatButtonHash_2; }
	inline void set_s_RepeatButtonHash_2(int32_t value)
	{
		___s_RepeatButtonHash_2 = value;
	}

	inline static int32_t get_offset_of_s_ToggleHash_3() { return static_cast<int32_t>(offsetof(GUI_t1624858472_StaticFields, ___s_ToggleHash_3)); }
	inline int32_t get_s_ToggleHash_3() const { return ___s_ToggleHash_3; }
	inline int32_t* get_address_of_s_ToggleHash_3() { return &___s_ToggleHash_3; }
	inline void set_s_ToggleHash_3(int32_t value)
	{
		___s_ToggleHash_3 = value;
	}

	inline static int32_t get_offset_of_s_ButtonGridHash_4() { return static_cast<int32_t>(offsetof(GUI_t1624858472_StaticFields, ___s_ButtonGridHash_4)); }
	inline int32_t get_s_ButtonGridHash_4() const { return ___s_ButtonGridHash_4; }
	inline int32_t* get_address_of_s_ButtonGridHash_4() { return &___s_ButtonGridHash_4; }
	inline void set_s_ButtonGridHash_4(int32_t value)
	{
		___s_ButtonGridHash_4 = value;
	}

	inline static int32_t get_offset_of_s_SliderHash_5() { return static_cast<int32_t>(offsetof(GUI_t1624858472_StaticFields, ___s_SliderHash_5)); }
	inline int32_t get_s_SliderHash_5() const { return ___s_SliderHash_5; }
	inline int32_t* get_address_of_s_SliderHash_5() { return &___s_SliderHash_5; }
	inline void set_s_SliderHash_5(int32_t value)
	{
		___s_SliderHash_5 = value;
	}

	inline static int32_t get_offset_of_s_BeginGroupHash_6() { return static_cast<int32_t>(offsetof(GUI_t1624858472_StaticFields, ___s_BeginGroupHash_6)); }
	inline int32_t get_s_BeginGroupHash_6() const { return ___s_BeginGroupHash_6; }
	inline int32_t* get_address_of_s_BeginGroupHash_6() { return &___s_BeginGroupHash_6; }
	inline void set_s_BeginGroupHash_6(int32_t value)
	{
		___s_BeginGroupHash_6 = value;
	}

	inline static int32_t get_offset_of_s_ScrollviewHash_7() { return static_cast<int32_t>(offsetof(GUI_t1624858472_StaticFields, ___s_ScrollviewHash_7)); }
	inline int32_t get_s_ScrollviewHash_7() const { return ___s_ScrollviewHash_7; }
	inline int32_t* get_address_of_s_ScrollviewHash_7() { return &___s_ScrollviewHash_7; }
	inline void set_s_ScrollviewHash_7(int32_t value)
	{
		___s_ScrollviewHash_7 = value;
	}

	inline static int32_t get_offset_of_U3CnextScrollStepTimeU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(GUI_t1624858472_StaticFields, ___U3CnextScrollStepTimeU3Ek__BackingField_8)); }
	inline DateTime_t3738529785  get_U3CnextScrollStepTimeU3Ek__BackingField_8() const { return ___U3CnextScrollStepTimeU3Ek__BackingField_8; }
	inline DateTime_t3738529785 * get_address_of_U3CnextScrollStepTimeU3Ek__BackingField_8() { return &___U3CnextScrollStepTimeU3Ek__BackingField_8; }
	inline void set_U3CnextScrollStepTimeU3Ek__BackingField_8(DateTime_t3738529785  value)
	{
		___U3CnextScrollStepTimeU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_s_Skin_9() { return static_cast<int32_t>(offsetof(GUI_t1624858472_StaticFields, ___s_Skin_9)); }
	inline GUISkin_t1244372282 * get_s_Skin_9() const { return ___s_Skin_9; }
	inline GUISkin_t1244372282 ** get_address_of_s_Skin_9() { return &___s_Skin_9; }
	inline void set_s_Skin_9(GUISkin_t1244372282 * value)
	{
		___s_Skin_9 = value;
		Il2CppCodeGenWriteBarrier((&___s_Skin_9), value);
	}

	inline static int32_t get_offset_of_s_ScrollViewStates_10() { return static_cast<int32_t>(offsetof(GUI_t1624858472_StaticFields, ___s_ScrollViewStates_10)); }
	inline GenericStack_t1310059385 * get_s_ScrollViewStates_10() const { return ___s_ScrollViewStates_10; }
	inline GenericStack_t1310059385 ** get_address_of_s_ScrollViewStates_10() { return &___s_ScrollViewStates_10; }
	inline void set_s_ScrollViewStates_10(GenericStack_t1310059385 * value)
	{
		___s_ScrollViewStates_10 = value;
		Il2CppCodeGenWriteBarrier((&___s_ScrollViewStates_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUI_T1624858472_H
#ifndef GUILAYOUTENTRY_T3214611570_H
#define GUILAYOUTENTRY_T3214611570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayoutEntry
struct  GUILayoutEntry_t3214611570  : public RuntimeObject
{
public:
	// System.Single UnityEngine.GUILayoutEntry::minWidth
	float ___minWidth_0;
	// System.Single UnityEngine.GUILayoutEntry::maxWidth
	float ___maxWidth_1;
	// System.Single UnityEngine.GUILayoutEntry::minHeight
	float ___minHeight_2;
	// System.Single UnityEngine.GUILayoutEntry::maxHeight
	float ___maxHeight_3;
	// UnityEngine.Rect UnityEngine.GUILayoutEntry::rect
	Rect_t2360479859  ___rect_4;
	// System.Int32 UnityEngine.GUILayoutEntry::stretchWidth
	int32_t ___stretchWidth_5;
	// System.Int32 UnityEngine.GUILayoutEntry::stretchHeight
	int32_t ___stretchHeight_6;
	// UnityEngine.GUIStyle UnityEngine.GUILayoutEntry::m_Style
	GUIStyle_t3956901511 * ___m_Style_7;

public:
	inline static int32_t get_offset_of_minWidth_0() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t3214611570, ___minWidth_0)); }
	inline float get_minWidth_0() const { return ___minWidth_0; }
	inline float* get_address_of_minWidth_0() { return &___minWidth_0; }
	inline void set_minWidth_0(float value)
	{
		___minWidth_0 = value;
	}

	inline static int32_t get_offset_of_maxWidth_1() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t3214611570, ___maxWidth_1)); }
	inline float get_maxWidth_1() const { return ___maxWidth_1; }
	inline float* get_address_of_maxWidth_1() { return &___maxWidth_1; }
	inline void set_maxWidth_1(float value)
	{
		___maxWidth_1 = value;
	}

	inline static int32_t get_offset_of_minHeight_2() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t3214611570, ___minHeight_2)); }
	inline float get_minHeight_2() const { return ___minHeight_2; }
	inline float* get_address_of_minHeight_2() { return &___minHeight_2; }
	inline void set_minHeight_2(float value)
	{
		___minHeight_2 = value;
	}

	inline static int32_t get_offset_of_maxHeight_3() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t3214611570, ___maxHeight_3)); }
	inline float get_maxHeight_3() const { return ___maxHeight_3; }
	inline float* get_address_of_maxHeight_3() { return &___maxHeight_3; }
	inline void set_maxHeight_3(float value)
	{
		___maxHeight_3 = value;
	}

	inline static int32_t get_offset_of_rect_4() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t3214611570, ___rect_4)); }
	inline Rect_t2360479859  get_rect_4() const { return ___rect_4; }
	inline Rect_t2360479859 * get_address_of_rect_4() { return &___rect_4; }
	inline void set_rect_4(Rect_t2360479859  value)
	{
		___rect_4 = value;
	}

	inline static int32_t get_offset_of_stretchWidth_5() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t3214611570, ___stretchWidth_5)); }
	inline int32_t get_stretchWidth_5() const { return ___stretchWidth_5; }
	inline int32_t* get_address_of_stretchWidth_5() { return &___stretchWidth_5; }
	inline void set_stretchWidth_5(int32_t value)
	{
		___stretchWidth_5 = value;
	}

	inline static int32_t get_offset_of_stretchHeight_6() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t3214611570, ___stretchHeight_6)); }
	inline int32_t get_stretchHeight_6() const { return ___stretchHeight_6; }
	inline int32_t* get_address_of_stretchHeight_6() { return &___stretchHeight_6; }
	inline void set_stretchHeight_6(int32_t value)
	{
		___stretchHeight_6 = value;
	}

	inline static int32_t get_offset_of_m_Style_7() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t3214611570, ___m_Style_7)); }
	inline GUIStyle_t3956901511 * get_m_Style_7() const { return ___m_Style_7; }
	inline GUIStyle_t3956901511 ** get_address_of_m_Style_7() { return &___m_Style_7; }
	inline void set_m_Style_7(GUIStyle_t3956901511 * value)
	{
		___m_Style_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_Style_7), value);
	}
};

struct GUILayoutEntry_t3214611570_StaticFields
{
public:
	// UnityEngine.Rect UnityEngine.GUILayoutEntry::kDummyRect
	Rect_t2360479859  ___kDummyRect_8;
	// System.Int32 UnityEngine.GUILayoutEntry::indent
	int32_t ___indent_9;

public:
	inline static int32_t get_offset_of_kDummyRect_8() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t3214611570_StaticFields, ___kDummyRect_8)); }
	inline Rect_t2360479859  get_kDummyRect_8() const { return ___kDummyRect_8; }
	inline Rect_t2360479859 * get_address_of_kDummyRect_8() { return &___kDummyRect_8; }
	inline void set_kDummyRect_8(Rect_t2360479859  value)
	{
		___kDummyRect_8 = value;
	}

	inline static int32_t get_offset_of_indent_9() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t3214611570_StaticFields, ___indent_9)); }
	inline int32_t get_indent_9() const { return ___indent_9; }
	inline int32_t* get_address_of_indent_9() { return &___indent_9; }
	inline void set_indent_9(int32_t value)
	{
		___indent_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUILAYOUTENTRY_T3214611570_H
#ifndef TYPE_T3858932131_H
#define TYPE_T3858932131_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayoutOption/Type
struct  Type_t3858932131 
{
public:
	// System.Int32 UnityEngine.GUILayoutOption/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_t3858932131, ___value___2)); }
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
#endif // TYPE_T3858932131_H
#ifndef GUILAYOUTUTILITY_T66395690_H
#define GUILAYOUTUTILITY_T66395690_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayoutUtility
struct  GUILayoutUtility_t66395690  : public RuntimeObject
{
public:

public:
};

struct GUILayoutUtility_t66395690_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache> UnityEngine.GUILayoutUtility::s_StoredLayouts
	Dictionary_2_t3261990503 * ___s_StoredLayouts_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache> UnityEngine.GUILayoutUtility::s_StoredWindows
	Dictionary_2_t3261990503 * ___s_StoredWindows_1;
	// UnityEngine.GUILayoutUtility/LayoutCache UnityEngine.GUILayoutUtility::current
	LayoutCache_t78309876 * ___current_2;
	// UnityEngine.Rect UnityEngine.GUILayoutUtility::kDummyRect
	Rect_t2360479859  ___kDummyRect_3;
	// UnityEngine.GUIStyle UnityEngine.GUILayoutUtility::s_SpaceStyle
	GUIStyle_t3956901511 * ___s_SpaceStyle_4;

public:
	inline static int32_t get_offset_of_s_StoredLayouts_0() { return static_cast<int32_t>(offsetof(GUILayoutUtility_t66395690_StaticFields, ___s_StoredLayouts_0)); }
	inline Dictionary_2_t3261990503 * get_s_StoredLayouts_0() const { return ___s_StoredLayouts_0; }
	inline Dictionary_2_t3261990503 ** get_address_of_s_StoredLayouts_0() { return &___s_StoredLayouts_0; }
	inline void set_s_StoredLayouts_0(Dictionary_2_t3261990503 * value)
	{
		___s_StoredLayouts_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_StoredLayouts_0), value);
	}

	inline static int32_t get_offset_of_s_StoredWindows_1() { return static_cast<int32_t>(offsetof(GUILayoutUtility_t66395690_StaticFields, ___s_StoredWindows_1)); }
	inline Dictionary_2_t3261990503 * get_s_StoredWindows_1() const { return ___s_StoredWindows_1; }
	inline Dictionary_2_t3261990503 ** get_address_of_s_StoredWindows_1() { return &___s_StoredWindows_1; }
	inline void set_s_StoredWindows_1(Dictionary_2_t3261990503 * value)
	{
		___s_StoredWindows_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_StoredWindows_1), value);
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(GUILayoutUtility_t66395690_StaticFields, ___current_2)); }
	inline LayoutCache_t78309876 * get_current_2() const { return ___current_2; }
	inline LayoutCache_t78309876 ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(LayoutCache_t78309876 * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((&___current_2), value);
	}

	inline static int32_t get_offset_of_kDummyRect_3() { return static_cast<int32_t>(offsetof(GUILayoutUtility_t66395690_StaticFields, ___kDummyRect_3)); }
	inline Rect_t2360479859  get_kDummyRect_3() const { return ___kDummyRect_3; }
	inline Rect_t2360479859 * get_address_of_kDummyRect_3() { return &___kDummyRect_3; }
	inline void set_kDummyRect_3(Rect_t2360479859  value)
	{
		___kDummyRect_3 = value;
	}

	inline static int32_t get_offset_of_s_SpaceStyle_4() { return static_cast<int32_t>(offsetof(GUILayoutUtility_t66395690_StaticFields, ___s_SpaceStyle_4)); }
	inline GUIStyle_t3956901511 * get_s_SpaceStyle_4() const { return ___s_SpaceStyle_4; }
	inline GUIStyle_t3956901511 ** get_address_of_s_SpaceStyle_4() { return &___s_SpaceStyle_4; }
	inline void set_s_SpaceStyle_4(GUIStyle_t3956901511 * value)
	{
		___s_SpaceStyle_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_SpaceStyle_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUILAYOUTUTILITY_T66395690_H
#ifndef GUISETTINGS_T1774757634_H
#define GUISETTINGS_T1774757634_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUISettings
struct  GUISettings_t1774757634  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.GUISettings::m_DoubleClickSelectsWord
	bool ___m_DoubleClickSelectsWord_0;
	// System.Boolean UnityEngine.GUISettings::m_TripleClickSelectsLine
	bool ___m_TripleClickSelectsLine_1;
	// UnityEngine.Color UnityEngine.GUISettings::m_CursorColor
	Color_t2555686324  ___m_CursorColor_2;
	// System.Single UnityEngine.GUISettings::m_CursorFlashSpeed
	float ___m_CursorFlashSpeed_3;
	// UnityEngine.Color UnityEngine.GUISettings::m_SelectionColor
	Color_t2555686324  ___m_SelectionColor_4;

public:
	inline static int32_t get_offset_of_m_DoubleClickSelectsWord_0() { return static_cast<int32_t>(offsetof(GUISettings_t1774757634, ___m_DoubleClickSelectsWord_0)); }
	inline bool get_m_DoubleClickSelectsWord_0() const { return ___m_DoubleClickSelectsWord_0; }
	inline bool* get_address_of_m_DoubleClickSelectsWord_0() { return &___m_DoubleClickSelectsWord_0; }
	inline void set_m_DoubleClickSelectsWord_0(bool value)
	{
		___m_DoubleClickSelectsWord_0 = value;
	}

	inline static int32_t get_offset_of_m_TripleClickSelectsLine_1() { return static_cast<int32_t>(offsetof(GUISettings_t1774757634, ___m_TripleClickSelectsLine_1)); }
	inline bool get_m_TripleClickSelectsLine_1() const { return ___m_TripleClickSelectsLine_1; }
	inline bool* get_address_of_m_TripleClickSelectsLine_1() { return &___m_TripleClickSelectsLine_1; }
	inline void set_m_TripleClickSelectsLine_1(bool value)
	{
		___m_TripleClickSelectsLine_1 = value;
	}

	inline static int32_t get_offset_of_m_CursorColor_2() { return static_cast<int32_t>(offsetof(GUISettings_t1774757634, ___m_CursorColor_2)); }
	inline Color_t2555686324  get_m_CursorColor_2() const { return ___m_CursorColor_2; }
	inline Color_t2555686324 * get_address_of_m_CursorColor_2() { return &___m_CursorColor_2; }
	inline void set_m_CursorColor_2(Color_t2555686324  value)
	{
		___m_CursorColor_2 = value;
	}

	inline static int32_t get_offset_of_m_CursorFlashSpeed_3() { return static_cast<int32_t>(offsetof(GUISettings_t1774757634, ___m_CursorFlashSpeed_3)); }
	inline float get_m_CursorFlashSpeed_3() const { return ___m_CursorFlashSpeed_3; }
	inline float* get_address_of_m_CursorFlashSpeed_3() { return &___m_CursorFlashSpeed_3; }
	inline void set_m_CursorFlashSpeed_3(float value)
	{
		___m_CursorFlashSpeed_3 = value;
	}

	inline static int32_t get_offset_of_m_SelectionColor_4() { return static_cast<int32_t>(offsetof(GUISettings_t1774757634, ___m_SelectionColor_4)); }
	inline Color_t2555686324  get_m_SelectionColor_4() const { return ___m_SelectionColor_4; }
	inline Color_t2555686324 * get_address_of_m_SelectionColor_4() { return &___m_SelectionColor_4; }
	inline void set_m_SelectionColor_4(Color_t2555686324  value)
	{
		___m_SelectionColor_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUISETTINGS_T1774757634_H
#ifndef GUISTYLESTATE_T1397964415_H
#define GUISTYLESTATE_T1397964415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIStyleState
struct  GUIStyleState_t1397964415  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyleState::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyle UnityEngine.GUIStyleState::m_SourceStyle
	GUIStyle_t3956901511 * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyleState_t1397964415, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(GUIStyleState_t1397964415, ___m_SourceStyle_1)); }
	inline GUIStyle_t3956901511 * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline GUIStyle_t3956901511 ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(GUIStyle_t3956901511 * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceStyle_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t1397964415_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t3956901511_marshaled_pinvoke* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t1397964415_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t3956901511_marshaled_com* ___m_SourceStyle_1;
};
#endif // GUISTYLESTATE_T1397964415_H
#ifndef KEYCODE_T2599294277_H
#define KEYCODE_T2599294277_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.KeyCode
struct  KeyCode_t2599294277 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t2599294277, ___value___2)); }
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
#endif // KEYCODE_T2599294277_H
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
#ifndef RECTOFFSET_T1369453676_H
#define RECTOFFSET_T1369453676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectOffset
struct  RectOffset_t1369453676  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RectOffset_t1369453676, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(RectOffset_t1369453676, ___m_SourceStyle_1)); }
	inline RuntimeObject * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline RuntimeObject ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(RuntimeObject * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceStyle_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_t1369453676_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_t1369453676_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
#endif // RECTOFFSET_T1369453676_H
#ifndef DBLCLICKSNAPPING_T2629979741_H
#define DBLCLICKSNAPPING_T2629979741_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextEditor/DblClickSnapping
struct  DblClickSnapping_t2629979741 
{
public:
	// System.Byte UnityEngine.TextEditor/DblClickSnapping::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DblClickSnapping_t2629979741, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBLCLICKSNAPPING_T2629979741_H
#ifndef TOUCHSCREENKEYBOARD_T731888065_H
#define TOUCHSCREENKEYBOARD_T731888065_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchScreenKeyboard
struct  TouchScreenKeyboard_t731888065  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.TouchScreenKeyboard::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_t731888065, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHSCREENKEYBOARD_T731888065_H
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
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2999457153 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_0), value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t426314064 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t426314064 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_1), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_2), value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_3), value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_5), value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2999457153 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2999457153 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2999457153 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((&___defaultBinder_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef FONT_T1956802104_H
#define FONT_T1956802104_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Font
struct  Font_t1956802104  : public Object_t631007953
{
public:
	// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.Font::m_FontTextureRebuildCallback
	FontTextureRebuildCallback_t2467502454 * ___m_FontTextureRebuildCallback_5;

public:
	inline static int32_t get_offset_of_m_FontTextureRebuildCallback_5() { return static_cast<int32_t>(offsetof(Font_t1956802104, ___m_FontTextureRebuildCallback_5)); }
	inline FontTextureRebuildCallback_t2467502454 * get_m_FontTextureRebuildCallback_5() const { return ___m_FontTextureRebuildCallback_5; }
	inline FontTextureRebuildCallback_t2467502454 ** get_address_of_m_FontTextureRebuildCallback_5() { return &___m_FontTextureRebuildCallback_5; }
	inline void set_m_FontTextureRebuildCallback_5(FontTextureRebuildCallback_t2467502454 * value)
	{
		___m_FontTextureRebuildCallback_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontTextureRebuildCallback_5), value);
	}
};

struct Font_t1956802104_StaticFields
{
public:
	// System.Action`1<UnityEngine.Font> UnityEngine.Font::textureRebuilt
	Action_1_t2129269699 * ___textureRebuilt_4;

public:
	inline static int32_t get_offset_of_textureRebuilt_4() { return static_cast<int32_t>(offsetof(Font_t1956802104_StaticFields, ___textureRebuilt_4)); }
	inline Action_1_t2129269699 * get_textureRebuilt_4() const { return ___textureRebuilt_4; }
	inline Action_1_t2129269699 ** get_address_of_textureRebuilt_4() { return &___textureRebuilt_4; }
	inline void set_textureRebuilt_4(Action_1_t2129269699 * value)
	{
		___textureRebuilt_4 = value;
		Il2CppCodeGenWriteBarrier((&___textureRebuilt_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FONT_T1956802104_H
#ifndef GUILAYOUTGROUP_T2157789695_H
#define GUILAYOUTGROUP_T2157789695_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayoutGroup
struct  GUILayoutGroup_t2157789695  : public GUILayoutEntry_t3214611570
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry> UnityEngine.GUILayoutGroup::entries
	List_1_t391719016 * ___entries_10;
	// System.Boolean UnityEngine.GUILayoutGroup::isVertical
	bool ___isVertical_11;
	// System.Boolean UnityEngine.GUILayoutGroup::resetCoords
	bool ___resetCoords_12;
	// System.Single UnityEngine.GUILayoutGroup::spacing
	float ___spacing_13;
	// System.Boolean UnityEngine.GUILayoutGroup::sameSize
	bool ___sameSize_14;
	// System.Boolean UnityEngine.GUILayoutGroup::isWindow
	bool ___isWindow_15;
	// System.Int32 UnityEngine.GUILayoutGroup::windowID
	int32_t ___windowID_16;
	// System.Int32 UnityEngine.GUILayoutGroup::m_Cursor
	int32_t ___m_Cursor_17;
	// System.Int32 UnityEngine.GUILayoutGroup::m_StretchableCountX
	int32_t ___m_StretchableCountX_18;
	// System.Int32 UnityEngine.GUILayoutGroup::m_StretchableCountY
	int32_t ___m_StretchableCountY_19;
	// System.Boolean UnityEngine.GUILayoutGroup::m_UserSpecifiedWidth
	bool ___m_UserSpecifiedWidth_20;
	// System.Boolean UnityEngine.GUILayoutGroup::m_UserSpecifiedHeight
	bool ___m_UserSpecifiedHeight_21;
	// System.Single UnityEngine.GUILayoutGroup::m_ChildMinWidth
	float ___m_ChildMinWidth_22;
	// System.Single UnityEngine.GUILayoutGroup::m_ChildMaxWidth
	float ___m_ChildMaxWidth_23;
	// System.Single UnityEngine.GUILayoutGroup::m_ChildMinHeight
	float ___m_ChildMinHeight_24;
	// System.Single UnityEngine.GUILayoutGroup::m_ChildMaxHeight
	float ___m_ChildMaxHeight_25;
	// UnityEngine.RectOffset UnityEngine.GUILayoutGroup::m_Margin
	RectOffset_t1369453676 * ___m_Margin_26;

public:
	inline static int32_t get_offset_of_entries_10() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t2157789695, ___entries_10)); }
	inline List_1_t391719016 * get_entries_10() const { return ___entries_10; }
	inline List_1_t391719016 ** get_address_of_entries_10() { return &___entries_10; }
	inline void set_entries_10(List_1_t391719016 * value)
	{
		___entries_10 = value;
		Il2CppCodeGenWriteBarrier((&___entries_10), value);
	}

	inline static int32_t get_offset_of_isVertical_11() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t2157789695, ___isVertical_11)); }
	inline bool get_isVertical_11() const { return ___isVertical_11; }
	inline bool* get_address_of_isVertical_11() { return &___isVertical_11; }
	inline void set_isVertical_11(bool value)
	{
		___isVertical_11 = value;
	}

	inline static int32_t get_offset_of_resetCoords_12() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t2157789695, ___resetCoords_12)); }
	inline bool get_resetCoords_12() const { return ___resetCoords_12; }
	inline bool* get_address_of_resetCoords_12() { return &___resetCoords_12; }
	inline void set_resetCoords_12(bool value)
	{
		___resetCoords_12 = value;
	}

	inline static int32_t get_offset_of_spacing_13() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t2157789695, ___spacing_13)); }
	inline float get_spacing_13() const { return ___spacing_13; }
	inline float* get_address_of_spacing_13() { return &___spacing_13; }
	inline void set_spacing_13(float value)
	{
		___spacing_13 = value;
	}

	inline static int32_t get_offset_of_sameSize_14() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t2157789695, ___sameSize_14)); }
	inline bool get_sameSize_14() const { return ___sameSize_14; }
	inline bool* get_address_of_sameSize_14() { return &___sameSize_14; }
	inline void set_sameSize_14(bool value)
	{
		___sameSize_14 = value;
	}

	inline static int32_t get_offset_of_isWindow_15() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t2157789695, ___isWindow_15)); }
	inline bool get_isWindow_15() const { return ___isWindow_15; }
	inline bool* get_address_of_isWindow_15() { return &___isWindow_15; }
	inline void set_isWindow_15(bool value)
	{
		___isWindow_15 = value;
	}

	inline static int32_t get_offset_of_windowID_16() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t2157789695, ___windowID_16)); }
	inline int32_t get_windowID_16() const { return ___windowID_16; }
	inline int32_t* get_address_of_windowID_16() { return &___windowID_16; }
	inline void set_windowID_16(int32_t value)
	{
		___windowID_16 = value;
	}

	inline static int32_t get_offset_of_m_Cursor_17() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t2157789695, ___m_Cursor_17)); }
	inline int32_t get_m_Cursor_17() const { return ___m_Cursor_17; }
	inline int32_t* get_address_of_m_Cursor_17() { return &___m_Cursor_17; }
	inline void set_m_Cursor_17(int32_t value)
	{
		___m_Cursor_17 = value;
	}

	inline static int32_t get_offset_of_m_StretchableCountX_18() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t2157789695, ___m_StretchableCountX_18)); }
	inline int32_t get_m_StretchableCountX_18() const { return ___m_StretchableCountX_18; }
	inline int32_t* get_address_of_m_StretchableCountX_18() { return &___m_StretchableCountX_18; }
	inline void set_m_StretchableCountX_18(int32_t value)
	{
		___m_StretchableCountX_18 = value;
	}

	inline static int32_t get_offset_of_m_StretchableCountY_19() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t2157789695, ___m_StretchableCountY_19)); }
	inline int32_t get_m_StretchableCountY_19() const { return ___m_StretchableCountY_19; }
	inline int32_t* get_address_of_m_StretchableCountY_19() { return &___m_StretchableCountY_19; }
	inline void set_m_StretchableCountY_19(int32_t value)
	{
		___m_StretchableCountY_19 = value;
	}

	inline static int32_t get_offset_of_m_UserSpecifiedWidth_20() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t2157789695, ___m_UserSpecifiedWidth_20)); }
	inline bool get_m_UserSpecifiedWidth_20() const { return ___m_UserSpecifiedWidth_20; }
	inline bool* get_address_of_m_UserSpecifiedWidth_20() { return &___m_UserSpecifiedWidth_20; }
	inline void set_m_UserSpecifiedWidth_20(bool value)
	{
		___m_UserSpecifiedWidth_20 = value;
	}

	inline static int32_t get_offset_of_m_UserSpecifiedHeight_21() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t2157789695, ___m_UserSpecifiedHeight_21)); }
	inline bool get_m_UserSpecifiedHeight_21() const { return ___m_UserSpecifiedHeight_21; }
	inline bool* get_address_of_m_UserSpecifiedHeight_21() { return &___m_UserSpecifiedHeight_21; }
	inline void set_m_UserSpecifiedHeight_21(bool value)
	{
		___m_UserSpecifiedHeight_21 = value;
	}

	inline static int32_t get_offset_of_m_ChildMinWidth_22() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t2157789695, ___m_ChildMinWidth_22)); }
	inline float get_m_ChildMinWidth_22() const { return ___m_ChildMinWidth_22; }
	inline float* get_address_of_m_ChildMinWidth_22() { return &___m_ChildMinWidth_22; }
	inline void set_m_ChildMinWidth_22(float value)
	{
		___m_ChildMinWidth_22 = value;
	}

	inline static int32_t get_offset_of_m_ChildMaxWidth_23() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t2157789695, ___m_ChildMaxWidth_23)); }
	inline float get_m_ChildMaxWidth_23() const { return ___m_ChildMaxWidth_23; }
	inline float* get_address_of_m_ChildMaxWidth_23() { return &___m_ChildMaxWidth_23; }
	inline void set_m_ChildMaxWidth_23(float value)
	{
		___m_ChildMaxWidth_23 = value;
	}

	inline static int32_t get_offset_of_m_ChildMinHeight_24() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t2157789695, ___m_ChildMinHeight_24)); }
	inline float get_m_ChildMinHeight_24() const { return ___m_ChildMinHeight_24; }
	inline float* get_address_of_m_ChildMinHeight_24() { return &___m_ChildMinHeight_24; }
	inline void set_m_ChildMinHeight_24(float value)
	{
		___m_ChildMinHeight_24 = value;
	}

	inline static int32_t get_offset_of_m_ChildMaxHeight_25() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t2157789695, ___m_ChildMaxHeight_25)); }
	inline float get_m_ChildMaxHeight_25() const { return ___m_ChildMaxHeight_25; }
	inline float* get_address_of_m_ChildMaxHeight_25() { return &___m_ChildMaxHeight_25; }
	inline void set_m_ChildMaxHeight_25(float value)
	{
		___m_ChildMaxHeight_25 = value;
	}

	inline static int32_t get_offset_of_m_Margin_26() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t2157789695, ___m_Margin_26)); }
	inline RectOffset_t1369453676 * get_m_Margin_26() const { return ___m_Margin_26; }
	inline RectOffset_t1369453676 ** get_address_of_m_Margin_26() { return &___m_Margin_26; }
	inline void set_m_Margin_26(RectOffset_t1369453676 * value)
	{
		___m_Margin_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_Margin_26), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUILAYOUTGROUP_T2157789695_H
#ifndef GUILAYOUTOPTION_T811797299_H
#define GUILAYOUTOPTION_T811797299_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayoutOption
struct  GUILayoutOption_t811797299  : public RuntimeObject
{
public:
	// UnityEngine.GUILayoutOption/Type UnityEngine.GUILayoutOption::type
	int32_t ___type_0;
	// System.Object UnityEngine.GUILayoutOption::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(GUILayoutOption_t811797299, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(GUILayoutOption_t811797299, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUILAYOUTOPTION_T811797299_H
#ifndef GUISTYLE_T3956901511_H
#define GUISTYLE_T3956901511_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIStyle
struct  GUIStyle_t3956901511  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_t1397964415 * ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_t1397964415 * ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_t1397964415 * ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_t1397964415 * ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_t1397964415 * ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_t1397964415 * ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_t1397964415 * ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_t1397964415 * ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_t1369453676 * ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_t1369453676 * ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_t1369453676 * ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_t1369453676 * ___m_Overflow_12;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Normal_1)); }
	inline GUIStyleState_t1397964415 * get_m_Normal_1() const { return ___m_Normal_1; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(GUIStyleState_t1397964415 * value)
	{
		___m_Normal_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Normal_1), value);
	}

	inline static int32_t get_offset_of_m_Hover_2() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Hover_2)); }
	inline GUIStyleState_t1397964415 * get_m_Hover_2() const { return ___m_Hover_2; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_Hover_2() { return &___m_Hover_2; }
	inline void set_m_Hover_2(GUIStyleState_t1397964415 * value)
	{
		___m_Hover_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Hover_2), value);
	}

	inline static int32_t get_offset_of_m_Active_3() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Active_3)); }
	inline GUIStyleState_t1397964415 * get_m_Active_3() const { return ___m_Active_3; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_Active_3() { return &___m_Active_3; }
	inline void set_m_Active_3(GUIStyleState_t1397964415 * value)
	{
		___m_Active_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Active_3), value);
	}

	inline static int32_t get_offset_of_m_Focused_4() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Focused_4)); }
	inline GUIStyleState_t1397964415 * get_m_Focused_4() const { return ___m_Focused_4; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_Focused_4() { return &___m_Focused_4; }
	inline void set_m_Focused_4(GUIStyleState_t1397964415 * value)
	{
		___m_Focused_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Focused_4), value);
	}

	inline static int32_t get_offset_of_m_OnNormal_5() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_OnNormal_5)); }
	inline GUIStyleState_t1397964415 * get_m_OnNormal_5() const { return ___m_OnNormal_5; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_OnNormal_5() { return &___m_OnNormal_5; }
	inline void set_m_OnNormal_5(GUIStyleState_t1397964415 * value)
	{
		___m_OnNormal_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnNormal_5), value);
	}

	inline static int32_t get_offset_of_m_OnHover_6() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_OnHover_6)); }
	inline GUIStyleState_t1397964415 * get_m_OnHover_6() const { return ___m_OnHover_6; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_OnHover_6() { return &___m_OnHover_6; }
	inline void set_m_OnHover_6(GUIStyleState_t1397964415 * value)
	{
		___m_OnHover_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnHover_6), value);
	}

	inline static int32_t get_offset_of_m_OnActive_7() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_OnActive_7)); }
	inline GUIStyleState_t1397964415 * get_m_OnActive_7() const { return ___m_OnActive_7; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_OnActive_7() { return &___m_OnActive_7; }
	inline void set_m_OnActive_7(GUIStyleState_t1397964415 * value)
	{
		___m_OnActive_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnActive_7), value);
	}

	inline static int32_t get_offset_of_m_OnFocused_8() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_OnFocused_8)); }
	inline GUIStyleState_t1397964415 * get_m_OnFocused_8() const { return ___m_OnFocused_8; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_OnFocused_8() { return &___m_OnFocused_8; }
	inline void set_m_OnFocused_8(GUIStyleState_t1397964415 * value)
	{
		___m_OnFocused_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnFocused_8), value);
	}

	inline static int32_t get_offset_of_m_Border_9() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Border_9)); }
	inline RectOffset_t1369453676 * get_m_Border_9() const { return ___m_Border_9; }
	inline RectOffset_t1369453676 ** get_address_of_m_Border_9() { return &___m_Border_9; }
	inline void set_m_Border_9(RectOffset_t1369453676 * value)
	{
		___m_Border_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Border_9), value);
	}

	inline static int32_t get_offset_of_m_Padding_10() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Padding_10)); }
	inline RectOffset_t1369453676 * get_m_Padding_10() const { return ___m_Padding_10; }
	inline RectOffset_t1369453676 ** get_address_of_m_Padding_10() { return &___m_Padding_10; }
	inline void set_m_Padding_10(RectOffset_t1369453676 * value)
	{
		___m_Padding_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_Padding_10), value);
	}

	inline static int32_t get_offset_of_m_Margin_11() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Margin_11)); }
	inline RectOffset_t1369453676 * get_m_Margin_11() const { return ___m_Margin_11; }
	inline RectOffset_t1369453676 ** get_address_of_m_Margin_11() { return &___m_Margin_11; }
	inline void set_m_Margin_11(RectOffset_t1369453676 * value)
	{
		___m_Margin_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Margin_11), value);
	}

	inline static int32_t get_offset_of_m_Overflow_12() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Overflow_12)); }
	inline RectOffset_t1369453676 * get_m_Overflow_12() const { return ___m_Overflow_12; }
	inline RectOffset_t1369453676 ** get_address_of_m_Overflow_12() { return &___m_Overflow_12; }
	inline void set_m_Overflow_12(RectOffset_t1369453676 * value)
	{
		___m_Overflow_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_Overflow_12), value);
	}
};

struct GUIStyle_t3956901511_StaticFields
{
public:
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_13;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t3956901511 * ___s_None_14;

public:
	inline static int32_t get_offset_of_showKeyboardFocus_13() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511_StaticFields, ___showKeyboardFocus_13)); }
	inline bool get_showKeyboardFocus_13() const { return ___showKeyboardFocus_13; }
	inline bool* get_address_of_showKeyboardFocus_13() { return &___showKeyboardFocus_13; }
	inline void set_showKeyboardFocus_13(bool value)
	{
		___showKeyboardFocus_13 = value;
	}

	inline static int32_t get_offset_of_s_None_14() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511_StaticFields, ___s_None_14)); }
	inline GUIStyle_t3956901511 * get_s_None_14() const { return ___s_None_14; }
	inline GUIStyle_t3956901511 ** get_address_of_s_None_14() { return &___s_None_14; }
	inline void set_s_None_14(GUIStyle_t3956901511 * value)
	{
		___s_None_14 = value;
		Il2CppCodeGenWriteBarrier((&___s_None_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t3956901511_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_t1369453676_marshaled_pinvoke ___m_Border_9;
	RectOffset_t1369453676_marshaled_pinvoke ___m_Padding_10;
	RectOffset_t1369453676_marshaled_pinvoke ___m_Margin_11;
	RectOffset_t1369453676_marshaled_pinvoke ___m_Overflow_12;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t3956901511_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t1397964415_marshaled_com* ___m_Normal_1;
	GUIStyleState_t1397964415_marshaled_com* ___m_Hover_2;
	GUIStyleState_t1397964415_marshaled_com* ___m_Active_3;
	GUIStyleState_t1397964415_marshaled_com* ___m_Focused_4;
	GUIStyleState_t1397964415_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_t1397964415_marshaled_com* ___m_OnHover_6;
	GUIStyleState_t1397964415_marshaled_com* ___m_OnActive_7;
	GUIStyleState_t1397964415_marshaled_com* ___m_OnFocused_8;
	RectOffset_t1369453676_marshaled_com* ___m_Border_9;
	RectOffset_t1369453676_marshaled_com* ___m_Padding_10;
	RectOffset_t1369453676_marshaled_com* ___m_Margin_11;
	RectOffset_t1369453676_marshaled_com* ___m_Overflow_12;
};
#endif // GUISTYLE_T3956901511_H
#ifndef SCRIPTABLEOBJECT_T2528358522_H
#define SCRIPTABLEOBJECT_T2528358522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t2528358522  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_pinvoke : public Object_t631007953_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_com : public Object_t631007953_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T2528358522_H
#ifndef TEXTEDITOR_T2759855366_H
#define TEXTEDITOR_T2759855366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextEditor
struct  TextEditor_t2759855366  : public RuntimeObject
{
public:
	// UnityEngine.TouchScreenKeyboard UnityEngine.TextEditor::keyboardOnScreen
	TouchScreenKeyboard_t731888065 * ___keyboardOnScreen_0;
	// System.Int32 UnityEngine.TextEditor::controlID
	int32_t ___controlID_1;
	// UnityEngine.GUIStyle UnityEngine.TextEditor::style
	GUIStyle_t3956901511 * ___style_2;
	// System.Boolean UnityEngine.TextEditor::multiline
	bool ___multiline_3;
	// System.Boolean UnityEngine.TextEditor::hasHorizontalCursorPos
	bool ___hasHorizontalCursorPos_4;
	// System.Boolean UnityEngine.TextEditor::isPasswordField
	bool ___isPasswordField_5;
	// UnityEngine.Vector2 UnityEngine.TextEditor::scrollOffset
	Vector2_t2156229523  ___scrollOffset_6;
	// UnityEngine.GUIContent UnityEngine.TextEditor::m_Content
	GUIContent_t3050628031 * ___m_Content_7;
	// System.Int32 UnityEngine.TextEditor::m_CursorIndex
	int32_t ___m_CursorIndex_8;
	// System.Int32 UnityEngine.TextEditor::m_SelectIndex
	int32_t ___m_SelectIndex_9;
	// System.Boolean UnityEngine.TextEditor::m_RevealCursor
	bool ___m_RevealCursor_10;
	// System.Boolean UnityEngine.TextEditor::m_MouseDragSelectsWholeWords
	bool ___m_MouseDragSelectsWholeWords_11;
	// System.Int32 UnityEngine.TextEditor::m_DblClickInitPos
	int32_t ___m_DblClickInitPos_12;
	// UnityEngine.TextEditor/DblClickSnapping UnityEngine.TextEditor::m_DblClickSnap
	uint8_t ___m_DblClickSnap_13;
	// System.Boolean UnityEngine.TextEditor::m_bJustSelected
	bool ___m_bJustSelected_14;
	// System.Int32 UnityEngine.TextEditor::m_iAltCursorPos
	int32_t ___m_iAltCursorPos_15;

public:
	inline static int32_t get_offset_of_keyboardOnScreen_0() { return static_cast<int32_t>(offsetof(TextEditor_t2759855366, ___keyboardOnScreen_0)); }
	inline TouchScreenKeyboard_t731888065 * get_keyboardOnScreen_0() const { return ___keyboardOnScreen_0; }
	inline TouchScreenKeyboard_t731888065 ** get_address_of_keyboardOnScreen_0() { return &___keyboardOnScreen_0; }
	inline void set_keyboardOnScreen_0(TouchScreenKeyboard_t731888065 * value)
	{
		___keyboardOnScreen_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyboardOnScreen_0), value);
	}

	inline static int32_t get_offset_of_controlID_1() { return static_cast<int32_t>(offsetof(TextEditor_t2759855366, ___controlID_1)); }
	inline int32_t get_controlID_1() const { return ___controlID_1; }
	inline int32_t* get_address_of_controlID_1() { return &___controlID_1; }
	inline void set_controlID_1(int32_t value)
	{
		___controlID_1 = value;
	}

	inline static int32_t get_offset_of_style_2() { return static_cast<int32_t>(offsetof(TextEditor_t2759855366, ___style_2)); }
	inline GUIStyle_t3956901511 * get_style_2() const { return ___style_2; }
	inline GUIStyle_t3956901511 ** get_address_of_style_2() { return &___style_2; }
	inline void set_style_2(GUIStyle_t3956901511 * value)
	{
		___style_2 = value;
		Il2CppCodeGenWriteBarrier((&___style_2), value);
	}

	inline static int32_t get_offset_of_multiline_3() { return static_cast<int32_t>(offsetof(TextEditor_t2759855366, ___multiline_3)); }
	inline bool get_multiline_3() const { return ___multiline_3; }
	inline bool* get_address_of_multiline_3() { return &___multiline_3; }
	inline void set_multiline_3(bool value)
	{
		___multiline_3 = value;
	}

	inline static int32_t get_offset_of_hasHorizontalCursorPos_4() { return static_cast<int32_t>(offsetof(TextEditor_t2759855366, ___hasHorizontalCursorPos_4)); }
	inline bool get_hasHorizontalCursorPos_4() const { return ___hasHorizontalCursorPos_4; }
	inline bool* get_address_of_hasHorizontalCursorPos_4() { return &___hasHorizontalCursorPos_4; }
	inline void set_hasHorizontalCursorPos_4(bool value)
	{
		___hasHorizontalCursorPos_4 = value;
	}

	inline static int32_t get_offset_of_isPasswordField_5() { return static_cast<int32_t>(offsetof(TextEditor_t2759855366, ___isPasswordField_5)); }
	inline bool get_isPasswordField_5() const { return ___isPasswordField_5; }
	inline bool* get_address_of_isPasswordField_5() { return &___isPasswordField_5; }
	inline void set_isPasswordField_5(bool value)
	{
		___isPasswordField_5 = value;
	}

	inline static int32_t get_offset_of_scrollOffset_6() { return static_cast<int32_t>(offsetof(TextEditor_t2759855366, ___scrollOffset_6)); }
	inline Vector2_t2156229523  get_scrollOffset_6() const { return ___scrollOffset_6; }
	inline Vector2_t2156229523 * get_address_of_scrollOffset_6() { return &___scrollOffset_6; }
	inline void set_scrollOffset_6(Vector2_t2156229523  value)
	{
		___scrollOffset_6 = value;
	}

	inline static int32_t get_offset_of_m_Content_7() { return static_cast<int32_t>(offsetof(TextEditor_t2759855366, ___m_Content_7)); }
	inline GUIContent_t3050628031 * get_m_Content_7() const { return ___m_Content_7; }
	inline GUIContent_t3050628031 ** get_address_of_m_Content_7() { return &___m_Content_7; }
	inline void set_m_Content_7(GUIContent_t3050628031 * value)
	{
		___m_Content_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_Content_7), value);
	}

	inline static int32_t get_offset_of_m_CursorIndex_8() { return static_cast<int32_t>(offsetof(TextEditor_t2759855366, ___m_CursorIndex_8)); }
	inline int32_t get_m_CursorIndex_8() const { return ___m_CursorIndex_8; }
	inline int32_t* get_address_of_m_CursorIndex_8() { return &___m_CursorIndex_8; }
	inline void set_m_CursorIndex_8(int32_t value)
	{
		___m_CursorIndex_8 = value;
	}

	inline static int32_t get_offset_of_m_SelectIndex_9() { return static_cast<int32_t>(offsetof(TextEditor_t2759855366, ___m_SelectIndex_9)); }
	inline int32_t get_m_SelectIndex_9() const { return ___m_SelectIndex_9; }
	inline int32_t* get_address_of_m_SelectIndex_9() { return &___m_SelectIndex_9; }
	inline void set_m_SelectIndex_9(int32_t value)
	{
		___m_SelectIndex_9 = value;
	}

	inline static int32_t get_offset_of_m_RevealCursor_10() { return static_cast<int32_t>(offsetof(TextEditor_t2759855366, ___m_RevealCursor_10)); }
	inline bool get_m_RevealCursor_10() const { return ___m_RevealCursor_10; }
	inline bool* get_address_of_m_RevealCursor_10() { return &___m_RevealCursor_10; }
	inline void set_m_RevealCursor_10(bool value)
	{
		___m_RevealCursor_10 = value;
	}

	inline static int32_t get_offset_of_m_MouseDragSelectsWholeWords_11() { return static_cast<int32_t>(offsetof(TextEditor_t2759855366, ___m_MouseDragSelectsWholeWords_11)); }
	inline bool get_m_MouseDragSelectsWholeWords_11() const { return ___m_MouseDragSelectsWholeWords_11; }
	inline bool* get_address_of_m_MouseDragSelectsWholeWords_11() { return &___m_MouseDragSelectsWholeWords_11; }
	inline void set_m_MouseDragSelectsWholeWords_11(bool value)
	{
		___m_MouseDragSelectsWholeWords_11 = value;
	}

	inline static int32_t get_offset_of_m_DblClickInitPos_12() { return static_cast<int32_t>(offsetof(TextEditor_t2759855366, ___m_DblClickInitPos_12)); }
	inline int32_t get_m_DblClickInitPos_12() const { return ___m_DblClickInitPos_12; }
	inline int32_t* get_address_of_m_DblClickInitPos_12() { return &___m_DblClickInitPos_12; }
	inline void set_m_DblClickInitPos_12(int32_t value)
	{
		___m_DblClickInitPos_12 = value;
	}

	inline static int32_t get_offset_of_m_DblClickSnap_13() { return static_cast<int32_t>(offsetof(TextEditor_t2759855366, ___m_DblClickSnap_13)); }
	inline uint8_t get_m_DblClickSnap_13() const { return ___m_DblClickSnap_13; }
	inline uint8_t* get_address_of_m_DblClickSnap_13() { return &___m_DblClickSnap_13; }
	inline void set_m_DblClickSnap_13(uint8_t value)
	{
		___m_DblClickSnap_13 = value;
	}

	inline static int32_t get_offset_of_m_bJustSelected_14() { return static_cast<int32_t>(offsetof(TextEditor_t2759855366, ___m_bJustSelected_14)); }
	inline bool get_m_bJustSelected_14() const { return ___m_bJustSelected_14; }
	inline bool* get_address_of_m_bJustSelected_14() { return &___m_bJustSelected_14; }
	inline void set_m_bJustSelected_14(bool value)
	{
		___m_bJustSelected_14 = value;
	}

	inline static int32_t get_offset_of_m_iAltCursorPos_15() { return static_cast<int32_t>(offsetof(TextEditor_t2759855366, ___m_iAltCursorPos_15)); }
	inline int32_t get_m_iAltCursorPos_15() const { return ___m_iAltCursorPos_15; }
	inline int32_t* get_address_of_m_iAltCursorPos_15() { return &___m_iAltCursorPos_15; }
	inline void set_m_iAltCursorPos_15(int32_t value)
	{
		___m_iAltCursorPos_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTEDITOR_T2759855366_H
#ifndef TEXTURE_T3661962703_H
#define TEXTURE_T3661962703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t3661962703  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T3661962703_H
#ifndef ACTION_T1264377477_H
#define ACTION_T1264377477_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action
struct  Action_t1264377477  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_T1264377477_H
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
#ifndef FUNC_2_T3450341358_H
#define FUNC_2_T3450341358_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<System.Exception,System.Boolean>
struct  Func_2_t3450341358  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T3450341358_H
#ifndef FUNC_3_T4119323734_H
#define FUNC_3_T4119323734_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`3<System.Int32,System.IntPtr,System.Boolean>
struct  Func_3_t4119323734  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_3_T4119323734_H
#ifndef WINDOWFUNCTION_T3146511083_H
#define WINDOWFUNCTION_T3146511083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUI/WindowFunction
struct  WindowFunction_t3146511083  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOWFUNCTION_T3146511083_H
#ifndef GUISCROLLGROUP_T1523329021_H
#define GUISCROLLGROUP_T1523329021_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIScrollGroup
struct  GUIScrollGroup_t1523329021  : public GUILayoutGroup_t2157789695
{
public:
	// System.Single UnityEngine.GUIScrollGroup::calcMinWidth
	float ___calcMinWidth_27;
	// System.Single UnityEngine.GUIScrollGroup::calcMaxWidth
	float ___calcMaxWidth_28;
	// System.Single UnityEngine.GUIScrollGroup::calcMinHeight
	float ___calcMinHeight_29;
	// System.Single UnityEngine.GUIScrollGroup::calcMaxHeight
	float ___calcMaxHeight_30;
	// System.Single UnityEngine.GUIScrollGroup::clientWidth
	float ___clientWidth_31;
	// System.Single UnityEngine.GUIScrollGroup::clientHeight
	float ___clientHeight_32;
	// System.Boolean UnityEngine.GUIScrollGroup::allowHorizontalScroll
	bool ___allowHorizontalScroll_33;
	// System.Boolean UnityEngine.GUIScrollGroup::allowVerticalScroll
	bool ___allowVerticalScroll_34;
	// System.Boolean UnityEngine.GUIScrollGroup::needsHorizontalScrollbar
	bool ___needsHorizontalScrollbar_35;
	// System.Boolean UnityEngine.GUIScrollGroup::needsVerticalScrollbar
	bool ___needsVerticalScrollbar_36;
	// UnityEngine.GUIStyle UnityEngine.GUIScrollGroup::horizontalScrollbar
	GUIStyle_t3956901511 * ___horizontalScrollbar_37;
	// UnityEngine.GUIStyle UnityEngine.GUIScrollGroup::verticalScrollbar
	GUIStyle_t3956901511 * ___verticalScrollbar_38;

public:
	inline static int32_t get_offset_of_calcMinWidth_27() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t1523329021, ___calcMinWidth_27)); }
	inline float get_calcMinWidth_27() const { return ___calcMinWidth_27; }
	inline float* get_address_of_calcMinWidth_27() { return &___calcMinWidth_27; }
	inline void set_calcMinWidth_27(float value)
	{
		___calcMinWidth_27 = value;
	}

	inline static int32_t get_offset_of_calcMaxWidth_28() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t1523329021, ___calcMaxWidth_28)); }
	inline float get_calcMaxWidth_28() const { return ___calcMaxWidth_28; }
	inline float* get_address_of_calcMaxWidth_28() { return &___calcMaxWidth_28; }
	inline void set_calcMaxWidth_28(float value)
	{
		___calcMaxWidth_28 = value;
	}

	inline static int32_t get_offset_of_calcMinHeight_29() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t1523329021, ___calcMinHeight_29)); }
	inline float get_calcMinHeight_29() const { return ___calcMinHeight_29; }
	inline float* get_address_of_calcMinHeight_29() { return &___calcMinHeight_29; }
	inline void set_calcMinHeight_29(float value)
	{
		___calcMinHeight_29 = value;
	}

	inline static int32_t get_offset_of_calcMaxHeight_30() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t1523329021, ___calcMaxHeight_30)); }
	inline float get_calcMaxHeight_30() const { return ___calcMaxHeight_30; }
	inline float* get_address_of_calcMaxHeight_30() { return &___calcMaxHeight_30; }
	inline void set_calcMaxHeight_30(float value)
	{
		___calcMaxHeight_30 = value;
	}

	inline static int32_t get_offset_of_clientWidth_31() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t1523329021, ___clientWidth_31)); }
	inline float get_clientWidth_31() const { return ___clientWidth_31; }
	inline float* get_address_of_clientWidth_31() { return &___clientWidth_31; }
	inline void set_clientWidth_31(float value)
	{
		___clientWidth_31 = value;
	}

	inline static int32_t get_offset_of_clientHeight_32() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t1523329021, ___clientHeight_32)); }
	inline float get_clientHeight_32() const { return ___clientHeight_32; }
	inline float* get_address_of_clientHeight_32() { return &___clientHeight_32; }
	inline void set_clientHeight_32(float value)
	{
		___clientHeight_32 = value;
	}

	inline static int32_t get_offset_of_allowHorizontalScroll_33() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t1523329021, ___allowHorizontalScroll_33)); }
	inline bool get_allowHorizontalScroll_33() const { return ___allowHorizontalScroll_33; }
	inline bool* get_address_of_allowHorizontalScroll_33() { return &___allowHorizontalScroll_33; }
	inline void set_allowHorizontalScroll_33(bool value)
	{
		___allowHorizontalScroll_33 = value;
	}

	inline static int32_t get_offset_of_allowVerticalScroll_34() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t1523329021, ___allowVerticalScroll_34)); }
	inline bool get_allowVerticalScroll_34() const { return ___allowVerticalScroll_34; }
	inline bool* get_address_of_allowVerticalScroll_34() { return &___allowVerticalScroll_34; }
	inline void set_allowVerticalScroll_34(bool value)
	{
		___allowVerticalScroll_34 = value;
	}

	inline static int32_t get_offset_of_needsHorizontalScrollbar_35() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t1523329021, ___needsHorizontalScrollbar_35)); }
	inline bool get_needsHorizontalScrollbar_35() const { return ___needsHorizontalScrollbar_35; }
	inline bool* get_address_of_needsHorizontalScrollbar_35() { return &___needsHorizontalScrollbar_35; }
	inline void set_needsHorizontalScrollbar_35(bool value)
	{
		___needsHorizontalScrollbar_35 = value;
	}

	inline static int32_t get_offset_of_needsVerticalScrollbar_36() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t1523329021, ___needsVerticalScrollbar_36)); }
	inline bool get_needsVerticalScrollbar_36() const { return ___needsVerticalScrollbar_36; }
	inline bool* get_address_of_needsVerticalScrollbar_36() { return &___needsVerticalScrollbar_36; }
	inline void set_needsVerticalScrollbar_36(bool value)
	{
		___needsVerticalScrollbar_36 = value;
	}

	inline static int32_t get_offset_of_horizontalScrollbar_37() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t1523329021, ___horizontalScrollbar_37)); }
	inline GUIStyle_t3956901511 * get_horizontalScrollbar_37() const { return ___horizontalScrollbar_37; }
	inline GUIStyle_t3956901511 ** get_address_of_horizontalScrollbar_37() { return &___horizontalScrollbar_37; }
	inline void set_horizontalScrollbar_37(GUIStyle_t3956901511 * value)
	{
		___horizontalScrollbar_37 = value;
		Il2CppCodeGenWriteBarrier((&___horizontalScrollbar_37), value);
	}

	inline static int32_t get_offset_of_verticalScrollbar_38() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t1523329021, ___verticalScrollbar_38)); }
	inline GUIStyle_t3956901511 * get_verticalScrollbar_38() const { return ___verticalScrollbar_38; }
	inline GUIStyle_t3956901511 ** get_address_of_verticalScrollbar_38() { return &___verticalScrollbar_38; }
	inline void set_verticalScrollbar_38(GUIStyle_t3956901511 * value)
	{
		___verticalScrollbar_38 = value;
		Il2CppCodeGenWriteBarrier((&___verticalScrollbar_38), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUISCROLLGROUP_T1523329021_H
#ifndef GUISKIN_T1244372282_H
#define GUISKIN_T1244372282_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUISkin
struct  GUISkin_t1244372282  : public ScriptableObject_t2528358522
{
public:
	// UnityEngine.Font UnityEngine.GUISkin::m_Font
	Font_t1956802104 * ___m_Font_4;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_box
	GUIStyle_t3956901511 * ___m_box_5;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_button
	GUIStyle_t3956901511 * ___m_button_6;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_toggle
	GUIStyle_t3956901511 * ___m_toggle_7;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_label
	GUIStyle_t3956901511 * ___m_label_8;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textField
	GUIStyle_t3956901511 * ___m_textField_9;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textArea
	GUIStyle_t3956901511 * ___m_textArea_10;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_window
	GUIStyle_t3956901511 * ___m_window_11;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSlider
	GUIStyle_t3956901511 * ___m_horizontalSlider_12;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumb
	GUIStyle_t3956901511 * ___m_horizontalSliderThumb_13;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSlider
	GUIStyle_t3956901511 * ___m_verticalSlider_14;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumb
	GUIStyle_t3956901511 * ___m_verticalSliderThumb_15;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbar
	GUIStyle_t3956901511 * ___m_horizontalScrollbar_16;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarThumb
	GUIStyle_t3956901511 * ___m_horizontalScrollbarThumb_17;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarLeftButton
	GUIStyle_t3956901511 * ___m_horizontalScrollbarLeftButton_18;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarRightButton
	GUIStyle_t3956901511 * ___m_horizontalScrollbarRightButton_19;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbar
	GUIStyle_t3956901511 * ___m_verticalScrollbar_20;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarThumb
	GUIStyle_t3956901511 * ___m_verticalScrollbarThumb_21;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarUpButton
	GUIStyle_t3956901511 * ___m_verticalScrollbarUpButton_22;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarDownButton
	GUIStyle_t3956901511 * ___m_verticalScrollbarDownButton_23;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_ScrollView
	GUIStyle_t3956901511 * ___m_ScrollView_24;
	// UnityEngine.GUIStyle[] UnityEngine.GUISkin::m_CustomStyles
	GUIStyleU5BU5D_t2383250302* ___m_CustomStyles_25;
	// UnityEngine.GUISettings UnityEngine.GUISkin::m_Settings
	GUISettings_t1774757634 * ___m_Settings_26;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle> UnityEngine.GUISkin::m_Styles
	Dictionary_2_t3742157810 * ___m_Styles_28;

public:
	inline static int32_t get_offset_of_m_Font_4() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_Font_4)); }
	inline Font_t1956802104 * get_m_Font_4() const { return ___m_Font_4; }
	inline Font_t1956802104 ** get_address_of_m_Font_4() { return &___m_Font_4; }
	inline void set_m_Font_4(Font_t1956802104 * value)
	{
		___m_Font_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Font_4), value);
	}

	inline static int32_t get_offset_of_m_box_5() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_box_5)); }
	inline GUIStyle_t3956901511 * get_m_box_5() const { return ___m_box_5; }
	inline GUIStyle_t3956901511 ** get_address_of_m_box_5() { return &___m_box_5; }
	inline void set_m_box_5(GUIStyle_t3956901511 * value)
	{
		___m_box_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_box_5), value);
	}

	inline static int32_t get_offset_of_m_button_6() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_button_6)); }
	inline GUIStyle_t3956901511 * get_m_button_6() const { return ___m_button_6; }
	inline GUIStyle_t3956901511 ** get_address_of_m_button_6() { return &___m_button_6; }
	inline void set_m_button_6(GUIStyle_t3956901511 * value)
	{
		___m_button_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_button_6), value);
	}

	inline static int32_t get_offset_of_m_toggle_7() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_toggle_7)); }
	inline GUIStyle_t3956901511 * get_m_toggle_7() const { return ___m_toggle_7; }
	inline GUIStyle_t3956901511 ** get_address_of_m_toggle_7() { return &___m_toggle_7; }
	inline void set_m_toggle_7(GUIStyle_t3956901511 * value)
	{
		___m_toggle_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_toggle_7), value);
	}

	inline static int32_t get_offset_of_m_label_8() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_label_8)); }
	inline GUIStyle_t3956901511 * get_m_label_8() const { return ___m_label_8; }
	inline GUIStyle_t3956901511 ** get_address_of_m_label_8() { return &___m_label_8; }
	inline void set_m_label_8(GUIStyle_t3956901511 * value)
	{
		___m_label_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_label_8), value);
	}

	inline static int32_t get_offset_of_m_textField_9() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_textField_9)); }
	inline GUIStyle_t3956901511 * get_m_textField_9() const { return ___m_textField_9; }
	inline GUIStyle_t3956901511 ** get_address_of_m_textField_9() { return &___m_textField_9; }
	inline void set_m_textField_9(GUIStyle_t3956901511 * value)
	{
		___m_textField_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_textField_9), value);
	}

	inline static int32_t get_offset_of_m_textArea_10() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_textArea_10)); }
	inline GUIStyle_t3956901511 * get_m_textArea_10() const { return ___m_textArea_10; }
	inline GUIStyle_t3956901511 ** get_address_of_m_textArea_10() { return &___m_textArea_10; }
	inline void set_m_textArea_10(GUIStyle_t3956901511 * value)
	{
		___m_textArea_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_textArea_10), value);
	}

	inline static int32_t get_offset_of_m_window_11() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_window_11)); }
	inline GUIStyle_t3956901511 * get_m_window_11() const { return ___m_window_11; }
	inline GUIStyle_t3956901511 ** get_address_of_m_window_11() { return &___m_window_11; }
	inline void set_m_window_11(GUIStyle_t3956901511 * value)
	{
		___m_window_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_window_11), value);
	}

	inline static int32_t get_offset_of_m_horizontalSlider_12() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_horizontalSlider_12)); }
	inline GUIStyle_t3956901511 * get_m_horizontalSlider_12() const { return ___m_horizontalSlider_12; }
	inline GUIStyle_t3956901511 ** get_address_of_m_horizontalSlider_12() { return &___m_horizontalSlider_12; }
	inline void set_m_horizontalSlider_12(GUIStyle_t3956901511 * value)
	{
		___m_horizontalSlider_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_horizontalSlider_12), value);
	}

	inline static int32_t get_offset_of_m_horizontalSliderThumb_13() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_horizontalSliderThumb_13)); }
	inline GUIStyle_t3956901511 * get_m_horizontalSliderThumb_13() const { return ___m_horizontalSliderThumb_13; }
	inline GUIStyle_t3956901511 ** get_address_of_m_horizontalSliderThumb_13() { return &___m_horizontalSliderThumb_13; }
	inline void set_m_horizontalSliderThumb_13(GUIStyle_t3956901511 * value)
	{
		___m_horizontalSliderThumb_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_horizontalSliderThumb_13), value);
	}

	inline static int32_t get_offset_of_m_verticalSlider_14() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_verticalSlider_14)); }
	inline GUIStyle_t3956901511 * get_m_verticalSlider_14() const { return ___m_verticalSlider_14; }
	inline GUIStyle_t3956901511 ** get_address_of_m_verticalSlider_14() { return &___m_verticalSlider_14; }
	inline void set_m_verticalSlider_14(GUIStyle_t3956901511 * value)
	{
		___m_verticalSlider_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_verticalSlider_14), value);
	}

	inline static int32_t get_offset_of_m_verticalSliderThumb_15() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_verticalSliderThumb_15)); }
	inline GUIStyle_t3956901511 * get_m_verticalSliderThumb_15() const { return ___m_verticalSliderThumb_15; }
	inline GUIStyle_t3956901511 ** get_address_of_m_verticalSliderThumb_15() { return &___m_verticalSliderThumb_15; }
	inline void set_m_verticalSliderThumb_15(GUIStyle_t3956901511 * value)
	{
		___m_verticalSliderThumb_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_verticalSliderThumb_15), value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbar_16() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_horizontalScrollbar_16)); }
	inline GUIStyle_t3956901511 * get_m_horizontalScrollbar_16() const { return ___m_horizontalScrollbar_16; }
	inline GUIStyle_t3956901511 ** get_address_of_m_horizontalScrollbar_16() { return &___m_horizontalScrollbar_16; }
	inline void set_m_horizontalScrollbar_16(GUIStyle_t3956901511 * value)
	{
		___m_horizontalScrollbar_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_horizontalScrollbar_16), value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarThumb_17() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_horizontalScrollbarThumb_17)); }
	inline GUIStyle_t3956901511 * get_m_horizontalScrollbarThumb_17() const { return ___m_horizontalScrollbarThumb_17; }
	inline GUIStyle_t3956901511 ** get_address_of_m_horizontalScrollbarThumb_17() { return &___m_horizontalScrollbarThumb_17; }
	inline void set_m_horizontalScrollbarThumb_17(GUIStyle_t3956901511 * value)
	{
		___m_horizontalScrollbarThumb_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_horizontalScrollbarThumb_17), value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarLeftButton_18() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_horizontalScrollbarLeftButton_18)); }
	inline GUIStyle_t3956901511 * get_m_horizontalScrollbarLeftButton_18() const { return ___m_horizontalScrollbarLeftButton_18; }
	inline GUIStyle_t3956901511 ** get_address_of_m_horizontalScrollbarLeftButton_18() { return &___m_horizontalScrollbarLeftButton_18; }
	inline void set_m_horizontalScrollbarLeftButton_18(GUIStyle_t3956901511 * value)
	{
		___m_horizontalScrollbarLeftButton_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_horizontalScrollbarLeftButton_18), value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarRightButton_19() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_horizontalScrollbarRightButton_19)); }
	inline GUIStyle_t3956901511 * get_m_horizontalScrollbarRightButton_19() const { return ___m_horizontalScrollbarRightButton_19; }
	inline GUIStyle_t3956901511 ** get_address_of_m_horizontalScrollbarRightButton_19() { return &___m_horizontalScrollbarRightButton_19; }
	inline void set_m_horizontalScrollbarRightButton_19(GUIStyle_t3956901511 * value)
	{
		___m_horizontalScrollbarRightButton_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_horizontalScrollbarRightButton_19), value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbar_20() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_verticalScrollbar_20)); }
	inline GUIStyle_t3956901511 * get_m_verticalScrollbar_20() const { return ___m_verticalScrollbar_20; }
	inline GUIStyle_t3956901511 ** get_address_of_m_verticalScrollbar_20() { return &___m_verticalScrollbar_20; }
	inline void set_m_verticalScrollbar_20(GUIStyle_t3956901511 * value)
	{
		___m_verticalScrollbar_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_verticalScrollbar_20), value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarThumb_21() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_verticalScrollbarThumb_21)); }
	inline GUIStyle_t3956901511 * get_m_verticalScrollbarThumb_21() const { return ___m_verticalScrollbarThumb_21; }
	inline GUIStyle_t3956901511 ** get_address_of_m_verticalScrollbarThumb_21() { return &___m_verticalScrollbarThumb_21; }
	inline void set_m_verticalScrollbarThumb_21(GUIStyle_t3956901511 * value)
	{
		___m_verticalScrollbarThumb_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_verticalScrollbarThumb_21), value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarUpButton_22() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_verticalScrollbarUpButton_22)); }
	inline GUIStyle_t3956901511 * get_m_verticalScrollbarUpButton_22() const { return ___m_verticalScrollbarUpButton_22; }
	inline GUIStyle_t3956901511 ** get_address_of_m_verticalScrollbarUpButton_22() { return &___m_verticalScrollbarUpButton_22; }
	inline void set_m_verticalScrollbarUpButton_22(GUIStyle_t3956901511 * value)
	{
		___m_verticalScrollbarUpButton_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_verticalScrollbarUpButton_22), value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarDownButton_23() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_verticalScrollbarDownButton_23)); }
	inline GUIStyle_t3956901511 * get_m_verticalScrollbarDownButton_23() const { return ___m_verticalScrollbarDownButton_23; }
	inline GUIStyle_t3956901511 ** get_address_of_m_verticalScrollbarDownButton_23() { return &___m_verticalScrollbarDownButton_23; }
	inline void set_m_verticalScrollbarDownButton_23(GUIStyle_t3956901511 * value)
	{
		___m_verticalScrollbarDownButton_23 = value;
		Il2CppCodeGenWriteBarrier((&___m_verticalScrollbarDownButton_23), value);
	}

	inline static int32_t get_offset_of_m_ScrollView_24() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_ScrollView_24)); }
	inline GUIStyle_t3956901511 * get_m_ScrollView_24() const { return ___m_ScrollView_24; }
	inline GUIStyle_t3956901511 ** get_address_of_m_ScrollView_24() { return &___m_ScrollView_24; }
	inline void set_m_ScrollView_24(GUIStyle_t3956901511 * value)
	{
		___m_ScrollView_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_ScrollView_24), value);
	}

	inline static int32_t get_offset_of_m_CustomStyles_25() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_CustomStyles_25)); }
	inline GUIStyleU5BU5D_t2383250302* get_m_CustomStyles_25() const { return ___m_CustomStyles_25; }
	inline GUIStyleU5BU5D_t2383250302** get_address_of_m_CustomStyles_25() { return &___m_CustomStyles_25; }
	inline void set_m_CustomStyles_25(GUIStyleU5BU5D_t2383250302* value)
	{
		___m_CustomStyles_25 = value;
		Il2CppCodeGenWriteBarrier((&___m_CustomStyles_25), value);
	}

	inline static int32_t get_offset_of_m_Settings_26() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_Settings_26)); }
	inline GUISettings_t1774757634 * get_m_Settings_26() const { return ___m_Settings_26; }
	inline GUISettings_t1774757634 ** get_address_of_m_Settings_26() { return &___m_Settings_26; }
	inline void set_m_Settings_26(GUISettings_t1774757634 * value)
	{
		___m_Settings_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_Settings_26), value);
	}

	inline static int32_t get_offset_of_m_Styles_28() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_Styles_28)); }
	inline Dictionary_2_t3742157810 * get_m_Styles_28() const { return ___m_Styles_28; }
	inline Dictionary_2_t3742157810 ** get_address_of_m_Styles_28() { return &___m_Styles_28; }
	inline void set_m_Styles_28(Dictionary_2_t3742157810 * value)
	{
		___m_Styles_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_Styles_28), value);
	}
};

struct GUISkin_t1244372282_StaticFields
{
public:
	// UnityEngine.GUIStyle UnityEngine.GUISkin::ms_Error
	GUIStyle_t3956901511 * ___ms_Error_27;
	// UnityEngine.GUISkin/SkinChangedDelegate UnityEngine.GUISkin::m_SkinChanged
	SkinChangedDelegate_t1143955295 * ___m_SkinChanged_29;
	// UnityEngine.GUISkin UnityEngine.GUISkin::current
	GUISkin_t1244372282 * ___current_30;

public:
	inline static int32_t get_offset_of_ms_Error_27() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282_StaticFields, ___ms_Error_27)); }
	inline GUIStyle_t3956901511 * get_ms_Error_27() const { return ___ms_Error_27; }
	inline GUIStyle_t3956901511 ** get_address_of_ms_Error_27() { return &___ms_Error_27; }
	inline void set_ms_Error_27(GUIStyle_t3956901511 * value)
	{
		___ms_Error_27 = value;
		Il2CppCodeGenWriteBarrier((&___ms_Error_27), value);
	}

	inline static int32_t get_offset_of_m_SkinChanged_29() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282_StaticFields, ___m_SkinChanged_29)); }
	inline SkinChangedDelegate_t1143955295 * get_m_SkinChanged_29() const { return ___m_SkinChanged_29; }
	inline SkinChangedDelegate_t1143955295 ** get_address_of_m_SkinChanged_29() { return &___m_SkinChanged_29; }
	inline void set_m_SkinChanged_29(SkinChangedDelegate_t1143955295 * value)
	{
		___m_SkinChanged_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_SkinChanged_29), value);
	}

	inline static int32_t get_offset_of_current_30() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282_StaticFields, ___current_30)); }
	inline GUISkin_t1244372282 * get_current_30() const { return ___current_30; }
	inline GUISkin_t1244372282 ** get_address_of_current_30() { return &___current_30; }
	inline void set_current_30(GUISkin_t1244372282 * value)
	{
		___current_30 = value;
		Il2CppCodeGenWriteBarrier((&___current_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUISKIN_T1244372282_H
#ifndef SKINCHANGEDDELEGATE_T1143955295_H
#define SKINCHANGEDDELEGATE_T1143955295_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUISkin/SkinChangedDelegate
struct  SkinChangedDelegate_t1143955295  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SKINCHANGEDDELEGATE_T1143955295_H
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t2510215842  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GUILayoutOption_t811797299 * m_Items[1];

public:
	inline GUILayoutOption_t811797299 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GUILayoutOption_t811797299 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GUILayoutOption_t811797299 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GUILayoutOption_t811797299 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GUILayoutOption_t811797299 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GUILayoutOption_t811797299 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
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
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t2383250302  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GUIStyle_t3956901511 * m_Items[1];

public:
	inline GUIStyle_t3956901511 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GUIStyle_t3956901511 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GUIStyle_t3956901511 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GUIStyle_t3956901511 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GUIStyle_t3956901511 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GUIStyle_t3956901511 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};

extern "C" void GUIStyleState_t1397964415_marshal_pinvoke(const GUIStyleState_t1397964415& unmarshaled, GUIStyleState_t1397964415_marshaled_pinvoke& marshaled);
extern "C" void GUIStyleState_t1397964415_marshal_pinvoke_back(const GUIStyleState_t1397964415_marshaled_pinvoke& marshaled, GUIStyleState_t1397964415& unmarshaled);
extern "C" void GUIStyleState_t1397964415_marshal_pinvoke_cleanup(GUIStyleState_t1397964415_marshaled_pinvoke& marshaled);
extern "C" void RectOffset_t1369453676_marshal_pinvoke(const RectOffset_t1369453676& unmarshaled, RectOffset_t1369453676_marshaled_pinvoke& marshaled);
extern "C" void RectOffset_t1369453676_marshal_pinvoke_back(const RectOffset_t1369453676_marshaled_pinvoke& marshaled, RectOffset_t1369453676& unmarshaled);
extern "C" void RectOffset_t1369453676_marshal_pinvoke_cleanup(RectOffset_t1369453676_marshaled_pinvoke& marshaled);
extern "C" void GUIStyleState_t1397964415_marshal_com(const GUIStyleState_t1397964415& unmarshaled, GUIStyleState_t1397964415_marshaled_com& marshaled);
extern "C" void GUIStyleState_t1397964415_marshal_com_back(const GUIStyleState_t1397964415_marshaled_com& marshaled, GUIStyleState_t1397964415& unmarshaled);
extern "C" void GUIStyleState_t1397964415_marshal_com_cleanup(GUIStyleState_t1397964415_marshaled_com& marshaled);
extern "C" void RectOffset_t1369453676_marshal_com(const RectOffset_t1369453676& unmarshaled, RectOffset_t1369453676_marshaled_com& marshaled);
extern "C" void RectOffset_t1369453676_marshal_com_back(const RectOffset_t1369453676_marshaled_com& marshaled, RectOffset_t1369453676& unmarshaled);
extern "C" void RectOffset_t1369453676_marshal_com_cleanup(RectOffset_t1369453676_marshaled_com& marshaled);
extern "C" void GUIStyle_t3956901511_marshal_pinvoke(const GUIStyle_t3956901511& unmarshaled, GUIStyle_t3956901511_marshaled_pinvoke& marshaled);
extern "C" void GUIStyle_t3956901511_marshal_pinvoke_back(const GUIStyle_t3956901511_marshaled_pinvoke& marshaled, GUIStyle_t3956901511& unmarshaled);
extern "C" void GUIStyle_t3956901511_marshal_pinvoke_cleanup(GUIStyle_t3956901511_marshaled_pinvoke& marshaled);
extern "C" void GUIStyle_t3956901511_marshal_com(const GUIStyle_t3956901511& unmarshaled, GUIStyle_t3956901511_marshaled_com& marshaled);
extern "C" void GUIStyle_t3956901511_marshal_com_back(const GUIStyle_t3956901511_marshaled_com& marshaled, GUIStyle_t3956901511& unmarshaled);
extern "C" void GUIStyle_t3956901511_marshal_com_cleanup(GUIStyle_t3956901511_marshaled_com& marshaled);

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t2146457487  List_1_GetEnumerator_m816315209_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m337713592_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m3007748546_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m1328026504_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(!0,!1&)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m1190268628_gshared (Dictionary_2_t1968819495 * __this, int32_t p0, RuntimeObject ** p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m2744859241_gshared (Dictionary_2_t1968819495 * __this, int32_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::Clear()
extern "C" IL2CPP_METHOD_ATTR void Stack_1_Clear_m2415304221_gshared (Stack_1_t3923495619 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(!0)
extern "C" IL2CPP_METHOD_ATTR void Stack_1_Push_m1669856732_gshared (Stack_1_t3923495619 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2601736566_gshared (Dictionary_2_t1968819495 * __this, const RuntimeMethod* method);
// !2 System.Func`3<System.Int32,System.IntPtr,System.Boolean>::Invoke(!0,!1)
extern "C" IL2CPP_METHOD_ATTR bool Func_3_Invoke_m4134091626_gshared (Func_3_t4119323734 * __this, int32_t p0, intptr_t p1, const RuntimeMethod* method);
// !1 System.Func`2<System.Object,System.Boolean>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR bool Func_2_Invoke_m2315818287_gshared (Func_2_t3759279471 * __this, RuntimeObject * p0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.IntPtr UnityEngine.Event::Internal_Create(System.Int32)
extern "C" IL2CPP_METHOD_ATTR intptr_t Event_Internal_Create_m1213874754 (RuntimeObject * __this /* static, unused */, int32_t ___displayIndex0, const RuntimeMethod* method);
// System.Void UnityEngine.Event::get_mousePosition_Injected(UnityEngine.Vector2&)
extern "C" IL2CPP_METHOD_ATTR void Event_get_mousePosition_Injected_m965636457 (Event_t2956885303 * __this, Vector2_t2156229523 * ___ret0, const RuntimeMethod* method);
// System.Void UnityEngine.Event::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Event__ctor_m526447123 (Event_t2956885303 * __this, int32_t ___displayIndex0, const RuntimeMethod* method);
// System.Void UnityEngine.Event::set_displayIndex(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Event_set_displayIndex_m1342258734 (Event_t2956885303 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Event::Internal_SetNativeEvent(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Event_Internal_SetNativeEvent_m1397431767 (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m3063970704 (RuntimeObject * __this /* static, unused */, intptr_t p0, intptr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Event::Internal_Destroy(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Event_Internal_Destroy_m928770705 (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
extern "C" IL2CPP_METHOD_ATTR void Object_Finalize_m3076187857 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.EventType UnityEngine.Event::get_type()
extern "C" IL2CPP_METHOD_ATTR int32_t Event_get_type_m1370041809 (Event_t2956885303 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Event::get_isKey()
extern "C" IL2CPP_METHOD_ATTR bool Event_get_isKey_m1703963445 (Event_t2956885303 * __this, const RuntimeMethod* method);
// UnityEngine.KeyCode UnityEngine.Event::get_keyCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Event_get_keyCode_m1098493350 (Event_t2956885303 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Event::get_isMouse()
extern "C" IL2CPP_METHOD_ATTR bool Event_get_isMouse_m1058251071 (Event_t2956885303 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Event::get_mousePosition()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Event_get_mousePosition_m733809635 (Event_t2956885303 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector2::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Vector2_GetHashCode_m3916089713 (Vector2_t2156229523 * __this, const RuntimeMethod* method);
// UnityEngine.EventModifiers UnityEngine.Event::get_modifiers()
extern "C" IL2CPP_METHOD_ATTR int32_t Event_get_modifiers_m995073384 (Event_t2956885303 * __this, const RuntimeMethod* method);
// System.Type System.Object::GetType()
extern "C" IL2CPP_METHOD_ATTR Type_t * Object_GetType_m88164663 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m2303255133 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, Vector2_t2156229523  p1, const RuntimeMethod* method);
// System.Char UnityEngine.Event::get_character()
extern "C" IL2CPP_METHOD_ATTR Il2CppChar Event_get_character_m1666742088 (Event_t2956885303 * __this, const RuntimeMethod* method);
// System.String UnityEngine.UnityString::Format(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* UnityString_Format_m261690510 (RuntimeObject * __this /* static, unused */, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m2971454694 (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method);
// System.String UnityEngine.Event::get_commandName()
extern "C" IL2CPP_METHOD_ATTR String_t* Event_get_commandName_m4275147343 (Event_t2956885303 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void UnityEngineInternal.GenericStack::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GenericStack__ctor_m933681517 (GenericStack_t1310059385 * __this, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_Now()
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  DateTime_get_Now_m1277138875 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::set_nextScrollStepTime(System.DateTime)
extern "C" IL2CPP_METHOD_ATTR void GUI_set_nextScrollStepTime_m1026410471 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIUtility::CheckOnGUI()
extern "C" IL2CPP_METHOD_ATTR void GUIUtility_CheckOnGUI_m3924092168 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::DoSetSkin(UnityEngine.GUISkin)
extern "C" IL2CPP_METHOD_ATTR void GUI_DoSetSkin_m604425702 (RuntimeObject * __this /* static, unused */, GUISkin_t1244372282 * ___newSkin0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Implicit_m3574996620 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// UnityEngine.GUISkin UnityEngine.GUIUtility::GetDefaultSkin()
extern "C" IL2CPP_METHOD_ATTR GUISkin_t1244372282 * GUIUtility_GetDefaultSkin_m1141001896 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.GUISkin::MakeCurrent()
extern "C" IL2CPP_METHOD_ATTR void GUISkin_MakeCurrent_m3239192349 (GUISkin_t1244372282 * __this, const RuntimeMethod* method);
// UnityEngine.GUILayoutUtility/LayoutCache UnityEngine.GUILayoutUtility::SelectIDList(System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR LayoutCache_t78309876 * GUILayoutUtility_SelectIDList_m294753167 (RuntimeObject * __this /* static, unused */, int32_t ___instanceID0, bool ___isWindow1, const RuntimeMethod* method);
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
extern "C" IL2CPP_METHOD_ATTR GUISkin_t1244372282 * GUI_get_skin_m1874615010 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Event UnityEngine.Event::get_current()
extern "C" IL2CPP_METHOD_ATTR Event_t2956885303 * Event_get_current_m2393892120 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Width(System.Single)
extern "C" IL2CPP_METHOD_ATTR GUILayoutOption_t811797299 * GUILayout_Width_m1777696537 (RuntimeObject * __this /* static, unused */, float ___width0, const RuntimeMethod* method);
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Height(System.Single)
extern "C" IL2CPP_METHOD_ATTR GUILayoutOption_t811797299 * GUILayout_Height_m3349769634 (RuntimeObject * __this /* static, unused */, float ___height0, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutUtility::BeginWindow(System.Int32,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" IL2CPP_METHOD_ATTR void GUILayoutUtility_BeginWindow_m2240221150 (RuntimeObject * __this /* static, unused */, int32_t ___windowID0, GUIStyle_t3956901511 * ___style1, GUILayoutOptionU5BU5D_t2510215842* ___options2, const RuntimeMethod* method);
// UnityEngine.GUIStyle UnityEngine.GUIStyle::get_none()
extern "C" IL2CPP_METHOD_ATTR GUIStyle_t3956901511 * GUIStyle_get_none_m1545577352 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
extern "C" IL2CPP_METHOD_ATTR void GUI_set_skin_m3073574632 (RuntimeObject * __this /* static, unused */, GUISkin_t1244372282 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GUI/WindowFunction::Invoke(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void WindowFunction_Invoke_m3205356586 (WindowFunction_t3146511083 * __this, int32_t ___id0, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutUtility::Layout()
extern "C" IL2CPP_METHOD_ATTR void GUILayoutUtility_Layout_m1159951704 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.GUIContent::.ctor(System.String,UnityEngine.Texture,System.String)
extern "C" IL2CPP_METHOD_ATTR void GUIContent__ctor_m2166411317 (GUIContent_t3050628031 * __this, String_t* ___text0, Texture_t3661962703 * ___image1, String_t* ___tooltip2, const RuntimeMethod* method);
// System.Void UnityEngine.GUIContent::set_text(System.String)
extern "C" IL2CPP_METHOD_ATTR void GUIContent_set_text_m607297463 (GUIContent_t3050628031 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIContent::set_image(UnityEngine.Texture)
extern "C" IL2CPP_METHOD_ATTR void GUIContent_set_image_m1091531865 (GUIContent_t3050628031 * __this, Texture_t3661962703 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIContent::set_tooltip(System.String)
extern "C" IL2CPP_METHOD_ATTR void GUIContent_set_tooltip_m738967743 (GUIContent_t3050628031 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIContent::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GUIContent__ctor_m3360759894 (GUIContent_t3050628031 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUIContent::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void GUIContent__ctor_m890195579 (GUIContent_t3050628031 * __this, String_t* ___text0, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutOption::.ctor(UnityEngine.GUILayoutOption/Type,System.Object)
extern "C" IL2CPP_METHOD_ATTR void GUILayoutOption__ctor_m2091649807 (GUILayoutOption_t811797299 * __this, int32_t ___type0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Rect__ctor_m2614021312 (Rect_t2360479859 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutEntry::set_style(UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR void GUILayoutEntry_set_style_m1702960184 (GUILayoutEntry_t3214611570 * __this, GUIStyle_t3956901511 * ___value0, const RuntimeMethod* method);
// UnityEngine.GUIStyle UnityEngine.GUILayoutEntry::get_style()
extern "C" IL2CPP_METHOD_ATTR GUIStyle_t3956901511 * GUILayoutEntry_get_style_m3965981147 (GUILayoutEntry_t3214611570 * __this, const RuntimeMethod* method);
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_margin()
extern "C" IL2CPP_METHOD_ATTR RectOffset_t1369453676 * GUIStyle_get_margin_m3595798603 (GUIStyle_t3956901511 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_x(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Rect_set_x_m2352063068 (Rect_t2360479859 * __this, float p0, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_width(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Rect_set_width_m2963421158 (Rect_t2360479859 * __this, float p0, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_y(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Rect_set_y_m3702432190 (Rect_t2360479859 * __this, float p0, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_height(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Rect_set_height_m1625569324 (Rect_t2360479859 * __this, float p0, const RuntimeMethod* method);
// System.Single UnityEngine.GUIStyle::get_fixedWidth()
extern "C" IL2CPP_METHOD_ATTR float GUIStyle_get_fixedWidth_m2576616348 (GUIStyle_t3956901511 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GUIStyle::get_stretchWidth()
extern "C" IL2CPP_METHOD_ATTR bool GUIStyle_get_stretchWidth_m3556443132 (GUIStyle_t3956901511 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.GUIStyle::get_fixedHeight()
extern "C" IL2CPP_METHOD_ATTR float GUIStyle_get_fixedHeight_m2868324709 (GUIStyle_t3956901511 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GUIStyle::get_stretchHeight()
extern "C" IL2CPP_METHOD_ATTR bool GUIStyle_get_stretchHeight_m4172805773 (GUIStyle_t3956901511 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.String UnityEngine.GUIStyle::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* GUIStyle_get_name_m2109418832 (GUIStyle_t3956901511 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_x()
extern "C" IL2CPP_METHOD_ATTR float Rect_get_x_m3839990490 (Rect_t2360479859 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_xMax()
extern "C" IL2CPP_METHOD_ATTR float Rect_get_xMax_m3018144503 (Rect_t2360479859 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_y()
extern "C" IL2CPP_METHOD_ATTR float Rect_get_y_m1501338330 (Rect_t2360479859 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_yMax()
extern "C" IL2CPP_METHOD_ATTR float Rect_get_yMax_m743455479 (Rect_t2360479859 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.ctor()
inline void List_1__ctor_m1360362241 (List_1_t391719016 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t391719016 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void UnityEngine.RectOffset::.ctor()
extern "C" IL2CPP_METHOD_ATTR void RectOffset__ctor_m3236153262 (RectOffset_t1369453676 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutEntry::.ctor(System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR void GUILayoutEntry__ctor_m2229197035 (GUILayoutEntry_t3214611570 * __this, float ____minWidth0, float ____maxWidth1, float ____minHeight2, float ____maxHeight3, GUIStyle_t3956901511 * ____style4, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutEntry::ApplyOptions(UnityEngine.GUILayoutOption[])
extern "C" IL2CPP_METHOD_ATTR void GUILayoutEntry_ApplyOptions_m1741659338 (GUILayoutEntry_t3214611570 * __this, GUILayoutOptionU5BU5D_t2510215842* ___options0, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutEntry::ApplyStyleSettings(UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR void GUILayoutEntry_ApplyStyleSettings_m4137899058 (GUILayoutEntry_t3214611570 * __this, GUIStyle_t3956901511 * ___style0, const RuntimeMethod* method);
// System.Int32 UnityEngine.RectOffset::get_left()
extern "C" IL2CPP_METHOD_ATTR int32_t RectOffset_get_left_m1232181034 (RectOffset_t1369453676 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RectOffset::set_left(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void RectOffset_set_left_m432301222 (RectOffset_t1369453676 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 UnityEngine.RectOffset::get_right()
extern "C" IL2CPP_METHOD_ATTR int32_t RectOffset_get_right_m2294081512 (RectOffset_t1369453676 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RectOffset::set_right(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void RectOffset_set_right_m807318764 (RectOffset_t1369453676 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 UnityEngine.RectOffset::get_top()
extern "C" IL2CPP_METHOD_ATTR int32_t RectOffset_get_top_m2855347295 (RectOffset_t1369453676 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RectOffset::set_top(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void RectOffset_set_top_m713260669 (RectOffset_t1369453676 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 UnityEngine.RectOffset::get_bottom()
extern "C" IL2CPP_METHOD_ATTR int32_t RectOffset_get_bottom_m890891527 (RectOffset_t1369453676 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RectOffset::set_bottom(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void RectOffset_set_bottom_m2747419780 (RectOffset_t1369453676 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count()
inline int32_t List_1_get_Count_m1057782749 (List_1_t391719016 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t391719016 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_padding()
extern "C" IL2CPP_METHOD_ATTR RectOffset_t1369453676 * GUIStyle_get_padding_m3526264743 (GUIStyle_t3956901511 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.RectOffset::get_horizontal()
extern "C" IL2CPP_METHOD_ATTR int32_t RectOffset_get_horizontal_m2663785949 (RectOffset_t1369453676 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::GetEnumerator()
inline Enumerator_t2280962893  List_1_GetEnumerator_m1934946323 (List_1_t391719016 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t2280962893  (*) (List_1_t391719016 *, const RuntimeMethod*))List_1_GetEnumerator_m816315209_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>::get_Current()
inline GUILayoutEntry_t3214611570 * Enumerator_get_Current_m2663170093 (Enumerator_t2280962893 * __this, const RuntimeMethod* method)
{
	return ((  GUILayoutEntry_t3214611570 * (*) (Enumerator_t2280962893 *, const RuntimeMethod*))Enumerator_get_Current_m337713592_gshared)(__this, method);
}
// UnityEngine.GUIStyle UnityEngine.GUILayoutUtility::get_spaceStyle()
extern "C" IL2CPP_METHOD_ATTR GUIStyle_t3956901511 * GUILayoutUtility_get_spaceStyle_m3392862907 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Mathf_Min_m18103608 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_Max_m3146388979 (RuntimeObject * __this /* static, unused */, float p0, float p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>::MoveNext()
inline bool Enumerator_MoveNext_m2324433341 (Enumerator_t2280962893 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t2280962893 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>::Dispose()
inline void Enumerator_Dispose_m3494652212 (Enumerator_t2280962893 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2280962893 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Item(System.Int32)
inline GUILayoutEntry_t3214611570 * List_1_get_Item_m3839229424 (List_1_t391719016 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  GUILayoutEntry_t3214611570 * (*) (List_1_t391719016 *, int32_t, const RuntimeMethod*))List_1_get_Item_m1328026504_gshared)(__this, p0, method);
}
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Mathf_Max_m3673002171 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void GUILayoutEntry_SetHorizontal_m3919283295 (GUILayoutEntry_t3214611570 * __this, float ___x0, float ___width1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_Clamp_m3350697880 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_Lerp_m1004423579 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Int32 UnityEngine.RectOffset::get_vertical()
extern "C" IL2CPP_METHOD_ATTR int32_t RectOffset_get_vertical_m2029961580 (RectOffset_t1369453676 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void GUILayoutEntry_SetVertical_m1089980778 (GUILayoutEntry_t3214611570 * __this, float ___y0, float ___height1, const RuntimeMethod* method);
// System.String UnityEngine.GUILayoutEntry::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* GUILayoutEntry_ToString_m3366663569 (GUILayoutEntry_t3214611570 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutUtility::Internal_GetWindowRect_Injected(System.Int32,UnityEngine.Rect&)
extern "C" IL2CPP_METHOD_ATTR void GUILayoutUtility_Internal_GetWindowRect_Injected_m1537976334 (RuntimeObject * __this /* static, unused */, int32_t ___windowID0, Rect_t2360479859 * ___ret1, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutUtility::Internal_MoveWindow_Injected(System.Int32,UnityEngine.Rect&)
extern "C" IL2CPP_METHOD_ATTR void GUILayoutUtility_Internal_MoveWindow_Injected_m1941891499 (RuntimeObject * __this /* static, unused */, int32_t ___windowID0, Rect_t2360479859 * ___r1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m4148288222 (Dictionary_2_t3261990503 * __this, int32_t p0, LayoutCache_t78309876 ** p1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3261990503 *, int32_t, LayoutCache_t78309876 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m1190268628_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.GUILayoutUtility/LayoutCache::.ctor()
extern "C" IL2CPP_METHOD_ATTR void LayoutCache__ctor_m3885940174 (LayoutCache_t78309876 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m2818144 (Dictionary_2_t3261990503 * __this, int32_t p0, LayoutCache_t78309876 * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3261990503 *, int32_t, LayoutCache_t78309876 *, const RuntimeMethod*))Dictionary_2_set_Item_m2744859241_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.GUILayoutGroup::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GUILayoutGroup__ctor_m3245996524 (GUILayoutGroup_t2157789695 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::Clear()
inline void Stack_1_Clear_m2415304221 (Stack_1_t3923495619 * __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t3923495619 *, const RuntimeMethod*))Stack_1_Clear_m2415304221_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(!0)
inline void Stack_1_Push_m1669856732 (Stack_1_t3923495619 * __this, RuntimeObject * p0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t3923495619 *, RuntimeObject *, const RuntimeMethod*))Stack_1_Push_m1669856732_gshared)(__this, p0, method);
}
// System.Int32 UnityEngine.Screen::get_width()
extern "C" IL2CPP_METHOD_ATTR int32_t Screen_get_width_m345039817 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Single UnityEngine.GUIUtility::get_pixelsPerPoint()
extern "C" IL2CPP_METHOD_ATTR float GUIUtility_get_pixelsPerPoint_m2369948084 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_Min_m1073399594 (RuntimeObject * __this /* static, unused */, float p0, float p1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
extern "C" IL2CPP_METHOD_ATTR int32_t Screen_get_height_m1623532518 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutUtility::LayoutFreeGroup(UnityEngine.GUILayoutGroup)
extern "C" IL2CPP_METHOD_ATTR void GUILayoutUtility_LayoutFreeGroup_m2955697397 (RuntimeObject * __this /* static, unused */, GUILayoutGroup_t2157789695 * ___toplevel0, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutUtility::LayoutSingleGroup(UnityEngine.GUILayoutGroup)
extern "C" IL2CPP_METHOD_ATTR void GUILayoutUtility_LayoutSingleGroup_m700786689 (RuntimeObject * __this /* static, unused */, GUILayoutGroup_t2157789695 * ___i0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogError_m2850623458 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutGroup::ResetCursor()
extern "C" IL2CPP_METHOD_ATTR void GUILayoutGroup_ResetCursor_m672314614 (GUILayoutGroup_t2157789695 * __this, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.GUILayoutUtility::Internal_GetWindowRect(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Rect_t2360479859  GUILayoutUtility_Internal_GetWindowRect_m2131267775 (RuntimeObject * __this /* static, unused */, int32_t ___windowID0, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_width()
extern "C" IL2CPP_METHOD_ATTR float Rect_get_width_m3421484486 (Rect_t2360479859 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_height()
extern "C" IL2CPP_METHOD_ATTR float Rect_get_height_m1358425599 (Rect_t2360479859 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutUtility::Internal_MoveWindow(System.Int32,UnityEngine.Rect)
extern "C" IL2CPP_METHOD_ATTR void GUILayoutUtility_Internal_MoveWindow_m3463958180 (RuntimeObject * __this /* static, unused */, int32_t ___windowID0, Rect_t2360479859  ___r1, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GUIStyle__ctor_m4038363858 (GUIStyle_t3956901511 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_stretchWidth(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle_set_stretchWidth_m2564034386 (GUIStyle_t3956901511 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::.ctor()
inline void Dictionary_2__ctor_m610848861 (Dictionary_2_t3261990503 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3261990503 *, const RuntimeMethod*))Dictionary_2__ctor_m2601736566_gshared)(__this, method);
}
// System.Void UnityEngine.GUILayoutGroup::CalcWidth()
extern "C" IL2CPP_METHOD_ATTR void GUILayoutGroup_CalcWidth_m1389741370 (GUILayoutGroup_t2157789695 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutGroup::SetHorizontal(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void GUILayoutGroup_SetHorizontal_m996475327 (GUILayoutGroup_t2157789695 * __this, float ___x0, float ___width1, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutGroup::CalcHeight()
extern "C" IL2CPP_METHOD_ATTR void GUILayoutGroup_CalcHeight_m1669391299 (GUILayoutGroup_t2157789695 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutGroup::SetVertical(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void GUILayoutGroup_SetVertical_m2446642182 (GUILayoutGroup_t2157789695 * __this, float ___y0, float ___height1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_white_m332174077 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Color__ctor_m286683560 (Color_t2555686324 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.GUISettings::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GUISettings__ctor_m2761652600 (GUISettings_t1774757634 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ScriptableObject::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m1310743131 (ScriptableObject_t2528358522 * __this, const RuntimeMethod* method);
// UnityEngine.Font UnityEngine.GUISkin::get_font()
extern "C" IL2CPP_METHOD_ATTR Font_t1956802104 * GUISkin_get_font_m3937910082 (GUISkin_t1244372282 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::SetDefaultFont(UnityEngine.Font)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle_SetDefaultFont_m1581452579 (RuntimeObject * __this /* static, unused */, Font_t1956802104 * ___font0, const RuntimeMethod* method);
// System.Void UnityEngine.GUISkin/SkinChangedDelegate::Invoke()
extern "C" IL2CPP_METHOD_ATTR void SkinChangedDelegate_Invoke_m3627689407 (SkinChangedDelegate_t1143955295 * __this, const RuntimeMethod* method);
// System.IntPtr UnityEngine.GUIStyle::Internal_Create(UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR intptr_t GUIStyle_Internal_Create_m2274420027 (RuntimeObject * __this /* static, unused */, GUIStyle_t3956901511 * ___self0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::Internal_Destroy(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle_Internal_Destroy_m293134876 (RuntimeObject * __this /* static, unused */, intptr_t ___self0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.GUIStyle::GetRectOffsetPtr(System.Int32)
extern "C" IL2CPP_METHOD_ATTR intptr_t GUIStyle_GetRectOffsetPtr_m2881421249 (GUIStyle_t3956901511 * __this, int32_t ___idx0, const RuntimeMethod* method);
// System.Void UnityEngine.RectOffset::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void RectOffset__ctor_m2718275157 (RectOffset_t1369453676 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.IntPtr UnityEngine.GUIStyleState::Init()
extern "C" IL2CPP_METHOD_ATTR intptr_t GUIStyleState_Init_m1843829800 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyleState::Cleanup()
extern "C" IL2CPP_METHOD_ATTR void GUIStyleState_Cleanup_m696329069 (GUIStyleState_t1397964415 * __this, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
extern "C" IL2CPP_METHOD_ATTR void Action_Invoke_m423955441 (Action_t1264377477 * __this, const RuntimeMethod* method);
// System.Object UnityEngine.GUIUtility::Internal_GetDefaultSkin(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GUIUtility_Internal_GetDefaultSkin_m995660429 (RuntimeObject * __this /* static, unused */, int32_t ___skinMode0, const RuntimeMethod* method);
// !2 System.Func`3<System.Int32,System.IntPtr,System.Boolean>::Invoke(!0,!1)
inline bool Func_3_Invoke_m4134091626 (Func_3_t4119323734 * __this, int32_t p0, intptr_t p1, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_3_t4119323734 *, int32_t, intptr_t, const RuntimeMethod*))Func_3_Invoke_m4134091626_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.GUIUtility::ResetGlobalState()
extern "C" IL2CPP_METHOD_ATTR void GUIUtility_ResetGlobalState_m2426294461 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutUtility::Begin(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void GUILayoutUtility_Begin_m1358735224 (RuntimeObject * __this /* static, unused */, int32_t ___instanceID0, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutUtility::LayoutFromEditorWindow()
extern "C" IL2CPP_METHOD_ATTR void GUILayoutUtility_LayoutFromEditorWindow_m2914699782 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.GUIContent::ClearStaticCache()
extern "C" IL2CPP_METHOD_ATTR void GUIContent_ClearStaticCache_m1205116045 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.GUIUtility::Internal_ExitGUI()
extern "C" IL2CPP_METHOD_ATTR void GUIUtility_Internal_ExitGUI_m273923508 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean UnityEngine.GUIUtility::ShouldRethrowException(System.Exception)
extern "C" IL2CPP_METHOD_ATTR bool GUIUtility_ShouldRethrowException_m1544932394 (RuntimeObject * __this /* static, unused */, Exception_t * ___exception0, const RuntimeMethod* method);
// !1 System.Func`2<System.Exception,System.Boolean>::Invoke(!0)
inline bool Func_2_Invoke_m2401667781 (Func_2_t3450341358 * __this, Exception_t * p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t3450341358 *, Exception_t *, const RuntimeMethod*))Func_2_Invoke_m2315818287_gshared)(__this, p0, method);
}
// System.Void UnityEngine.GUIUtility::set_guiIsExiting(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GUIUtility_set_guiIsExiting_m1558910088 (RuntimeObject * __this /* static, unused */, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::set_changed(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GUI_set_changed_m535954674 (RuntimeObject * __this /* static, unused */, bool ___value0, const RuntimeMethod* method);
// System.Exception System.Exception::get_InnerException()
extern "C" IL2CPP_METHOD_ATTR Exception_t * Exception_get_InnerException_m3836775 (Exception_t * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GUIUtility::IsExitGUIException(System.Exception)
extern "C" IL2CPP_METHOD_ATTR bool GUIUtility_IsExitGUIException_m3644066650 (RuntimeObject * __this /* static, unused */, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Int32 UnityEngine.GUIUtility::get_guiDepth()
extern "C" IL2CPP_METHOD_ATTR int32_t GUIUtility_get_guiDepth_m3282451554 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m1312628991 (ArgumentException_t132251570 * __this, String_t* p0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_get_zero_m540426400 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
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
// Conversion methods for marshalling of: UnityEngine.Event
extern "C" void Event_t2956885303_marshal_pinvoke(const Event_t2956885303& unmarshaled, Event_t2956885303_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
extern "C" void Event_t2956885303_marshal_pinvoke_back(const Event_t2956885303_marshaled_pinvoke& marshaled, Event_t2956885303& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Event
extern "C" void Event_t2956885303_marshal_pinvoke_cleanup(Event_t2956885303_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Event
extern "C" void Event_t2956885303_marshal_com(const Event_t2956885303& unmarshaled, Event_t2956885303_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
extern "C" void Event_t2956885303_marshal_com_back(const Event_t2956885303_marshaled_com& marshaled, Event_t2956885303& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Event
extern "C" void Event_t2956885303_marshal_com_cleanup(Event_t2956885303_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Event::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Event__ctor_m526447123 (Event_t2956885303 * __this, int32_t ___displayIndex0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___displayIndex0;
		intptr_t L_1 = Event_Internal_Create_m1213874754(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->set_m_Ptr_0(L_1);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.Event::get_mousePosition()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Event_get_mousePosition_m733809635 (Event_t2956885303 * __this, const RuntimeMethod* method)
{
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Event_get_mousePosition_Injected_m965636457(__this, (Vector2_t2156229523 *)(&V_0), /*hidden argument*/NULL);
		Vector2_t2156229523  L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.EventModifiers UnityEngine.Event::get_modifiers()
extern "C" IL2CPP_METHOD_ATTR int32_t Event_get_modifiers_m995073384 (Event_t2956885303 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*Event_get_modifiers_m995073384_ftn) (Event_t2956885303 *);
	static Event_get_modifiers_m995073384_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_modifiers_m995073384_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_modifiers()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Char UnityEngine.Event::get_character()
extern "C" IL2CPP_METHOD_ATTR Il2CppChar Event_get_character_m1666742088 (Event_t2956885303 * __this, const RuntimeMethod* method)
{
	typedef Il2CppChar (*Event_get_character_m1666742088_ftn) (Event_t2956885303 *);
	static Event_get_character_m1666742088_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_character_m1666742088_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_character()");
	Il2CppChar retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.KeyCode UnityEngine.Event::get_keyCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Event_get_keyCode_m1098493350 (Event_t2956885303 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*Event_get_keyCode_m1098493350_ftn) (Event_t2956885303 *);
	static Event_get_keyCode_m1098493350_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_keyCode_m1098493350_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_keyCode()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Event::set_displayIndex(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Event_set_displayIndex_m1342258734 (Event_t2956885303 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*Event_set_displayIndex_m1342258734_ftn) (Event_t2956885303 *, int32_t);
	static Event_set_displayIndex_m1342258734_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_set_displayIndex_m1342258734_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::set_displayIndex(System.Int32)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.EventType UnityEngine.Event::get_type()
extern "C" IL2CPP_METHOD_ATTR int32_t Event_get_type_m1370041809 (Event_t2956885303 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*Event_get_type_m1370041809_ftn) (Event_t2956885303 *);
	static Event_get_type_m1370041809_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_type_m1370041809_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_type()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.String UnityEngine.Event::get_commandName()
extern "C" IL2CPP_METHOD_ATTR String_t* Event_get_commandName_m4275147343 (Event_t2956885303 * __this, const RuntimeMethod* method)
{
	typedef String_t* (*Event_get_commandName_m4275147343_ftn) (Event_t2956885303 *);
	static Event_get_commandName_m4275147343_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_commandName_m4275147343_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_commandName()");
	String_t* retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.IntPtr UnityEngine.Event::Internal_Create(System.Int32)
extern "C" IL2CPP_METHOD_ATTR intptr_t Event_Internal_Create_m1213874754 (RuntimeObject * __this /* static, unused */, int32_t ___displayIndex0, const RuntimeMethod* method)
{
	typedef intptr_t (*Event_Internal_Create_m1213874754_ftn) (int32_t);
	static Event_Internal_Create_m1213874754_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_Internal_Create_m1213874754_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Internal_Create(System.Int32)");
	intptr_t retVal = _il2cpp_icall_func(___displayIndex0);
	return retVal;
}
// System.Void UnityEngine.Event::Internal_Destroy(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Event_Internal_Destroy_m928770705 (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, const RuntimeMethod* method)
{
	typedef void (*Event_Internal_Destroy_m928770705_ftn) (intptr_t);
	static Event_Internal_Destroy_m928770705_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_Internal_Destroy_m928770705_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Internal_Destroy(System.IntPtr)");
	_il2cpp_icall_func(___ptr0);
}
// System.Void UnityEngine.Event::Internal_SetNativeEvent(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Event_Internal_SetNativeEvent_m1397431767 (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, const RuntimeMethod* method)
{
	typedef void (*Event_Internal_SetNativeEvent_m1397431767_ftn) (intptr_t);
	static Event_Internal_SetNativeEvent_m1397431767_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_Internal_SetNativeEvent_m1397431767_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Internal_SetNativeEvent(System.IntPtr)");
	_il2cpp_icall_func(___ptr0);
}
// System.Void UnityEngine.Event::Internal_MakeMasterEventCurrent(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Event_Internal_MakeMasterEventCurrent_m112421958 (RuntimeObject * __this /* static, unused */, int32_t ___displayIndex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Event_Internal_MakeMasterEventCurrent_m112421958_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Event_t2956885303 * L_0 = ((Event_t2956885303_StaticFields*)il2cpp_codegen_static_fields_for(Event_t2956885303_il2cpp_TypeInfo_var))->get_s_MasterEvent_2();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___displayIndex0;
		Event_t2956885303 * L_2 = (Event_t2956885303 *)il2cpp_codegen_object_new(Event_t2956885303_il2cpp_TypeInfo_var);
		Event__ctor_m526447123(L_2, L_1, /*hidden argument*/NULL);
		((Event_t2956885303_StaticFields*)il2cpp_codegen_static_fields_for(Event_t2956885303_il2cpp_TypeInfo_var))->set_s_MasterEvent_2(L_2);
	}

IL_0016:
	{
		Event_t2956885303 * L_3 = ((Event_t2956885303_StaticFields*)il2cpp_codegen_static_fields_for(Event_t2956885303_il2cpp_TypeInfo_var))->get_s_MasterEvent_2();
		int32_t L_4 = ___displayIndex0;
		NullCheck(L_3);
		Event_set_displayIndex_m1342258734(L_3, L_4, /*hidden argument*/NULL);
		Event_t2956885303 * L_5 = ((Event_t2956885303_StaticFields*)il2cpp_codegen_static_fields_for(Event_t2956885303_il2cpp_TypeInfo_var))->get_s_MasterEvent_2();
		((Event_t2956885303_StaticFields*)il2cpp_codegen_static_fields_for(Event_t2956885303_il2cpp_TypeInfo_var))->set_s_Current_1(L_5);
		Event_t2956885303 * L_6 = ((Event_t2956885303_StaticFields*)il2cpp_codegen_static_fields_for(Event_t2956885303_il2cpp_TypeInfo_var))->get_s_MasterEvent_2();
		NullCheck(L_6);
		intptr_t L_7 = L_6->get_m_Ptr_0();
		Event_Internal_SetNativeEvent_m1397431767(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Event::Finalize()
extern "C" IL2CPP_METHOD_ATTR void Event_Finalize_m2235592665 (Event_t2956885303 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Event_Finalize_m2235592665_MetadataUsageId);
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
			intptr_t L_0 = __this->get_m_Ptr_0();
			bool L_1 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_0, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_1)
			{
				goto IL_002e;
			}
		}

IL_0016:
		{
			intptr_t L_2 = __this->get_m_Ptr_0();
			Event_Internal_Destroy_m928770705(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
			__this->set_m_Ptr_0((intptr_t)(0));
		}

IL_002e:
		{
			IL2CPP_LEAVE(0x3A, FINALLY_0033);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0033;
	}

FINALLY_0033:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(51)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(51)
	{
		IL2CPP_JUMP_TBL(0x3A, IL_003a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003a:
	{
		return;
	}
}
// UnityEngine.Event UnityEngine.Event::get_current()
extern "C" IL2CPP_METHOD_ATTR Event_t2956885303 * Event_get_current_m2393892120 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Event_get_current_m2393892120_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Event_t2956885303 * V_0 = NULL;
	{
		Event_t2956885303 * L_0 = ((Event_t2956885303_StaticFields*)il2cpp_codegen_static_fields_for(Event_t2956885303_il2cpp_TypeInfo_var))->get_s_Current_1();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Event_t2956885303 * L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.Event::get_isKey()
extern "C" IL2CPP_METHOD_ATTR bool Event_get_isKey_m1703963445 (Event_t2956885303 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = Event_get_type_m1370041809(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)4)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_2 = V_0;
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)5))? 1 : 0);
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 1;
	}

IL_0016:
	{
		V_1 = (bool)G_B3_0;
		goto IL_001c;
	}

IL_001c:
	{
		bool L_3 = V_1;
		return L_3;
	}
}
// System.Boolean UnityEngine.Event::get_isMouse()
extern "C" IL2CPP_METHOD_ATTR bool Event_get_isMouse_m1058251071 (Event_t2956885303 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t G_B8_0 = 0;
	{
		int32_t L_0 = Event_get_type_m1370041809(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)3)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)16))))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)20))))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_7 = V_0;
		G_B8_0 = ((((int32_t)L_7) == ((int32_t)((int32_t)21)))? 1 : 0);
		goto IL_003b;
	}

IL_003a:
	{
		G_B8_0 = 1;
	}

IL_003b:
	{
		V_1 = (bool)G_B8_0;
		goto IL_0041;
	}

IL_0041:
	{
		bool L_8 = V_1;
		return L_8;
	}
}
// System.Int32 UnityEngine.Event::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Event_GetHashCode_m3559153592 (Event_t2956885303 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		V_0 = 1;
		bool L_0 = Event_get_isKey_m1703963445(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = Event_get_keyCode_m1098493350(__this, /*hidden argument*/NULL);
		V_0 = (((int32_t)((uint16_t)L_1)));
	}

IL_0016:
	{
		bool L_2 = Event_get_isMouse_m1058251071(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		Vector2_t2156229523  L_3 = Event_get_mousePosition_m733809635(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		int32_t L_4 = Vector2_GetHashCode_m3916089713((Vector2_t2156229523 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_0036:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = Event_get_modifiers_m995073384(__this, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_5, (int32_t)((int32_t)37)))|(int32_t)L_6));
		int32_t L_7 = V_0;
		V_2 = L_7;
		goto IL_0049;
	}

IL_0049:
	{
		int32_t L_8 = V_2;
		return L_8;
	}
}
// System.Boolean UnityEngine.Event::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Event_Equals_m321840542 (Event_t2956885303 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Event_Equals_m321840542_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Event_t2956885303 * V_1 = NULL;
	{
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_00b7;
	}

IL_000e:
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2 = il2cpp_codegen_object_reference_equals(__this, L_1);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		V_0 = (bool)1;
		goto IL_00b7;
	}

IL_0021:
	{
		RuntimeObject * L_3 = ___obj0;
		NullCheck(L_3);
		Type_t * L_4 = Object_GetType_m88164663(L_3, /*hidden argument*/NULL);
		Type_t * L_5 = Object_GetType_m88164663(__this, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_4) == ((RuntimeObject*)(Type_t *)L_5)))
		{
			goto IL_0039;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_00b7;
	}

IL_0039:
	{
		RuntimeObject * L_6 = ___obj0;
		V_1 = ((Event_t2956885303 *)CastclassSealed((RuntimeObject*)L_6, Event_t2956885303_il2cpp_TypeInfo_var));
		int32_t L_7 = Event_get_type_m1370041809(__this, /*hidden argument*/NULL);
		Event_t2956885303 * L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9 = Event_get_type_m1370041809(L_8, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)L_9))))
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_10 = Event_get_modifiers_m995073384(__this, /*hidden argument*/NULL);
		Event_t2956885303 * L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12 = Event_get_modifiers_m995073384(L_11, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)((int32_t)L_10&(int32_t)((int32_t)-33)))) == ((int32_t)((int32_t)((int32_t)L_12&(int32_t)((int32_t)-33))))))
		{
			goto IL_006f;
		}
	}

IL_0068:
	{
		V_0 = (bool)0;
		goto IL_00b7;
	}

IL_006f:
	{
		bool L_13 = Event_get_isKey_m1703963445(__this, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_14 = Event_get_keyCode_m1098493350(__this, /*hidden argument*/NULL);
		Event_t2956885303 * L_15 = V_1;
		NullCheck(L_15);
		int32_t L_16 = Event_get_keyCode_m1098493350(L_15, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_14) == ((int32_t)L_16))? 1 : 0);
		goto IL_00b7;
	}

IL_008e:
	{
		bool L_17 = Event_get_isMouse_m1058251071(__this, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00b0;
		}
	}
	{
		Vector2_t2156229523  L_18 = Event_get_mousePosition_m733809635(__this, /*hidden argument*/NULL);
		Event_t2956885303 * L_19 = V_1;
		NullCheck(L_19);
		Vector2_t2156229523  L_20 = Event_get_mousePosition_m733809635(L_19, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		bool L_21 = Vector2_op_Equality_m2303255133(NULL /*static, unused*/, L_18, L_20, /*hidden argument*/NULL);
		V_0 = L_21;
		goto IL_00b7;
	}

IL_00b0:
	{
		V_0 = (bool)0;
		goto IL_00b7;
	}

IL_00b7:
	{
		bool L_22 = V_0;
		return L_22;
	}
}
// System.String UnityEngine.Event::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Event_ToString_m1688862299 (Event_t2956885303 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Event_ToString_m1688862299_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		bool L_0 = Event_get_isKey_m1703963445(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_00c1;
		}
	}
	{
		Il2CppChar L_1 = Event_get_character_m1666742088(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0058;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_2 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t2843939325* L_3 = L_2;
		int32_t L_4 = Event_get_type_m1370041809(__this, /*hidden argument*/NULL);
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(EventType_t3528516131_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_6);
		ObjectU5BU5D_t2843939325* L_7 = L_3;
		int32_t L_8 = Event_get_modifiers_m995073384(__this, /*hidden argument*/NULL);
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(EventModifiers_t2016417398_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_10);
		ObjectU5BU5D_t2843939325* L_11 = L_7;
		int32_t L_12 = Event_get_keyCode_m1098493350(__this, /*hidden argument*/NULL);
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(KeyCode_t2599294277_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_14);
		String_t* L_15 = UnityString_Format_m261690510(NULL /*static, unused*/, _stringLiteral2886375297, L_11, /*hidden argument*/NULL);
		V_0 = L_15;
		goto IL_016e;
	}

IL_0058:
	{
		ObjectU5BU5D_t2843939325* L_16 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)8);
		ObjectU5BU5D_t2843939325* L_17 = L_16;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteral2737274358);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral2737274358);
		ObjectU5BU5D_t2843939325* L_18 = L_17;
		int32_t L_19 = Event_get_type_m1370041809(__this, /*hidden argument*/NULL);
		int32_t L_20 = L_19;
		RuntimeObject * L_21 = Box(EventType_t3528516131_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_21);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_21);
		ObjectU5BU5D_t2843939325* L_22 = L_18;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteral1262317653);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral1262317653);
		ObjectU5BU5D_t2843939325* L_23 = L_22;
		Il2CppChar L_24 = Event_get_character_m1666742088(__this, /*hidden argument*/NULL);
		int32_t L_25 = ((int32_t)L_24);
		RuntimeObject * L_26 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_25);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_26);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_26);
		ObjectU5BU5D_t2843939325* L_27 = L_23;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, _stringLiteral4223655990);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral4223655990);
		ObjectU5BU5D_t2843939325* L_28 = L_27;
		int32_t L_29 = Event_get_modifiers_m995073384(__this, /*hidden argument*/NULL);
		int32_t L_30 = L_29;
		RuntimeObject * L_31 = Box(EventModifiers_t2016417398_il2cpp_TypeInfo_var, &L_30);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_31);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_31);
		ObjectU5BU5D_t2843939325* L_32 = L_28;
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, _stringLiteral1420157070);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)_stringLiteral1420157070);
		ObjectU5BU5D_t2843939325* L_33 = L_32;
		int32_t L_34 = Event_get_keyCode_m1098493350(__this, /*hidden argument*/NULL);
		int32_t L_35 = L_34;
		RuntimeObject * L_36 = Box(KeyCode_t2599294277_il2cpp_TypeInfo_var, &L_35);
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_36);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)L_36);
		String_t* L_37 = String_Concat_m2971454694(NULL /*static, unused*/, L_33, /*hidden argument*/NULL);
		V_0 = L_37;
		goto IL_016e;
	}

IL_00c1:
	{
		bool L_38 = Event_get_isMouse_m1058251071(__this, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_010c;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_39 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t2843939325* L_40 = L_39;
		int32_t L_41 = Event_get_type_m1370041809(__this, /*hidden argument*/NULL);
		int32_t L_42 = L_41;
		RuntimeObject * L_43 = Box(EventType_t3528516131_il2cpp_TypeInfo_var, &L_42);
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, L_43);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_43);
		ObjectU5BU5D_t2843939325* L_44 = L_40;
		Vector2_t2156229523  L_45 = Event_get_mousePosition_m733809635(__this, /*hidden argument*/NULL);
		Vector2_t2156229523  L_46 = L_45;
		RuntimeObject * L_47 = Box(Vector2_t2156229523_il2cpp_TypeInfo_var, &L_46);
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_47);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_47);
		ObjectU5BU5D_t2843939325* L_48 = L_44;
		int32_t L_49 = Event_get_modifiers_m995073384(__this, /*hidden argument*/NULL);
		int32_t L_50 = L_49;
		RuntimeObject * L_51 = Box(EventModifiers_t2016417398_il2cpp_TypeInfo_var, &L_50);
		NullCheck(L_48);
		ArrayElementTypeCheck (L_48, L_51);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_51);
		String_t* L_52 = UnityString_Format_m261690510(NULL /*static, unused*/, _stringLiteral4199752235, L_48, /*hidden argument*/NULL);
		V_0 = L_52;
		goto IL_016e;
	}

IL_010c:
	{
		int32_t L_53 = Event_get_type_m1370041809(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_53) == ((int32_t)((int32_t)14))))
		{
			goto IL_0126;
		}
	}
	{
		int32_t L_54 = Event_get_type_m1370041809(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_54) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_0153;
		}
	}

IL_0126:
	{
		ObjectU5BU5D_t2843939325* L_55 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t2843939325* L_56 = L_55;
		int32_t L_57 = Event_get_type_m1370041809(__this, /*hidden argument*/NULL);
		int32_t L_58 = L_57;
		RuntimeObject * L_59 = Box(EventType_t3528516131_il2cpp_TypeInfo_var, &L_58);
		NullCheck(L_56);
		ArrayElementTypeCheck (L_56, L_59);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_59);
		ObjectU5BU5D_t2843939325* L_60 = L_56;
		String_t* L_61 = Event_get_commandName_m4275147343(__this, /*hidden argument*/NULL);
		NullCheck(L_60);
		ArrayElementTypeCheck (L_60, L_61);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_61);
		String_t* L_62 = UnityString_Format_m261690510(NULL /*static, unused*/, _stringLiteral495249995, L_60, /*hidden argument*/NULL);
		V_0 = L_62;
		goto IL_016e;
	}

IL_0153:
	{
		int32_t L_63 = Event_get_type_m1370041809(__this, /*hidden argument*/NULL);
		int32_t L_64 = L_63;
		RuntimeObject * L_65 = Box(EventType_t3528516131_il2cpp_TypeInfo_var, &L_64);
		String_t* L_66 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral757602046, L_65, /*hidden argument*/NULL);
		V_0 = L_66;
		goto IL_016e;
	}

IL_016e:
	{
		String_t* L_67 = V_0;
		return L_67;
	}
}
// System.Void UnityEngine.Event::get_mousePosition_Injected(UnityEngine.Vector2&)
extern "C" IL2CPP_METHOD_ATTR void Event_get_mousePosition_Injected_m965636457 (Event_t2956885303 * __this, Vector2_t2156229523 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*Event_get_mousePosition_Injected_m965636457_ftn) (Event_t2956885303 *, Vector2_t2156229523 *);
	static Event_get_mousePosition_Injected_m965636457_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_mousePosition_Injected_m965636457_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_mousePosition_Injected(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___ret0);
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
// System.Void UnityEngine.GUI::.cctor()
extern "C" IL2CPP_METHOD_ATTR void GUI__cctor_m3051457990 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUI__cctor_m3051457990_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((GUI_t1624858472_StaticFields*)il2cpp_codegen_static_fields_for(GUI_t1624858472_il2cpp_TypeInfo_var))->set_s_HotTextField_0((-1));
		NullCheck(_stringLiteral4166749152);
		int32_t L_0 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, _stringLiteral4166749152);
		((GUI_t1624858472_StaticFields*)il2cpp_codegen_static_fields_for(GUI_t1624858472_il2cpp_TypeInfo_var))->set_s_BoxHash_1(L_0);
		NullCheck(_stringLiteral2081353410);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, _stringLiteral2081353410);
		((GUI_t1624858472_StaticFields*)il2cpp_codegen_static_fields_for(GUI_t1624858472_il2cpp_TypeInfo_var))->set_s_RepeatButtonHash_2(L_1);
		NullCheck(_stringLiteral7432421);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, _stringLiteral7432421);
		((GUI_t1624858472_StaticFields*)il2cpp_codegen_static_fields_for(GUI_t1624858472_il2cpp_TypeInfo_var))->set_s_ToggleHash_3(L_2);
		NullCheck(_stringLiteral7457329);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, _stringLiteral7457329);
		((GUI_t1624858472_StaticFields*)il2cpp_codegen_static_fields_for(GUI_t1624858472_il2cpp_TypeInfo_var))->set_s_ButtonGridHash_4(L_3);
		NullCheck(_stringLiteral3186493525);
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, _stringLiteral3186493525);
		((GUI_t1624858472_StaticFields*)il2cpp_codegen_static_fields_for(GUI_t1624858472_il2cpp_TypeInfo_var))->set_s_SliderHash_5(L_4);
		NullCheck(_stringLiteral775122699);
		int32_t L_5 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, _stringLiteral775122699);
		((GUI_t1624858472_StaticFields*)il2cpp_codegen_static_fields_for(GUI_t1624858472_il2cpp_TypeInfo_var))->set_s_BeginGroupHash_6(L_5);
		NullCheck(_stringLiteral2956319655);
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, _stringLiteral2956319655);
		((GUI_t1624858472_StaticFields*)il2cpp_codegen_static_fields_for(GUI_t1624858472_il2cpp_TypeInfo_var))->set_s_ScrollviewHash_7(L_6);
		GenericStack_t1310059385 * L_7 = (GenericStack_t1310059385 *)il2cpp_codegen_object_new(GenericStack_t1310059385_il2cpp_TypeInfo_var);
		GenericStack__ctor_m933681517(L_7, /*hidden argument*/NULL);
		((GUI_t1624858472_StaticFields*)il2cpp_codegen_static_fields_for(GUI_t1624858472_il2cpp_TypeInfo_var))->set_s_ScrollViewStates_10(L_7);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_8 = DateTime_get_Now_m1277138875(NULL /*static, unused*/, /*hidden argument*/NULL);
		GUI_set_nextScrollStepTime_m1026410471(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUI::set_changed(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GUI_set_changed_m535954674 (RuntimeObject * __this /* static, unused */, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*GUI_set_changed_m535954674_ftn) (bool);
	static GUI_set_changed_m535954674_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUI_set_changed_m535954674_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUI::set_changed(System.Boolean)");
	_il2cpp_icall_func(___value0);
}
// System.Void UnityEngine.GUI::set_nextScrollStepTime(System.DateTime)
extern "C" IL2CPP_METHOD_ATTR void GUI_set_nextScrollStepTime_m1026410471 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUI_set_nextScrollStepTime_m1026410471_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		DateTime_t3738529785  L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		((GUI_t1624858472_StaticFields*)il2cpp_codegen_static_fields_for(GUI_t1624858472_il2cpp_TypeInfo_var))->set_U3CnextScrollStepTimeU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
extern "C" IL2CPP_METHOD_ATTR void GUI_set_skin_m3073574632 (RuntimeObject * __this /* static, unused */, GUISkin_t1244372282 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUI_set_skin_m3073574632_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GUIUtility_CheckOnGUI_m3924092168(NULL /*static, unused*/, /*hidden argument*/NULL);
		GUISkin_t1244372282 * L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		GUI_DoSetSkin_m604425702(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
extern "C" IL2CPP_METHOD_ATTR GUISkin_t1244372282 * GUI_get_skin_m1874615010 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUI_get_skin_m1874615010_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GUISkin_t1244372282 * V_0 = NULL;
	{
		GUIUtility_CheckOnGUI_m3924092168(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		GUISkin_t1244372282 * L_0 = ((GUI_t1624858472_StaticFields*)il2cpp_codegen_static_fields_for(GUI_t1624858472_il2cpp_TypeInfo_var))->get_s_Skin_9();
		V_0 = L_0;
		goto IL_0011;
	}

IL_0011:
	{
		GUISkin_t1244372282 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUI::DoSetSkin(UnityEngine.GUISkin)
extern "C" IL2CPP_METHOD_ATTR void GUI_DoSetSkin_m604425702 (RuntimeObject * __this /* static, unused */, GUISkin_t1244372282 * ___newSkin0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUI_DoSetSkin_m604425702_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GUISkin_t1244372282 * L_0 = ___newSkin0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		GUISkin_t1244372282 * L_2 = GUIUtility_GetDefaultSkin_m1141001896(NULL /*static, unused*/, /*hidden argument*/NULL);
		___newSkin0 = L_2;
	}

IL_0013:
	{
		GUISkin_t1244372282 * L_3 = ___newSkin0;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		((GUI_t1624858472_StaticFields*)il2cpp_codegen_static_fields_for(GUI_t1624858472_il2cpp_TypeInfo_var))->set_s_Skin_9(L_3);
		GUISkin_t1244372282 * L_4 = ___newSkin0;
		NullCheck(L_4);
		GUISkin_MakeCurrent_m3239192349(L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUI::CallWindowDelegate(UnityEngine.GUI/WindowFunction,System.Int32,System.Int32,UnityEngine.GUISkin,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR void GUI_CallWindowDelegate_m3309453386 (RuntimeObject * __this /* static, unused */, WindowFunction_t3146511083 * ___func0, int32_t ___id1, int32_t ___instanceID2, GUISkin_t1244372282 * ____skin3, int32_t ___forceRect4, float ___width5, float ___height6, GUIStyle_t3956901511 * ___style7, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUI_CallWindowDelegate_m3309453386_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GUISkin_t1244372282 * V_0 = NULL;
	GUILayoutOptionU5BU5D_t2510215842* V_1 = NULL;
	{
		int32_t L_0 = ___id1;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var);
		GUILayoutUtility_SelectIDList_m294753167(NULL /*static, unused*/, L_0, (bool)1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		GUISkin_t1244372282 * L_1 = GUI_get_skin_m1874615010(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		Event_t2956885303 * L_2 = Event_get_current_m2393892120(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = Event_get_type_m1370041809(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)8))))
		{
			goto IL_0063;
		}
	}
	{
		int32_t L_4 = ___forceRect4;
		if (!L_4)
		{
			goto IL_0052;
		}
	}
	{
		GUILayoutOptionU5BU5D_t2510215842* L_5 = (GUILayoutOptionU5BU5D_t2510215842*)SZArrayNew(GUILayoutOptionU5BU5D_t2510215842_il2cpp_TypeInfo_var, (uint32_t)2);
		GUILayoutOptionU5BU5D_t2510215842* L_6 = L_5;
		float L_7 = ___width5;
		GUILayoutOption_t811797299 * L_8 = GUILayout_Width_m1777696537(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t811797299 *)L_8);
		GUILayoutOptionU5BU5D_t2510215842* L_9 = L_6;
		float L_10 = ___height6;
		GUILayoutOption_t811797299 * L_11 = GUILayout_Height_m3349769634(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (GUILayoutOption_t811797299 *)L_11);
		V_1 = L_9;
		int32_t L_12 = ___id1;
		GUIStyle_t3956901511 * L_13 = ___style7;
		GUILayoutOptionU5BU5D_t2510215842* L_14 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var);
		GUILayoutUtility_BeginWindow_m2240221150(NULL /*static, unused*/, L_12, L_13, L_14, /*hidden argument*/NULL);
		goto IL_005d;
	}

IL_0052:
	{
		int32_t L_15 = ___id1;
		GUIStyle_t3956901511 * L_16 = ___style7;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var);
		GUILayoutUtility_BeginWindow_m2240221150(NULL /*static, unused*/, L_15, L_16, (GUILayoutOptionU5BU5D_t2510215842*)(GUILayoutOptionU5BU5D_t2510215842*)NULL, /*hidden argument*/NULL);
	}

IL_005d:
	{
		goto IL_0071;
	}

IL_0063:
	{
		int32_t L_17 = ___id1;
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t3956901511_il2cpp_TypeInfo_var);
		GUIStyle_t3956901511 * L_18 = GUIStyle_get_none_m1545577352(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var);
		GUILayoutUtility_BeginWindow_m2240221150(NULL /*static, unused*/, L_17, L_18, (GUILayoutOptionU5BU5D_t2510215842*)(GUILayoutOptionU5BU5D_t2510215842*)NULL, /*hidden argument*/NULL);
	}

IL_0071:
	{
		GUISkin_t1244372282 * L_19 = ____skin3;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		GUI_set_skin_m3073574632(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		WindowFunction_t3146511083 * L_20 = ___func0;
		int32_t L_21 = ___id1;
		NullCheck(L_20);
		WindowFunction_Invoke_m3205356586(L_20, L_21, /*hidden argument*/NULL);
		Event_t2956885303 * L_22 = Event_get_current_m2393892120(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_22);
		int32_t L_23 = Event_get_type_m1370041809(L_22, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_23) == ((uint32_t)8))))
		{
			goto IL_0095;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var);
		GUILayoutUtility_Layout_m1159951704(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0095:
	{
		GUISkin_t1244372282 * L_24 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		GUI_set_skin_m3073574632(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
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
extern "C"  void DelegatePInvokeWrapper_WindowFunction_t3146511083 (WindowFunction_t3146511083 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___id0);

}
// System.Void UnityEngine.GUI/WindowFunction::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void WindowFunction__ctor_m2544237635 (WindowFunction_t3146511083 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.GUI/WindowFunction::Invoke(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void WindowFunction_Invoke_m3205356586 (WindowFunction_t3146511083 * __this, int32_t ___id0, const RuntimeMethod* method)
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
						((FunctionPointerType)targetMethodPointer)(NULL, ___id0, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___id0, targetMethod);
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
								GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___id0);
							else
								GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___id0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___id0);
							else
								VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___id0);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___id0, targetMethod);
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
					((FunctionPointerType)targetMethodPointer)(NULL, ___id0, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___id0, targetMethod);
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
							GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___id0);
						else
							GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___id0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___id0);
						else
							VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___id0);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___id0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.GUI/WindowFunction::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* WindowFunction_BeginInvoke_m3381614433 (WindowFunction_t3146511083 * __this, int32_t ___id0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowFunction_BeginInvoke_m3381614433_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___id0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.GUI/WindowFunction::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void WindowFunction_EndInvoke_m2850430521 (WindowFunction_t3146511083 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// Conversion methods for marshalling of: UnityEngine.GUIContent
extern "C" void GUIContent_t3050628031_marshal_pinvoke(const GUIContent_t3050628031& unmarshaled, GUIContent_t3050628031_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Image_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Image' of type 'GUIContent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Image_1Exception, NULL, NULL);
}
extern "C" void GUIContent_t3050628031_marshal_pinvoke_back(const GUIContent_t3050628031_marshaled_pinvoke& marshaled, GUIContent_t3050628031& unmarshaled)
{
	Exception_t* ___m_Image_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Image' of type 'GUIContent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Image_1Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.GUIContent
extern "C" void GUIContent_t3050628031_marshal_pinvoke_cleanup(GUIContent_t3050628031_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.GUIContent
extern "C" void GUIContent_t3050628031_marshal_com(const GUIContent_t3050628031& unmarshaled, GUIContent_t3050628031_marshaled_com& marshaled)
{
	Exception_t* ___m_Image_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Image' of type 'GUIContent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Image_1Exception, NULL, NULL);
}
extern "C" void GUIContent_t3050628031_marshal_com_back(const GUIContent_t3050628031_marshaled_com& marshaled, GUIContent_t3050628031& unmarshaled)
{
	Exception_t* ___m_Image_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Image' of type 'GUIContent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Image_1Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.GUIContent
extern "C" void GUIContent_t3050628031_marshal_com_cleanup(GUIContent_t3050628031_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.GUIContent::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GUIContent__ctor_m3360759894 (GUIContent_t3050628031 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUIContent__ctor_m3360759894_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_m_Text_0(L_0);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_m_Tooltip_2(L_1);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUIContent::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void GUIContent__ctor_m890195579 (GUIContent_t3050628031 * __this, String_t* ___text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUIContent__ctor_m890195579_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___text0;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		GUIContent__ctor_m2166411317(__this, L_0, (Texture_t3661962703 *)NULL, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUIContent::.ctor(System.String,UnityEngine.Texture,System.String)
extern "C" IL2CPP_METHOD_ATTR void GUIContent__ctor_m2166411317 (GUIContent_t3050628031 * __this, String_t* ___text0, Texture_t3661962703 * ___image1, String_t* ___tooltip2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUIContent__ctor_m2166411317_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_m_Text_0(L_0);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_m_Tooltip_2(L_1);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_2 = ___text0;
		GUIContent_set_text_m607297463(__this, L_2, /*hidden argument*/NULL);
		Texture_t3661962703 * L_3 = ___image1;
		GUIContent_set_image_m1091531865(__this, L_3, /*hidden argument*/NULL);
		String_t* L_4 = ___tooltip2;
		GUIContent_set_tooltip_m738967743(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUIContent::set_text(System.String)
extern "C" IL2CPP_METHOD_ATTR void GUIContent_set_text_m607297463 (GUIContent_t3050628031 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_m_Text_0(L_0);
		return;
	}
}
// System.Void UnityEngine.GUIContent::set_image(UnityEngine.Texture)
extern "C" IL2CPP_METHOD_ATTR void GUIContent_set_image_m1091531865 (GUIContent_t3050628031 * __this, Texture_t3661962703 * ___value0, const RuntimeMethod* method)
{
	{
		Texture_t3661962703 * L_0 = ___value0;
		__this->set_m_Image_1(L_0);
		return;
	}
}
// System.Void UnityEngine.GUIContent::set_tooltip(System.String)
extern "C" IL2CPP_METHOD_ATTR void GUIContent_set_tooltip_m738967743 (GUIContent_t3050628031 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_m_Tooltip_2(L_0);
		return;
	}
}
// System.Void UnityEngine.GUIContent::ClearStaticCache()
extern "C" IL2CPP_METHOD_ATTR void GUIContent_ClearStaticCache_m1205116045 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUIContent_ClearStaticCache_m1205116045_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIContent_t3050628031_il2cpp_TypeInfo_var);
		GUIContent_t3050628031 * L_0 = ((GUIContent_t3050628031_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t3050628031_il2cpp_TypeInfo_var))->get_s_Text_3();
		NullCheck(L_0);
		L_0->set_m_Text_0((String_t*)NULL);
		GUIContent_t3050628031 * L_1 = ((GUIContent_t3050628031_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t3050628031_il2cpp_TypeInfo_var))->get_s_Text_3();
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		NullCheck(L_1);
		L_1->set_m_Tooltip_2(L_2);
		GUIContent_t3050628031 * L_3 = ((GUIContent_t3050628031_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t3050628031_il2cpp_TypeInfo_var))->get_s_Image_4();
		NullCheck(L_3);
		L_3->set_m_Image_1((Texture_t3661962703 *)NULL);
		GUIContent_t3050628031 * L_4 = ((GUIContent_t3050628031_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t3050628031_il2cpp_TypeInfo_var))->get_s_Image_4();
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		NullCheck(L_4);
		L_4->set_m_Tooltip_2(L_5);
		GUIContent_t3050628031 * L_6 = ((GUIContent_t3050628031_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t3050628031_il2cpp_TypeInfo_var))->get_s_TextImage_5();
		NullCheck(L_6);
		L_6->set_m_Text_0((String_t*)NULL);
		GUIContent_t3050628031 * L_7 = ((GUIContent_t3050628031_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t3050628031_il2cpp_TypeInfo_var))->get_s_TextImage_5();
		NullCheck(L_7);
		L_7->set_m_Image_1((Texture_t3661962703 *)NULL);
		return;
	}
}
// System.Void UnityEngine.GUIContent::.cctor()
extern "C" IL2CPP_METHOD_ATTR void GUIContent__cctor_m3964999451 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUIContent__cctor_m3964999451_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GUIContent_t3050628031 * L_0 = (GUIContent_t3050628031 *)il2cpp_codegen_object_new(GUIContent_t3050628031_il2cpp_TypeInfo_var);
		GUIContent__ctor_m3360759894(L_0, /*hidden argument*/NULL);
		((GUIContent_t3050628031_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t3050628031_il2cpp_TypeInfo_var))->set_s_Text_3(L_0);
		GUIContent_t3050628031 * L_1 = (GUIContent_t3050628031 *)il2cpp_codegen_object_new(GUIContent_t3050628031_il2cpp_TypeInfo_var);
		GUIContent__ctor_m3360759894(L_1, /*hidden argument*/NULL);
		((GUIContent_t3050628031_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t3050628031_il2cpp_TypeInfo_var))->set_s_Image_4(L_1);
		GUIContent_t3050628031 * L_2 = (GUIContent_t3050628031 *)il2cpp_codegen_object_new(GUIContent_t3050628031_il2cpp_TypeInfo_var);
		GUIContent__ctor_m3360759894(L_2, /*hidden argument*/NULL);
		((GUIContent_t3050628031_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t3050628031_il2cpp_TypeInfo_var))->set_s_TextImage_5(L_2);
		GUIContent_t3050628031 * L_3 = (GUIContent_t3050628031 *)il2cpp_codegen_object_new(GUIContent_t3050628031_il2cpp_TypeInfo_var);
		GUIContent__ctor_m890195579(L_3, _stringLiteral757602046, /*hidden argument*/NULL);
		((GUIContent_t3050628031_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t3050628031_il2cpp_TypeInfo_var))->set_none_6(L_3);
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
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Width(System.Single)
extern "C" IL2CPP_METHOD_ATTR GUILayoutOption_t811797299 * GUILayout_Width_m1777696537 (RuntimeObject * __this /* static, unused */, float ___width0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUILayout_Width_m1777696537_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GUILayoutOption_t811797299 * V_0 = NULL;
	{
		float L_0 = ___width0;
		float L_1 = L_0;
		RuntimeObject * L_2 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_1);
		GUILayoutOption_t811797299 * L_3 = (GUILayoutOption_t811797299 *)il2cpp_codegen_object_new(GUILayoutOption_t811797299_il2cpp_TypeInfo_var);
		GUILayoutOption__ctor_m2091649807(L_3, 0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0013;
	}

IL_0013:
	{
		GUILayoutOption_t811797299 * L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Height(System.Single)
extern "C" IL2CPP_METHOD_ATTR GUILayoutOption_t811797299 * GUILayout_Height_m3349769634 (RuntimeObject * __this /* static, unused */, float ___height0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUILayout_Height_m3349769634_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GUILayoutOption_t811797299 * V_0 = NULL;
	{
		float L_0 = ___height0;
		float L_1 = L_0;
		RuntimeObject * L_2 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_1);
		GUILayoutOption_t811797299 * L_3 = (GUILayoutOption_t811797299 *)il2cpp_codegen_object_new(GUILayoutOption_t811797299_il2cpp_TypeInfo_var);
		GUILayoutOption__ctor_m2091649807(L_3, 1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0013;
	}

IL_0013:
	{
		GUILayoutOption_t811797299 * L_4 = V_0;
		return L_4;
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
// System.Void UnityEngine.GUILayoutEntry::.ctor(System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR void GUILayoutEntry__ctor_m2229197035 (GUILayoutEntry_t3214611570 * __this, float ____minWidth0, float ____maxWidth1, float ____minHeight2, float ____maxHeight3, GUIStyle_t3956901511 * ____style4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUILayoutEntry__ctor_m2229197035_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rect_t2360479859  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Rect__ctor_m2614021312((&L_0), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_rect_4(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t3956901511_il2cpp_TypeInfo_var);
		GUIStyle_t3956901511 * L_1 = GUIStyle_get_none_m1545577352(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_m_Style_7(L_1);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		float L_2 = ____minWidth0;
		__this->set_minWidth_0(L_2);
		float L_3 = ____maxWidth1;
		__this->set_maxWidth_1(L_3);
		float L_4 = ____minHeight2;
		__this->set_minHeight_2(L_4);
		float L_5 = ____maxHeight3;
		__this->set_maxHeight_3(L_5);
		GUIStyle_t3956901511 * L_6 = ____style4;
		if (L_6)
		{
			goto IL_005c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t3956901511_il2cpp_TypeInfo_var);
		GUIStyle_t3956901511 * L_7 = GUIStyle_get_none_m1545577352(NULL /*static, unused*/, /*hidden argument*/NULL);
		____style4 = L_7;
	}

IL_005c:
	{
		GUIStyle_t3956901511 * L_8 = ____style4;
		GUILayoutEntry_set_style_m1702960184(__this, L_8, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUILayoutEntry::get_style()
extern "C" IL2CPP_METHOD_ATTR GUIStyle_t3956901511 * GUILayoutEntry_get_style_m3965981147 (GUILayoutEntry_t3214611570 * __this, const RuntimeMethod* method)
{
	GUIStyle_t3956901511 * V_0 = NULL;
	{
		GUIStyle_t3956901511 * L_0 = __this->get_m_Style_7();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		GUIStyle_t3956901511 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUILayoutEntry::set_style(UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR void GUILayoutEntry_set_style_m1702960184 (GUILayoutEntry_t3214611570 * __this, GUIStyle_t3956901511 * ___value0, const RuntimeMethod* method)
{
	{
		GUIStyle_t3956901511 * L_0 = ___value0;
		__this->set_m_Style_7(L_0);
		GUIStyle_t3956901511 * L_1 = ___value0;
		VirtActionInvoker1< GUIStyle_t3956901511 * >::Invoke(9 /* System.Void UnityEngine.GUILayoutEntry::ApplyStyleSettings(UnityEngine.GUIStyle) */, __this, L_1);
		return;
	}
}
// UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin()
extern "C" IL2CPP_METHOD_ATTR RectOffset_t1369453676 * GUILayoutEntry_get_margin_m3174861737 (GUILayoutEntry_t3214611570 * __this, const RuntimeMethod* method)
{
	RectOffset_t1369453676 * V_0 = NULL;
	{
		GUIStyle_t3956901511 * L_0 = GUILayoutEntry_get_style_m3965981147(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RectOffset_t1369453676 * L_1 = GUIStyle_get_margin_m3595798603(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		RectOffset_t1369453676 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.GUILayoutEntry::CalcWidth()
extern "C" IL2CPP_METHOD_ATTR void GUILayoutEntry_CalcWidth_m3962591050 (GUILayoutEntry_t3214611570 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::CalcHeight()
extern "C" IL2CPP_METHOD_ATTR void GUILayoutEntry_CalcHeight_m441380239 (GUILayoutEntry_t3214611570 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void GUILayoutEntry_SetHorizontal_m3919283295 (GUILayoutEntry_t3214611570 * __this, float ___x0, float ___width1, const RuntimeMethod* method)
{
	{
		Rect_t2360479859 * L_0 = __this->get_address_of_rect_4();
		float L_1 = ___x0;
		Rect_set_x_m2352063068((Rect_t2360479859 *)L_0, L_1, /*hidden argument*/NULL);
		Rect_t2360479859 * L_2 = __this->get_address_of_rect_4();
		float L_3 = ___width1;
		Rect_set_width_m2963421158((Rect_t2360479859 *)L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void GUILayoutEntry_SetVertical_m1089980778 (GUILayoutEntry_t3214611570 * __this, float ___y0, float ___height1, const RuntimeMethod* method)
{
	{
		Rect_t2360479859 * L_0 = __this->get_address_of_rect_4();
		float L_1 = ___y0;
		Rect_set_y_m3702432190((Rect_t2360479859 *)L_0, L_1, /*hidden argument*/NULL);
		Rect_t2360479859 * L_2 = __this->get_address_of_rect_4();
		float L_3 = ___height1;
		Rect_set_height_m1625569324((Rect_t2360479859 *)L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::ApplyStyleSettings(UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR void GUILayoutEntry_ApplyStyleSettings_m4137899058 (GUILayoutEntry_t3214611570 * __this, GUIStyle_t3956901511 * ___style0, const RuntimeMethod* method)
{
	GUILayoutEntry_t3214611570 * G_B3_0 = NULL;
	GUILayoutEntry_t3214611570 * G_B1_0 = NULL;
	GUILayoutEntry_t3214611570 * G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	GUILayoutEntry_t3214611570 * G_B4_1 = NULL;
	GUILayoutEntry_t3214611570 * G_B7_0 = NULL;
	GUILayoutEntry_t3214611570 * G_B5_0 = NULL;
	GUILayoutEntry_t3214611570 * G_B6_0 = NULL;
	int32_t G_B8_0 = 0;
	GUILayoutEntry_t3214611570 * G_B8_1 = NULL;
	{
		GUIStyle_t3956901511 * L_0 = ___style0;
		NullCheck(L_0);
		float L_1 = GUIStyle_get_fixedWidth_m2576616348(L_0, /*hidden argument*/NULL);
		G_B1_0 = __this;
		if ((!(((float)L_1) == ((float)(0.0f)))))
		{
			G_B3_0 = __this;
			goto IL_0023;
		}
	}
	{
		GUIStyle_t3956901511 * L_2 = ___style0;
		NullCheck(L_2);
		bool L_3 = GUIStyle_get_stretchWidth_m3556443132(L_2, /*hidden argument*/NULL);
		G_B2_0 = G_B1_0;
		if (!L_3)
		{
			G_B3_0 = G_B1_0;
			goto IL_0023;
		}
	}
	{
		G_B4_0 = 1;
		G_B4_1 = G_B2_0;
		goto IL_0024;
	}

IL_0023:
	{
		G_B4_0 = 0;
		G_B4_1 = G_B3_0;
	}

IL_0024:
	{
		NullCheck(G_B4_1);
		G_B4_1->set_stretchWidth_5(G_B4_0);
		GUIStyle_t3956901511 * L_4 = ___style0;
		NullCheck(L_4);
		float L_5 = GUIStyle_get_fixedHeight_m2868324709(L_4, /*hidden argument*/NULL);
		G_B5_0 = __this;
		if ((!(((float)L_5) == ((float)(0.0f)))))
		{
			G_B7_0 = __this;
			goto IL_004b;
		}
	}
	{
		GUIStyle_t3956901511 * L_6 = ___style0;
		NullCheck(L_6);
		bool L_7 = GUIStyle_get_stretchHeight_m4172805773(L_6, /*hidden argument*/NULL);
		G_B6_0 = G_B5_0;
		if (!L_7)
		{
			G_B7_0 = G_B5_0;
			goto IL_004b;
		}
	}
	{
		G_B8_0 = 1;
		G_B8_1 = G_B6_0;
		goto IL_004c;
	}

IL_004b:
	{
		G_B8_0 = 0;
		G_B8_1 = G_B7_0;
	}

IL_004c:
	{
		NullCheck(G_B8_1);
		G_B8_1->set_stretchHeight_6(G_B8_0);
		GUIStyle_t3956901511 * L_8 = ___style0;
		__this->set_m_Style_7(L_8);
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::ApplyOptions(UnityEngine.GUILayoutOption[])
extern "C" IL2CPP_METHOD_ATTR void GUILayoutEntry_ApplyOptions_m1741659338 (GUILayoutEntry_t3214611570 * __this, GUILayoutOptionU5BU5D_t2510215842* ___options0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUILayoutEntry_ApplyOptions_m1741659338_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GUILayoutOption_t811797299 * V_0 = NULL;
	GUILayoutOptionU5BU5D_t2510215842* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	{
		GUILayoutOptionU5BU5D_t2510215842* L_0 = ___options0;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_020b;
	}

IL_000c:
	{
		GUILayoutOptionU5BU5D_t2510215842* L_1 = ___options0;
		V_1 = L_1;
		V_2 = 0;
		goto IL_01a8;
	}

IL_0016:
	{
		GUILayoutOptionU5BU5D_t2510215842* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		GUILayoutOption_t811797299 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		GUILayoutOption_t811797299 * L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = L_6->get_type_0();
		V_3 = L_7;
		int32_t L_8 = V_3;
		switch (L_8)
		{
			case 0:
			{
				goto IL_004d;
			}
			case 1:
			{
				goto IL_0075;
			}
			case 2:
			{
				goto IL_009d;
			}
			case 3:
			{
				goto IL_00d0;
			}
			case 4:
			{
				goto IL_010a;
			}
			case 5:
			{
				goto IL_013d;
			}
			case 6:
			{
				goto IL_0177;
			}
			case 7:
			{
				goto IL_018d;
			}
		}
	}
	{
		goto IL_01a3;
	}

IL_004d:
	{
		GUILayoutOption_t811797299 * L_9 = V_0;
		NullCheck(L_9);
		RuntimeObject * L_10 = L_9->get_value_1();
		float L_11 = ((*(float*)((float*)UnBox(L_10, Single_t1397266774_il2cpp_TypeInfo_var))));
		V_4 = L_11;
		__this->set_maxWidth_1(L_11);
		float L_12 = V_4;
		__this->set_minWidth_0(L_12);
		__this->set_stretchWidth_5(0);
		goto IL_01a3;
	}

IL_0075:
	{
		GUILayoutOption_t811797299 * L_13 = V_0;
		NullCheck(L_13);
		RuntimeObject * L_14 = L_13->get_value_1();
		float L_15 = ((*(float*)((float*)UnBox(L_14, Single_t1397266774_il2cpp_TypeInfo_var))));
		V_4 = L_15;
		__this->set_maxHeight_3(L_15);
		float L_16 = V_4;
		__this->set_minHeight_2(L_16);
		__this->set_stretchHeight_6(0);
		goto IL_01a3;
	}

IL_009d:
	{
		GUILayoutOption_t811797299 * L_17 = V_0;
		NullCheck(L_17);
		RuntimeObject * L_18 = L_17->get_value_1();
		__this->set_minWidth_0(((*(float*)((float*)UnBox(L_18, Single_t1397266774_il2cpp_TypeInfo_var)))));
		float L_19 = __this->get_maxWidth_1();
		float L_20 = __this->get_minWidth_0();
		if ((!(((float)L_19) < ((float)L_20))))
		{
			goto IL_00cb;
		}
	}
	{
		float L_21 = __this->get_minWidth_0();
		__this->set_maxWidth_1(L_21);
	}

IL_00cb:
	{
		goto IL_01a3;
	}

IL_00d0:
	{
		GUILayoutOption_t811797299 * L_22 = V_0;
		NullCheck(L_22);
		RuntimeObject * L_23 = L_22->get_value_1();
		__this->set_maxWidth_1(((*(float*)((float*)UnBox(L_23, Single_t1397266774_il2cpp_TypeInfo_var)))));
		float L_24 = __this->get_minWidth_0();
		float L_25 = __this->get_maxWidth_1();
		if ((!(((float)L_24) > ((float)L_25))))
		{
			goto IL_00fe;
		}
	}
	{
		float L_26 = __this->get_maxWidth_1();
		__this->set_minWidth_0(L_26);
	}

IL_00fe:
	{
		__this->set_stretchWidth_5(0);
		goto IL_01a3;
	}

IL_010a:
	{
		GUILayoutOption_t811797299 * L_27 = V_0;
		NullCheck(L_27);
		RuntimeObject * L_28 = L_27->get_value_1();
		__this->set_minHeight_2(((*(float*)((float*)UnBox(L_28, Single_t1397266774_il2cpp_TypeInfo_var)))));
		float L_29 = __this->get_maxHeight_3();
		float L_30 = __this->get_minHeight_2();
		if ((!(((float)L_29) < ((float)L_30))))
		{
			goto IL_0138;
		}
	}
	{
		float L_31 = __this->get_minHeight_2();
		__this->set_maxHeight_3(L_31);
	}

IL_0138:
	{
		goto IL_01a3;
	}

IL_013d:
	{
		GUILayoutOption_t811797299 * L_32 = V_0;
		NullCheck(L_32);
		RuntimeObject * L_33 = L_32->get_value_1();
		__this->set_maxHeight_3(((*(float*)((float*)UnBox(L_33, Single_t1397266774_il2cpp_TypeInfo_var)))));
		float L_34 = __this->get_minHeight_2();
		float L_35 = __this->get_maxHeight_3();
		if ((!(((float)L_34) > ((float)L_35))))
		{
			goto IL_016b;
		}
	}
	{
		float L_36 = __this->get_maxHeight_3();
		__this->set_minHeight_2(L_36);
	}

IL_016b:
	{
		__this->set_stretchHeight_6(0);
		goto IL_01a3;
	}

IL_0177:
	{
		GUILayoutOption_t811797299 * L_37 = V_0;
		NullCheck(L_37);
		RuntimeObject * L_38 = L_37->get_value_1();
		__this->set_stretchWidth_5(((*(int32_t*)((int32_t*)UnBox(L_38, Int32_t2950945753_il2cpp_TypeInfo_var)))));
		goto IL_01a3;
	}

IL_018d:
	{
		GUILayoutOption_t811797299 * L_39 = V_0;
		NullCheck(L_39);
		RuntimeObject * L_40 = L_39->get_value_1();
		__this->set_stretchHeight_6(((*(int32_t*)((int32_t*)UnBox(L_40, Int32_t2950945753_il2cpp_TypeInfo_var)))));
		goto IL_01a3;
	}

IL_01a3:
	{
		int32_t L_41 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
	}

IL_01a8:
	{
		int32_t L_42 = V_2;
		GUILayoutOptionU5BU5D_t2510215842* L_43 = V_1;
		NullCheck(L_43);
		if ((((int32_t)L_42) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_43)->max_length)))))))
		{
			goto IL_0016;
		}
	}
	{
		float L_44 = __this->get_maxWidth_1();
		if ((((float)L_44) == ((float)(0.0f))))
		{
			goto IL_01de;
		}
	}
	{
		float L_45 = __this->get_maxWidth_1();
		float L_46 = __this->get_minWidth_0();
		if ((!(((float)L_45) < ((float)L_46))))
		{
			goto IL_01de;
		}
	}
	{
		float L_47 = __this->get_minWidth_0();
		__this->set_maxWidth_1(L_47);
	}

IL_01de:
	{
		float L_48 = __this->get_maxHeight_3();
		if ((((float)L_48) == ((float)(0.0f))))
		{
			goto IL_020b;
		}
	}
	{
		float L_49 = __this->get_maxHeight_3();
		float L_50 = __this->get_minHeight_2();
		if ((!(((float)L_49) < ((float)L_50))))
		{
			goto IL_020b;
		}
	}
	{
		float L_51 = __this->get_minHeight_2();
		__this->set_maxHeight_3(L_51);
	}

IL_020b:
	{
		return;
	}
}
// System.String UnityEngine.GUILayoutEntry::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* GUILayoutEntry_ToString_m3366663569 (GUILayoutEntry_t3214611570 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUILayoutEntry_ToString_m3366663569_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t2843939325* G_B5_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B5_2 = NULL;
	String_t* G_B5_3 = NULL;
	int32_t G_B5_4 = 0;
	ObjectU5BU5D_t2843939325* G_B5_5 = NULL;
	ObjectU5BU5D_t2843939325* G_B5_6 = NULL;
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t2843939325* G_B4_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B4_2 = NULL;
	String_t* G_B4_3 = NULL;
	int32_t G_B4_4 = 0;
	ObjectU5BU5D_t2843939325* G_B4_5 = NULL;
	ObjectU5BU5D_t2843939325* G_B4_6 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_t2843939325* G_B6_2 = NULL;
	ObjectU5BU5D_t2843939325* G_B6_3 = NULL;
	String_t* G_B6_4 = NULL;
	int32_t G_B6_5 = 0;
	ObjectU5BU5D_t2843939325* G_B6_6 = NULL;
	ObjectU5BU5D_t2843939325* G_B6_7 = NULL;
	int32_t G_B8_0 = 0;
	ObjectU5BU5D_t2843939325* G_B8_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B8_2 = NULL;
	int32_t G_B7_0 = 0;
	ObjectU5BU5D_t2843939325* G_B7_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B7_2 = NULL;
	String_t* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	ObjectU5BU5D_t2843939325* G_B9_2 = NULL;
	ObjectU5BU5D_t2843939325* G_B9_3 = NULL;
	int32_t G_B11_0 = 0;
	ObjectU5BU5D_t2843939325* G_B11_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B11_2 = NULL;
	int32_t G_B10_0 = 0;
	ObjectU5BU5D_t2843939325* G_B10_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B10_2 = NULL;
	String_t* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	ObjectU5BU5D_t2843939325* G_B12_2 = NULL;
	ObjectU5BU5D_t2843939325* G_B12_3 = NULL;
	{
		V_0 = _stringLiteral757602046;
		V_1 = 0;
		goto IL_001e;
	}

IL_000e:
	{
		String_t* L_0 = V_0;
		String_t* L_1 = String_Concat_m3937257545(NULL /*static, unused*/, L_0, _stringLiteral3452614528, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
	}

IL_001e:
	{
		int32_t L_3 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutEntry_t3214611570_il2cpp_TypeInfo_var);
		int32_t L_4 = ((GUILayoutEntry_t3214611570_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutEntry_t3214611570_il2cpp_TypeInfo_var))->get_indent_9();
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_000e;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_5 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		ObjectU5BU5D_t2843939325* L_6 = L_5;
		String_t* L_7 = V_0;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_7);
		ObjectU5BU5D_t2843939325* L_8 = L_6;
		ObjectU5BU5D_t2843939325* L_9 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t2843939325* L_10 = L_9;
		GUIStyle_t3956901511 * L_11 = GUILayoutEntry_get_style_m3965981147(__this, /*hidden argument*/NULL);
		G_B4_0 = 0;
		G_B4_1 = L_10;
		G_B4_2 = L_10;
		G_B4_3 = _stringLiteral3787516126;
		G_B4_4 = 1;
		G_B4_5 = L_8;
		G_B4_6 = L_8;
		if (!L_11)
		{
			G_B5_0 = 0;
			G_B5_1 = L_10;
			G_B5_2 = L_10;
			G_B5_3 = _stringLiteral3787516126;
			G_B5_4 = 1;
			G_B5_5 = L_8;
			G_B5_6 = L_8;
			goto IL_005e;
		}
	}
	{
		GUIStyle_t3956901511 * L_12 = GUILayoutEntry_get_style_m3965981147(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		String_t* L_13 = GUIStyle_get_name_m2109418832(L_12, /*hidden argument*/NULL);
		G_B6_0 = L_13;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		G_B6_5 = G_B4_4;
		G_B6_6 = G_B4_5;
		G_B6_7 = G_B4_6;
		goto IL_0063;
	}

IL_005e:
	{
		G_B6_0 = _stringLiteral1602229408;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
		G_B6_5 = G_B5_4;
		G_B6_6 = G_B5_5;
		G_B6_7 = G_B5_6;
	}

IL_0063:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (RuntimeObject *)G_B6_0);
		ObjectU5BU5D_t2843939325* L_14 = G_B6_3;
		Type_t * L_15 = Object_GetType_m88164663(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_15);
		ObjectU5BU5D_t2843939325* L_16 = L_14;
		Rect_t2360479859 * L_17 = __this->get_address_of_rect_4();
		float L_18 = Rect_get_x_m3839990490((Rect_t2360479859 *)L_17, /*hidden argument*/NULL);
		float L_19 = L_18;
		RuntimeObject * L_20 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_20);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_20);
		ObjectU5BU5D_t2843939325* L_21 = L_16;
		Rect_t2360479859 * L_22 = __this->get_address_of_rect_4();
		float L_23 = Rect_get_xMax_m3018144503((Rect_t2360479859 *)L_22, /*hidden argument*/NULL);
		float L_24 = L_23;
		RuntimeObject * L_25 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_24);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_25);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_25);
		ObjectU5BU5D_t2843939325* L_26 = L_21;
		Rect_t2360479859 * L_27 = __this->get_address_of_rect_4();
		float L_28 = Rect_get_y_m1501338330((Rect_t2360479859 *)L_27, /*hidden argument*/NULL);
		float L_29 = L_28;
		RuntimeObject * L_30 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_29);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_30);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_30);
		ObjectU5BU5D_t2843939325* L_31 = L_26;
		Rect_t2360479859 * L_32 = __this->get_address_of_rect_4();
		float L_33 = Rect_get_yMax_m743455479((Rect_t2360479859 *)L_32, /*hidden argument*/NULL);
		float L_34 = L_33;
		RuntimeObject * L_35 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_34);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_35);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_35);
		String_t* L_36 = UnityString_Format_m261690510(NULL /*static, unused*/, G_B6_4, L_31, /*hidden argument*/NULL);
		NullCheck(G_B6_6);
		ArrayElementTypeCheck (G_B6_6, L_36);
		(G_B6_6)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_5), (RuntimeObject *)L_36);
		ObjectU5BU5D_t2843939325* L_37 = G_B6_7;
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, _stringLiteral1704952932);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral1704952932);
		ObjectU5BU5D_t2843939325* L_38 = L_37;
		float L_39 = __this->get_minWidth_0();
		float L_40 = L_39;
		RuntimeObject * L_41 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_40);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_41);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_41);
		ObjectU5BU5D_t2843939325* L_42 = L_38;
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, _stringLiteral3452614531);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral3452614531);
		ObjectU5BU5D_t2843939325* L_43 = L_42;
		float L_44 = __this->get_maxWidth_1();
		float L_45 = L_44;
		RuntimeObject * L_46 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_45);
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_46);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_46);
		ObjectU5BU5D_t2843939325* L_47 = L_43;
		int32_t L_48 = __this->get_stretchWidth_5();
		G_B7_0 = 6;
		G_B7_1 = L_47;
		G_B7_2 = L_47;
		if (!L_48)
		{
			G_B8_0 = 6;
			G_B8_1 = L_47;
			G_B8_2 = L_47;
			goto IL_0102;
		}
	}
	{
		G_B9_0 = _stringLiteral3452614533;
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		G_B9_3 = G_B7_2;
		goto IL_0107;
	}

IL_0102:
	{
		G_B9_0 = _stringLiteral757602046;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
		G_B9_3 = G_B8_2;
	}

IL_0107:
	{
		NullCheck(G_B9_2);
		ArrayElementTypeCheck (G_B9_2, G_B9_0);
		(G_B9_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B9_1), (RuntimeObject *)G_B9_0);
		ObjectU5BU5D_t2843939325* L_49 = G_B9_3;
		NullCheck(L_49);
		ArrayElementTypeCheck (L_49, _stringLiteral212333324);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)_stringLiteral212333324);
		ObjectU5BU5D_t2843939325* L_50 = L_49;
		float L_51 = __this->get_minHeight_2();
		float L_52 = L_51;
		RuntimeObject * L_53 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_52);
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, L_53);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject *)L_53);
		ObjectU5BU5D_t2843939325* L_54 = L_50;
		NullCheck(L_54);
		ArrayElementTypeCheck (L_54, _stringLiteral3452614531);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject *)_stringLiteral3452614531);
		ObjectU5BU5D_t2843939325* L_55 = L_54;
		float L_56 = __this->get_maxHeight_3();
		float L_57 = L_56;
		RuntimeObject * L_58 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_57);
		NullCheck(L_55);
		ArrayElementTypeCheck (L_55, L_58);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (RuntimeObject *)L_58);
		ObjectU5BU5D_t2843939325* L_59 = L_55;
		int32_t L_60 = __this->get_stretchHeight_6();
		G_B10_0 = ((int32_t)11);
		G_B10_1 = L_59;
		G_B10_2 = L_59;
		if (!L_60)
		{
			G_B11_0 = ((int32_t)11);
			G_B11_1 = L_59;
			G_B11_2 = L_59;
			goto IL_014e;
		}
	}
	{
		G_B12_0 = _stringLiteral3452614533;
		G_B12_1 = G_B10_0;
		G_B12_2 = G_B10_1;
		G_B12_3 = G_B10_2;
		goto IL_0153;
	}

IL_014e:
	{
		G_B12_0 = _stringLiteral757602046;
		G_B12_1 = G_B11_0;
		G_B12_2 = G_B11_1;
		G_B12_3 = G_B11_2;
	}

IL_0153:
	{
		NullCheck(G_B12_2);
		ArrayElementTypeCheck (G_B12_2, G_B12_0);
		(G_B12_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B12_1), (RuntimeObject *)G_B12_0);
		String_t* L_61 = String_Concat_m2971454694(NULL /*static, unused*/, G_B12_3, /*hidden argument*/NULL);
		V_2 = L_61;
		goto IL_015f;
	}

IL_015f:
	{
		String_t* L_62 = V_2;
		return L_62;
	}
}
// System.Void UnityEngine.GUILayoutEntry::.cctor()
extern "C" IL2CPP_METHOD_ATTR void GUILayoutEntry__cctor_m663865902 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUILayoutEntry__cctor_m663865902_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rect_t2360479859  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Rect__ctor_m2614021312((&L_0), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		((GUILayoutEntry_t3214611570_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutEntry_t3214611570_il2cpp_TypeInfo_var))->set_kDummyRect_8(L_0);
		((GUILayoutEntry_t3214611570_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutEntry_t3214611570_il2cpp_TypeInfo_var))->set_indent_9(0);
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
// System.Void UnityEngine.GUILayoutGroup::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GUILayoutGroup__ctor_m3245996524 (GUILayoutGroup_t2157789695 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUILayoutGroup__ctor_m3245996524_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t391719016 * L_0 = (List_1_t391719016 *)il2cpp_codegen_object_new(List_1_t391719016_il2cpp_TypeInfo_var);
		List_1__ctor_m1360362241(L_0, /*hidden argument*/List_1__ctor_m1360362241_RuntimeMethod_var);
		__this->set_entries_10(L_0);
		__this->set_isVertical_11((bool)1);
		__this->set_resetCoords_12((bool)0);
		__this->set_spacing_13((0.0f));
		__this->set_sameSize_14((bool)1);
		__this->set_isWindow_15((bool)0);
		__this->set_windowID_16((-1));
		__this->set_m_Cursor_17(0);
		__this->set_m_StretchableCountX_18(((int32_t)100));
		__this->set_m_StretchableCountY_19(((int32_t)100));
		__this->set_m_UserSpecifiedWidth_20((bool)0);
		__this->set_m_UserSpecifiedHeight_21((bool)0);
		__this->set_m_ChildMinWidth_22((100.0f));
		__this->set_m_ChildMaxWidth_23((100.0f));
		__this->set_m_ChildMinHeight_24((100.0f));
		__this->set_m_ChildMaxHeight_25((100.0f));
		RectOffset_t1369453676 * L_1 = (RectOffset_t1369453676 *)il2cpp_codegen_object_new(RectOffset_t1369453676_il2cpp_TypeInfo_var);
		RectOffset__ctor_m3236153262(L_1, /*hidden argument*/NULL);
		__this->set_m_Margin_26(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t3956901511_il2cpp_TypeInfo_var);
		GUIStyle_t3956901511 * L_2 = GUIStyle_get_none_m1545577352(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutEntry_t3214611570_il2cpp_TypeInfo_var);
		GUILayoutEntry__ctor_m2229197035(__this, (0.0f), (0.0f), (0.0f), (0.0f), L_2, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.RectOffset UnityEngine.GUILayoutGroup::get_margin()
extern "C" IL2CPP_METHOD_ATTR RectOffset_t1369453676 * GUILayoutGroup_get_margin_m2070032072 (GUILayoutGroup_t2157789695 * __this, const RuntimeMethod* method)
{
	RectOffset_t1369453676 * V_0 = NULL;
	{
		RectOffset_t1369453676 * L_0 = __this->get_m_Margin_26();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		RectOffset_t1369453676 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUILayoutGroup::ApplyOptions(UnityEngine.GUILayoutOption[])
extern "C" IL2CPP_METHOD_ATTR void GUILayoutGroup_ApplyOptions_m2649434325 (GUILayoutGroup_t2157789695 * __this, GUILayoutOptionU5BU5D_t2510215842* ___options0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUILayoutGroup_ApplyOptions_m2649434325_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GUILayoutOption_t811797299 * V_0 = NULL;
	GUILayoutOptionU5BU5D_t2510215842* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		GUILayoutOptionU5BU5D_t2510215842* L_0 = ___options0;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_00a9;
	}

IL_000c:
	{
		GUILayoutOptionU5BU5D_t2510215842* L_1 = ___options0;
		GUILayoutEntry_ApplyOptions_m1741659338(__this, L_1, /*hidden argument*/NULL);
		GUILayoutOptionU5BU5D_t2510215842* L_2 = ___options0;
		V_1 = L_2;
		V_2 = 0;
		goto IL_00a0;
	}

IL_001d:
	{
		GUILayoutOptionU5BU5D_t2510215842* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		GUILayoutOption_t811797299 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = L_6;
		GUILayoutOption_t811797299 * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = L_7->get_type_0();
		V_3 = L_8;
		int32_t L_9 = V_3;
		switch (L_9)
		{
			case 0:
			{
				goto IL_006c;
			}
			case 1:
			{
				goto IL_0078;
			}
			case 2:
			{
				goto IL_006c;
			}
			case 3:
			{
				goto IL_006c;
			}
			case 4:
			{
				goto IL_0078;
			}
			case 5:
			{
				goto IL_0078;
			}
			case 6:
			{
				goto IL_009b;
			}
			case 7:
			{
				goto IL_009b;
			}
			case 8:
			{
				goto IL_009b;
			}
			case 9:
			{
				goto IL_009b;
			}
			case 10:
			{
				goto IL_009b;
			}
			case 11:
			{
				goto IL_009b;
			}
			case 12:
			{
				goto IL_009b;
			}
			case 13:
			{
				goto IL_0084;
			}
		}
	}
	{
		goto IL_009b;
	}

IL_006c:
	{
		__this->set_m_UserSpecifiedHeight_21((bool)1);
		goto IL_009b;
	}

IL_0078:
	{
		__this->set_m_UserSpecifiedWidth_20((bool)1);
		goto IL_009b;
	}

IL_0084:
	{
		GUILayoutOption_t811797299 * L_10 = V_0;
		NullCheck(L_10);
		RuntimeObject * L_11 = L_10->get_value_1();
		__this->set_spacing_13((((float)((float)((*(int32_t*)((int32_t*)UnBox(L_11, Int32_t2950945753_il2cpp_TypeInfo_var))))))));
		goto IL_009b;
	}

IL_009b:
	{
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_00a0:
	{
		int32_t L_13 = V_2;
		GUILayoutOptionU5BU5D_t2510215842* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_14)->max_length)))))))
		{
			goto IL_001d;
		}
	}

IL_00a9:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::ApplyStyleSettings(UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR void GUILayoutGroup_ApplyStyleSettings_m165748370 (GUILayoutGroup_t2157789695 * __this, GUIStyle_t3956901511 * ___style0, const RuntimeMethod* method)
{
	RectOffset_t1369453676 * V_0 = NULL;
	{
		GUIStyle_t3956901511 * L_0 = ___style0;
		GUILayoutEntry_ApplyStyleSettings_m4137899058(__this, L_0, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_1 = ___style0;
		NullCheck(L_1);
		RectOffset_t1369453676 * L_2 = GUIStyle_get_margin_m3595798603(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		RectOffset_t1369453676 * L_3 = __this->get_m_Margin_26();
		RectOffset_t1369453676 * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = RectOffset_get_left_m1232181034(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		RectOffset_set_left_m432301222(L_3, L_5, /*hidden argument*/NULL);
		RectOffset_t1369453676 * L_6 = __this->get_m_Margin_26();
		RectOffset_t1369453676 * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = RectOffset_get_right_m2294081512(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		RectOffset_set_right_m807318764(L_6, L_8, /*hidden argument*/NULL);
		RectOffset_t1369453676 * L_9 = __this->get_m_Margin_26();
		RectOffset_t1369453676 * L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = RectOffset_get_top_m2855347295(L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		RectOffset_set_top_m713260669(L_9, L_11, /*hidden argument*/NULL);
		RectOffset_t1369453676 * L_12 = __this->get_m_Margin_26();
		RectOffset_t1369453676 * L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = RectOffset_get_bottom_m890891527(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		RectOffset_set_bottom_m2747419780(L_12, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::ResetCursor()
extern "C" IL2CPP_METHOD_ATTR void GUILayoutGroup_ResetCursor_m672314614 (GUILayoutGroup_t2157789695 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_Cursor_17(0);
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::CalcWidth()
extern "C" IL2CPP_METHOD_ATTR void GUILayoutGroup_CalcWidth_m1389741370 (GUILayoutGroup_t2157789695 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUILayoutGroup_CalcWidth_m1389741370_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	GUILayoutEntry_t3214611570 * V_4 = NULL;
	Enumerator_t2280962893  V_5;
	memset(&V_5, 0, sizeof(V_5));
	RectOffset_t1369453676 * V_6 = NULL;
	int32_t V_7 = 0;
	GUILayoutEntry_t3214611570 * V_8 = NULL;
	Enumerator_t2280962893  V_9;
	memset(&V_9, 0, sizeof(V_9));
	RectOffset_t1369453676 * V_10 = NULL;
	int32_t V_11 = 0;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B22_0 = 0;
	int32_t G_B41_0 = 0;
	int32_t G_B41_1 = 0;
	GUILayoutGroup_t2157789695 * G_B41_2 = NULL;
	int32_t G_B40_0 = 0;
	int32_t G_B40_1 = 0;
	GUILayoutGroup_t2157789695 * G_B40_2 = NULL;
	int32_t G_B42_0 = 0;
	int32_t G_B42_1 = 0;
	int32_t G_B42_2 = 0;
	GUILayoutGroup_t2157789695 * G_B42_3 = NULL;
	{
		List_1_t391719016 * L_0 = __this->get_entries_10();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m1057782749(L_0, /*hidden argument*/List_1_get_Count_m1057782749_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0037;
		}
	}
	{
		GUIStyle_t3956901511 * L_2 = GUILayoutEntry_get_style_m3965981147(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		RectOffset_t1369453676 * L_3 = GUIStyle_get_padding_m3526264743(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = RectOffset_get_horizontal_m2663785949(L_3, /*hidden argument*/NULL);
		float L_5 = (((float)((float)L_4)));
		V_0 = L_5;
		((GUILayoutEntry_t3214611570 *)__this)->set_minWidth_0(L_5);
		float L_6 = V_0;
		((GUILayoutEntry_t3214611570 *)__this)->set_maxWidth_1(L_6);
		goto IL_0460;
	}

IL_0037:
	{
		V_1 = 0;
		V_2 = 0;
		__this->set_m_ChildMinWidth_22((0.0f));
		__this->set_m_ChildMaxWidth_23((0.0f));
		__this->set_m_StretchableCountX_18(0);
		V_3 = (bool)1;
		bool L_7 = __this->get_isVertical_11();
		if (!L_7)
		{
			goto IL_0181;
		}
	}
	{
		List_1_t391719016 * L_8 = __this->get_entries_10();
		NullCheck(L_8);
		Enumerator_t2280962893  L_9 = List_1_GetEnumerator_m1934946323(L_8, /*hidden argument*/List_1_GetEnumerator_m1934946323_RuntimeMethod_var);
		V_5 = L_9;
	}

IL_0074:
	try
	{ // begin try (depth: 1)
		{
			goto IL_013a;
		}

IL_0079:
		{
			GUILayoutEntry_t3214611570 * L_10 = Enumerator_get_Current_m2663170093((Enumerator_t2280962893 *)(&V_5), /*hidden argument*/Enumerator_get_Current_m2663170093_RuntimeMethod_var);
			V_4 = L_10;
			GUILayoutEntry_t3214611570 * L_11 = V_4;
			NullCheck(L_11);
			VirtActionInvoker0::Invoke(5 /* System.Void UnityEngine.GUILayoutEntry::CalcWidth() */, L_11);
			GUILayoutEntry_t3214611570 * L_12 = V_4;
			NullCheck(L_12);
			RectOffset_t1369453676 * L_13 = VirtFuncInvoker0< RectOffset_t1369453676 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_12);
			V_6 = L_13;
			GUILayoutEntry_t3214611570 * L_14 = V_4;
			NullCheck(L_14);
			GUIStyle_t3956901511 * L_15 = GUILayoutEntry_get_style_m3965981147(L_14, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var);
			GUIStyle_t3956901511 * L_16 = GUILayoutUtility_get_spaceStyle_m3392862907(NULL /*static, unused*/, /*hidden argument*/NULL);
			if ((((RuntimeObject*)(GUIStyle_t3956901511 *)L_15) == ((RuntimeObject*)(GUIStyle_t3956901511 *)L_16)))
			{
				goto IL_0125;
			}
		}

IL_00a4:
		{
			bool L_17 = V_3;
			if (L_17)
			{
				goto IL_00ce;
			}
		}

IL_00ab:
		{
			RectOffset_t1369453676 * L_18 = V_6;
			NullCheck(L_18);
			int32_t L_19 = RectOffset_get_left_m1232181034(L_18, /*hidden argument*/NULL);
			int32_t L_20 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
			int32_t L_21 = Mathf_Min_m18103608(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/NULL);
			V_1 = L_21;
			RectOffset_t1369453676 * L_22 = V_6;
			NullCheck(L_22);
			int32_t L_23 = RectOffset_get_right_m2294081512(L_22, /*hidden argument*/NULL);
			int32_t L_24 = V_2;
			int32_t L_25 = Mathf_Min_m18103608(NULL /*static, unused*/, L_23, L_24, /*hidden argument*/NULL);
			V_2 = L_25;
			goto IL_00e2;
		}

IL_00ce:
		{
			RectOffset_t1369453676 * L_26 = V_6;
			NullCheck(L_26);
			int32_t L_27 = RectOffset_get_left_m1232181034(L_26, /*hidden argument*/NULL);
			V_1 = L_27;
			RectOffset_t1369453676 * L_28 = V_6;
			NullCheck(L_28);
			int32_t L_29 = RectOffset_get_right_m2294081512(L_28, /*hidden argument*/NULL);
			V_2 = L_29;
			V_3 = (bool)0;
		}

IL_00e2:
		{
			GUILayoutEntry_t3214611570 * L_30 = V_4;
			NullCheck(L_30);
			float L_31 = L_30->get_minWidth_0();
			RectOffset_t1369453676 * L_32 = V_6;
			NullCheck(L_32);
			int32_t L_33 = RectOffset_get_horizontal_m2663785949(L_32, /*hidden argument*/NULL);
			float L_34 = __this->get_m_ChildMinWidth_22();
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
			float L_35 = Mathf_Max_m3146388979(NULL /*static, unused*/, ((float)il2cpp_codegen_add((float)L_31, (float)(((float)((float)L_33))))), L_34, /*hidden argument*/NULL);
			__this->set_m_ChildMinWidth_22(L_35);
			GUILayoutEntry_t3214611570 * L_36 = V_4;
			NullCheck(L_36);
			float L_37 = L_36->get_maxWidth_1();
			RectOffset_t1369453676 * L_38 = V_6;
			NullCheck(L_38);
			int32_t L_39 = RectOffset_get_horizontal_m2663785949(L_38, /*hidden argument*/NULL);
			float L_40 = __this->get_m_ChildMaxWidth_23();
			float L_41 = Mathf_Max_m3146388979(NULL /*static, unused*/, ((float)il2cpp_codegen_add((float)L_37, (float)(((float)((float)L_39))))), L_40, /*hidden argument*/NULL);
			__this->set_m_ChildMaxWidth_23(L_41);
		}

IL_0125:
		{
			int32_t L_42 = __this->get_m_StretchableCountX_18();
			GUILayoutEntry_t3214611570 * L_43 = V_4;
			NullCheck(L_43);
			int32_t L_44 = L_43->get_stretchWidth_5();
			__this->set_m_StretchableCountX_18(((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)L_44)));
		}

IL_013a:
		{
			bool L_45 = Enumerator_MoveNext_m2324433341((Enumerator_t2280962893 *)(&V_5), /*hidden argument*/Enumerator_MoveNext_m2324433341_RuntimeMethod_var);
			if (L_45)
			{
				goto IL_0079;
			}
		}

IL_0146:
		{
			IL2CPP_LEAVE(0x159, FINALLY_014b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_014b;
	}

FINALLY_014b:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3494652212((Enumerator_t2280962893 *)(&V_5), /*hidden argument*/Enumerator_Dispose_m3494652212_RuntimeMethod_var);
		IL2CPP_END_FINALLY(331)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(331)
	{
		IL2CPP_JUMP_TBL(0x159, IL_0159)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0159:
	{
		float L_46 = __this->get_m_ChildMinWidth_22();
		int32_t L_47 = V_1;
		int32_t L_48 = V_2;
		__this->set_m_ChildMinWidth_22(((float)il2cpp_codegen_subtract((float)L_46, (float)(((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)L_48))))))));
		float L_49 = __this->get_m_ChildMaxWidth_23();
		int32_t L_50 = V_1;
		int32_t L_51 = V_2;
		__this->set_m_ChildMaxWidth_23(((float)il2cpp_codegen_subtract((float)L_49, (float)(((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)L_51))))))));
		goto IL_0311;
	}

IL_0181:
	{
		V_7 = 0;
		List_1_t391719016 * L_52 = __this->get_entries_10();
		NullCheck(L_52);
		Enumerator_t2280962893  L_53 = List_1_GetEnumerator_m1934946323(L_52, /*hidden argument*/List_1_GetEnumerator_m1934946323_RuntimeMethod_var);
		V_9 = L_53;
	}

IL_0193:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0294;
		}

IL_0198:
		{
			GUILayoutEntry_t3214611570 * L_54 = Enumerator_get_Current_m2663170093((Enumerator_t2280962893 *)(&V_9), /*hidden argument*/Enumerator_get_Current_m2663170093_RuntimeMethod_var);
			V_8 = L_54;
			GUILayoutEntry_t3214611570 * L_55 = V_8;
			NullCheck(L_55);
			VirtActionInvoker0::Invoke(5 /* System.Void UnityEngine.GUILayoutEntry::CalcWidth() */, L_55);
			GUILayoutEntry_t3214611570 * L_56 = V_8;
			NullCheck(L_56);
			RectOffset_t1369453676 * L_57 = VirtFuncInvoker0< RectOffset_t1369453676 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_56);
			V_10 = L_57;
			GUILayoutEntry_t3214611570 * L_58 = V_8;
			NullCheck(L_58);
			GUIStyle_t3956901511 * L_59 = GUILayoutEntry_get_style_m3965981147(L_58, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var);
			GUIStyle_t3956901511 * L_60 = GUILayoutUtility_get_spaceStyle_m3392862907(NULL /*static, unused*/, /*hidden argument*/NULL);
			if ((((RuntimeObject*)(GUIStyle_t3956901511 *)L_59) == ((RuntimeObject*)(GUIStyle_t3956901511 *)L_60)))
			{
				goto IL_0255;
			}
		}

IL_01c3:
		{
			bool L_61 = V_3;
			if (L_61)
			{
				goto IL_01ed;
			}
		}

IL_01ca:
		{
			int32_t L_62 = V_7;
			RectOffset_t1369453676 * L_63 = V_10;
			NullCheck(L_63);
			int32_t L_64 = RectOffset_get_left_m1232181034(L_63, /*hidden argument*/NULL);
			if ((((int32_t)L_62) <= ((int32_t)L_64)))
			{
				goto IL_01df;
			}
		}

IL_01d8:
		{
			int32_t L_65 = V_7;
			G_B22_0 = L_65;
			goto IL_01e6;
		}

IL_01df:
		{
			RectOffset_t1369453676 * L_66 = V_10;
			NullCheck(L_66);
			int32_t L_67 = RectOffset_get_left_m1232181034(L_66, /*hidden argument*/NULL);
			G_B22_0 = L_67;
		}

IL_01e6:
		{
			V_11 = G_B22_0;
			goto IL_01f4;
		}

IL_01ed:
		{
			V_11 = 0;
			V_3 = (bool)0;
		}

IL_01f4:
		{
			float L_68 = __this->get_m_ChildMinWidth_22();
			GUILayoutEntry_t3214611570 * L_69 = V_8;
			NullCheck(L_69);
			float L_70 = L_69->get_minWidth_0();
			float L_71 = __this->get_spacing_13();
			int32_t L_72 = V_11;
			__this->set_m_ChildMinWidth_22(((float)il2cpp_codegen_add((float)L_68, (float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_70, (float)L_71)), (float)(((float)((float)L_72))))))));
			float L_73 = __this->get_m_ChildMaxWidth_23();
			GUILayoutEntry_t3214611570 * L_74 = V_8;
			NullCheck(L_74);
			float L_75 = L_74->get_maxWidth_1();
			float L_76 = __this->get_spacing_13();
			int32_t L_77 = V_11;
			__this->set_m_ChildMaxWidth_23(((float)il2cpp_codegen_add((float)L_73, (float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_75, (float)L_76)), (float)(((float)((float)L_77))))))));
			RectOffset_t1369453676 * L_78 = V_10;
			NullCheck(L_78);
			int32_t L_79 = RectOffset_get_right_m2294081512(L_78, /*hidden argument*/NULL);
			V_7 = L_79;
			int32_t L_80 = __this->get_m_StretchableCountX_18();
			GUILayoutEntry_t3214611570 * L_81 = V_8;
			NullCheck(L_81);
			int32_t L_82 = L_81->get_stretchWidth_5();
			__this->set_m_StretchableCountX_18(((int32_t)il2cpp_codegen_add((int32_t)L_80, (int32_t)L_82)));
			goto IL_0293;
		}

IL_0255:
		{
			float L_83 = __this->get_m_ChildMinWidth_22();
			GUILayoutEntry_t3214611570 * L_84 = V_8;
			NullCheck(L_84);
			float L_85 = L_84->get_minWidth_0();
			__this->set_m_ChildMinWidth_22(((float)il2cpp_codegen_add((float)L_83, (float)L_85)));
			float L_86 = __this->get_m_ChildMaxWidth_23();
			GUILayoutEntry_t3214611570 * L_87 = V_8;
			NullCheck(L_87);
			float L_88 = L_87->get_maxWidth_1();
			__this->set_m_ChildMaxWidth_23(((float)il2cpp_codegen_add((float)L_86, (float)L_88)));
			int32_t L_89 = __this->get_m_StretchableCountX_18();
			GUILayoutEntry_t3214611570 * L_90 = V_8;
			NullCheck(L_90);
			int32_t L_91 = L_90->get_stretchWidth_5();
			__this->set_m_StretchableCountX_18(((int32_t)il2cpp_codegen_add((int32_t)L_89, (int32_t)L_91)));
		}

IL_0293:
		{
		}

IL_0294:
		{
			bool L_92 = Enumerator_MoveNext_m2324433341((Enumerator_t2280962893 *)(&V_9), /*hidden argument*/Enumerator_MoveNext_m2324433341_RuntimeMethod_var);
			if (L_92)
			{
				goto IL_0198;
			}
		}

IL_02a0:
		{
			IL2CPP_LEAVE(0x2B3, FINALLY_02a5);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_02a5;
	}

FINALLY_02a5:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3494652212((Enumerator_t2280962893 *)(&V_9), /*hidden argument*/Enumerator_Dispose_m3494652212_RuntimeMethod_var);
		IL2CPP_END_FINALLY(677)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(677)
	{
		IL2CPP_JUMP_TBL(0x2B3, IL_02b3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_02b3:
	{
		float L_93 = __this->get_m_ChildMinWidth_22();
		float L_94 = __this->get_spacing_13();
		__this->set_m_ChildMinWidth_22(((float)il2cpp_codegen_subtract((float)L_93, (float)L_94)));
		float L_95 = __this->get_m_ChildMaxWidth_23();
		float L_96 = __this->get_spacing_13();
		__this->set_m_ChildMaxWidth_23(((float)il2cpp_codegen_subtract((float)L_95, (float)L_96)));
		List_1_t391719016 * L_97 = __this->get_entries_10();
		NullCheck(L_97);
		int32_t L_98 = List_1_get_Count_m1057782749(L_97, /*hidden argument*/List_1_get_Count_m1057782749_RuntimeMethod_var);
		if (!L_98)
		{
			goto IL_030a;
		}
	}
	{
		List_1_t391719016 * L_99 = __this->get_entries_10();
		NullCheck(L_99);
		GUILayoutEntry_t3214611570 * L_100 = List_1_get_Item_m3839229424(L_99, 0, /*hidden argument*/List_1_get_Item_m3839229424_RuntimeMethod_var);
		NullCheck(L_100);
		RectOffset_t1369453676 * L_101 = VirtFuncInvoker0< RectOffset_t1369453676 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_100);
		NullCheck(L_101);
		int32_t L_102 = RectOffset_get_left_m1232181034(L_101, /*hidden argument*/NULL);
		V_1 = L_102;
		int32_t L_103 = V_7;
		V_2 = L_103;
		goto IL_0310;
	}

IL_030a:
	{
		int32_t L_104 = 0;
		V_2 = L_104;
		V_1 = L_104;
	}

IL_0310:
	{
	}

IL_0311:
	{
		V_12 = (0.0f);
		V_13 = (0.0f);
		GUIStyle_t3956901511 * L_105 = GUILayoutEntry_get_style_m3965981147(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t3956901511_il2cpp_TypeInfo_var);
		GUIStyle_t3956901511 * L_106 = GUIStyle_get_none_m1545577352(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(GUIStyle_t3956901511 *)L_105) == ((RuntimeObject*)(GUIStyle_t3956901511 *)L_106))))
		{
			goto IL_033a;
		}
	}
	{
		bool L_107 = __this->get_m_UserSpecifiedWidth_20();
		if (!L_107)
		{
			goto IL_0373;
		}
	}

IL_033a:
	{
		GUIStyle_t3956901511 * L_108 = GUILayoutEntry_get_style_m3965981147(__this, /*hidden argument*/NULL);
		NullCheck(L_108);
		RectOffset_t1369453676 * L_109 = GUIStyle_get_padding_m3526264743(L_108, /*hidden argument*/NULL);
		NullCheck(L_109);
		int32_t L_110 = RectOffset_get_left_m1232181034(L_109, /*hidden argument*/NULL);
		int32_t L_111 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_112 = Mathf_Max_m3673002171(NULL /*static, unused*/, L_110, L_111, /*hidden argument*/NULL);
		V_12 = (((float)((float)L_112)));
		GUIStyle_t3956901511 * L_113 = GUILayoutEntry_get_style_m3965981147(__this, /*hidden argument*/NULL);
		NullCheck(L_113);
		RectOffset_t1369453676 * L_114 = GUIStyle_get_padding_m3526264743(L_113, /*hidden argument*/NULL);
		NullCheck(L_114);
		int32_t L_115 = RectOffset_get_right_m2294081512(L_114, /*hidden argument*/NULL);
		int32_t L_116 = V_2;
		int32_t L_117 = Mathf_Max_m3673002171(NULL /*static, unused*/, L_115, L_116, /*hidden argument*/NULL);
		V_13 = (((float)((float)L_117)));
		goto IL_0397;
	}

IL_0373:
	{
		RectOffset_t1369453676 * L_118 = __this->get_m_Margin_26();
		int32_t L_119 = V_1;
		NullCheck(L_118);
		RectOffset_set_left_m432301222(L_118, L_119, /*hidden argument*/NULL);
		RectOffset_t1369453676 * L_120 = __this->get_m_Margin_26();
		int32_t L_121 = V_2;
		NullCheck(L_120);
		RectOffset_set_right_m807318764(L_120, L_121, /*hidden argument*/NULL);
		float L_122 = (0.0f);
		V_13 = L_122;
		V_12 = L_122;
	}

IL_0397:
	{
		float L_123 = ((GUILayoutEntry_t3214611570 *)__this)->get_minWidth_0();
		float L_124 = __this->get_m_ChildMinWidth_22();
		float L_125 = V_12;
		float L_126 = V_13;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_127 = Mathf_Max_m3146388979(NULL /*static, unused*/, L_123, ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_124, (float)L_125)), (float)L_126)), /*hidden argument*/NULL);
		((GUILayoutEntry_t3214611570 *)__this)->set_minWidth_0(L_127);
		float L_128 = ((GUILayoutEntry_t3214611570 *)__this)->get_maxWidth_1();
		if ((!(((float)L_128) == ((float)(0.0f)))))
		{
			goto IL_0408;
		}
	}
	{
		int32_t L_129 = ((GUILayoutEntry_t3214611570 *)__this)->get_stretchWidth_5();
		int32_t L_130 = __this->get_m_StretchableCountX_18();
		GUIStyle_t3956901511 * L_131 = GUILayoutEntry_get_style_m3965981147(__this, /*hidden argument*/NULL);
		NullCheck(L_131);
		bool L_132 = GUIStyle_get_stretchWidth_m3556443132(L_131, /*hidden argument*/NULL);
		G_B40_0 = L_130;
		G_B40_1 = L_129;
		G_B40_2 = __this;
		if (!L_132)
		{
			G_B41_0 = L_130;
			G_B41_1 = L_129;
			G_B41_2 = __this;
			goto IL_03e8;
		}
	}
	{
		G_B42_0 = 1;
		G_B42_1 = G_B40_0;
		G_B42_2 = G_B40_1;
		G_B42_3 = G_B40_2;
		goto IL_03e9;
	}

IL_03e8:
	{
		G_B42_0 = 0;
		G_B42_1 = G_B41_0;
		G_B42_2 = G_B41_1;
		G_B42_3 = G_B41_2;
	}

IL_03e9:
	{
		NullCheck(G_B42_3);
		((GUILayoutEntry_t3214611570 *)G_B42_3)->set_stretchWidth_5(((int32_t)il2cpp_codegen_add((int32_t)G_B42_2, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)G_B42_1, (int32_t)G_B42_0)))));
		float L_133 = __this->get_m_ChildMaxWidth_23();
		float L_134 = V_12;
		float L_135 = V_13;
		((GUILayoutEntry_t3214611570 *)__this)->set_maxWidth_1(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_133, (float)L_134)), (float)L_135)));
		goto IL_0411;
	}

IL_0408:
	{
		((GUILayoutEntry_t3214611570 *)__this)->set_stretchWidth_5(0);
	}

IL_0411:
	{
		float L_136 = ((GUILayoutEntry_t3214611570 *)__this)->get_maxWidth_1();
		float L_137 = ((GUILayoutEntry_t3214611570 *)__this)->get_minWidth_0();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_138 = Mathf_Max_m3146388979(NULL /*static, unused*/, L_136, L_137, /*hidden argument*/NULL);
		((GUILayoutEntry_t3214611570 *)__this)->set_maxWidth_1(L_138);
		GUIStyle_t3956901511 * L_139 = GUILayoutEntry_get_style_m3965981147(__this, /*hidden argument*/NULL);
		NullCheck(L_139);
		float L_140 = GUIStyle_get_fixedWidth_m2576616348(L_139, /*hidden argument*/NULL);
		if ((((float)L_140) == ((float)(0.0f))))
		{
			goto IL_0460;
		}
	}
	{
		GUIStyle_t3956901511 * L_141 = GUILayoutEntry_get_style_m3965981147(__this, /*hidden argument*/NULL);
		NullCheck(L_141);
		float L_142 = GUIStyle_get_fixedWidth_m2576616348(L_141, /*hidden argument*/NULL);
		float L_143 = L_142;
		V_0 = L_143;
		((GUILayoutEntry_t3214611570 *)__this)->set_minWidth_0(L_143);
		float L_144 = V_0;
		((GUILayoutEntry_t3214611570 *)__this)->set_maxWidth_1(L_144);
		((GUILayoutEntry_t3214611570 *)__this)->set_stretchWidth_5(0);
	}

IL_0460:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::SetHorizontal(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void GUILayoutGroup_SetHorizontal_m996475327 (GUILayoutGroup_t2157789695 * __this, float ___x0, float ___width1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUILayoutGroup_SetHorizontal_m996475327_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RectOffset_t1369453676 * V_0 = NULL;
	GUILayoutEntry_t3214611570 * V_1 = NULL;
	Enumerator_t2280962893  V_2;
	memset(&V_2, 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	GUILayoutEntry_t3214611570 * V_8 = NULL;
	Enumerator_t2280962893  V_9;
	memset(&V_9, 0, sizeof(V_9));
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	int32_t V_15 = 0;
	bool V_16 = false;
	GUILayoutEntry_t3214611570 * V_17 = NULL;
	Enumerator_t2280962893  V_18;
	memset(&V_18, 0, sizeof(V_18));
	float V_19 = 0.0f;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B43_0 = 0;
	{
		float L_0 = ___x0;
		float L_1 = ___width1;
		GUILayoutEntry_SetHorizontal_m3919283295(__this, L_0, L_1, /*hidden argument*/NULL);
		bool L_2 = __this->get_resetCoords_12();
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		___x0 = (0.0f);
	}

IL_001b:
	{
		GUIStyle_t3956901511 * L_3 = GUILayoutEntry_get_style_m3965981147(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		RectOffset_t1369453676 * L_4 = GUIStyle_get_padding_m3526264743(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		bool L_5 = __this->get_isVertical_11();
		if (!L_5)
		{
			goto IL_01cd;
		}
	}
	{
		GUIStyle_t3956901511 * L_6 = GUILayoutEntry_get_style_m3965981147(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t3956901511_il2cpp_TypeInfo_var);
		GUIStyle_t3956901511 * L_7 = GUIStyle_get_none_m1545577352(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(GUIStyle_t3956901511 *)L_6) == ((RuntimeObject*)(GUIStyle_t3956901511 *)L_7)))
		{
			goto IL_00f4;
		}
	}
	{
		List_1_t391719016 * L_8 = __this->get_entries_10();
		NullCheck(L_8);
		Enumerator_t2280962893  L_9 = List_1_GetEnumerator_m1934946323(L_8, /*hidden argument*/List_1_GetEnumerator_m1934946323_RuntimeMethod_var);
		V_2 = L_9;
	}

IL_0051:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00cf;
		}

IL_0056:
		{
			GUILayoutEntry_t3214611570 * L_10 = Enumerator_get_Current_m2663170093((Enumerator_t2280962893 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m2663170093_RuntimeMethod_var);
			V_1 = L_10;
			GUILayoutEntry_t3214611570 * L_11 = V_1;
			NullCheck(L_11);
			RectOffset_t1369453676 * L_12 = VirtFuncInvoker0< RectOffset_t1369453676 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_11);
			NullCheck(L_12);
			int32_t L_13 = RectOffset_get_left_m1232181034(L_12, /*hidden argument*/NULL);
			RectOffset_t1369453676 * L_14 = V_0;
			NullCheck(L_14);
			int32_t L_15 = RectOffset_get_left_m1232181034(L_14, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
			int32_t L_16 = Mathf_Max_m3673002171(NULL /*static, unused*/, L_13, L_15, /*hidden argument*/NULL);
			V_3 = (((float)((float)L_16)));
			float L_17 = ___x0;
			float L_18 = V_3;
			V_4 = ((float)il2cpp_codegen_add((float)L_17, (float)L_18));
			float L_19 = ___width1;
			GUILayoutEntry_t3214611570 * L_20 = V_1;
			NullCheck(L_20);
			RectOffset_t1369453676 * L_21 = VirtFuncInvoker0< RectOffset_t1369453676 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_20);
			NullCheck(L_21);
			int32_t L_22 = RectOffset_get_right_m2294081512(L_21, /*hidden argument*/NULL);
			RectOffset_t1369453676 * L_23 = V_0;
			NullCheck(L_23);
			int32_t L_24 = RectOffset_get_right_m2294081512(L_23, /*hidden argument*/NULL);
			int32_t L_25 = Mathf_Max_m3673002171(NULL /*static, unused*/, L_22, L_24, /*hidden argument*/NULL);
			float L_26 = V_3;
			V_5 = ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)L_19, (float)(((float)((float)L_25))))), (float)L_26));
			GUILayoutEntry_t3214611570 * L_27 = V_1;
			NullCheck(L_27);
			int32_t L_28 = L_27->get_stretchWidth_5();
			if (!L_28)
			{
				goto IL_00b3;
			}
		}

IL_00a4:
		{
			GUILayoutEntry_t3214611570 * L_29 = V_1;
			float L_30 = V_4;
			float L_31 = V_5;
			NullCheck(L_29);
			VirtActionInvoker2< float, float >::Invoke(7 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_29, L_30, L_31);
			goto IL_00ce;
		}

IL_00b3:
		{
			GUILayoutEntry_t3214611570 * L_32 = V_1;
			float L_33 = V_4;
			float L_34 = V_5;
			GUILayoutEntry_t3214611570 * L_35 = V_1;
			NullCheck(L_35);
			float L_36 = L_35->get_minWidth_0();
			GUILayoutEntry_t3214611570 * L_37 = V_1;
			NullCheck(L_37);
			float L_38 = L_37->get_maxWidth_1();
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
			float L_39 = Mathf_Clamp_m3350697880(NULL /*static, unused*/, L_34, L_36, L_38, /*hidden argument*/NULL);
			NullCheck(L_32);
			VirtActionInvoker2< float, float >::Invoke(7 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_32, L_33, L_39);
		}

IL_00ce:
		{
		}

IL_00cf:
		{
			bool L_40 = Enumerator_MoveNext_m2324433341((Enumerator_t2280962893 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m2324433341_RuntimeMethod_var);
			if (L_40)
			{
				goto IL_0056;
			}
		}

IL_00db:
		{
			IL2CPP_LEAVE(0xEE, FINALLY_00e0);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00e0;
	}

FINALLY_00e0:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3494652212((Enumerator_t2280962893 *)(&V_2), /*hidden argument*/Enumerator_Dispose_m3494652212_RuntimeMethod_var);
		IL2CPP_END_FINALLY(224)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(224)
	{
		IL2CPP_JUMP_TBL(0xEE, IL_00ee)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00ee:
	{
		goto IL_01c7;
	}

IL_00f4:
	{
		float L_41 = ___x0;
		RectOffset_t1369453676 * L_42 = VirtFuncInvoker0< RectOffset_t1369453676 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, __this);
		NullCheck(L_42);
		int32_t L_43 = RectOffset_get_left_m1232181034(L_42, /*hidden argument*/NULL);
		V_6 = ((float)il2cpp_codegen_subtract((float)L_41, (float)(((float)((float)L_43)))));
		float L_44 = ___width1;
		RectOffset_t1369453676 * L_45 = VirtFuncInvoker0< RectOffset_t1369453676 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, __this);
		NullCheck(L_45);
		int32_t L_46 = RectOffset_get_horizontal_m2663785949(L_45, /*hidden argument*/NULL);
		V_7 = ((float)il2cpp_codegen_add((float)L_44, (float)(((float)((float)L_46)))));
		List_1_t391719016 * L_47 = __this->get_entries_10();
		NullCheck(L_47);
		Enumerator_t2280962893  L_48 = List_1_GetEnumerator_m1934946323(L_47, /*hidden argument*/List_1_GetEnumerator_m1934946323_RuntimeMethod_var);
		V_9 = L_48;
	}

IL_0123:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01a7;
		}

IL_0128:
		{
			GUILayoutEntry_t3214611570 * L_49 = Enumerator_get_Current_m2663170093((Enumerator_t2280962893 *)(&V_9), /*hidden argument*/Enumerator_get_Current_m2663170093_RuntimeMethod_var);
			V_8 = L_49;
			GUILayoutEntry_t3214611570 * L_50 = V_8;
			NullCheck(L_50);
			int32_t L_51 = L_50->get_stretchWidth_5();
			if (!L_51)
			{
				goto IL_016c;
			}
		}

IL_013e:
		{
			GUILayoutEntry_t3214611570 * L_52 = V_8;
			float L_53 = V_6;
			GUILayoutEntry_t3214611570 * L_54 = V_8;
			NullCheck(L_54);
			RectOffset_t1369453676 * L_55 = VirtFuncInvoker0< RectOffset_t1369453676 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_54);
			NullCheck(L_55);
			int32_t L_56 = RectOffset_get_left_m1232181034(L_55, /*hidden argument*/NULL);
			float L_57 = V_7;
			GUILayoutEntry_t3214611570 * L_58 = V_8;
			NullCheck(L_58);
			RectOffset_t1369453676 * L_59 = VirtFuncInvoker0< RectOffset_t1369453676 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_58);
			NullCheck(L_59);
			int32_t L_60 = RectOffset_get_horizontal_m2663785949(L_59, /*hidden argument*/NULL);
			NullCheck(L_52);
			VirtActionInvoker2< float, float >::Invoke(7 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_52, ((float)il2cpp_codegen_add((float)L_53, (float)(((float)((float)L_56))))), ((float)il2cpp_codegen_subtract((float)L_57, (float)(((float)((float)L_60))))));
			goto IL_01a6;
		}

IL_016c:
		{
			GUILayoutEntry_t3214611570 * L_61 = V_8;
			float L_62 = V_6;
			GUILayoutEntry_t3214611570 * L_63 = V_8;
			NullCheck(L_63);
			RectOffset_t1369453676 * L_64 = VirtFuncInvoker0< RectOffset_t1369453676 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_63);
			NullCheck(L_64);
			int32_t L_65 = RectOffset_get_left_m1232181034(L_64, /*hidden argument*/NULL);
			float L_66 = V_7;
			GUILayoutEntry_t3214611570 * L_67 = V_8;
			NullCheck(L_67);
			RectOffset_t1369453676 * L_68 = VirtFuncInvoker0< RectOffset_t1369453676 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_67);
			NullCheck(L_68);
			int32_t L_69 = RectOffset_get_horizontal_m2663785949(L_68, /*hidden argument*/NULL);
			GUILayoutEntry_t3214611570 * L_70 = V_8;
			NullCheck(L_70);
			float L_71 = L_70->get_minWidth_0();
			GUILayoutEntry_t3214611570 * L_72 = V_8;
			NullCheck(L_72);
			float L_73 = L_72->get_maxWidth_1();
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
			float L_74 = Mathf_Clamp_m3350697880(NULL /*static, unused*/, ((float)il2cpp_codegen_subtract((float)L_66, (float)(((float)((float)L_69))))), L_71, L_73, /*hidden argument*/NULL);
			NullCheck(L_61);
			VirtActionInvoker2< float, float >::Invoke(7 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_61, ((float)il2cpp_codegen_add((float)L_62, (float)(((float)((float)L_65))))), L_74);
		}

IL_01a6:
		{
		}

IL_01a7:
		{
			bool L_75 = Enumerator_MoveNext_m2324433341((Enumerator_t2280962893 *)(&V_9), /*hidden argument*/Enumerator_MoveNext_m2324433341_RuntimeMethod_var);
			if (L_75)
			{
				goto IL_0128;
			}
		}

IL_01b3:
		{
			IL2CPP_LEAVE(0x1C6, FINALLY_01b8);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01b8;
	}

FINALLY_01b8:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3494652212((Enumerator_t2280962893 *)(&V_9), /*hidden argument*/Enumerator_Dispose_m3494652212_RuntimeMethod_var);
		IL2CPP_END_FINALLY(440)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(440)
	{
		IL2CPP_JUMP_TBL(0x1C6, IL_01c6)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_01c6:
	{
	}

IL_01c7:
	{
		goto IL_03d4;
	}

IL_01cd:
	{
		GUIStyle_t3956901511 * L_76 = GUILayoutEntry_get_style_m3965981147(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t3956901511_il2cpp_TypeInfo_var);
		GUIStyle_t3956901511 * L_77 = GUIStyle_get_none_m1545577352(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(GUIStyle_t3956901511 *)L_76) == ((RuntimeObject*)(GUIStyle_t3956901511 *)L_77)))
		{
			goto IL_025f;
		}
	}
	{
		RectOffset_t1369453676 * L_78 = V_0;
		NullCheck(L_78);
		int32_t L_79 = RectOffset_get_left_m1232181034(L_78, /*hidden argument*/NULL);
		V_10 = (((float)((float)L_79)));
		RectOffset_t1369453676 * L_80 = V_0;
		NullCheck(L_80);
		int32_t L_81 = RectOffset_get_right_m2294081512(L_80, /*hidden argument*/NULL);
		V_11 = (((float)((float)L_81)));
		List_1_t391719016 * L_82 = __this->get_entries_10();
		NullCheck(L_82);
		int32_t L_83 = List_1_get_Count_m1057782749(L_82, /*hidden argument*/List_1_get_Count_m1057782749_RuntimeMethod_var);
		if (!L_83)
		{
			goto IL_024f;
		}
	}
	{
		float L_84 = V_10;
		List_1_t391719016 * L_85 = __this->get_entries_10();
		NullCheck(L_85);
		GUILayoutEntry_t3214611570 * L_86 = List_1_get_Item_m3839229424(L_85, 0, /*hidden argument*/List_1_get_Item_m3839229424_RuntimeMethod_var);
		NullCheck(L_86);
		RectOffset_t1369453676 * L_87 = VirtFuncInvoker0< RectOffset_t1369453676 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_86);
		NullCheck(L_87);
		int32_t L_88 = RectOffset_get_left_m1232181034(L_87, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_89 = Mathf_Max_m3146388979(NULL /*static, unused*/, L_84, (((float)((float)L_88))), /*hidden argument*/NULL);
		V_10 = L_89;
		float L_90 = V_11;
		List_1_t391719016 * L_91 = __this->get_entries_10();
		List_1_t391719016 * L_92 = __this->get_entries_10();
		NullCheck(L_92);
		int32_t L_93 = List_1_get_Count_m1057782749(L_92, /*hidden argument*/List_1_get_Count_m1057782749_RuntimeMethod_var);
		NullCheck(L_91);
		GUILayoutEntry_t3214611570 * L_94 = List_1_get_Item_m3839229424(L_91, ((int32_t)il2cpp_codegen_subtract((int32_t)L_93, (int32_t)1)), /*hidden argument*/List_1_get_Item_m3839229424_RuntimeMethod_var);
		NullCheck(L_94);
		RectOffset_t1369453676 * L_95 = VirtFuncInvoker0< RectOffset_t1369453676 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_94);
		NullCheck(L_95);
		int32_t L_96 = RectOffset_get_right_m2294081512(L_95, /*hidden argument*/NULL);
		float L_97 = Mathf_Max_m3146388979(NULL /*static, unused*/, L_90, (((float)((float)L_96))), /*hidden argument*/NULL);
		V_11 = L_97;
	}

IL_024f:
	{
		float L_98 = ___x0;
		float L_99 = V_10;
		___x0 = ((float)il2cpp_codegen_add((float)L_98, (float)L_99));
		float L_100 = ___width1;
		float L_101 = V_11;
		float L_102 = V_10;
		___width1 = ((float)il2cpp_codegen_subtract((float)L_100, (float)((float)il2cpp_codegen_add((float)L_101, (float)L_102))));
	}

IL_025f:
	{
		float L_103 = ___width1;
		float L_104 = __this->get_spacing_13();
		List_1_t391719016 * L_105 = __this->get_entries_10();
		NullCheck(L_105);
		int32_t L_106 = List_1_get_Count_m1057782749(L_105, /*hidden argument*/List_1_get_Count_m1057782749_RuntimeMethod_var);
		V_12 = ((float)il2cpp_codegen_subtract((float)L_103, (float)((float)il2cpp_codegen_multiply((float)L_104, (float)(((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_106, (int32_t)1)))))))));
		V_13 = (0.0f);
		float L_107 = __this->get_m_ChildMinWidth_22();
		float L_108 = __this->get_m_ChildMaxWidth_23();
		if ((((float)L_107) == ((float)L_108)))
		{
			goto IL_02b8;
		}
	}
	{
		float L_109 = V_12;
		float L_110 = __this->get_m_ChildMinWidth_22();
		float L_111 = __this->get_m_ChildMaxWidth_23();
		float L_112 = __this->get_m_ChildMinWidth_22();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_113 = Mathf_Clamp_m3350697880(NULL /*static, unused*/, ((float)((float)((float)il2cpp_codegen_subtract((float)L_109, (float)L_110))/(float)((float)il2cpp_codegen_subtract((float)L_111, (float)L_112)))), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_13 = L_113;
	}

IL_02b8:
	{
		V_14 = (0.0f);
		float L_114 = V_12;
		float L_115 = __this->get_m_ChildMaxWidth_23();
		if ((!(((float)L_114) > ((float)L_115))))
		{
			goto IL_02ef;
		}
	}
	{
		int32_t L_116 = __this->get_m_StretchableCountX_18();
		if ((((int32_t)L_116) <= ((int32_t)0)))
		{
			goto IL_02ee;
		}
	}
	{
		float L_117 = V_12;
		float L_118 = __this->get_m_ChildMaxWidth_23();
		int32_t L_119 = __this->get_m_StretchableCountX_18();
		V_14 = ((float)((float)((float)il2cpp_codegen_subtract((float)L_117, (float)L_118))/(float)(((float)((float)L_119)))));
	}

IL_02ee:
	{
	}

IL_02ef:
	{
		V_15 = 0;
		V_16 = (bool)1;
		List_1_t391719016 * L_120 = __this->get_entries_10();
		NullCheck(L_120);
		Enumerator_t2280962893  L_121 = List_1_GetEnumerator_m1934946323(L_120, /*hidden argument*/List_1_GetEnumerator_m1934946323_RuntimeMethod_var);
		V_18 = L_121;
	}

IL_0303:
	try
	{ // begin try (depth: 1)
		{
			goto IL_03b4;
		}

IL_0308:
		{
			GUILayoutEntry_t3214611570 * L_122 = Enumerator_get_Current_m2663170093((Enumerator_t2280962893 *)(&V_18), /*hidden argument*/Enumerator_get_Current_m2663170093_RuntimeMethod_var);
			V_17 = L_122;
			GUILayoutEntry_t3214611570 * L_123 = V_17;
			NullCheck(L_123);
			float L_124 = L_123->get_minWidth_0();
			GUILayoutEntry_t3214611570 * L_125 = V_17;
			NullCheck(L_125);
			float L_126 = L_125->get_maxWidth_1();
			float L_127 = V_13;
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
			float L_128 = Mathf_Lerp_m1004423579(NULL /*static, unused*/, L_124, L_126, L_127, /*hidden argument*/NULL);
			V_19 = L_128;
			float L_129 = V_19;
			float L_130 = V_14;
			GUILayoutEntry_t3214611570 * L_131 = V_17;
			NullCheck(L_131);
			int32_t L_132 = L_131->get_stretchWidth_5();
			V_19 = ((float)il2cpp_codegen_add((float)L_129, (float)((float)il2cpp_codegen_multiply((float)L_130, (float)(((float)((float)L_132)))))));
			GUILayoutEntry_t3214611570 * L_133 = V_17;
			NullCheck(L_133);
			GUIStyle_t3956901511 * L_134 = GUILayoutEntry_get_style_m3965981147(L_133, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var);
			GUIStyle_t3956901511 * L_135 = GUILayoutUtility_get_spaceStyle_m3392862907(NULL /*static, unused*/, /*hidden argument*/NULL);
			if ((((RuntimeObject*)(GUIStyle_t3956901511 *)L_134) == ((RuntimeObject*)(GUIStyle_t3956901511 *)L_135)))
			{
				goto IL_0392;
			}
		}

IL_034a:
		{
			GUILayoutEntry_t3214611570 * L_136 = V_17;
			NullCheck(L_136);
			RectOffset_t1369453676 * L_137 = VirtFuncInvoker0< RectOffset_t1369453676 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_136);
			NullCheck(L_137);
			int32_t L_138 = RectOffset_get_left_m1232181034(L_137, /*hidden argument*/NULL);
			V_20 = L_138;
			bool L_139 = V_16;
			if (!L_139)
			{
				goto IL_0368;
			}
		}

IL_0360:
		{
			V_20 = 0;
			V_16 = (bool)0;
		}

IL_0368:
		{
			int32_t L_140 = V_15;
			int32_t L_141 = V_20;
			if ((((int32_t)L_140) <= ((int32_t)L_141)))
			{
				goto IL_0378;
			}
		}

IL_0371:
		{
			int32_t L_142 = V_15;
			G_B43_0 = L_142;
			goto IL_037a;
		}

IL_0378:
		{
			int32_t L_143 = V_20;
			G_B43_0 = L_143;
		}

IL_037a:
		{
			V_21 = G_B43_0;
			float L_144 = ___x0;
			int32_t L_145 = V_21;
			___x0 = ((float)il2cpp_codegen_add((float)L_144, (float)(((float)((float)L_145)))));
			GUILayoutEntry_t3214611570 * L_146 = V_17;
			NullCheck(L_146);
			RectOffset_t1369453676 * L_147 = VirtFuncInvoker0< RectOffset_t1369453676 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_146);
			NullCheck(L_147);
			int32_t L_148 = RectOffset_get_right_m2294081512(L_147, /*hidden argument*/NULL);
			V_15 = L_148;
		}

IL_0392:
		{
			GUILayoutEntry_t3214611570 * L_149 = V_17;
			float L_150 = ___x0;
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
			float L_151 = bankers_roundf(L_150);
			float L_152 = V_19;
			float L_153 = bankers_roundf(L_152);
			NullCheck(L_149);
			VirtActionInvoker2< float, float >::Invoke(7 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_149, L_151, L_153);
			float L_154 = ___x0;
			float L_155 = V_19;
			float L_156 = __this->get_spacing_13();
			___x0 = ((float)il2cpp_codegen_add((float)L_154, (float)((float)il2cpp_codegen_add((float)L_155, (float)L_156))));
		}

IL_03b4:
		{
			bool L_157 = Enumerator_MoveNext_m2324433341((Enumerator_t2280962893 *)(&V_18), /*hidden argument*/Enumerator_MoveNext_m2324433341_RuntimeMethod_var);
			if (L_157)
			{
				goto IL_0308;
			}
		}

IL_03c0:
		{
			IL2CPP_LEAVE(0x3D3, FINALLY_03c5);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_03c5;
	}

FINALLY_03c5:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3494652212((Enumerator_t2280962893 *)(&V_18), /*hidden argument*/Enumerator_Dispose_m3494652212_RuntimeMethod_var);
		IL2CPP_END_FINALLY(965)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(965)
	{
		IL2CPP_JUMP_TBL(0x3D3, IL_03d3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_03d3:
	{
	}

IL_03d4:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::CalcHeight()
extern "C" IL2CPP_METHOD_ATTR void GUILayoutGroup_CalcHeight_m1669391299 (GUILayoutGroup_t2157789695 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUILayoutGroup_CalcHeight_m1669391299_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	GUILayoutEntry_t3214611570 * V_5 = NULL;
	Enumerator_t2280962893  V_6;
	memset(&V_6, 0, sizeof(V_6));
	RectOffset_t1369453676 * V_7 = NULL;
	int32_t V_8 = 0;
	bool V_9 = false;
	GUILayoutEntry_t3214611570 * V_10 = NULL;
	Enumerator_t2280962893  V_11;
	memset(&V_11, 0, sizeof(V_11));
	RectOffset_t1369453676 * V_12 = NULL;
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B38_0 = 0;
	int32_t G_B38_1 = 0;
	GUILayoutGroup_t2157789695 * G_B38_2 = NULL;
	int32_t G_B37_0 = 0;
	int32_t G_B37_1 = 0;
	GUILayoutGroup_t2157789695 * G_B37_2 = NULL;
	int32_t G_B39_0 = 0;
	int32_t G_B39_1 = 0;
	int32_t G_B39_2 = 0;
	GUILayoutGroup_t2157789695 * G_B39_3 = NULL;
	{
		List_1_t391719016 * L_0 = __this->get_entries_10();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m1057782749(L_0, /*hidden argument*/List_1_get_Count_m1057782749_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0037;
		}
	}
	{
		GUIStyle_t3956901511 * L_2 = GUILayoutEntry_get_style_m3965981147(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		RectOffset_t1369453676 * L_3 = GUIStyle_get_padding_m3526264743(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = RectOffset_get_vertical_m2029961580(L_3, /*hidden argument*/NULL);
		float L_5 = (((float)((float)L_4)));
		V_0 = L_5;
		((GUILayoutEntry_t3214611570 *)__this)->set_minHeight_2(L_5);
		float L_6 = V_0;
		((GUILayoutEntry_t3214611570 *)__this)->set_maxHeight_3(L_6);
		goto IL_0422;
	}

IL_0037:
	{
		V_1 = 0;
		V_2 = 0;
		__this->set_m_ChildMinHeight_24((0.0f));
		__this->set_m_ChildMaxHeight_25((0.0f));
		__this->set_m_StretchableCountY_19(0);
		bool L_7 = __this->get_isVertical_11();
		if (!L_7)
		{
			goto IL_01eb;
		}
	}
	{
		V_3 = 0;
		V_4 = (bool)1;
		List_1_t391719016 * L_8 = __this->get_entries_10();
		NullCheck(L_8);
		Enumerator_t2280962893  L_9 = List_1_GetEnumerator_m1934946323(L_8, /*hidden argument*/List_1_GetEnumerator_m1934946323_RuntimeMethod_var);
		V_6 = L_9;
	}

IL_0077:
	try
	{ // begin try (depth: 1)
		{
			goto IL_016a;
		}

IL_007c:
		{
			GUILayoutEntry_t3214611570 * L_10 = Enumerator_get_Current_m2663170093((Enumerator_t2280962893 *)(&V_6), /*hidden argument*/Enumerator_get_Current_m2663170093_RuntimeMethod_var);
			V_5 = L_10;
			GUILayoutEntry_t3214611570 * L_11 = V_5;
			NullCheck(L_11);
			VirtActionInvoker0::Invoke(6 /* System.Void UnityEngine.GUILayoutEntry::CalcHeight() */, L_11);
			GUILayoutEntry_t3214611570 * L_12 = V_5;
			NullCheck(L_12);
			RectOffset_t1369453676 * L_13 = VirtFuncInvoker0< RectOffset_t1369453676 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_12);
			V_7 = L_13;
			GUILayoutEntry_t3214611570 * L_14 = V_5;
			NullCheck(L_14);
			GUIStyle_t3956901511 * L_15 = GUILayoutEntry_get_style_m3965981147(L_14, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var);
			GUIStyle_t3956901511 * L_16 = GUILayoutUtility_get_spaceStyle_m3392862907(NULL /*static, unused*/, /*hidden argument*/NULL);
			if ((((RuntimeObject*)(GUIStyle_t3956901511 *)L_15) == ((RuntimeObject*)(GUIStyle_t3956901511 *)L_16)))
			{
				goto IL_012b;
			}
		}

IL_00a7:
		{
			bool L_17 = V_4;
			if (L_17)
			{
				goto IL_00c3;
			}
		}

IL_00af:
		{
			int32_t L_18 = V_3;
			RectOffset_t1369453676 * L_19 = V_7;
			NullCheck(L_19);
			int32_t L_20 = RectOffset_get_top_m2855347295(L_19, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
			int32_t L_21 = Mathf_Max_m3673002171(NULL /*static, unused*/, L_18, L_20, /*hidden argument*/NULL);
			V_8 = L_21;
			goto IL_00cb;
		}

IL_00c3:
		{
			V_8 = 0;
			V_4 = (bool)0;
		}

IL_00cb:
		{
			float L_22 = __this->get_m_ChildMinHeight_24();
			GUILayoutEntry_t3214611570 * L_23 = V_5;
			NullCheck(L_23);
			float L_24 = L_23->get_minHeight_2();
			float L_25 = __this->get_spacing_13();
			int32_t L_26 = V_8;
			__this->set_m_ChildMinHeight_24(((float)il2cpp_codegen_add((float)L_22, (float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_24, (float)L_25)), (float)(((float)((float)L_26))))))));
			float L_27 = __this->get_m_ChildMaxHeight_25();
			GUILayoutEntry_t3214611570 * L_28 = V_5;
			NullCheck(L_28);
			float L_29 = L_28->get_maxHeight_3();
			float L_30 = __this->get_spacing_13();
			int32_t L_31 = V_8;
			__this->set_m_ChildMaxHeight_25(((float)il2cpp_codegen_add((float)L_27, (float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_29, (float)L_30)), (float)(((float)((float)L_31))))))));
			RectOffset_t1369453676 * L_32 = V_7;
			NullCheck(L_32);
			int32_t L_33 = RectOffset_get_bottom_m890891527(L_32, /*hidden argument*/NULL);
			V_3 = L_33;
			int32_t L_34 = __this->get_m_StretchableCountY_19();
			GUILayoutEntry_t3214611570 * L_35 = V_5;
			NullCheck(L_35);
			int32_t L_36 = L_35->get_stretchHeight_6();
			__this->set_m_StretchableCountY_19(((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)L_36)));
			goto IL_0169;
		}

IL_012b:
		{
			float L_37 = __this->get_m_ChildMinHeight_24();
			GUILayoutEntry_t3214611570 * L_38 = V_5;
			NullCheck(L_38);
			float L_39 = L_38->get_minHeight_2();
			__this->set_m_ChildMinHeight_24(((float)il2cpp_codegen_add((float)L_37, (float)L_39)));
			float L_40 = __this->get_m_ChildMaxHeight_25();
			GUILayoutEntry_t3214611570 * L_41 = V_5;
			NullCheck(L_41);
			float L_42 = L_41->get_maxHeight_3();
			__this->set_m_ChildMaxHeight_25(((float)il2cpp_codegen_add((float)L_40, (float)L_42)));
			int32_t L_43 = __this->get_m_StretchableCountY_19();
			GUILayoutEntry_t3214611570 * L_44 = V_5;
			NullCheck(L_44);
			int32_t L_45 = L_44->get_stretchHeight_6();
			__this->set_m_StretchableCountY_19(((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)L_45)));
		}

IL_0169:
		{
		}

IL_016a:
		{
			bool L_46 = Enumerator_MoveNext_m2324433341((Enumerator_t2280962893 *)(&V_6), /*hidden argument*/Enumerator_MoveNext_m2324433341_RuntimeMethod_var);
			if (L_46)
			{
				goto IL_007c;
			}
		}

IL_0176:
		{
			IL2CPP_LEAVE(0x189, FINALLY_017b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_017b;
	}

FINALLY_017b:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3494652212((Enumerator_t2280962893 *)(&V_6), /*hidden argument*/Enumerator_Dispose_m3494652212_RuntimeMethod_var);
		IL2CPP_END_FINALLY(379)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(379)
	{
		IL2CPP_JUMP_TBL(0x189, IL_0189)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0189:
	{
		float L_47 = __this->get_m_ChildMinHeight_24();
		float L_48 = __this->get_spacing_13();
		__this->set_m_ChildMinHeight_24(((float)il2cpp_codegen_subtract((float)L_47, (float)L_48)));
		float L_49 = __this->get_m_ChildMaxHeight_25();
		float L_50 = __this->get_spacing_13();
		__this->set_m_ChildMaxHeight_25(((float)il2cpp_codegen_subtract((float)L_49, (float)L_50)));
		List_1_t391719016 * L_51 = __this->get_entries_10();
		NullCheck(L_51);
		int32_t L_52 = List_1_get_Count_m1057782749(L_51, /*hidden argument*/List_1_get_Count_m1057782749_RuntimeMethod_var);
		if (!L_52)
		{
			goto IL_01df;
		}
	}
	{
		List_1_t391719016 * L_53 = __this->get_entries_10();
		NullCheck(L_53);
		GUILayoutEntry_t3214611570 * L_54 = List_1_get_Item_m3839229424(L_53, 0, /*hidden argument*/List_1_get_Item_m3839229424_RuntimeMethod_var);
		NullCheck(L_54);
		RectOffset_t1369453676 * L_55 = VirtFuncInvoker0< RectOffset_t1369453676 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_54);
		NullCheck(L_55);
		int32_t L_56 = RectOffset_get_top_m2855347295(L_55, /*hidden argument*/NULL);
		V_1 = L_56;
		int32_t L_57 = V_3;
		V_2 = L_57;
		goto IL_01e5;
	}

IL_01df:
	{
		int32_t L_58 = 0;
		V_1 = L_58;
		V_2 = L_58;
	}

IL_01e5:
	{
		goto IL_02d3;
	}

IL_01eb:
	{
		V_9 = (bool)1;
		List_1_t391719016 * L_59 = __this->get_entries_10();
		NullCheck(L_59);
		Enumerator_t2280962893  L_60 = List_1_GetEnumerator_m1934946323(L_59, /*hidden argument*/List_1_GetEnumerator_m1934946323_RuntimeMethod_var);
		V_11 = L_60;
	}

IL_01fd:
	try
	{ // begin try (depth: 1)
		{
			goto IL_02b3;
		}

IL_0202:
		{
			GUILayoutEntry_t3214611570 * L_61 = Enumerator_get_Current_m2663170093((Enumerator_t2280962893 *)(&V_11), /*hidden argument*/Enumerator_get_Current_m2663170093_RuntimeMethod_var);
			V_10 = L_61;
			GUILayoutEntry_t3214611570 * L_62 = V_10;
			NullCheck(L_62);
			VirtActionInvoker0::Invoke(6 /* System.Void UnityEngine.GUILayoutEntry::CalcHeight() */, L_62);
			GUILayoutEntry_t3214611570 * L_63 = V_10;
			NullCheck(L_63);
			RectOffset_t1369453676 * L_64 = VirtFuncInvoker0< RectOffset_t1369453676 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_63);
			V_12 = L_64;
			GUILayoutEntry_t3214611570 * L_65 = V_10;
			NullCheck(L_65);
			GUIStyle_t3956901511 * L_66 = GUILayoutEntry_get_style_m3965981147(L_65, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var);
			GUIStyle_t3956901511 * L_67 = GUILayoutUtility_get_spaceStyle_m3392862907(NULL /*static, unused*/, /*hidden argument*/NULL);
			if ((((RuntimeObject*)(GUIStyle_t3956901511 *)L_66) == ((RuntimeObject*)(GUIStyle_t3956901511 *)L_67)))
			{
				goto IL_029e;
			}
		}

IL_022d:
		{
			bool L_68 = V_9;
			if (L_68)
			{
				goto IL_0258;
			}
		}

IL_0235:
		{
			RectOffset_t1369453676 * L_69 = V_12;
			NullCheck(L_69);
			int32_t L_70 = RectOffset_get_top_m2855347295(L_69, /*hidden argument*/NULL);
			int32_t L_71 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
			int32_t L_72 = Mathf_Min_m18103608(NULL /*static, unused*/, L_70, L_71, /*hidden argument*/NULL);
			V_1 = L_72;
			RectOffset_t1369453676 * L_73 = V_12;
			NullCheck(L_73);
			int32_t L_74 = RectOffset_get_bottom_m890891527(L_73, /*hidden argument*/NULL);
			int32_t L_75 = V_2;
			int32_t L_76 = Mathf_Min_m18103608(NULL /*static, unused*/, L_74, L_75, /*hidden argument*/NULL);
			V_2 = L_76;
			goto IL_026d;
		}

IL_0258:
		{
			RectOffset_t1369453676 * L_77 = V_12;
			NullCheck(L_77);
			int32_t L_78 = RectOffset_get_top_m2855347295(L_77, /*hidden argument*/NULL);
			V_1 = L_78;
			RectOffset_t1369453676 * L_79 = V_12;
			NullCheck(L_79);
			int32_t L_80 = RectOffset_get_bottom_m890891527(L_79, /*hidden argument*/NULL);
			V_2 = L_80;
			V_9 = (bool)0;
		}

IL_026d:
		{
			GUILayoutEntry_t3214611570 * L_81 = V_10;
			NullCheck(L_81);
			float L_82 = L_81->get_minHeight_2();
			float L_83 = __this->get_m_ChildMinHeight_24();
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
			float L_84 = Mathf_Max_m3146388979(NULL /*static, unused*/, L_82, L_83, /*hidden argument*/NULL);
			__this->set_m_ChildMinHeight_24(L_84);
			GUILayoutEntry_t3214611570 * L_85 = V_10;
			NullCheck(L_85);
			float L_86 = L_85->get_maxHeight_3();
			float L_87 = __this->get_m_ChildMaxHeight_25();
			float L_88 = Mathf_Max_m3146388979(NULL /*static, unused*/, L_86, L_87, /*hidden argument*/NULL);
			__this->set_m_ChildMaxHeight_25(L_88);
		}

IL_029e:
		{
			int32_t L_89 = __this->get_m_StretchableCountY_19();
			GUILayoutEntry_t3214611570 * L_90 = V_10;
			NullCheck(L_90);
			int32_t L_91 = L_90->get_stretchHeight_6();
			__this->set_m_StretchableCountY_19(((int32_t)il2cpp_codegen_add((int32_t)L_89, (int32_t)L_91)));
		}

IL_02b3:
		{
			bool L_92 = Enumerator_MoveNext_m2324433341((Enumerator_t2280962893 *)(&V_11), /*hidden argument*/Enumerator_MoveNext_m2324433341_RuntimeMethod_var);
			if (L_92)
			{
				goto IL_0202;
			}
		}

IL_02bf:
		{
			IL2CPP_LEAVE(0x2D2, FINALLY_02c4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_02c4;
	}

FINALLY_02c4:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3494652212((Enumerator_t2280962893 *)(&V_11), /*hidden argument*/Enumerator_Dispose_m3494652212_RuntimeMethod_var);
		IL2CPP_END_FINALLY(708)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(708)
	{
		IL2CPP_JUMP_TBL(0x2D2, IL_02d2)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_02d2:
	{
	}

IL_02d3:
	{
		V_13 = (0.0f);
		V_14 = (0.0f);
		GUIStyle_t3956901511 * L_93 = GUILayoutEntry_get_style_m3965981147(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t3956901511_il2cpp_TypeInfo_var);
		GUIStyle_t3956901511 * L_94 = GUIStyle_get_none_m1545577352(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(GUIStyle_t3956901511 *)L_93) == ((RuntimeObject*)(GUIStyle_t3956901511 *)L_94))))
		{
			goto IL_02fc;
		}
	}
	{
		bool L_95 = __this->get_m_UserSpecifiedHeight_21();
		if (!L_95)
		{
			goto IL_0335;
		}
	}

IL_02fc:
	{
		GUIStyle_t3956901511 * L_96 = GUILayoutEntry_get_style_m3965981147(__this, /*hidden argument*/NULL);
		NullCheck(L_96);
		RectOffset_t1369453676 * L_97 = GUIStyle_get_padding_m3526264743(L_96, /*hidden argument*/NULL);
		NullCheck(L_97);
		int32_t L_98 = RectOffset_get_top_m2855347295(L_97, /*hidden argument*/NULL);
		int32_t L_99 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_100 = Mathf_Max_m3673002171(NULL /*static, unused*/, L_98, L_99, /*hidden argument*/NULL);
		V_13 = (((float)((float)L_100)));
		GUIStyle_t3956901511 * L_101 = GUILayoutEntry_get_style_m3965981147(__this, /*hidden argument*/NULL);
		NullCheck(L_101);
		RectOffset_t1369453676 * L_102 = GUIStyle_get_padding_m3526264743(L_101, /*hidden argument*/NULL);
		NullCheck(L_102);
		int32_t L_103 = RectOffset_get_bottom_m890891527(L_102, /*hidden argument*/NULL);
		int32_t L_104 = V_2;
		int32_t L_105 = Mathf_Max_m3673002171(NULL /*static, unused*/, L_103, L_104, /*hidden argument*/NULL);
		V_14 = (((float)((float)L_105)));
		goto IL_0359;
	}

IL_0335:
	{
		RectOffset_t1369453676 * L_106 = __this->get_m_Margin_26();
		int32_t L_107 = V_1;
		NullCheck(L_106);
		RectOffset_set_top_m713260669(L_106, L_107, /*hidden argument*/NULL);
		RectOffset_t1369453676 * L_108 = __this->get_m_Margin_26();
		int32_t L_109 = V_2;
		NullCheck(L_108);
		RectOffset_set_bottom_m2747419780(L_108, L_109, /*hidden argument*/NULL);
		float L_110 = (0.0f);
		V_14 = L_110;
		V_13 = L_110;
	}

IL_0359:
	{
		float L_111 = ((GUILayoutEntry_t3214611570 *)__this)->get_minHeight_2();
		float L_112 = __this->get_m_ChildMinHeight_24();
		float L_113 = V_13;
		float L_114 = V_14;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_115 = Mathf_Max_m3146388979(NULL /*static, unused*/, L_111, ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_112, (float)L_113)), (float)L_114)), /*hidden argument*/NULL);
		((GUILayoutEntry_t3214611570 *)__this)->set_minHeight_2(L_115);
		float L_116 = ((GUILayoutEntry_t3214611570 *)__this)->get_maxHeight_3();
		if ((!(((float)L_116) == ((float)(0.0f)))))
		{
			goto IL_03ca;
		}
	}
	{
		int32_t L_117 = ((GUILayoutEntry_t3214611570 *)__this)->get_stretchHeight_6();
		int32_t L_118 = __this->get_m_StretchableCountY_19();
		GUIStyle_t3956901511 * L_119 = GUILayoutEntry_get_style_m3965981147(__this, /*hidden argument*/NULL);
		NullCheck(L_119);
		bool L_120 = GUIStyle_get_stretchHeight_m4172805773(L_119, /*hidden argument*/NULL);
		G_B37_0 = L_118;
		G_B37_1 = L_117;
		G_B37_2 = __this;
		if (!L_120)
		{
			G_B38_0 = L_118;
			G_B38_1 = L_117;
			G_B38_2 = __this;
			goto IL_03aa;
		}
	}
	{
		G_B39_0 = 1;
		G_B39_1 = G_B37_0;
		G_B39_2 = G_B37_1;
		G_B39_3 = G_B37_2;
		goto IL_03ab;
	}

IL_03aa:
	{
		G_B39_0 = 0;
		G_B39_1 = G_B38_0;
		G_B39_2 = G_B38_1;
		G_B39_3 = G_B38_2;
	}

IL_03ab:
	{
		NullCheck(G_B39_3);
		((GUILayoutEntry_t3214611570 *)G_B39_3)->set_stretchHeight_6(((int32_t)il2cpp_codegen_add((int32_t)G_B39_2, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)G_B39_1, (int32_t)G_B39_0)))));
		float L_121 = __this->get_m_ChildMaxHeight_25();
		float L_122 = V_13;
		float L_123 = V_14;
		((GUILayoutEntry_t3214611570 *)__this)->set_maxHeight_3(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_121, (float)L_122)), (float)L_123)));
		goto IL_03d3;
	}

IL_03ca:
	{
		((GUILayoutEntry_t3214611570 *)__this)->set_stretchHeight_6(0);
	}

IL_03d3:
	{
		float L_124 = ((GUILayoutEntry_t3214611570 *)__this)->get_maxHeight_3();
		float L_125 = ((GUILayoutEntry_t3214611570 *)__this)->get_minHeight_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_126 = Mathf_Max_m3146388979(NULL /*static, unused*/, L_124, L_125, /*hidden argument*/NULL);
		((GUILayoutEntry_t3214611570 *)__this)->set_maxHeight_3(L_126);
		GUIStyle_t3956901511 * L_127 = GUILayoutEntry_get_style_m3965981147(__this, /*hidden argument*/NULL);
		NullCheck(L_127);
		float L_128 = GUIStyle_get_fixedHeight_m2868324709(L_127, /*hidden argument*/NULL);
		if ((((float)L_128) == ((float)(0.0f))))
		{
			goto IL_0422;
		}
	}
	{
		GUIStyle_t3956901511 * L_129 = GUILayoutEntry_get_style_m3965981147(__this, /*hidden argument*/NULL);
		NullCheck(L_129);
		float L_130 = GUIStyle_get_fixedHeight_m2868324709(L_129, /*hidden argument*/NULL);
		float L_131 = L_130;
		V_0 = L_131;
		((GUILayoutEntry_t3214611570 *)__this)->set_minHeight_2(L_131);
		float L_132 = V_0;
		((GUILayoutEntry_t3214611570 *)__this)->set_maxHeight_3(L_132);
		((GUILayoutEntry_t3214611570 *)__this)->set_stretchHeight_6(0);
	}

IL_0422:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::SetVertical(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void GUILayoutGroup_SetVertical_m2446642182 (GUILayoutGroup_t2157789695 * __this, float ___y0, float ___height1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUILayoutGroup_SetVertical_m2446642182_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RectOffset_t1369453676 * V_0 = NULL;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	int32_t V_6 = 0;
	bool V_7 = false;
	GUILayoutEntry_t3214611570 * V_8 = NULL;
	Enumerator_t2280962893  V_9;
	memset(&V_9, 0, sizeof(V_9));
	float V_10 = 0.0f;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	GUILayoutEntry_t3214611570 * V_13 = NULL;
	Enumerator_t2280962893  V_14;
	memset(&V_14, 0, sizeof(V_14));
	float V_15 = 0.0f;
	float V_16 = 0.0f;
	float V_17 = 0.0f;
	float V_18 = 0.0f;
	float V_19 = 0.0f;
	GUILayoutEntry_t3214611570 * V_20 = NULL;
	Enumerator_t2280962893  V_21;
	memset(&V_21, 0, sizeof(V_21));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B23_0 = 0;
	{
		float L_0 = ___y0;
		float L_1 = ___height1;
		GUILayoutEntry_SetVertical_m1089980778(__this, L_0, L_1, /*hidden argument*/NULL);
		List_1_t391719016 * L_2 = __this->get_entries_10();
		NullCheck(L_2);
		int32_t L_3 = List_1_get_Count_m1057782749(L_2, /*hidden argument*/List_1_get_Count_m1057782749_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_001e;
		}
	}
	{
		goto IL_03e4;
	}

IL_001e:
	{
		GUIStyle_t3956901511 * L_4 = GUILayoutEntry_get_style_m3965981147(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		RectOffset_t1369453676 * L_5 = GUIStyle_get_padding_m3526264743(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		bool L_6 = __this->get_resetCoords_12();
		if (!L_6)
		{
			goto IL_003c;
		}
	}
	{
		___y0 = (0.0f);
	}

IL_003c:
	{
		bool L_7 = __this->get_isVertical_11();
		if (!L_7)
		{
			goto IL_0244;
		}
	}
	{
		GUIStyle_t3956901511 * L_8 = GUILayoutEntry_get_style_m3965981147(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t3956901511_il2cpp_TypeInfo_var);
		GUIStyle_t3956901511 * L_9 = GUIStyle_get_none_m1545577352(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(GUIStyle_t3956901511 *)L_8) == ((RuntimeObject*)(GUIStyle_t3956901511 *)L_9)))
		{
			goto IL_00d0;
		}
	}
	{
		RectOffset_t1369453676 * L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = RectOffset_get_top_m2855347295(L_10, /*hidden argument*/NULL);
		V_1 = (((float)((float)L_11)));
		RectOffset_t1369453676 * L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = RectOffset_get_bottom_m890891527(L_12, /*hidden argument*/NULL);
		V_2 = (((float)((float)L_13)));
		List_1_t391719016 * L_14 = __this->get_entries_10();
		NullCheck(L_14);
		int32_t L_15 = List_1_get_Count_m1057782749(L_14, /*hidden argument*/List_1_get_Count_m1057782749_RuntimeMethod_var);
		if (!L_15)
		{
			goto IL_00c3;
		}
	}
	{
		float L_16 = V_1;
		List_1_t391719016 * L_17 = __this->get_entries_10();
		NullCheck(L_17);
		GUILayoutEntry_t3214611570 * L_18 = List_1_get_Item_m3839229424(L_17, 0, /*hidden argument*/List_1_get_Item_m3839229424_RuntimeMethod_var);
		NullCheck(L_18);
		RectOffset_t1369453676 * L_19 = VirtFuncInvoker0< RectOffset_t1369453676 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_18);
		NullCheck(L_19);
		int32_t L_20 = RectOffset_get_top_m2855347295(L_19, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_21 = Mathf_Max_m3146388979(NULL /*static, unused*/, L_16, (((float)((float)L_20))), /*hidden argument*/NULL);
		V_1 = L_21;
		float L_22 = V_2;
		List_1_t391719016 * L_23 = __this->get_entries_10();
		List_1_t391719016 * L_24 = __this->get_entries_10();
		NullCheck(L_24);
		int32_t L_25 = List_1_get_Count_m1057782749(L_24, /*hidden argument*/List_1_get_Count_m1057782749_RuntimeMethod_var);
		NullCheck(L_23);
		GUILayoutEntry_t3214611570 * L_26 = List_1_get_Item_m3839229424(L_23, ((int32_t)il2cpp_codegen_subtract((int32_t)L_25, (int32_t)1)), /*hidden argument*/List_1_get_Item_m3839229424_RuntimeMethod_var);
		NullCheck(L_26);
		RectOffset_t1369453676 * L_27 = VirtFuncInvoker0< RectOffset_t1369453676 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_26);
		NullCheck(L_27);
		int32_t L_28 = RectOffset_get_bottom_m890891527(L_27, /*hidden argument*/NULL);
		float L_29 = Mathf_Max_m3146388979(NULL /*static, unused*/, L_22, (((float)((float)L_28))), /*hidden argument*/NULL);
		V_2 = L_29;
	}

IL_00c3:
	{
		float L_30 = ___y0;
		float L_31 = V_1;
		___y0 = ((float)il2cpp_codegen_add((float)L_30, (float)L_31));
		float L_32 = ___height1;
		float L_33 = V_2;
		float L_34 = V_1;
		___height1 = ((float)il2cpp_codegen_subtract((float)L_32, (float)((float)il2cpp_codegen_add((float)L_33, (float)L_34))));
	}

IL_00d0:
	{
		float L_35 = ___height1;
		float L_36 = __this->get_spacing_13();
		List_1_t391719016 * L_37 = __this->get_entries_10();
		NullCheck(L_37);
		int32_t L_38 = List_1_get_Count_m1057782749(L_37, /*hidden argument*/List_1_get_Count_m1057782749_RuntimeMethod_var);
		V_3 = ((float)il2cpp_codegen_subtract((float)L_35, (float)((float)il2cpp_codegen_multiply((float)L_36, (float)(((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_38, (int32_t)1)))))))));
		V_4 = (0.0f);
		float L_39 = __this->get_m_ChildMinHeight_24();
		float L_40 = __this->get_m_ChildMaxHeight_25();
		if ((((float)L_39) == ((float)L_40)))
		{
			goto IL_0127;
		}
	}
	{
		float L_41 = V_3;
		float L_42 = __this->get_m_ChildMinHeight_24();
		float L_43 = __this->get_m_ChildMaxHeight_25();
		float L_44 = __this->get_m_ChildMinHeight_24();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_45 = Mathf_Clamp_m3350697880(NULL /*static, unused*/, ((float)((float)((float)il2cpp_codegen_subtract((float)L_41, (float)L_42))/(float)((float)il2cpp_codegen_subtract((float)L_43, (float)L_44)))), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_4 = L_45;
	}

IL_0127:
	{
		V_5 = (0.0f);
		float L_46 = V_3;
		float L_47 = __this->get_m_ChildMaxHeight_25();
		if ((!(((float)L_46) > ((float)L_47))))
		{
			goto IL_015a;
		}
	}
	{
		int32_t L_48 = __this->get_m_StretchableCountY_19();
		if ((((int32_t)L_48) <= ((int32_t)0)))
		{
			goto IL_0159;
		}
	}
	{
		float L_49 = V_3;
		float L_50 = __this->get_m_ChildMaxHeight_25();
		int32_t L_51 = __this->get_m_StretchableCountY_19();
		V_5 = ((float)((float)((float)il2cpp_codegen_subtract((float)L_49, (float)L_50))/(float)(((float)((float)L_51)))));
	}

IL_0159:
	{
	}

IL_015a:
	{
		V_6 = 0;
		V_7 = (bool)1;
		List_1_t391719016 * L_52 = __this->get_entries_10();
		NullCheck(L_52);
		Enumerator_t2280962893  L_53 = List_1_GetEnumerator_m1934946323(L_52, /*hidden argument*/List_1_GetEnumerator_m1934946323_RuntimeMethod_var);
		V_9 = L_53;
	}

IL_016e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_021f;
		}

IL_0173:
		{
			GUILayoutEntry_t3214611570 * L_54 = Enumerator_get_Current_m2663170093((Enumerator_t2280962893 *)(&V_9), /*hidden argument*/Enumerator_get_Current_m2663170093_RuntimeMethod_var);
			V_8 = L_54;
			GUILayoutEntry_t3214611570 * L_55 = V_8;
			NullCheck(L_55);
			float L_56 = L_55->get_minHeight_2();
			GUILayoutEntry_t3214611570 * L_57 = V_8;
			NullCheck(L_57);
			float L_58 = L_57->get_maxHeight_3();
			float L_59 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
			float L_60 = Mathf_Lerp_m1004423579(NULL /*static, unused*/, L_56, L_58, L_59, /*hidden argument*/NULL);
			V_10 = L_60;
			float L_61 = V_10;
			float L_62 = V_5;
			GUILayoutEntry_t3214611570 * L_63 = V_8;
			NullCheck(L_63);
			int32_t L_64 = L_63->get_stretchHeight_6();
			V_10 = ((float)il2cpp_codegen_add((float)L_61, (float)((float)il2cpp_codegen_multiply((float)L_62, (float)(((float)((float)L_64)))))));
			GUILayoutEntry_t3214611570 * L_65 = V_8;
			NullCheck(L_65);
			GUIStyle_t3956901511 * L_66 = GUILayoutEntry_get_style_m3965981147(L_65, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var);
			GUIStyle_t3956901511 * L_67 = GUILayoutUtility_get_spaceStyle_m3392862907(NULL /*static, unused*/, /*hidden argument*/NULL);
			if ((((RuntimeObject*)(GUIStyle_t3956901511 *)L_66) == ((RuntimeObject*)(GUIStyle_t3956901511 *)L_67)))
			{
				goto IL_01fd;
			}
		}

IL_01b5:
		{
			GUILayoutEntry_t3214611570 * L_68 = V_8;
			NullCheck(L_68);
			RectOffset_t1369453676 * L_69 = VirtFuncInvoker0< RectOffset_t1369453676 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_68);
			NullCheck(L_69);
			int32_t L_70 = RectOffset_get_top_m2855347295(L_69, /*hidden argument*/NULL);
			V_11 = L_70;
			bool L_71 = V_7;
			if (!L_71)
			{
				goto IL_01d3;
			}
		}

IL_01cb:
		{
			V_11 = 0;
			V_7 = (bool)0;
		}

IL_01d3:
		{
			int32_t L_72 = V_6;
			int32_t L_73 = V_11;
			if ((((int32_t)L_72) <= ((int32_t)L_73)))
			{
				goto IL_01e3;
			}
		}

IL_01dc:
		{
			int32_t L_74 = V_6;
			G_B23_0 = L_74;
			goto IL_01e5;
		}

IL_01e3:
		{
			int32_t L_75 = V_11;
			G_B23_0 = L_75;
		}

IL_01e5:
		{
			V_12 = G_B23_0;
			float L_76 = ___y0;
			int32_t L_77 = V_12;
			___y0 = ((float)il2cpp_codegen_add((float)L_76, (float)(((float)((float)L_77)))));
			GUILayoutEntry_t3214611570 * L_78 = V_8;
			NullCheck(L_78);
			RectOffset_t1369453676 * L_79 = VirtFuncInvoker0< RectOffset_t1369453676 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_78);
			NullCheck(L_79);
			int32_t L_80 = RectOffset_get_bottom_m890891527(L_79, /*hidden argument*/NULL);
			V_6 = L_80;
		}

IL_01fd:
		{
			GUILayoutEntry_t3214611570 * L_81 = V_8;
			float L_82 = ___y0;
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
			float L_83 = bankers_roundf(L_82);
			float L_84 = V_10;
			float L_85 = bankers_roundf(L_84);
			NullCheck(L_81);
			VirtActionInvoker2< float, float >::Invoke(8 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_81, L_83, L_85);
			float L_86 = ___y0;
			float L_87 = V_10;
			float L_88 = __this->get_spacing_13();
			___y0 = ((float)il2cpp_codegen_add((float)L_86, (float)((float)il2cpp_codegen_add((float)L_87, (float)L_88))));
		}

IL_021f:
		{
			bool L_89 = Enumerator_MoveNext_m2324433341((Enumerator_t2280962893 *)(&V_9), /*hidden argument*/Enumerator_MoveNext_m2324433341_RuntimeMethod_var);
			if (L_89)
			{
				goto IL_0173;
			}
		}

IL_022b:
		{
			IL2CPP_LEAVE(0x23E, FINALLY_0230);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0230;
	}

FINALLY_0230:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3494652212((Enumerator_t2280962893 *)(&V_9), /*hidden argument*/Enumerator_Dispose_m3494652212_RuntimeMethod_var);
		IL2CPP_END_FINALLY(560)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(560)
	{
		IL2CPP_JUMP_TBL(0x23E, IL_023e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_023e:
	{
		goto IL_03e4;
	}

IL_0244:
	{
		GUIStyle_t3956901511 * L_90 = GUILayoutEntry_get_style_m3965981147(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t3956901511_il2cpp_TypeInfo_var);
		GUIStyle_t3956901511 * L_91 = GUIStyle_get_none_m1545577352(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(GUIStyle_t3956901511 *)L_90) == ((RuntimeObject*)(GUIStyle_t3956901511 *)L_91)))
		{
			goto IL_0312;
		}
	}
	{
		List_1_t391719016 * L_92 = __this->get_entries_10();
		NullCheck(L_92);
		Enumerator_t2280962893  L_93 = List_1_GetEnumerator_m1934946323(L_92, /*hidden argument*/List_1_GetEnumerator_m1934946323_RuntimeMethod_var);
		V_14 = L_93;
	}

IL_0264:
	try
	{ // begin try (depth: 1)
		{
			goto IL_02ed;
		}

IL_0269:
		{
			GUILayoutEntry_t3214611570 * L_94 = Enumerator_get_Current_m2663170093((Enumerator_t2280962893 *)(&V_14), /*hidden argument*/Enumerator_get_Current_m2663170093_RuntimeMethod_var);
			V_13 = L_94;
			GUILayoutEntry_t3214611570 * L_95 = V_13;
			NullCheck(L_95);
			RectOffset_t1369453676 * L_96 = VirtFuncInvoker0< RectOffset_t1369453676 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_95);
			NullCheck(L_96);
			int32_t L_97 = RectOffset_get_top_m2855347295(L_96, /*hidden argument*/NULL);
			RectOffset_t1369453676 * L_98 = V_0;
			NullCheck(L_98);
			int32_t L_99 = RectOffset_get_top_m2855347295(L_98, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
			int32_t L_100 = Mathf_Max_m3673002171(NULL /*static, unused*/, L_97, L_99, /*hidden argument*/NULL);
			V_15 = (((float)((float)L_100)));
			float L_101 = ___y0;
			float L_102 = V_15;
			V_16 = ((float)il2cpp_codegen_add((float)L_101, (float)L_102));
			float L_103 = ___height1;
			GUILayoutEntry_t3214611570 * L_104 = V_13;
			NullCheck(L_104);
			RectOffset_t1369453676 * L_105 = VirtFuncInvoker0< RectOffset_t1369453676 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_104);
			NullCheck(L_105);
			int32_t L_106 = RectOffset_get_bottom_m890891527(L_105, /*hidden argument*/NULL);
			RectOffset_t1369453676 * L_107 = V_0;
			NullCheck(L_107);
			int32_t L_108 = RectOffset_get_bottom_m890891527(L_107, /*hidden argument*/NULL);
			int32_t L_109 = Mathf_Max_m3673002171(NULL /*static, unused*/, L_106, L_108, /*hidden argument*/NULL);
			float L_110 = V_15;
			V_17 = ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)L_103, (float)(((float)((float)L_109))))), (float)L_110));
			GUILayoutEntry_t3214611570 * L_111 = V_13;
			NullCheck(L_111);
			int32_t L_112 = L_111->get_stretchHeight_6();
			if (!L_112)
			{
				goto IL_02ce;
			}
		}

IL_02be:
		{
			GUILayoutEntry_t3214611570 * L_113 = V_13;
			float L_114 = V_16;
			float L_115 = V_17;
			NullCheck(L_113);
			VirtActionInvoker2< float, float >::Invoke(8 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_113, L_114, L_115);
			goto IL_02ec;
		}

IL_02ce:
		{
			GUILayoutEntry_t3214611570 * L_116 = V_13;
			float L_117 = V_16;
			float L_118 = V_17;
			GUILayoutEntry_t3214611570 * L_119 = V_13;
			NullCheck(L_119);
			float L_120 = L_119->get_minHeight_2();
			GUILayoutEntry_t3214611570 * L_121 = V_13;
			NullCheck(L_121);
			float L_122 = L_121->get_maxHeight_3();
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
			float L_123 = Mathf_Clamp_m3350697880(NULL /*static, unused*/, L_118, L_120, L_122, /*hidden argument*/NULL);
			NullCheck(L_116);
			VirtActionInvoker2< float, float >::Invoke(8 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_116, L_117, L_123);
		}

IL_02ec:
		{
		}

IL_02ed:
		{
			bool L_124 = Enumerator_MoveNext_m2324433341((Enumerator_t2280962893 *)(&V_14), /*hidden argument*/Enumerator_MoveNext_m2324433341_RuntimeMethod_var);
			if (L_124)
			{
				goto IL_0269;
			}
		}

IL_02f9:
		{
			IL2CPP_LEAVE(0x30C, FINALLY_02fe);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_02fe;
	}

FINALLY_02fe:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3494652212((Enumerator_t2280962893 *)(&V_14), /*hidden argument*/Enumerator_Dispose_m3494652212_RuntimeMethod_var);
		IL2CPP_END_FINALLY(766)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(766)
	{
		IL2CPP_JUMP_TBL(0x30C, IL_030c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_030c:
	{
		goto IL_03e3;
	}

IL_0312:
	{
		float L_125 = ___y0;
		RectOffset_t1369453676 * L_126 = VirtFuncInvoker0< RectOffset_t1369453676 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, __this);
		NullCheck(L_126);
		int32_t L_127 = RectOffset_get_top_m2855347295(L_126, /*hidden argument*/NULL);
		V_18 = ((float)il2cpp_codegen_subtract((float)L_125, (float)(((float)((float)L_127)))));
		float L_128 = ___height1;
		RectOffset_t1369453676 * L_129 = VirtFuncInvoker0< RectOffset_t1369453676 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, __this);
		NullCheck(L_129);
		int32_t L_130 = RectOffset_get_vertical_m2029961580(L_129, /*hidden argument*/NULL);
		V_19 = ((float)il2cpp_codegen_add((float)L_128, (float)(((float)((float)L_130)))));
		List_1_t391719016 * L_131 = __this->get_entries_10();
		NullCheck(L_131);
		Enumerator_t2280962893  L_132 = List_1_GetEnumerator_m1934946323(L_131, /*hidden argument*/List_1_GetEnumerator_m1934946323_RuntimeMethod_var);
		V_21 = L_132;
	}

IL_0341:
	try
	{ // begin try (depth: 1)
		{
			goto IL_03c3;
		}

IL_0346:
		{
			GUILayoutEntry_t3214611570 * L_133 = Enumerator_get_Current_m2663170093((Enumerator_t2280962893 *)(&V_21), /*hidden argument*/Enumerator_get_Current_m2663170093_RuntimeMethod_var);
			V_20 = L_133;
			GUILayoutEntry_t3214611570 * L_134 = V_20;
			NullCheck(L_134);
			int32_t L_135 = L_134->get_stretchHeight_6();
			if (!L_135)
			{
				goto IL_0388;
			}
		}

IL_035c:
		{
			GUILayoutEntry_t3214611570 * L_136 = V_20;
			float L_137 = V_18;
			GUILayoutEntry_t3214611570 * L_138 = V_20;
			NullCheck(L_138);
			RectOffset_t1369453676 * L_139 = VirtFuncInvoker0< RectOffset_t1369453676 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_138);
			NullCheck(L_139);
			int32_t L_140 = RectOffset_get_top_m2855347295(L_139, /*hidden argument*/NULL);
			float L_141 = V_19;
			GUILayoutEntry_t3214611570 * L_142 = V_20;
			NullCheck(L_142);
			RectOffset_t1369453676 * L_143 = VirtFuncInvoker0< RectOffset_t1369453676 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_142);
			NullCheck(L_143);
			int32_t L_144 = RectOffset_get_vertical_m2029961580(L_143, /*hidden argument*/NULL);
			NullCheck(L_136);
			VirtActionInvoker2< float, float >::Invoke(8 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_136, ((float)il2cpp_codegen_add((float)L_137, (float)(((float)((float)L_140))))), ((float)il2cpp_codegen_subtract((float)L_141, (float)(((float)((float)L_144))))));
			goto IL_03c2;
		}

IL_0388:
		{
			GUILayoutEntry_t3214611570 * L_145 = V_20;
			float L_146 = V_18;
			GUILayoutEntry_t3214611570 * L_147 = V_20;
			NullCheck(L_147);
			RectOffset_t1369453676 * L_148 = VirtFuncInvoker0< RectOffset_t1369453676 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_147);
			NullCheck(L_148);
			int32_t L_149 = RectOffset_get_top_m2855347295(L_148, /*hidden argument*/NULL);
			float L_150 = V_19;
			GUILayoutEntry_t3214611570 * L_151 = V_20;
			NullCheck(L_151);
			RectOffset_t1369453676 * L_152 = VirtFuncInvoker0< RectOffset_t1369453676 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_151);
			NullCheck(L_152);
			int32_t L_153 = RectOffset_get_vertical_m2029961580(L_152, /*hidden argument*/NULL);
			GUILayoutEntry_t3214611570 * L_154 = V_20;
			NullCheck(L_154);
			float L_155 = L_154->get_minHeight_2();
			GUILayoutEntry_t3214611570 * L_156 = V_20;
			NullCheck(L_156);
			float L_157 = L_156->get_maxHeight_3();
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
			float L_158 = Mathf_Clamp_m3350697880(NULL /*static, unused*/, ((float)il2cpp_codegen_subtract((float)L_150, (float)(((float)((float)L_153))))), L_155, L_157, /*hidden argument*/NULL);
			NullCheck(L_145);
			VirtActionInvoker2< float, float >::Invoke(8 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_145, ((float)il2cpp_codegen_add((float)L_146, (float)(((float)((float)L_149))))), L_158);
		}

IL_03c2:
		{
		}

IL_03c3:
		{
			bool L_159 = Enumerator_MoveNext_m2324433341((Enumerator_t2280962893 *)(&V_21), /*hidden argument*/Enumerator_MoveNext_m2324433341_RuntimeMethod_var);
			if (L_159)
			{
				goto IL_0346;
			}
		}

IL_03cf:
		{
			IL2CPP_LEAVE(0x3E2, FINALLY_03d4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_03d4;
	}

FINALLY_03d4:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3494652212((Enumerator_t2280962893 *)(&V_21), /*hidden argument*/Enumerator_Dispose_m3494652212_RuntimeMethod_var);
		IL2CPP_END_FINALLY(980)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(980)
	{
		IL2CPP_JUMP_TBL(0x3E2, IL_03e2)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_03e2:
	{
	}

IL_03e3:
	{
	}

IL_03e4:
	{
		return;
	}
}
// System.String UnityEngine.GUILayoutGroup::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* GUILayoutGroup_ToString_m3162736776 (GUILayoutGroup_t2157789695 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUILayoutGroup_ToString_m3162736776_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	GUILayoutEntry_t3214611570 * V_4 = NULL;
	Enumerator_t2280962893  V_5;
	memset(&V_5, 0, sizeof(V_5));
	String_t* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = _stringLiteral757602046;
		V_1 = _stringLiteral757602046;
		V_2 = 0;
		goto IL_0024;
	}

IL_0014:
	{
		String_t* L_0 = V_1;
		String_t* L_1 = String_Concat_m3937257545(NULL /*static, unused*/, L_0, _stringLiteral3452614528, /*hidden argument*/NULL);
		V_1 = L_1;
		int32_t L_2 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
	}

IL_0024:
	{
		int32_t L_3 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutEntry_t3214611570_il2cpp_TypeInfo_var);
		int32_t L_4 = ((GUILayoutEntry_t3214611570_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutEntry_t3214611570_il2cpp_TypeInfo_var))->get_indent_9();
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_0014;
		}
	}
	{
		String_t* L_5 = V_0;
		V_3 = L_5;
		ObjectU5BU5D_t2843939325* L_6 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t2843939325* L_7 = L_6;
		String_t* L_8 = V_3;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
		ObjectU5BU5D_t2843939325* L_9 = L_7;
		String_t* L_10 = GUILayoutEntry_ToString_m3366663569(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_10);
		ObjectU5BU5D_t2843939325* L_11 = L_9;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral2110742732);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral2110742732);
		ObjectU5BU5D_t2843939325* L_12 = L_11;
		float L_13 = __this->get_m_ChildMinHeight_24();
		float L_14 = L_13;
		RuntimeObject * L_15 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_15);
		ObjectU5BU5D_t2843939325* L_16 = L_12;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral3173274056);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral3173274056);
		String_t* L_17 = String_Concat_m2971454694(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		V_0 = L_17;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutEntry_t3214611570_il2cpp_TypeInfo_var);
		int32_t L_18 = ((GUILayoutEntry_t3214611570_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutEntry_t3214611570_il2cpp_TypeInfo_var))->get_indent_9();
		((GUILayoutEntry_t3214611570_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutEntry_t3214611570_il2cpp_TypeInfo_var))->set_indent_9(((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)4)));
		List_1_t391719016 * L_19 = __this->get_entries_10();
		NullCheck(L_19);
		Enumerator_t2280962893  L_20 = List_1_GetEnumerator_m1934946323(L_19, /*hidden argument*/List_1_GetEnumerator_m1934946323_RuntimeMethod_var);
		V_5 = L_20;
	}

IL_0082:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00a5;
		}

IL_0087:
		{
			GUILayoutEntry_t3214611570 * L_21 = Enumerator_get_Current_m2663170093((Enumerator_t2280962893 *)(&V_5), /*hidden argument*/Enumerator_get_Current_m2663170093_RuntimeMethod_var);
			V_4 = L_21;
			String_t* L_22 = V_0;
			GUILayoutEntry_t3214611570 * L_23 = V_4;
			NullCheck(L_23);
			String_t* L_24 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_23);
			String_t* L_25 = String_Concat_m3755062657(NULL /*static, unused*/, L_22, L_24, _stringLiteral3452614566, /*hidden argument*/NULL);
			V_0 = L_25;
		}

IL_00a5:
		{
			bool L_26 = Enumerator_MoveNext_m2324433341((Enumerator_t2280962893 *)(&V_5), /*hidden argument*/Enumerator_MoveNext_m2324433341_RuntimeMethod_var);
			if (L_26)
			{
				goto IL_0087;
			}
		}

IL_00b1:
		{
			IL2CPP_LEAVE(0xC4, FINALLY_00b6);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00b6;
	}

FINALLY_00b6:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3494652212((Enumerator_t2280962893 *)(&V_5), /*hidden argument*/Enumerator_Dispose_m3494652212_RuntimeMethod_var);
		IL2CPP_END_FINALLY(182)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(182)
	{
		IL2CPP_JUMP_TBL(0xC4, IL_00c4)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00c4:
	{
		String_t* L_27 = V_0;
		String_t* L_28 = V_1;
		String_t* L_29 = String_Concat_m3755062657(NULL /*static, unused*/, L_27, L_28, _stringLiteral3452614611, /*hidden argument*/NULL);
		V_0 = L_29;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutEntry_t3214611570_il2cpp_TypeInfo_var);
		int32_t L_30 = ((GUILayoutEntry_t3214611570_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutEntry_t3214611570_il2cpp_TypeInfo_var))->get_indent_9();
		((GUILayoutEntry_t3214611570_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutEntry_t3214611570_il2cpp_TypeInfo_var))->set_indent_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)4)));
		String_t* L_31 = V_0;
		V_6 = L_31;
		goto IL_00e5;
	}

IL_00e5:
	{
		String_t* L_32 = V_6;
		return L_32;
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
// System.Void UnityEngine.GUILayoutOption::.ctor(UnityEngine.GUILayoutOption/Type,System.Object)
extern "C" IL2CPP_METHOD_ATTR void GUILayoutOption__ctor_m2091649807 (GUILayoutOption_t811797299 * __this, int32_t ___type0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___type0;
		__this->set_type_0(L_0);
		RuntimeObject * L_1 = ___value1;
		__this->set_value_1(L_1);
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
// UnityEngine.Rect UnityEngine.GUILayoutUtility::Internal_GetWindowRect(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Rect_t2360479859  GUILayoutUtility_Internal_GetWindowRect_m2131267775 (RuntimeObject * __this /* static, unused */, int32_t ___windowID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUILayoutUtility_Internal_GetWindowRect_m2131267775_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Rect_t2360479859  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___windowID0;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var);
		GUILayoutUtility_Internal_GetWindowRect_Injected_m1537976334(NULL /*static, unused*/, L_0, (Rect_t2360479859 *)(&V_0), /*hidden argument*/NULL);
		Rect_t2360479859  L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUILayoutUtility::Internal_MoveWindow(System.Int32,UnityEngine.Rect)
extern "C" IL2CPP_METHOD_ATTR void GUILayoutUtility_Internal_MoveWindow_m3463958180 (RuntimeObject * __this /* static, unused */, int32_t ___windowID0, Rect_t2360479859  ___r1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUILayoutUtility_Internal_MoveWindow_m3463958180_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___windowID0;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var);
		GUILayoutUtility_Internal_MoveWindow_Injected_m1941891499(NULL /*static, unused*/, L_0, (Rect_t2360479859 *)(&___r1), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUILayoutUtility/LayoutCache UnityEngine.GUILayoutUtility::SelectIDList(System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR LayoutCache_t78309876 * GUILayoutUtility_SelectIDList_m294753167 (RuntimeObject * __this /* static, unused */, int32_t ___instanceID0, bool ___isWindow1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUILayoutUtility_SelectIDList_m294753167_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t3261990503 * V_0 = NULL;
	LayoutCache_t78309876 * V_1 = NULL;
	LayoutCache_t78309876 * V_2 = NULL;
	Dictionary_2_t3261990503 * G_B3_0 = NULL;
	{
		bool L_0 = ___isWindow1;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var);
		Dictionary_2_t3261990503 * L_1 = ((GUILayoutUtility_t66395690_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var))->get_s_StoredWindows_1();
		G_B3_0 = L_1;
		goto IL_0016;
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var);
		Dictionary_2_t3261990503 * L_2 = ((GUILayoutUtility_t66395690_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var))->get_s_StoredLayouts_0();
		G_B3_0 = L_2;
	}

IL_0016:
	{
		V_0 = G_B3_0;
		Dictionary_2_t3261990503 * L_3 = V_0;
		int32_t L_4 = ___instanceID0;
		NullCheck(L_3);
		bool L_5 = Dictionary_2_TryGetValue_m4148288222(L_3, L_4, (LayoutCache_t78309876 **)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_m4148288222_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_003a;
		}
	}
	{
		LayoutCache_t78309876 * L_6 = (LayoutCache_t78309876 *)il2cpp_codegen_object_new(LayoutCache_t78309876_il2cpp_TypeInfo_var);
		LayoutCache__ctor_m3885940174(L_6, /*hidden argument*/NULL);
		V_1 = L_6;
		Dictionary_2_t3261990503 * L_7 = V_0;
		int32_t L_8 = ___instanceID0;
		LayoutCache_t78309876 * L_9 = V_1;
		NullCheck(L_7);
		Dictionary_2_set_Item_m2818144(L_7, L_8, L_9, /*hidden argument*/Dictionary_2_set_Item_m2818144_RuntimeMethod_var);
		goto IL_003c;
	}

IL_003a:
	{
	}

IL_003c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var);
		LayoutCache_t78309876 * L_10 = ((GUILayoutUtility_t66395690_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var))->get_current_2();
		LayoutCache_t78309876 * L_11 = V_1;
		NullCheck(L_11);
		GUILayoutGroup_t2157789695 * L_12 = L_11->get_topLevel_0();
		NullCheck(L_10);
		L_10->set_topLevel_0(L_12);
		LayoutCache_t78309876 * L_13 = ((GUILayoutUtility_t66395690_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var))->get_current_2();
		LayoutCache_t78309876 * L_14 = V_1;
		NullCheck(L_14);
		GenericStack_t1310059385 * L_15 = L_14->get_layoutGroups_1();
		NullCheck(L_13);
		L_13->set_layoutGroups_1(L_15);
		LayoutCache_t78309876 * L_16 = ((GUILayoutUtility_t66395690_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var))->get_current_2();
		LayoutCache_t78309876 * L_17 = V_1;
		NullCheck(L_17);
		GUILayoutGroup_t2157789695 * L_18 = L_17->get_windows_2();
		NullCheck(L_16);
		L_16->set_windows_2(L_18);
		LayoutCache_t78309876 * L_19 = V_1;
		V_2 = L_19;
		goto IL_0073;
	}

IL_0073:
	{
		LayoutCache_t78309876 * L_20 = V_2;
		return L_20;
	}
}
// System.Void UnityEngine.GUILayoutUtility::Begin(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void GUILayoutUtility_Begin_m1358735224 (RuntimeObject * __this /* static, unused */, int32_t ___instanceID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUILayoutUtility_Begin_m1358735224_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	LayoutCache_t78309876 * V_0 = NULL;
	GUILayoutGroup_t2157789695 * V_1 = NULL;
	{
		int32_t L_0 = ___instanceID0;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var);
		LayoutCache_t78309876 * L_1 = GUILayoutUtility_SelectIDList_m294753167(NULL /*static, unused*/, L_0, (bool)0, /*hidden argument*/NULL);
		V_0 = L_1;
		Event_t2956885303 * L_2 = Event_get_current_m2393892120(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = Event_get_type_m1370041809(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)8))))
		{
			goto IL_0078;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var);
		LayoutCache_t78309876 * L_4 = ((GUILayoutUtility_t66395690_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var))->get_current_2();
		LayoutCache_t78309876 * L_5 = V_0;
		GUILayoutGroup_t2157789695 * L_6 = (GUILayoutGroup_t2157789695 *)il2cpp_codegen_object_new(GUILayoutGroup_t2157789695_il2cpp_TypeInfo_var);
		GUILayoutGroup__ctor_m3245996524(L_6, /*hidden argument*/NULL);
		GUILayoutGroup_t2157789695 * L_7 = L_6;
		V_1 = L_7;
		NullCheck(L_5);
		L_5->set_topLevel_0(L_7);
		GUILayoutGroup_t2157789695 * L_8 = V_1;
		NullCheck(L_4);
		L_4->set_topLevel_0(L_8);
		LayoutCache_t78309876 * L_9 = ((GUILayoutUtility_t66395690_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_9);
		GenericStack_t1310059385 * L_10 = L_9->get_layoutGroups_1();
		NullCheck(L_10);
		Stack_1_Clear_m2415304221(L_10, /*hidden argument*/Stack_1_Clear_m2415304221_RuntimeMethod_var);
		LayoutCache_t78309876 * L_11 = ((GUILayoutUtility_t66395690_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_11);
		GenericStack_t1310059385 * L_12 = L_11->get_layoutGroups_1();
		LayoutCache_t78309876 * L_13 = ((GUILayoutUtility_t66395690_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_13);
		GUILayoutGroup_t2157789695 * L_14 = L_13->get_topLevel_0();
		NullCheck(L_12);
		Stack_1_Push_m1669856732(L_12, L_14, /*hidden argument*/Stack_1_Push_m1669856732_RuntimeMethod_var);
		LayoutCache_t78309876 * L_15 = ((GUILayoutUtility_t66395690_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var))->get_current_2();
		LayoutCache_t78309876 * L_16 = V_0;
		GUILayoutGroup_t2157789695 * L_17 = (GUILayoutGroup_t2157789695 *)il2cpp_codegen_object_new(GUILayoutGroup_t2157789695_il2cpp_TypeInfo_var);
		GUILayoutGroup__ctor_m3245996524(L_17, /*hidden argument*/NULL);
		GUILayoutGroup_t2157789695 * L_18 = L_17;
		V_1 = L_18;
		NullCheck(L_16);
		L_16->set_windows_2(L_18);
		GUILayoutGroup_t2157789695 * L_19 = V_1;
		NullCheck(L_15);
		L_15->set_windows_2(L_19);
		goto IL_00aa;
	}

IL_0078:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var);
		LayoutCache_t78309876 * L_20 = ((GUILayoutUtility_t66395690_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var))->get_current_2();
		LayoutCache_t78309876 * L_21 = V_0;
		NullCheck(L_21);
		GUILayoutGroup_t2157789695 * L_22 = L_21->get_topLevel_0();
		NullCheck(L_20);
		L_20->set_topLevel_0(L_22);
		LayoutCache_t78309876 * L_23 = ((GUILayoutUtility_t66395690_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var))->get_current_2();
		LayoutCache_t78309876 * L_24 = V_0;
		NullCheck(L_24);
		GenericStack_t1310059385 * L_25 = L_24->get_layoutGroups_1();
		NullCheck(L_23);
		L_23->set_layoutGroups_1(L_25);
		LayoutCache_t78309876 * L_26 = ((GUILayoutUtility_t66395690_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var))->get_current_2();
		LayoutCache_t78309876 * L_27 = V_0;
		NullCheck(L_27);
		GUILayoutGroup_t2157789695 * L_28 = L_27->get_windows_2();
		NullCheck(L_26);
		L_26->set_windows_2(L_28);
	}

IL_00aa:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::BeginWindow(System.Int32,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" IL2CPP_METHOD_ATTR void GUILayoutUtility_BeginWindow_m2240221150 (RuntimeObject * __this /* static, unused */, int32_t ___windowID0, GUIStyle_t3956901511 * ___style1, GUILayoutOptionU5BU5D_t2510215842* ___options2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUILayoutUtility_BeginWindow_m2240221150_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	LayoutCache_t78309876 * V_0 = NULL;
	GUILayoutGroup_t2157789695 * V_1 = NULL;
	{
		int32_t L_0 = ___windowID0;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var);
		LayoutCache_t78309876 * L_1 = GUILayoutUtility_SelectIDList_m294753167(NULL /*static, unused*/, L_0, (bool)1, /*hidden argument*/NULL);
		V_0 = L_1;
		Event_t2956885303 * L_2 = Event_get_current_m2393892120(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = Event_get_type_m1370041809(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)8))))
		{
			goto IL_00ae;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var);
		LayoutCache_t78309876 * L_4 = ((GUILayoutUtility_t66395690_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var))->get_current_2();
		LayoutCache_t78309876 * L_5 = V_0;
		GUILayoutGroup_t2157789695 * L_6 = (GUILayoutGroup_t2157789695 *)il2cpp_codegen_object_new(GUILayoutGroup_t2157789695_il2cpp_TypeInfo_var);
		GUILayoutGroup__ctor_m3245996524(L_6, /*hidden argument*/NULL);
		GUILayoutGroup_t2157789695 * L_7 = L_6;
		V_1 = L_7;
		NullCheck(L_5);
		L_5->set_topLevel_0(L_7);
		GUILayoutGroup_t2157789695 * L_8 = V_1;
		NullCheck(L_4);
		L_4->set_topLevel_0(L_8);
		LayoutCache_t78309876 * L_9 = ((GUILayoutUtility_t66395690_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_9);
		GUILayoutGroup_t2157789695 * L_10 = L_9->get_topLevel_0();
		GUIStyle_t3956901511 * L_11 = ___style1;
		NullCheck(L_10);
		GUILayoutEntry_set_style_m1702960184(L_10, L_11, /*hidden argument*/NULL);
		LayoutCache_t78309876 * L_12 = ((GUILayoutUtility_t66395690_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_12);
		GUILayoutGroup_t2157789695 * L_13 = L_12->get_topLevel_0();
		int32_t L_14 = ___windowID0;
		NullCheck(L_13);
		L_13->set_windowID_16(L_14);
		GUILayoutOptionU5BU5D_t2510215842* L_15 = ___options2;
		if (!L_15)
		{
			goto IL_0068;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var);
		LayoutCache_t78309876 * L_16 = ((GUILayoutUtility_t66395690_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_16);
		GUILayoutGroup_t2157789695 * L_17 = L_16->get_topLevel_0();
		GUILayoutOptionU5BU5D_t2510215842* L_18 = ___options2;
		NullCheck(L_17);
		VirtActionInvoker1< GUILayoutOptionU5BU5D_t2510215842* >::Invoke(10 /* System.Void UnityEngine.GUILayoutEntry::ApplyOptions(UnityEngine.GUILayoutOption[]) */, L_17, L_18);
	}

IL_0068:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var);
		LayoutCache_t78309876 * L_19 = ((GUILayoutUtility_t66395690_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_19);
		GenericStack_t1310059385 * L_20 = L_19->get_layoutGroups_1();
		NullCheck(L_20);
		Stack_1_Clear_m2415304221(L_20, /*hidden argument*/Stack_1_Clear_m2415304221_RuntimeMethod_var);
		LayoutCache_t78309876 * L_21 = ((GUILayoutUtility_t66395690_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_21);
		GenericStack_t1310059385 * L_22 = L_21->get_layoutGroups_1();
		LayoutCache_t78309876 * L_23 = ((GUILayoutUtility_t66395690_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_23);
		GUILayoutGroup_t2157789695 * L_24 = L_23->get_topLevel_0();
		NullCheck(L_22);
		Stack_1_Push_m1669856732(L_22, L_24, /*hidden argument*/Stack_1_Push_m1669856732_RuntimeMethod_var);
		LayoutCache_t78309876 * L_25 = ((GUILayoutUtility_t66395690_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var))->get_current_2();
		LayoutCache_t78309876 * L_26 = V_0;
		GUILayoutGroup_t2157789695 * L_27 = (GUILayoutGroup_t2157789695 *)il2cpp_codegen_object_new(GUILayoutGroup_t2157789695_il2cpp_TypeInfo_var);
		GUILayoutGroup__ctor_m3245996524(L_27, /*hidden argument*/NULL);
		GUILayoutGroup_t2157789695 * L_28 = L_27;
		V_1 = L_28;
		NullCheck(L_26);
		L_26->set_windows_2(L_28);
		GUILayoutGroup_t2157789695 * L_29 = V_1;
		NullCheck(L_25);
		L_25->set_windows_2(L_29);
		goto IL_00e0;
	}

IL_00ae:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var);
		LayoutCache_t78309876 * L_30 = ((GUILayoutUtility_t66395690_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var))->get_current_2();
		LayoutCache_t78309876 * L_31 = V_0;
		NullCheck(L_31);
		GUILayoutGroup_t2157789695 * L_32 = L_31->get_topLevel_0();
		NullCheck(L_30);
		L_30->set_topLevel_0(L_32);
		LayoutCache_t78309876 * L_33 = ((GUILayoutUtility_t66395690_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var))->get_current_2();
		LayoutCache_t78309876 * L_34 = V_0;
		NullCheck(L_34);
		GenericStack_t1310059385 * L_35 = L_34->get_layoutGroups_1();
		NullCheck(L_33);
		L_33->set_layoutGroups_1(L_35);
		LayoutCache_t78309876 * L_36 = ((GUILayoutUtility_t66395690_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var))->get_current_2();
		LayoutCache_t78309876 * L_37 = V_0;
		NullCheck(L_37);
		GUILayoutGroup_t2157789695 * L_38 = L_37->get_windows_2();
		NullCheck(L_36);
		L_36->set_windows_2(L_38);
	}

IL_00e0:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::Layout()
extern "C" IL2CPP_METHOD_ATTR void GUILayoutUtility_Layout_m1159951704 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUILayoutUtility_Layout_m1159951704_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var);
		LayoutCache_t78309876 * L_0 = ((GUILayoutUtility_t66395690_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_0);
		GUILayoutGroup_t2157789695 * L_1 = L_0->get_topLevel_0();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_windowID_16();
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_00b2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var);
		LayoutCache_t78309876 * L_3 = ((GUILayoutUtility_t66395690_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_3);
		GUILayoutGroup_t2157789695 * L_4 = L_3->get_topLevel_0();
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(5 /* System.Void UnityEngine.GUILayoutEntry::CalcWidth() */, L_4);
		LayoutCache_t78309876 * L_5 = ((GUILayoutUtility_t66395690_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_5);
		GUILayoutGroup_t2157789695 * L_6 = L_5->get_topLevel_0();
		int32_t L_7 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_8 = GUIUtility_get_pixelsPerPoint_m2369948084(NULL /*static, unused*/, /*hidden argument*/NULL);
		LayoutCache_t78309876 * L_9 = ((GUILayoutUtility_t66395690_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_9);
		GUILayoutGroup_t2157789695 * L_10 = L_9->get_topLevel_0();
		NullCheck(L_10);
		float L_11 = ((GUILayoutEntry_t3214611570 *)L_10)->get_maxWidth_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_12 = Mathf_Min_m1073399594(NULL /*static, unused*/, ((float)((float)(((float)((float)L_7)))/(float)L_8)), L_11, /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtActionInvoker2< float, float >::Invoke(7 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_6, (0.0f), L_12);
		LayoutCache_t78309876 * L_13 = ((GUILayoutUtility_t66395690_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_13);
		GUILayoutGroup_t2157789695 * L_14 = L_13->get_topLevel_0();
		NullCheck(L_14);
		VirtActionInvoker0::Invoke(6 /* System.Void UnityEngine.GUILayoutEntry::CalcHeight() */, L_14);
		LayoutCache_t78309876 * L_15 = ((GUILayoutUtility_t66395690_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_15);
		GUILayoutGroup_t2157789695 * L_16 = L_15->get_topLevel_0();
		int32_t L_17 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_18 = GUIUtility_get_pixelsPerPoint_m2369948084(NULL /*static, unused*/, /*hidden argument*/NULL);
		LayoutCache_t78309876 * L_19 = ((GUILayoutUtility_t66395690_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_19);
		GUILayoutGroup_t2157789695 * L_20 = L_19->get_topLevel_0();
		NullCheck(L_20);
		float L_21 = ((GUILayoutEntry_t3214611570 *)L_20)->get_maxHeight_3();
		float L_22 = Mathf_Min_m1073399594(NULL /*static, unused*/, ((float)((float)(((float)((float)L_17)))/(float)L_18)), L_21, /*hidden argument*/NULL);
		NullCheck(L_16);
		VirtActionInvoker2< float, float >::Invoke(8 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_16, (0.0f), L_22);
		LayoutCache_t78309876 * L_23 = ((GUILayoutUtility_t66395690_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_23);
		GUILayoutGroup_t2157789695 * L_24 = L_23->get_windows_2();
		GUILayoutUtility_LayoutFreeGroup_m2955697397(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		goto IL_00d2;
	}

IL_00b2:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var);
		LayoutCache_t78309876 * L_25 = ((GUILayoutUtility_t66395690_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_25);
		GUILayoutGroup_t2157789695 * L_26 = L_25->get_topLevel_0();
		GUILayoutUtility_LayoutSingleGroup_m700786689(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		LayoutCache_t78309876 * L_27 = ((GUILayoutUtility_t66395690_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_27);
		GUILayoutGroup_t2157789695 * L_28 = L_27->get_windows_2();
		GUILayoutUtility_LayoutFreeGroup_m2955697397(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
	}

IL_00d2:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::LayoutFromEditorWindow()
extern "C" IL2CPP_METHOD_ATTR void GUILayoutUtility_LayoutFromEditorWindow_m2914699782 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUILayoutUtility_LayoutFromEditorWindow_m2914699782_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var);
		LayoutCache_t78309876 * L_0 = ((GUILayoutUtility_t66395690_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_0);
		GUILayoutGroup_t2157789695 * L_1 = L_0->get_topLevel_0();
		if (!L_1)
		{
			goto IL_0084;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var);
		LayoutCache_t78309876 * L_2 = ((GUILayoutUtility_t66395690_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_2);
		GUILayoutGroup_t2157789695 * L_3 = L_2->get_topLevel_0();
		NullCheck(L_3);
		VirtActionInvoker0::Invoke(5 /* System.Void UnityEngine.GUILayoutEntry::CalcWidth() */, L_3);
		LayoutCache_t78309876 * L_4 = ((GUILayoutUtility_t66395690_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_4);
		GUILayoutGroup_t2157789695 * L_5 = L_4->get_topLevel_0();
		int32_t L_6 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_7 = GUIUtility_get_pixelsPerPoint_m2369948084(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker2< float, float >::Invoke(7 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_5, (0.0f), ((float)((float)(((float)((float)L_6)))/(float)L_7)));
		LayoutCache_t78309876 * L_8 = ((GUILayoutUtility_t66395690_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_8);
		GUILayoutGroup_t2157789695 * L_9 = L_8->get_topLevel_0();
		NullCheck(L_9);
		VirtActionInvoker0::Invoke(6 /* System.Void UnityEngine.GUILayoutEntry::CalcHeight() */, L_9);
		LayoutCache_t78309876 * L_10 = ((GUILayoutUtility_t66395690_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_10);
		GUILayoutGroup_t2157789695 * L_11 = L_10->get_topLevel_0();
		int32_t L_12 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_13 = GUIUtility_get_pixelsPerPoint_m2369948084(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_11);
		VirtActionInvoker2< float, float >::Invoke(8 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_11, (0.0f), ((float)((float)(((float)((float)L_12)))/(float)L_13)));
		LayoutCache_t78309876 * L_14 = ((GUILayoutUtility_t66395690_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_14);
		GUILayoutGroup_t2157789695 * L_15 = L_14->get_windows_2();
		GUILayoutUtility_LayoutFreeGroup_m2955697397(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		goto IL_0090;
	}

IL_0084:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral2075829449, /*hidden argument*/NULL);
	}

IL_0090:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::LayoutFreeGroup(UnityEngine.GUILayoutGroup)
extern "C" IL2CPP_METHOD_ATTR void GUILayoutUtility_LayoutFreeGroup_m2955697397 (RuntimeObject * __this /* static, unused */, GUILayoutGroup_t2157789695 * ___toplevel0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUILayoutUtility_LayoutFreeGroup_m2955697397_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GUILayoutGroup_t2157789695 * V_0 = NULL;
	Enumerator_t2280962893  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		GUILayoutGroup_t2157789695 * L_0 = ___toplevel0;
		NullCheck(L_0);
		List_1_t391719016 * L_1 = L_0->get_entries_10();
		NullCheck(L_1);
		Enumerator_t2280962893  L_2 = List_1_GetEnumerator_m1934946323(L_1, /*hidden argument*/List_1_GetEnumerator_m1934946323_RuntimeMethod_var);
		V_1 = L_2;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0028;
		}

IL_0013:
		{
			GUILayoutEntry_t3214611570 * L_3 = Enumerator_get_Current_m2663170093((Enumerator_t2280962893 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m2663170093_RuntimeMethod_var);
			V_0 = ((GUILayoutGroup_t2157789695 *)CastclassClass((RuntimeObject*)L_3, GUILayoutGroup_t2157789695_il2cpp_TypeInfo_var));
			GUILayoutGroup_t2157789695 * L_4 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var);
			GUILayoutUtility_LayoutSingleGroup_m700786689(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		}

IL_0028:
		{
			bool L_5 = Enumerator_MoveNext_m2324433341((Enumerator_t2280962893 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m2324433341_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_0013;
			}
		}

IL_0034:
		{
			IL2CPP_LEAVE(0x47, FINALLY_0039);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0039;
	}

FINALLY_0039:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3494652212((Enumerator_t2280962893 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m3494652212_RuntimeMethod_var);
		IL2CPP_END_FINALLY(57)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(57)
	{
		IL2CPP_JUMP_TBL(0x47, IL_0047)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0047:
	{
		GUILayoutGroup_t2157789695 * L_6 = ___toplevel0;
		NullCheck(L_6);
		GUILayoutGroup_ResetCursor_m672314614(L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::LayoutSingleGroup(UnityEngine.GUILayoutGroup)
extern "C" IL2CPP_METHOD_ATTR void GUILayoutUtility_LayoutSingleGroup_m700786689 (RuntimeObject * __this /* static, unused */, GUILayoutGroup_t2157789695 * ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUILayoutUtility_LayoutSingleGroup_m700786689_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Rect_t2360479859  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		GUILayoutGroup_t2157789695 * L_0 = ___i0;
		NullCheck(L_0);
		bool L_1 = L_0->get_isWindow_15();
		if (L_1)
		{
			goto IL_0077;
		}
	}
	{
		GUILayoutGroup_t2157789695 * L_2 = ___i0;
		NullCheck(L_2);
		float L_3 = ((GUILayoutEntry_t3214611570 *)L_2)->get_minWidth_0();
		V_0 = L_3;
		GUILayoutGroup_t2157789695 * L_4 = ___i0;
		NullCheck(L_4);
		float L_5 = ((GUILayoutEntry_t3214611570 *)L_4)->get_maxWidth_1();
		V_1 = L_5;
		GUILayoutGroup_t2157789695 * L_6 = ___i0;
		NullCheck(L_6);
		VirtActionInvoker0::Invoke(5 /* System.Void UnityEngine.GUILayoutEntry::CalcWidth() */, L_6);
		GUILayoutGroup_t2157789695 * L_7 = ___i0;
		GUILayoutGroup_t2157789695 * L_8 = ___i0;
		NullCheck(L_8);
		Rect_t2360479859 * L_9 = ((GUILayoutEntry_t3214611570 *)L_8)->get_address_of_rect_4();
		float L_10 = Rect_get_x_m3839990490((Rect_t2360479859 *)L_9, /*hidden argument*/NULL);
		GUILayoutGroup_t2157789695 * L_11 = ___i0;
		NullCheck(L_11);
		float L_12 = ((GUILayoutEntry_t3214611570 *)L_11)->get_maxWidth_1();
		float L_13 = V_0;
		float L_14 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_15 = Mathf_Clamp_m3350697880(NULL /*static, unused*/, L_12, L_13, L_14, /*hidden argument*/NULL);
		NullCheck(L_7);
		VirtActionInvoker2< float, float >::Invoke(7 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_7, L_10, L_15);
		GUILayoutGroup_t2157789695 * L_16 = ___i0;
		NullCheck(L_16);
		float L_17 = ((GUILayoutEntry_t3214611570 *)L_16)->get_minHeight_2();
		V_2 = L_17;
		GUILayoutGroup_t2157789695 * L_18 = ___i0;
		NullCheck(L_18);
		float L_19 = ((GUILayoutEntry_t3214611570 *)L_18)->get_maxHeight_3();
		V_3 = L_19;
		GUILayoutGroup_t2157789695 * L_20 = ___i0;
		NullCheck(L_20);
		VirtActionInvoker0::Invoke(6 /* System.Void UnityEngine.GUILayoutEntry::CalcHeight() */, L_20);
		GUILayoutGroup_t2157789695 * L_21 = ___i0;
		GUILayoutGroup_t2157789695 * L_22 = ___i0;
		NullCheck(L_22);
		Rect_t2360479859 * L_23 = ((GUILayoutEntry_t3214611570 *)L_22)->get_address_of_rect_4();
		float L_24 = Rect_get_y_m1501338330((Rect_t2360479859 *)L_23, /*hidden argument*/NULL);
		GUILayoutGroup_t2157789695 * L_25 = ___i0;
		NullCheck(L_25);
		float L_26 = ((GUILayoutEntry_t3214611570 *)L_25)->get_maxHeight_3();
		float L_27 = V_2;
		float L_28 = V_3;
		float L_29 = Mathf_Clamp_m3350697880(NULL /*static, unused*/, L_26, L_27, L_28, /*hidden argument*/NULL);
		NullCheck(L_21);
		VirtActionInvoker2< float, float >::Invoke(8 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_21, L_24, L_29);
		goto IL_00ed;
	}

IL_0077:
	{
		GUILayoutGroup_t2157789695 * L_30 = ___i0;
		NullCheck(L_30);
		VirtActionInvoker0::Invoke(5 /* System.Void UnityEngine.GUILayoutEntry::CalcWidth() */, L_30);
		GUILayoutGroup_t2157789695 * L_31 = ___i0;
		NullCheck(L_31);
		int32_t L_32 = L_31->get_windowID_16();
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var);
		Rect_t2360479859  L_33 = GUILayoutUtility_Internal_GetWindowRect_m2131267775(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		V_4 = L_33;
		GUILayoutGroup_t2157789695 * L_34 = ___i0;
		float L_35 = Rect_get_x_m3839990490((Rect_t2360479859 *)(&V_4), /*hidden argument*/NULL);
		float L_36 = Rect_get_width_m3421484486((Rect_t2360479859 *)(&V_4), /*hidden argument*/NULL);
		GUILayoutGroup_t2157789695 * L_37 = ___i0;
		NullCheck(L_37);
		float L_38 = ((GUILayoutEntry_t3214611570 *)L_37)->get_minWidth_0();
		GUILayoutGroup_t2157789695 * L_39 = ___i0;
		NullCheck(L_39);
		float L_40 = ((GUILayoutEntry_t3214611570 *)L_39)->get_maxWidth_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_41 = Mathf_Clamp_m3350697880(NULL /*static, unused*/, L_36, L_38, L_40, /*hidden argument*/NULL);
		NullCheck(L_34);
		VirtActionInvoker2< float, float >::Invoke(7 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_34, L_35, L_41);
		GUILayoutGroup_t2157789695 * L_42 = ___i0;
		NullCheck(L_42);
		VirtActionInvoker0::Invoke(6 /* System.Void UnityEngine.GUILayoutEntry::CalcHeight() */, L_42);
		GUILayoutGroup_t2157789695 * L_43 = ___i0;
		float L_44 = Rect_get_y_m1501338330((Rect_t2360479859 *)(&V_4), /*hidden argument*/NULL);
		float L_45 = Rect_get_height_m1358425599((Rect_t2360479859 *)(&V_4), /*hidden argument*/NULL);
		GUILayoutGroup_t2157789695 * L_46 = ___i0;
		NullCheck(L_46);
		float L_47 = ((GUILayoutEntry_t3214611570 *)L_46)->get_minHeight_2();
		GUILayoutGroup_t2157789695 * L_48 = ___i0;
		NullCheck(L_48);
		float L_49 = ((GUILayoutEntry_t3214611570 *)L_48)->get_maxHeight_3();
		float L_50 = Mathf_Clamp_m3350697880(NULL /*static, unused*/, L_45, L_47, L_49, /*hidden argument*/NULL);
		NullCheck(L_43);
		VirtActionInvoker2< float, float >::Invoke(8 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_43, L_44, L_50);
		GUILayoutGroup_t2157789695 * L_51 = ___i0;
		NullCheck(L_51);
		int32_t L_52 = L_51->get_windowID_16();
		GUILayoutGroup_t2157789695 * L_53 = ___i0;
		NullCheck(L_53);
		Rect_t2360479859  L_54 = ((GUILayoutEntry_t3214611570 *)L_53)->get_rect_4();
		GUILayoutUtility_Internal_MoveWindow_m3463958180(NULL /*static, unused*/, L_52, L_54, /*hidden argument*/NULL);
	}

IL_00ed:
	{
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUILayoutUtility::get_spaceStyle()
extern "C" IL2CPP_METHOD_ATTR GUIStyle_t3956901511 * GUILayoutUtility_get_spaceStyle_m3392862907 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUILayoutUtility_get_spaceStyle_m3392862907_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GUIStyle_t3956901511 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var);
		GUIStyle_t3956901511 * L_0 = ((GUILayoutUtility_t66395690_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var))->get_s_SpaceStyle_4();
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		GUIStyle_t3956901511 * L_1 = (GUIStyle_t3956901511 *)il2cpp_codegen_object_new(GUIStyle_t3956901511_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m4038363858(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var);
		((GUILayoutUtility_t66395690_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var))->set_s_SpaceStyle_4(L_1);
	}

IL_0015:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var);
		GUIStyle_t3956901511 * L_2 = ((GUILayoutUtility_t66395690_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var))->get_s_SpaceStyle_4();
		NullCheck(L_2);
		GUIStyle_set_stretchWidth_m2564034386(L_2, (bool)0, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_3 = ((GUILayoutUtility_t66395690_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var))->get_s_SpaceStyle_4();
		V_0 = L_3;
		goto IL_002b;
	}

IL_002b:
	{
		GUIStyle_t3956901511 * L_4 = V_0;
		return L_4;
	}
}
// System.Void UnityEngine.GUILayoutUtility::.cctor()
extern "C" IL2CPP_METHOD_ATTR void GUILayoutUtility__cctor_m554256666 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUILayoutUtility__cctor_m554256666_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t3261990503 * L_0 = (Dictionary_2_t3261990503 *)il2cpp_codegen_object_new(Dictionary_2_t3261990503_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m610848861(L_0, /*hidden argument*/Dictionary_2__ctor_m610848861_RuntimeMethod_var);
		((GUILayoutUtility_t66395690_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var))->set_s_StoredLayouts_0(L_0);
		Dictionary_2_t3261990503 * L_1 = (Dictionary_2_t3261990503 *)il2cpp_codegen_object_new(Dictionary_2_t3261990503_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m610848861(L_1, /*hidden argument*/Dictionary_2__ctor_m610848861_RuntimeMethod_var);
		((GUILayoutUtility_t66395690_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var))->set_s_StoredWindows_1(L_1);
		LayoutCache_t78309876 * L_2 = (LayoutCache_t78309876 *)il2cpp_codegen_object_new(LayoutCache_t78309876_il2cpp_TypeInfo_var);
		LayoutCache__ctor_m3885940174(L_2, /*hidden argument*/NULL);
		((GUILayoutUtility_t66395690_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var))->set_current_2(L_2);
		Rect_t2360479859  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Rect__ctor_m2614021312((&L_3), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		((GUILayoutUtility_t66395690_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var))->set_kDummyRect_3(L_3);
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::Internal_GetWindowRect_Injected(System.Int32,UnityEngine.Rect&)
extern "C" IL2CPP_METHOD_ATTR void GUILayoutUtility_Internal_GetWindowRect_Injected_m1537976334 (RuntimeObject * __this /* static, unused */, int32_t ___windowID0, Rect_t2360479859 * ___ret1, const RuntimeMethod* method)
{
	typedef void (*GUILayoutUtility_Internal_GetWindowRect_Injected_m1537976334_ftn) (int32_t, Rect_t2360479859 *);
	static GUILayoutUtility_Internal_GetWindowRect_Injected_m1537976334_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUILayoutUtility_Internal_GetWindowRect_Injected_m1537976334_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUILayoutUtility::Internal_GetWindowRect_Injected(System.Int32,UnityEngine.Rect&)");
	_il2cpp_icall_func(___windowID0, ___ret1);
}
// System.Void UnityEngine.GUILayoutUtility::Internal_MoveWindow_Injected(System.Int32,UnityEngine.Rect&)
extern "C" IL2CPP_METHOD_ATTR void GUILayoutUtility_Internal_MoveWindow_Injected_m1941891499 (RuntimeObject * __this /* static, unused */, int32_t ___windowID0, Rect_t2360479859 * ___r1, const RuntimeMethod* method)
{
	typedef void (*GUILayoutUtility_Internal_MoveWindow_Injected_m1941891499_ftn) (int32_t, Rect_t2360479859 *);
	static GUILayoutUtility_Internal_MoveWindow_Injected_m1941891499_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUILayoutUtility_Internal_MoveWindow_Injected_m1941891499_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUILayoutUtility::Internal_MoveWindow_Injected(System.Int32,UnityEngine.Rect&)");
	_il2cpp_icall_func(___windowID0, ___r1);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.GUILayoutUtility/LayoutCache::.ctor()
extern "C" IL2CPP_METHOD_ATTR void LayoutCache__ctor_m3885940174 (LayoutCache_t78309876 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LayoutCache__ctor_m3885940174_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GUILayoutGroup_t2157789695 * L_0 = (GUILayoutGroup_t2157789695 *)il2cpp_codegen_object_new(GUILayoutGroup_t2157789695_il2cpp_TypeInfo_var);
		GUILayoutGroup__ctor_m3245996524(L_0, /*hidden argument*/NULL);
		__this->set_topLevel_0(L_0);
		GenericStack_t1310059385 * L_1 = (GenericStack_t1310059385 *)il2cpp_codegen_object_new(GenericStack_t1310059385_il2cpp_TypeInfo_var);
		GenericStack__ctor_m933681517(L_1, /*hidden argument*/NULL);
		__this->set_layoutGroups_1(L_1);
		GUILayoutGroup_t2157789695 * L_2 = (GUILayoutGroup_t2157789695 *)il2cpp_codegen_object_new(GUILayoutGroup_t2157789695_il2cpp_TypeInfo_var);
		GUILayoutGroup__ctor_m3245996524(L_2, /*hidden argument*/NULL);
		__this->set_windows_2(L_2);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		GenericStack_t1310059385 * L_3 = __this->get_layoutGroups_1();
		GUILayoutGroup_t2157789695 * L_4 = __this->get_topLevel_0();
		NullCheck(L_3);
		Stack_1_Push_m1669856732(L_3, L_4, /*hidden argument*/Stack_1_Push_m1669856732_RuntimeMethod_var);
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
// System.Void UnityEngine.GUIScrollGroup::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GUIScrollGroup__ctor_m2584604936 (GUIScrollGroup_t1523329021 * __this, const RuntimeMethod* method)
{
	{
		__this->set_allowHorizontalScroll_33((bool)1);
		__this->set_allowVerticalScroll_34((bool)1);
		GUILayoutGroup__ctor_m3245996524(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUIScrollGroup::CalcWidth()
extern "C" IL2CPP_METHOD_ATTR void GUIScrollGroup_CalcWidth_m3382294862 (GUIScrollGroup_t1523329021 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		float L_0 = ((GUILayoutEntry_t3214611570 *)__this)->get_minWidth_0();
		V_0 = L_0;
		float L_1 = ((GUILayoutEntry_t3214611570 *)__this)->get_maxWidth_1();
		V_1 = L_1;
		bool L_2 = __this->get_allowHorizontalScroll_33();
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		((GUILayoutEntry_t3214611570 *)__this)->set_minWidth_0((0.0f));
		((GUILayoutEntry_t3214611570 *)__this)->set_maxWidth_1((0.0f));
	}

IL_0032:
	{
		GUILayoutGroup_CalcWidth_m1389741370(__this, /*hidden argument*/NULL);
		float L_3 = ((GUILayoutEntry_t3214611570 *)__this)->get_minWidth_0();
		__this->set_calcMinWidth_27(L_3);
		float L_4 = ((GUILayoutEntry_t3214611570 *)__this)->get_maxWidth_1();
		__this->set_calcMaxWidth_28(L_4);
		bool L_5 = __this->get_allowHorizontalScroll_33();
		if (!L_5)
		{
			goto IL_00a5;
		}
	}
	{
		float L_6 = ((GUILayoutEntry_t3214611570 *)__this)->get_minWidth_0();
		if ((!(((float)L_6) > ((float)(32.0f)))))
		{
			goto IL_0077;
		}
	}
	{
		((GUILayoutEntry_t3214611570 *)__this)->set_minWidth_0((32.0f));
	}

IL_0077:
	{
		float L_7 = V_0;
		if ((((float)L_7) == ((float)(0.0f))))
		{
			goto IL_0089;
		}
	}
	{
		float L_8 = V_0;
		((GUILayoutEntry_t3214611570 *)__this)->set_minWidth_0(L_8);
	}

IL_0089:
	{
		float L_9 = V_1;
		if ((((float)L_9) == ((float)(0.0f))))
		{
			goto IL_00a4;
		}
	}
	{
		float L_10 = V_1;
		((GUILayoutEntry_t3214611570 *)__this)->set_maxWidth_1(L_10);
		((GUILayoutEntry_t3214611570 *)__this)->set_stretchWidth_5(0);
	}

IL_00a4:
	{
	}

IL_00a5:
	{
		return;
	}
}
// System.Void UnityEngine.GUIScrollGroup::SetHorizontal(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void GUIScrollGroup_SetHorizontal_m291416666 (GUIScrollGroup_t1523329021 * __this, float ___x0, float ___width1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		bool L_0 = __this->get_needsVerticalScrollbar_36();
		if (!L_0)
		{
			goto IL_0030;
		}
	}
	{
		float L_1 = ___width1;
		GUIStyle_t3956901511 * L_2 = __this->get_verticalScrollbar_38();
		NullCheck(L_2);
		float L_3 = GUIStyle_get_fixedWidth_m2576616348(L_2, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_4 = __this->get_verticalScrollbar_38();
		NullCheck(L_4);
		RectOffset_t1369453676 * L_5 = GUIStyle_get_margin_m3595798603(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6 = RectOffset_get_left_m1232181034(L_5, /*hidden argument*/NULL);
		G_B3_0 = ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), (float)(((float)((float)L_6)))));
		goto IL_0031;
	}

IL_0030:
	{
		float L_7 = ___width1;
		G_B3_0 = L_7;
	}

IL_0031:
	{
		V_0 = G_B3_0;
		bool L_8 = __this->get_allowHorizontalScroll_33();
		if (!L_8)
		{
			goto IL_0094;
		}
	}
	{
		float L_9 = V_0;
		float L_10 = __this->get_calcMinWidth_27();
		if ((!(((float)L_9) < ((float)L_10))))
		{
			goto IL_0094;
		}
	}
	{
		__this->set_needsHorizontalScrollbar_35((bool)1);
		float L_11 = __this->get_calcMinWidth_27();
		((GUILayoutEntry_t3214611570 *)__this)->set_minWidth_0(L_11);
		float L_12 = __this->get_calcMaxWidth_28();
		((GUILayoutEntry_t3214611570 *)__this)->set_maxWidth_1(L_12);
		float L_13 = ___x0;
		float L_14 = __this->get_calcMinWidth_27();
		GUILayoutGroup_SetHorizontal_m996475327(__this, L_13, L_14, /*hidden argument*/NULL);
		Rect_t2360479859 * L_15 = ((GUILayoutEntry_t3214611570 *)__this)->get_address_of_rect_4();
		float L_16 = ___width1;
		Rect_set_width_m2963421158((Rect_t2360479859 *)L_15, L_16, /*hidden argument*/NULL);
		float L_17 = __this->get_calcMinWidth_27();
		__this->set_clientWidth_31(L_17);
		goto IL_00dd;
	}

IL_0094:
	{
		__this->set_needsHorizontalScrollbar_35((bool)0);
		bool L_18 = __this->get_allowHorizontalScroll_33();
		if (!L_18)
		{
			goto IL_00c1;
		}
	}
	{
		float L_19 = __this->get_calcMinWidth_27();
		((GUILayoutEntry_t3214611570 *)__this)->set_minWidth_0(L_19);
		float L_20 = __this->get_calcMaxWidth_28();
		((GUILayoutEntry_t3214611570 *)__this)->set_maxWidth_1(L_20);
	}

IL_00c1:
	{
		float L_21 = ___x0;
		float L_22 = V_0;
		GUILayoutGroup_SetHorizontal_m996475327(__this, L_21, L_22, /*hidden argument*/NULL);
		Rect_t2360479859 * L_23 = ((GUILayoutEntry_t3214611570 *)__this)->get_address_of_rect_4();
		float L_24 = ___width1;
		Rect_set_width_m2963421158((Rect_t2360479859 *)L_23, L_24, /*hidden argument*/NULL);
		float L_25 = V_0;
		__this->set_clientWidth_31(L_25);
	}

IL_00dd:
	{
		return;
	}
}
// System.Void UnityEngine.GUIScrollGroup::CalcHeight()
extern "C" IL2CPP_METHOD_ATTR void GUIScrollGroup_CalcHeight_m3173593443 (GUIScrollGroup_t1523329021 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		float L_0 = ((GUILayoutEntry_t3214611570 *)__this)->get_minHeight_2();
		V_0 = L_0;
		float L_1 = ((GUILayoutEntry_t3214611570 *)__this)->get_maxHeight_3();
		V_1 = L_1;
		bool L_2 = __this->get_allowVerticalScroll_34();
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		((GUILayoutEntry_t3214611570 *)__this)->set_minHeight_2((0.0f));
		((GUILayoutEntry_t3214611570 *)__this)->set_maxHeight_3((0.0f));
	}

IL_0032:
	{
		GUILayoutGroup_CalcHeight_m1669391299(__this, /*hidden argument*/NULL);
		float L_3 = ((GUILayoutEntry_t3214611570 *)__this)->get_minHeight_2();
		__this->set_calcMinHeight_29(L_3);
		float L_4 = ((GUILayoutEntry_t3214611570 *)__this)->get_maxHeight_3();
		__this->set_calcMaxHeight_30(L_4);
		bool L_5 = __this->get_needsHorizontalScrollbar_35();
		if (!L_5)
		{
			goto IL_0097;
		}
	}
	{
		GUIStyle_t3956901511 * L_6 = __this->get_horizontalScrollbar_37();
		NullCheck(L_6);
		float L_7 = GUIStyle_get_fixedHeight_m2868324709(L_6, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_8 = __this->get_horizontalScrollbar_37();
		NullCheck(L_8);
		RectOffset_t1369453676 * L_9 = GUIStyle_get_margin_m3595798603(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		int32_t L_10 = RectOffset_get_top_m2855347295(L_9, /*hidden argument*/NULL);
		V_2 = ((float)il2cpp_codegen_add((float)L_7, (float)(((float)((float)L_10)))));
		float L_11 = ((GUILayoutEntry_t3214611570 *)__this)->get_minHeight_2();
		float L_12 = V_2;
		((GUILayoutEntry_t3214611570 *)__this)->set_minHeight_2(((float)il2cpp_codegen_add((float)L_11, (float)L_12)));
		float L_13 = ((GUILayoutEntry_t3214611570 *)__this)->get_maxHeight_3();
		float L_14 = V_2;
		((GUILayoutEntry_t3214611570 *)__this)->set_maxHeight_3(((float)il2cpp_codegen_add((float)L_13, (float)L_14)));
	}

IL_0097:
	{
		bool L_15 = __this->get_allowVerticalScroll_34();
		if (!L_15)
		{
			goto IL_00ec;
		}
	}
	{
		float L_16 = ((GUILayoutEntry_t3214611570 *)__this)->get_minHeight_2();
		if ((!(((float)L_16) > ((float)(32.0f)))))
		{
			goto IL_00be;
		}
	}
	{
		((GUILayoutEntry_t3214611570 *)__this)->set_minHeight_2((32.0f));
	}

IL_00be:
	{
		float L_17 = V_0;
		if ((((float)L_17) == ((float)(0.0f))))
		{
			goto IL_00d0;
		}
	}
	{
		float L_18 = V_0;
		((GUILayoutEntry_t3214611570 *)__this)->set_minHeight_2(L_18);
	}

IL_00d0:
	{
		float L_19 = V_1;
		if ((((float)L_19) == ((float)(0.0f))))
		{
			goto IL_00eb;
		}
	}
	{
		float L_20 = V_1;
		((GUILayoutEntry_t3214611570 *)__this)->set_maxHeight_3(L_20);
		((GUILayoutEntry_t3214611570 *)__this)->set_stretchHeight_6(0);
	}

IL_00eb:
	{
	}

IL_00ec:
	{
		return;
	}
}
// System.Void UnityEngine.GUIScrollGroup::SetVertical(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void GUIScrollGroup_SetVertical_m353811564 (GUIScrollGroup_t1523329021 * __this, float ___y0, float ___height1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		float L_0 = ___height1;
		V_0 = L_0;
		bool L_1 = __this->get_needsHorizontalScrollbar_35();
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		float L_2 = V_0;
		GUIStyle_t3956901511 * L_3 = __this->get_horizontalScrollbar_37();
		NullCheck(L_3);
		float L_4 = GUIStyle_get_fixedHeight_m2868324709(L_3, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_5 = __this->get_horizontalScrollbar_37();
		NullCheck(L_5);
		RectOffset_t1369453676 * L_6 = GUIStyle_get_margin_m3595798603(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_7 = RectOffset_get_top_m2855347295(L_6, /*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_subtract((float)L_2, (float)((float)il2cpp_codegen_add((float)L_4, (float)(((float)((float)L_7)))))));
	}

IL_002e:
	{
		bool L_8 = __this->get_allowVerticalScroll_34();
		if (!L_8)
		{
			goto IL_013e;
		}
	}
	{
		float L_9 = V_0;
		float L_10 = __this->get_calcMinHeight_29();
		if ((!(((float)L_9) < ((float)L_10))))
		{
			goto IL_013e;
		}
	}
	{
		bool L_11 = __this->get_needsHorizontalScrollbar_35();
		if (L_11)
		{
			goto IL_00df;
		}
	}
	{
		bool L_12 = __this->get_needsVerticalScrollbar_36();
		if (L_12)
		{
			goto IL_00df;
		}
	}
	{
		Rect_t2360479859 * L_13 = ((GUILayoutEntry_t3214611570 *)__this)->get_address_of_rect_4();
		float L_14 = Rect_get_width_m3421484486((Rect_t2360479859 *)L_13, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_15 = __this->get_verticalScrollbar_38();
		NullCheck(L_15);
		float L_16 = GUIStyle_get_fixedWidth_m2576616348(L_15, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_17 = __this->get_verticalScrollbar_38();
		NullCheck(L_17);
		RectOffset_t1369453676 * L_18 = GUIStyle_get_margin_m3595798603(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		int32_t L_19 = RectOffset_get_left_m1232181034(L_18, /*hidden argument*/NULL);
		__this->set_clientWidth_31(((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)L_14, (float)L_16)), (float)(((float)((float)L_19))))));
		float L_20 = __this->get_clientWidth_31();
		float L_21 = __this->get_calcMinWidth_27();
		if ((!(((float)L_20) < ((float)L_21))))
		{
			goto IL_00a9;
		}
	}
	{
		float L_22 = __this->get_calcMinWidth_27();
		__this->set_clientWidth_31(L_22);
	}

IL_00a9:
	{
		Rect_t2360479859 * L_23 = ((GUILayoutEntry_t3214611570 *)__this)->get_address_of_rect_4();
		float L_24 = Rect_get_width_m3421484486((Rect_t2360479859 *)L_23, /*hidden argument*/NULL);
		V_1 = L_24;
		Rect_t2360479859 * L_25 = ((GUILayoutEntry_t3214611570 *)__this)->get_address_of_rect_4();
		float L_26 = Rect_get_x_m3839990490((Rect_t2360479859 *)L_25, /*hidden argument*/NULL);
		float L_27 = __this->get_clientWidth_31();
		VirtActionInvoker2< float, float >::Invoke(7 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, __this, L_26, L_27);
		VirtActionInvoker0::Invoke(6 /* System.Void UnityEngine.GUILayoutEntry::CalcHeight() */, __this);
		Rect_t2360479859 * L_28 = ((GUILayoutEntry_t3214611570 *)__this)->get_address_of_rect_4();
		float L_29 = V_1;
		Rect_set_width_m2963421158((Rect_t2360479859 *)L_28, L_29, /*hidden argument*/NULL);
	}

IL_00df:
	{
		float L_30 = ((GUILayoutEntry_t3214611570 *)__this)->get_minHeight_2();
		V_2 = L_30;
		float L_31 = ((GUILayoutEntry_t3214611570 *)__this)->get_maxHeight_3();
		V_3 = L_31;
		float L_32 = __this->get_calcMinHeight_29();
		((GUILayoutEntry_t3214611570 *)__this)->set_minHeight_2(L_32);
		float L_33 = __this->get_calcMaxHeight_30();
		((GUILayoutEntry_t3214611570 *)__this)->set_maxHeight_3(L_33);
		float L_34 = ___y0;
		float L_35 = __this->get_calcMinHeight_29();
		GUILayoutGroup_SetVertical_m2446642182(__this, L_34, L_35, /*hidden argument*/NULL);
		float L_36 = V_2;
		((GUILayoutEntry_t3214611570 *)__this)->set_minHeight_2(L_36);
		float L_37 = V_3;
		((GUILayoutEntry_t3214611570 *)__this)->set_maxHeight_3(L_37);
		Rect_t2360479859 * L_38 = ((GUILayoutEntry_t3214611570 *)__this)->get_address_of_rect_4();
		float L_39 = ___height1;
		Rect_set_height_m1625569324((Rect_t2360479859 *)L_38, L_39, /*hidden argument*/NULL);
		float L_40 = __this->get_calcMinHeight_29();
		__this->set_clientHeight_32(L_40);
		goto IL_0180;
	}

IL_013e:
	{
		bool L_41 = __this->get_allowVerticalScroll_34();
		if (!L_41)
		{
			goto IL_0164;
		}
	}
	{
		float L_42 = __this->get_calcMinHeight_29();
		((GUILayoutEntry_t3214611570 *)__this)->set_minHeight_2(L_42);
		float L_43 = __this->get_calcMaxHeight_30();
		((GUILayoutEntry_t3214611570 *)__this)->set_maxHeight_3(L_43);
	}

IL_0164:
	{
		float L_44 = ___y0;
		float L_45 = V_0;
		GUILayoutGroup_SetVertical_m2446642182(__this, L_44, L_45, /*hidden argument*/NULL);
		Rect_t2360479859 * L_46 = ((GUILayoutEntry_t3214611570 *)__this)->get_address_of_rect_4();
		float L_47 = ___height1;
		Rect_set_height_m1625569324((Rect_t2360479859 *)L_46, L_47, /*hidden argument*/NULL);
		float L_48 = V_0;
		__this->set_clientHeight_32(L_48);
	}

IL_0180:
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
// System.Void UnityEngine.GUISettings::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GUISettings__ctor_m2761652600 (GUISettings_t1774757634 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_DoubleClickSelectsWord_0((bool)1);
		__this->set_m_TripleClickSelectsLine_1((bool)1);
		Color_t2555686324  L_0 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_m_CursorColor_2(L_0);
		__this->set_m_CursorFlashSpeed_3((-1.0f));
		Color_t2555686324  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Color__ctor_m286683560((&L_1), (0.5f), (0.5f), (1.0f), /*hidden argument*/NULL);
		__this->set_m_SelectionColor_4(L_1);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.GUISkin::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GUISkin__ctor_m3576427628 (GUISkin_t1244372282 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUISkin__ctor_m3576427628_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GUISettings_t1774757634 * L_0 = (GUISettings_t1774757634 *)il2cpp_codegen_object_new(GUISettings_t1774757634_il2cpp_TypeInfo_var);
		GUISettings__ctor_m2761652600(L_0, /*hidden argument*/NULL);
		__this->set_m_Settings_26(L_0);
		__this->set_m_Styles_28((Dictionary_2_t3742157810 *)NULL);
		ScriptableObject__ctor_m1310743131(__this, /*hidden argument*/NULL);
		GUIStyleU5BU5D_t2383250302* L_1 = (GUIStyleU5BU5D_t2383250302*)SZArrayNew(GUIStyleU5BU5D_t2383250302_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_m_CustomStyles_25(L_1);
		return;
	}
}
// UnityEngine.Font UnityEngine.GUISkin::get_font()
extern "C" IL2CPP_METHOD_ATTR Font_t1956802104 * GUISkin_get_font_m3937910082 (GUISkin_t1244372282 * __this, const RuntimeMethod* method)
{
	Font_t1956802104 * V_0 = NULL;
	{
		Font_t1956802104 * L_0 = __this->get_m_Font_4();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Font_t1956802104 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::MakeCurrent()
extern "C" IL2CPP_METHOD_ATTR void GUISkin_MakeCurrent_m3239192349 (GUISkin_t1244372282 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUISkin_MakeCurrent_m3239192349_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((GUISkin_t1244372282_StaticFields*)il2cpp_codegen_static_fields_for(GUISkin_t1244372282_il2cpp_TypeInfo_var))->set_current_30(__this);
		Font_t1956802104 * L_0 = GUISkin_get_font_m3937910082(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t3956901511_il2cpp_TypeInfo_var);
		GUIStyle_SetDefaultFont_m1581452579(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		SkinChangedDelegate_t1143955295 * L_1 = ((GUISkin_t1244372282_StaticFields*)il2cpp_codegen_static_fields_for(GUISkin_t1244372282_il2cpp_TypeInfo_var))->get_m_SkinChanged_29();
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		SkinChangedDelegate_t1143955295 * L_2 = ((GUISkin_t1244372282_StaticFields*)il2cpp_codegen_static_fields_for(GUISkin_t1244372282_il2cpp_TypeInfo_var))->get_m_SkinChanged_29();
		NullCheck(L_2);
		SkinChangedDelegate_Invoke_m3627689407(L_2, /*hidden argument*/NULL);
	}

IL_0026:
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
extern "C"  void DelegatePInvokeWrapper_SkinChangedDelegate_t1143955295 (SkinChangedDelegate_t1143955295 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.GUISkin/SkinChangedDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SkinChangedDelegate__ctor_m1270439727 (SkinChangedDelegate_t1143955295 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.GUISkin/SkinChangedDelegate::Invoke()
extern "C" IL2CPP_METHOD_ATTR void SkinChangedDelegate_Invoke_m3627689407 (SkinChangedDelegate_t1143955295 * __this, const RuntimeMethod* method)
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
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 0)
				{
					// open
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, targetMethod);
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
								GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
							else
								GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
							else
								VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
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
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 0)
			{
				// open
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, targetMethod);
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
							GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
						else
							GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
						else
							VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.GUISkin/SkinChangedDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SkinChangedDelegate_BeginInvoke_m2963887440 (SkinChangedDelegate_t1143955295 * __this, AsyncCallback_t3962456242 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void UnityEngine.GUISkin/SkinChangedDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void SkinChangedDelegate_EndInvoke_m1346531361 (SkinChangedDelegate_t1143955295 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
























// Conversion methods for marshalling of: UnityEngine.GUIStyle
extern "C" void GUIStyle_t3956901511_marshal_pinvoke(const GUIStyle_t3956901511& unmarshaled, GUIStyle_t3956901511_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Normal_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Normal' of type 'GUIStyle': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Normal_1Exception, NULL, NULL);
}
extern "C" void GUIStyle_t3956901511_marshal_pinvoke_back(const GUIStyle_t3956901511_marshaled_pinvoke& marshaled, GUIStyle_t3956901511& unmarshaled)
{
	Exception_t* ___m_Normal_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Normal' of type 'GUIStyle': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Normal_1Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.GUIStyle
extern "C" void GUIStyle_t3956901511_marshal_pinvoke_cleanup(GUIStyle_t3956901511_marshaled_pinvoke& marshaled)
{
}
























// Conversion methods for marshalling of: UnityEngine.GUIStyle
extern "C" void GUIStyle_t3956901511_marshal_com(const GUIStyle_t3956901511& unmarshaled, GUIStyle_t3956901511_marshaled_com& marshaled)
{
	Exception_t* ___m_Normal_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Normal' of type 'GUIStyle': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Normal_1Exception, NULL, NULL);
}
extern "C" void GUIStyle_t3956901511_marshal_com_back(const GUIStyle_t3956901511_marshaled_com& marshaled, GUIStyle_t3956901511& unmarshaled)
{
	Exception_t* ___m_Normal_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Normal' of type 'GUIStyle': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Normal_1Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.GUIStyle
extern "C" void GUIStyle_t3956901511_marshal_com_cleanup(GUIStyle_t3956901511_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.GUIStyle::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GUIStyle__ctor_m4038363858 (GUIStyle_t3956901511 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUIStyle__ctor_m4038363858_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t3956901511_il2cpp_TypeInfo_var);
		intptr_t L_0 = GUIStyle_Internal_Create_m2274420027(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		__this->set_m_Ptr_0(L_0);
		return;
	}
}
// System.String UnityEngine.GUIStyle::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* GUIStyle_get_name_m2109418832 (GUIStyle_t3956901511 * __this, const RuntimeMethod* method)
{
	typedef String_t* (*GUIStyle_get_name_m2109418832_ftn) (GUIStyle_t3956901511 *);
	static GUIStyle_get_name_m2109418832_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_name_m2109418832_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_name()");
	String_t* retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Single UnityEngine.GUIStyle::get_fixedWidth()
extern "C" IL2CPP_METHOD_ATTR float GUIStyle_get_fixedWidth_m2576616348 (GUIStyle_t3956901511 * __this, const RuntimeMethod* method)
{
	typedef float (*GUIStyle_get_fixedWidth_m2576616348_ftn) (GUIStyle_t3956901511 *);
	static GUIStyle_get_fixedWidth_m2576616348_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_fixedWidth_m2576616348_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_fixedWidth()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Single UnityEngine.GUIStyle::get_fixedHeight()
extern "C" IL2CPP_METHOD_ATTR float GUIStyle_get_fixedHeight_m2868324709 (GUIStyle_t3956901511 * __this, const RuntimeMethod* method)
{
	typedef float (*GUIStyle_get_fixedHeight_m2868324709_ftn) (GUIStyle_t3956901511 *);
	static GUIStyle_get_fixedHeight_m2868324709_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_fixedHeight_m2868324709_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_fixedHeight()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.GUIStyle::get_stretchWidth()
extern "C" IL2CPP_METHOD_ATTR bool GUIStyle_get_stretchWidth_m3556443132 (GUIStyle_t3956901511 * __this, const RuntimeMethod* method)
{
	typedef bool (*GUIStyle_get_stretchWidth_m3556443132_ftn) (GUIStyle_t3956901511 *);
	static GUIStyle_get_stretchWidth_m3556443132_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_stretchWidth_m3556443132_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_stretchWidth()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.GUIStyle::set_stretchWidth(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle_set_stretchWidth_m2564034386 (GUIStyle_t3956901511 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*GUIStyle_set_stretchWidth_m2564034386_ftn) (GUIStyle_t3956901511 *, bool);
	static GUIStyle_set_stretchWidth_m2564034386_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_set_stretchWidth_m2564034386_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_stretchWidth(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.GUIStyle::get_stretchHeight()
extern "C" IL2CPP_METHOD_ATTR bool GUIStyle_get_stretchHeight_m4172805773 (GUIStyle_t3956901511 * __this, const RuntimeMethod* method)
{
	typedef bool (*GUIStyle_get_stretchHeight_m4172805773_ftn) (GUIStyle_t3956901511 *);
	static GUIStyle_get_stretchHeight_m4172805773_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_stretchHeight_m4172805773_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_stretchHeight()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.IntPtr UnityEngine.GUIStyle::Internal_Create(UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR intptr_t GUIStyle_Internal_Create_m2274420027 (RuntimeObject * __this /* static, unused */, GUIStyle_t3956901511 * ___self0, const RuntimeMethod* method)
{
	typedef intptr_t (*GUIStyle_Internal_Create_m2274420027_ftn) (GUIStyle_t3956901511 *);
	static GUIStyle_Internal_Create_m2274420027_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Internal_Create_m2274420027_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_Create(UnityEngine.GUIStyle)");
	intptr_t retVal = _il2cpp_icall_func(___self0);
	return retVal;
}
// System.Void UnityEngine.GUIStyle::Internal_Destroy(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle_Internal_Destroy_m293134876 (RuntimeObject * __this /* static, unused */, intptr_t ___self0, const RuntimeMethod* method)
{
	typedef void (*GUIStyle_Internal_Destroy_m293134876_ftn) (intptr_t);
	static GUIStyle_Internal_Destroy_m293134876_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Internal_Destroy_m293134876_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_Destroy(System.IntPtr)");
	_il2cpp_icall_func(___self0);
}
// System.IntPtr UnityEngine.GUIStyle::GetRectOffsetPtr(System.Int32)
extern "C" IL2CPP_METHOD_ATTR intptr_t GUIStyle_GetRectOffsetPtr_m2881421249 (GUIStyle_t3956901511 * __this, int32_t ___idx0, const RuntimeMethod* method)
{
	typedef intptr_t (*GUIStyle_GetRectOffsetPtr_m2881421249_ftn) (GUIStyle_t3956901511 *, int32_t);
	static GUIStyle_GetRectOffsetPtr_m2881421249_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_GetRectOffsetPtr_m2881421249_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::GetRectOffsetPtr(System.Int32)");
	intptr_t retVal = _il2cpp_icall_func(__this, ___idx0);
	return retVal;
}
// System.Void UnityEngine.GUIStyle::SetDefaultFont(UnityEngine.Font)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle_SetDefaultFont_m1581452579 (RuntimeObject * __this /* static, unused */, Font_t1956802104 * ___font0, const RuntimeMethod* method)
{
	typedef void (*GUIStyle_SetDefaultFont_m1581452579_ftn) (Font_t1956802104 *);
	static GUIStyle_SetDefaultFont_m1581452579_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_SetDefaultFont_m1581452579_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::SetDefaultFont(UnityEngine.Font)");
	_il2cpp_icall_func(___font0);
}
// System.Void UnityEngine.GUIStyle::Finalize()
extern "C" IL2CPP_METHOD_ATTR void GUIStyle_Finalize_m1912900812 (GUIStyle_t3956901511 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUIStyle_Finalize_m1912900812_MetadataUsageId);
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
			intptr_t L_0 = __this->get_m_Ptr_0();
			bool L_1 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_0, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_1)
			{
				goto IL_002e;
			}
		}

IL_0016:
		{
			intptr_t L_2 = __this->get_m_Ptr_0();
			IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t3956901511_il2cpp_TypeInfo_var);
			GUIStyle_Internal_Destroy_m293134876(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
			__this->set_m_Ptr_0((intptr_t)(0));
		}

IL_002e:
		{
			IL2CPP_LEAVE(0x3A, FINALLY_0033);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0033;
	}

FINALLY_0033:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(51)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(51)
	{
		IL2CPP_JUMP_TBL(0x3A, IL_003a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003a:
	{
		return;
	}
}
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_margin()
extern "C" IL2CPP_METHOD_ATTR RectOffset_t1369453676 * GUIStyle_get_margin_m3595798603 (GUIStyle_t3956901511 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUIStyle_get_margin_m3595798603_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RectOffset_t1369453676 * V_0 = NULL;
	{
		RectOffset_t1369453676 * L_0 = __this->get_m_Margin_11();
		if (L_0)
		{
			goto IL_001f;
		}
	}
	{
		intptr_t L_1 = GUIStyle_GetRectOffsetPtr_m2881421249(__this, 1, /*hidden argument*/NULL);
		RectOffset_t1369453676 * L_2 = (RectOffset_t1369453676 *)il2cpp_codegen_object_new(RectOffset_t1369453676_il2cpp_TypeInfo_var);
		RectOffset__ctor_m2718275157(L_2, __this, L_1, /*hidden argument*/NULL);
		__this->set_m_Margin_11(L_2);
	}

IL_001f:
	{
		RectOffset_t1369453676 * L_3 = __this->get_m_Margin_11();
		V_0 = L_3;
		goto IL_002b;
	}

IL_002b:
	{
		RectOffset_t1369453676 * L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_padding()
extern "C" IL2CPP_METHOD_ATTR RectOffset_t1369453676 * GUIStyle_get_padding_m3526264743 (GUIStyle_t3956901511 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUIStyle_get_padding_m3526264743_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RectOffset_t1369453676 * V_0 = NULL;
	{
		RectOffset_t1369453676 * L_0 = __this->get_m_Padding_10();
		if (L_0)
		{
			goto IL_001f;
		}
	}
	{
		intptr_t L_1 = GUIStyle_GetRectOffsetPtr_m2881421249(__this, 2, /*hidden argument*/NULL);
		RectOffset_t1369453676 * L_2 = (RectOffset_t1369453676 *)il2cpp_codegen_object_new(RectOffset_t1369453676_il2cpp_TypeInfo_var);
		RectOffset__ctor_m2718275157(L_2, __this, L_1, /*hidden argument*/NULL);
		__this->set_m_Padding_10(L_2);
	}

IL_001f:
	{
		RectOffset_t1369453676 * L_3 = __this->get_m_Padding_10();
		V_0 = L_3;
		goto IL_002b;
	}

IL_002b:
	{
		RectOffset_t1369453676 * L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUIStyle::get_none()
extern "C" IL2CPP_METHOD_ATTR GUIStyle_t3956901511 * GUIStyle_get_none_m1545577352 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUIStyle_get_none_m1545577352_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GUIStyle_t3956901511 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t3956901511_il2cpp_TypeInfo_var);
		GUIStyle_t3956901511 * L_0 = ((GUIStyle_t3956901511_StaticFields*)il2cpp_codegen_static_fields_for(GUIStyle_t3956901511_il2cpp_TypeInfo_var))->get_s_None_14();
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		GUIStyle_t3956901511 * L_1 = (GUIStyle_t3956901511 *)il2cpp_codegen_object_new(GUIStyle_t3956901511_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m4038363858(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t3956901511_il2cpp_TypeInfo_var);
		((GUIStyle_t3956901511_StaticFields*)il2cpp_codegen_static_fields_for(GUIStyle_t3956901511_il2cpp_TypeInfo_var))->set_s_None_14(L_1);
	}

IL_0015:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t3956901511_il2cpp_TypeInfo_var);
		GUIStyle_t3956901511 * L_2 = ((GUIStyle_t3956901511_StaticFields*)il2cpp_codegen_static_fields_for(GUIStyle_t3956901511_il2cpp_TypeInfo_var))->get_s_None_14();
		V_0 = L_2;
		goto IL_0020;
	}

IL_0020:
	{
		GUIStyle_t3956901511 * L_3 = V_0;
		return L_3;
	}
}
// System.String UnityEngine.GUIStyle::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* GUIStyle_ToString_m3014660435 (GUIStyle_t3956901511 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUIStyle_ToString_m3014660435_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		String_t* L_2 = GUIStyle_get_name_m2109418832(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		String_t* L_3 = UnityString_Format_m261690510(NULL /*static, unused*/, _stringLiteral1207742195, L_1, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0020;
	}

IL_0020:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.Void UnityEngine.GUIStyle::.cctor()
extern "C" IL2CPP_METHOD_ATTR void GUIStyle__cctor_m3477697449 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUIStyle__cctor_m3477697449_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((GUIStyle_t3956901511_StaticFields*)il2cpp_codegen_static_fields_for(GUIStyle_t3956901511_il2cpp_TypeInfo_var))->set_showKeyboardFocus_13((bool)1);
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


// Conversion methods for marshalling of: UnityEngine.GUIStyleState
extern "C" void GUIStyleState_t1397964415_marshal_pinvoke(const GUIStyleState_t1397964415& unmarshaled, GUIStyleState_t1397964415_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_SourceStyle_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_SourceStyle' of type 'GUIStyleState': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SourceStyle_1Exception, NULL, NULL);
}
extern "C" void GUIStyleState_t1397964415_marshal_pinvoke_back(const GUIStyleState_t1397964415_marshaled_pinvoke& marshaled, GUIStyleState_t1397964415& unmarshaled)
{
	Exception_t* ___m_SourceStyle_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_SourceStyle' of type 'GUIStyleState': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SourceStyle_1Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.GUIStyleState
extern "C" void GUIStyleState_t1397964415_marshal_pinvoke_cleanup(GUIStyleState_t1397964415_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: UnityEngine.GUIStyleState
extern "C" void GUIStyleState_t1397964415_marshal_com(const GUIStyleState_t1397964415& unmarshaled, GUIStyleState_t1397964415_marshaled_com& marshaled)
{
	Exception_t* ___m_SourceStyle_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_SourceStyle' of type 'GUIStyleState': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SourceStyle_1Exception, NULL, NULL);
}
extern "C" void GUIStyleState_t1397964415_marshal_com_back(const GUIStyleState_t1397964415_marshaled_com& marshaled, GUIStyleState_t1397964415& unmarshaled)
{
	Exception_t* ___m_SourceStyle_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_SourceStyle' of type 'GUIStyleState': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SourceStyle_1Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.GUIStyleState
extern "C" void GUIStyleState_t1397964415_marshal_com_cleanup(GUIStyleState_t1397964415_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.GUIStyleState::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GUIStyleState__ctor_m1648430456 (GUIStyleState_t1397964415 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		intptr_t L_0 = GUIStyleState_Init_m1843829800(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_m_Ptr_0(L_0);
		return;
	}
}
// System.IntPtr UnityEngine.GUIStyleState::Init()
extern "C" IL2CPP_METHOD_ATTR intptr_t GUIStyleState_Init_m1843829800 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef intptr_t (*GUIStyleState_Init_m1843829800_ftn) ();
	static GUIStyleState_Init_m1843829800_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyleState_Init_m1843829800_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::Init()");
	intptr_t retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Void UnityEngine.GUIStyleState::Cleanup()
extern "C" IL2CPP_METHOD_ATTR void GUIStyleState_Cleanup_m696329069 (GUIStyleState_t1397964415 * __this, const RuntimeMethod* method)
{
	typedef void (*GUIStyleState_Cleanup_m696329069_ftn) (GUIStyleState_t1397964415 *);
	static GUIStyleState_Cleanup_m696329069_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyleState_Cleanup_m696329069_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::Cleanup()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GUIStyleState::Finalize()
extern "C" IL2CPP_METHOD_ATTR void GUIStyleState_Finalize_m1466589588 (GUIStyleState_t1397964415 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUIStyleState_Finalize_m1466589588_MetadataUsageId);
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
			GUIStyle_t3956901511 * L_0 = __this->get_m_SourceStyle_1();
			if (L_0)
			{
				goto IL_001f;
			}
		}

IL_000c:
		{
			GUIStyleState_Cleanup_m696329069(__this, /*hidden argument*/NULL);
			__this->set_m_Ptr_0((intptr_t)(0));
		}

IL_001f:
		{
			IL2CPP_LEAVE(0x2B, FINALLY_0024);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0024;
	}

FINALLY_0024:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(36)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(36)
	{
		IL2CPP_JUMP_TBL(0x2B, IL_002b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002b:
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
// System.Int32 UnityEngine.GUITargetAttribute::GetGUITargetAttrValue(System.Type,System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t GUITargetAttribute_GetGUITargetAttrValue_m2954410352 (RuntimeObject * __this /* static, unused */, Type_t * ___klass0, String_t* ___methodName1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (-1);
		goto IL_0008;
	}

IL_0008:
	{
		int32_t L_0 = V_0;
		return L_0;
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
// System.Single UnityEngine.GUIUtility::get_pixelsPerPoint()
extern "C" IL2CPP_METHOD_ATTR float GUIUtility_get_pixelsPerPoint_m2369948084 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef float (*GUIUtility_get_pixelsPerPoint_m2369948084_ftn) ();
	static GUIUtility_get_pixelsPerPoint_m2369948084_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_get_pixelsPerPoint_m2369948084_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::get_pixelsPerPoint()");
	float retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Int32 UnityEngine.GUIUtility::get_guiDepth()
extern "C" IL2CPP_METHOD_ATTR int32_t GUIUtility_get_guiDepth_m3282451554 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (*GUIUtility_get_guiDepth_m3282451554_ftn) ();
	static GUIUtility_get_guiDepth_m3282451554_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_get_guiDepth_m3282451554_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::get_guiDepth()");
	int32_t retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Object UnityEngine.GUIUtility::Internal_GetDefaultSkin(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GUIUtility_Internal_GetDefaultSkin_m995660429 (RuntimeObject * __this /* static, unused */, int32_t ___skinMode0, const RuntimeMethod* method)
{
	typedef RuntimeObject * (*GUIUtility_Internal_GetDefaultSkin_m995660429_ftn) (int32_t);
	static GUIUtility_Internal_GetDefaultSkin_m995660429_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_Internal_GetDefaultSkin_m995660429_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::Internal_GetDefaultSkin(System.Int32)");
	RuntimeObject * retVal = _il2cpp_icall_func(___skinMode0);
	return retVal;
}
// System.Void UnityEngine.GUIUtility::Internal_ExitGUI()
extern "C" IL2CPP_METHOD_ATTR void GUIUtility_Internal_ExitGUI_m273923508 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef void (*GUIUtility_Internal_ExitGUI_m273923508_ftn) ();
	static GUIUtility_Internal_ExitGUI_m273923508_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_Internal_ExitGUI_m273923508_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::Internal_ExitGUI()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.GUIUtility::set_guiIsExiting(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GUIUtility_set_guiIsExiting_m1558910088 (RuntimeObject * __this /* static, unused */, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUIUtility_set_guiIsExiting_m1558910088_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___value0;
		((GUIUtility_t1868551600_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_t1868551600_il2cpp_TypeInfo_var))->set_U3CguiIsExitingU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Void UnityEngine.GUIUtility::TakeCapture()
extern "C" IL2CPP_METHOD_ATTR void GUIUtility_TakeCapture_m1130863121 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUIUtility_TakeCapture_m1130863121_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_t1264377477 * L_0 = ((GUIUtility_t1868551600_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_t1868551600_il2cpp_TypeInfo_var))->get_takeCapture_2();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		goto IL_0017;
	}

IL_000d:
	{
		Action_t1264377477 * L_1 = ((GUIUtility_t1868551600_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_t1868551600_il2cpp_TypeInfo_var))->get_takeCapture_2();
		NullCheck(L_1);
		Action_Invoke_m423955441(L_1, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Void UnityEngine.GUIUtility::RemoveCapture()
extern "C" IL2CPP_METHOD_ATTR void GUIUtility_RemoveCapture_m1294193818 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUIUtility_RemoveCapture_m1294193818_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_t1264377477 * L_0 = ((GUIUtility_t1868551600_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_t1868551600_il2cpp_TypeInfo_var))->get_releaseCapture_3();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		goto IL_0017;
	}

IL_000d:
	{
		Action_t1264377477 * L_1 = ((GUIUtility_t1868551600_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_t1868551600_il2cpp_TypeInfo_var))->get_releaseCapture_3();
		NullCheck(L_1);
		Action_Invoke_m423955441(L_1, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// UnityEngine.GUISkin UnityEngine.GUIUtility::GetDefaultSkin()
extern "C" IL2CPP_METHOD_ATTR GUISkin_t1244372282 * GUIUtility_GetDefaultSkin_m1141001896 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUIUtility_GetDefaultSkin_m1141001896_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GUISkin_t1244372282 * V_0 = NULL;
	{
		int32_t L_0 = ((GUIUtility_t1868551600_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_t1868551600_il2cpp_TypeInfo_var))->get_s_SkinMode_0();
		RuntimeObject * L_1 = GUIUtility_Internal_GetDefaultSkin_m995660429(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((GUISkin_t1244372282 *)IsInstSealed((RuntimeObject*)L_1, GUISkin_t1244372282_il2cpp_TypeInfo_var));
		goto IL_0016;
	}

IL_0016:
	{
		GUISkin_t1244372282 * L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.GUIUtility::ProcessEvent(System.Int32,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR bool GUIUtility_ProcessEvent_m3254259822 (RuntimeObject * __this /* static, unused */, int32_t ___instanceID0, intptr_t ___nativeEventPtr1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUIUtility_ProcessEvent_m3254259822_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Func_3_t4119323734 * L_0 = ((GUIUtility_t1868551600_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_t1868551600_il2cpp_TypeInfo_var))->get_processEvent_4();
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		Func_3_t4119323734 * L_1 = ((GUIUtility_t1868551600_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_t1868551600_il2cpp_TypeInfo_var))->get_processEvent_4();
		int32_t L_2 = ___instanceID0;
		intptr_t L_3 = ___nativeEventPtr1;
		NullCheck(L_1);
		bool L_4 = Func_3_Invoke_m4134091626(L_1, L_2, L_3, /*hidden argument*/Func_3_Invoke_m4134091626_RuntimeMethod_var);
		V_0 = L_4;
		goto IL_0024;
	}

IL_001d:
	{
		V_0 = (bool)0;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Void UnityEngine.GUIUtility::BeginGUI(System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void GUIUtility_BeginGUI_m1428629348 (RuntimeObject * __this /* static, unused */, int32_t ___skinMode0, int32_t ___instanceID1, int32_t ___useGUILayout2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUIUtility_BeginGUI_m1428629348_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___skinMode0;
		((GUIUtility_t1868551600_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_t1868551600_il2cpp_TypeInfo_var))->set_s_SkinMode_0(L_0);
		int32_t L_1 = ___instanceID1;
		((GUIUtility_t1868551600_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_t1868551600_il2cpp_TypeInfo_var))->set_s_OriginalID_1(L_1);
		GUIUtility_ResetGlobalState_m2426294461(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_2 = ___useGUILayout2;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_3 = ___instanceID1;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var);
		GUILayoutUtility_Begin_m1358735224(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void UnityEngine.GUIUtility::EndGUI(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void GUIUtility_EndGUI_m1799980929 (RuntimeObject * __this /* static, unused */, int32_t ___layoutType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUIUtility_EndGUI_m1799980929_MetadataUsageId);
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
			Event_t2956885303 * L_0 = Event_get_current_m2393892120(NULL /*static, unused*/, /*hidden argument*/NULL);
			NullCheck(L_0);
			int32_t L_1 = Event_get_type_m1370041809(L_0, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_1) == ((uint32_t)8))))
			{
				goto IL_0046;
			}
		}

IL_0012:
		{
			int32_t L_2 = ___layoutType0;
			if (!L_2)
			{
				goto IL_002c;
			}
		}

IL_0019:
		{
			int32_t L_3 = ___layoutType0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_0031;
			}
		}

IL_0020:
		{
			int32_t L_4 = ___layoutType0;
			if ((((int32_t)L_4) == ((int32_t)2)))
			{
				goto IL_003b;
			}
		}

IL_0027:
		{
			goto IL_0045;
		}

IL_002c:
		{
			goto IL_0045;
		}

IL_0031:
		{
			IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var);
			GUILayoutUtility_Layout_m1159951704(NULL /*static, unused*/, /*hidden argument*/NULL);
			goto IL_0045;
		}

IL_003b:
		{
			IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var);
			GUILayoutUtility_LayoutFromEditorWindow_m2914699782(NULL /*static, unused*/, /*hidden argument*/NULL);
			goto IL_0045;
		}

IL_0045:
		{
		}

IL_0046:
		{
			int32_t L_5 = ((GUIUtility_t1868551600_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_t1868551600_il2cpp_TypeInfo_var))->get_s_OriginalID_1();
			IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t66395690_il2cpp_TypeInfo_var);
			GUILayoutUtility_SelectIDList_m294753167(NULL /*static, unused*/, L_5, (bool)0, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(GUIContent_t3050628031_il2cpp_TypeInfo_var);
			GUIContent_ClearStaticCache_m1205116045(NULL /*static, unused*/, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x65, FINALLY_005d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005d;
	}

FINALLY_005d:
	{ // begin finally (depth: 1)
		GUIUtility_Internal_ExitGUI_m273923508(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(93)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(93)
	{
		IL2CPP_JUMP_TBL(0x65, IL_0065)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0065:
	{
		return;
	}
}
// System.Boolean UnityEngine.GUIUtility::EndGUIFromException(System.Exception)
extern "C" IL2CPP_METHOD_ATTR bool GUIUtility_EndGUIFromException_m3524906492 (RuntimeObject * __this /* static, unused */, Exception_t * ___exception0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		GUIUtility_Internal_ExitGUI_m273923508(NULL /*static, unused*/, /*hidden argument*/NULL);
		Exception_t * L_0 = ___exception0;
		bool L_1 = GUIUtility_ShouldRethrowException_m1544932394(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.GUIUtility::EndContainerGUIFromException(System.Exception)
extern "C" IL2CPP_METHOD_ATTR bool GUIUtility_EndContainerGUIFromException_m530164245 (RuntimeObject * __this /* static, unused */, Exception_t * ___exception0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUIUtility_EndContainerGUIFromException_m530164245_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Func_2_t3450341358 * L_0 = ((GUIUtility_t1868551600_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_t1868551600_il2cpp_TypeInfo_var))->get_endContainerGUIFromException_5();
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		Func_2_t3450341358 * L_1 = ((GUIUtility_t1868551600_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_t1868551600_il2cpp_TypeInfo_var))->get_endContainerGUIFromException_5();
		Exception_t * L_2 = ___exception0;
		NullCheck(L_1);
		bool L_3 = Func_2_Invoke_m2401667781(L_1, L_2, /*hidden argument*/Func_2_Invoke_m2401667781_RuntimeMethod_var);
		V_0 = L_3;
		goto IL_0023;
	}

IL_001c:
	{
		V_0 = (bool)0;
		goto IL_0023;
	}

IL_0023:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Void UnityEngine.GUIUtility::ResetGlobalState()
extern "C" IL2CPP_METHOD_ATTR void GUIUtility_ResetGlobalState_m2426294461 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUIUtility_ResetGlobalState_m2426294461_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		GUI_set_skin_m3073574632(NULL /*static, unused*/, (GUISkin_t1244372282 *)NULL, /*hidden argument*/NULL);
		GUIUtility_set_guiIsExiting_m1558910088(NULL /*static, unused*/, (bool)0, /*hidden argument*/NULL);
		GUI_set_changed_m535954674(NULL /*static, unused*/, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.GUIUtility::IsExitGUIException(System.Exception)
extern "C" IL2CPP_METHOD_ATTR bool GUIUtility_IsExitGUIException_m3644066650 (RuntimeObject * __this /* static, unused */, Exception_t * ___exception0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUIUtility_IsExitGUIException_m3644066650_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		goto IL_000e;
	}

IL_0006:
	{
		Exception_t * L_0 = ___exception0;
		NullCheck(L_0);
		Exception_t * L_1 = Exception_get_InnerException_m3836775(L_0, /*hidden argument*/NULL);
		___exception0 = L_1;
	}

IL_000e:
	{
		Exception_t * L_2 = ___exception0;
		if (!((TargetInvocationException_t4266643902 *)IsInstSealed((RuntimeObject*)L_2, TargetInvocationException_t4266643902_il2cpp_TypeInfo_var)))
		{
			goto IL_0024;
		}
	}
	{
		Exception_t * L_3 = ___exception0;
		NullCheck(L_3);
		Exception_t * L_4 = Exception_get_InnerException_m3836775(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0006;
		}
	}

IL_0024:
	{
		Exception_t * L_5 = ___exception0;
		V_0 = (bool)((!(((RuntimeObject*)(ExitGUIException_t133215258 *)((ExitGUIException_t133215258 *)IsInstSealed((RuntimeObject*)L_5, ExitGUIException_t133215258_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_0033;
	}

IL_0033:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Boolean UnityEngine.GUIUtility::ShouldRethrowException(System.Exception)
extern "C" IL2CPP_METHOD_ATTR bool GUIUtility_ShouldRethrowException_m1544932394 (RuntimeObject * __this /* static, unused */, Exception_t * ___exception0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Exception_t * L_0 = ___exception0;
		bool L_1 = GUIUtility_IsExitGUIException_m3644066650(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000d;
	}

IL_000d:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.GUIUtility::CheckOnGUI()
extern "C" IL2CPP_METHOD_ATTR void GUIUtility_CheckOnGUI_m3924092168 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUIUtility_CheckOnGUI_m3924092168_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = GUIUtility_get_guiDepth_m3282451554(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentException_t132251570 * L_1 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_1, _stringLiteral3544956457, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, GUIUtility_CheckOnGUI_m3924092168_RuntimeMethod_var);
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
// System.Void UnityEngine.ScrollViewState::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ScrollViewState__ctor_m1599613496 (ScrollViewState_t3797911395 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.SliderState::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SliderState__ctor_m3367986001 (SliderState_t2207048770 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.TextEditor::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TextEditor__ctor_m242049450 (TextEditor_t2759855366 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextEditor__ctor_m242049450_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_keyboardOnScreen_0((TouchScreenKeyboard_t731888065 *)NULL);
		__this->set_controlID_1(0);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t3956901511_il2cpp_TypeInfo_var);
		GUIStyle_t3956901511 * L_0 = GUIStyle_get_none_m1545577352(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_style_2(L_0);
		__this->set_multiline_3((bool)0);
		__this->set_hasHorizontalCursorPos_4((bool)0);
		__this->set_isPasswordField_5((bool)0);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_1 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_scrollOffset_6(L_1);
		GUIContent_t3050628031 * L_2 = (GUIContent_t3050628031 *)il2cpp_codegen_object_new(GUIContent_t3050628031_il2cpp_TypeInfo_var);
		GUIContent__ctor_m3360759894(L_2, /*hidden argument*/NULL);
		__this->set_m_Content_7(L_2);
		__this->set_m_CursorIndex_8(0);
		__this->set_m_SelectIndex_9(0);
		__this->set_m_RevealCursor_10((bool)0);
		__this->set_m_MouseDragSelectsWholeWords_11((bool)0);
		__this->set_m_DblClickInitPos_12(0);
		__this->set_m_DblClickSnap_13(0);
		__this->set_m_bJustSelected_14((bool)0);
		__this->set_m_iAltCursorPos_15((-1));
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
