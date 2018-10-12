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
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3>
struct GenericVirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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

// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.List`1<UnityEngine.AudioAmbisonicExtensionDefinition>
struct List_1_t1295534336;
// System.Collections.Generic.List`1<UnityEngine.AudioSourceExtension>
struct List_1_t242016280;
// System.Collections.Generic.List`1<UnityEngine.AudioSpatializerExtensionDefinition>
struct List_1_t2069970928;
// System.Delegate
struct Delegate_t1188392813;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.Reflection.Binder
struct Binder_t2999457153;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Single[]
struct SingleU5BU5D_t1444911251;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Void
struct Void_t1185182177;
// UnityEngine.AudioAmbisonicExtensionDefinition
struct AudioAmbisonicExtensionDefinition_t4118426890;
// UnityEngine.AudioAmbisonicExtensionDefinition[]
struct AudioAmbisonicExtensionDefinitionU5BU5D_t954184591;
// UnityEngine.AudioClip
struct AudioClip_t3680889665;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t1677636661;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t1059417452;
// UnityEngine.AudioExtensionDefinition
struct AudioExtensionDefinition_t3271167678;
// UnityEngine.AudioListener
struct AudioListener_t2734094699;
// UnityEngine.AudioListenerExtension
struct AudioListenerExtension_t3242956547;
// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
struct AudioConfigurationChangeHandler_t2089929874;
// UnityEngine.AudioSource
struct AudioSource_t3935305588;
// UnityEngine.AudioSourceExtension
struct AudioSourceExtension_t3064908834;
// UnityEngine.AudioSourceExtension[]
struct AudioSourceExtensionU5BU5D_t4125762839;
// UnityEngine.AudioSpatializerExtensionDefinition
struct AudioSpatializerExtensionDefinition_t597896186;
// UnityEngine.AudioSpatializerExtensionDefinition[]
struct AudioSpatializerExtensionDefinitionU5BU5D_t143577823;
// UnityEngine.Behaviour
struct Behaviour_t1437897464;
// UnityEngine.Experimental.Audio.AudioSampleProvider
struct AudioSampleProvider_t3950279772;
// UnityEngine.Experimental.Audio.AudioSampleProvider/ConsumeSampleFramesNativeFunction
struct ConsumeSampleFramesNativeFunction_t1497769677;
// UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler
struct SampleFramesHandler_t3208670351;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522;

extern RuntimeClass* AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var;
extern RuntimeClass* AudioListenerExtension_t3242956547_il2cpp_TypeInfo_var;
extern RuntimeClass* AudioListener_t2734094699_il2cpp_TypeInfo_var;
extern RuntimeClass* AudioSettings_t3587374600_il2cpp_TypeInfo_var;
extern RuntimeClass* AudioSourceExtension_t3064908834_il2cpp_TypeInfo_var;
extern RuntimeClass* Boolean_t97287965_il2cpp_TypeInfo_var;
extern RuntimeClass* GC_t959872083_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t1295534336_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t2069970928_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t242016280_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* StringU5BU5D_t1281789340_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt32_t2560061978_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3450517380;
extern String_t* _stringLiteral3452614530;
extern String_t* _stringLiteral4035105846;
extern const RuntimeMethod* Enumerator_Dispose_m3198901590_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m405442337_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m1000499844_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m2697843606_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m615903654_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m967136761_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m2957197106_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m1716448724_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m2295013814_RuntimeMethod_var;
extern const RuntimeMethod* List_1_RemoveAt_m2462508318_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m3866378638_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m4205755667_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m69557434_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m3844406869_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m1395253538_RuntimeMethod_var;
extern const RuntimeMethod* List_1_set_Item_m845928814_RuntimeMethod_var;
extern const uint32_t AudioClip__ctor_m1211547677_MetadataUsageId;
extern const uint32_t AudioConfigurationChangeHandler_BeginInvoke_m4104069447_MetadataUsageId;
extern const uint32_t AudioExtensionDefinition_GetExtensionType_m1450823952_MetadataUsageId;
extern const uint32_t AudioExtensionManager_AddAmbisonicDecoderExtension_m3197702864_MetadataUsageId;
extern const uint32_t AudioExtensionManager_AddExtensionToManager_m3475649283_MetadataUsageId;
extern const uint32_t AudioExtensionManager_AddSpatializerExtension_m3915849352_MetadataUsageId;
extern const uint32_t AudioExtensionManager_AddSpatializerExtension_m820561940_MetadataUsageId;
extern const uint32_t AudioExtensionManager_GetReadyToPlay_m1557263244_MetadataUsageId;
extern const uint32_t AudioExtensionManager_RegisterBuiltinDefinitions_m2742744104_MetadataUsageId;
extern const uint32_t AudioExtensionManager_RemoveExtensionFromManager_m442924172_MetadataUsageId;
extern const uint32_t AudioExtensionManager_Update_m3269307447_MetadataUsageId;
extern const uint32_t AudioExtensionManager_WriteExtensionProperties_m1988587615_MetadataUsageId;
extern const uint32_t AudioExtensionManager_WriteExtensionProperties_m3028464154_MetadataUsageId;
extern const uint32_t AudioExtensionManager__cctor_m1361600190_MetadataUsageId;
extern const uint32_t AudioListener_AddExtension_m994751216_MetadataUsageId;
extern const uint32_t AudioSampleProvider_Dispose_m1993565764_MetadataUsageId;
extern const uint32_t AudioSettings_InvokeOnAudioConfigurationChanged_m3131294153_MetadataUsageId;
extern const uint32_t AudioSettings_InvokeOnAudioManagerUpdate_m4044425648_MetadataUsageId;
extern const uint32_t AudioSettings_InvokeOnAudioSourcePlay_m3298744573_MetadataUsageId;
extern const uint32_t AudioSourceExtension_OnDestroy_m345467428_MetadataUsageId;
extern const uint32_t AudioSource_AddAmbisonicExtension_m304476911_MetadataUsageId;
extern const uint32_t AudioSource_AddSpatializerExtension_m2560794359_MetadataUsageId;
extern const uint32_t ConsumeSampleFramesNativeFunction_BeginInvoke_m342678987_MetadataUsageId;
extern const uint32_t PCMSetPositionCallback_BeginInvoke_m2701134198_MetadataUsageId;
extern const uint32_t SampleFramesHandler_BeginInvoke_m2992664336_MetadataUsageId;

struct DelegateU5BU5D_t1703627840;
struct SingleU5BU5D_t1444911251;
struct StringU5BU5D_t1281789340;


#ifndef U3CMODULEU3E_T692745534_H
#define U3CMODULEU3E_T692745534_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745534 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745534_H
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
#ifndef LIST_1_T1295534336_H
#define LIST_1_T1295534336_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.AudioAmbisonicExtensionDefinition>
struct  List_1_t1295534336  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	AudioAmbisonicExtensionDefinitionU5BU5D_t954184591* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1295534336, ____items_1)); }
	inline AudioAmbisonicExtensionDefinitionU5BU5D_t954184591* get__items_1() const { return ____items_1; }
	inline AudioAmbisonicExtensionDefinitionU5BU5D_t954184591** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(AudioAmbisonicExtensionDefinitionU5BU5D_t954184591* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1295534336, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1295534336, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1295534336, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t1295534336_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	AudioAmbisonicExtensionDefinitionU5BU5D_t954184591* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1295534336_StaticFields, ____emptyArray_5)); }
	inline AudioAmbisonicExtensionDefinitionU5BU5D_t954184591* get__emptyArray_5() const { return ____emptyArray_5; }
	inline AudioAmbisonicExtensionDefinitionU5BU5D_t954184591** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(AudioAmbisonicExtensionDefinitionU5BU5D_t954184591* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1295534336_H
#ifndef LIST_1_T242016280_H
#define LIST_1_T242016280_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.AudioSourceExtension>
struct  List_1_t242016280  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	AudioSourceExtensionU5BU5D_t4125762839* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t242016280, ____items_1)); }
	inline AudioSourceExtensionU5BU5D_t4125762839* get__items_1() const { return ____items_1; }
	inline AudioSourceExtensionU5BU5D_t4125762839** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(AudioSourceExtensionU5BU5D_t4125762839* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t242016280, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t242016280, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t242016280, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t242016280_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	AudioSourceExtensionU5BU5D_t4125762839* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t242016280_StaticFields, ____emptyArray_5)); }
	inline AudioSourceExtensionU5BU5D_t4125762839* get__emptyArray_5() const { return ____emptyArray_5; }
	inline AudioSourceExtensionU5BU5D_t4125762839** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(AudioSourceExtensionU5BU5D_t4125762839* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T242016280_H
#ifndef LIST_1_T2069970928_H
#define LIST_1_T2069970928_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.AudioSpatializerExtensionDefinition>
struct  List_1_t2069970928  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	AudioSpatializerExtensionDefinitionU5BU5D_t143577823* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2069970928, ____items_1)); }
	inline AudioSpatializerExtensionDefinitionU5BU5D_t143577823* get__items_1() const { return ____items_1; }
	inline AudioSpatializerExtensionDefinitionU5BU5D_t143577823** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(AudioSpatializerExtensionDefinitionU5BU5D_t143577823* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2069970928, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2069970928, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t2069970928, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t2069970928_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	AudioSpatializerExtensionDefinitionU5BU5D_t143577823* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t2069970928_StaticFields, ____emptyArray_5)); }
	inline AudioSpatializerExtensionDefinitionU5BU5D_t143577823* get__emptyArray_5() const { return ____emptyArray_5; }
	inline AudioSpatializerExtensionDefinitionU5BU5D_t143577823** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(AudioSpatializerExtensionDefinitionU5BU5D_t143577823* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2069970928_H
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
#ifndef AUDIOEXTENSIONDEFINITION_T3271167678_H
#define AUDIOEXTENSIONDEFINITION_T3271167678_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioExtensionDefinition
struct  AudioExtensionDefinition_t3271167678  : public RuntimeObject
{
public:
	// System.String UnityEngine.AudioExtensionDefinition::assemblyName
	String_t* ___assemblyName_0;
	// System.String UnityEngine.AudioExtensionDefinition::extensionNamespace
	String_t* ___extensionNamespace_1;
	// System.String UnityEngine.AudioExtensionDefinition::extensionTypeName
	String_t* ___extensionTypeName_2;
	// System.Type UnityEngine.AudioExtensionDefinition::extensionType
	Type_t * ___extensionType_3;

public:
	inline static int32_t get_offset_of_assemblyName_0() { return static_cast<int32_t>(offsetof(AudioExtensionDefinition_t3271167678, ___assemblyName_0)); }
	inline String_t* get_assemblyName_0() const { return ___assemblyName_0; }
	inline String_t** get_address_of_assemblyName_0() { return &___assemblyName_0; }
	inline void set_assemblyName_0(String_t* value)
	{
		___assemblyName_0 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_0), value);
	}

	inline static int32_t get_offset_of_extensionNamespace_1() { return static_cast<int32_t>(offsetof(AudioExtensionDefinition_t3271167678, ___extensionNamespace_1)); }
	inline String_t* get_extensionNamespace_1() const { return ___extensionNamespace_1; }
	inline String_t** get_address_of_extensionNamespace_1() { return &___extensionNamespace_1; }
	inline void set_extensionNamespace_1(String_t* value)
	{
		___extensionNamespace_1 = value;
		Il2CppCodeGenWriteBarrier((&___extensionNamespace_1), value);
	}

	inline static int32_t get_offset_of_extensionTypeName_2() { return static_cast<int32_t>(offsetof(AudioExtensionDefinition_t3271167678, ___extensionTypeName_2)); }
	inline String_t* get_extensionTypeName_2() const { return ___extensionTypeName_2; }
	inline String_t** get_address_of_extensionTypeName_2() { return &___extensionTypeName_2; }
	inline void set_extensionTypeName_2(String_t* value)
	{
		___extensionTypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___extensionTypeName_2), value);
	}

	inline static int32_t get_offset_of_extensionType_3() { return static_cast<int32_t>(offsetof(AudioExtensionDefinition_t3271167678, ___extensionType_3)); }
	inline Type_t * get_extensionType_3() const { return ___extensionType_3; }
	inline Type_t ** get_address_of_extensionType_3() { return &___extensionType_3; }
	inline void set_extensionType_3(Type_t * value)
	{
		___extensionType_3 = value;
		Il2CppCodeGenWriteBarrier((&___extensionType_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOEXTENSIONDEFINITION_T3271167678_H
#ifndef AUDIOSETTINGS_T3587374600_H
#define AUDIOSETTINGS_T3587374600_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSettings
struct  AudioSettings_t3587374600  : public RuntimeObject
{
public:

public:
};

struct AudioSettings_t3587374600_StaticFields
{
public:
	// UnityEngine.AudioSettings/AudioConfigurationChangeHandler UnityEngine.AudioSettings::OnAudioConfigurationChanged
	AudioConfigurationChangeHandler_t2089929874 * ___OnAudioConfigurationChanged_0;

public:
	inline static int32_t get_offset_of_OnAudioConfigurationChanged_0() { return static_cast<int32_t>(offsetof(AudioSettings_t3587374600_StaticFields, ___OnAudioConfigurationChanged_0)); }
	inline AudioConfigurationChangeHandler_t2089929874 * get_OnAudioConfigurationChanged_0() const { return ___OnAudioConfigurationChanged_0; }
	inline AudioConfigurationChangeHandler_t2089929874 ** get_address_of_OnAudioConfigurationChanged_0() { return &___OnAudioConfigurationChanged_0; }
	inline void set_OnAudioConfigurationChanged_0(AudioConfigurationChangeHandler_t2089929874 * value)
	{
		___OnAudioConfigurationChanged_0 = value;
		Il2CppCodeGenWriteBarrier((&___OnAudioConfigurationChanged_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSETTINGS_T3587374600_H
#ifndef AUDIOSAMPLEPROVIDER_T3950279772_H
#define AUDIOSAMPLEPROVIDER_T3950279772_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Audio.AudioSampleProvider
struct  AudioSampleProvider_t3950279772  : public RuntimeObject
{
public:
	// UnityEngine.Experimental.Audio.AudioSampleProvider/ConsumeSampleFramesNativeFunction UnityEngine.Experimental.Audio.AudioSampleProvider::m_ConsumeSampleFramesNativeFunction
	ConsumeSampleFramesNativeFunction_t1497769677 * ___m_ConsumeSampleFramesNativeFunction_0;
	// System.UInt32 UnityEngine.Experimental.Audio.AudioSampleProvider::<id>k__BackingField
	uint32_t ___U3CidU3Ek__BackingField_1;
	// System.UInt16 UnityEngine.Experimental.Audio.AudioSampleProvider::<trackIndex>k__BackingField
	uint16_t ___U3CtrackIndexU3Ek__BackingField_2;
	// UnityEngine.Object UnityEngine.Experimental.Audio.AudioSampleProvider::<owner>k__BackingField
	Object_t631007953 * ___U3CownerU3Ek__BackingField_3;
	// System.UInt16 UnityEngine.Experimental.Audio.AudioSampleProvider::<channelCount>k__BackingField
	uint16_t ___U3CchannelCountU3Ek__BackingField_4;
	// System.UInt32 UnityEngine.Experimental.Audio.AudioSampleProvider::<sampleRate>k__BackingField
	uint32_t ___U3CsampleRateU3Ek__BackingField_5;
	// UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler UnityEngine.Experimental.Audio.AudioSampleProvider::sampleFramesAvailable
	SampleFramesHandler_t3208670351 * ___sampleFramesAvailable_6;
	// UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler UnityEngine.Experimental.Audio.AudioSampleProvider::sampleFramesOverflow
	SampleFramesHandler_t3208670351 * ___sampleFramesOverflow_7;

public:
	inline static int32_t get_offset_of_m_ConsumeSampleFramesNativeFunction_0() { return static_cast<int32_t>(offsetof(AudioSampleProvider_t3950279772, ___m_ConsumeSampleFramesNativeFunction_0)); }
	inline ConsumeSampleFramesNativeFunction_t1497769677 * get_m_ConsumeSampleFramesNativeFunction_0() const { return ___m_ConsumeSampleFramesNativeFunction_0; }
	inline ConsumeSampleFramesNativeFunction_t1497769677 ** get_address_of_m_ConsumeSampleFramesNativeFunction_0() { return &___m_ConsumeSampleFramesNativeFunction_0; }
	inline void set_m_ConsumeSampleFramesNativeFunction_0(ConsumeSampleFramesNativeFunction_t1497769677 * value)
	{
		___m_ConsumeSampleFramesNativeFunction_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ConsumeSampleFramesNativeFunction_0), value);
	}

	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AudioSampleProvider_t3950279772, ___U3CidU3Ek__BackingField_1)); }
	inline uint32_t get_U3CidU3Ek__BackingField_1() const { return ___U3CidU3Ek__BackingField_1; }
	inline uint32_t* get_address_of_U3CidU3Ek__BackingField_1() { return &___U3CidU3Ek__BackingField_1; }
	inline void set_U3CidU3Ek__BackingField_1(uint32_t value)
	{
		___U3CidU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CtrackIndexU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AudioSampleProvider_t3950279772, ___U3CtrackIndexU3Ek__BackingField_2)); }
	inline uint16_t get_U3CtrackIndexU3Ek__BackingField_2() const { return ___U3CtrackIndexU3Ek__BackingField_2; }
	inline uint16_t* get_address_of_U3CtrackIndexU3Ek__BackingField_2() { return &___U3CtrackIndexU3Ek__BackingField_2; }
	inline void set_U3CtrackIndexU3Ek__BackingField_2(uint16_t value)
	{
		___U3CtrackIndexU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CownerU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AudioSampleProvider_t3950279772, ___U3CownerU3Ek__BackingField_3)); }
	inline Object_t631007953 * get_U3CownerU3Ek__BackingField_3() const { return ___U3CownerU3Ek__BackingField_3; }
	inline Object_t631007953 ** get_address_of_U3CownerU3Ek__BackingField_3() { return &___U3CownerU3Ek__BackingField_3; }
	inline void set_U3CownerU3Ek__BackingField_3(Object_t631007953 * value)
	{
		___U3CownerU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CownerU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CchannelCountU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(AudioSampleProvider_t3950279772, ___U3CchannelCountU3Ek__BackingField_4)); }
	inline uint16_t get_U3CchannelCountU3Ek__BackingField_4() const { return ___U3CchannelCountU3Ek__BackingField_4; }
	inline uint16_t* get_address_of_U3CchannelCountU3Ek__BackingField_4() { return &___U3CchannelCountU3Ek__BackingField_4; }
	inline void set_U3CchannelCountU3Ek__BackingField_4(uint16_t value)
	{
		___U3CchannelCountU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CsampleRateU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(AudioSampleProvider_t3950279772, ___U3CsampleRateU3Ek__BackingField_5)); }
	inline uint32_t get_U3CsampleRateU3Ek__BackingField_5() const { return ___U3CsampleRateU3Ek__BackingField_5; }
	inline uint32_t* get_address_of_U3CsampleRateU3Ek__BackingField_5() { return &___U3CsampleRateU3Ek__BackingField_5; }
	inline void set_U3CsampleRateU3Ek__BackingField_5(uint32_t value)
	{
		___U3CsampleRateU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_sampleFramesAvailable_6() { return static_cast<int32_t>(offsetof(AudioSampleProvider_t3950279772, ___sampleFramesAvailable_6)); }
	inline SampleFramesHandler_t3208670351 * get_sampleFramesAvailable_6() const { return ___sampleFramesAvailable_6; }
	inline SampleFramesHandler_t3208670351 ** get_address_of_sampleFramesAvailable_6() { return &___sampleFramesAvailable_6; }
	inline void set_sampleFramesAvailable_6(SampleFramesHandler_t3208670351 * value)
	{
		___sampleFramesAvailable_6 = value;
		Il2CppCodeGenWriteBarrier((&___sampleFramesAvailable_6), value);
	}

	inline static int32_t get_offset_of_sampleFramesOverflow_7() { return static_cast<int32_t>(offsetof(AudioSampleProvider_t3950279772, ___sampleFramesOverflow_7)); }
	inline SampleFramesHandler_t3208670351 * get_sampleFramesOverflow_7() const { return ___sampleFramesOverflow_7; }
	inline SampleFramesHandler_t3208670351 ** get_address_of_sampleFramesOverflow_7() { return &___sampleFramesOverflow_7; }
	inline void set_sampleFramesOverflow_7(SampleFramesHandler_t3208670351 * value)
	{
		___sampleFramesOverflow_7 = value;
		Il2CppCodeGenWriteBarrier((&___sampleFramesOverflow_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSAMPLEPROVIDER_T3950279772_H
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
#ifndef ENUMERATOR_T3184778213_H
#define ENUMERATOR_T3184778213_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<UnityEngine.AudioAmbisonicExtensionDefinition>
struct  Enumerator_t3184778213 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t1295534336 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	AudioAmbisonicExtensionDefinition_t4118426890 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t3184778213, ___list_0)); }
	inline List_1_t1295534336 * get_list_0() const { return ___list_0; }
	inline List_1_t1295534336 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t1295534336 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t3184778213, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t3184778213, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3184778213, ___current_3)); }
	inline AudioAmbisonicExtensionDefinition_t4118426890 * get_current_3() const { return ___current_3; }
	inline AudioAmbisonicExtensionDefinition_t4118426890 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(AudioAmbisonicExtensionDefinition_t4118426890 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3184778213_H
#ifndef ENUMERATOR_T3959214805_H
#define ENUMERATOR_T3959214805_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<UnityEngine.AudioSpatializerExtensionDefinition>
struct  Enumerator_t3959214805 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t2069970928 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	AudioSpatializerExtensionDefinition_t597896186 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t3959214805, ___list_0)); }
	inline List_1_t2069970928 * get_list_0() const { return ___list_0; }
	inline List_1_t2069970928 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t2069970928 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t3959214805, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t3959214805, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3959214805, ___current_3)); }
	inline AudioSpatializerExtensionDefinition_t597896186 * get_current_3() const { return ___current_3; }
	inline AudioSpatializerExtensionDefinition_t597896186 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(AudioSpatializerExtensionDefinition_t597896186 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3959214805_H
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
#ifndef PROPERTYNAME_T3749835189_H
#define PROPERTYNAME_T3749835189_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PropertyName
struct  PropertyName_t3749835189 
{
public:
	// System.Int32 UnityEngine.PropertyName::id
	int32_t ___id_0;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(PropertyName_t3749835189, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYNAME_T3749835189_H
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
#ifndef AUDIOAMBISONICEXTENSIONDEFINITION_T4118426890_H
#define AUDIOAMBISONICEXTENSIONDEFINITION_T4118426890_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioAmbisonicExtensionDefinition
struct  AudioAmbisonicExtensionDefinition_t4118426890  : public RuntimeObject
{
public:
	// UnityEngine.PropertyName UnityEngine.AudioAmbisonicExtensionDefinition::ambisonicPluginName
	PropertyName_t3749835189  ___ambisonicPluginName_0;
	// UnityEngine.AudioExtensionDefinition UnityEngine.AudioAmbisonicExtensionDefinition::definition
	AudioExtensionDefinition_t3271167678 * ___definition_1;

public:
	inline static int32_t get_offset_of_ambisonicPluginName_0() { return static_cast<int32_t>(offsetof(AudioAmbisonicExtensionDefinition_t4118426890, ___ambisonicPluginName_0)); }
	inline PropertyName_t3749835189  get_ambisonicPluginName_0() const { return ___ambisonicPluginName_0; }
	inline PropertyName_t3749835189 * get_address_of_ambisonicPluginName_0() { return &___ambisonicPluginName_0; }
	inline void set_ambisonicPluginName_0(PropertyName_t3749835189  value)
	{
		___ambisonicPluginName_0 = value;
	}

	inline static int32_t get_offset_of_definition_1() { return static_cast<int32_t>(offsetof(AudioAmbisonicExtensionDefinition_t4118426890, ___definition_1)); }
	inline AudioExtensionDefinition_t3271167678 * get_definition_1() const { return ___definition_1; }
	inline AudioExtensionDefinition_t3271167678 ** get_address_of_definition_1() { return &___definition_1; }
	inline void set_definition_1(AudioExtensionDefinition_t3271167678 * value)
	{
		___definition_1 = value;
		Il2CppCodeGenWriteBarrier((&___definition_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOAMBISONICEXTENSIONDEFINITION_T4118426890_H
#ifndef AUDIOEXTENSIONMANAGER_T3220897493_H
#define AUDIOEXTENSIONMANAGER_T3220897493_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioExtensionManager
struct  AudioExtensionManager_t3220897493  : public RuntimeObject
{
public:

public:
};

struct AudioExtensionManager_t3220897493_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.AudioSpatializerExtensionDefinition> UnityEngine.AudioExtensionManager::m_ListenerSpatializerExtensionDefinitions
	List_1_t2069970928 * ___m_ListenerSpatializerExtensionDefinitions_0;
	// System.Collections.Generic.List`1<UnityEngine.AudioSpatializerExtensionDefinition> UnityEngine.AudioExtensionManager::m_SourceSpatializerExtensionDefinitions
	List_1_t2069970928 * ___m_SourceSpatializerExtensionDefinitions_1;
	// System.Collections.Generic.List`1<UnityEngine.AudioAmbisonicExtensionDefinition> UnityEngine.AudioExtensionManager::m_SourceAmbisonicDecoderExtensionDefinitions
	List_1_t1295534336 * ___m_SourceAmbisonicDecoderExtensionDefinitions_2;
	// System.Collections.Generic.List`1<UnityEngine.AudioSourceExtension> UnityEngine.AudioExtensionManager::m_SourceExtensionsToUpdate
	List_1_t242016280 * ___m_SourceExtensionsToUpdate_3;
	// System.Int32 UnityEngine.AudioExtensionManager::m_NextStopIndex
	int32_t ___m_NextStopIndex_4;
	// System.Boolean UnityEngine.AudioExtensionManager::m_BuiltinDefinitionsRegistered
	bool ___m_BuiltinDefinitionsRegistered_5;
	// UnityEngine.PropertyName UnityEngine.AudioExtensionManager::m_SpatializerName
	PropertyName_t3749835189  ___m_SpatializerName_6;
	// UnityEngine.PropertyName UnityEngine.AudioExtensionManager::m_SpatializerExtensionName
	PropertyName_t3749835189  ___m_SpatializerExtensionName_7;
	// UnityEngine.PropertyName UnityEngine.AudioExtensionManager::m_ListenerSpatializerExtensionName
	PropertyName_t3749835189  ___m_ListenerSpatializerExtensionName_8;

public:
	inline static int32_t get_offset_of_m_ListenerSpatializerExtensionDefinitions_0() { return static_cast<int32_t>(offsetof(AudioExtensionManager_t3220897493_StaticFields, ___m_ListenerSpatializerExtensionDefinitions_0)); }
	inline List_1_t2069970928 * get_m_ListenerSpatializerExtensionDefinitions_0() const { return ___m_ListenerSpatializerExtensionDefinitions_0; }
	inline List_1_t2069970928 ** get_address_of_m_ListenerSpatializerExtensionDefinitions_0() { return &___m_ListenerSpatializerExtensionDefinitions_0; }
	inline void set_m_ListenerSpatializerExtensionDefinitions_0(List_1_t2069970928 * value)
	{
		___m_ListenerSpatializerExtensionDefinitions_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ListenerSpatializerExtensionDefinitions_0), value);
	}

	inline static int32_t get_offset_of_m_SourceSpatializerExtensionDefinitions_1() { return static_cast<int32_t>(offsetof(AudioExtensionManager_t3220897493_StaticFields, ___m_SourceSpatializerExtensionDefinitions_1)); }
	inline List_1_t2069970928 * get_m_SourceSpatializerExtensionDefinitions_1() const { return ___m_SourceSpatializerExtensionDefinitions_1; }
	inline List_1_t2069970928 ** get_address_of_m_SourceSpatializerExtensionDefinitions_1() { return &___m_SourceSpatializerExtensionDefinitions_1; }
	inline void set_m_SourceSpatializerExtensionDefinitions_1(List_1_t2069970928 * value)
	{
		___m_SourceSpatializerExtensionDefinitions_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceSpatializerExtensionDefinitions_1), value);
	}

	inline static int32_t get_offset_of_m_SourceAmbisonicDecoderExtensionDefinitions_2() { return static_cast<int32_t>(offsetof(AudioExtensionManager_t3220897493_StaticFields, ___m_SourceAmbisonicDecoderExtensionDefinitions_2)); }
	inline List_1_t1295534336 * get_m_SourceAmbisonicDecoderExtensionDefinitions_2() const { return ___m_SourceAmbisonicDecoderExtensionDefinitions_2; }
	inline List_1_t1295534336 ** get_address_of_m_SourceAmbisonicDecoderExtensionDefinitions_2() { return &___m_SourceAmbisonicDecoderExtensionDefinitions_2; }
	inline void set_m_SourceAmbisonicDecoderExtensionDefinitions_2(List_1_t1295534336 * value)
	{
		___m_SourceAmbisonicDecoderExtensionDefinitions_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceAmbisonicDecoderExtensionDefinitions_2), value);
	}

	inline static int32_t get_offset_of_m_SourceExtensionsToUpdate_3() { return static_cast<int32_t>(offsetof(AudioExtensionManager_t3220897493_StaticFields, ___m_SourceExtensionsToUpdate_3)); }
	inline List_1_t242016280 * get_m_SourceExtensionsToUpdate_3() const { return ___m_SourceExtensionsToUpdate_3; }
	inline List_1_t242016280 ** get_address_of_m_SourceExtensionsToUpdate_3() { return &___m_SourceExtensionsToUpdate_3; }
	inline void set_m_SourceExtensionsToUpdate_3(List_1_t242016280 * value)
	{
		___m_SourceExtensionsToUpdate_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceExtensionsToUpdate_3), value);
	}

	inline static int32_t get_offset_of_m_NextStopIndex_4() { return static_cast<int32_t>(offsetof(AudioExtensionManager_t3220897493_StaticFields, ___m_NextStopIndex_4)); }
	inline int32_t get_m_NextStopIndex_4() const { return ___m_NextStopIndex_4; }
	inline int32_t* get_address_of_m_NextStopIndex_4() { return &___m_NextStopIndex_4; }
	inline void set_m_NextStopIndex_4(int32_t value)
	{
		___m_NextStopIndex_4 = value;
	}

	inline static int32_t get_offset_of_m_BuiltinDefinitionsRegistered_5() { return static_cast<int32_t>(offsetof(AudioExtensionManager_t3220897493_StaticFields, ___m_BuiltinDefinitionsRegistered_5)); }
	inline bool get_m_BuiltinDefinitionsRegistered_5() const { return ___m_BuiltinDefinitionsRegistered_5; }
	inline bool* get_address_of_m_BuiltinDefinitionsRegistered_5() { return &___m_BuiltinDefinitionsRegistered_5; }
	inline void set_m_BuiltinDefinitionsRegistered_5(bool value)
	{
		___m_BuiltinDefinitionsRegistered_5 = value;
	}

	inline static int32_t get_offset_of_m_SpatializerName_6() { return static_cast<int32_t>(offsetof(AudioExtensionManager_t3220897493_StaticFields, ___m_SpatializerName_6)); }
	inline PropertyName_t3749835189  get_m_SpatializerName_6() const { return ___m_SpatializerName_6; }
	inline PropertyName_t3749835189 * get_address_of_m_SpatializerName_6() { return &___m_SpatializerName_6; }
	inline void set_m_SpatializerName_6(PropertyName_t3749835189  value)
	{
		___m_SpatializerName_6 = value;
	}

	inline static int32_t get_offset_of_m_SpatializerExtensionName_7() { return static_cast<int32_t>(offsetof(AudioExtensionManager_t3220897493_StaticFields, ___m_SpatializerExtensionName_7)); }
	inline PropertyName_t3749835189  get_m_SpatializerExtensionName_7() const { return ___m_SpatializerExtensionName_7; }
	inline PropertyName_t3749835189 * get_address_of_m_SpatializerExtensionName_7() { return &___m_SpatializerExtensionName_7; }
	inline void set_m_SpatializerExtensionName_7(PropertyName_t3749835189  value)
	{
		___m_SpatializerExtensionName_7 = value;
	}

	inline static int32_t get_offset_of_m_ListenerSpatializerExtensionName_8() { return static_cast<int32_t>(offsetof(AudioExtensionManager_t3220897493_StaticFields, ___m_ListenerSpatializerExtensionName_8)); }
	inline PropertyName_t3749835189  get_m_ListenerSpatializerExtensionName_8() const { return ___m_ListenerSpatializerExtensionName_8; }
	inline PropertyName_t3749835189 * get_address_of_m_ListenerSpatializerExtensionName_8() { return &___m_ListenerSpatializerExtensionName_8; }
	inline void set_m_ListenerSpatializerExtensionName_8(PropertyName_t3749835189  value)
	{
		___m_ListenerSpatializerExtensionName_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOEXTENSIONMANAGER_T3220897493_H
#ifndef AUDIOSPATIALIZEREXTENSIONDEFINITION_T597896186_H
#define AUDIOSPATIALIZEREXTENSIONDEFINITION_T597896186_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSpatializerExtensionDefinition
struct  AudioSpatializerExtensionDefinition_t597896186  : public RuntimeObject
{
public:
	// UnityEngine.PropertyName UnityEngine.AudioSpatializerExtensionDefinition::spatializerName
	PropertyName_t3749835189  ___spatializerName_0;
	// UnityEngine.AudioExtensionDefinition UnityEngine.AudioSpatializerExtensionDefinition::definition
	AudioExtensionDefinition_t3271167678 * ___definition_1;

public:
	inline static int32_t get_offset_of_spatializerName_0() { return static_cast<int32_t>(offsetof(AudioSpatializerExtensionDefinition_t597896186, ___spatializerName_0)); }
	inline PropertyName_t3749835189  get_spatializerName_0() const { return ___spatializerName_0; }
	inline PropertyName_t3749835189 * get_address_of_spatializerName_0() { return &___spatializerName_0; }
	inline void set_spatializerName_0(PropertyName_t3749835189  value)
	{
		___spatializerName_0 = value;
	}

	inline static int32_t get_offset_of_definition_1() { return static_cast<int32_t>(offsetof(AudioSpatializerExtensionDefinition_t597896186, ___definition_1)); }
	inline AudioExtensionDefinition_t3271167678 * get_definition_1() const { return ___definition_1; }
	inline AudioExtensionDefinition_t3271167678 ** get_address_of_definition_1() { return &___definition_1; }
	inline void set_definition_1(AudioExtensionDefinition_t3271167678 * value)
	{
		___definition_1 = value;
		Il2CppCodeGenWriteBarrier((&___definition_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSPATIALIZEREXTENSIONDEFINITION_T597896186_H
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
#ifndef PLAYABLEHANDLE_T1095853803_H
#define PLAYABLEHANDLE_T1095853803_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableHandle
struct  PlayableHandle_t1095853803 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableHandle::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableHandle_t1095853803, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableHandle_t1095853803, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEHANDLE_T1095853803_H
#ifndef PLAYABLEOUTPUTHANDLE_T4208053793_H
#define PLAYABLEOUTPUTHANDLE_T4208053793_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableOutputHandle
struct  PlayableOutputHandle_t4208053793 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableOutputHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableOutputHandle::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t4208053793, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t4208053793, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEOUTPUTHANDLE_T4208053793_H
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
#ifndef AUDIOCLIPPLAYABLE_T785069022_H
#define AUDIOCLIPPLAYABLE_T785069022_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Audio.AudioClipPlayable
struct  AudioClipPlayable_t785069022 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioClipPlayable::m_Handle
	PlayableHandle_t1095853803  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AudioClipPlayable_t785069022, ___m_Handle_0)); }
	inline PlayableHandle_t1095853803  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t1095853803 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t1095853803  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCLIPPLAYABLE_T785069022_H
#ifndef AUDIOMIXERPLAYABLE_T3520548497_H
#define AUDIOMIXERPLAYABLE_T3520548497_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Audio.AudioMixerPlayable
struct  AudioMixerPlayable_t3520548497 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioMixerPlayable::m_Handle
	PlayableHandle_t1095853803  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AudioMixerPlayable_t3520548497, ___m_Handle_0)); }
	inline PlayableHandle_t1095853803  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t1095853803 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t1095853803  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOMIXERPLAYABLE_T3520548497_H
#ifndef AUDIOPLAYABLEOUTPUT_T2664391219_H
#define AUDIOPLAYABLEOUTPUT_T2664391219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Audio.AudioPlayableOutput
struct  AudioPlayableOutput_t2664391219 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Audio.AudioPlayableOutput::m_Handle
	PlayableOutputHandle_t4208053793  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AudioPlayableOutput_t2664391219, ___m_Handle_0)); }
	inline PlayableOutputHandle_t4208053793  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t4208053793 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t4208053793  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOPLAYABLEOUTPUT_T2664391219_H
#ifndef AUDIOCLIP_T3680889665_H
#define AUDIOCLIP_T3680889665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip
struct  AudioClip_t3680889665  : public Object_t631007953
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t1677636661 * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t1059417452 * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t3680889665, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t1677636661 * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t1677636661 ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t1677636661 * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMReaderCallback_4), value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t3680889665, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_t1059417452 * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_t1059417452 ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_t1059417452 * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMSetPositionCallback_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCLIP_T3680889665_H
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
#ifndef PCMREADERCALLBACK_T1677636661_H
#define PCMREADERCALLBACK_T1677636661_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip/PCMReaderCallback
struct  PCMReaderCallback_t1677636661  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PCMREADERCALLBACK_T1677636661_H
#ifndef PCMSETPOSITIONCALLBACK_T1059417452_H
#define PCMSETPOSITIONCALLBACK_T1059417452_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip/PCMSetPositionCallback
struct  PCMSetPositionCallback_t1059417452  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PCMSETPOSITIONCALLBACK_T1059417452_H
#ifndef AUDIOLISTENEREXTENSION_T3242956547_H
#define AUDIOLISTENEREXTENSION_T3242956547_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioListenerExtension
struct  AudioListenerExtension_t3242956547  : public ScriptableObject_t2528358522
{
public:
	// UnityEngine.AudioListener UnityEngine.AudioListenerExtension::m_audioListener
	AudioListener_t2734094699 * ___m_audioListener_4;

public:
	inline static int32_t get_offset_of_m_audioListener_4() { return static_cast<int32_t>(offsetof(AudioListenerExtension_t3242956547, ___m_audioListener_4)); }
	inline AudioListener_t2734094699 * get_m_audioListener_4() const { return ___m_audioListener_4; }
	inline AudioListener_t2734094699 ** get_address_of_m_audioListener_4() { return &___m_audioListener_4; }
	inline void set_m_audioListener_4(AudioListener_t2734094699 * value)
	{
		___m_audioListener_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_audioListener_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOLISTENEREXTENSION_T3242956547_H
#ifndef AUDIOCONFIGURATIONCHANGEHANDLER_T2089929874_H
#define AUDIOCONFIGURATIONCHANGEHANDLER_T2089929874_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
struct  AudioConfigurationChangeHandler_t2089929874  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCONFIGURATIONCHANGEHANDLER_T2089929874_H
#ifndef AUDIOSOURCEEXTENSION_T3064908834_H
#define AUDIOSOURCEEXTENSION_T3064908834_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSourceExtension
struct  AudioSourceExtension_t3064908834  : public ScriptableObject_t2528358522
{
public:
	// UnityEngine.AudioSource UnityEngine.AudioSourceExtension::m_audioSource
	AudioSource_t3935305588 * ___m_audioSource_4;
	// System.Int32 UnityEngine.AudioSourceExtension::m_ExtensionManagerUpdateIndex
	int32_t ___m_ExtensionManagerUpdateIndex_5;

public:
	inline static int32_t get_offset_of_m_audioSource_4() { return static_cast<int32_t>(offsetof(AudioSourceExtension_t3064908834, ___m_audioSource_4)); }
	inline AudioSource_t3935305588 * get_m_audioSource_4() const { return ___m_audioSource_4; }
	inline AudioSource_t3935305588 ** get_address_of_m_audioSource_4() { return &___m_audioSource_4; }
	inline void set_m_audioSource_4(AudioSource_t3935305588 * value)
	{
		___m_audioSource_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_audioSource_4), value);
	}

	inline static int32_t get_offset_of_m_ExtensionManagerUpdateIndex_5() { return static_cast<int32_t>(offsetof(AudioSourceExtension_t3064908834, ___m_ExtensionManagerUpdateIndex_5)); }
	inline int32_t get_m_ExtensionManagerUpdateIndex_5() const { return ___m_ExtensionManagerUpdateIndex_5; }
	inline int32_t* get_address_of_m_ExtensionManagerUpdateIndex_5() { return &___m_ExtensionManagerUpdateIndex_5; }
	inline void set_m_ExtensionManagerUpdateIndex_5(int32_t value)
	{
		___m_ExtensionManagerUpdateIndex_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSOURCEEXTENSION_T3064908834_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef CONSUMESAMPLEFRAMESNATIVEFUNCTION_T1497769677_H
#define CONSUMESAMPLEFRAMESNATIVEFUNCTION_T1497769677_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Audio.AudioSampleProvider/ConsumeSampleFramesNativeFunction
struct  ConsumeSampleFramesNativeFunction_t1497769677  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSUMESAMPLEFRAMESNATIVEFUNCTION_T1497769677_H
#ifndef SAMPLEFRAMESHANDLER_T3208670351_H
#define SAMPLEFRAMESHANDLER_T3208670351_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler
struct  SampleFramesHandler_t3208670351  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAMPLEFRAMESHANDLER_T3208670351_H
#ifndef AUDIOBEHAVIOUR_T2879336574_H
#define AUDIOBEHAVIOUR_T2879336574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioBehaviour
struct  AudioBehaviour_t2879336574  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOBEHAVIOUR_T2879336574_H
#ifndef AUDIOLISTENER_T2734094699_H
#define AUDIOLISTENER_T2734094699_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioListener
struct  AudioListener_t2734094699  : public AudioBehaviour_t2879336574
{
public:
	// UnityEngine.AudioListenerExtension UnityEngine.AudioListener::spatializerExtension
	AudioListenerExtension_t3242956547 * ___spatializerExtension_4;

public:
	inline static int32_t get_offset_of_spatializerExtension_4() { return static_cast<int32_t>(offsetof(AudioListener_t2734094699, ___spatializerExtension_4)); }
	inline AudioListenerExtension_t3242956547 * get_spatializerExtension_4() const { return ___spatializerExtension_4; }
	inline AudioListenerExtension_t3242956547 ** get_address_of_spatializerExtension_4() { return &___spatializerExtension_4; }
	inline void set_spatializerExtension_4(AudioListenerExtension_t3242956547 * value)
	{
		___spatializerExtension_4 = value;
		Il2CppCodeGenWriteBarrier((&___spatializerExtension_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOLISTENER_T2734094699_H
#ifndef AUDIOSOURCE_T3935305588_H
#define AUDIOSOURCE_T3935305588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSource
struct  AudioSource_t3935305588  : public AudioBehaviour_t2879336574
{
public:
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::spatializerExtension
	AudioSourceExtension_t3064908834 * ___spatializerExtension_4;
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::ambisonicExtension
	AudioSourceExtension_t3064908834 * ___ambisonicExtension_5;

public:
	inline static int32_t get_offset_of_spatializerExtension_4() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___spatializerExtension_4)); }
	inline AudioSourceExtension_t3064908834 * get_spatializerExtension_4() const { return ___spatializerExtension_4; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_spatializerExtension_4() { return &___spatializerExtension_4; }
	inline void set_spatializerExtension_4(AudioSourceExtension_t3064908834 * value)
	{
		___spatializerExtension_4 = value;
		Il2CppCodeGenWriteBarrier((&___spatializerExtension_4), value);
	}

	inline static int32_t get_offset_of_ambisonicExtension_5() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___ambisonicExtension_5)); }
	inline AudioSourceExtension_t3064908834 * get_ambisonicExtension_5() const { return ___ambisonicExtension_5; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_ambisonicExtension_5() { return &___ambisonicExtension_5; }
	inline void set_ambisonicExtension_5(AudioSourceExtension_t3064908834 * value)
	{
		___ambisonicExtension_5 = value;
		Il2CppCodeGenWriteBarrier((&___ambisonicExtension_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSOURCE_T3935305588_H
// System.Single[]
struct SingleU5BU5D_t1444911251  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
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
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t2146457487  List_1_GetEnumerator_m816315209_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m337713592_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m3007748546_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m1328026504_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_set_Item_m550276520_gshared (List_1_t257213610 * __this, int32_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void List_1_RemoveAt_m2730968292_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);

// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioClipPlayable::GetHandle()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t1095853803  AudioClipPlayable_GetHandle_m1762771314 (AudioClipPlayable_t785069022 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::op_Equality(UnityEngine.Playables.PlayableHandle,UnityEngine.Playables.PlayableHandle)
extern "C" IL2CPP_METHOD_ATTR bool PlayableHandle_op_Equality_m3344837515 (RuntimeObject * __this /* static, unused */, PlayableHandle_t1095853803  p0, PlayableHandle_t1095853803  p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Audio.AudioClipPlayable::Equals(UnityEngine.Audio.AudioClipPlayable)
extern "C" IL2CPP_METHOD_ATTR bool AudioClipPlayable_Equals_m3705880618 (AudioClipPlayable_t785069022 * __this, AudioClipPlayable_t785069022  ___other0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioMixerPlayable::GetHandle()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t1095853803  AudioMixerPlayable_GetHandle_m57919556 (AudioMixerPlayable_t3520548497 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Audio.AudioMixerPlayable::Equals(UnityEngine.Audio.AudioMixerPlayable)
extern "C" IL2CPP_METHOD_ATTR bool AudioMixerPlayable_Equals_m1649866213 (AudioMixerPlayable_t3520548497 * __this, AudioMixerPlayable_t3520548497  ___other0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m1087895580 (Object_t631007953 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[])
extern "C" IL2CPP_METHOD_ATTR void PCMReaderCallback_Invoke_m2948796957 (PCMReaderCallback_t1677636661 * __this, SingleU5BU5D_t1444911251* ___data0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::Invoke(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void PCMSetPositionCallback_Invoke_m2167694991 (PCMSetPositionCallback_t1059417452 * __this, int32_t ___position0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m1809518182 (RuntimeObject * __this /* static, unused */, StringU5BU5D_t1281789340* p0, const RuntimeMethod* method);
// System.Type System.Type::GetType(System.String)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetType_m1693760368 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.AudioSource::get_spatialize()
extern "C" IL2CPP_METHOD_ATTR bool AudioSource_get_spatialize_m3609701298 (AudioSource_t3935305588 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.AudioExtensionManager::RegisterBuiltinDefinitions()
extern "C" IL2CPP_METHOD_ATTR void AudioExtensionManager_RegisterBuiltinDefinitions_m2742744104 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.AudioSpatializerExtensionDefinition>::GetEnumerator()
inline Enumerator_t3959214805  List_1_GetEnumerator_m1716448724 (List_1_t2069970928 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t3959214805  (*) (List_1_t2069970928 *, const RuntimeMethod*))List_1_GetEnumerator_m816315209_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.AudioSpatializerExtensionDefinition>::get_Current()
inline AudioSpatializerExtensionDefinition_t597896186 * Enumerator_get_Current_m615903654 (Enumerator_t3959214805 * __this, const RuntimeMethod* method)
{
	return ((  AudioSpatializerExtensionDefinition_t597896186 * (*) (Enumerator_t3959214805 *, const RuntimeMethod*))Enumerator_get_Current_m337713592_gshared)(__this, method);
}
// System.String UnityEngine.AudioSettings::GetSpatializerPluginName()
extern "C" IL2CPP_METHOD_ATTR String_t* AudioSettings_GetSpatializerPluginName_m1324100978 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.PropertyName UnityEngine.PropertyName::op_Implicit(System.String)
extern "C" IL2CPP_METHOD_ATTR PropertyName_t3749835189  PropertyName_op_Implicit_m1633828199 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.PropertyName::op_Equality(UnityEngine.PropertyName,UnityEngine.PropertyName)
extern "C" IL2CPP_METHOD_ATTR bool PropertyName_op_Equality_m2761233272 (RuntimeObject * __this /* static, unused */, PropertyName_t3749835189  p0, PropertyName_t3749835189  p1, const RuntimeMethod* method);
// System.Type UnityEngine.AudioExtensionDefinition::GetExtensionType()
extern "C" IL2CPP_METHOD_ATTR Type_t * AudioExtensionDefinition_GetExtensionType_m1450823952 (AudioExtensionDefinition_t3271167678 * __this, const RuntimeMethod* method);
// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::AddSpatializerExtension(System.Type)
extern "C" IL2CPP_METHOD_ATTR AudioSourceExtension_t3064908834 * AudioSource_AddSpatializerExtension_m2560794359 (AudioSource_t3935305588 * __this, Type_t * ___extensionType0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSourceExtension::set_audioSource(UnityEngine.AudioSource)
extern "C" IL2CPP_METHOD_ATTR void AudioSourceExtension_set_audioSource_m3729768988 (AudioSourceExtension_t3064908834 * __this, AudioSource_t3935305588 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioExtensionManager::WriteExtensionProperties(UnityEngine.AudioSourceExtension,System.String)
extern "C" IL2CPP_METHOD_ATTR void AudioExtensionManager_WriteExtensionProperties_m1988587615 (RuntimeObject * __this /* static, unused */, AudioSourceExtension_t3064908834 * ___extension0, String_t* ___extensionName1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.AudioSpatializerExtensionDefinition>::MoveNext()
inline bool Enumerator_MoveNext_m2697843606 (Enumerator_t3959214805 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3959214805 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.AudioSpatializerExtensionDefinition>::Dispose()
inline void Enumerator_Dispose_m3198901590 (Enumerator_t3959214805 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3959214805 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.AudioAmbisonicExtensionDefinition>::GetEnumerator()
inline Enumerator_t3184778213  List_1_GetEnumerator_m2295013814 (List_1_t1295534336 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t3184778213  (*) (List_1_t1295534336 *, const RuntimeMethod*))List_1_GetEnumerator_m816315209_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.AudioAmbisonicExtensionDefinition>::get_Current()
inline AudioAmbisonicExtensionDefinition_t4118426890 * Enumerator_get_Current_m967136761 (Enumerator_t3184778213 * __this, const RuntimeMethod* method)
{
	return ((  AudioAmbisonicExtensionDefinition_t4118426890 * (*) (Enumerator_t3184778213 *, const RuntimeMethod*))Enumerator_get_Current_m337713592_gshared)(__this, method);
}
// System.String UnityEngine.AudioSettings::GetAmbisonicDecoderPluginName()
extern "C" IL2CPP_METHOD_ATTR String_t* AudioSettings_GetAmbisonicDecoderPluginName_m19603540 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::AddAmbisonicExtension(System.Type)
extern "C" IL2CPP_METHOD_ATTR AudioSourceExtension_t3064908834 * AudioSource_AddAmbisonicExtension_m304476911 (AudioSource_t3935305588 * __this, Type_t * ___extensionType0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.AudioAmbisonicExtensionDefinition>::MoveNext()
inline bool Enumerator_MoveNext_m1000499844 (Enumerator_t3184778213 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3184778213 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.AudioAmbisonicExtensionDefinition>::Dispose()
inline void Enumerator_Dispose_m405442337 (Enumerator_t3184778213 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3184778213 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method);
}
// UnityEngine.PropertyName UnityEngine.PropertyName::op_Implicit(System.Int32)
extern "C" IL2CPP_METHOD_ATTR PropertyName_t3749835189  PropertyName_op_Implicit_m114733813 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// UnityEngine.AudioSource UnityEngine.AudioSourceExtension::get_audioSource()
extern "C" IL2CPP_METHOD_ATTR AudioSource_t3935305588 * AudioSourceExtension_get_audioSource_m1465006871 (AudioSourceExtension_t3064908834 * __this, const RuntimeMethod* method);
// UnityEngine.PropertyName UnityEngine.AudioSource::ReadExtensionName(System.Int32)
extern "C" IL2CPP_METHOD_ATTR PropertyName_t3749835189  AudioSource_ReadExtensionName_m725112169 (AudioSource_t3935305588 * __this, int32_t ___sourceIndex0, const RuntimeMethod* method);
// UnityEngine.PropertyName UnityEngine.AudioSource::ReadExtensionPropertyName(System.Int32)
extern "C" IL2CPP_METHOD_ATTR PropertyName_t3749835189  AudioSource_ReadExtensionPropertyName_m2761820692 (AudioSource_t3935305588 * __this, int32_t ___sourceIndex0, const RuntimeMethod* method);
// System.Single UnityEngine.AudioSource::ReadExtensionPropertyValue(System.Int32)
extern "C" IL2CPP_METHOD_ATTR float AudioSource_ReadExtensionPropertyValue_m72717540 (AudioSource_t3935305588 * __this, int32_t ___sourceIndex0, const RuntimeMethod* method);
// System.Int32 UnityEngine.AudioSource::GetNumExtensionProperties()
extern "C" IL2CPP_METHOD_ATTR int32_t AudioSource_GetNumExtensionProperties_m1231815209 (AudioSource_t3935305588 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::ClearExtensionProperties(UnityEngine.PropertyName)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_ClearExtensionProperties_m2116074582 (AudioSource_t3935305588 * __this, PropertyName_t3749835189  ___extensionName0, const RuntimeMethod* method);
// UnityEngine.AudioListenerExtension UnityEngine.AudioListener::AddExtension(System.Type)
extern "C" IL2CPP_METHOD_ATTR AudioListenerExtension_t3242956547 * AudioListener_AddExtension_m994751216 (AudioListener_t2734094699 * __this, Type_t * ___extensionType0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioListenerExtension::set_audioListener(UnityEngine.AudioListener)
extern "C" IL2CPP_METHOD_ATTR void AudioListenerExtension_set_audioListener_m3412289012 (AudioListenerExtension_t3242956547 * __this, AudioListener_t2734094699 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioExtensionManager::WriteExtensionProperties(UnityEngine.AudioListenerExtension,System.String)
extern "C" IL2CPP_METHOD_ATTR void AudioExtensionManager_WriteExtensionProperties_m3028464154 (RuntimeObject * __this /* static, unused */, AudioListenerExtension_t3242956547 * ___extension0, String_t* ___extensionName1, const RuntimeMethod* method);
// UnityEngine.AudioListener UnityEngine.AudioListenerExtension::get_audioListener()
extern "C" IL2CPP_METHOD_ATTR AudioListener_t2734094699 * AudioListenerExtension_get_audioListener_m3597041395 (AudioListenerExtension_t3242956547 * __this, const RuntimeMethod* method);
// UnityEngine.PropertyName UnityEngine.AudioListener::ReadExtensionName(System.Int32)
extern "C" IL2CPP_METHOD_ATTR PropertyName_t3749835189  AudioListener_ReadExtensionName_m929423100 (AudioListener_t2734094699 * __this, int32_t ___listenerIndex0, const RuntimeMethod* method);
// UnityEngine.PropertyName UnityEngine.AudioListener::ReadExtensionPropertyName(System.Int32)
extern "C" IL2CPP_METHOD_ATTR PropertyName_t3749835189  AudioListener_ReadExtensionPropertyName_m3416271339 (AudioListener_t2734094699 * __this, int32_t ___listenerIndex0, const RuntimeMethod* method);
// System.Single UnityEngine.AudioListener::ReadExtensionPropertyValue(System.Int32)
extern "C" IL2CPP_METHOD_ATTR float AudioListener_ReadExtensionPropertyValue_m2443832840 (AudioListener_t2734094699 * __this, int32_t ___listenerIndex0, const RuntimeMethod* method);
// System.Int32 UnityEngine.AudioListener::GetNumExtensionProperties()
extern "C" IL2CPP_METHOD_ATTR int32_t AudioListener_GetNumExtensionProperties_m3139224773 (AudioListener_t2734094699 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioListener::ClearExtensionProperties(UnityEngine.PropertyName)
extern "C" IL2CPP_METHOD_ATTR void AudioListener_ClearExtensionProperties_m3849891634 (AudioListener_t2734094699 * __this, PropertyName_t3749835189  ___extensionName0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.AudioSourceExtension>::Add(!0)
inline void List_1_Add_m2957197106 (List_1_t242016280 * __this, AudioSourceExtension_t3064908834 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t242016280 *, AudioSourceExtension_t3064908834 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.AudioSourceExtension>::get_Count()
inline int32_t List_1_get_Count_m3844406869 (List_1_t242016280 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t242016280 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.AudioSourceExtension>::get_Item(System.Int32)
inline AudioSourceExtension_t3064908834 * List_1_get_Item_m1395253538 (List_1_t242016280 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  AudioSourceExtension_t3064908834 * (*) (List_1_t242016280 *, int32_t, const RuntimeMethod*))List_1_get_Item_m1328026504_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.AudioSourceExtension>::set_Item(System.Int32,!0)
inline void List_1_set_Item_m845928814 (List_1_t242016280 * __this, int32_t p0, AudioSourceExtension_t3064908834 * p1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t242016280 *, int32_t, AudioSourceExtension_t3064908834 *, const RuntimeMethod*))List_1_set_Item_m550276520_gshared)(__this, p0, p1, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.AudioSourceExtension>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m2462508318 (List_1_t242016280 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t242016280 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m2730968292_gshared)(__this, p0, method);
}
// UnityEngine.Object UnityEngine.AudioExtensionManager::GetAudioListener()
extern "C" IL2CPP_METHOD_ATTR Object_t631007953 * AudioExtensionManager_GetAudioListener_m817760607 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.AudioListenerExtension UnityEngine.AudioExtensionManager::AddSpatializerExtension(UnityEngine.AudioListener)
extern "C" IL2CPP_METHOD_ATTR AudioListenerExtension_t3242956547 * AudioExtensionManager_AddSpatializerExtension_m3915849352 (RuntimeObject * __this /* static, unused */, AudioListener_t2734094699 * ___listener0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Behaviour::get_enabled()
extern "C" IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_m753527255 (Behaviour_t1437897464 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
extern "C" IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_m1896551654 (AudioSource_t3935305588 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioExtensionManager::RemoveExtensionFromManager(UnityEngine.AudioSourceExtension)
extern "C" IL2CPP_METHOD_ATTR void AudioExtensionManager_RemoveExtensionFromManager_m442924172 (RuntimeObject * __this /* static, unused */, AudioSourceExtension_t3064908834 * ___extension0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioExtensionManager::AddExtensionToManager(UnityEngine.AudioSourceExtension)
extern "C" IL2CPP_METHOD_ATTR void AudioExtensionManager_AddExtensionToManager_m3475649283 (RuntimeObject * __this /* static, unused */, AudioSourceExtension_t3064908834 * ___extension0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.AudioSpatializerExtensionDefinition>::.ctor()
inline void List_1__ctor_m3866378638 (List_1_t2069970928 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2069970928 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.AudioAmbisonicExtensionDefinition>::.ctor()
inline void List_1__ctor_m4205755667 (List_1_t1295534336 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1295534336 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.AudioSourceExtension>::.ctor()
inline void List_1__ctor_m69557434 (List_1_t242016280 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t242016280 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void UnityEngine.AudioListener::INTERNAL_CALL_ReadExtensionName(UnityEngine.AudioListener,System.Int32,UnityEngine.PropertyName&)
extern "C" IL2CPP_METHOD_ATTR void AudioListener_INTERNAL_CALL_ReadExtensionName_m4145804327 (RuntimeObject * __this /* static, unused */, AudioListener_t2734094699 * ___self0, int32_t ___listenerIndex1, PropertyName_t3749835189 * ___value2, const RuntimeMethod* method);
// System.Void UnityEngine.AudioListener::INTERNAL_CALL_ReadExtensionPropertyName(UnityEngine.AudioListener,System.Int32,UnityEngine.PropertyName&)
extern "C" IL2CPP_METHOD_ATTR void AudioListener_INTERNAL_CALL_ReadExtensionPropertyName_m330480156 (RuntimeObject * __this /* static, unused */, AudioListener_t2734094699 * ___self0, int32_t ___listenerIndex1, PropertyName_t3749835189 * ___value2, const RuntimeMethod* method);
// System.Void UnityEngine.AudioListener::INTERNAL_CALL_ClearExtensionProperties(UnityEngine.AudioListener,UnityEngine.PropertyName&)
extern "C" IL2CPP_METHOD_ATTR void AudioListener_INTERNAL_CALL_ClearExtensionProperties_m2036387607 (RuntimeObject * __this /* static, unused */, AudioListener_t2734094699 * ___self0, PropertyName_t3749835189 * ___extensionName1, const RuntimeMethod* method);
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.Type)
extern "C" IL2CPP_METHOD_ATTR ScriptableObject_t2528358522 * ScriptableObject_CreateInstance_m2611081756 (RuntimeObject * __this /* static, unused */, Type_t * p0, const RuntimeMethod* method);
// System.Void UnityEngine.ScriptableObject::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m1310743131 (ScriptableObject_t2528358522 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::Invoke(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void AudioConfigurationChangeHandler_Invoke_m1233557945 (AudioConfigurationChangeHandler_t2089929874 * __this, bool ___deviceWasChanged0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioExtensionManager::Update()
extern "C" IL2CPP_METHOD_ATTR void AudioExtensionManager_Update_m3269307447 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.AudioSourceExtension UnityEngine.AudioExtensionManager::AddSpatializerExtension(UnityEngine.AudioSource)
extern "C" IL2CPP_METHOD_ATTR AudioSourceExtension_t3064908834 * AudioExtensionManager_AddSpatializerExtension_m820561940 (RuntimeObject * __this /* static, unused */, AudioSource_t3935305588 * ___source0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioExtensionManager::GetReadyToPlay(UnityEngine.AudioSourceExtension)
extern "C" IL2CPP_METHOD_ATTR void AudioExtensionManager_GetReadyToPlay_m1557263244 (RuntimeObject * __this /* static, unused */, AudioSourceExtension_t3064908834 * ___extension0, const RuntimeMethod* method);
// UnityEngine.AudioClip UnityEngine.AudioSource::get_clip()
extern "C" IL2CPP_METHOD_ATTR AudioClip_t3680889665 * AudioSource_get_clip_m1234340632 (AudioSource_t3935305588 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.AudioClip::get_ambisonic()
extern "C" IL2CPP_METHOD_ATTR bool AudioClip_get_ambisonic_m3815052287 (AudioClip_t3680889665 * __this, const RuntimeMethod* method);
// UnityEngine.AudioSourceExtension UnityEngine.AudioExtensionManager::AddAmbisonicDecoderExtension(UnityEngine.AudioSource)
extern "C" IL2CPP_METHOD_ATTR AudioSourceExtension_t3064908834 * AudioExtensionManager_AddAmbisonicDecoderExtension_m3197702864 (RuntimeObject * __this /* static, unused */, AudioSource_t3935305588 * ___source0, const RuntimeMethod* method);
// System.Boolean UnityEngine.AudioSource::get_spatializeInternal()
extern "C" IL2CPP_METHOD_ATTR bool AudioSource_get_spatializeInternal_m2117549793 (AudioSource_t3935305588 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::INTERNAL_CALL_ReadExtensionName(UnityEngine.AudioSource,System.Int32,UnityEngine.PropertyName&)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_INTERNAL_CALL_ReadExtensionName_m36001502 (RuntimeObject * __this /* static, unused */, AudioSource_t3935305588 * ___self0, int32_t ___sourceIndex1, PropertyName_t3749835189 * ___value2, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::INTERNAL_CALL_ReadExtensionPropertyName(UnityEngine.AudioSource,System.Int32,UnityEngine.PropertyName&)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_INTERNAL_CALL_ReadExtensionPropertyName_m3643462071 (RuntimeObject * __this /* static, unused */, AudioSource_t3935305588 * ___self0, int32_t ___sourceIndex1, PropertyName_t3749835189 * ___value2, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::INTERNAL_CALL_ClearExtensionProperties(UnityEngine.AudioSource,UnityEngine.PropertyName&)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_INTERNAL_CALL_ClearExtensionProperties_m2159298662 (RuntimeObject * __this /* static, unused */, AudioSource_t3935305588 * ___self0, PropertyName_t3749835189 * ___extensionName1, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::Dispose()
extern "C" IL2CPP_METHOD_ATTR void AudioSampleProvider_Dispose_m1993565764 (AudioSampleProvider_t3950279772 * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
extern "C" IL2CPP_METHOD_ATTR void Object_Finalize_m3076187857 (RuntimeObject * __this, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Experimental.Audio.AudioSampleProvider::get_id()
extern "C" IL2CPP_METHOD_ATTR uint32_t AudioSampleProvider_get_id_m2692334523 (AudioSampleProvider_t3950279772 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::InternalSetScriptingPtr(System.UInt32,UnityEngine.Experimental.Audio.AudioSampleProvider)
extern "C" IL2CPP_METHOD_ATTR void AudioSampleProvider_InternalSetScriptingPtr_m3742743270 (RuntimeObject * __this /* static, unused */, uint32_t ___providerId0, AudioSampleProvider_t3950279772 * ___provider1, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::set_id(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void AudioSampleProvider_set_id_m4177090282 (AudioSampleProvider_t3950279772 * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
extern "C" IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m1177400158 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::Invoke(UnityEngine.Experimental.Audio.AudioSampleProvider,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void SampleFramesHandler_Invoke_m544261268 (SampleFramesHandler_t3208670351 * __this, AudioSampleProvider_t3950279772 * ___provider0, uint32_t ___sampleFrameCount1, const RuntimeMethod* method);
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
// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioClipPlayable::GetHandle()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t1095853803  AudioClipPlayable_GetHandle_m1762771314 (AudioClipPlayable_t785069022 * __this, const RuntimeMethod* method)
{
	PlayableHandle_t1095853803  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		PlayableHandle_t1095853803  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		PlayableHandle_t1095853803  L_1 = V_0;
		return L_1;
	}
}
extern "C"  PlayableHandle_t1095853803  AudioClipPlayable_GetHandle_m1762771314_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AudioClipPlayable_t785069022 * _thisAdjusted = reinterpret_cast<AudioClipPlayable_t785069022 *>(__this + 1);
	return AudioClipPlayable_GetHandle_m1762771314(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Audio.AudioClipPlayable::Equals(UnityEngine.Audio.AudioClipPlayable)
extern "C" IL2CPP_METHOD_ATTR bool AudioClipPlayable_Equals_m3705880618 (AudioClipPlayable_t785069022 * __this, AudioClipPlayable_t785069022  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		PlayableHandle_t1095853803  L_0 = AudioClipPlayable_GetHandle_m1762771314((AudioClipPlayable_t785069022 *)__this, /*hidden argument*/NULL);
		PlayableHandle_t1095853803  L_1 = AudioClipPlayable_GetHandle_m1762771314((AudioClipPlayable_t785069022 *)(&___other0), /*hidden argument*/NULL);
		bool L_2 = PlayableHandle_op_Equality_m3344837515(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0019;
	}

IL_0019:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
extern "C"  bool AudioClipPlayable_Equals_m3705880618_AdjustorThunk (RuntimeObject * __this, AudioClipPlayable_t785069022  ___other0, const RuntimeMethod* method)
{
	AudioClipPlayable_t785069022 * _thisAdjusted = reinterpret_cast<AudioClipPlayable_t785069022 *>(__this + 1);
	return AudioClipPlayable_Equals_m3705880618(_thisAdjusted, ___other0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioMixerPlayable::GetHandle()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t1095853803  AudioMixerPlayable_GetHandle_m57919556 (AudioMixerPlayable_t3520548497 * __this, const RuntimeMethod* method)
{
	PlayableHandle_t1095853803  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		PlayableHandle_t1095853803  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		PlayableHandle_t1095853803  L_1 = V_0;
		return L_1;
	}
}
extern "C"  PlayableHandle_t1095853803  AudioMixerPlayable_GetHandle_m57919556_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AudioMixerPlayable_t3520548497 * _thisAdjusted = reinterpret_cast<AudioMixerPlayable_t3520548497 *>(__this + 1);
	return AudioMixerPlayable_GetHandle_m57919556(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Audio.AudioMixerPlayable::Equals(UnityEngine.Audio.AudioMixerPlayable)
extern "C" IL2CPP_METHOD_ATTR bool AudioMixerPlayable_Equals_m1649866213 (AudioMixerPlayable_t3520548497 * __this, AudioMixerPlayable_t3520548497  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		PlayableHandle_t1095853803  L_0 = AudioMixerPlayable_GetHandle_m57919556((AudioMixerPlayable_t3520548497 *)__this, /*hidden argument*/NULL);
		PlayableHandle_t1095853803  L_1 = AudioMixerPlayable_GetHandle_m57919556((AudioMixerPlayable_t3520548497 *)(&___other0), /*hidden argument*/NULL);
		bool L_2 = PlayableHandle_op_Equality_m3344837515(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0019;
	}

IL_0019:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
extern "C"  bool AudioMixerPlayable_Equals_m1649866213_AdjustorThunk (RuntimeObject * __this, AudioMixerPlayable_t3520548497  ___other0, const RuntimeMethod* method)
{
	AudioMixerPlayable_t3520548497 * _thisAdjusted = reinterpret_cast<AudioMixerPlayable_t3520548497 *>(__this + 1);
	return AudioMixerPlayable_Equals_m1649866213(_thisAdjusted, ___other0, method);
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
// System.Void UnityEngine.AudioClip::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AudioClip__ctor_m1211547677 (AudioClip_t3680889665 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioClip__ctor_m1211547677_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_PCMReaderCallback_4((PCMReaderCallback_t1677636661 *)NULL);
		__this->set_m_PCMSetPositionCallback_5((PCMSetPositionCallback_t1059417452 *)NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object__ctor_m1087895580(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.AudioClip::get_ambisonic()
extern "C" IL2CPP_METHOD_ATTR bool AudioClip_get_ambisonic_m3815052287 (AudioClip_t3680889665 * __this, const RuntimeMethod* method)
{
	typedef bool (*AudioClip_get_ambisonic_m3815052287_ftn) (AudioClip_t3680889665 *);
	static AudioClip_get_ambisonic_m3815052287_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_get_ambisonic_m3815052287_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_ambisonic()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AudioClip::InvokePCMReaderCallback_Internal(System.Single[])
extern "C" IL2CPP_METHOD_ATTR void AudioClip_InvokePCMReaderCallback_Internal_m224395634 (AudioClip_t3680889665 * __this, SingleU5BU5D_t1444911251* ___data0, const RuntimeMethod* method)
{
	{
		PCMReaderCallback_t1677636661 * L_0 = __this->get_m_PCMReaderCallback_4();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		PCMReaderCallback_t1677636661 * L_1 = __this->get_m_PCMReaderCallback_4();
		SingleU5BU5D_t1444911251* L_2 = ___data0;
		NullCheck(L_1);
		PCMReaderCallback_Invoke_m2948796957(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void UnityEngine.AudioClip::InvokePCMSetPositionCallback_Internal(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void AudioClip_InvokePCMSetPositionCallback_Internal_m3097960898 (AudioClip_t3680889665 * __this, int32_t ___position0, const RuntimeMethod* method)
{
	{
		PCMSetPositionCallback_t1059417452 * L_0 = __this->get_m_PCMSetPositionCallback_5();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		PCMSetPositionCallback_t1059417452 * L_1 = __this->get_m_PCMSetPositionCallback_5();
		int32_t L_2 = ___position0;
		NullCheck(L_1);
		PCMSetPositionCallback_Invoke_m2167694991(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0018:
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
extern "C"  void DelegatePInvokeWrapper_PCMReaderCallback_t1677636661 (PCMReaderCallback_t1677636661 * __this, SingleU5BU5D_t1444911251* ___data0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(float*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___data0' to native representation
	float* ____data0_marshaled = NULL;
	if (___data0 != NULL)
	{
		____data0_marshaled = reinterpret_cast<float*>((___data0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(____data0_marshaled);

}
// System.Void UnityEngine.AudioClip/PCMReaderCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void PCMReaderCallback__ctor_m4269754975 (PCMReaderCallback_t1677636661 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[])
extern "C" IL2CPP_METHOD_ATTR void PCMReaderCallback_Invoke_m2948796957 (PCMReaderCallback_t1677636661 * __this, SingleU5BU5D_t1444911251* ___data0, const RuntimeMethod* method)
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
						typedef void (*FunctionPointerType) (RuntimeObject *, SingleU5BU5D_t1444911251*, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___data0, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, SingleU5BU5D_t1444911251*, const RuntimeMethod*);
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
								GenericInterfaceActionInvoker1< SingleU5BU5D_t1444911251* >::Invoke(targetMethod, targetThis, ___data0);
							else
								GenericVirtActionInvoker1< SingleU5BU5D_t1444911251* >::Invoke(targetMethod, targetThis, ___data0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< SingleU5BU5D_t1444911251* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___data0);
							else
								VirtActionInvoker1< SingleU5BU5D_t1444911251* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___data0);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, SingleU5BU5D_t1444911251*, const RuntimeMethod*);
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
						typedef void (*FunctionPointerType) (SingleU5BU5D_t1444911251*, const RuntimeMethod*);
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
					typedef void (*FunctionPointerType) (RuntimeObject *, SingleU5BU5D_t1444911251*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___data0, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, SingleU5BU5D_t1444911251*, const RuntimeMethod*);
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
							GenericInterfaceActionInvoker1< SingleU5BU5D_t1444911251* >::Invoke(targetMethod, targetThis, ___data0);
						else
							GenericVirtActionInvoker1< SingleU5BU5D_t1444911251* >::Invoke(targetMethod, targetThis, ___data0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< SingleU5BU5D_t1444911251* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___data0);
						else
							VirtActionInvoker1< SingleU5BU5D_t1444911251* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___data0);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, SingleU5BU5D_t1444911251*, const RuntimeMethod*);
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
					typedef void (*FunctionPointerType) (SingleU5BU5D_t1444911251*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___data0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.AudioClip/PCMReaderCallback::BeginInvoke(System.Single[],System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* PCMReaderCallback_BeginInvoke_m3391809637 (PCMReaderCallback_t1677636661 * __this, SingleU5BU5D_t1444911251* ___data0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___data0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.AudioClip/PCMReaderCallback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void PCMReaderCallback_EndInvoke_m3916876196 (PCMReaderCallback_t1677636661 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
extern "C"  void DelegatePInvokeWrapper_PCMSetPositionCallback_t1059417452 (PCMSetPositionCallback_t1059417452 * __this, int32_t ___position0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___position0);

}
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void PCMSetPositionCallback__ctor_m2909837933 (PCMSetPositionCallback_t1059417452 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::Invoke(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void PCMSetPositionCallback_Invoke_m2167694991 (PCMSetPositionCallback_t1059417452 * __this, int32_t ___position0, const RuntimeMethod* method)
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
						((FunctionPointerType)targetMethodPointer)(NULL, ___position0, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___position0, targetMethod);
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
								GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___position0);
							else
								GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___position0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___position0);
							else
								VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___position0);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___position0, targetMethod);
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
					((FunctionPointerType)targetMethodPointer)(NULL, ___position0, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___position0, targetMethod);
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
							GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___position0);
						else
							GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___position0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___position0);
						else
							VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___position0);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___position0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.AudioClip/PCMSetPositionCallback::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* PCMSetPositionCallback_BeginInvoke_m2701134198 (PCMSetPositionCallback_t1059417452 * __this, int32_t ___position0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PCMSetPositionCallback_BeginInvoke_m2701134198_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___position0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void PCMSetPositionCallback_EndInvoke_m1405765992 (PCMSetPositionCallback_t1059417452 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Type UnityEngine.AudioExtensionDefinition::GetExtensionType()
extern "C" IL2CPP_METHOD_ATTR Type_t * AudioExtensionDefinition_GetExtensionType_m1450823952 (AudioExtensionDefinition_t3271167678 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioExtensionDefinition_GetExtensionType_m1450823952_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	{
		Type_t * L_0 = __this->get_extensionType_3();
		if (L_0)
		{
			goto IL_004d;
		}
	}
	{
		StringU5BU5D_t1281789340* L_1 = (StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t1281789340* L_2 = L_1;
		String_t* L_3 = __this->get_extensionNamespace_1();
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_3);
		StringU5BU5D_t1281789340* L_4 = L_2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral3452614530);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral3452614530);
		StringU5BU5D_t1281789340* L_5 = L_4;
		String_t* L_6 = __this->get_extensionTypeName_2();
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_6);
		StringU5BU5D_t1281789340* L_7 = L_5;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral3450517380);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral3450517380);
		StringU5BU5D_t1281789340* L_8 = L_7;
		String_t* L_9 = __this->get_assemblyName_0();
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_9);
		String_t* L_10 = String_Concat_m1809518182(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11 = il2cpp_codegen_get_type((Il2CppMethodPointer)&Type_GetType_m1693760368, L_10, "UnityEngine.AudioModule, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null");
		__this->set_extensionType_3(L_11);
	}

IL_004d:
	{
		Type_t * L_12 = __this->get_extensionType_3();
		V_0 = L_12;
		goto IL_0059;
	}

IL_0059:
	{
		Type_t * L_13 = V_0;
		return L_13;
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
// UnityEngine.Object UnityEngine.AudioExtensionManager::GetAudioListener()
extern "C" IL2CPP_METHOD_ATTR Object_t631007953 * AudioExtensionManager_GetAudioListener_m817760607 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef Object_t631007953 * (*AudioExtensionManager_GetAudioListener_m817760607_ftn) ();
	static AudioExtensionManager_GetAudioListener_m817760607_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioExtensionManager_GetAudioListener_m817760607_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioExtensionManager::GetAudioListener()");
	Object_t631007953 * retVal = _il2cpp_icall_func();
	return retVal;
}
// UnityEngine.AudioSourceExtension UnityEngine.AudioExtensionManager::AddSpatializerExtension(UnityEngine.AudioSource)
extern "C" IL2CPP_METHOD_ATTR AudioSourceExtension_t3064908834 * AudioExtensionManager_AddSpatializerExtension_m820561940 (RuntimeObject * __this /* static, unused */, AudioSource_t3935305588 * ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioExtensionManager_AddSpatializerExtension_m820561940_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AudioSourceExtension_t3064908834 * V_0 = NULL;
	AudioSpatializerExtensionDefinition_t597896186 * V_1 = NULL;
	Enumerator_t3959214805  V_2;
	memset(&V_2, 0, sizeof(V_2));
	AudioSourceExtension_t3064908834 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		AudioSource_t3935305588 * L_0 = ___source0;
		NullCheck(L_0);
		bool L_1 = AudioSource_get_spatialize_m3609701298(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		V_0 = (AudioSourceExtension_t3064908834 *)NULL;
		goto IL_00dc;
	}

IL_0013:
	{
		AudioSource_t3935305588 * L_2 = ___source0;
		NullCheck(L_2);
		AudioSourceExtension_t3064908834 * L_3 = L_2->get_spatializerExtension_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_3, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		AudioSource_t3935305588 * L_5 = ___source0;
		NullCheck(L_5);
		AudioSourceExtension_t3064908834 * L_6 = L_5->get_spatializerExtension_4();
		V_0 = L_6;
		goto IL_00dc;
	}

IL_0030:
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		AudioExtensionManager_RegisterBuiltinDefinitions_m2742744104(NULL /*static, unused*/, /*hidden argument*/NULL);
		List_1_t2069970928 * L_7 = ((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->get_m_SourceSpatializerExtensionDefinitions_1();
		NullCheck(L_7);
		Enumerator_t3959214805  L_8 = List_1_GetEnumerator_m1716448724(L_7, /*hidden argument*/List_1_GetEnumerator_m1716448724_RuntimeMethod_var);
		V_2 = L_8;
	}

IL_0041:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00b6;
		}

IL_0046:
		{
			AudioSpatializerExtensionDefinition_t597896186 * L_9 = Enumerator_get_Current_m615903654((Enumerator_t3959214805 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m615903654_RuntimeMethod_var);
			V_1 = L_9;
			String_t* L_10 = AudioSettings_GetSpatializerPluginName_m1324100978(NULL /*static, unused*/, /*hidden argument*/NULL);
			PropertyName_t3749835189  L_11 = PropertyName_op_Implicit_m1633828199(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
			AudioSpatializerExtensionDefinition_t597896186 * L_12 = V_1;
			NullCheck(L_12);
			PropertyName_t3749835189  L_13 = L_12->get_spatializerName_0();
			bool L_14 = PropertyName_op_Equality_m2761233272(NULL /*static, unused*/, L_11, L_13, /*hidden argument*/NULL);
			if (!L_14)
			{
				goto IL_00b5;
			}
		}

IL_0069:
		{
			AudioSource_t3935305588 * L_15 = ___source0;
			AudioSpatializerExtensionDefinition_t597896186 * L_16 = V_1;
			NullCheck(L_16);
			AudioExtensionDefinition_t3271167678 * L_17 = L_16->get_definition_1();
			NullCheck(L_17);
			Type_t * L_18 = AudioExtensionDefinition_GetExtensionType_m1450823952(L_17, /*hidden argument*/NULL);
			NullCheck(L_15);
			AudioSourceExtension_t3064908834 * L_19 = AudioSource_AddSpatializerExtension_m2560794359(L_15, L_18, /*hidden argument*/NULL);
			V_3 = L_19;
			AudioSourceExtension_t3064908834 * L_20 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			bool L_21 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_20, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
			if (!L_21)
			{
				goto IL_00b4;
			}
		}

IL_0088:
		{
			AudioSourceExtension_t3064908834 * L_22 = V_3;
			AudioSource_t3935305588 * L_23 = ___source0;
			NullCheck(L_22);
			AudioSourceExtension_set_audioSource_m3729768988(L_22, L_23, /*hidden argument*/NULL);
			AudioSource_t3935305588 * L_24 = ___source0;
			AudioSourceExtension_t3064908834 * L_25 = V_3;
			NullCheck(L_24);
			L_24->set_spatializerExtension_4(L_25);
			AudioSourceExtension_t3064908834 * L_26 = V_3;
			AudioSpatializerExtensionDefinition_t597896186 * L_27 = V_1;
			NullCheck(L_27);
			AudioExtensionDefinition_t3271167678 * L_28 = L_27->get_definition_1();
			NullCheck(L_28);
			Type_t * L_29 = AudioExtensionDefinition_GetExtensionType_m1450823952(L_28, /*hidden argument*/NULL);
			NullCheck(L_29);
			String_t* L_30 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_29);
			IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
			AudioExtensionManager_WriteExtensionProperties_m1988587615(NULL /*static, unused*/, L_26, L_30, /*hidden argument*/NULL);
			AudioSourceExtension_t3064908834 * L_31 = V_3;
			V_0 = L_31;
			IL2CPP_LEAVE(0xDC, FINALLY_00c7);
		}

IL_00b4:
		{
		}

IL_00b5:
		{
		}

IL_00b6:
		{
			bool L_32 = Enumerator_MoveNext_m2697843606((Enumerator_t3959214805 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m2697843606_RuntimeMethod_var);
			if (L_32)
			{
				goto IL_0046;
			}
		}

IL_00c2:
		{
			IL2CPP_LEAVE(0xD5, FINALLY_00c7);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00c7;
	}

FINALLY_00c7:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3198901590((Enumerator_t3959214805 *)(&V_2), /*hidden argument*/Enumerator_Dispose_m3198901590_RuntimeMethod_var);
		IL2CPP_END_FINALLY(199)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(199)
	{
		IL2CPP_JUMP_TBL(0xDC, IL_00dc)
		IL2CPP_JUMP_TBL(0xD5, IL_00d5)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00d5:
	{
		V_0 = (AudioSourceExtension_t3064908834 *)NULL;
		goto IL_00dc;
	}

IL_00dc:
	{
		AudioSourceExtension_t3064908834 * L_33 = V_0;
		return L_33;
	}
}
// UnityEngine.AudioSourceExtension UnityEngine.AudioExtensionManager::AddAmbisonicDecoderExtension(UnityEngine.AudioSource)
extern "C" IL2CPP_METHOD_ATTR AudioSourceExtension_t3064908834 * AudioExtensionManager_AddAmbisonicDecoderExtension_m3197702864 (RuntimeObject * __this /* static, unused */, AudioSource_t3935305588 * ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioExtensionManager_AddAmbisonicDecoderExtension_m3197702864_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AudioSourceExtension_t3064908834 * V_0 = NULL;
	AudioAmbisonicExtensionDefinition_t4118426890 * V_1 = NULL;
	Enumerator_t3184778213  V_2;
	memset(&V_2, 0, sizeof(V_2));
	AudioSourceExtension_t3064908834 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		AudioSource_t3935305588 * L_0 = ___source0;
		NullCheck(L_0);
		AudioSourceExtension_t3064908834 * L_1 = L_0->get_ambisonicExtension_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		AudioSource_t3935305588 * L_3 = ___source0;
		NullCheck(L_3);
		AudioSourceExtension_t3064908834 * L_4 = L_3->get_ambisonicExtension_5();
		V_0 = L_4;
		goto IL_00b4;
	}

IL_001e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		AudioExtensionManager_RegisterBuiltinDefinitions_m2742744104(NULL /*static, unused*/, /*hidden argument*/NULL);
		List_1_t1295534336 * L_5 = ((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->get_m_SourceAmbisonicDecoderExtensionDefinitions_2();
		NullCheck(L_5);
		Enumerator_t3184778213  L_6 = List_1_GetEnumerator_m2295013814(L_5, /*hidden argument*/List_1_GetEnumerator_m2295013814_RuntimeMethod_var);
		V_2 = L_6;
	}

IL_002f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_008e;
		}

IL_0034:
		{
			AudioAmbisonicExtensionDefinition_t4118426890 * L_7 = Enumerator_get_Current_m967136761((Enumerator_t3184778213 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m967136761_RuntimeMethod_var);
			V_1 = L_7;
			String_t* L_8 = AudioSettings_GetAmbisonicDecoderPluginName_m19603540(NULL /*static, unused*/, /*hidden argument*/NULL);
			PropertyName_t3749835189  L_9 = PropertyName_op_Implicit_m1633828199(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
			AudioAmbisonicExtensionDefinition_t4118426890 * L_10 = V_1;
			NullCheck(L_10);
			PropertyName_t3749835189  L_11 = L_10->get_ambisonicPluginName_0();
			bool L_12 = PropertyName_op_Equality_m2761233272(NULL /*static, unused*/, L_9, L_11, /*hidden argument*/NULL);
			if (!L_12)
			{
				goto IL_008d;
			}
		}

IL_0057:
		{
			AudioSource_t3935305588 * L_13 = ___source0;
			AudioAmbisonicExtensionDefinition_t4118426890 * L_14 = V_1;
			NullCheck(L_14);
			AudioExtensionDefinition_t3271167678 * L_15 = L_14->get_definition_1();
			NullCheck(L_15);
			Type_t * L_16 = AudioExtensionDefinition_GetExtensionType_m1450823952(L_15, /*hidden argument*/NULL);
			NullCheck(L_13);
			AudioSourceExtension_t3064908834 * L_17 = AudioSource_AddAmbisonicExtension_m304476911(L_13, L_16, /*hidden argument*/NULL);
			V_3 = L_17;
			AudioSourceExtension_t3064908834 * L_18 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			bool L_19 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_18, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
			if (!L_19)
			{
				goto IL_008c;
			}
		}

IL_0076:
		{
			AudioSourceExtension_t3064908834 * L_20 = V_3;
			AudioSource_t3935305588 * L_21 = ___source0;
			NullCheck(L_20);
			AudioSourceExtension_set_audioSource_m3729768988(L_20, L_21, /*hidden argument*/NULL);
			AudioSource_t3935305588 * L_22 = ___source0;
			AudioSourceExtension_t3064908834 * L_23 = V_3;
			NullCheck(L_22);
			L_22->set_ambisonicExtension_5(L_23);
			AudioSourceExtension_t3064908834 * L_24 = V_3;
			V_0 = L_24;
			IL2CPP_LEAVE(0xB4, FINALLY_009f);
		}

IL_008c:
		{
		}

IL_008d:
		{
		}

IL_008e:
		{
			bool L_25 = Enumerator_MoveNext_m1000499844((Enumerator_t3184778213 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m1000499844_RuntimeMethod_var);
			if (L_25)
			{
				goto IL_0034;
			}
		}

IL_009a:
		{
			IL2CPP_LEAVE(0xAD, FINALLY_009f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009f;
	}

FINALLY_009f:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m405442337((Enumerator_t3184778213 *)(&V_2), /*hidden argument*/Enumerator_Dispose_m405442337_RuntimeMethod_var);
		IL2CPP_END_FINALLY(159)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(159)
	{
		IL2CPP_JUMP_TBL(0xB4, IL_00b4)
		IL2CPP_JUMP_TBL(0xAD, IL_00ad)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00ad:
	{
		V_0 = (AudioSourceExtension_t3064908834 *)NULL;
		goto IL_00b4;
	}

IL_00b4:
	{
		AudioSourceExtension_t3064908834 * L_26 = V_0;
		return L_26;
	}
}
// System.Void UnityEngine.AudioExtensionManager::WriteExtensionProperties(UnityEngine.AudioSourceExtension,System.String)
extern "C" IL2CPP_METHOD_ATTR void AudioExtensionManager_WriteExtensionProperties_m1988587615 (RuntimeObject * __this /* static, unused */, AudioSourceExtension_t3064908834 * ___extension0, String_t* ___extensionName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioExtensionManager_WriteExtensionProperties_m1988587615_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PropertyName_t3749835189  V_1;
	memset(&V_1, 0, sizeof(V_1));
	float V_2 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		PropertyName_t3749835189  L_0 = ((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->get_m_SpatializerExtensionName_7();
		PropertyName_t3749835189  L_1 = PropertyName_op_Implicit_m114733813(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		bool L_2 = PropertyName_op_Equality_m2761233272(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_3 = ___extensionName1;
		PropertyName_t3749835189  L_4 = PropertyName_op_Implicit_m1633828199(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->set_m_SpatializerExtensionName_7(L_4);
	}

IL_0021:
	{
		V_0 = 0;
		goto IL_006d;
	}

IL_0028:
	{
		AudioSourceExtension_t3064908834 * L_5 = ___extension0;
		NullCheck(L_5);
		AudioSource_t3935305588 * L_6 = AudioSourceExtension_get_audioSource_m1465006871(L_5, /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		NullCheck(L_6);
		PropertyName_t3749835189  L_8 = AudioSource_ReadExtensionName_m725112169(L_6, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		PropertyName_t3749835189  L_9 = ((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->get_m_SpatializerExtensionName_7();
		bool L_10 = PropertyName_op_Equality_m2761233272(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0068;
		}
	}
	{
		AudioSourceExtension_t3064908834 * L_11 = ___extension0;
		NullCheck(L_11);
		AudioSource_t3935305588 * L_12 = AudioSourceExtension_get_audioSource_m1465006871(L_11, /*hidden argument*/NULL);
		int32_t L_13 = V_0;
		NullCheck(L_12);
		PropertyName_t3749835189  L_14 = AudioSource_ReadExtensionPropertyName_m2761820692(L_12, L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		AudioSourceExtension_t3064908834 * L_15 = ___extension0;
		NullCheck(L_15);
		AudioSource_t3935305588 * L_16 = AudioSourceExtension_get_audioSource_m1465006871(L_15, /*hidden argument*/NULL);
		int32_t L_17 = V_0;
		NullCheck(L_16);
		float L_18 = AudioSource_ReadExtensionPropertyValue_m72717540(L_16, L_17, /*hidden argument*/NULL);
		V_2 = L_18;
		AudioSourceExtension_t3064908834 * L_19 = ___extension0;
		PropertyName_t3749835189  L_20 = V_1;
		float L_21 = V_2;
		NullCheck(L_19);
		VirtActionInvoker2< PropertyName_t3749835189 , float >::Invoke(5 /* System.Void UnityEngine.AudioSourceExtension::WriteExtensionProperty(UnityEngine.PropertyName,System.Single) */, L_19, L_20, L_21);
	}

IL_0068:
	{
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_006d:
	{
		int32_t L_23 = V_0;
		AudioSourceExtension_t3064908834 * L_24 = ___extension0;
		NullCheck(L_24);
		AudioSource_t3935305588 * L_25 = AudioSourceExtension_get_audioSource_m1465006871(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		int32_t L_26 = AudioSource_GetNumExtensionProperties_m1231815209(L_25, /*hidden argument*/NULL);
		if ((((int32_t)L_23) < ((int32_t)L_26)))
		{
			goto IL_0028;
		}
	}
	{
		AudioSourceExtension_t3064908834 * L_27 = ___extension0;
		NullCheck(L_27);
		AudioSource_t3935305588 * L_28 = AudioSourceExtension_get_audioSource_m1465006871(L_27, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		PropertyName_t3749835189  L_29 = ((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->get_m_SpatializerExtensionName_7();
		NullCheck(L_28);
		AudioSource_ClearExtensionProperties_m2116074582(L_28, L_29, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.AudioListenerExtension UnityEngine.AudioExtensionManager::AddSpatializerExtension(UnityEngine.AudioListener)
extern "C" IL2CPP_METHOD_ATTR AudioListenerExtension_t3242956547 * AudioExtensionManager_AddSpatializerExtension_m3915849352 (RuntimeObject * __this /* static, unused */, AudioListener_t2734094699 * ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioExtensionManager_AddSpatializerExtension_m3915849352_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AudioListenerExtension_t3242956547 * V_0 = NULL;
	AudioSpatializerExtensionDefinition_t597896186 * V_1 = NULL;
	Enumerator_t3959214805  V_2;
	memset(&V_2, 0, sizeof(V_2));
	AudioListenerExtension_t3242956547 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		AudioListener_t2734094699 * L_0 = ___listener0;
		NullCheck(L_0);
		AudioListenerExtension_t3242956547 * L_1 = L_0->get_spatializerExtension_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		AudioListener_t2734094699 * L_3 = ___listener0;
		NullCheck(L_3);
		AudioListenerExtension_t3242956547 * L_4 = L_3->get_spatializerExtension_4();
		V_0 = L_4;
		goto IL_00e4;
	}

IL_001e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		AudioExtensionManager_RegisterBuiltinDefinitions_m2742744104(NULL /*static, unused*/, /*hidden argument*/NULL);
		List_1_t2069970928 * L_5 = ((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->get_m_ListenerSpatializerExtensionDefinitions_0();
		NullCheck(L_5);
		Enumerator_t3959214805  L_6 = List_1_GetEnumerator_m1716448724(L_5, /*hidden argument*/List_1_GetEnumerator_m1716448724_RuntimeMethod_var);
		V_2 = L_6;
	}

IL_002f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00be;
		}

IL_0034:
		{
			AudioSpatializerExtensionDefinition_t597896186 * L_7 = Enumerator_get_Current_m615903654((Enumerator_t3959214805 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m615903654_RuntimeMethod_var);
			V_1 = L_7;
			String_t* L_8 = AudioSettings_GetSpatializerPluginName_m1324100978(NULL /*static, unused*/, /*hidden argument*/NULL);
			PropertyName_t3749835189  L_9 = PropertyName_op_Implicit_m1633828199(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
			AudioSpatializerExtensionDefinition_t597896186 * L_10 = V_1;
			NullCheck(L_10);
			PropertyName_t3749835189  L_11 = L_10->get_spatializerName_0();
			bool L_12 = PropertyName_op_Equality_m2761233272(NULL /*static, unused*/, L_9, L_11, /*hidden argument*/NULL);
			if (L_12)
			{
				goto IL_0071;
			}
		}

IL_0057:
		{
			String_t* L_13 = AudioSettings_GetAmbisonicDecoderPluginName_m19603540(NULL /*static, unused*/, /*hidden argument*/NULL);
			PropertyName_t3749835189  L_14 = PropertyName_op_Implicit_m1633828199(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
			AudioSpatializerExtensionDefinition_t597896186 * L_15 = V_1;
			NullCheck(L_15);
			PropertyName_t3749835189  L_16 = L_15->get_spatializerName_0();
			bool L_17 = PropertyName_op_Equality_m2761233272(NULL /*static, unused*/, L_14, L_16, /*hidden argument*/NULL);
			if (!L_17)
			{
				goto IL_00bd;
			}
		}

IL_0071:
		{
			AudioListener_t2734094699 * L_18 = ___listener0;
			AudioSpatializerExtensionDefinition_t597896186 * L_19 = V_1;
			NullCheck(L_19);
			AudioExtensionDefinition_t3271167678 * L_20 = L_19->get_definition_1();
			NullCheck(L_20);
			Type_t * L_21 = AudioExtensionDefinition_GetExtensionType_m1450823952(L_20, /*hidden argument*/NULL);
			NullCheck(L_18);
			AudioListenerExtension_t3242956547 * L_22 = AudioListener_AddExtension_m994751216(L_18, L_21, /*hidden argument*/NULL);
			V_3 = L_22;
			AudioListenerExtension_t3242956547 * L_23 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			bool L_24 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_23, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
			if (!L_24)
			{
				goto IL_00bc;
			}
		}

IL_0090:
		{
			AudioListenerExtension_t3242956547 * L_25 = V_3;
			AudioListener_t2734094699 * L_26 = ___listener0;
			NullCheck(L_25);
			AudioListenerExtension_set_audioListener_m3412289012(L_25, L_26, /*hidden argument*/NULL);
			AudioListener_t2734094699 * L_27 = ___listener0;
			AudioListenerExtension_t3242956547 * L_28 = V_3;
			NullCheck(L_27);
			L_27->set_spatializerExtension_4(L_28);
			AudioListenerExtension_t3242956547 * L_29 = V_3;
			AudioSpatializerExtensionDefinition_t597896186 * L_30 = V_1;
			NullCheck(L_30);
			AudioExtensionDefinition_t3271167678 * L_31 = L_30->get_definition_1();
			NullCheck(L_31);
			Type_t * L_32 = AudioExtensionDefinition_GetExtensionType_m1450823952(L_31, /*hidden argument*/NULL);
			NullCheck(L_32);
			String_t* L_33 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_32);
			IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
			AudioExtensionManager_WriteExtensionProperties_m3028464154(NULL /*static, unused*/, L_29, L_33, /*hidden argument*/NULL);
			AudioListenerExtension_t3242956547 * L_34 = V_3;
			V_0 = L_34;
			IL2CPP_LEAVE(0xE4, FINALLY_00cf);
		}

IL_00bc:
		{
		}

IL_00bd:
		{
		}

IL_00be:
		{
			bool L_35 = Enumerator_MoveNext_m2697843606((Enumerator_t3959214805 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m2697843606_RuntimeMethod_var);
			if (L_35)
			{
				goto IL_0034;
			}
		}

IL_00ca:
		{
			IL2CPP_LEAVE(0xDD, FINALLY_00cf);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00cf;
	}

FINALLY_00cf:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3198901590((Enumerator_t3959214805 *)(&V_2), /*hidden argument*/Enumerator_Dispose_m3198901590_RuntimeMethod_var);
		IL2CPP_END_FINALLY(207)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(207)
	{
		IL2CPP_JUMP_TBL(0xE4, IL_00e4)
		IL2CPP_JUMP_TBL(0xDD, IL_00dd)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00dd:
	{
		V_0 = (AudioListenerExtension_t3242956547 *)NULL;
		goto IL_00e4;
	}

IL_00e4:
	{
		AudioListenerExtension_t3242956547 * L_36 = V_0;
		return L_36;
	}
}
// System.Void UnityEngine.AudioExtensionManager::WriteExtensionProperties(UnityEngine.AudioListenerExtension,System.String)
extern "C" IL2CPP_METHOD_ATTR void AudioExtensionManager_WriteExtensionProperties_m3028464154 (RuntimeObject * __this /* static, unused */, AudioListenerExtension_t3242956547 * ___extension0, String_t* ___extensionName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioExtensionManager_WriteExtensionProperties_m3028464154_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PropertyName_t3749835189  V_1;
	memset(&V_1, 0, sizeof(V_1));
	float V_2 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		PropertyName_t3749835189  L_0 = ((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->get_m_ListenerSpatializerExtensionName_8();
		PropertyName_t3749835189  L_1 = PropertyName_op_Implicit_m114733813(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		bool L_2 = PropertyName_op_Equality_m2761233272(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_3 = ___extensionName1;
		PropertyName_t3749835189  L_4 = PropertyName_op_Implicit_m1633828199(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->set_m_ListenerSpatializerExtensionName_8(L_4);
	}

IL_0021:
	{
		V_0 = 0;
		goto IL_006d;
	}

IL_0028:
	{
		AudioListenerExtension_t3242956547 * L_5 = ___extension0;
		NullCheck(L_5);
		AudioListener_t2734094699 * L_6 = AudioListenerExtension_get_audioListener_m3597041395(L_5, /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		NullCheck(L_6);
		PropertyName_t3749835189  L_8 = AudioListener_ReadExtensionName_m929423100(L_6, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		PropertyName_t3749835189  L_9 = ((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->get_m_ListenerSpatializerExtensionName_8();
		bool L_10 = PropertyName_op_Equality_m2761233272(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0068;
		}
	}
	{
		AudioListenerExtension_t3242956547 * L_11 = ___extension0;
		NullCheck(L_11);
		AudioListener_t2734094699 * L_12 = AudioListenerExtension_get_audioListener_m3597041395(L_11, /*hidden argument*/NULL);
		int32_t L_13 = V_0;
		NullCheck(L_12);
		PropertyName_t3749835189  L_14 = AudioListener_ReadExtensionPropertyName_m3416271339(L_12, L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		AudioListenerExtension_t3242956547 * L_15 = ___extension0;
		NullCheck(L_15);
		AudioListener_t2734094699 * L_16 = AudioListenerExtension_get_audioListener_m3597041395(L_15, /*hidden argument*/NULL);
		int32_t L_17 = V_0;
		NullCheck(L_16);
		float L_18 = AudioListener_ReadExtensionPropertyValue_m2443832840(L_16, L_17, /*hidden argument*/NULL);
		V_2 = L_18;
		AudioListenerExtension_t3242956547 * L_19 = ___extension0;
		PropertyName_t3749835189  L_20 = V_1;
		float L_21 = V_2;
		NullCheck(L_19);
		VirtActionInvoker2< PropertyName_t3749835189 , float >::Invoke(5 /* System.Void UnityEngine.AudioListenerExtension::WriteExtensionProperty(UnityEngine.PropertyName,System.Single) */, L_19, L_20, L_21);
	}

IL_0068:
	{
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_006d:
	{
		int32_t L_23 = V_0;
		AudioListenerExtension_t3242956547 * L_24 = ___extension0;
		NullCheck(L_24);
		AudioListener_t2734094699 * L_25 = AudioListenerExtension_get_audioListener_m3597041395(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		int32_t L_26 = AudioListener_GetNumExtensionProperties_m3139224773(L_25, /*hidden argument*/NULL);
		if ((((int32_t)L_23) < ((int32_t)L_26)))
		{
			goto IL_0028;
		}
	}
	{
		AudioListenerExtension_t3242956547 * L_27 = ___extension0;
		NullCheck(L_27);
		AudioListener_t2734094699 * L_28 = AudioListenerExtension_get_audioListener_m3597041395(L_27, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		PropertyName_t3749835189  L_29 = ((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->get_m_ListenerSpatializerExtensionName_8();
		NullCheck(L_28);
		AudioListener_ClearExtensionProperties_m3849891634(L_28, L_29, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AudioExtensionManager::AddExtensionToManager(UnityEngine.AudioSourceExtension)
extern "C" IL2CPP_METHOD_ATTR void AudioExtensionManager_AddExtensionToManager_m3475649283 (RuntimeObject * __this /* static, unused */, AudioSourceExtension_t3064908834 * ___extension0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioExtensionManager_AddExtensionToManager_m3475649283_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		AudioExtensionManager_RegisterBuiltinDefinitions_m2742744104(NULL /*static, unused*/, /*hidden argument*/NULL);
		AudioSourceExtension_t3064908834 * L_0 = ___extension0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_m_ExtensionManagerUpdateIndex_5();
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0031;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		List_1_t242016280 * L_2 = ((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->get_m_SourceExtensionsToUpdate_3();
		AudioSourceExtension_t3064908834 * L_3 = ___extension0;
		NullCheck(L_2);
		List_1_Add_m2957197106(L_2, L_3, /*hidden argument*/List_1_Add_m2957197106_RuntimeMethod_var);
		AudioSourceExtension_t3064908834 * L_4 = ___extension0;
		List_1_t242016280 * L_5 = ((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->get_m_SourceExtensionsToUpdate_3();
		NullCheck(L_5);
		int32_t L_6 = List_1_get_Count_m3844406869(L_5, /*hidden argument*/List_1_get_Count_m3844406869_RuntimeMethod_var);
		NullCheck(L_4);
		L_4->set_m_ExtensionManagerUpdateIndex_5(((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)));
	}

IL_0031:
	{
		return;
	}
}
// System.Void UnityEngine.AudioExtensionManager::RemoveExtensionFromManager(UnityEngine.AudioSourceExtension)
extern "C" IL2CPP_METHOD_ATTR void AudioExtensionManager_RemoveExtensionFromManager_m442924172 (RuntimeObject * __this /* static, unused */, AudioSourceExtension_t3064908834 * ___extension0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioExtensionManager_RemoveExtensionFromManager_m442924172_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		AudioSourceExtension_t3064908834 * L_0 = ___extension0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_m_ExtensionManagerUpdateIndex_5();
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		List_1_t242016280 * L_4 = ((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->get_m_SourceExtensionsToUpdate_3();
		NullCheck(L_4);
		int32_t L_5 = List_1_get_Count_m3844406869(L_4, /*hidden argument*/List_1_get_Count_m3844406869_RuntimeMethod_var);
		if ((((int32_t)L_3) >= ((int32_t)L_5)))
		{
			goto IL_0060;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		List_1_t242016280 * L_6 = ((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->get_m_SourceExtensionsToUpdate_3();
		NullCheck(L_6);
		int32_t L_7 = List_1_get_Count_m3844406869(L_6, /*hidden argument*/List_1_get_Count_m3844406869_RuntimeMethod_var);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1));
		List_1_t242016280 * L_8 = ((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->get_m_SourceExtensionsToUpdate_3();
		int32_t L_9 = V_0;
		List_1_t242016280 * L_10 = ((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->get_m_SourceExtensionsToUpdate_3();
		int32_t L_11 = V_1;
		NullCheck(L_10);
		AudioSourceExtension_t3064908834 * L_12 = List_1_get_Item_m1395253538(L_10, L_11, /*hidden argument*/List_1_get_Item_m1395253538_RuntimeMethod_var);
		NullCheck(L_8);
		List_1_set_Item_m845928814(L_8, L_9, L_12, /*hidden argument*/List_1_set_Item_m845928814_RuntimeMethod_var);
		List_1_t242016280 * L_13 = ((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->get_m_SourceExtensionsToUpdate_3();
		int32_t L_14 = V_0;
		NullCheck(L_13);
		AudioSourceExtension_t3064908834 * L_15 = List_1_get_Item_m1395253538(L_13, L_14, /*hidden argument*/List_1_get_Item_m1395253538_RuntimeMethod_var);
		int32_t L_16 = V_0;
		NullCheck(L_15);
		L_15->set_m_ExtensionManagerUpdateIndex_5(L_16);
		List_1_t242016280 * L_17 = ((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->get_m_SourceExtensionsToUpdate_3();
		int32_t L_18 = V_1;
		NullCheck(L_17);
		List_1_RemoveAt_m2462508318(L_17, L_18, /*hidden argument*/List_1_RemoveAt_m2462508318_RuntimeMethod_var);
	}

IL_0060:
	{
		AudioSourceExtension_t3064908834 * L_19 = ___extension0;
		NullCheck(L_19);
		L_19->set_m_ExtensionManagerUpdateIndex_5((-1));
		return;
	}
}
// System.Void UnityEngine.AudioExtensionManager::Update()
extern "C" IL2CPP_METHOD_ATTR void AudioExtensionManager_Update_m3269307447 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioExtensionManager_Update_m3269307447_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AudioListener_t2734094699 * V_0 = NULL;
	AudioListenerExtension_t3242956547 * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	AudioSourceExtension_t3064908834 * V_5 = NULL;
	int32_t G_B10_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B21_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		AudioExtensionManager_RegisterBuiltinDefinitions_m2742744104(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t631007953 * L_0 = AudioExtensionManager_GetAudioListener_m817760607(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = ((AudioListener_t2734094699 *)IsInstSealed((RuntimeObject*)L_0, AudioListener_t2734094699_il2cpp_TypeInfo_var));
		AudioListener_t2734094699 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		AudioListener_t2734094699 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		AudioListenerExtension_t3242956547 * L_4 = AudioExtensionManager_AddSpatializerExtension_m3915849352(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		AudioListenerExtension_t3242956547 * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_5, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		AudioListenerExtension_t3242956547 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker0::Invoke(6 /* System.Void UnityEngine.AudioListenerExtension::ExtensionUpdate() */, L_7);
	}

IL_0037:
	{
	}

IL_0038:
	{
		V_2 = 0;
		goto IL_0053;
	}

IL_003f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		List_1_t242016280 * L_8 = ((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->get_m_SourceExtensionsToUpdate_3();
		int32_t L_9 = V_2;
		NullCheck(L_8);
		AudioSourceExtension_t3064908834 * L_10 = List_1_get_Item_m1395253538(L_8, L_9, /*hidden argument*/List_1_get_Item_m1395253538_RuntimeMethod_var);
		NullCheck(L_10);
		VirtActionInvoker0::Invoke(8 /* System.Void UnityEngine.AudioSourceExtension::ExtensionUpdate() */, L_10);
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0053:
	{
		int32_t L_12 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		List_1_t242016280 * L_13 = ((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->get_m_SourceExtensionsToUpdate_3();
		NullCheck(L_13);
		int32_t L_14 = List_1_get_Count_m3844406869(L_13, /*hidden argument*/List_1_get_Count_m3844406869_RuntimeMethod_var);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_003f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		int32_t L_15 = ((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->get_m_NextStopIndex_4();
		List_1_t242016280 * L_16 = ((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->get_m_SourceExtensionsToUpdate_3();
		NullCheck(L_16);
		int32_t L_17 = List_1_get_Count_m3844406869(L_16, /*hidden argument*/List_1_get_Count_m3844406869_RuntimeMethod_var);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_007d;
		}
	}
	{
		G_B10_0 = 0;
		goto IL_0082;
	}

IL_007d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		int32_t L_18 = ((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->get_m_NextStopIndex_4();
		G_B10_0 = L_18;
	}

IL_0082:
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->set_m_NextStopIndex_4(G_B10_0);
		List_1_t242016280 * L_19 = ((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->get_m_SourceExtensionsToUpdate_3();
		NullCheck(L_19);
		int32_t L_20 = List_1_get_Count_m3844406869(L_19, /*hidden argument*/List_1_get_Count_m3844406869_RuntimeMethod_var);
		if ((((int32_t)L_20) <= ((int32_t)0)))
		{
			goto IL_00aa;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		List_1_t242016280 * L_21 = ((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->get_m_SourceExtensionsToUpdate_3();
		NullCheck(L_21);
		int32_t L_22 = List_1_get_Count_m3844406869(L_21, /*hidden argument*/List_1_get_Count_m3844406869_RuntimeMethod_var);
		G_B13_0 = ((int32_t)il2cpp_codegen_add((int32_t)1, (int32_t)((int32_t)((int32_t)L_22/(int32_t)8))));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B13_0 = 0;
	}

IL_00ab:
	{
		V_3 = G_B13_0;
		V_4 = 0;
		goto IL_0148;
	}

IL_00b4:
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		List_1_t242016280 * L_23 = ((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->get_m_SourceExtensionsToUpdate_3();
		int32_t L_24 = ((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->get_m_NextStopIndex_4();
		NullCheck(L_23);
		AudioSourceExtension_t3064908834 * L_25 = List_1_get_Item_m1395253538(L_23, L_24, /*hidden argument*/List_1_get_Item_m1395253538_RuntimeMethod_var);
		V_5 = L_25;
		AudioSourceExtension_t3064908834 * L_26 = V_5;
		NullCheck(L_26);
		AudioSource_t3935305588 * L_27 = AudioSourceExtension_get_audioSource_m1465006871(L_26, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_28 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_27, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_00fa;
		}
	}
	{
		AudioSourceExtension_t3064908834 * L_29 = V_5;
		NullCheck(L_29);
		AudioSource_t3935305588 * L_30 = AudioSourceExtension_get_audioSource_m1465006871(L_29, /*hidden argument*/NULL);
		NullCheck(L_30);
		bool L_31 = Behaviour_get_enabled_m753527255(L_30, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_00fa;
		}
	}
	{
		AudioSourceExtension_t3064908834 * L_32 = V_5;
		NullCheck(L_32);
		AudioSource_t3935305588 * L_33 = AudioSourceExtension_get_audioSource_m1465006871(L_32, /*hidden argument*/NULL);
		NullCheck(L_33);
		bool L_34 = AudioSource_get_isPlaying_m1896551654(L_33, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_010f;
		}
	}

IL_00fa:
	{
		AudioSourceExtension_t3064908834 * L_35 = V_5;
		NullCheck(L_35);
		VirtActionInvoker0::Invoke(7 /* System.Void UnityEngine.AudioSourceExtension::Stop() */, L_35);
		AudioSourceExtension_t3064908834 * L_36 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		AudioExtensionManager_RemoveExtensionFromManager_m442924172(NULL /*static, unused*/, L_36, /*hidden argument*/NULL);
		goto IL_0141;
	}

IL_010f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		int32_t L_37 = ((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->get_m_NextStopIndex_4();
		((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->set_m_NextStopIndex_4(((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1)));
		int32_t L_38 = ((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->get_m_NextStopIndex_4();
		List_1_t242016280 * L_39 = ((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->get_m_SourceExtensionsToUpdate_3();
		NullCheck(L_39);
		int32_t L_40 = List_1_get_Count_m3844406869(L_39, /*hidden argument*/List_1_get_Count_m3844406869_RuntimeMethod_var);
		if ((((int32_t)L_38) < ((int32_t)L_40)))
		{
			goto IL_0136;
		}
	}
	{
		G_B21_0 = 0;
		goto IL_013b;
	}

IL_0136:
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		int32_t L_41 = ((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->get_m_NextStopIndex_4();
		G_B21_0 = L_41;
	}

IL_013b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->set_m_NextStopIndex_4(G_B21_0);
	}

IL_0141:
	{
		int32_t L_42 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1));
	}

IL_0148:
	{
		int32_t L_43 = V_4;
		int32_t L_44 = V_3;
		if ((((int32_t)L_43) < ((int32_t)L_44)))
		{
			goto IL_00b4;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.AudioExtensionManager::GetReadyToPlay(UnityEngine.AudioSourceExtension)
extern "C" IL2CPP_METHOD_ATTR void AudioExtensionManager_GetReadyToPlay_m1557263244 (RuntimeObject * __this /* static, unused */, AudioSourceExtension_t3064908834 * ___extension0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioExtensionManager_GetReadyToPlay_m1557263244_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AudioSourceExtension_t3064908834 * L_0 = ___extension0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		AudioSourceExtension_t3064908834 * L_2 = ___extension0;
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(6 /* System.Void UnityEngine.AudioSourceExtension::Play() */, L_2);
		AudioSourceExtension_t3064908834 * L_3 = ___extension0;
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		AudioExtensionManager_AddExtensionToManager_m3475649283(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Void UnityEngine.AudioExtensionManager::RegisterBuiltinDefinitions()
extern "C" IL2CPP_METHOD_ATTR void AudioExtensionManager_RegisterBuiltinDefinitions_m2742744104 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioExtensionManager_RegisterBuiltinDefinitions_m2742744104_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		V_0 = (bool)0;
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		bool L_0 = ((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->get_m_BuiltinDefinitionsRegistered_5();
		if (L_0)
		{
			goto IL_004d;
		}
	}
	{
		bool L_1 = V_0;
		if (L_1)
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_2 = AudioSettings_GetSpatializerPluginName_m1324100978(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_3 = String_op_Equality_m920492651(NULL /*static, unused*/, L_2, _stringLiteral4035105846, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}

IL_0028:
	{
	}

IL_002a:
	{
		bool L_4 = V_0;
		if (L_4)
		{
			goto IL_0044;
		}
	}
	{
		String_t* L_5 = AudioSettings_GetAmbisonicDecoderPluginName_m19603540(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_6 = String_op_Equality_m920492651(NULL /*static, unused*/, L_5, _stringLiteral4035105846, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0046;
		}
	}

IL_0044:
	{
	}

IL_0046:
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->set_m_BuiltinDefinitionsRegistered_5((bool)1);
	}

IL_004d:
	{
		return;
	}
}
// System.Void UnityEngine.AudioExtensionManager::.cctor()
extern "C" IL2CPP_METHOD_ATTR void AudioExtensionManager__cctor_m1361600190 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioExtensionManager__cctor_m1361600190_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t2069970928 * L_0 = (List_1_t2069970928 *)il2cpp_codegen_object_new(List_1_t2069970928_il2cpp_TypeInfo_var);
		List_1__ctor_m3866378638(L_0, /*hidden argument*/List_1__ctor_m3866378638_RuntimeMethod_var);
		((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->set_m_ListenerSpatializerExtensionDefinitions_0(L_0);
		List_1_t2069970928 * L_1 = (List_1_t2069970928 *)il2cpp_codegen_object_new(List_1_t2069970928_il2cpp_TypeInfo_var);
		List_1__ctor_m3866378638(L_1, /*hidden argument*/List_1__ctor_m3866378638_RuntimeMethod_var);
		((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->set_m_SourceSpatializerExtensionDefinitions_1(L_1);
		List_1_t1295534336 * L_2 = (List_1_t1295534336 *)il2cpp_codegen_object_new(List_1_t1295534336_il2cpp_TypeInfo_var);
		List_1__ctor_m4205755667(L_2, /*hidden argument*/List_1__ctor_m4205755667_RuntimeMethod_var);
		((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->set_m_SourceAmbisonicDecoderExtensionDefinitions_2(L_2);
		List_1_t242016280 * L_3 = (List_1_t242016280 *)il2cpp_codegen_object_new(List_1_t242016280_il2cpp_TypeInfo_var);
		List_1__ctor_m69557434(L_3, /*hidden argument*/List_1__ctor_m69557434_RuntimeMethod_var);
		((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->set_m_SourceExtensionsToUpdate_3(L_3);
		((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->set_m_NextStopIndex_4(0);
		((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->set_m_BuiltinDefinitionsRegistered_5((bool)0);
		PropertyName_t3749835189  L_4 = PropertyName_op_Implicit_m114733813(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->set_m_SpatializerName_6(L_4);
		PropertyName_t3749835189  L_5 = PropertyName_op_Implicit_m114733813(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->set_m_SpatializerExtensionName_7(L_5);
		PropertyName_t3749835189  L_6 = PropertyName_op_Implicit_m114733813(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		((AudioExtensionManager_t3220897493_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var))->set_m_ListenerSpatializerExtensionName_8(L_6);
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
// System.Int32 UnityEngine.AudioListener::GetNumExtensionProperties()
extern "C" IL2CPP_METHOD_ATTR int32_t AudioListener_GetNumExtensionProperties_m3139224773 (AudioListener_t2734094699 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*AudioListener_GetNumExtensionProperties_m3139224773_ftn) (AudioListener_t2734094699 *);
	static AudioListener_GetNumExtensionProperties_m3139224773_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioListener_GetNumExtensionProperties_m3139224773_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioListener::GetNumExtensionProperties()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.PropertyName UnityEngine.AudioListener::ReadExtensionName(System.Int32)
extern "C" IL2CPP_METHOD_ATTR PropertyName_t3749835189  AudioListener_ReadExtensionName_m929423100 (AudioListener_t2734094699 * __this, int32_t ___listenerIndex0, const RuntimeMethod* method)
{
	PropertyName_t3749835189  V_0;
	memset(&V_0, 0, sizeof(V_0));
	PropertyName_t3749835189  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		int32_t L_0 = ___listenerIndex0;
		AudioListener_INTERNAL_CALL_ReadExtensionName_m4145804327(NULL /*static, unused*/, __this, L_0, (PropertyName_t3749835189 *)(&V_0), /*hidden argument*/NULL);
		PropertyName_t3749835189  L_1 = V_0;
		V_1 = L_1;
		goto IL_0011;
	}

IL_0011:
	{
		PropertyName_t3749835189  L_2 = V_1;
		return L_2;
	}
}
// System.Void UnityEngine.AudioListener::INTERNAL_CALL_ReadExtensionName(UnityEngine.AudioListener,System.Int32,UnityEngine.PropertyName&)
extern "C" IL2CPP_METHOD_ATTR void AudioListener_INTERNAL_CALL_ReadExtensionName_m4145804327 (RuntimeObject * __this /* static, unused */, AudioListener_t2734094699 * ___self0, int32_t ___listenerIndex1, PropertyName_t3749835189 * ___value2, const RuntimeMethod* method)
{
	typedef void (*AudioListener_INTERNAL_CALL_ReadExtensionName_m4145804327_ftn) (AudioListener_t2734094699 *, int32_t, PropertyName_t3749835189 *);
	static AudioListener_INTERNAL_CALL_ReadExtensionName_m4145804327_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioListener_INTERNAL_CALL_ReadExtensionName_m4145804327_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioListener::INTERNAL_CALL_ReadExtensionName(UnityEngine.AudioListener,System.Int32,UnityEngine.PropertyName&)");
	_il2cpp_icall_func(___self0, ___listenerIndex1, ___value2);
}
// UnityEngine.PropertyName UnityEngine.AudioListener::ReadExtensionPropertyName(System.Int32)
extern "C" IL2CPP_METHOD_ATTR PropertyName_t3749835189  AudioListener_ReadExtensionPropertyName_m3416271339 (AudioListener_t2734094699 * __this, int32_t ___listenerIndex0, const RuntimeMethod* method)
{
	PropertyName_t3749835189  V_0;
	memset(&V_0, 0, sizeof(V_0));
	PropertyName_t3749835189  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		int32_t L_0 = ___listenerIndex0;
		AudioListener_INTERNAL_CALL_ReadExtensionPropertyName_m330480156(NULL /*static, unused*/, __this, L_0, (PropertyName_t3749835189 *)(&V_0), /*hidden argument*/NULL);
		PropertyName_t3749835189  L_1 = V_0;
		V_1 = L_1;
		goto IL_0011;
	}

IL_0011:
	{
		PropertyName_t3749835189  L_2 = V_1;
		return L_2;
	}
}
// System.Void UnityEngine.AudioListener::INTERNAL_CALL_ReadExtensionPropertyName(UnityEngine.AudioListener,System.Int32,UnityEngine.PropertyName&)
extern "C" IL2CPP_METHOD_ATTR void AudioListener_INTERNAL_CALL_ReadExtensionPropertyName_m330480156 (RuntimeObject * __this /* static, unused */, AudioListener_t2734094699 * ___self0, int32_t ___listenerIndex1, PropertyName_t3749835189 * ___value2, const RuntimeMethod* method)
{
	typedef void (*AudioListener_INTERNAL_CALL_ReadExtensionPropertyName_m330480156_ftn) (AudioListener_t2734094699 *, int32_t, PropertyName_t3749835189 *);
	static AudioListener_INTERNAL_CALL_ReadExtensionPropertyName_m330480156_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioListener_INTERNAL_CALL_ReadExtensionPropertyName_m330480156_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioListener::INTERNAL_CALL_ReadExtensionPropertyName(UnityEngine.AudioListener,System.Int32,UnityEngine.PropertyName&)");
	_il2cpp_icall_func(___self0, ___listenerIndex1, ___value2);
}
// System.Single UnityEngine.AudioListener::ReadExtensionPropertyValue(System.Int32)
extern "C" IL2CPP_METHOD_ATTR float AudioListener_ReadExtensionPropertyValue_m2443832840 (AudioListener_t2734094699 * __this, int32_t ___listenerIndex0, const RuntimeMethod* method)
{
	typedef float (*AudioListener_ReadExtensionPropertyValue_m2443832840_ftn) (AudioListener_t2734094699 *, int32_t);
	static AudioListener_ReadExtensionPropertyValue_m2443832840_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioListener_ReadExtensionPropertyValue_m2443832840_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioListener::ReadExtensionPropertyValue(System.Int32)");
	float retVal = _il2cpp_icall_func(__this, ___listenerIndex0);
	return retVal;
}
// System.Void UnityEngine.AudioListener::ClearExtensionProperties(UnityEngine.PropertyName)
extern "C" IL2CPP_METHOD_ATTR void AudioListener_ClearExtensionProperties_m3849891634 (AudioListener_t2734094699 * __this, PropertyName_t3749835189  ___extensionName0, const RuntimeMethod* method)
{
	{
		AudioListener_INTERNAL_CALL_ClearExtensionProperties_m2036387607(NULL /*static, unused*/, __this, (PropertyName_t3749835189 *)(&___extensionName0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AudioListener::INTERNAL_CALL_ClearExtensionProperties(UnityEngine.AudioListener,UnityEngine.PropertyName&)
extern "C" IL2CPP_METHOD_ATTR void AudioListener_INTERNAL_CALL_ClearExtensionProperties_m2036387607 (RuntimeObject * __this /* static, unused */, AudioListener_t2734094699 * ___self0, PropertyName_t3749835189 * ___extensionName1, const RuntimeMethod* method)
{
	typedef void (*AudioListener_INTERNAL_CALL_ClearExtensionProperties_m2036387607_ftn) (AudioListener_t2734094699 *, PropertyName_t3749835189 *);
	static AudioListener_INTERNAL_CALL_ClearExtensionProperties_m2036387607_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioListener_INTERNAL_CALL_ClearExtensionProperties_m2036387607_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioListener::INTERNAL_CALL_ClearExtensionProperties(UnityEngine.AudioListener,UnityEngine.PropertyName&)");
	_il2cpp_icall_func(___self0, ___extensionName1);
}
// UnityEngine.AudioListenerExtension UnityEngine.AudioListener::AddExtension(System.Type)
extern "C" IL2CPP_METHOD_ATTR AudioListenerExtension_t3242956547 * AudioListener_AddExtension_m994751216 (AudioListener_t2734094699 * __this, Type_t * ___extensionType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioListener_AddExtension_m994751216_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AudioListenerExtension_t3242956547 * V_0 = NULL;
	{
		AudioListenerExtension_t3242956547 * L_0 = __this->get_spatializerExtension_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		Type_t * L_2 = ___extensionType0;
		ScriptableObject_t2528358522 * L_3 = ScriptableObject_CreateInstance_m2611081756(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		__this->set_spatializerExtension_4(((AudioListenerExtension_t3242956547 *)IsInstClass((RuntimeObject*)L_3, AudioListenerExtension_t3242956547_il2cpp_TypeInfo_var)));
	}

IL_0025:
	{
		AudioListenerExtension_t3242956547 * L_4 = __this->get_spatializerExtension_4();
		V_0 = L_4;
		goto IL_0031;
	}

IL_0031:
	{
		AudioListenerExtension_t3242956547 * L_5 = V_0;
		return L_5;
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
// System.Void UnityEngine.AudioListenerExtension::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AudioListenerExtension__ctor_m2046026665 (AudioListenerExtension_t3242956547 * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m1310743131(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.AudioListener UnityEngine.AudioListenerExtension::get_audioListener()
extern "C" IL2CPP_METHOD_ATTR AudioListener_t2734094699 * AudioListenerExtension_get_audioListener_m3597041395 (AudioListenerExtension_t3242956547 * __this, const RuntimeMethod* method)
{
	AudioListener_t2734094699 * V_0 = NULL;
	{
		AudioListener_t2734094699 * L_0 = __this->get_m_audioListener_4();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		AudioListener_t2734094699 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.AudioListenerExtension::set_audioListener(UnityEngine.AudioListener)
extern "C" IL2CPP_METHOD_ATTR void AudioListenerExtension_set_audioListener_m3412289012 (AudioListenerExtension_t3242956547 * __this, AudioListener_t2734094699 * ___value0, const RuntimeMethod* method)
{
	{
		AudioListener_t2734094699 * L_0 = ___value0;
		__this->set_m_audioListener_4(L_0);
		return;
	}
}
// System.Single UnityEngine.AudioListenerExtension::ReadExtensionProperty(UnityEngine.PropertyName)
extern "C" IL2CPP_METHOD_ATTR float AudioListenerExtension_ReadExtensionProperty_m3059773029 (AudioListenerExtension_t3242956547 * __this, PropertyName_t3749835189  ___propertyName0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		goto IL_000c;
	}

IL_000c:
	{
		float L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.AudioListenerExtension::WriteExtensionProperty(UnityEngine.PropertyName,System.Single)
extern "C" IL2CPP_METHOD_ATTR void AudioListenerExtension_WriteExtensionProperty_m4064727398 (AudioListenerExtension_t3242956547 * __this, PropertyName_t3749835189  ___propertyName0, float ___propertyValue1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.AudioListenerExtension::ExtensionUpdate()
extern "C" IL2CPP_METHOD_ATTR void AudioListenerExtension_ExtensionUpdate_m1303405084 (AudioListenerExtension_t3242956547 * __this, const RuntimeMethod* method)
{
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
// System.String UnityEngine.AudioSettings::GetSpatializerPluginName()
extern "C" IL2CPP_METHOD_ATTR String_t* AudioSettings_GetSpatializerPluginName_m1324100978 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef String_t* (*AudioSettings_GetSpatializerPluginName_m1324100978_ftn) ();
	static AudioSettings_GetSpatializerPluginName_m1324100978_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSettings_GetSpatializerPluginName_m1324100978_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSettings::GetSpatializerPluginName()");
	String_t* retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Void UnityEngine.AudioSettings::InvokeOnAudioConfigurationChanged(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void AudioSettings_InvokeOnAudioConfigurationChanged_m3131294153 (RuntimeObject * __this /* static, unused */, bool ___deviceWasChanged0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioSettings_InvokeOnAudioConfigurationChanged_m3131294153_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AudioConfigurationChangeHandler_t2089929874 * L_0 = ((AudioSettings_t3587374600_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_t3587374600_il2cpp_TypeInfo_var))->get_OnAudioConfigurationChanged_0();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		AudioConfigurationChangeHandler_t2089929874 * L_1 = ((AudioSettings_t3587374600_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_t3587374600_il2cpp_TypeInfo_var))->get_OnAudioConfigurationChanged_0();
		bool L_2 = ___deviceWasChanged0;
		NullCheck(L_1);
		AudioConfigurationChangeHandler_Invoke_m1233557945(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void UnityEngine.AudioSettings::InvokeOnAudioManagerUpdate()
extern "C" IL2CPP_METHOD_ATTR void AudioSettings_InvokeOnAudioManagerUpdate_m4044425648 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioSettings_InvokeOnAudioManagerUpdate_m4044425648_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		AudioExtensionManager_Update_m3269307447(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AudioSettings::InvokeOnAudioSourcePlay(UnityEngine.AudioSource)
extern "C" IL2CPP_METHOD_ATTR void AudioSettings_InvokeOnAudioSourcePlay_m3298744573 (RuntimeObject * __this /* static, unused */, AudioSource_t3935305588 * ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioSettings_InvokeOnAudioSourcePlay_m3298744573_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AudioSourceExtension_t3064908834 * V_0 = NULL;
	AudioSourceExtension_t3064908834 * V_1 = NULL;
	{
		AudioSource_t3935305588 * L_0 = ___source0;
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		AudioSourceExtension_t3064908834 * L_1 = AudioExtensionManager_AddSpatializerExtension_m820561940(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		AudioSourceExtension_t3064908834 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_2, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		AudioSourceExtension_t3064908834 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		AudioExtensionManager_GetReadyToPlay_m1557263244(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_001a:
	{
		AudioSource_t3935305588 * L_5 = ___source0;
		NullCheck(L_5);
		AudioClip_t3680889665 * L_6 = AudioSource_get_clip_m1234340632(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_6, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0056;
		}
	}
	{
		AudioSource_t3935305588 * L_8 = ___source0;
		NullCheck(L_8);
		AudioClip_t3680889665 * L_9 = AudioSource_get_clip_m1234340632(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		bool L_10 = AudioClip_get_ambisonic_m3815052287(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0056;
		}
	}
	{
		AudioSource_t3935305588 * L_11 = ___source0;
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		AudioSourceExtension_t3064908834 * L_12 = AudioExtensionManager_AddAmbisonicDecoderExtension_m3197702864(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		AudioSourceExtension_t3064908834 * L_13 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_14 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_13, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0055;
		}
	}
	{
		AudioSourceExtension_t3064908834 * L_15 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		AudioExtensionManager_GetReadyToPlay_m1557263244(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
	}

IL_0055:
	{
	}

IL_0056:
	{
		return;
	}
}
// System.String UnityEngine.AudioSettings::GetAmbisonicDecoderPluginName()
extern "C" IL2CPP_METHOD_ATTR String_t* AudioSettings_GetAmbisonicDecoderPluginName_m19603540 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef String_t* (*AudioSettings_GetAmbisonicDecoderPluginName_m19603540_ftn) ();
	static AudioSettings_GetAmbisonicDecoderPluginName_m19603540_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSettings_GetAmbisonicDecoderPluginName_m19603540_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSettings::GetAmbisonicDecoderPluginName()");
	String_t* retVal = _il2cpp_icall_func();
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_AudioConfigurationChangeHandler_t2089929874 (AudioConfigurationChangeHandler_t2089929874 * __this, bool ___deviceWasChanged0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(static_cast<int32_t>(___deviceWasChanged0));

}
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void AudioConfigurationChangeHandler__ctor_m1059338375 (AudioConfigurationChangeHandler_t2089929874 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::Invoke(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void AudioConfigurationChangeHandler_Invoke_m1233557945 (AudioConfigurationChangeHandler_t2089929874 * __this, bool ___deviceWasChanged0, const RuntimeMethod* method)
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
						typedef void (*FunctionPointerType) (RuntimeObject *, bool, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___deviceWasChanged0, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, bool, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___deviceWasChanged0, targetMethod);
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
								GenericInterfaceActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___deviceWasChanged0);
							else
								GenericVirtActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___deviceWasChanged0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___deviceWasChanged0);
							else
								VirtActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___deviceWasChanged0);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___deviceWasChanged0, targetMethod);
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
					typedef void (*FunctionPointerType) (RuntimeObject *, bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___deviceWasChanged0, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___deviceWasChanged0, targetMethod);
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
							GenericInterfaceActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___deviceWasChanged0);
						else
							GenericVirtActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___deviceWasChanged0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___deviceWasChanged0);
						else
							VirtActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___deviceWasChanged0);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___deviceWasChanged0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.AudioSettings/AudioConfigurationChangeHandler::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* AudioConfigurationChangeHandler_BeginInvoke_m4104069447 (AudioConfigurationChangeHandler_t2089929874 * __this, bool ___deviceWasChanged0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioConfigurationChangeHandler_BeginInvoke_m4104069447_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &___deviceWasChanged0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void AudioConfigurationChangeHandler_EndInvoke_m4175380841 (AudioConfigurationChangeHandler_t2089929874 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// UnityEngine.AudioClip UnityEngine.AudioSource::get_clip()
extern "C" IL2CPP_METHOD_ATTR AudioClip_t3680889665 * AudioSource_get_clip_m1234340632 (AudioSource_t3935305588 * __this, const RuntimeMethod* method)
{
	typedef AudioClip_t3680889665 * (*AudioSource_get_clip_m1234340632_ftn) (AudioSource_t3935305588 *);
	static AudioSource_get_clip_m1234340632_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_clip_m1234340632_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_clip()");
	AudioClip_t3680889665 * retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
extern "C" IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_m1896551654 (AudioSource_t3935305588 * __this, const RuntimeMethod* method)
{
	typedef bool (*AudioSource_get_isPlaying_m1896551654_ftn) (AudioSource_t3935305588 *);
	static AudioSource_get_isPlaying_m1896551654_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_isPlaying_m1896551654_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_isPlaying()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.AudioSource::get_spatializeInternal()
extern "C" IL2CPP_METHOD_ATTR bool AudioSource_get_spatializeInternal_m2117549793 (AudioSource_t3935305588 * __this, const RuntimeMethod* method)
{
	typedef bool (*AudioSource_get_spatializeInternal_m2117549793_ftn) (AudioSource_t3935305588 *);
	static AudioSource_get_spatializeInternal_m2117549793_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_spatializeInternal_m2117549793_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_spatializeInternal()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.AudioSource::get_spatialize()
extern "C" IL2CPP_METHOD_ATTR bool AudioSource_get_spatialize_m3609701298 (AudioSource_t3935305588 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = AudioSource_get_spatializeInternal_m2117549793(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.AudioSource::GetNumExtensionProperties()
extern "C" IL2CPP_METHOD_ATTR int32_t AudioSource_GetNumExtensionProperties_m1231815209 (AudioSource_t3935305588 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*AudioSource_GetNumExtensionProperties_m1231815209_ftn) (AudioSource_t3935305588 *);
	static AudioSource_GetNumExtensionProperties_m1231815209_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_GetNumExtensionProperties_m1231815209_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::GetNumExtensionProperties()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.PropertyName UnityEngine.AudioSource::ReadExtensionName(System.Int32)
extern "C" IL2CPP_METHOD_ATTR PropertyName_t3749835189  AudioSource_ReadExtensionName_m725112169 (AudioSource_t3935305588 * __this, int32_t ___sourceIndex0, const RuntimeMethod* method)
{
	PropertyName_t3749835189  V_0;
	memset(&V_0, 0, sizeof(V_0));
	PropertyName_t3749835189  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		int32_t L_0 = ___sourceIndex0;
		AudioSource_INTERNAL_CALL_ReadExtensionName_m36001502(NULL /*static, unused*/, __this, L_0, (PropertyName_t3749835189 *)(&V_0), /*hidden argument*/NULL);
		PropertyName_t3749835189  L_1 = V_0;
		V_1 = L_1;
		goto IL_0011;
	}

IL_0011:
	{
		PropertyName_t3749835189  L_2 = V_1;
		return L_2;
	}
}
// System.Void UnityEngine.AudioSource::INTERNAL_CALL_ReadExtensionName(UnityEngine.AudioSource,System.Int32,UnityEngine.PropertyName&)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_INTERNAL_CALL_ReadExtensionName_m36001502 (RuntimeObject * __this /* static, unused */, AudioSource_t3935305588 * ___self0, int32_t ___sourceIndex1, PropertyName_t3749835189 * ___value2, const RuntimeMethod* method)
{
	typedef void (*AudioSource_INTERNAL_CALL_ReadExtensionName_m36001502_ftn) (AudioSource_t3935305588 *, int32_t, PropertyName_t3749835189 *);
	static AudioSource_INTERNAL_CALL_ReadExtensionName_m36001502_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_INTERNAL_CALL_ReadExtensionName_m36001502_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::INTERNAL_CALL_ReadExtensionName(UnityEngine.AudioSource,System.Int32,UnityEngine.PropertyName&)");
	_il2cpp_icall_func(___self0, ___sourceIndex1, ___value2);
}
// UnityEngine.PropertyName UnityEngine.AudioSource::ReadExtensionPropertyName(System.Int32)
extern "C" IL2CPP_METHOD_ATTR PropertyName_t3749835189  AudioSource_ReadExtensionPropertyName_m2761820692 (AudioSource_t3935305588 * __this, int32_t ___sourceIndex0, const RuntimeMethod* method)
{
	PropertyName_t3749835189  V_0;
	memset(&V_0, 0, sizeof(V_0));
	PropertyName_t3749835189  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		int32_t L_0 = ___sourceIndex0;
		AudioSource_INTERNAL_CALL_ReadExtensionPropertyName_m3643462071(NULL /*static, unused*/, __this, L_0, (PropertyName_t3749835189 *)(&V_0), /*hidden argument*/NULL);
		PropertyName_t3749835189  L_1 = V_0;
		V_1 = L_1;
		goto IL_0011;
	}

IL_0011:
	{
		PropertyName_t3749835189  L_2 = V_1;
		return L_2;
	}
}
// System.Void UnityEngine.AudioSource::INTERNAL_CALL_ReadExtensionPropertyName(UnityEngine.AudioSource,System.Int32,UnityEngine.PropertyName&)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_INTERNAL_CALL_ReadExtensionPropertyName_m3643462071 (RuntimeObject * __this /* static, unused */, AudioSource_t3935305588 * ___self0, int32_t ___sourceIndex1, PropertyName_t3749835189 * ___value2, const RuntimeMethod* method)
{
	typedef void (*AudioSource_INTERNAL_CALL_ReadExtensionPropertyName_m3643462071_ftn) (AudioSource_t3935305588 *, int32_t, PropertyName_t3749835189 *);
	static AudioSource_INTERNAL_CALL_ReadExtensionPropertyName_m3643462071_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_INTERNAL_CALL_ReadExtensionPropertyName_m3643462071_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::INTERNAL_CALL_ReadExtensionPropertyName(UnityEngine.AudioSource,System.Int32,UnityEngine.PropertyName&)");
	_il2cpp_icall_func(___self0, ___sourceIndex1, ___value2);
}
// System.Single UnityEngine.AudioSource::ReadExtensionPropertyValue(System.Int32)
extern "C" IL2CPP_METHOD_ATTR float AudioSource_ReadExtensionPropertyValue_m72717540 (AudioSource_t3935305588 * __this, int32_t ___sourceIndex0, const RuntimeMethod* method)
{
	typedef float (*AudioSource_ReadExtensionPropertyValue_m72717540_ftn) (AudioSource_t3935305588 *, int32_t);
	static AudioSource_ReadExtensionPropertyValue_m72717540_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_ReadExtensionPropertyValue_m72717540_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::ReadExtensionPropertyValue(System.Int32)");
	float retVal = _il2cpp_icall_func(__this, ___sourceIndex0);
	return retVal;
}
// System.Void UnityEngine.AudioSource::ClearExtensionProperties(UnityEngine.PropertyName)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_ClearExtensionProperties_m2116074582 (AudioSource_t3935305588 * __this, PropertyName_t3749835189  ___extensionName0, const RuntimeMethod* method)
{
	{
		AudioSource_INTERNAL_CALL_ClearExtensionProperties_m2159298662(NULL /*static, unused*/, __this, (PropertyName_t3749835189 *)(&___extensionName0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AudioSource::INTERNAL_CALL_ClearExtensionProperties(UnityEngine.AudioSource,UnityEngine.PropertyName&)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_INTERNAL_CALL_ClearExtensionProperties_m2159298662 (RuntimeObject * __this /* static, unused */, AudioSource_t3935305588 * ___self0, PropertyName_t3749835189 * ___extensionName1, const RuntimeMethod* method)
{
	typedef void (*AudioSource_INTERNAL_CALL_ClearExtensionProperties_m2159298662_ftn) (AudioSource_t3935305588 *, PropertyName_t3749835189 *);
	static AudioSource_INTERNAL_CALL_ClearExtensionProperties_m2159298662_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_INTERNAL_CALL_ClearExtensionProperties_m2159298662_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::INTERNAL_CALL_ClearExtensionProperties(UnityEngine.AudioSource,UnityEngine.PropertyName&)");
	_il2cpp_icall_func(___self0, ___extensionName1);
}
// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::AddSpatializerExtension(System.Type)
extern "C" IL2CPP_METHOD_ATTR AudioSourceExtension_t3064908834 * AudioSource_AddSpatializerExtension_m2560794359 (AudioSource_t3935305588 * __this, Type_t * ___extensionType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioSource_AddSpatializerExtension_m2560794359_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AudioSourceExtension_t3064908834 * V_0 = NULL;
	{
		AudioSourceExtension_t3064908834 * L_0 = __this->get_spatializerExtension_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		Type_t * L_2 = ___extensionType0;
		ScriptableObject_t2528358522 * L_3 = ScriptableObject_CreateInstance_m2611081756(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		__this->set_spatializerExtension_4(((AudioSourceExtension_t3064908834 *)IsInstClass((RuntimeObject*)L_3, AudioSourceExtension_t3064908834_il2cpp_TypeInfo_var)));
	}

IL_0025:
	{
		AudioSourceExtension_t3064908834 * L_4 = __this->get_spatializerExtension_4();
		V_0 = L_4;
		goto IL_0031;
	}

IL_0031:
	{
		AudioSourceExtension_t3064908834 * L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::AddAmbisonicExtension(System.Type)
extern "C" IL2CPP_METHOD_ATTR AudioSourceExtension_t3064908834 * AudioSource_AddAmbisonicExtension_m304476911 (AudioSource_t3935305588 * __this, Type_t * ___extensionType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioSource_AddAmbisonicExtension_m304476911_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AudioSourceExtension_t3064908834 * V_0 = NULL;
	{
		AudioSourceExtension_t3064908834 * L_0 = __this->get_ambisonicExtension_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		Type_t * L_2 = ___extensionType0;
		ScriptableObject_t2528358522 * L_3 = ScriptableObject_CreateInstance_m2611081756(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		__this->set_ambisonicExtension_5(((AudioSourceExtension_t3064908834 *)IsInstClass((RuntimeObject*)L_3, AudioSourceExtension_t3064908834_il2cpp_TypeInfo_var)));
	}

IL_0025:
	{
		AudioSourceExtension_t3064908834 * L_4 = __this->get_ambisonicExtension_5();
		V_0 = L_4;
		goto IL_0031;
	}

IL_0031:
	{
		AudioSourceExtension_t3064908834 * L_5 = V_0;
		return L_5;
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
// System.Void UnityEngine.AudioSourceExtension::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AudioSourceExtension__ctor_m3132593001 (AudioSourceExtension_t3064908834 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_ExtensionManagerUpdateIndex_5((-1));
		ScriptableObject__ctor_m1310743131(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.AudioSource UnityEngine.AudioSourceExtension::get_audioSource()
extern "C" IL2CPP_METHOD_ATTR AudioSource_t3935305588 * AudioSourceExtension_get_audioSource_m1465006871 (AudioSourceExtension_t3064908834 * __this, const RuntimeMethod* method)
{
	AudioSource_t3935305588 * V_0 = NULL;
	{
		AudioSource_t3935305588 * L_0 = __this->get_m_audioSource_4();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		AudioSource_t3935305588 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.AudioSourceExtension::set_audioSource(UnityEngine.AudioSource)
extern "C" IL2CPP_METHOD_ATTR void AudioSourceExtension_set_audioSource_m3729768988 (AudioSourceExtension_t3064908834 * __this, AudioSource_t3935305588 * ___value0, const RuntimeMethod* method)
{
	{
		AudioSource_t3935305588 * L_0 = ___value0;
		__this->set_m_audioSource_4(L_0);
		return;
	}
}
// System.Single UnityEngine.AudioSourceExtension::ReadExtensionProperty(UnityEngine.PropertyName)
extern "C" IL2CPP_METHOD_ATTR float AudioSourceExtension_ReadExtensionProperty_m2693120442 (AudioSourceExtension_t3064908834 * __this, PropertyName_t3749835189  ___propertyName0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		goto IL_000c;
	}

IL_000c:
	{
		float L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.AudioSourceExtension::WriteExtensionProperty(UnityEngine.PropertyName,System.Single)
extern "C" IL2CPP_METHOD_ATTR void AudioSourceExtension_WriteExtensionProperty_m2866033202 (AudioSourceExtension_t3064908834 * __this, PropertyName_t3749835189  ___propertyName0, float ___propertyValue1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.AudioSourceExtension::Play()
extern "C" IL2CPP_METHOD_ATTR void AudioSourceExtension_Play_m420799475 (AudioSourceExtension_t3064908834 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.AudioSourceExtension::Stop()
extern "C" IL2CPP_METHOD_ATTR void AudioSourceExtension_Stop_m387892536 (AudioSourceExtension_t3064908834 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.AudioSourceExtension::ExtensionUpdate()
extern "C" IL2CPP_METHOD_ATTR void AudioSourceExtension_ExtensionUpdate_m2790353999 (AudioSourceExtension_t3064908834 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.AudioSourceExtension::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void AudioSourceExtension_OnDestroy_m345467428 (AudioSourceExtension_t3064908834 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioSourceExtension_OnDestroy_m345467428_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		VirtActionInvoker0::Invoke(7 /* System.Void UnityEngine.AudioSourceExtension::Stop() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t3220897493_il2cpp_TypeInfo_var);
		AudioExtensionManager_RemoveExtensionFromManager_m442924172(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		AudioSource_t3935305588 * L_0 = AudioSourceExtension_get_audioSource_m1465006871(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0064;
		}
	}
	{
		AudioSource_t3935305588 * L_2 = AudioSourceExtension_get_audioSource_m1465006871(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		AudioSourceExtension_t3064908834 * L_3 = L_2->get_spatializerExtension_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_3, __this, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0041;
		}
	}
	{
		AudioSource_t3935305588 * L_5 = AudioSourceExtension_get_audioSource_m1465006871(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		L_5->set_spatializerExtension_4((AudioSourceExtension_t3064908834 *)NULL);
	}

IL_0041:
	{
		AudioSource_t3935305588 * L_6 = AudioSourceExtension_get_audioSource_m1465006871(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		AudioSourceExtension_t3064908834 * L_7 = L_6->get_ambisonicExtension_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_7, __this, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0063;
		}
	}
	{
		AudioSource_t3935305588 * L_9 = AudioSourceExtension_get_audioSource_m1465006871(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		L_9->set_ambisonicExtension_5((AudioSourceExtension_t3064908834 *)NULL);
	}

IL_0063:
	{
	}

IL_0064:
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::Finalize()
extern "C" IL2CPP_METHOD_ATTR void AudioSampleProvider_Finalize_m18935654 (AudioSampleProvider_t3950279772 * __this, const RuntimeMethod* method)
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
		AudioSampleProvider_Dispose_m1993565764(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::Dispose()
extern "C" IL2CPP_METHOD_ATTR void AudioSampleProvider_Dispose_m1993565764 (AudioSampleProvider_t3950279772 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioSampleProvider_Dispose_m1993565764_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = AudioSampleProvider_get_id_m2692334523(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		uint32_t L_1 = AudioSampleProvider_get_id_m2692334523(__this, /*hidden argument*/NULL);
		AudioSampleProvider_InternalSetScriptingPtr_m3742743270(NULL /*static, unused*/, L_1, (AudioSampleProvider_t3950279772 *)NULL, /*hidden argument*/NULL);
		AudioSampleProvider_set_id_m4177090282(__this, 0, /*hidden argument*/NULL);
	}

IL_0021:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GC_t959872083_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m1177400158(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.UInt32 UnityEngine.Experimental.Audio.AudioSampleProvider::get_id()
extern "C" IL2CPP_METHOD_ATTR uint32_t AudioSampleProvider_get_id_m2692334523 (AudioSampleProvider_t3950279772 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_U3CidU3Ek__BackingField_1();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::set_id(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void AudioSampleProvider_set_id_m4177090282 (AudioSampleProvider_t3950279772 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::InvokeSampleFramesAvailable(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void AudioSampleProvider_InvokeSampleFramesAvailable_m3478252833 (AudioSampleProvider_t3950279772 * __this, int32_t ___sampleFrameCount0, const RuntimeMethod* method)
{
	{
		SampleFramesHandler_t3208670351 * L_0 = __this->get_sampleFramesAvailable_6();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		SampleFramesHandler_t3208670351 * L_1 = __this->get_sampleFramesAvailable_6();
		int32_t L_2 = ___sampleFrameCount0;
		NullCheck(L_1);
		SampleFramesHandler_Invoke_m544261268(L_1, __this, L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::InvokeSampleFramesOverflow(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void AudioSampleProvider_InvokeSampleFramesOverflow_m2840062631 (AudioSampleProvider_t3950279772 * __this, int32_t ___droppedSampleFrameCount0, const RuntimeMethod* method)
{
	{
		SampleFramesHandler_t3208670351 * L_0 = __this->get_sampleFramesOverflow_7();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		SampleFramesHandler_t3208670351 * L_1 = __this->get_sampleFramesOverflow_7();
		int32_t L_2 = ___droppedSampleFrameCount0;
		NullCheck(L_1);
		SampleFramesHandler_Invoke_m544261268(L_1, __this, L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::InternalSetScriptingPtr(System.UInt32,UnityEngine.Experimental.Audio.AudioSampleProvider)
extern "C" IL2CPP_METHOD_ATTR void AudioSampleProvider_InternalSetScriptingPtr_m3742743270 (RuntimeObject * __this /* static, unused */, uint32_t ___providerId0, AudioSampleProvider_t3950279772 * ___provider1, const RuntimeMethod* method)
{
	typedef void (*AudioSampleProvider_InternalSetScriptingPtr_m3742743270_ftn) (uint32_t, AudioSampleProvider_t3950279772 *);
	static AudioSampleProvider_InternalSetScriptingPtr_m3742743270_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSampleProvider_InternalSetScriptingPtr_m3742743270_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Audio.AudioSampleProvider::InternalSetScriptingPtr(System.UInt32,UnityEngine.Experimental.Audio.AudioSampleProvider)");
	_il2cpp_icall_func(___providerId0, ___provider1);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  uint32_t DelegatePInvokeWrapper_ConsumeSampleFramesNativeFunction_t1497769677 (ConsumeSampleFramesNativeFunction_t1497769677 * __this, uint32_t ___providerId0, intptr_t ___interleavedSampleFrames1, uint32_t ___sampleFrameCount2, const RuntimeMethod* method)
{
	typedef uint32_t (CDECL *PInvokeFunc)(uint32_t, intptr_t, uint32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	uint32_t returnValue = il2cppPInvokeFunc(___providerId0, ___interleavedSampleFrames1, ___sampleFrameCount2);

	return returnValue;
}
// System.Void UnityEngine.Experimental.Audio.AudioSampleProvider/ConsumeSampleFramesNativeFunction::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ConsumeSampleFramesNativeFunction__ctor_m144532415 (ConsumeSampleFramesNativeFunction_t1497769677 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.UInt32 UnityEngine.Experimental.Audio.AudioSampleProvider/ConsumeSampleFramesNativeFunction::Invoke(System.UInt32,System.IntPtr,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR uint32_t ConsumeSampleFramesNativeFunction_Invoke_m1773312795 (ConsumeSampleFramesNativeFunction_t1497769677 * __this, uint32_t ___providerId0, intptr_t ___interleavedSampleFrames1, uint32_t ___sampleFrameCount2, const RuntimeMethod* method)
{
	uint32_t result = 0;
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
						typedef uint32_t (*FunctionPointerType) (RuntimeObject *, uint32_t, intptr_t, uint32_t, const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(NULL, ___providerId0, ___interleavedSampleFrames1, ___sampleFrameCount2, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef uint32_t (*FunctionPointerType) (RuntimeObject *, void*, uint32_t, intptr_t, uint32_t, const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___providerId0, ___interleavedSampleFrames1, ___sampleFrameCount2, targetMethod);
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
								result = GenericInterfaceFuncInvoker3< uint32_t, uint32_t, intptr_t, uint32_t >::Invoke(targetMethod, targetThis, ___providerId0, ___interleavedSampleFrames1, ___sampleFrameCount2);
							else
								result = GenericVirtFuncInvoker3< uint32_t, uint32_t, intptr_t, uint32_t >::Invoke(targetMethod, targetThis, ___providerId0, ___interleavedSampleFrames1, ___sampleFrameCount2);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = InterfaceFuncInvoker3< uint32_t, uint32_t, intptr_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___providerId0, ___interleavedSampleFrames1, ___sampleFrameCount2);
							else
								result = VirtFuncInvoker3< uint32_t, uint32_t, intptr_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___providerId0, ___interleavedSampleFrames1, ___sampleFrameCount2);
						}
					}
					else
					{
						typedef uint32_t (*FunctionPointerType) (void*, uint32_t, intptr_t, uint32_t, const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___providerId0, ___interleavedSampleFrames1, ___sampleFrameCount2, targetMethod);
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
					typedef uint32_t (*FunctionPointerType) (RuntimeObject *, uint32_t, intptr_t, uint32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(NULL, ___providerId0, ___interleavedSampleFrames1, ___sampleFrameCount2, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef uint32_t (*FunctionPointerType) (RuntimeObject *, void*, uint32_t, intptr_t, uint32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___providerId0, ___interleavedSampleFrames1, ___sampleFrameCount2, targetMethod);
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
							result = GenericInterfaceFuncInvoker3< uint32_t, uint32_t, intptr_t, uint32_t >::Invoke(targetMethod, targetThis, ___providerId0, ___interleavedSampleFrames1, ___sampleFrameCount2);
						else
							result = GenericVirtFuncInvoker3< uint32_t, uint32_t, intptr_t, uint32_t >::Invoke(targetMethod, targetThis, ___providerId0, ___interleavedSampleFrames1, ___sampleFrameCount2);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = InterfaceFuncInvoker3< uint32_t, uint32_t, intptr_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___providerId0, ___interleavedSampleFrames1, ___sampleFrameCount2);
						else
							result = VirtFuncInvoker3< uint32_t, uint32_t, intptr_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___providerId0, ___interleavedSampleFrames1, ___sampleFrameCount2);
					}
				}
				else
				{
					typedef uint32_t (*FunctionPointerType) (void*, uint32_t, intptr_t, uint32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___providerId0, ___interleavedSampleFrames1, ___sampleFrameCount2, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult UnityEngine.Experimental.Audio.AudioSampleProvider/ConsumeSampleFramesNativeFunction::BeginInvoke(System.UInt32,System.IntPtr,System.UInt32,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ConsumeSampleFramesNativeFunction_BeginInvoke_m342678987 (ConsumeSampleFramesNativeFunction_t1497769677 * __this, uint32_t ___providerId0, intptr_t ___interleavedSampleFrames1, uint32_t ___sampleFrameCount2, AsyncCallback_t3962456242 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConsumeSampleFramesNativeFunction_BeginInvoke_m342678987_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(UInt32_t2560061978_il2cpp_TypeInfo_var, &___providerId0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___interleavedSampleFrames1);
	__d_args[2] = Box(UInt32_t2560061978_il2cpp_TypeInfo_var, &___sampleFrameCount2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.UInt32 UnityEngine.Experimental.Audio.AudioSampleProvider/ConsumeSampleFramesNativeFunction::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR uint32_t ConsumeSampleFramesNativeFunction_EndInvoke_m2143737533 (ConsumeSampleFramesNativeFunction_t1497769677 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(uint32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SampleFramesHandler__ctor_m3908528909 (SampleFramesHandler_t3208670351 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::Invoke(UnityEngine.Experimental.Audio.AudioSampleProvider,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void SampleFramesHandler_Invoke_m544261268 (SampleFramesHandler_t3208670351 * __this, AudioSampleProvider_t3950279772 * ___provider0, uint32_t ___sampleFrameCount1, const RuntimeMethod* method)
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
						typedef void (*FunctionPointerType) (RuntimeObject *, AudioSampleProvider_t3950279772 *, uint32_t, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___provider0, ___sampleFrameCount1, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, AudioSampleProvider_t3950279772 *, uint32_t, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___provider0, ___sampleFrameCount1, targetMethod);
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
								GenericInterfaceActionInvoker2< AudioSampleProvider_t3950279772 *, uint32_t >::Invoke(targetMethod, targetThis, ___provider0, ___sampleFrameCount1);
							else
								GenericVirtActionInvoker2< AudioSampleProvider_t3950279772 *, uint32_t >::Invoke(targetMethod, targetThis, ___provider0, ___sampleFrameCount1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker2< AudioSampleProvider_t3950279772 *, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___provider0, ___sampleFrameCount1);
							else
								VirtActionInvoker2< AudioSampleProvider_t3950279772 *, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___provider0, ___sampleFrameCount1);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, AudioSampleProvider_t3950279772 *, uint32_t, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___provider0, ___sampleFrameCount1, targetMethod);
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
								GenericInterfaceActionInvoker1< uint32_t >::Invoke(targetMethod, ___provider0, ___sampleFrameCount1);
							else
								GenericVirtActionInvoker1< uint32_t >::Invoke(targetMethod, ___provider0, ___sampleFrameCount1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___provider0, ___sampleFrameCount1);
							else
								VirtActionInvoker1< uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___provider0, ___sampleFrameCount1);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (AudioSampleProvider_t3950279772 *, uint32_t, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___provider0, ___sampleFrameCount1, targetMethod);
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
					typedef void (*FunctionPointerType) (RuntimeObject *, AudioSampleProvider_t3950279772 *, uint32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___provider0, ___sampleFrameCount1, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, AudioSampleProvider_t3950279772 *, uint32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___provider0, ___sampleFrameCount1, targetMethod);
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
							GenericInterfaceActionInvoker2< AudioSampleProvider_t3950279772 *, uint32_t >::Invoke(targetMethod, targetThis, ___provider0, ___sampleFrameCount1);
						else
							GenericVirtActionInvoker2< AudioSampleProvider_t3950279772 *, uint32_t >::Invoke(targetMethod, targetThis, ___provider0, ___sampleFrameCount1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker2< AudioSampleProvider_t3950279772 *, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___provider0, ___sampleFrameCount1);
						else
							VirtActionInvoker2< AudioSampleProvider_t3950279772 *, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___provider0, ___sampleFrameCount1);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, AudioSampleProvider_t3950279772 *, uint32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___provider0, ___sampleFrameCount1, targetMethod);
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
							GenericInterfaceActionInvoker1< uint32_t >::Invoke(targetMethod, ___provider0, ___sampleFrameCount1);
						else
							GenericVirtActionInvoker1< uint32_t >::Invoke(targetMethod, ___provider0, ___sampleFrameCount1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___provider0, ___sampleFrameCount1);
						else
							VirtActionInvoker1< uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___provider0, ___sampleFrameCount1);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (AudioSampleProvider_t3950279772 *, uint32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___provider0, ___sampleFrameCount1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::BeginInvoke(UnityEngine.Experimental.Audio.AudioSampleProvider,System.UInt32,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SampleFramesHandler_BeginInvoke_m2992664336 (SampleFramesHandler_t3208670351 * __this, AudioSampleProvider_t3950279772 * ___provider0, uint32_t ___sampleFrameCount1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SampleFramesHandler_BeginInvoke_m2992664336_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___provider0;
	__d_args[1] = Box(UInt32_t2560061978_il2cpp_TypeInfo_var, &___sampleFrameCount1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void SampleFramesHandler_EndInvoke_m3715791887 (SampleFramesHandler_t3208670351 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
