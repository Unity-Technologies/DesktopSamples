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
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct VirtFuncInvoker7
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
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

// Mono.Globalization.Unicode.SimpleCollator
struct SimpleCollator_t2877834729;
// Mono.Interop.ComInteropProxy
struct ComInteropProxy_t1891481270;
// System.ArgumentException
struct ArgumentException_t132251570;
// System.ArgumentNullException
struct ArgumentNullException_t1615371798;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t777629997;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char
struct Char_t3634460470;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2<System.Guid,System.Type>
struct Dictionary_2_t1532962293;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t3046556399;
// System.Collections.Generic.Dictionary`2<System.String,Mono.Globalization.Unicode.SimpleCollator>
struct Dictionary_2_t2663091028;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t3943099367;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t128053199;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Collections.IComparer
struct IComparer_t1540313114;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t1493878338;
// System.Delegate
struct Delegate_t1188392813;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.EventArgs
struct EventArgs_t3591816995;
// System.Exception
struct Exception_t;
// System.Globalization.Calendar
struct Calendar_t1661121569;
// System.Globalization.CompareInfo
struct CompareInfo_t1092934962;
// System.Globalization.CultureData
struct CultureData_t1899656083;
// System.Globalization.CultureInfo
struct CultureInfo_t4157843068;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t2405853701;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t435877138;
// System.Globalization.SortVersion
struct SortVersion_t3332565609;
// System.Globalization.TextInfo
struct TextInfo_t3810425522;
// System.Globalization.TokenHashValue[]
struct TokenHashValueU5BU5D_t818561467;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.IConvertible
struct IConvertible_t2977365677;
// System.IFormatProvider
struct IFormatProvider_t2518567562;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t1578797820;
// System.InputRecord
struct InputRecord_t2660212290;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.InvalidCastException
struct InvalidCastException_t3927145244;
// System.InvalidOperationException
struct InvalidOperationException_t56020091;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_t2567786569;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t1707895399;
// System.MarshalByRefObject
struct MarshalByRefObject_t2760389100;
// System.MonoTypeInfo
struct MonoTypeInfo_t3366989025;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Reflection.Assembly
struct Assembly_t;
// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_t2120639521;
// System.Reflection.Binder
struct Binder_t2999457153;
// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t359885250;
// System.Reflection.InvalidFilterCriteriaException
struct InvalidFilterCriteriaException_t2427731508;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.Missing
struct Missing_t508514592;
// System.Reflection.Module
struct Module_t2987026101;
// System.Reflection.RuntimeAssembly
struct RuntimeAssembly_t1451753063;
// System.Reflection.RuntimeConstructorInfo
struct RuntimeConstructorInfo_t1806616898;
// System.Reflection.TypeFilter
struct TypeFilter_t2356120900;
// System.Runtime.InteropServices.COMException
struct COMException_t1620828383;
// System.Runtime.InteropServices.InvalidComObjectException
struct InvalidComObjectException_t3939298412;
// System.Runtime.InteropServices.ObjectCreationDelegate
struct ObjectCreationDelegate_t3727257075;
// System.Runtime.Remoting.Contexts.Context
struct Context_t3285446944;
// System.Runtime.Remoting.Contexts.DynamicPropertyCollection
struct DynamicPropertyCollection_t652373272;
// System.Runtime.Remoting.Identity
struct Identity_t1873279371;
// System.Runtime.Remoting.Lifetime.Lease
struct Lease_t4051722892;
// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t2514424906;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t2141158884;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t2171992254;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.Runtime.Serialization.SerializationException
struct SerializationException_t3941511869;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.RuntimeType
struct RuntimeType_t3636489352;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// System.Security.PermissionSet
struct PermissionSet_t223948603;
// System.Security.Policy.Evidence
struct Evidence_t2008144148;
// System.Security.Principal.IPrincipal
struct IPrincipal_t2343618843;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.SystemException
struct SystemException_t176217640;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t2427220165;
// System.Threading.ExecutionContext
struct ExecutionContext_t1748372627;
// System.Threading.InternalThread
struct InternalThread_t95296544;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t2750080073;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t2326897723;
// System.Threading.Thread
struct Thread_t2300836069;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.UInt32[]
struct UInt32U5BU5D_t2770800703;
// System.UnauthorizedAccessException
struct UnauthorizedAccessException_t490705335;
// System.UnhandledExceptionEventArgs
struct UnhandledExceptionEventArgs_t2886101344;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_t3101989324;
// System.UnitySerializationHolder
struct UnitySerializationHolder_t431912834;
// System.ValueType
struct ValueType_t3640485471;
// System.Version
struct Version_t3456873960;
// System.Void
struct Void_t1185182177;
// System.WeakReference
struct WeakReference_t1334886716;
// System.WindowsConsoleDriver
struct WindowsConsoleDriver_t3991887195;
// System.__ComObject
struct __ComObject_t2735933417;
// System.__Filters
struct __Filters_t550753867;
// System.__Il2CppComDelegate
struct __Il2CppComDelegate_t1102178620;
// System.__Il2CppComObject
struct Il2CppComObject;

extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentNullException_t1615371798_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var;
extern RuntimeClass* ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var;
extern RuntimeClass* COMException_t1620828383_il2cpp_TypeInfo_var;
extern RuntimeClass* CharU5BU5D_t3528271667_il2cpp_TypeInfo_var;
extern RuntimeClass* Char_t3634460470_il2cpp_TypeInfo_var;
extern RuntimeClass* ConstructorInfo_t5769829_il2cpp_TypeInfo_var;
extern RuntimeClass* Convert_t2465617642_il2cpp_TypeInfo_var;
extern RuntimeClass* DBNull_t3725197148_il2cpp_TypeInfo_var;
extern RuntimeClass* DateTimeParse_t715850018_il2cpp_TypeInfo_var;
extern RuntimeClass* Empty_t4129602447_il2cpp_TypeInfo_var;
extern RuntimeClass* EventArgs_t3591816995_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* ExtensibleClassFactory_t574234438_il2cpp_TypeInfo_var;
extern RuntimeClass* FieldInfo_t_il2cpp_TypeInfo_var;
extern RuntimeClass* HashHelpers_t1653534276_il2cpp_TypeInfo_var;
extern RuntimeClass* IndexOutOfRangeException_t1578797820_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32U5BU5D_t385246372_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidCastException_t3927145244_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidComObjectException_t3939298412_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidFilterCriteriaException_t2427731508_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidOperationException_t56020091_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t128053199_il2cpp_TypeInfo_var;
extern RuntimeClass* Marshal_t1757017490_il2cpp_TypeInfo_var;
extern RuntimeClass* MethodBase_t_il2cpp_TypeInfo_var;
extern RuntimeClass* MethodInfo_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Missing_t508514592_il2cpp_TypeInfo_var;
extern RuntimeClass* Module_t2987026101_il2cpp_TypeInfo_var;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
extern RuntimeClass* RuntimeType_t3636489352_il2cpp_TypeInfo_var;
extern RuntimeClass* SendOrPostCallback_t2750080073_il2cpp_TypeInfo_var;
extern RuntimeClass* SerializationException_t3941511869_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt32_t2560061978_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt64_t4134040092_il2cpp_TypeInfo_var;
extern RuntimeClass* UIntPtr_t_il2cpp_TypeInfo_var;
extern RuntimeClass* ValueTuple_t3168505507_il2cpp_TypeInfo_var;
extern RuntimeClass* Version_t3456873960_il2cpp_TypeInfo_var;
extern RuntimeClass* __ComObject_t2735933417_il2cpp_TypeInfo_var;
extern RuntimeClass* __DTString_t2014593278_il2cpp_TypeInfo_var;
extern RuntimeClass* __Filters_t550753867_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1071424308;
extern String_t* _stringLiteral1182144617;
extern String_t* _stringLiteral1187417246;
extern String_t* _stringLiteral1215330868;
extern String_t* _stringLiteral1245918466;
extern String_t* _stringLiteral1313207612;
extern String_t* _stringLiteral1316692200;
extern String_t* _stringLiteral1363226343;
extern String_t* _stringLiteral1364036397;
extern String_t* _stringLiteral1498318814;
extern String_t* _stringLiteral1622425596;
extern String_t* _stringLiteral2037252898;
extern String_t* _stringLiteral209558951;
extern String_t* _stringLiteral238790419;
extern String_t* _stringLiteral2432405111;
extern String_t* _stringLiteral2448690427;
extern String_t* _stringLiteral2725392681;
extern String_t* _stringLiteral2762033855;
extern String_t* _stringLiteral2789494635;
extern String_t* _stringLiteral2789887848;
extern String_t* _stringLiteral2814066682;
extern String_t* _stringLiteral2922588279;
extern String_t* _stringLiteral2976560351;
extern String_t* _stringLiteral2994918982;
extern String_t* _stringLiteral3104458722;
extern String_t* _stringLiteral3187820736;
extern String_t* _stringLiteral3234942771;
extern String_t* _stringLiteral3245515088;
extern String_t* _stringLiteral3283586028;
extern String_t* _stringLiteral3378664767;
extern String_t* _stringLiteral3407159193;
extern String_t* _stringLiteral3450976136;
extern String_t* _stringLiteral3451500490;
extern String_t* _stringLiteral3452614540;
extern String_t* _stringLiteral3452614541;
extern String_t* _stringLiteral3452614542;
extern String_t* _stringLiteral3452614544;
extern String_t* _stringLiteral3798051137;
extern String_t* _stringLiteral3927933503;
extern String_t* _stringLiteral3976682977;
extern String_t* _stringLiteral4055290125;
extern String_t* _stringLiteral419133523;
extern String_t* _stringLiteral4287968739;
extern String_t* _stringLiteral437191301;
extern String_t* _stringLiteral532335187;
extern String_t* _stringLiteral731089754;
extern String_t* _stringLiteral79347;
extern String_t* _stringLiteral98117656;
extern const RuntimeMethod* List_1_Add_m2080863212_RuntimeMethod_var;
extern const RuntimeMethod* List_1_ToArray_m1469074435_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m1204004817_RuntimeMethod_var;
extern const RuntimeMethod* UInt32_CompareTo_m362578384_RuntimeMethod_var;
extern const RuntimeMethod* UInt32_System_IConvertible_ToDateTime_m2767723441_RuntimeMethod_var;
extern const RuntimeMethod* UInt64_CompareTo_m3619843473_RuntimeMethod_var;
extern const RuntimeMethod* UInt64_System_IConvertible_ToDateTime_m3434604642_RuntimeMethod_var;
extern const RuntimeMethod* UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData_m1767630151_RuntimeMethod_var;
extern const RuntimeMethod* UnSafeCharBuffer_AppendString_m2223303597_RuntimeMethod_var;
extern const RuntimeMethod* UnitySerializationHolder_GetObjectData_m3377455907_RuntimeMethod_var;
extern const RuntimeMethod* UnitySerializationHolder_GetRealObject_m1624354633_RuntimeMethod_var;
extern const RuntimeMethod* UnitySerializationHolder_ThrowInsufficientInformation_m1747464776_RuntimeMethod_var;
extern const RuntimeMethod* UnitySerializationHolder__ctor_m3869442095_RuntimeMethod_var;
extern const RuntimeMethod* ValueTuple_System_Collections_IStructuralComparable_CompareTo_m1147772089_RuntimeMethod_var;
extern const RuntimeMethod* ValueTuple_System_IComparable_CompareTo_m3152321575_RuntimeMethod_var;
extern const RuntimeMethod* Version_CompareTo_m1662919407_RuntimeMethod_var;
extern const RuntimeMethod* Version_ToString_m3654989516_RuntimeMethod_var;
extern const RuntimeMethod* Version__ctor_m3537335798_RuntimeMethod_var;
extern const RuntimeMethod* Version__ctor_m417728625_RuntimeMethod_var;
extern const RuntimeMethod* Version_op_LessThanOrEqual_m666140174_RuntimeMethod_var;
extern const RuntimeMethod* Version_op_LessThan_m3745610070_RuntimeMethod_var;
extern const RuntimeMethod* WeakReference_GetObjectData_m2192383095_RuntimeMethod_var;
extern const RuntimeMethod* WeakReference__ctor_m1244067698_RuntimeMethod_var;
extern const RuntimeMethod* WindowsConsoleDriver_ReadKey_m209631140_RuntimeMethod_var;
extern const RuntimeMethod* __ComObject_CheckIUnknown_m2979951207_RuntimeMethod_var;
extern const RuntimeMethod* __ComObject_CreateIUnknown_m2252770198_RuntimeMethod_var;
extern const RuntimeMethod* __ComObject_GetCLSID_m273875985_RuntimeMethod_var;
extern const RuntimeMethod* __ComObject_U3CFinalizeU3Eb__6_0_m3058185046_RuntimeMethod_var;
extern const RuntimeMethod* __ComObject_get_IDispatch_m3519249931_RuntimeMethod_var;
extern const RuntimeMethod* __ComObject_get_IUnknown_m3992083790_RuntimeMethod_var;
extern const RuntimeMethod* __Filters_FilterAttribute_m1188844130_RuntimeMethod_var;
extern const RuntimeMethod* __Filters_FilterIgnoreCase_m1077950596_RuntimeMethod_var;
extern const RuntimeMethod* __Filters_FilterName_m969729198_RuntimeMethod_var;
extern const RuntimeType* IDispatch_t1631546224_0_0_0_var;
extern const RuntimeType* Int32U5BU5D_t385246372_0_0_0_var;
extern const RuntimeType* MethodBase_t_0_0_0_var;
extern const RuntimeType* RuntimeObject_0_0_0_var;
extern const RuntimeType* String_t_0_0_0_var;
extern const RuntimeType* SynchronizationContext_t2326897723_0_0_0_var;
extern const RuntimeType* TypeU5BU5D_t3940880105_0_0_0_var;
extern const RuntimeType* Type_t_0_0_0_var;
extern const RuntimeType* UnitySerializationHolder_t431912834_0_0_0_var;
extern const uint32_t CFHelpers_CreateCertificateFromData_m702581168_MetadataUsageId;
extern const uint32_t CFHelpers_FetchDataBuffer_m2260522698_MetadataUsageId;
extern const uint32_t CFHelpers_FetchString_m1875874129_MetadataUsageId;
extern const uint32_t UInt32_CompareTo_m362578384_MetadataUsageId;
extern const uint32_t UInt32_Equals_m351935437_MetadataUsageId;
extern const uint32_t UInt32_System_IConvertible_ToBoolean_m1763673183_MetadataUsageId;
extern const uint32_t UInt32_System_IConvertible_ToByte_m4072781199_MetadataUsageId;
extern const uint32_t UInt32_System_IConvertible_ToChar_m1873050533_MetadataUsageId;
extern const uint32_t UInt32_System_IConvertible_ToDateTime_m2767723441_MetadataUsageId;
extern const uint32_t UInt32_System_IConvertible_ToDecimal_m675004071_MetadataUsageId;
extern const uint32_t UInt32_System_IConvertible_ToDouble_m940039456_MetadataUsageId;
extern const uint32_t UInt32_System_IConvertible_ToInt16_m1659441601_MetadataUsageId;
extern const uint32_t UInt32_System_IConvertible_ToInt32_m220754611_MetadataUsageId;
extern const uint32_t UInt32_System_IConvertible_ToInt64_m2261037378_MetadataUsageId;
extern const uint32_t UInt32_System_IConvertible_ToSByte_m1061556466_MetadataUsageId;
extern const uint32_t UInt32_System_IConvertible_ToSingle_m1272823424_MetadataUsageId;
extern const uint32_t UInt32_System_IConvertible_ToType_m922356584_MetadataUsageId;
extern const uint32_t UInt32_System_IConvertible_ToUInt16_m3125657960_MetadataUsageId;
extern const uint32_t UInt32_System_IConvertible_ToUInt64_m1094958903_MetadataUsageId;
extern const uint32_t UInt64_CompareTo_m3619843473_MetadataUsageId;
extern const uint32_t UInt64_Equals_m1879425698_MetadataUsageId;
extern const uint32_t UInt64_System_IConvertible_ToBoolean_m3071416000_MetadataUsageId;
extern const uint32_t UInt64_System_IConvertible_ToByte_m1501504925_MetadataUsageId;
extern const uint32_t UInt64_System_IConvertible_ToChar_m2074245892_MetadataUsageId;
extern const uint32_t UInt64_System_IConvertible_ToDateTime_m3434604642_MetadataUsageId;
extern const uint32_t UInt64_System_IConvertible_ToDecimal_m806594027_MetadataUsageId;
extern const uint32_t UInt64_System_IConvertible_ToDouble_m602078108_MetadataUsageId;
extern const uint32_t UInt64_System_IConvertible_ToInt16_m3895479143_MetadataUsageId;
extern const uint32_t UInt64_System_IConvertible_ToInt32_m949522652_MetadataUsageId;
extern const uint32_t UInt64_System_IConvertible_ToInt64_m4241475606_MetadataUsageId;
extern const uint32_t UInt64_System_IConvertible_ToSByte_m30962591_MetadataUsageId;
extern const uint32_t UInt64_System_IConvertible_ToSingle_m925613075_MetadataUsageId;
extern const uint32_t UInt64_System_IConvertible_ToType_m4049257834_MetadataUsageId;
extern const uint32_t UInt64_System_IConvertible_ToUInt16_m4165747038_MetadataUsageId;
extern const uint32_t UInt64_System_IConvertible_ToUInt32_m2784653358_MetadataUsageId;
extern const uint32_t UIntPtr_Equals_m1316671746_MetadataUsageId;
extern const uint32_t UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData_m1767630151_MetadataUsageId;
extern const uint32_t UIntPtr_ToString_m984583492_MetadataUsageId;
extern const uint32_t UIntPtr__cctor_m3513964473_MetadataUsageId;
extern const uint32_t UnSafeCharBuffer_AppendString_m2223303597_MetadataUsageId;
extern const uint32_t UnauthorizedAccessException__ctor_m246605039_MetadataUsageId;
extern const uint32_t UnhandledExceptionEventArgs__ctor_m224348470_MetadataUsageId;
extern const uint32_t UnitySerializationHolder_AddElementTypes_m2711578409_MetadataUsageId;
extern const uint32_t UnitySerializationHolder_GetObjectData_m3377455907_MetadataUsageId;
extern const uint32_t UnitySerializationHolder_GetRealObject_m1624354633_MetadataUsageId;
extern const uint32_t UnitySerializationHolder_GetUnitySerializationInfo_m3060468266_MetadataUsageId;
extern const uint32_t UnitySerializationHolder_GetUnitySerializationInfo_m3966690610_MetadataUsageId;
extern const uint32_t UnitySerializationHolder_GetUnitySerializationInfo_m927411785_MetadataUsageId;
extern const uint32_t UnitySerializationHolder_ThrowInsufficientInformation_m1747464776_MetadataUsageId;
extern const uint32_t UnitySerializationHolder__ctor_m3869442095_MetadataUsageId;
extern const uint32_t ValueTuple_CombineHashCodes_m2782652282_MetadataUsageId;
extern const uint32_t ValueTuple_Equals_m3777586424_MetadataUsageId;
extern const uint32_t ValueTuple_System_Collections_IStructuralComparable_CompareTo_m1147772089_MetadataUsageId;
extern const uint32_t ValueTuple_System_Collections_IStructuralEquatable_Equals_m1158377527_MetadataUsageId;
extern const uint32_t ValueTuple_System_IComparable_CompareTo_m3152321575_MetadataUsageId;
extern const uint32_t ValueTuple_ToString_m2213345710_MetadataUsageId;
extern const uint32_t ValueType_DefaultEquals_m2927252100_MetadataUsageId;
extern const uint32_t Variant_Clear_m3388694274_MetadataUsageId;
extern const uint32_t Version_Clone_m1749041863_MetadataUsageId;
extern const uint32_t Version_CompareTo_m1662919407_MetadataUsageId;
extern const uint32_t Version_CompareTo_m3146217210_MetadataUsageId;
extern const uint32_t Version_Equals_m1564427710_MetadataUsageId;
extern const uint32_t Version_Equals_m3073813696_MetadataUsageId;
extern const uint32_t Version_ToString_m3654989516_MetadataUsageId;
extern const uint32_t Version__cctor_m3568671087_MetadataUsageId;
extern const uint32_t Version__ctor_m3537335798_MetadataUsageId;
extern const uint32_t Version__ctor_m417728625_MetadataUsageId;
extern const uint32_t Version_op_GreaterThanOrEqual_m474945801_MetadataUsageId;
extern const uint32_t Version_op_Inequality_m1696193441_MetadataUsageId;
extern const uint32_t Version_op_LessThanOrEqual_m666140174_MetadataUsageId;
extern const uint32_t Version_op_LessThan_m3745610070_MetadataUsageId;
extern const uint32_t WeakReference_GetObjectData_m2192383095_MetadataUsageId;
extern const uint32_t WeakReference__ctor_m1244067698_MetadataUsageId;
extern const uint32_t WindowsConsoleDriver_ReadKey_m209631140_MetadataUsageId;
extern const uint32_t __ComObject_CheckIUnknown_m2979951207_MetadataUsageId;
extern const uint32_t __ComObject_CreateIUnknown_m2252770198_MetadataUsageId;
extern const uint32_t __ComObject_Equals_m3128350380_MetadataUsageId;
extern const uint32_t __ComObject_Finalize_m2071896946_MetadataUsageId;
extern const uint32_t __ComObject_GetCLSID_m273875985_MetadataUsageId;
extern const uint32_t __ComObject_InitializeApartmentDetails_m739460630_MetadataUsageId;
extern const uint32_t __ComObject_Initialize_m2996039964_MetadataUsageId;
extern const uint32_t __ComObject__ctor_m930682493_MetadataUsageId;
extern const uint32_t __ComObject_get_IDispatch_m3519249931_MetadataUsageId;
extern const uint32_t __ComObject_get_IID_IDispatch_m3385651041_MetadataUsageId;
extern const uint32_t __ComObject_get_IID_IUnknown_m729737940_MetadataUsageId;
extern const uint32_t __ComObject_get_IUnknown_m3992083790_MetadataUsageId;
extern const uint32_t __DTString_GetNextDigit_m3564891386_MetadataUsageId;
extern const uint32_t __DTString_GetRegularToken_m3127405658_MetadataUsageId;
extern const uint32_t __DTString_GetSeparatorToken_m2062126902_MetadataUsageId;
extern const uint32_t __DTString_MatchSpecifiedWords_m1748097800_MetadataUsageId;
extern const uint32_t __DTString_RemoveLeadingInQuoteSpaces_m695439123_MetadataUsageId;
extern const uint32_t __DTString_RemoveTrailingInQuoteSpaces_m4285619600_MetadataUsageId;
extern const uint32_t __DTString_SkipWhiteSpaceCurrent_m2113872575_MetadataUsageId;
extern const uint32_t __DTString_SkipWhiteSpaces_m2053058269_MetadataUsageId;
extern const uint32_t __DTString_TrimTail_m653960243_MetadataUsageId;
extern const uint32_t __DTString__cctor_m3069308443_MetadataUsageId;
extern const uint32_t __Filters_FilterAttribute_m1188844130_MetadataUsageId;
extern const uint32_t __Filters_FilterIgnoreCase_m1077950596_MetadataUsageId;
extern const uint32_t __Filters_FilterName_m969729198_MetadataUsageId;
extern const uint32_t __Filters__cctor_m18745359_MetadataUsageId;
struct Assembly_t_marshaled_com;
struct Assembly_t_marshaled_pinvoke;
struct ComInteropProxy_t1891481270;;
struct ComInteropProxy_t1891481270_marshaled_com;
struct ComInteropProxy_t1891481270_marshaled_com;;
struct ComInteropProxy_t1891481270_marshaled_pinvoke;
struct ComInteropProxy_t1891481270_marshaled_pinvoke;;
struct Context_t3285446944_marshaled_com;
struct Context_t3285446944_marshaled_pinvoke;
struct CultureData_t1899656083_marshaled_com;
struct CultureData_t1899656083_marshaled_pinvoke;
struct CultureInfo_t4157843068_marshaled_com;
struct CultureInfo_t4157843068_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct InputRecord_t2660212290;;
struct InputRecord_t2660212290_marshaled_pinvoke;
struct InputRecord_t2660212290_marshaled_pinvoke;;
struct MarshalByRefObject_t2760389100_marshaled_com;
struct MarshalByRefObject_t2760389100_marshaled_pinvoke;
struct __ComObject_t2735933417_marshaled_com;
struct __ComObject_t2735933417_marshaled_pinvoke;

struct ByteU5BU5D_t4116647657;
struct CharU5BU5D_t3528271667;
struct DelegateU5BU5D_t1703627840;
struct Int32U5BU5D_t385246372;
struct ObjectU5BU5D_t2843939325;
struct StringU5BU5D_t1281789340;
struct TypeU5BU5D_t3940880105;


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
// Windows.Foundation.IStringable
struct NOVTABLE IStringable_t1634798504 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStringable_ToString_m698137009(Il2CppHString* comReturnValue) = 0;
};
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
#ifndef LIST_1_T128053199_H
#define LIST_1_T128053199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Int32>
struct  List_1_t128053199  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t385246372* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____items_1)); }
	inline Int32U5BU5D_t385246372* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t385246372** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t385246372* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t128053199_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t385246372* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t128053199_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t385246372* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t385246372** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t385246372* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T128053199_H
#ifndef DBNULL_T3725197148_H
#define DBNULL_T3725197148_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DBNull
struct  DBNull_t3725197148  : public RuntimeObject
{
public:

public:
};

struct DBNull_t3725197148_StaticFields
{
public:
	// System.DBNull System.DBNull::Value
	DBNull_t3725197148 * ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(DBNull_t3725197148_StaticFields, ___Value_0)); }
	inline DBNull_t3725197148 * get_Value_0() const { return ___Value_0; }
	inline DBNull_t3725197148 ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(DBNull_t3725197148 * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((&___Value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBNULL_T3725197148_H
#ifndef EMPTY_T4129602447_H
#define EMPTY_T4129602447_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Empty
struct  Empty_t4129602447  : public RuntimeObject
{
public:

public:
};

struct Empty_t4129602447_StaticFields
{
public:
	// System.Empty System.Empty::Value
	Empty_t4129602447 * ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(Empty_t4129602447_StaticFields, ___Value_0)); }
	inline Empty_t4129602447 * get_Value_0() const { return ___Value_0; }
	inline Empty_t4129602447 ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(Empty_t4129602447 * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((&___Value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EMPTY_T4129602447_H
#ifndef EVENTARGS_T3591816995_H
#define EVENTARGS_T3591816995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t3591816995  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t3591816995_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t3591816995 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t3591816995_StaticFields, ___Empty_0)); }
	inline EventArgs_t3591816995 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t3591816995 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t3591816995 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T3591816995_H
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
#ifndef CULTUREINFO_T4157843068_H
#define CULTUREINFO_T4157843068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CultureInfo
struct  CultureInfo_t4157843068  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t435877138 * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t2405853701 * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_t3810425522 * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t1281789340* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1092934962 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t1661121569 * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t4157843068 * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_t4116647657* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_t1899656083 * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___numInfo_10)); }
	inline NumberFormatInfo_t435877138 * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_t435877138 ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_t435877138 * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((&___numInfo_10), value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_t2405853701 * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_t2405853701 ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_t2405853701 * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((&___dateTimeInfo_11), value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textInfo_12)); }
	inline TextInfo_t3810425522 * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_t3810425522 ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_t3810425522 * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((&___textInfo_12), value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_13), value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((&___englishname_14), value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((&___nativename_15), value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((&___iso3lang_16), value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((&___iso2lang_17), value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((&___win3lang_18), value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((&___territory_19), value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___native_calendar_names_20)); }
	inline StringU5BU5D_t1281789340* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_t1281789340** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_t1281789340* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((&___native_calendar_names_20), value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___compareInfo_21)); }
	inline CompareInfo_t1092934962 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_t1092934962 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_t1092934962 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((&___compareInfo_21), value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___calendar_24)); }
	inline Calendar_t1661121569 * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_t1661121569 ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_t1661121569 * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((&___calendar_24), value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_culture_25)); }
	inline CultureInfo_t4157843068 * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t4157843068 ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t4157843068 * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((&___parent_culture_25), value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_t4116647657* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_t4116647657** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_t4116647657* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((&___cached_serialized_form_27), value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_cultureData_28)); }
	inline CultureData_t1899656083 * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_t1899656083 ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_t1899656083 * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_cultureData_28), value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t4157843068_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t4157843068 * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t4157843068 * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t4157843068 * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t4157843068 * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t3046556399 * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_t3943099367 * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t4157843068 * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t4157843068 ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t4157843068 * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((&___invariant_culture_info_0), value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((&___shared_table_lock_1), value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t4157843068 * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t4157843068 ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t4157843068 * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((&___default_current_culture_2), value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t4157843068 * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t4157843068 ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t4157843068 * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultThreadCurrentUICulture_33), value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t4157843068 * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t4157843068 ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t4157843068 * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultThreadCurrentCulture_34), value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_t3046556399 * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_t3046556399 ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_t3046556399 * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_number_35), value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_t3943099367 * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_t3943099367 ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_t3943099367 * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_name_36), value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t4157843068_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t435877138 * ___numInfo_10;
	DateTimeFormatInfo_t2405853701 * ___dateTimeInfo_11;
	TextInfo_t3810425522 * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1092934962 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t1661121569 * ___calendar_24;
	CultureInfo_t4157843068_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	uint8_t* ___cached_serialized_form_27;
	CultureData_t1899656083_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t4157843068_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t435877138 * ___numInfo_10;
	DateTimeFormatInfo_t2405853701 * ___dateTimeInfo_11;
	TextInfo_t3810425522 * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1092934962 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t1661121569 * ___calendar_24;
	CultureInfo_t4157843068_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	uint8_t* ___cached_serialized_form_27;
	CultureData_t1899656083_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
#endif // CULTUREINFO_T4157843068_H
#ifndef MARSHALBYREFOBJECT_T2760389100_H
#define MARSHALBYREFOBJECT_T2760389100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t2760389100  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t2342208608 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t2760389100, ____identity_0)); }
	inline ServerIdentity_t2342208608 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t2342208608 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t2342208608 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t2760389100_marshaled_pinvoke
{
	ServerIdentity_t2342208608 * ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t2760389100_marshaled_com
{
	ServerIdentity_t2342208608 * ____identity_0;
};
#endif // MARSHALBYREFOBJECT_T2760389100_H
#ifndef HASHHELPERS_T1653534276_H
#define HASHHELPERS_T1653534276_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Numerics.Hashing.HashHelpers
struct  HashHelpers_t1653534276  : public RuntimeObject
{
public:

public:
};

struct HashHelpers_t1653534276_StaticFields
{
public:
	// System.Int32 System.Numerics.Hashing.HashHelpers::RandomSeed
	int32_t ___RandomSeed_0;

public:
	inline static int32_t get_offset_of_RandomSeed_0() { return static_cast<int32_t>(offsetof(HashHelpers_t1653534276_StaticFields, ___RandomSeed_0)); }
	inline int32_t get_RandomSeed_0() const { return ___RandomSeed_0; }
	inline int32_t* get_address_of_RandomSeed_0() { return &___RandomSeed_0; }
	inline void set_RandomSeed_0(int32_t value)
	{
		___RandomSeed_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHHELPERS_T1653534276_H
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
#ifndef MISSING_T508514592_H
#define MISSING_T508514592_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Missing
struct  Missing_t508514592  : public RuntimeObject
{
public:

public:
};

struct Missing_t508514592_StaticFields
{
public:
	// System.Reflection.Missing System.Reflection.Missing::Value
	Missing_t508514592 * ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(Missing_t508514592_StaticFields, ___Value_0)); }
	inline Missing_t508514592 * get_Value_0() const { return ___Value_0; }
	inline Missing_t508514592 ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(Missing_t508514592 * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((&___Value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSING_T508514592_H
#ifndef CRITICALFINALIZEROBJECT_T701527852_H
#define CRITICALFINALIZEROBJECT_T701527852_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_t701527852  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRITICALFINALIZEROBJECT_T701527852_H
#ifndef IDENTITY_T1873279371_H
#define IDENTITY_T1873279371_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Identity
struct  Identity_t1873279371  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.Identity::_objectUri
	String_t* ____objectUri_0;
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Identity::_channelSink
	RuntimeObject* ____channelSink_1;
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Identity::_envoySink
	RuntimeObject* ____envoySink_2;
	// System.Runtime.Remoting.Contexts.DynamicPropertyCollection System.Runtime.Remoting.Identity::_clientDynamicProperties
	DynamicPropertyCollection_t652373272 * ____clientDynamicProperties_3;
	// System.Runtime.Remoting.Contexts.DynamicPropertyCollection System.Runtime.Remoting.Identity::_serverDynamicProperties
	DynamicPropertyCollection_t652373272 * ____serverDynamicProperties_4;
	// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.Identity::_objRef
	ObjRef_t2141158884 * ____objRef_5;
	// System.Boolean System.Runtime.Remoting.Identity::_disposed
	bool ____disposed_6;

public:
	inline static int32_t get_offset_of__objectUri_0() { return static_cast<int32_t>(offsetof(Identity_t1873279371, ____objectUri_0)); }
	inline String_t* get__objectUri_0() const { return ____objectUri_0; }
	inline String_t** get_address_of__objectUri_0() { return &____objectUri_0; }
	inline void set__objectUri_0(String_t* value)
	{
		____objectUri_0 = value;
		Il2CppCodeGenWriteBarrier((&____objectUri_0), value);
	}

	inline static int32_t get_offset_of__channelSink_1() { return static_cast<int32_t>(offsetof(Identity_t1873279371, ____channelSink_1)); }
	inline RuntimeObject* get__channelSink_1() const { return ____channelSink_1; }
	inline RuntimeObject** get_address_of__channelSink_1() { return &____channelSink_1; }
	inline void set__channelSink_1(RuntimeObject* value)
	{
		____channelSink_1 = value;
		Il2CppCodeGenWriteBarrier((&____channelSink_1), value);
	}

	inline static int32_t get_offset_of__envoySink_2() { return static_cast<int32_t>(offsetof(Identity_t1873279371, ____envoySink_2)); }
	inline RuntimeObject* get__envoySink_2() const { return ____envoySink_2; }
	inline RuntimeObject** get_address_of__envoySink_2() { return &____envoySink_2; }
	inline void set__envoySink_2(RuntimeObject* value)
	{
		____envoySink_2 = value;
		Il2CppCodeGenWriteBarrier((&____envoySink_2), value);
	}

	inline static int32_t get_offset_of__clientDynamicProperties_3() { return static_cast<int32_t>(offsetof(Identity_t1873279371, ____clientDynamicProperties_3)); }
	inline DynamicPropertyCollection_t652373272 * get__clientDynamicProperties_3() const { return ____clientDynamicProperties_3; }
	inline DynamicPropertyCollection_t652373272 ** get_address_of__clientDynamicProperties_3() { return &____clientDynamicProperties_3; }
	inline void set__clientDynamicProperties_3(DynamicPropertyCollection_t652373272 * value)
	{
		____clientDynamicProperties_3 = value;
		Il2CppCodeGenWriteBarrier((&____clientDynamicProperties_3), value);
	}

	inline static int32_t get_offset_of__serverDynamicProperties_4() { return static_cast<int32_t>(offsetof(Identity_t1873279371, ____serverDynamicProperties_4)); }
	inline DynamicPropertyCollection_t652373272 * get__serverDynamicProperties_4() const { return ____serverDynamicProperties_4; }
	inline DynamicPropertyCollection_t652373272 ** get_address_of__serverDynamicProperties_4() { return &____serverDynamicProperties_4; }
	inline void set__serverDynamicProperties_4(DynamicPropertyCollection_t652373272 * value)
	{
		____serverDynamicProperties_4 = value;
		Il2CppCodeGenWriteBarrier((&____serverDynamicProperties_4), value);
	}

	inline static int32_t get_offset_of__objRef_5() { return static_cast<int32_t>(offsetof(Identity_t1873279371, ____objRef_5)); }
	inline ObjRef_t2141158884 * get__objRef_5() const { return ____objRef_5; }
	inline ObjRef_t2141158884 ** get_address_of__objRef_5() { return &____objRef_5; }
	inline void set__objRef_5(ObjRef_t2141158884 * value)
	{
		____objRef_5 = value;
		Il2CppCodeGenWriteBarrier((&____objRef_5), value);
	}

	inline static int32_t get_offset_of__disposed_6() { return static_cast<int32_t>(offsetof(Identity_t1873279371, ____disposed_6)); }
	inline bool get__disposed_6() const { return ____disposed_6; }
	inline bool* get_address_of__disposed_6() { return &____disposed_6; }
	inline void set__disposed_6(bool value)
	{
		____disposed_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IDENTITY_T1873279371_H
#ifndef REALPROXY_T2312050253_H
#define REALPROXY_T2312050253_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Proxies.RealProxy
struct  RealProxy_t2312050253  : public RuntimeObject
{
public:
	// System.Type System.Runtime.Remoting.Proxies.RealProxy::class_to_proxy
	Type_t * ___class_to_proxy_0;
	// System.Runtime.Remoting.Contexts.Context System.Runtime.Remoting.Proxies.RealProxy::_targetContext
	Context_t3285446944 * ____targetContext_1;
	// System.MarshalByRefObject System.Runtime.Remoting.Proxies.RealProxy::_server
	MarshalByRefObject_t2760389100 * ____server_2;
	// System.Int32 System.Runtime.Remoting.Proxies.RealProxy::_targetDomainId
	int32_t ____targetDomainId_3;
	// System.String System.Runtime.Remoting.Proxies.RealProxy::_targetUri
	String_t* ____targetUri_4;
	// System.Runtime.Remoting.Identity System.Runtime.Remoting.Proxies.RealProxy::_objectIdentity
	Identity_t1873279371 * ____objectIdentity_5;
	// System.Object System.Runtime.Remoting.Proxies.RealProxy::_objTP
	RuntimeObject * ____objTP_6;
	// System.Object System.Runtime.Remoting.Proxies.RealProxy::_stubData
	RuntimeObject * ____stubData_7;

public:
	inline static int32_t get_offset_of_class_to_proxy_0() { return static_cast<int32_t>(offsetof(RealProxy_t2312050253, ___class_to_proxy_0)); }
	inline Type_t * get_class_to_proxy_0() const { return ___class_to_proxy_0; }
	inline Type_t ** get_address_of_class_to_proxy_0() { return &___class_to_proxy_0; }
	inline void set_class_to_proxy_0(Type_t * value)
	{
		___class_to_proxy_0 = value;
		Il2CppCodeGenWriteBarrier((&___class_to_proxy_0), value);
	}

	inline static int32_t get_offset_of__targetContext_1() { return static_cast<int32_t>(offsetof(RealProxy_t2312050253, ____targetContext_1)); }
	inline Context_t3285446944 * get__targetContext_1() const { return ____targetContext_1; }
	inline Context_t3285446944 ** get_address_of__targetContext_1() { return &____targetContext_1; }
	inline void set__targetContext_1(Context_t3285446944 * value)
	{
		____targetContext_1 = value;
		Il2CppCodeGenWriteBarrier((&____targetContext_1), value);
	}

	inline static int32_t get_offset_of__server_2() { return static_cast<int32_t>(offsetof(RealProxy_t2312050253, ____server_2)); }
	inline MarshalByRefObject_t2760389100 * get__server_2() const { return ____server_2; }
	inline MarshalByRefObject_t2760389100 ** get_address_of__server_2() { return &____server_2; }
	inline void set__server_2(MarshalByRefObject_t2760389100 * value)
	{
		____server_2 = value;
		Il2CppCodeGenWriteBarrier((&____server_2), value);
	}

	inline static int32_t get_offset_of__targetDomainId_3() { return static_cast<int32_t>(offsetof(RealProxy_t2312050253, ____targetDomainId_3)); }
	inline int32_t get__targetDomainId_3() const { return ____targetDomainId_3; }
	inline int32_t* get_address_of__targetDomainId_3() { return &____targetDomainId_3; }
	inline void set__targetDomainId_3(int32_t value)
	{
		____targetDomainId_3 = value;
	}

	inline static int32_t get_offset_of__targetUri_4() { return static_cast<int32_t>(offsetof(RealProxy_t2312050253, ____targetUri_4)); }
	inline String_t* get__targetUri_4() const { return ____targetUri_4; }
	inline String_t** get_address_of__targetUri_4() { return &____targetUri_4; }
	inline void set__targetUri_4(String_t* value)
	{
		____targetUri_4 = value;
		Il2CppCodeGenWriteBarrier((&____targetUri_4), value);
	}

	inline static int32_t get_offset_of__objectIdentity_5() { return static_cast<int32_t>(offsetof(RealProxy_t2312050253, ____objectIdentity_5)); }
	inline Identity_t1873279371 * get__objectIdentity_5() const { return ____objectIdentity_5; }
	inline Identity_t1873279371 ** get_address_of__objectIdentity_5() { return &____objectIdentity_5; }
	inline void set__objectIdentity_5(Identity_t1873279371 * value)
	{
		____objectIdentity_5 = value;
		Il2CppCodeGenWriteBarrier((&____objectIdentity_5), value);
	}

	inline static int32_t get_offset_of__objTP_6() { return static_cast<int32_t>(offsetof(RealProxy_t2312050253, ____objTP_6)); }
	inline RuntimeObject * get__objTP_6() const { return ____objTP_6; }
	inline RuntimeObject ** get_address_of__objTP_6() { return &____objTP_6; }
	inline void set__objTP_6(RuntimeObject * value)
	{
		____objTP_6 = value;
		Il2CppCodeGenWriteBarrier((&____objTP_6), value);
	}

	inline static int32_t get_offset_of__stubData_7() { return static_cast<int32_t>(offsetof(RealProxy_t2312050253, ____stubData_7)); }
	inline RuntimeObject * get__stubData_7() const { return ____stubData_7; }
	inline RuntimeObject ** get_address_of__stubData_7() { return &____stubData_7; }
	inline void set__stubData_7(RuntimeObject * value)
	{
		____stubData_7 = value;
		Il2CppCodeGenWriteBarrier((&____stubData_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.Remoting.Proxies.RealProxy
struct RealProxy_t2312050253_marshaled_pinvoke
{
	Type_t * ___class_to_proxy_0;
	Context_t3285446944_marshaled_pinvoke* ____targetContext_1;
	MarshalByRefObject_t2760389100_marshaled_pinvoke* ____server_2;
	int32_t ____targetDomainId_3;
	char* ____targetUri_4;
	Identity_t1873279371 * ____objectIdentity_5;
	Il2CppIUnknown* ____objTP_6;
	Il2CppIUnknown* ____stubData_7;
};
// Native definition for COM marshalling of System.Runtime.Remoting.Proxies.RealProxy
struct RealProxy_t2312050253_marshaled_com
{
	Type_t * ___class_to_proxy_0;
	Context_t3285446944_marshaled_com* ____targetContext_1;
	MarshalByRefObject_t2760389100_marshaled_com* ____server_2;
	int32_t ____targetDomainId_3;
	Il2CppChar* ____targetUri_4;
	Identity_t1873279371 * ____objectIdentity_5;
	Il2CppIUnknown* ____objTP_6;
	Il2CppIUnknown* ____stubData_7;
};
#endif // REALPROXY_T2312050253_H
#ifndef SERIALIZATIONINFO_T950877179_H
#define SERIALIZATIONINFO_T950877179_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationInfo
struct  SerializationInfo_t950877179  : public RuntimeObject
{
public:
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_t1281789340* ___m_members_0;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_t2843939325* ___m_data_1;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t3940880105* ___m_types_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_t2736202052 * ___m_nameToIndex_3;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_4;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_5;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_6;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_7;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t * ___objectType_8;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_9;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_10;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_11;

public:
	inline static int32_t get_offset_of_m_members_0() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___m_members_0)); }
	inline StringU5BU5D_t1281789340* get_m_members_0() const { return ___m_members_0; }
	inline StringU5BU5D_t1281789340** get_address_of_m_members_0() { return &___m_members_0; }
	inline void set_m_members_0(StringU5BU5D_t1281789340* value)
	{
		___m_members_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_members_0), value);
	}

	inline static int32_t get_offset_of_m_data_1() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___m_data_1)); }
	inline ObjectU5BU5D_t2843939325* get_m_data_1() const { return ___m_data_1; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_data_1() { return &___m_data_1; }
	inline void set_m_data_1(ObjectU5BU5D_t2843939325* value)
	{
		___m_data_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_data_1), value);
	}

	inline static int32_t get_offset_of_m_types_2() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___m_types_2)); }
	inline TypeU5BU5D_t3940880105* get_m_types_2() const { return ___m_types_2; }
	inline TypeU5BU5D_t3940880105** get_address_of_m_types_2() { return &___m_types_2; }
	inline void set_m_types_2(TypeU5BU5D_t3940880105* value)
	{
		___m_types_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_types_2), value);
	}

	inline static int32_t get_offset_of_m_nameToIndex_3() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___m_nameToIndex_3)); }
	inline Dictionary_2_t2736202052 * get_m_nameToIndex_3() const { return ___m_nameToIndex_3; }
	inline Dictionary_2_t2736202052 ** get_address_of_m_nameToIndex_3() { return &___m_nameToIndex_3; }
	inline void set_m_nameToIndex_3(Dictionary_2_t2736202052 * value)
	{
		___m_nameToIndex_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_nameToIndex_3), value);
	}

	inline static int32_t get_offset_of_m_currMember_4() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___m_currMember_4)); }
	inline int32_t get_m_currMember_4() const { return ___m_currMember_4; }
	inline int32_t* get_address_of_m_currMember_4() { return &___m_currMember_4; }
	inline void set_m_currMember_4(int32_t value)
	{
		___m_currMember_4 = value;
	}

	inline static int32_t get_offset_of_m_converter_5() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___m_converter_5)); }
	inline RuntimeObject* get_m_converter_5() const { return ___m_converter_5; }
	inline RuntimeObject** get_address_of_m_converter_5() { return &___m_converter_5; }
	inline void set_m_converter_5(RuntimeObject* value)
	{
		___m_converter_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_converter_5), value);
	}

	inline static int32_t get_offset_of_m_fullTypeName_6() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___m_fullTypeName_6)); }
	inline String_t* get_m_fullTypeName_6() const { return ___m_fullTypeName_6; }
	inline String_t** get_address_of_m_fullTypeName_6() { return &___m_fullTypeName_6; }
	inline void set_m_fullTypeName_6(String_t* value)
	{
		___m_fullTypeName_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_fullTypeName_6), value);
	}

	inline static int32_t get_offset_of_m_assemName_7() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___m_assemName_7)); }
	inline String_t* get_m_assemName_7() const { return ___m_assemName_7; }
	inline String_t** get_address_of_m_assemName_7() { return &___m_assemName_7; }
	inline void set_m_assemName_7(String_t* value)
	{
		___m_assemName_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_assemName_7), value);
	}

	inline static int32_t get_offset_of_objectType_8() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___objectType_8)); }
	inline Type_t * get_objectType_8() const { return ___objectType_8; }
	inline Type_t ** get_address_of_objectType_8() { return &___objectType_8; }
	inline void set_objectType_8(Type_t * value)
	{
		___objectType_8 = value;
		Il2CppCodeGenWriteBarrier((&___objectType_8), value);
	}

	inline static int32_t get_offset_of_isFullTypeNameSetExplicit_9() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___isFullTypeNameSetExplicit_9)); }
	inline bool get_isFullTypeNameSetExplicit_9() const { return ___isFullTypeNameSetExplicit_9; }
	inline bool* get_address_of_isFullTypeNameSetExplicit_9() { return &___isFullTypeNameSetExplicit_9; }
	inline void set_isFullTypeNameSetExplicit_9(bool value)
	{
		___isFullTypeNameSetExplicit_9 = value;
	}

	inline static int32_t get_offset_of_isAssemblyNameSetExplicit_10() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___isAssemblyNameSetExplicit_10)); }
	inline bool get_isAssemblyNameSetExplicit_10() const { return ___isAssemblyNameSetExplicit_10; }
	inline bool* get_address_of_isAssemblyNameSetExplicit_10() { return &___isAssemblyNameSetExplicit_10; }
	inline void set_isAssemblyNameSetExplicit_10(bool value)
	{
		___isAssemblyNameSetExplicit_10 = value;
	}

	inline static int32_t get_offset_of_requireSameTokenInPartialTrust_11() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___requireSameTokenInPartialTrust_11)); }
	inline bool get_requireSameTokenInPartialTrust_11() const { return ___requireSameTokenInPartialTrust_11; }
	inline bool* get_address_of_requireSameTokenInPartialTrust_11() { return &___requireSameTokenInPartialTrust_11; }
	inline void set_requireSameTokenInPartialTrust_11(bool value)
	{
		___requireSameTokenInPartialTrust_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONINFO_T950877179_H
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
#ifndef STRINGBUILDER_T_H
#define STRINGBUILDER_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t3528271667* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t3528271667* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t3528271667** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t3528271667* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ChunkChars_0), value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ChunkPrevious_1), value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T_H
#ifndef SYNCHRONIZATIONCONTEXT_T2326897723_H
#define SYNCHRONIZATIONCONTEXT_T2326897723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.SynchronizationContext
struct  SynchronizationContext_t2326897723  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHRONIZATIONCONTEXT_T2326897723_H
#ifndef UNITYSERIALIZATIONHOLDER_T431912834_H
#define UNITYSERIALIZATIONHOLDER_T431912834_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnitySerializationHolder
struct  UnitySerializationHolder_t431912834  : public RuntimeObject
{
public:
	// System.Type[] System.UnitySerializationHolder::m_instantiation
	TypeU5BU5D_t3940880105* ___m_instantiation_0;
	// System.Int32[] System.UnitySerializationHolder::m_elementTypes
	Int32U5BU5D_t385246372* ___m_elementTypes_1;
	// System.Int32 System.UnitySerializationHolder::m_genericParameterPosition
	int32_t ___m_genericParameterPosition_2;
	// System.Type System.UnitySerializationHolder::m_declaringType
	Type_t * ___m_declaringType_3;
	// System.Reflection.MethodBase System.UnitySerializationHolder::m_declaringMethod
	MethodBase_t * ___m_declaringMethod_4;
	// System.String System.UnitySerializationHolder::m_data
	String_t* ___m_data_5;
	// System.String System.UnitySerializationHolder::m_assemblyName
	String_t* ___m_assemblyName_6;
	// System.Int32 System.UnitySerializationHolder::m_unityType
	int32_t ___m_unityType_7;

public:
	inline static int32_t get_offset_of_m_instantiation_0() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t431912834, ___m_instantiation_0)); }
	inline TypeU5BU5D_t3940880105* get_m_instantiation_0() const { return ___m_instantiation_0; }
	inline TypeU5BU5D_t3940880105** get_address_of_m_instantiation_0() { return &___m_instantiation_0; }
	inline void set_m_instantiation_0(TypeU5BU5D_t3940880105* value)
	{
		___m_instantiation_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_instantiation_0), value);
	}

	inline static int32_t get_offset_of_m_elementTypes_1() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t431912834, ___m_elementTypes_1)); }
	inline Int32U5BU5D_t385246372* get_m_elementTypes_1() const { return ___m_elementTypes_1; }
	inline Int32U5BU5D_t385246372** get_address_of_m_elementTypes_1() { return &___m_elementTypes_1; }
	inline void set_m_elementTypes_1(Int32U5BU5D_t385246372* value)
	{
		___m_elementTypes_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_elementTypes_1), value);
	}

	inline static int32_t get_offset_of_m_genericParameterPosition_2() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t431912834, ___m_genericParameterPosition_2)); }
	inline int32_t get_m_genericParameterPosition_2() const { return ___m_genericParameterPosition_2; }
	inline int32_t* get_address_of_m_genericParameterPosition_2() { return &___m_genericParameterPosition_2; }
	inline void set_m_genericParameterPosition_2(int32_t value)
	{
		___m_genericParameterPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_declaringType_3() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t431912834, ___m_declaringType_3)); }
	inline Type_t * get_m_declaringType_3() const { return ___m_declaringType_3; }
	inline Type_t ** get_address_of_m_declaringType_3() { return &___m_declaringType_3; }
	inline void set_m_declaringType_3(Type_t * value)
	{
		___m_declaringType_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_declaringType_3), value);
	}

	inline static int32_t get_offset_of_m_declaringMethod_4() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t431912834, ___m_declaringMethod_4)); }
	inline MethodBase_t * get_m_declaringMethod_4() const { return ___m_declaringMethod_4; }
	inline MethodBase_t ** get_address_of_m_declaringMethod_4() { return &___m_declaringMethod_4; }
	inline void set_m_declaringMethod_4(MethodBase_t * value)
	{
		___m_declaringMethod_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_declaringMethod_4), value);
	}

	inline static int32_t get_offset_of_m_data_5() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t431912834, ___m_data_5)); }
	inline String_t* get_m_data_5() const { return ___m_data_5; }
	inline String_t** get_address_of_m_data_5() { return &___m_data_5; }
	inline void set_m_data_5(String_t* value)
	{
		___m_data_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_data_5), value);
	}

	inline static int32_t get_offset_of_m_assemblyName_6() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t431912834, ___m_assemblyName_6)); }
	inline String_t* get_m_assemblyName_6() const { return ___m_assemblyName_6; }
	inline String_t** get_address_of_m_assemblyName_6() { return &___m_assemblyName_6; }
	inline void set_m_assemblyName_6(String_t* value)
	{
		___m_assemblyName_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_assemblyName_6), value);
	}

	inline static int32_t get_offset_of_m_unityType_7() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t431912834, ___m_unityType_7)); }
	inline int32_t get_m_unityType_7() const { return ___m_unityType_7; }
	inline int32_t* get_address_of_m_unityType_7() { return &___m_unityType_7; }
	inline void set_m_unityType_7(int32_t value)
	{
		___m_unityType_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYSERIALIZATIONHOLDER_T431912834_H
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
#ifndef VERSION_T3456873960_H
#define VERSION_T3456873960_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Version
struct  Version_t3456873960  : public RuntimeObject
{
public:
	// System.Int32 System.Version::_Major
	int32_t ____Major_0;
	// System.Int32 System.Version::_Minor
	int32_t ____Minor_1;
	// System.Int32 System.Version::_Build
	int32_t ____Build_2;
	// System.Int32 System.Version::_Revision
	int32_t ____Revision_3;

public:
	inline static int32_t get_offset_of__Major_0() { return static_cast<int32_t>(offsetof(Version_t3456873960, ____Major_0)); }
	inline int32_t get__Major_0() const { return ____Major_0; }
	inline int32_t* get_address_of__Major_0() { return &____Major_0; }
	inline void set__Major_0(int32_t value)
	{
		____Major_0 = value;
	}

	inline static int32_t get_offset_of__Minor_1() { return static_cast<int32_t>(offsetof(Version_t3456873960, ____Minor_1)); }
	inline int32_t get__Minor_1() const { return ____Minor_1; }
	inline int32_t* get_address_of__Minor_1() { return &____Minor_1; }
	inline void set__Minor_1(int32_t value)
	{
		____Minor_1 = value;
	}

	inline static int32_t get_offset_of__Build_2() { return static_cast<int32_t>(offsetof(Version_t3456873960, ____Build_2)); }
	inline int32_t get__Build_2() const { return ____Build_2; }
	inline int32_t* get_address_of__Build_2() { return &____Build_2; }
	inline void set__Build_2(int32_t value)
	{
		____Build_2 = value;
	}

	inline static int32_t get_offset_of__Revision_3() { return static_cast<int32_t>(offsetof(Version_t3456873960, ____Revision_3)); }
	inline int32_t get__Revision_3() const { return ____Revision_3; }
	inline int32_t* get_address_of__Revision_3() { return &____Revision_3; }
	inline void set__Revision_3(int32_t value)
	{
		____Revision_3 = value;
	}
};

struct Version_t3456873960_StaticFields
{
public:
	// System.Char[] System.Version::SeparatorsArray
	CharU5BU5D_t3528271667* ___SeparatorsArray_4;

public:
	inline static int32_t get_offset_of_SeparatorsArray_4() { return static_cast<int32_t>(offsetof(Version_t3456873960_StaticFields, ___SeparatorsArray_4)); }
	inline CharU5BU5D_t3528271667* get_SeparatorsArray_4() const { return ___SeparatorsArray_4; }
	inline CharU5BU5D_t3528271667** get_address_of_SeparatorsArray_4() { return &___SeparatorsArray_4; }
	inline void set_SeparatorsArray_4(CharU5BU5D_t3528271667* value)
	{
		___SeparatorsArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___SeparatorsArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERSION_T3456873960_H
#ifndef __FILTERS_T550753867_H
#define __FILTERS_T550753867_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.__Filters
struct  __Filters_t550753867  : public RuntimeObject
{
public:

public:
};

struct __Filters_t550753867_StaticFields
{
public:
	// System.__Filters System.__Filters::Instance
	__Filters_t550753867 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(__Filters_t550753867_StaticFields, ___Instance_0)); }
	inline __Filters_t550753867 * get_Instance_0() const { return ___Instance_0; }
	inline __Filters_t550753867 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(__Filters_t550753867 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __FILTERS_T550753867_H
#ifndef IL2CPPCOMOBJECT_H
#define IL2CPPCOMOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.__Il2CppComObject

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IL2CPPCOMOBJECT_H
#ifndef CFHELPERS_T2851749608_H
#define CFHELPERS_T2851749608_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XamMac.CoreFoundation.CFHelpers
struct  CFHelpers_t2851749608  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CFHELPERS_T2851749608_H
#ifndef COMINTEROPPROXY_T1891481270_H
#define COMINTEROPPROXY_T1891481270_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Interop.ComInteropProxy
struct  ComInteropProxy_t1891481270  : public RealProxy_t2312050253
{
public:
	// System.__ComObject Mono.Interop.ComInteropProxy::com_object
	__ComObject_t2735933417 * ___com_object_8;
	// System.Int32 Mono.Interop.ComInteropProxy::ref_count
	int32_t ___ref_count_9;
	// System.String Mono.Interop.ComInteropProxy::type_name
	String_t* ___type_name_10;

public:
	inline static int32_t get_offset_of_com_object_8() { return static_cast<int32_t>(offsetof(ComInteropProxy_t1891481270, ___com_object_8)); }
	inline __ComObject_t2735933417 * get_com_object_8() const { return ___com_object_8; }
	inline __ComObject_t2735933417 ** get_address_of_com_object_8() { return &___com_object_8; }
	inline void set_com_object_8(__ComObject_t2735933417 * value)
	{
		___com_object_8 = value;
		Il2CppCodeGenWriteBarrier((&___com_object_8), value);
	}

	inline static int32_t get_offset_of_ref_count_9() { return static_cast<int32_t>(offsetof(ComInteropProxy_t1891481270, ___ref_count_9)); }
	inline int32_t get_ref_count_9() const { return ___ref_count_9; }
	inline int32_t* get_address_of_ref_count_9() { return &___ref_count_9; }
	inline void set_ref_count_9(int32_t value)
	{
		___ref_count_9 = value;
	}

	inline static int32_t get_offset_of_type_name_10() { return static_cast<int32_t>(offsetof(ComInteropProxy_t1891481270, ___type_name_10)); }
	inline String_t* get_type_name_10() const { return ___type_name_10; }
	inline String_t** get_address_of_type_name_10() { return &___type_name_10; }
	inline void set_type_name_10(String_t* value)
	{
		___type_name_10 = value;
		Il2CppCodeGenWriteBarrier((&___type_name_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Mono.Interop.ComInteropProxy
struct ComInteropProxy_t1891481270_marshaled_pinvoke : public RealProxy_t2312050253_marshaled_pinvoke
{
	__ComObject_t2735933417_marshaled_pinvoke* ___com_object_8;
	int32_t ___ref_count_9;
	char* ___type_name_10;
};
// Native definition for COM marshalling of Mono.Interop.ComInteropProxy
struct ComInteropProxy_t1891481270_marshaled_com : public RealProxy_t2312050253_marshaled_com
{
	__ComObject_t2735933417_marshaled_com* ___com_object_8;
	int32_t ___ref_count_9;
	Il2CppChar* ___type_name_10;
};
#endif // COMINTEROPPROXY_T1891481270_H
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
#ifndef COORD_T397375283_H
#define COORD_T397375283_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Coord
struct  Coord_t397375283 
{
public:
	// System.Int16 System.Coord::X
	int16_t ___X_0;
	// System.Int16 System.Coord::Y
	int16_t ___Y_1;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Coord_t397375283, ___X_0)); }
	inline int16_t get_X_0() const { return ___X_0; }
	inline int16_t* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(int16_t value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Coord_t397375283, ___Y_1)); }
	inline int16_t get_Y_1() const { return ___Y_1; }
	inline int16_t* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(int16_t value)
	{
		___Y_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COORD_T397375283_H
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
#ifndef DECIMAL_T2948259380_H
#define DECIMAL_T2948259380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Decimal
struct  Decimal_t2948259380 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t2948259380_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_t2770800703* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t2948259380  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t2948259380  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2948259380  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2948259380  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t2948259380  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t2948259380  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t2948259380  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_t2770800703* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_t2770800703** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_t2770800703* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((&___Powers10_6), value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___Zero_7)); }
	inline Decimal_t2948259380  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t2948259380 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t2948259380  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___One_8)); }
	inline Decimal_t2948259380  get_One_8() const { return ___One_8; }
	inline Decimal_t2948259380 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t2948259380  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinusOne_9)); }
	inline Decimal_t2948259380  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t2948259380 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t2948259380  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MaxValue_10)); }
	inline Decimal_t2948259380  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t2948259380 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t2948259380  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinValue_11)); }
	inline Decimal_t2948259380  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t2948259380 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t2948259380  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t2948259380  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t2948259380 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t2948259380  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t2948259380  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t2948259380 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t2948259380  value)
	{
		___NearPositiveZero_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMAL_T2948259380_H
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t594665363_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t594665363_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
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
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t386037858 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t386037858 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_12), value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t386037858 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t386037858 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t386037858 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t386037858 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((&____fastRng_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef INPUTRECORD_T2660212290_H
#define INPUTRECORD_T2660212290_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InputRecord
struct  InputRecord_t2660212290 
{
public:
	// System.Int16 System.InputRecord::EventType
	int16_t ___EventType_0;
	// System.Boolean System.InputRecord::KeyDown
	bool ___KeyDown_1;
	// System.Int16 System.InputRecord::RepeatCount
	int16_t ___RepeatCount_2;
	// System.Int16 System.InputRecord::VirtualKeyCode
	int16_t ___VirtualKeyCode_3;
	// System.Int16 System.InputRecord::VirtualScanCode
	int16_t ___VirtualScanCode_4;
	// System.Char System.InputRecord::Character
	Il2CppChar ___Character_5;
	// System.Int32 System.InputRecord::ControlKeyState
	int32_t ___ControlKeyState_6;
	// System.Int32 System.InputRecord::pad1
	int32_t ___pad1_7;
	// System.Boolean System.InputRecord::pad2
	bool ___pad2_8;

public:
	inline static int32_t get_offset_of_EventType_0() { return static_cast<int32_t>(offsetof(InputRecord_t2660212290, ___EventType_0)); }
	inline int16_t get_EventType_0() const { return ___EventType_0; }
	inline int16_t* get_address_of_EventType_0() { return &___EventType_0; }
	inline void set_EventType_0(int16_t value)
	{
		___EventType_0 = value;
	}

	inline static int32_t get_offset_of_KeyDown_1() { return static_cast<int32_t>(offsetof(InputRecord_t2660212290, ___KeyDown_1)); }
	inline bool get_KeyDown_1() const { return ___KeyDown_1; }
	inline bool* get_address_of_KeyDown_1() { return &___KeyDown_1; }
	inline void set_KeyDown_1(bool value)
	{
		___KeyDown_1 = value;
	}

	inline static int32_t get_offset_of_RepeatCount_2() { return static_cast<int32_t>(offsetof(InputRecord_t2660212290, ___RepeatCount_2)); }
	inline int16_t get_RepeatCount_2() const { return ___RepeatCount_2; }
	inline int16_t* get_address_of_RepeatCount_2() { return &___RepeatCount_2; }
	inline void set_RepeatCount_2(int16_t value)
	{
		___RepeatCount_2 = value;
	}

	inline static int32_t get_offset_of_VirtualKeyCode_3() { return static_cast<int32_t>(offsetof(InputRecord_t2660212290, ___VirtualKeyCode_3)); }
	inline int16_t get_VirtualKeyCode_3() const { return ___VirtualKeyCode_3; }
	inline int16_t* get_address_of_VirtualKeyCode_3() { return &___VirtualKeyCode_3; }
	inline void set_VirtualKeyCode_3(int16_t value)
	{
		___VirtualKeyCode_3 = value;
	}

	inline static int32_t get_offset_of_VirtualScanCode_4() { return static_cast<int32_t>(offsetof(InputRecord_t2660212290, ___VirtualScanCode_4)); }
	inline int16_t get_VirtualScanCode_4() const { return ___VirtualScanCode_4; }
	inline int16_t* get_address_of_VirtualScanCode_4() { return &___VirtualScanCode_4; }
	inline void set_VirtualScanCode_4(int16_t value)
	{
		___VirtualScanCode_4 = value;
	}

	inline static int32_t get_offset_of_Character_5() { return static_cast<int32_t>(offsetof(InputRecord_t2660212290, ___Character_5)); }
	inline Il2CppChar get_Character_5() const { return ___Character_5; }
	inline Il2CppChar* get_address_of_Character_5() { return &___Character_5; }
	inline void set_Character_5(Il2CppChar value)
	{
		___Character_5 = value;
	}

	inline static int32_t get_offset_of_ControlKeyState_6() { return static_cast<int32_t>(offsetof(InputRecord_t2660212290, ___ControlKeyState_6)); }
	inline int32_t get_ControlKeyState_6() const { return ___ControlKeyState_6; }
	inline int32_t* get_address_of_ControlKeyState_6() { return &___ControlKeyState_6; }
	inline void set_ControlKeyState_6(int32_t value)
	{
		___ControlKeyState_6 = value;
	}

	inline static int32_t get_offset_of_pad1_7() { return static_cast<int32_t>(offsetof(InputRecord_t2660212290, ___pad1_7)); }
	inline int32_t get_pad1_7() const { return ___pad1_7; }
	inline int32_t* get_address_of_pad1_7() { return &___pad1_7; }
	inline void set_pad1_7(int32_t value)
	{
		___pad1_7 = value;
	}

	inline static int32_t get_offset_of_pad2_8() { return static_cast<int32_t>(offsetof(InputRecord_t2660212290, ___pad2_8)); }
	inline bool get_pad2_8() const { return ___pad2_8; }
	inline bool* get_address_of_pad2_8() { return &___pad2_8; }
	inline void set_pad2_8(bool value)
	{
		___pad2_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.InputRecord
struct InputRecord_t2660212290_marshaled_pinvoke
{
	int16_t ___EventType_0;
	int32_t ___KeyDown_1;
	int16_t ___RepeatCount_2;
	int16_t ___VirtualKeyCode_3;
	int16_t ___VirtualScanCode_4;
	uint8_t ___Character_5;
	int32_t ___ControlKeyState_6;
	int32_t ___pad1_7;
	int32_t ___pad2_8;
};
// Native definition for COM marshalling of System.InputRecord
struct InputRecord_t2660212290_marshaled_com
{
	int16_t ___EventType_0;
	int32_t ___KeyDown_1;
	int16_t ___RepeatCount_2;
	int16_t ___VirtualKeyCode_3;
	int16_t ___VirtualScanCode_4;
	uint8_t ___Character_5;
	int32_t ___ControlKeyState_6;
	int32_t ___pad1_7;
	int32_t ___pad2_8;
};
#endif // INPUTRECORD_T2660212290_H
#ifndef INT16_T2552820387_H
#define INT16_T2552820387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int16
struct  Int16_t2552820387 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t2552820387, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16_T2552820387_H
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
#ifndef FIELDINFO_T_H
#define FIELDINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.FieldInfo
struct  FieldInfo_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDINFO_T_H
#ifndef METHODBASE_T_H
#define METHODBASE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODBASE_T_H
#ifndef GCHANDLE_T3351438187_H
#define GCHANDLE_T3351438187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t3351438187 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t3351438187, ___handle_0)); }
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
#endif // GCHANDLE_T3351438187_H
#ifndef SERVERIDENTITY_T2342208608_H
#define SERVERIDENTITY_T2342208608_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.ServerIdentity
struct  ServerIdentity_t2342208608  : public Identity_t1873279371
{
public:
	// System.Type System.Runtime.Remoting.ServerIdentity::_objectType
	Type_t * ____objectType_7;
	// System.MarshalByRefObject System.Runtime.Remoting.ServerIdentity::_serverObject
	MarshalByRefObject_t2760389100 * ____serverObject_8;
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.ServerIdentity::_serverSink
	RuntimeObject* ____serverSink_9;
	// System.Runtime.Remoting.Contexts.Context System.Runtime.Remoting.ServerIdentity::_context
	Context_t3285446944 * ____context_10;
	// System.Runtime.Remoting.Lifetime.Lease System.Runtime.Remoting.ServerIdentity::_lease
	Lease_t4051722892 * ____lease_11;

public:
	inline static int32_t get_offset_of__objectType_7() { return static_cast<int32_t>(offsetof(ServerIdentity_t2342208608, ____objectType_7)); }
	inline Type_t * get__objectType_7() const { return ____objectType_7; }
	inline Type_t ** get_address_of__objectType_7() { return &____objectType_7; }
	inline void set__objectType_7(Type_t * value)
	{
		____objectType_7 = value;
		Il2CppCodeGenWriteBarrier((&____objectType_7), value);
	}

	inline static int32_t get_offset_of__serverObject_8() { return static_cast<int32_t>(offsetof(ServerIdentity_t2342208608, ____serverObject_8)); }
	inline MarshalByRefObject_t2760389100 * get__serverObject_8() const { return ____serverObject_8; }
	inline MarshalByRefObject_t2760389100 ** get_address_of__serverObject_8() { return &____serverObject_8; }
	inline void set__serverObject_8(MarshalByRefObject_t2760389100 * value)
	{
		____serverObject_8 = value;
		Il2CppCodeGenWriteBarrier((&____serverObject_8), value);
	}

	inline static int32_t get_offset_of__serverSink_9() { return static_cast<int32_t>(offsetof(ServerIdentity_t2342208608, ____serverSink_9)); }
	inline RuntimeObject* get__serverSink_9() const { return ____serverSink_9; }
	inline RuntimeObject** get_address_of__serverSink_9() { return &____serverSink_9; }
	inline void set__serverSink_9(RuntimeObject* value)
	{
		____serverSink_9 = value;
		Il2CppCodeGenWriteBarrier((&____serverSink_9), value);
	}

	inline static int32_t get_offset_of__context_10() { return static_cast<int32_t>(offsetof(ServerIdentity_t2342208608, ____context_10)); }
	inline Context_t3285446944 * get__context_10() const { return ____context_10; }
	inline Context_t3285446944 ** get_address_of__context_10() { return &____context_10; }
	inline void set__context_10(Context_t3285446944 * value)
	{
		____context_10 = value;
		Il2CppCodeGenWriteBarrier((&____context_10), value);
	}

	inline static int32_t get_offset_of__lease_11() { return static_cast<int32_t>(offsetof(ServerIdentity_t2342208608, ____lease_11)); }
	inline Lease_t4051722892 * get__lease_11() const { return ____lease_11; }
	inline Lease_t4051722892 ** get_address_of__lease_11() { return &____lease_11; }
	inline void set__lease_11(Lease_t4051722892 * value)
	{
		____lease_11 = value;
		Il2CppCodeGenWriteBarrier((&____lease_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERVERIDENTITY_T2342208608_H
#ifndef SBYTE_T1669577662_H
#define SBYTE_T1669577662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SByte
struct  SByte_t1669577662 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t1669577662, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SBYTE_T1669577662_H
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
#ifndef SMALLRECT_T2930836963_H
#define SMALLRECT_T2930836963_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SmallRect
struct  SmallRect_t2930836963 
{
public:
	// System.Int16 System.SmallRect::Left
	int16_t ___Left_0;
	// System.Int16 System.SmallRect::Top
	int16_t ___Top_1;
	// System.Int16 System.SmallRect::Right
	int16_t ___Right_2;
	// System.Int16 System.SmallRect::Bottom
	int16_t ___Bottom_3;

public:
	inline static int32_t get_offset_of_Left_0() { return static_cast<int32_t>(offsetof(SmallRect_t2930836963, ___Left_0)); }
	inline int16_t get_Left_0() const { return ___Left_0; }
	inline int16_t* get_address_of_Left_0() { return &___Left_0; }
	inline void set_Left_0(int16_t value)
	{
		___Left_0 = value;
	}

	inline static int32_t get_offset_of_Top_1() { return static_cast<int32_t>(offsetof(SmallRect_t2930836963, ___Top_1)); }
	inline int16_t get_Top_1() const { return ___Top_1; }
	inline int16_t* get_address_of_Top_1() { return &___Top_1; }
	inline void set_Top_1(int16_t value)
	{
		___Top_1 = value;
	}

	inline static int32_t get_offset_of_Right_2() { return static_cast<int32_t>(offsetof(SmallRect_t2930836963, ___Right_2)); }
	inline int16_t get_Right_2() const { return ___Right_2; }
	inline int16_t* get_address_of_Right_2() { return &___Right_2; }
	inline void set_Right_2(int16_t value)
	{
		___Right_2 = value;
	}

	inline static int32_t get_offset_of_Bottom_3() { return static_cast<int32_t>(offsetof(SmallRect_t2930836963, ___Bottom_3)); }
	inline int16_t get_Bottom_3() const { return ___Bottom_3; }
	inline int16_t* get_address_of_Bottom_3() { return &___Bottom_3; }
	inline void set_Bottom_3(int16_t value)
	{
		___Bottom_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SMALLRECT_T2930836963_H
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
#ifndef THREAD_T2300836069_H
#define THREAD_T2300836069_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Thread
struct  Thread_t2300836069  : public CriticalFinalizerObject_t701527852
{
public:
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_t95296544 * ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject * ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject * ___pending_exception_8;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_9;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_10;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t * ___m_Delegate_12;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t1748372627 * ___m_ExecutionContext_13;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_14;

public:
	inline static int32_t get_offset_of_internal_thread_6() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___internal_thread_6)); }
	inline InternalThread_t95296544 * get_internal_thread_6() const { return ___internal_thread_6; }
	inline InternalThread_t95296544 ** get_address_of_internal_thread_6() { return &___internal_thread_6; }
	inline void set_internal_thread_6(InternalThread_t95296544 * value)
	{
		___internal_thread_6 = value;
		Il2CppCodeGenWriteBarrier((&___internal_thread_6), value);
	}

	inline static int32_t get_offset_of_m_ThreadStartArg_7() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___m_ThreadStartArg_7)); }
	inline RuntimeObject * get_m_ThreadStartArg_7() const { return ___m_ThreadStartArg_7; }
	inline RuntimeObject ** get_address_of_m_ThreadStartArg_7() { return &___m_ThreadStartArg_7; }
	inline void set_m_ThreadStartArg_7(RuntimeObject * value)
	{
		___m_ThreadStartArg_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_ThreadStartArg_7), value);
	}

	inline static int32_t get_offset_of_pending_exception_8() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___pending_exception_8)); }
	inline RuntimeObject * get_pending_exception_8() const { return ___pending_exception_8; }
	inline RuntimeObject ** get_address_of_pending_exception_8() { return &___pending_exception_8; }
	inline void set_pending_exception_8(RuntimeObject * value)
	{
		___pending_exception_8 = value;
		Il2CppCodeGenWriteBarrier((&___pending_exception_8), value);
	}

	inline static int32_t get_offset_of_principal_9() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___principal_9)); }
	inline RuntimeObject* get_principal_9() const { return ___principal_9; }
	inline RuntimeObject** get_address_of_principal_9() { return &___principal_9; }
	inline void set_principal_9(RuntimeObject* value)
	{
		___principal_9 = value;
		Il2CppCodeGenWriteBarrier((&___principal_9), value);
	}

	inline static int32_t get_offset_of_principal_version_10() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___principal_version_10)); }
	inline int32_t get_principal_version_10() const { return ___principal_version_10; }
	inline int32_t* get_address_of_principal_version_10() { return &___principal_version_10; }
	inline void set_principal_version_10(int32_t value)
	{
		___principal_version_10 = value;
	}

	inline static int32_t get_offset_of_m_Delegate_12() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___m_Delegate_12)); }
	inline MulticastDelegate_t * get_m_Delegate_12() const { return ___m_Delegate_12; }
	inline MulticastDelegate_t ** get_address_of_m_Delegate_12() { return &___m_Delegate_12; }
	inline void set_m_Delegate_12(MulticastDelegate_t * value)
	{
		___m_Delegate_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_Delegate_12), value);
	}

	inline static int32_t get_offset_of_m_ExecutionContext_13() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___m_ExecutionContext_13)); }
	inline ExecutionContext_t1748372627 * get_m_ExecutionContext_13() const { return ___m_ExecutionContext_13; }
	inline ExecutionContext_t1748372627 ** get_address_of_m_ExecutionContext_13() { return &___m_ExecutionContext_13; }
	inline void set_m_ExecutionContext_13(ExecutionContext_t1748372627 * value)
	{
		___m_ExecutionContext_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_ExecutionContext_13), value);
	}

	inline static int32_t get_offset_of_m_ExecutionContextBelongsToOuterScope_14() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___m_ExecutionContextBelongsToOuterScope_14)); }
	inline bool get_m_ExecutionContextBelongsToOuterScope_14() const { return ___m_ExecutionContextBelongsToOuterScope_14; }
	inline bool* get_address_of_m_ExecutionContextBelongsToOuterScope_14() { return &___m_ExecutionContextBelongsToOuterScope_14; }
	inline void set_m_ExecutionContextBelongsToOuterScope_14(bool value)
	{
		___m_ExecutionContextBelongsToOuterScope_14 = value;
	}
};

struct Thread_t2300836069_StaticFields
{
public:
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t1707895399 * ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t2427220165 * ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t2427220165 * ___s_asyncLocalCurrentUICulture_5;

public:
	inline static int32_t get_offset_of_s_LocalDataStoreMgr_0() { return static_cast<int32_t>(offsetof(Thread_t2300836069_StaticFields, ___s_LocalDataStoreMgr_0)); }
	inline LocalDataStoreMgr_t1707895399 * get_s_LocalDataStoreMgr_0() const { return ___s_LocalDataStoreMgr_0; }
	inline LocalDataStoreMgr_t1707895399 ** get_address_of_s_LocalDataStoreMgr_0() { return &___s_LocalDataStoreMgr_0; }
	inline void set_s_LocalDataStoreMgr_0(LocalDataStoreMgr_t1707895399 * value)
	{
		___s_LocalDataStoreMgr_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_LocalDataStoreMgr_0), value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentCulture_4() { return static_cast<int32_t>(offsetof(Thread_t2300836069_StaticFields, ___s_asyncLocalCurrentCulture_4)); }
	inline AsyncLocal_1_t2427220165 * get_s_asyncLocalCurrentCulture_4() const { return ___s_asyncLocalCurrentCulture_4; }
	inline AsyncLocal_1_t2427220165 ** get_address_of_s_asyncLocalCurrentCulture_4() { return &___s_asyncLocalCurrentCulture_4; }
	inline void set_s_asyncLocalCurrentCulture_4(AsyncLocal_1_t2427220165 * value)
	{
		___s_asyncLocalCurrentCulture_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_asyncLocalCurrentCulture_4), value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentUICulture_5() { return static_cast<int32_t>(offsetof(Thread_t2300836069_StaticFields, ___s_asyncLocalCurrentUICulture_5)); }
	inline AsyncLocal_1_t2427220165 * get_s_asyncLocalCurrentUICulture_5() const { return ___s_asyncLocalCurrentUICulture_5; }
	inline AsyncLocal_1_t2427220165 ** get_address_of_s_asyncLocalCurrentUICulture_5() { return &___s_asyncLocalCurrentUICulture_5; }
	inline void set_s_asyncLocalCurrentUICulture_5(AsyncLocal_1_t2427220165 * value)
	{
		___s_asyncLocalCurrentUICulture_5 = value;
		Il2CppCodeGenWriteBarrier((&___s_asyncLocalCurrentUICulture_5), value);
	}
};

struct Thread_t2300836069_ThreadStaticFields
{
public:
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_t2567786569 * ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t4157843068 * ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t4157843068 * ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_t2300836069 * ___current_thread_11;

public:
	inline static int32_t get_offset_of_s_LocalDataStore_1() { return static_cast<int32_t>(offsetof(Thread_t2300836069_ThreadStaticFields, ___s_LocalDataStore_1)); }
	inline LocalDataStoreHolder_t2567786569 * get_s_LocalDataStore_1() const { return ___s_LocalDataStore_1; }
	inline LocalDataStoreHolder_t2567786569 ** get_address_of_s_LocalDataStore_1() { return &___s_LocalDataStore_1; }
	inline void set_s_LocalDataStore_1(LocalDataStoreHolder_t2567786569 * value)
	{
		___s_LocalDataStore_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_LocalDataStore_1), value);
	}

	inline static int32_t get_offset_of_m_CurrentCulture_2() { return static_cast<int32_t>(offsetof(Thread_t2300836069_ThreadStaticFields, ___m_CurrentCulture_2)); }
	inline CultureInfo_t4157843068 * get_m_CurrentCulture_2() const { return ___m_CurrentCulture_2; }
	inline CultureInfo_t4157843068 ** get_address_of_m_CurrentCulture_2() { return &___m_CurrentCulture_2; }
	inline void set_m_CurrentCulture_2(CultureInfo_t4157843068 * value)
	{
		___m_CurrentCulture_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentCulture_2), value);
	}

	inline static int32_t get_offset_of_m_CurrentUICulture_3() { return static_cast<int32_t>(offsetof(Thread_t2300836069_ThreadStaticFields, ___m_CurrentUICulture_3)); }
	inline CultureInfo_t4157843068 * get_m_CurrentUICulture_3() const { return ___m_CurrentUICulture_3; }
	inline CultureInfo_t4157843068 ** get_address_of_m_CurrentUICulture_3() { return &___m_CurrentUICulture_3; }
	inline void set_m_CurrentUICulture_3(CultureInfo_t4157843068 * value)
	{
		___m_CurrentUICulture_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentUICulture_3), value);
	}

	inline static int32_t get_offset_of_current_thread_11() { return static_cast<int32_t>(offsetof(Thread_t2300836069_ThreadStaticFields, ___current_thread_11)); }
	inline Thread_t2300836069 * get_current_thread_11() const { return ___current_thread_11; }
	inline Thread_t2300836069 ** get_address_of_current_thread_11() { return &___current_thread_11; }
	inline void set_current_thread_11(Thread_t2300836069 * value)
	{
		___current_thread_11 = value;
		Il2CppCodeGenWriteBarrier((&___current_thread_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREAD_T2300836069_H
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
#ifndef UINT64_T4134040092_H
#define UINT64_T4134040092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_t4134040092 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_t4134040092, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_T4134040092_H
#ifndef UINTPTR_T_H
#define UINTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UIntPtr
struct  UIntPtr_t 
{
public:
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;

public:
	inline static int32_t get_offset_of__pointer_1() { return static_cast<int32_t>(offsetof(UIntPtr_t, ____pointer_1)); }
	inline void* get__pointer_1() const { return ____pointer_1; }
	inline void** get_address_of__pointer_1() { return &____pointer_1; }
	inline void set__pointer_1(void* value)
	{
		____pointer_1 = value;
	}
};

struct UIntPtr_t_StaticFields
{
public:
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(UIntPtr_t_StaticFields, ___Zero_0)); }
	inline uintptr_t get_Zero_0() const { return ___Zero_0; }
	inline uintptr_t* get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(uintptr_t value)
	{
		___Zero_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINTPTR_T_H
#ifndef UNSAFECHARBUFFER_T2176740272_H
#define UNSAFECHARBUFFER_T2176740272_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnSafeCharBuffer
struct  UnSafeCharBuffer_t2176740272 
{
public:
	// System.Char* System.UnSafeCharBuffer::m_buffer
	Il2CppChar* ___m_buffer_0;
	// System.Int32 System.UnSafeCharBuffer::m_totalSize
	int32_t ___m_totalSize_1;
	// System.Int32 System.UnSafeCharBuffer::m_length
	int32_t ___m_length_2;

public:
	inline static int32_t get_offset_of_m_buffer_0() { return static_cast<int32_t>(offsetof(UnSafeCharBuffer_t2176740272, ___m_buffer_0)); }
	inline Il2CppChar* get_m_buffer_0() const { return ___m_buffer_0; }
	inline Il2CppChar** get_address_of_m_buffer_0() { return &___m_buffer_0; }
	inline void set_m_buffer_0(Il2CppChar* value)
	{
		___m_buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_totalSize_1() { return static_cast<int32_t>(offsetof(UnSafeCharBuffer_t2176740272, ___m_totalSize_1)); }
	inline int32_t get_m_totalSize_1() const { return ___m_totalSize_1; }
	inline int32_t* get_address_of_m_totalSize_1() { return &___m_totalSize_1; }
	inline void set_m_totalSize_1(int32_t value)
	{
		___m_totalSize_1 = value;
	}

	inline static int32_t get_offset_of_m_length_2() { return static_cast<int32_t>(offsetof(UnSafeCharBuffer_t2176740272, ___m_length_2)); }
	inline int32_t get_m_length_2() const { return ___m_length_2; }
	inline int32_t* get_address_of_m_length_2() { return &___m_length_2; }
	inline void set_m_length_2(int32_t value)
	{
		___m_length_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.UnSafeCharBuffer
struct UnSafeCharBuffer_t2176740272_marshaled_pinvoke
{
	Il2CppChar* ___m_buffer_0;
	int32_t ___m_totalSize_1;
	int32_t ___m_length_2;
};
// Native definition for COM marshalling of System.UnSafeCharBuffer
struct UnSafeCharBuffer_t2176740272_marshaled_com
{
	Il2CppChar* ___m_buffer_0;
	int32_t ___m_totalSize_1;
	int32_t ___m_length_2;
};
#endif // UNSAFECHARBUFFER_T2176740272_H
#ifndef UNHANDLEDEXCEPTIONEVENTARGS_T2886101344_H
#define UNHANDLEDEXCEPTIONEVENTARGS_T2886101344_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnhandledExceptionEventArgs
struct  UnhandledExceptionEventArgs_t2886101344  : public EventArgs_t3591816995
{
public:
	// System.Object System.UnhandledExceptionEventArgs::_Exception
	RuntimeObject * ____Exception_1;
	// System.Boolean System.UnhandledExceptionEventArgs::_IsTerminating
	bool ____IsTerminating_2;

public:
	inline static int32_t get_offset_of__Exception_1() { return static_cast<int32_t>(offsetof(UnhandledExceptionEventArgs_t2886101344, ____Exception_1)); }
	inline RuntimeObject * get__Exception_1() const { return ____Exception_1; }
	inline RuntimeObject ** get_address_of__Exception_1() { return &____Exception_1; }
	inline void set__Exception_1(RuntimeObject * value)
	{
		____Exception_1 = value;
		Il2CppCodeGenWriteBarrier((&____Exception_1), value);
	}

	inline static int32_t get_offset_of__IsTerminating_2() { return static_cast<int32_t>(offsetof(UnhandledExceptionEventArgs_t2886101344, ____IsTerminating_2)); }
	inline bool get__IsTerminating_2() const { return ____IsTerminating_2; }
	inline bool* get_address_of__IsTerminating_2() { return &____IsTerminating_2; }
	inline void set__IsTerminating_2(bool value)
	{
		____IsTerminating_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNHANDLEDEXCEPTIONEVENTARGS_T2886101344_H
#ifndef VALUETUPLE_T3168505507_H
#define VALUETUPLE_T3168505507_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueTuple
struct  ValueTuple_t3168505507 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ValueTuple_t3168505507__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALUETUPLE_T3168505507_H
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
#ifndef __DTSTRING_T2014593278_H
#define __DTSTRING_T2014593278_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.__DTString
struct  __DTString_t2014593278 
{
public:
	// System.String System.__DTString::Value
	String_t* ___Value_0;
	// System.Int32 System.__DTString::Index
	int32_t ___Index_1;
	// System.Int32 System.__DTString::len
	int32_t ___len_2;
	// System.Char System.__DTString::m_current
	Il2CppChar ___m_current_3;
	// System.Globalization.CompareInfo System.__DTString::m_info
	CompareInfo_t1092934962 * ___m_info_4;
	// System.Boolean System.__DTString::m_checkDigitToken
	bool ___m_checkDigitToken_5;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(__DTString_t2014593278, ___Value_0)); }
	inline String_t* get_Value_0() const { return ___Value_0; }
	inline String_t** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(String_t* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((&___Value_0), value);
	}

	inline static int32_t get_offset_of_Index_1() { return static_cast<int32_t>(offsetof(__DTString_t2014593278, ___Index_1)); }
	inline int32_t get_Index_1() const { return ___Index_1; }
	inline int32_t* get_address_of_Index_1() { return &___Index_1; }
	inline void set_Index_1(int32_t value)
	{
		___Index_1 = value;
	}

	inline static int32_t get_offset_of_len_2() { return static_cast<int32_t>(offsetof(__DTString_t2014593278, ___len_2)); }
	inline int32_t get_len_2() const { return ___len_2; }
	inline int32_t* get_address_of_len_2() { return &___len_2; }
	inline void set_len_2(int32_t value)
	{
		___len_2 = value;
	}

	inline static int32_t get_offset_of_m_current_3() { return static_cast<int32_t>(offsetof(__DTString_t2014593278, ___m_current_3)); }
	inline Il2CppChar get_m_current_3() const { return ___m_current_3; }
	inline Il2CppChar* get_address_of_m_current_3() { return &___m_current_3; }
	inline void set_m_current_3(Il2CppChar value)
	{
		___m_current_3 = value;
	}

	inline static int32_t get_offset_of_m_info_4() { return static_cast<int32_t>(offsetof(__DTString_t2014593278, ___m_info_4)); }
	inline CompareInfo_t1092934962 * get_m_info_4() const { return ___m_info_4; }
	inline CompareInfo_t1092934962 ** get_address_of_m_info_4() { return &___m_info_4; }
	inline void set_m_info_4(CompareInfo_t1092934962 * value)
	{
		___m_info_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_info_4), value);
	}

	inline static int32_t get_offset_of_m_checkDigitToken_5() { return static_cast<int32_t>(offsetof(__DTString_t2014593278, ___m_checkDigitToken_5)); }
	inline bool get_m_checkDigitToken_5() const { return ___m_checkDigitToken_5; }
	inline bool* get_address_of_m_checkDigitToken_5() { return &___m_checkDigitToken_5; }
	inline void set_m_checkDigitToken_5(bool value)
	{
		___m_checkDigitToken_5 = value;
	}
};

struct __DTString_t2014593278_StaticFields
{
public:
	// System.Char[] System.__DTString::WhiteSpaceChecks
	CharU5BU5D_t3528271667* ___WhiteSpaceChecks_6;

public:
	inline static int32_t get_offset_of_WhiteSpaceChecks_6() { return static_cast<int32_t>(offsetof(__DTString_t2014593278_StaticFields, ___WhiteSpaceChecks_6)); }
	inline CharU5BU5D_t3528271667* get_WhiteSpaceChecks_6() const { return ___WhiteSpaceChecks_6; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteSpaceChecks_6() { return &___WhiteSpaceChecks_6; }
	inline void set_WhiteSpaceChecks_6(CharU5BU5D_t3528271667* value)
	{
		___WhiteSpaceChecks_6 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteSpaceChecks_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.__DTString
struct __DTString_t2014593278_marshaled_pinvoke
{
	char* ___Value_0;
	int32_t ___Index_1;
	int32_t ___len_2;
	uint8_t ___m_current_3;
	CompareInfo_t1092934962 * ___m_info_4;
	int32_t ___m_checkDigitToken_5;
};
// Native definition for COM marshalling of System.__DTString
struct __DTString_t2014593278_marshaled_com
{
	Il2CppChar* ___Value_0;
	int32_t ___Index_1;
	int32_t ___len_2;
	uint8_t ___m_current_3;
	CompareInfo_t1092934962 * ___m_info_4;
	int32_t ___m_checkDigitToken_5;
};
#endif // __DTSTRING_T2014593278_H
#ifndef __IL2CPPCOMDELEGATE_T1102178620_H
#define __IL2CPPCOMDELEGATE_T1102178620_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.__Il2CppComDelegate
struct  __Il2CppComDelegate_t1102178620  : public Il2CppComObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __IL2CPPCOMDELEGATE_T1102178620_H
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
#ifndef BRECORD_T3470580684_H
#define BRECORD_T3470580684_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.BRECORD
struct  BRECORD_t3470580684 
{
public:
	// System.IntPtr System.BRECORD::pvRecord
	intptr_t ___pvRecord_0;
	// System.IntPtr System.BRECORD::pRecInfo
	intptr_t ___pRecInfo_1;

public:
	inline static int32_t get_offset_of_pvRecord_0() { return static_cast<int32_t>(offsetof(BRECORD_t3470580684, ___pvRecord_0)); }
	inline intptr_t get_pvRecord_0() const { return ___pvRecord_0; }
	inline intptr_t* get_address_of_pvRecord_0() { return &___pvRecord_0; }
	inline void set_pvRecord_0(intptr_t value)
	{
		___pvRecord_0 = value;
	}

	inline static int32_t get_offset_of_pRecInfo_1() { return static_cast<int32_t>(offsetof(BRECORD_t3470580684, ___pRecInfo_1)); }
	inline intptr_t get_pRecInfo_1() const { return ___pRecInfo_1; }
	inline intptr_t* get_address_of_pRecInfo_1() { return &___pRecInfo_1; }
	inline void set_pRecInfo_1(intptr_t value)
	{
		___pRecInfo_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BRECORD_T3470580684_H
#ifndef CONSOLEKEY_T4097401472_H
#define CONSOLEKEY_T4097401472_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ConsoleKey
struct  ConsoleKey_t4097401472 
{
public:
	// System.Int32 System.ConsoleKey::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConsoleKey_t4097401472, ___value___2)); }
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
#endif // CONSOLEKEY_T4097401472_H
#ifndef CONSOLEMODIFIERS_T1471011467_H
#define CONSOLEMODIFIERS_T1471011467_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ConsoleModifiers
struct  ConsoleModifiers_t1471011467 
{
public:
	// System.Int32 System.ConsoleModifiers::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConsoleModifiers_t1471011467, ___value___2)); }
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
#endif // CONSOLEMODIFIERS_T1471011467_H
#ifndef CONSOLESCREENBUFFERINFO_T3095351730_H
#define CONSOLESCREENBUFFERINFO_T3095351730_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ConsoleScreenBufferInfo
struct  ConsoleScreenBufferInfo_t3095351730 
{
public:
	// System.Coord System.ConsoleScreenBufferInfo::Size
	Coord_t397375283  ___Size_0;
	// System.Coord System.ConsoleScreenBufferInfo::CursorPosition
	Coord_t397375283  ___CursorPosition_1;
	// System.Int16 System.ConsoleScreenBufferInfo::Attribute
	int16_t ___Attribute_2;
	// System.SmallRect System.ConsoleScreenBufferInfo::Window
	SmallRect_t2930836963  ___Window_3;
	// System.Coord System.ConsoleScreenBufferInfo::MaxWindowSize
	Coord_t397375283  ___MaxWindowSize_4;

public:
	inline static int32_t get_offset_of_Size_0() { return static_cast<int32_t>(offsetof(ConsoleScreenBufferInfo_t3095351730, ___Size_0)); }
	inline Coord_t397375283  get_Size_0() const { return ___Size_0; }
	inline Coord_t397375283 * get_address_of_Size_0() { return &___Size_0; }
	inline void set_Size_0(Coord_t397375283  value)
	{
		___Size_0 = value;
	}

	inline static int32_t get_offset_of_CursorPosition_1() { return static_cast<int32_t>(offsetof(ConsoleScreenBufferInfo_t3095351730, ___CursorPosition_1)); }
	inline Coord_t397375283  get_CursorPosition_1() const { return ___CursorPosition_1; }
	inline Coord_t397375283 * get_address_of_CursorPosition_1() { return &___CursorPosition_1; }
	inline void set_CursorPosition_1(Coord_t397375283  value)
	{
		___CursorPosition_1 = value;
	}

	inline static int32_t get_offset_of_Attribute_2() { return static_cast<int32_t>(offsetof(ConsoleScreenBufferInfo_t3095351730, ___Attribute_2)); }
	inline int16_t get_Attribute_2() const { return ___Attribute_2; }
	inline int16_t* get_address_of_Attribute_2() { return &___Attribute_2; }
	inline void set_Attribute_2(int16_t value)
	{
		___Attribute_2 = value;
	}

	inline static int32_t get_offset_of_Window_3() { return static_cast<int32_t>(offsetof(ConsoleScreenBufferInfo_t3095351730, ___Window_3)); }
	inline SmallRect_t2930836963  get_Window_3() const { return ___Window_3; }
	inline SmallRect_t2930836963 * get_address_of_Window_3() { return &___Window_3; }
	inline void set_Window_3(SmallRect_t2930836963  value)
	{
		___Window_3 = value;
	}

	inline static int32_t get_offset_of_MaxWindowSize_4() { return static_cast<int32_t>(offsetof(ConsoleScreenBufferInfo_t3095351730, ___MaxWindowSize_4)); }
	inline Coord_t397375283  get_MaxWindowSize_4() const { return ___MaxWindowSize_4; }
	inline Coord_t397375283 * get_address_of_MaxWindowSize_4() { return &___MaxWindowSize_4; }
	inline void set_MaxWindowSize_4(Coord_t397375283  value)
	{
		___MaxWindowSize_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSOLESCREENBUFFERINFO_T3095351730_H
#ifndef DTSUBSTRINGTYPE_T2997180936_H
#define DTSUBSTRINGTYPE_T2997180936_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DTSubStringType
struct  DTSubStringType_t2997180936 
{
public:
	// System.Int32 System.DTSubStringType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DTSubStringType_t2997180936, ___value___2)); }
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
#endif // DTSUBSTRINGTYPE_T2997180936_H
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
#ifndef COMPAREOPTIONS_T4130014775_H
#define COMPAREOPTIONS_T4130014775_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CompareOptions
struct  CompareOptions_t4130014775 
{
public:
	// System.Int32 System.Globalization.CompareOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompareOptions_t4130014775, ___value___2)); }
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
#endif // COMPAREOPTIONS_T4130014775_H
#ifndef DATETIMEFORMATFLAGS_T1884407083_H
#define DATETIMEFORMATFLAGS_T1884407083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.DateTimeFormatFlags
struct  DateTimeFormatFlags_t1884407083 
{
public:
	// System.Int32 System.Globalization.DateTimeFormatFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateTimeFormatFlags_t1884407083, ___value___2)); }
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
#endif // DATETIMEFORMATFLAGS_T1884407083_H
#ifndef DATETIMESTYLES_T840957420_H
#define DATETIMESTYLES_T840957420_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.DateTimeStyles
struct  DateTimeStyles_t840957420 
{
public:
	// System.Int32 System.Globalization.DateTimeStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateTimeStyles_t840957420, ___value___2)); }
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
#endif // DATETIMESTYLES_T840957420_H
#ifndef NUMBERSTYLES_T617258130_H
#define NUMBERSTYLES_T617258130_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.NumberStyles
struct  NumberStyles_t617258130 
{
public:
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NumberStyles_t617258130, ___value___2)); }
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
#endif // NUMBERSTYLES_T617258130_H
#ifndef HANDLES_T3280152003_H
#define HANDLES_T3280152003_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Handles
struct  Handles_t3280152003 
{
public:
	// System.Int32 System.Handles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Handles_t3280152003, ___value___2)); }
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
#endif // HANDLES_T3280152003_H
#ifndef INDEXOUTOFRANGEEXCEPTION_T1578797820_H
#define INDEXOUTOFRANGEEXCEPTION_T1578797820_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IndexOutOfRangeException
struct  IndexOutOfRangeException_t1578797820  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INDEXOUTOFRANGEEXCEPTION_T1578797820_H
#ifndef INVALIDCASTEXCEPTION_T3927145244_H
#define INVALIDCASTEXCEPTION_T3927145244_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidCastException
struct  InvalidCastException_t3927145244  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDCASTEXCEPTION_T3927145244_H
#ifndef INVALIDOPERATIONEXCEPTION_T56020091_H
#define INVALIDOPERATIONEXCEPTION_T56020091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t56020091  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T56020091_H
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifndef ASSEMBLY_T_H
#define ASSEMBLY_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Assembly
struct  Assembly_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Assembly::_mono_assembly
	intptr_t ____mono_assembly_0;
	// System.Reflection.Assembly/ResolveEventHolder System.Reflection.Assembly::resolve_event_holder
	ResolveEventHolder_t2120639521 * ___resolve_event_holder_1;
	// System.Security.Policy.Evidence System.Reflection.Assembly::_evidence
	Evidence_t2008144148 * ____evidence_2;
	// System.Security.PermissionSet System.Reflection.Assembly::_minimum
	PermissionSet_t223948603 * ____minimum_3;
	// System.Security.PermissionSet System.Reflection.Assembly::_optional
	PermissionSet_t223948603 * ____optional_4;
	// System.Security.PermissionSet System.Reflection.Assembly::_refuse
	PermissionSet_t223948603 * ____refuse_5;
	// System.Security.PermissionSet System.Reflection.Assembly::_granted
	PermissionSet_t223948603 * ____granted_6;
	// System.Security.PermissionSet System.Reflection.Assembly::_denied
	PermissionSet_t223948603 * ____denied_7;
	// System.Boolean System.Reflection.Assembly::fromByteArray
	bool ___fromByteArray_8;
	// System.String System.Reflection.Assembly::assemblyName
	String_t* ___assemblyName_9;

public:
	inline static int32_t get_offset_of__mono_assembly_0() { return static_cast<int32_t>(offsetof(Assembly_t, ____mono_assembly_0)); }
	inline intptr_t get__mono_assembly_0() const { return ____mono_assembly_0; }
	inline intptr_t* get_address_of__mono_assembly_0() { return &____mono_assembly_0; }
	inline void set__mono_assembly_0(intptr_t value)
	{
		____mono_assembly_0 = value;
	}

	inline static int32_t get_offset_of_resolve_event_holder_1() { return static_cast<int32_t>(offsetof(Assembly_t, ___resolve_event_holder_1)); }
	inline ResolveEventHolder_t2120639521 * get_resolve_event_holder_1() const { return ___resolve_event_holder_1; }
	inline ResolveEventHolder_t2120639521 ** get_address_of_resolve_event_holder_1() { return &___resolve_event_holder_1; }
	inline void set_resolve_event_holder_1(ResolveEventHolder_t2120639521 * value)
	{
		___resolve_event_holder_1 = value;
		Il2CppCodeGenWriteBarrier((&___resolve_event_holder_1), value);
	}

	inline static int32_t get_offset_of__evidence_2() { return static_cast<int32_t>(offsetof(Assembly_t, ____evidence_2)); }
	inline Evidence_t2008144148 * get__evidence_2() const { return ____evidence_2; }
	inline Evidence_t2008144148 ** get_address_of__evidence_2() { return &____evidence_2; }
	inline void set__evidence_2(Evidence_t2008144148 * value)
	{
		____evidence_2 = value;
		Il2CppCodeGenWriteBarrier((&____evidence_2), value);
	}

	inline static int32_t get_offset_of__minimum_3() { return static_cast<int32_t>(offsetof(Assembly_t, ____minimum_3)); }
	inline PermissionSet_t223948603 * get__minimum_3() const { return ____minimum_3; }
	inline PermissionSet_t223948603 ** get_address_of__minimum_3() { return &____minimum_3; }
	inline void set__minimum_3(PermissionSet_t223948603 * value)
	{
		____minimum_3 = value;
		Il2CppCodeGenWriteBarrier((&____minimum_3), value);
	}

	inline static int32_t get_offset_of__optional_4() { return static_cast<int32_t>(offsetof(Assembly_t, ____optional_4)); }
	inline PermissionSet_t223948603 * get__optional_4() const { return ____optional_4; }
	inline PermissionSet_t223948603 ** get_address_of__optional_4() { return &____optional_4; }
	inline void set__optional_4(PermissionSet_t223948603 * value)
	{
		____optional_4 = value;
		Il2CppCodeGenWriteBarrier((&____optional_4), value);
	}

	inline static int32_t get_offset_of__refuse_5() { return static_cast<int32_t>(offsetof(Assembly_t, ____refuse_5)); }
	inline PermissionSet_t223948603 * get__refuse_5() const { return ____refuse_5; }
	inline PermissionSet_t223948603 ** get_address_of__refuse_5() { return &____refuse_5; }
	inline void set__refuse_5(PermissionSet_t223948603 * value)
	{
		____refuse_5 = value;
		Il2CppCodeGenWriteBarrier((&____refuse_5), value);
	}

	inline static int32_t get_offset_of__granted_6() { return static_cast<int32_t>(offsetof(Assembly_t, ____granted_6)); }
	inline PermissionSet_t223948603 * get__granted_6() const { return ____granted_6; }
	inline PermissionSet_t223948603 ** get_address_of__granted_6() { return &____granted_6; }
	inline void set__granted_6(PermissionSet_t223948603 * value)
	{
		____granted_6 = value;
		Il2CppCodeGenWriteBarrier((&____granted_6), value);
	}

	inline static int32_t get_offset_of__denied_7() { return static_cast<int32_t>(offsetof(Assembly_t, ____denied_7)); }
	inline PermissionSet_t223948603 * get__denied_7() const { return ____denied_7; }
	inline PermissionSet_t223948603 ** get_address_of__denied_7() { return &____denied_7; }
	inline void set__denied_7(PermissionSet_t223948603 * value)
	{
		____denied_7 = value;
		Il2CppCodeGenWriteBarrier((&____denied_7), value);
	}

	inline static int32_t get_offset_of_fromByteArray_8() { return static_cast<int32_t>(offsetof(Assembly_t, ___fromByteArray_8)); }
	inline bool get_fromByteArray_8() const { return ___fromByteArray_8; }
	inline bool* get_address_of_fromByteArray_8() { return &___fromByteArray_8; }
	inline void set_fromByteArray_8(bool value)
	{
		___fromByteArray_8 = value;
	}

	inline static int32_t get_offset_of_assemblyName_9() { return static_cast<int32_t>(offsetof(Assembly_t, ___assemblyName_9)); }
	inline String_t* get_assemblyName_9() const { return ___assemblyName_9; }
	inline String_t** get_address_of_assemblyName_9() { return &___assemblyName_9; }
	inline void set_assemblyName_9(String_t* value)
	{
		___assemblyName_9 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_t2120639521 * ___resolve_event_holder_1;
	Evidence_t2008144148 * ____evidence_2;
	PermissionSet_t223948603 * ____minimum_3;
	PermissionSet_t223948603 * ____optional_4;
	PermissionSet_t223948603 * ____refuse_5;
	PermissionSet_t223948603 * ____granted_6;
	PermissionSet_t223948603 * ____denied_7;
	int32_t ___fromByteArray_8;
	char* ___assemblyName_9;
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_t2120639521 * ___resolve_event_holder_1;
	Evidence_t2008144148 * ____evidence_2;
	PermissionSet_t223948603 * ____minimum_3;
	PermissionSet_t223948603 * ____optional_4;
	PermissionSet_t223948603 * ____refuse_5;
	PermissionSet_t223948603 * ____granted_6;
	PermissionSet_t223948603 * ____denied_7;
	int32_t ___fromByteArray_8;
	Il2CppChar* ___assemblyName_9;
};
#endif // ASSEMBLY_T_H
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
#ifndef CONSTRUCTORINFO_T5769829_H
#define CONSTRUCTORINFO_T5769829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ConstructorInfo
struct  ConstructorInfo_t5769829  : public MethodBase_t
{
public:

public:
};

struct ConstructorInfo_t5769829_StaticFields
{
public:
	// System.String System.Reflection.ConstructorInfo::ConstructorName
	String_t* ___ConstructorName_0;
	// System.String System.Reflection.ConstructorInfo::TypeConstructorName
	String_t* ___TypeConstructorName_1;

public:
	inline static int32_t get_offset_of_ConstructorName_0() { return static_cast<int32_t>(offsetof(ConstructorInfo_t5769829_StaticFields, ___ConstructorName_0)); }
	inline String_t* get_ConstructorName_0() const { return ___ConstructorName_0; }
	inline String_t** get_address_of_ConstructorName_0() { return &___ConstructorName_0; }
	inline void set_ConstructorName_0(String_t* value)
	{
		___ConstructorName_0 = value;
		Il2CppCodeGenWriteBarrier((&___ConstructorName_0), value);
	}

	inline static int32_t get_offset_of_TypeConstructorName_1() { return static_cast<int32_t>(offsetof(ConstructorInfo_t5769829_StaticFields, ___TypeConstructorName_1)); }
	inline String_t* get_TypeConstructorName_1() const { return ___TypeConstructorName_1; }
	inline String_t** get_address_of_TypeConstructorName_1() { return &___TypeConstructorName_1; }
	inline void set_TypeConstructorName_1(String_t* value)
	{
		___TypeConstructorName_1 = value;
		Il2CppCodeGenWriteBarrier((&___TypeConstructorName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRUCTORINFO_T5769829_H
#ifndef FIELDATTRIBUTES_T400321159_H
#define FIELDATTRIBUTES_T400321159_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.FieldAttributes
struct  FieldAttributes_t400321159 
{
public:
	// System.Int32 System.Reflection.FieldAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FieldAttributes_t400321159, ___value___2)); }
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
#endif // FIELDATTRIBUTES_T400321159_H
#ifndef INVALIDFILTERCRITERIAEXCEPTION_T2427731508_H
#define INVALIDFILTERCRITERIAEXCEPTION_T2427731508_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.InvalidFilterCriteriaException
struct  InvalidFilterCriteriaException_t2427731508  : public ApplicationException_t2339761290
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDFILTERCRITERIAEXCEPTION_T2427731508_H
#ifndef MEMBERTYPES_T3790569052_H
#define MEMBERTYPES_T3790569052_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberTypes
struct  MemberTypes_t3790569052 
{
public:
	// System.Int32 System.Reflection.MemberTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MemberTypes_t3790569052, ___value___2)); }
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
#endif // MEMBERTYPES_T3790569052_H
#ifndef METHODATTRIBUTES_T2366443849_H
#define METHODATTRIBUTES_T2366443849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodAttributes
struct  MethodAttributes_t2366443849 
{
public:
	// System.Int32 System.Reflection.MethodAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MethodAttributes_t2366443849, ___value___2)); }
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
#endif // METHODATTRIBUTES_T2366443849_H
#ifndef METHODINFO_T_H
#define METHODINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODINFO_T_H
#ifndef EXTERNALEXCEPTION_T3544951457_H
#define EXTERNALEXCEPTION_T3544951457_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ExternalException
struct  ExternalException_t3544951457  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTERNALEXCEPTION_T3544951457_H
#ifndef GCHANDLETYPE_T3432586689_H
#define GCHANDLETYPE_T3432586689_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandleType
struct  GCHandleType_t3432586689 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandleType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GCHandleType_t3432586689, ___value___2)); }
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
#endif // GCHANDLETYPE_T3432586689_H
#ifndef INVALIDCOMOBJECTEXCEPTION_T3939298412_H
#define INVALIDCOMOBJECTEXCEPTION_T3939298412_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.InvalidComObjectException
struct  InvalidComObjectException_t3939298412  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDCOMOBJECTEXCEPTION_T3939298412_H
#ifndef SERIALIZATIONEXCEPTION_T3941511869_H
#define SERIALIZATIONEXCEPTION_T3941511869_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationException
struct  SerializationException_t3941511869  : public SystemException_t176217640
{
public:

public:
};

struct SerializationException_t3941511869_StaticFields
{
public:
	// System.String System.Runtime.Serialization.SerializationException::_nullMessage
	String_t* ____nullMessage_17;

public:
	inline static int32_t get_offset_of__nullMessage_17() { return static_cast<int32_t>(offsetof(SerializationException_t3941511869_StaticFields, ____nullMessage_17)); }
	inline String_t* get__nullMessage_17() const { return ____nullMessage_17; }
	inline String_t** get_address_of__nullMessage_17() { return &____nullMessage_17; }
	inline void set__nullMessage_17(String_t* value)
	{
		____nullMessage_17 = value;
		Il2CppCodeGenWriteBarrier((&____nullMessage_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONEXCEPTION_T3941511869_H
#ifndef STREAMINGCONTEXTSTATES_T3580100459_H
#define STREAMINGCONTEXTSTATES_T3580100459_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContextStates
struct  StreamingContextStates_t3580100459 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamingContextStates_t3580100459, ___value___2)); }
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
#endif // STREAMINGCONTEXTSTATES_T3580100459_H
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
#ifndef STRINGCOMPARISON_T3657712135_H
#define STRINGCOMPARISON_T3657712135_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringComparison
struct  StringComparison_t3657712135 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringComparison_t3657712135, ___value___2)); }
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
#endif // STRINGCOMPARISON_T3657712135_H
#ifndef APARTMENTSTATE_T920447174_H
#define APARTMENTSTATE_T920447174_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ApartmentState
struct  ApartmentState_t920447174 
{
public:
	// System.Int32 System.Threading.ApartmentState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ApartmentState_t920447174, ___value___2)); }
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
#endif // APARTMENTSTATE_T920447174_H
#ifndef TOKENTYPE_T216849757_H
#define TOKENTYPE_T216849757_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TokenType
struct  TokenType_t216849757 
{
public:
	// System.Int32 System.TokenType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TokenType_t216849757, ___value___2)); }
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
#endif // TOKENTYPE_T216849757_H
#ifndef TYPECODE_T2987224087_H
#define TYPECODE_T2987224087_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeCode
struct  TypeCode_t2987224087 
{
public:
	// System.Int32 System.TypeCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeCode_t2987224087, ___value___2)); }
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
#endif // TYPECODE_T2987224087_H
#ifndef UNAUTHORIZEDACCESSEXCEPTION_T490705335_H
#define UNAUTHORIZEDACCESSEXCEPTION_T490705335_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnauthorizedAccessException
struct  UnauthorizedAccessException_t490705335  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNAUTHORIZEDACCESSEXCEPTION_T490705335_H
#ifndef WEAKREFERENCE_T1334886716_H
#define WEAKREFERENCE_T1334886716_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.WeakReference
struct  WeakReference_t1334886716  : public RuntimeObject
{
public:
	// System.Boolean System.WeakReference::isLongReference
	bool ___isLongReference_0;
	// System.Runtime.InteropServices.GCHandle System.WeakReference::gcHandle
	GCHandle_t3351438187  ___gcHandle_1;

public:
	inline static int32_t get_offset_of_isLongReference_0() { return static_cast<int32_t>(offsetof(WeakReference_t1334886716, ___isLongReference_0)); }
	inline bool get_isLongReference_0() const { return ___isLongReference_0; }
	inline bool* get_address_of_isLongReference_0() { return &___isLongReference_0; }
	inline void set_isLongReference_0(bool value)
	{
		___isLongReference_0 = value;
	}

	inline static int32_t get_offset_of_gcHandle_1() { return static_cast<int32_t>(offsetof(WeakReference_t1334886716, ___gcHandle_1)); }
	inline GCHandle_t3351438187  get_gcHandle_1() const { return ___gcHandle_1; }
	inline GCHandle_t3351438187 * get_address_of_gcHandle_1() { return &___gcHandle_1; }
	inline void set_gcHandle_1(GCHandle_t3351438187  value)
	{
		___gcHandle_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEAKREFERENCE_T1334886716_H
#ifndef WINDOWSCONSOLEDRIVER_T3991887195_H
#define WINDOWSCONSOLEDRIVER_T3991887195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.WindowsConsoleDriver
struct  WindowsConsoleDriver_t3991887195  : public RuntimeObject
{
public:
	// System.IntPtr System.WindowsConsoleDriver::inputHandle
	intptr_t ___inputHandle_0;
	// System.IntPtr System.WindowsConsoleDriver::outputHandle
	intptr_t ___outputHandle_1;
	// System.Int16 System.WindowsConsoleDriver::defaultAttribute
	int16_t ___defaultAttribute_2;

public:
	inline static int32_t get_offset_of_inputHandle_0() { return static_cast<int32_t>(offsetof(WindowsConsoleDriver_t3991887195, ___inputHandle_0)); }
	inline intptr_t get_inputHandle_0() const { return ___inputHandle_0; }
	inline intptr_t* get_address_of_inputHandle_0() { return &___inputHandle_0; }
	inline void set_inputHandle_0(intptr_t value)
	{
		___inputHandle_0 = value;
	}

	inline static int32_t get_offset_of_outputHandle_1() { return static_cast<int32_t>(offsetof(WindowsConsoleDriver_t3991887195, ___outputHandle_1)); }
	inline intptr_t get_outputHandle_1() const { return ___outputHandle_1; }
	inline intptr_t* get_address_of_outputHandle_1() { return &___outputHandle_1; }
	inline void set_outputHandle_1(intptr_t value)
	{
		___outputHandle_1 = value;
	}

	inline static int32_t get_offset_of_defaultAttribute_2() { return static_cast<int32_t>(offsetof(WindowsConsoleDriver_t3991887195, ___defaultAttribute_2)); }
	inline int16_t get_defaultAttribute_2() const { return ___defaultAttribute_2; }
	inline int16_t* get_address_of_defaultAttribute_2() { return &___defaultAttribute_2; }
	inline void set_defaultAttribute_2(int16_t value)
	{
		___defaultAttribute_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOWSCONSOLEDRIVER_T3991887195_H
#ifndef __COMOBJECT_T2735933417_H
#define __COMOBJECT_T2735933417_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.__ComObject
struct  __ComObject_t2735933417  : public MarshalByRefObject_t2760389100
{
public:
	// System.IntPtr System.__ComObject::iunknown
	intptr_t ___iunknown_1;
	// System.IntPtr System.__ComObject::hash_table
	intptr_t ___hash_table_2;
	// System.Threading.SynchronizationContext System.__ComObject::synchronization_context
	SynchronizationContext_t2326897723 * ___synchronization_context_3;
	// Mono.Interop.ComInteropProxy System.__ComObject::proxy
	ComInteropProxy_t1891481270 * ___proxy_4;

public:
	inline static int32_t get_offset_of_iunknown_1() { return static_cast<int32_t>(offsetof(__ComObject_t2735933417, ___iunknown_1)); }
	inline intptr_t get_iunknown_1() const { return ___iunknown_1; }
	inline intptr_t* get_address_of_iunknown_1() { return &___iunknown_1; }
	inline void set_iunknown_1(intptr_t value)
	{
		___iunknown_1 = value;
	}

	inline static int32_t get_offset_of_hash_table_2() { return static_cast<int32_t>(offsetof(__ComObject_t2735933417, ___hash_table_2)); }
	inline intptr_t get_hash_table_2() const { return ___hash_table_2; }
	inline intptr_t* get_address_of_hash_table_2() { return &___hash_table_2; }
	inline void set_hash_table_2(intptr_t value)
	{
		___hash_table_2 = value;
	}

	inline static int32_t get_offset_of_synchronization_context_3() { return static_cast<int32_t>(offsetof(__ComObject_t2735933417, ___synchronization_context_3)); }
	inline SynchronizationContext_t2326897723 * get_synchronization_context_3() const { return ___synchronization_context_3; }
	inline SynchronizationContext_t2326897723 ** get_address_of_synchronization_context_3() { return &___synchronization_context_3; }
	inline void set_synchronization_context_3(SynchronizationContext_t2326897723 * value)
	{
		___synchronization_context_3 = value;
		Il2CppCodeGenWriteBarrier((&___synchronization_context_3), value);
	}

	inline static int32_t get_offset_of_proxy_4() { return static_cast<int32_t>(offsetof(__ComObject_t2735933417, ___proxy_4)); }
	inline ComInteropProxy_t1891481270 * get_proxy_4() const { return ___proxy_4; }
	inline ComInteropProxy_t1891481270 ** get_address_of_proxy_4() { return &___proxy_4; }
	inline void set_proxy_4(ComInteropProxy_t1891481270 * value)
	{
		___proxy_4 = value;
		Il2CppCodeGenWriteBarrier((&___proxy_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.__ComObject
struct __ComObject_t2735933417_marshaled_pinvoke : public MarshalByRefObject_t2760389100_marshaled_pinvoke
{
	intptr_t ___iunknown_1;
	intptr_t ___hash_table_2;
	SynchronizationContext_t2326897723 * ___synchronization_context_3;
	ComInteropProxy_t1891481270_marshaled_pinvoke* ___proxy_4;
};
// Native definition for COM marshalling of System.__ComObject
struct __ComObject_t2735933417_marshaled_com : public MarshalByRefObject_t2760389100_marshaled_com
{
	intptr_t ___iunknown_1;
	intptr_t ___hash_table_2;
	SynchronizationContext_t2326897723 * ___synchronization_context_3;
	ComInteropProxy_t1891481270_marshaled_com* ___proxy_4;
};
#endif // __COMOBJECT_T2735933417_H
#ifndef CFRANGE_T1233619878_H
#define CFRANGE_T1233619878_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XamMac.CoreFoundation.CFHelpers/CFRange
struct  CFRange_t1233619878 
{
public:
	// System.IntPtr XamMac.CoreFoundation.CFHelpers/CFRange::loc
	intptr_t ___loc_0;
	// System.IntPtr XamMac.CoreFoundation.CFHelpers/CFRange::len
	intptr_t ___len_1;

public:
	inline static int32_t get_offset_of_loc_0() { return static_cast<int32_t>(offsetof(CFRange_t1233619878, ___loc_0)); }
	inline intptr_t get_loc_0() const { return ___loc_0; }
	inline intptr_t* get_address_of_loc_0() { return &___loc_0; }
	inline void set_loc_0(intptr_t value)
	{
		___loc_0 = value;
	}

	inline static int32_t get_offset_of_len_1() { return static_cast<int32_t>(offsetof(CFRange_t1233619878, ___len_1)); }
	inline intptr_t get_len_1() const { return ___len_1; }
	inline intptr_t* get_address_of_len_1() { return &___len_1; }
	inline void set_len_1(intptr_t value)
	{
		___len_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CFRANGE_T1233619878_H
#ifndef ARGUMENTNULLEXCEPTION_T1615371798_H
#define ARGUMENTNULLEXCEPTION_T1615371798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t1615371798  : public ArgumentException_t132251570
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T1615371798_H
#ifndef ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#define ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t777629997  : public ArgumentException_t132251570
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t777629997, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_actualValue_19), value);
	}
};

struct ArgumentOutOfRangeException_t777629997_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t777629997_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((&____rangeMessage_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#ifndef CONSOLEKEYINFO_T1802691652_H
#define CONSOLEKEYINFO_T1802691652_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ConsoleKeyInfo
struct  ConsoleKeyInfo_t1802691652 
{
public:
	// System.Char System.ConsoleKeyInfo::_keyChar
	Il2CppChar ____keyChar_0;
	// System.ConsoleKey System.ConsoleKeyInfo::_key
	int32_t ____key_1;
	// System.ConsoleModifiers System.ConsoleKeyInfo::_mods
	int32_t ____mods_2;

public:
	inline static int32_t get_offset_of__keyChar_0() { return static_cast<int32_t>(offsetof(ConsoleKeyInfo_t1802691652, ____keyChar_0)); }
	inline Il2CppChar get__keyChar_0() const { return ____keyChar_0; }
	inline Il2CppChar* get_address_of__keyChar_0() { return &____keyChar_0; }
	inline void set__keyChar_0(Il2CppChar value)
	{
		____keyChar_0 = value;
	}

	inline static int32_t get_offset_of__key_1() { return static_cast<int32_t>(offsetof(ConsoleKeyInfo_t1802691652, ____key_1)); }
	inline int32_t get__key_1() const { return ____key_1; }
	inline int32_t* get_address_of__key_1() { return &____key_1; }
	inline void set__key_1(int32_t value)
	{
		____key_1 = value;
	}

	inline static int32_t get_offset_of__mods_2() { return static_cast<int32_t>(offsetof(ConsoleKeyInfo_t1802691652, ____mods_2)); }
	inline int32_t get__mods_2() const { return ____mods_2; }
	inline int32_t* get_address_of__mods_2() { return &____mods_2; }
	inline void set__mods_2(int32_t value)
	{
		____mods_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ConsoleKeyInfo
struct ConsoleKeyInfo_t1802691652_marshaled_pinvoke
{
	uint8_t ____keyChar_0;
	int32_t ____key_1;
	int32_t ____mods_2;
};
// Native definition for COM marshalling of System.ConsoleKeyInfo
struct ConsoleKeyInfo_t1802691652_marshaled_com
{
	uint8_t ____keyChar_0;
	int32_t ____key_1;
	int32_t ____mods_2;
};
#endif // CONSOLEKEYINFO_T1802691652_H
#ifndef DTSUBSTRING_T967826655_H
#define DTSUBSTRING_T967826655_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DTSubString
struct  DTSubString_t967826655 
{
public:
	// System.String System.DTSubString::s
	String_t* ___s_0;
	// System.Int32 System.DTSubString::index
	int32_t ___index_1;
	// System.Int32 System.DTSubString::length
	int32_t ___length_2;
	// System.DTSubStringType System.DTSubString::type
	int32_t ___type_3;
	// System.Int32 System.DTSubString::value
	int32_t ___value_4;

public:
	inline static int32_t get_offset_of_s_0() { return static_cast<int32_t>(offsetof(DTSubString_t967826655, ___s_0)); }
	inline String_t* get_s_0() const { return ___s_0; }
	inline String_t** get_address_of_s_0() { return &___s_0; }
	inline void set_s_0(String_t* value)
	{
		___s_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(DTSubString_t967826655, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_length_2() { return static_cast<int32_t>(offsetof(DTSubString_t967826655, ___length_2)); }
	inline int32_t get_length_2() const { return ___length_2; }
	inline int32_t* get_address_of_length_2() { return &___length_2; }
	inline void set_length_2(int32_t value)
	{
		___length_2 = value;
	}

	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(DTSubString_t967826655, ___type_3)); }
	inline int32_t get_type_3() const { return ___type_3; }
	inline int32_t* get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(int32_t value)
	{
		___type_3 = value;
	}

	inline static int32_t get_offset_of_value_4() { return static_cast<int32_t>(offsetof(DTSubString_t967826655, ___value_4)); }
	inline int32_t get_value_4() const { return ___value_4; }
	inline int32_t* get_address_of_value_4() { return &___value_4; }
	inline void set_value_4(int32_t value)
	{
		___value_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.DTSubString
struct DTSubString_t967826655_marshaled_pinvoke
{
	char* ___s_0;
	int32_t ___index_1;
	int32_t ___length_2;
	int32_t ___type_3;
	int32_t ___value_4;
};
// Native definition for COM marshalling of System.DTSubString
struct DTSubString_t967826655_marshaled_com
{
	Il2CppChar* ___s_0;
	int32_t ___index_1;
	int32_t ___length_2;
	int32_t ___type_3;
	int32_t ___value_4;
};
#endif // DTSUBSTRING_T967826655_H
#ifndef COMPAREINFO_T1092934962_H
#define COMPAREINFO_T1092934962_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CompareInfo
struct  CompareInfo_t1092934962  : public RuntimeObject
{
public:
	// System.String System.Globalization.CompareInfo::m_name
	String_t* ___m_name_3;
	// System.String System.Globalization.CompareInfo::m_sortName
	String_t* ___m_sortName_4;
	// System.Int32 System.Globalization.CompareInfo::win32LCID
	int32_t ___win32LCID_5;
	// System.Int32 System.Globalization.CompareInfo::culture
	int32_t ___culture_6;
	// System.Globalization.SortVersion System.Globalization.CompareInfo::m_SortVersion
	SortVersion_t3332565609 * ___m_SortVersion_20;
	// Mono.Globalization.Unicode.SimpleCollator System.Globalization.CompareInfo::collator
	SimpleCollator_t2877834729 * ___collator_21;

public:
	inline static int32_t get_offset_of_m_name_3() { return static_cast<int32_t>(offsetof(CompareInfo_t1092934962, ___m_name_3)); }
	inline String_t* get_m_name_3() const { return ___m_name_3; }
	inline String_t** get_address_of_m_name_3() { return &___m_name_3; }
	inline void set_m_name_3(String_t* value)
	{
		___m_name_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_3), value);
	}

	inline static int32_t get_offset_of_m_sortName_4() { return static_cast<int32_t>(offsetof(CompareInfo_t1092934962, ___m_sortName_4)); }
	inline String_t* get_m_sortName_4() const { return ___m_sortName_4; }
	inline String_t** get_address_of_m_sortName_4() { return &___m_sortName_4; }
	inline void set_m_sortName_4(String_t* value)
	{
		___m_sortName_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_sortName_4), value);
	}

	inline static int32_t get_offset_of_win32LCID_5() { return static_cast<int32_t>(offsetof(CompareInfo_t1092934962, ___win32LCID_5)); }
	inline int32_t get_win32LCID_5() const { return ___win32LCID_5; }
	inline int32_t* get_address_of_win32LCID_5() { return &___win32LCID_5; }
	inline void set_win32LCID_5(int32_t value)
	{
		___win32LCID_5 = value;
	}

	inline static int32_t get_offset_of_culture_6() { return static_cast<int32_t>(offsetof(CompareInfo_t1092934962, ___culture_6)); }
	inline int32_t get_culture_6() const { return ___culture_6; }
	inline int32_t* get_address_of_culture_6() { return &___culture_6; }
	inline void set_culture_6(int32_t value)
	{
		___culture_6 = value;
	}

	inline static int32_t get_offset_of_m_SortVersion_20() { return static_cast<int32_t>(offsetof(CompareInfo_t1092934962, ___m_SortVersion_20)); }
	inline SortVersion_t3332565609 * get_m_SortVersion_20() const { return ___m_SortVersion_20; }
	inline SortVersion_t3332565609 ** get_address_of_m_SortVersion_20() { return &___m_SortVersion_20; }
	inline void set_m_SortVersion_20(SortVersion_t3332565609 * value)
	{
		___m_SortVersion_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_SortVersion_20), value);
	}

	inline static int32_t get_offset_of_collator_21() { return static_cast<int32_t>(offsetof(CompareInfo_t1092934962, ___collator_21)); }
	inline SimpleCollator_t2877834729 * get_collator_21() const { return ___collator_21; }
	inline SimpleCollator_t2877834729 ** get_address_of_collator_21() { return &___collator_21; }
	inline void set_collator_21(SimpleCollator_t2877834729 * value)
	{
		___collator_21 = value;
		Il2CppCodeGenWriteBarrier((&___collator_21), value);
	}
};

struct CompareInfo_t1092934962_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,Mono.Globalization.Unicode.SimpleCollator> System.Globalization.CompareInfo::collators
	Dictionary_2_t2663091028 * ___collators_22;
	// System.Boolean System.Globalization.CompareInfo::managedCollation
	bool ___managedCollation_23;
	// System.Boolean System.Globalization.CompareInfo::managedCollationChecked
	bool ___managedCollationChecked_24;

public:
	inline static int32_t get_offset_of_collators_22() { return static_cast<int32_t>(offsetof(CompareInfo_t1092934962_StaticFields, ___collators_22)); }
	inline Dictionary_2_t2663091028 * get_collators_22() const { return ___collators_22; }
	inline Dictionary_2_t2663091028 ** get_address_of_collators_22() { return &___collators_22; }
	inline void set_collators_22(Dictionary_2_t2663091028 * value)
	{
		___collators_22 = value;
		Il2CppCodeGenWriteBarrier((&___collators_22), value);
	}

	inline static int32_t get_offset_of_managedCollation_23() { return static_cast<int32_t>(offsetof(CompareInfo_t1092934962_StaticFields, ___managedCollation_23)); }
	inline bool get_managedCollation_23() const { return ___managedCollation_23; }
	inline bool* get_address_of_managedCollation_23() { return &___managedCollation_23; }
	inline void set_managedCollation_23(bool value)
	{
		___managedCollation_23 = value;
	}

	inline static int32_t get_offset_of_managedCollationChecked_24() { return static_cast<int32_t>(offsetof(CompareInfo_t1092934962_StaticFields, ___managedCollationChecked_24)); }
	inline bool get_managedCollationChecked_24() const { return ___managedCollationChecked_24; }
	inline bool* get_address_of_managedCollationChecked_24() { return &___managedCollationChecked_24; }
	inline void set_managedCollationChecked_24(bool value)
	{
		___managedCollationChecked_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPAREINFO_T1092934962_H
#ifndef DATETIMEFORMATINFO_T2405853701_H
#define DATETIMEFORMATINFO_T2405853701_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.DateTimeFormatInfo
struct  DateTimeFormatInfo_t2405853701  : public RuntimeObject
{
public:
	// System.Globalization.CultureData System.Globalization.DateTimeFormatInfo::m_cultureData
	CultureData_t1899656083 * ___m_cultureData_1;
	// System.String System.Globalization.DateTimeFormatInfo::m_name
	String_t* ___m_name_2;
	// System.String System.Globalization.DateTimeFormatInfo::m_langName
	String_t* ___m_langName_3;
	// System.Globalization.CompareInfo System.Globalization.DateTimeFormatInfo::m_compareInfo
	CompareInfo_t1092934962 * ___m_compareInfo_4;
	// System.Globalization.CultureInfo System.Globalization.DateTimeFormatInfo::m_cultureInfo
	CultureInfo_t4157843068 * ___m_cultureInfo_5;
	// System.String System.Globalization.DateTimeFormatInfo::amDesignator
	String_t* ___amDesignator_6;
	// System.String System.Globalization.DateTimeFormatInfo::pmDesignator
	String_t* ___pmDesignator_7;
	// System.String System.Globalization.DateTimeFormatInfo::dateSeparator
	String_t* ___dateSeparator_8;
	// System.String System.Globalization.DateTimeFormatInfo::generalShortTimePattern
	String_t* ___generalShortTimePattern_9;
	// System.String System.Globalization.DateTimeFormatInfo::generalLongTimePattern
	String_t* ___generalLongTimePattern_10;
	// System.String System.Globalization.DateTimeFormatInfo::timeSeparator
	String_t* ___timeSeparator_11;
	// System.String System.Globalization.DateTimeFormatInfo::monthDayPattern
	String_t* ___monthDayPattern_12;
	// System.String System.Globalization.DateTimeFormatInfo::dateTimeOffsetPattern
	String_t* ___dateTimeOffsetPattern_13;
	// System.Globalization.Calendar System.Globalization.DateTimeFormatInfo::calendar
	Calendar_t1661121569 * ___calendar_17;
	// System.Int32 System.Globalization.DateTimeFormatInfo::firstDayOfWeek
	int32_t ___firstDayOfWeek_18;
	// System.Int32 System.Globalization.DateTimeFormatInfo::calendarWeekRule
	int32_t ___calendarWeekRule_19;
	// System.String System.Globalization.DateTimeFormatInfo::fullDateTimePattern
	String_t* ___fullDateTimePattern_20;
	// System.String[] System.Globalization.DateTimeFormatInfo::abbreviatedDayNames
	StringU5BU5D_t1281789340* ___abbreviatedDayNames_21;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_superShortDayNames
	StringU5BU5D_t1281789340* ___m_superShortDayNames_22;
	// System.String[] System.Globalization.DateTimeFormatInfo::dayNames
	StringU5BU5D_t1281789340* ___dayNames_23;
	// System.String[] System.Globalization.DateTimeFormatInfo::abbreviatedMonthNames
	StringU5BU5D_t1281789340* ___abbreviatedMonthNames_24;
	// System.String[] System.Globalization.DateTimeFormatInfo::monthNames
	StringU5BU5D_t1281789340* ___monthNames_25;
	// System.String[] System.Globalization.DateTimeFormatInfo::genitiveMonthNames
	StringU5BU5D_t1281789340* ___genitiveMonthNames_26;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_genitiveAbbreviatedMonthNames
	StringU5BU5D_t1281789340* ___m_genitiveAbbreviatedMonthNames_27;
	// System.String[] System.Globalization.DateTimeFormatInfo::leapYearMonthNames
	StringU5BU5D_t1281789340* ___leapYearMonthNames_28;
	// System.String System.Globalization.DateTimeFormatInfo::longDatePattern
	String_t* ___longDatePattern_29;
	// System.String System.Globalization.DateTimeFormatInfo::shortDatePattern
	String_t* ___shortDatePattern_30;
	// System.String System.Globalization.DateTimeFormatInfo::yearMonthPattern
	String_t* ___yearMonthPattern_31;
	// System.String System.Globalization.DateTimeFormatInfo::longTimePattern
	String_t* ___longTimePattern_32;
	// System.String System.Globalization.DateTimeFormatInfo::shortTimePattern
	String_t* ___shortTimePattern_33;
	// System.String[] System.Globalization.DateTimeFormatInfo::allYearMonthPatterns
	StringU5BU5D_t1281789340* ___allYearMonthPatterns_34;
	// System.String[] System.Globalization.DateTimeFormatInfo::allShortDatePatterns
	StringU5BU5D_t1281789340* ___allShortDatePatterns_35;
	// System.String[] System.Globalization.DateTimeFormatInfo::allLongDatePatterns
	StringU5BU5D_t1281789340* ___allLongDatePatterns_36;
	// System.String[] System.Globalization.DateTimeFormatInfo::allShortTimePatterns
	StringU5BU5D_t1281789340* ___allShortTimePatterns_37;
	// System.String[] System.Globalization.DateTimeFormatInfo::allLongTimePatterns
	StringU5BU5D_t1281789340* ___allLongTimePatterns_38;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_eraNames
	StringU5BU5D_t1281789340* ___m_eraNames_39;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_abbrevEraNames
	StringU5BU5D_t1281789340* ___m_abbrevEraNames_40;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_abbrevEnglishEraNames
	StringU5BU5D_t1281789340* ___m_abbrevEnglishEraNames_41;
	// System.Int32[] System.Globalization.DateTimeFormatInfo::optionalCalendars
	Int32U5BU5D_t385246372* ___optionalCalendars_42;
	// System.Boolean System.Globalization.DateTimeFormatInfo::m_isReadOnly
	bool ___m_isReadOnly_44;
	// System.Globalization.DateTimeFormatFlags System.Globalization.DateTimeFormatInfo::formatFlags
	int32_t ___formatFlags_45;
	// System.Int32 System.Globalization.DateTimeFormatInfo::CultureID
	int32_t ___CultureID_47;
	// System.Boolean System.Globalization.DateTimeFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_48;
	// System.Boolean System.Globalization.DateTimeFormatInfo::bUseCalendarInfo
	bool ___bUseCalendarInfo_49;
	// System.Int32 System.Globalization.DateTimeFormatInfo::nDataItem
	int32_t ___nDataItem_50;
	// System.Boolean System.Globalization.DateTimeFormatInfo::m_isDefaultCalendar
	bool ___m_isDefaultCalendar_51;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_dateWords
	StringU5BU5D_t1281789340* ___m_dateWords_53;
	// System.String System.Globalization.DateTimeFormatInfo::m_fullTimeSpanPositivePattern
	String_t* ___m_fullTimeSpanPositivePattern_54;
	// System.String System.Globalization.DateTimeFormatInfo::m_fullTimeSpanNegativePattern
	String_t* ___m_fullTimeSpanNegativePattern_55;
	// System.Globalization.TokenHashValue[] System.Globalization.DateTimeFormatInfo::m_dtfiTokenHash
	TokenHashValueU5BU5D_t818561467* ___m_dtfiTokenHash_57;

public:
	inline static int32_t get_offset_of_m_cultureData_1() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_cultureData_1)); }
	inline CultureData_t1899656083 * get_m_cultureData_1() const { return ___m_cultureData_1; }
	inline CultureData_t1899656083 ** get_address_of_m_cultureData_1() { return &___m_cultureData_1; }
	inline void set_m_cultureData_1(CultureData_t1899656083 * value)
	{
		___m_cultureData_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_cultureData_1), value);
	}

	inline static int32_t get_offset_of_m_name_2() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_name_2)); }
	inline String_t* get_m_name_2() const { return ___m_name_2; }
	inline String_t** get_address_of_m_name_2() { return &___m_name_2; }
	inline void set_m_name_2(String_t* value)
	{
		___m_name_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_2), value);
	}

	inline static int32_t get_offset_of_m_langName_3() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_langName_3)); }
	inline String_t* get_m_langName_3() const { return ___m_langName_3; }
	inline String_t** get_address_of_m_langName_3() { return &___m_langName_3; }
	inline void set_m_langName_3(String_t* value)
	{
		___m_langName_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_langName_3), value);
	}

	inline static int32_t get_offset_of_m_compareInfo_4() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_compareInfo_4)); }
	inline CompareInfo_t1092934962 * get_m_compareInfo_4() const { return ___m_compareInfo_4; }
	inline CompareInfo_t1092934962 ** get_address_of_m_compareInfo_4() { return &___m_compareInfo_4; }
	inline void set_m_compareInfo_4(CompareInfo_t1092934962 * value)
	{
		___m_compareInfo_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_compareInfo_4), value);
	}

	inline static int32_t get_offset_of_m_cultureInfo_5() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_cultureInfo_5)); }
	inline CultureInfo_t4157843068 * get_m_cultureInfo_5() const { return ___m_cultureInfo_5; }
	inline CultureInfo_t4157843068 ** get_address_of_m_cultureInfo_5() { return &___m_cultureInfo_5; }
	inline void set_m_cultureInfo_5(CultureInfo_t4157843068 * value)
	{
		___m_cultureInfo_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_cultureInfo_5), value);
	}

	inline static int32_t get_offset_of_amDesignator_6() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___amDesignator_6)); }
	inline String_t* get_amDesignator_6() const { return ___amDesignator_6; }
	inline String_t** get_address_of_amDesignator_6() { return &___amDesignator_6; }
	inline void set_amDesignator_6(String_t* value)
	{
		___amDesignator_6 = value;
		Il2CppCodeGenWriteBarrier((&___amDesignator_6), value);
	}

	inline static int32_t get_offset_of_pmDesignator_7() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___pmDesignator_7)); }
	inline String_t* get_pmDesignator_7() const { return ___pmDesignator_7; }
	inline String_t** get_address_of_pmDesignator_7() { return &___pmDesignator_7; }
	inline void set_pmDesignator_7(String_t* value)
	{
		___pmDesignator_7 = value;
		Il2CppCodeGenWriteBarrier((&___pmDesignator_7), value);
	}

	inline static int32_t get_offset_of_dateSeparator_8() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___dateSeparator_8)); }
	inline String_t* get_dateSeparator_8() const { return ___dateSeparator_8; }
	inline String_t** get_address_of_dateSeparator_8() { return &___dateSeparator_8; }
	inline void set_dateSeparator_8(String_t* value)
	{
		___dateSeparator_8 = value;
		Il2CppCodeGenWriteBarrier((&___dateSeparator_8), value);
	}

	inline static int32_t get_offset_of_generalShortTimePattern_9() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___generalShortTimePattern_9)); }
	inline String_t* get_generalShortTimePattern_9() const { return ___generalShortTimePattern_9; }
	inline String_t** get_address_of_generalShortTimePattern_9() { return &___generalShortTimePattern_9; }
	inline void set_generalShortTimePattern_9(String_t* value)
	{
		___generalShortTimePattern_9 = value;
		Il2CppCodeGenWriteBarrier((&___generalShortTimePattern_9), value);
	}

	inline static int32_t get_offset_of_generalLongTimePattern_10() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___generalLongTimePattern_10)); }
	inline String_t* get_generalLongTimePattern_10() const { return ___generalLongTimePattern_10; }
	inline String_t** get_address_of_generalLongTimePattern_10() { return &___generalLongTimePattern_10; }
	inline void set_generalLongTimePattern_10(String_t* value)
	{
		___generalLongTimePattern_10 = value;
		Il2CppCodeGenWriteBarrier((&___generalLongTimePattern_10), value);
	}

	inline static int32_t get_offset_of_timeSeparator_11() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___timeSeparator_11)); }
	inline String_t* get_timeSeparator_11() const { return ___timeSeparator_11; }
	inline String_t** get_address_of_timeSeparator_11() { return &___timeSeparator_11; }
	inline void set_timeSeparator_11(String_t* value)
	{
		___timeSeparator_11 = value;
		Il2CppCodeGenWriteBarrier((&___timeSeparator_11), value);
	}

	inline static int32_t get_offset_of_monthDayPattern_12() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___monthDayPattern_12)); }
	inline String_t* get_monthDayPattern_12() const { return ___monthDayPattern_12; }
	inline String_t** get_address_of_monthDayPattern_12() { return &___monthDayPattern_12; }
	inline void set_monthDayPattern_12(String_t* value)
	{
		___monthDayPattern_12 = value;
		Il2CppCodeGenWriteBarrier((&___monthDayPattern_12), value);
	}

	inline static int32_t get_offset_of_dateTimeOffsetPattern_13() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___dateTimeOffsetPattern_13)); }
	inline String_t* get_dateTimeOffsetPattern_13() const { return ___dateTimeOffsetPattern_13; }
	inline String_t** get_address_of_dateTimeOffsetPattern_13() { return &___dateTimeOffsetPattern_13; }
	inline void set_dateTimeOffsetPattern_13(String_t* value)
	{
		___dateTimeOffsetPattern_13 = value;
		Il2CppCodeGenWriteBarrier((&___dateTimeOffsetPattern_13), value);
	}

	inline static int32_t get_offset_of_calendar_17() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___calendar_17)); }
	inline Calendar_t1661121569 * get_calendar_17() const { return ___calendar_17; }
	inline Calendar_t1661121569 ** get_address_of_calendar_17() { return &___calendar_17; }
	inline void set_calendar_17(Calendar_t1661121569 * value)
	{
		___calendar_17 = value;
		Il2CppCodeGenWriteBarrier((&___calendar_17), value);
	}

	inline static int32_t get_offset_of_firstDayOfWeek_18() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___firstDayOfWeek_18)); }
	inline int32_t get_firstDayOfWeek_18() const { return ___firstDayOfWeek_18; }
	inline int32_t* get_address_of_firstDayOfWeek_18() { return &___firstDayOfWeek_18; }
	inline void set_firstDayOfWeek_18(int32_t value)
	{
		___firstDayOfWeek_18 = value;
	}

	inline static int32_t get_offset_of_calendarWeekRule_19() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___calendarWeekRule_19)); }
	inline int32_t get_calendarWeekRule_19() const { return ___calendarWeekRule_19; }
	inline int32_t* get_address_of_calendarWeekRule_19() { return &___calendarWeekRule_19; }
	inline void set_calendarWeekRule_19(int32_t value)
	{
		___calendarWeekRule_19 = value;
	}

	inline static int32_t get_offset_of_fullDateTimePattern_20() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___fullDateTimePattern_20)); }
	inline String_t* get_fullDateTimePattern_20() const { return ___fullDateTimePattern_20; }
	inline String_t** get_address_of_fullDateTimePattern_20() { return &___fullDateTimePattern_20; }
	inline void set_fullDateTimePattern_20(String_t* value)
	{
		___fullDateTimePattern_20 = value;
		Il2CppCodeGenWriteBarrier((&___fullDateTimePattern_20), value);
	}

	inline static int32_t get_offset_of_abbreviatedDayNames_21() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___abbreviatedDayNames_21)); }
	inline StringU5BU5D_t1281789340* get_abbreviatedDayNames_21() const { return ___abbreviatedDayNames_21; }
	inline StringU5BU5D_t1281789340** get_address_of_abbreviatedDayNames_21() { return &___abbreviatedDayNames_21; }
	inline void set_abbreviatedDayNames_21(StringU5BU5D_t1281789340* value)
	{
		___abbreviatedDayNames_21 = value;
		Il2CppCodeGenWriteBarrier((&___abbreviatedDayNames_21), value);
	}

	inline static int32_t get_offset_of_m_superShortDayNames_22() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_superShortDayNames_22)); }
	inline StringU5BU5D_t1281789340* get_m_superShortDayNames_22() const { return ___m_superShortDayNames_22; }
	inline StringU5BU5D_t1281789340** get_address_of_m_superShortDayNames_22() { return &___m_superShortDayNames_22; }
	inline void set_m_superShortDayNames_22(StringU5BU5D_t1281789340* value)
	{
		___m_superShortDayNames_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_superShortDayNames_22), value);
	}

	inline static int32_t get_offset_of_dayNames_23() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___dayNames_23)); }
	inline StringU5BU5D_t1281789340* get_dayNames_23() const { return ___dayNames_23; }
	inline StringU5BU5D_t1281789340** get_address_of_dayNames_23() { return &___dayNames_23; }
	inline void set_dayNames_23(StringU5BU5D_t1281789340* value)
	{
		___dayNames_23 = value;
		Il2CppCodeGenWriteBarrier((&___dayNames_23), value);
	}

	inline static int32_t get_offset_of_abbreviatedMonthNames_24() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___abbreviatedMonthNames_24)); }
	inline StringU5BU5D_t1281789340* get_abbreviatedMonthNames_24() const { return ___abbreviatedMonthNames_24; }
	inline StringU5BU5D_t1281789340** get_address_of_abbreviatedMonthNames_24() { return &___abbreviatedMonthNames_24; }
	inline void set_abbreviatedMonthNames_24(StringU5BU5D_t1281789340* value)
	{
		___abbreviatedMonthNames_24 = value;
		Il2CppCodeGenWriteBarrier((&___abbreviatedMonthNames_24), value);
	}

	inline static int32_t get_offset_of_monthNames_25() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___monthNames_25)); }
	inline StringU5BU5D_t1281789340* get_monthNames_25() const { return ___monthNames_25; }
	inline StringU5BU5D_t1281789340** get_address_of_monthNames_25() { return &___monthNames_25; }
	inline void set_monthNames_25(StringU5BU5D_t1281789340* value)
	{
		___monthNames_25 = value;
		Il2CppCodeGenWriteBarrier((&___monthNames_25), value);
	}

	inline static int32_t get_offset_of_genitiveMonthNames_26() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___genitiveMonthNames_26)); }
	inline StringU5BU5D_t1281789340* get_genitiveMonthNames_26() const { return ___genitiveMonthNames_26; }
	inline StringU5BU5D_t1281789340** get_address_of_genitiveMonthNames_26() { return &___genitiveMonthNames_26; }
	inline void set_genitiveMonthNames_26(StringU5BU5D_t1281789340* value)
	{
		___genitiveMonthNames_26 = value;
		Il2CppCodeGenWriteBarrier((&___genitiveMonthNames_26), value);
	}

	inline static int32_t get_offset_of_m_genitiveAbbreviatedMonthNames_27() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_genitiveAbbreviatedMonthNames_27)); }
	inline StringU5BU5D_t1281789340* get_m_genitiveAbbreviatedMonthNames_27() const { return ___m_genitiveAbbreviatedMonthNames_27; }
	inline StringU5BU5D_t1281789340** get_address_of_m_genitiveAbbreviatedMonthNames_27() { return &___m_genitiveAbbreviatedMonthNames_27; }
	inline void set_m_genitiveAbbreviatedMonthNames_27(StringU5BU5D_t1281789340* value)
	{
		___m_genitiveAbbreviatedMonthNames_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_genitiveAbbreviatedMonthNames_27), value);
	}

	inline static int32_t get_offset_of_leapYearMonthNames_28() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___leapYearMonthNames_28)); }
	inline StringU5BU5D_t1281789340* get_leapYearMonthNames_28() const { return ___leapYearMonthNames_28; }
	inline StringU5BU5D_t1281789340** get_address_of_leapYearMonthNames_28() { return &___leapYearMonthNames_28; }
	inline void set_leapYearMonthNames_28(StringU5BU5D_t1281789340* value)
	{
		___leapYearMonthNames_28 = value;
		Il2CppCodeGenWriteBarrier((&___leapYearMonthNames_28), value);
	}

	inline static int32_t get_offset_of_longDatePattern_29() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___longDatePattern_29)); }
	inline String_t* get_longDatePattern_29() const { return ___longDatePattern_29; }
	inline String_t** get_address_of_longDatePattern_29() { return &___longDatePattern_29; }
	inline void set_longDatePattern_29(String_t* value)
	{
		___longDatePattern_29 = value;
		Il2CppCodeGenWriteBarrier((&___longDatePattern_29), value);
	}

	inline static int32_t get_offset_of_shortDatePattern_30() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___shortDatePattern_30)); }
	inline String_t* get_shortDatePattern_30() const { return ___shortDatePattern_30; }
	inline String_t** get_address_of_shortDatePattern_30() { return &___shortDatePattern_30; }
	inline void set_shortDatePattern_30(String_t* value)
	{
		___shortDatePattern_30 = value;
		Il2CppCodeGenWriteBarrier((&___shortDatePattern_30), value);
	}

	inline static int32_t get_offset_of_yearMonthPattern_31() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___yearMonthPattern_31)); }
	inline String_t* get_yearMonthPattern_31() const { return ___yearMonthPattern_31; }
	inline String_t** get_address_of_yearMonthPattern_31() { return &___yearMonthPattern_31; }
	inline void set_yearMonthPattern_31(String_t* value)
	{
		___yearMonthPattern_31 = value;
		Il2CppCodeGenWriteBarrier((&___yearMonthPattern_31), value);
	}

	inline static int32_t get_offset_of_longTimePattern_32() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___longTimePattern_32)); }
	inline String_t* get_longTimePattern_32() const { return ___longTimePattern_32; }
	inline String_t** get_address_of_longTimePattern_32() { return &___longTimePattern_32; }
	inline void set_longTimePattern_32(String_t* value)
	{
		___longTimePattern_32 = value;
		Il2CppCodeGenWriteBarrier((&___longTimePattern_32), value);
	}

	inline static int32_t get_offset_of_shortTimePattern_33() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___shortTimePattern_33)); }
	inline String_t* get_shortTimePattern_33() const { return ___shortTimePattern_33; }
	inline String_t** get_address_of_shortTimePattern_33() { return &___shortTimePattern_33; }
	inline void set_shortTimePattern_33(String_t* value)
	{
		___shortTimePattern_33 = value;
		Il2CppCodeGenWriteBarrier((&___shortTimePattern_33), value);
	}

	inline static int32_t get_offset_of_allYearMonthPatterns_34() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___allYearMonthPatterns_34)); }
	inline StringU5BU5D_t1281789340* get_allYearMonthPatterns_34() const { return ___allYearMonthPatterns_34; }
	inline StringU5BU5D_t1281789340** get_address_of_allYearMonthPatterns_34() { return &___allYearMonthPatterns_34; }
	inline void set_allYearMonthPatterns_34(StringU5BU5D_t1281789340* value)
	{
		___allYearMonthPatterns_34 = value;
		Il2CppCodeGenWriteBarrier((&___allYearMonthPatterns_34), value);
	}

	inline static int32_t get_offset_of_allShortDatePatterns_35() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___allShortDatePatterns_35)); }
	inline StringU5BU5D_t1281789340* get_allShortDatePatterns_35() const { return ___allShortDatePatterns_35; }
	inline StringU5BU5D_t1281789340** get_address_of_allShortDatePatterns_35() { return &___allShortDatePatterns_35; }
	inline void set_allShortDatePatterns_35(StringU5BU5D_t1281789340* value)
	{
		___allShortDatePatterns_35 = value;
		Il2CppCodeGenWriteBarrier((&___allShortDatePatterns_35), value);
	}

	inline static int32_t get_offset_of_allLongDatePatterns_36() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___allLongDatePatterns_36)); }
	inline StringU5BU5D_t1281789340* get_allLongDatePatterns_36() const { return ___allLongDatePatterns_36; }
	inline StringU5BU5D_t1281789340** get_address_of_allLongDatePatterns_36() { return &___allLongDatePatterns_36; }
	inline void set_allLongDatePatterns_36(StringU5BU5D_t1281789340* value)
	{
		___allLongDatePatterns_36 = value;
		Il2CppCodeGenWriteBarrier((&___allLongDatePatterns_36), value);
	}

	inline static int32_t get_offset_of_allShortTimePatterns_37() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___allShortTimePatterns_37)); }
	inline StringU5BU5D_t1281789340* get_allShortTimePatterns_37() const { return ___allShortTimePatterns_37; }
	inline StringU5BU5D_t1281789340** get_address_of_allShortTimePatterns_37() { return &___allShortTimePatterns_37; }
	inline void set_allShortTimePatterns_37(StringU5BU5D_t1281789340* value)
	{
		___allShortTimePatterns_37 = value;
		Il2CppCodeGenWriteBarrier((&___allShortTimePatterns_37), value);
	}

	inline static int32_t get_offset_of_allLongTimePatterns_38() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___allLongTimePatterns_38)); }
	inline StringU5BU5D_t1281789340* get_allLongTimePatterns_38() const { return ___allLongTimePatterns_38; }
	inline StringU5BU5D_t1281789340** get_address_of_allLongTimePatterns_38() { return &___allLongTimePatterns_38; }
	inline void set_allLongTimePatterns_38(StringU5BU5D_t1281789340* value)
	{
		___allLongTimePatterns_38 = value;
		Il2CppCodeGenWriteBarrier((&___allLongTimePatterns_38), value);
	}

	inline static int32_t get_offset_of_m_eraNames_39() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_eraNames_39)); }
	inline StringU5BU5D_t1281789340* get_m_eraNames_39() const { return ___m_eraNames_39; }
	inline StringU5BU5D_t1281789340** get_address_of_m_eraNames_39() { return &___m_eraNames_39; }
	inline void set_m_eraNames_39(StringU5BU5D_t1281789340* value)
	{
		___m_eraNames_39 = value;
		Il2CppCodeGenWriteBarrier((&___m_eraNames_39), value);
	}

	inline static int32_t get_offset_of_m_abbrevEraNames_40() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_abbrevEraNames_40)); }
	inline StringU5BU5D_t1281789340* get_m_abbrevEraNames_40() const { return ___m_abbrevEraNames_40; }
	inline StringU5BU5D_t1281789340** get_address_of_m_abbrevEraNames_40() { return &___m_abbrevEraNames_40; }
	inline void set_m_abbrevEraNames_40(StringU5BU5D_t1281789340* value)
	{
		___m_abbrevEraNames_40 = value;
		Il2CppCodeGenWriteBarrier((&___m_abbrevEraNames_40), value);
	}

	inline static int32_t get_offset_of_m_abbrevEnglishEraNames_41() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_abbrevEnglishEraNames_41)); }
	inline StringU5BU5D_t1281789340* get_m_abbrevEnglishEraNames_41() const { return ___m_abbrevEnglishEraNames_41; }
	inline StringU5BU5D_t1281789340** get_address_of_m_abbrevEnglishEraNames_41() { return &___m_abbrevEnglishEraNames_41; }
	inline void set_m_abbrevEnglishEraNames_41(StringU5BU5D_t1281789340* value)
	{
		___m_abbrevEnglishEraNames_41 = value;
		Il2CppCodeGenWriteBarrier((&___m_abbrevEnglishEraNames_41), value);
	}

	inline static int32_t get_offset_of_optionalCalendars_42() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___optionalCalendars_42)); }
	inline Int32U5BU5D_t385246372* get_optionalCalendars_42() const { return ___optionalCalendars_42; }
	inline Int32U5BU5D_t385246372** get_address_of_optionalCalendars_42() { return &___optionalCalendars_42; }
	inline void set_optionalCalendars_42(Int32U5BU5D_t385246372* value)
	{
		___optionalCalendars_42 = value;
		Il2CppCodeGenWriteBarrier((&___optionalCalendars_42), value);
	}

	inline static int32_t get_offset_of_m_isReadOnly_44() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_isReadOnly_44)); }
	inline bool get_m_isReadOnly_44() const { return ___m_isReadOnly_44; }
	inline bool* get_address_of_m_isReadOnly_44() { return &___m_isReadOnly_44; }
	inline void set_m_isReadOnly_44(bool value)
	{
		___m_isReadOnly_44 = value;
	}

	inline static int32_t get_offset_of_formatFlags_45() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___formatFlags_45)); }
	inline int32_t get_formatFlags_45() const { return ___formatFlags_45; }
	inline int32_t* get_address_of_formatFlags_45() { return &___formatFlags_45; }
	inline void set_formatFlags_45(int32_t value)
	{
		___formatFlags_45 = value;
	}

	inline static int32_t get_offset_of_CultureID_47() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___CultureID_47)); }
	inline int32_t get_CultureID_47() const { return ___CultureID_47; }
	inline int32_t* get_address_of_CultureID_47() { return &___CultureID_47; }
	inline void set_CultureID_47(int32_t value)
	{
		___CultureID_47 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_48() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_useUserOverride_48)); }
	inline bool get_m_useUserOverride_48() const { return ___m_useUserOverride_48; }
	inline bool* get_address_of_m_useUserOverride_48() { return &___m_useUserOverride_48; }
	inline void set_m_useUserOverride_48(bool value)
	{
		___m_useUserOverride_48 = value;
	}

	inline static int32_t get_offset_of_bUseCalendarInfo_49() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___bUseCalendarInfo_49)); }
	inline bool get_bUseCalendarInfo_49() const { return ___bUseCalendarInfo_49; }
	inline bool* get_address_of_bUseCalendarInfo_49() { return &___bUseCalendarInfo_49; }
	inline void set_bUseCalendarInfo_49(bool value)
	{
		___bUseCalendarInfo_49 = value;
	}

	inline static int32_t get_offset_of_nDataItem_50() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___nDataItem_50)); }
	inline int32_t get_nDataItem_50() const { return ___nDataItem_50; }
	inline int32_t* get_address_of_nDataItem_50() { return &___nDataItem_50; }
	inline void set_nDataItem_50(int32_t value)
	{
		___nDataItem_50 = value;
	}

	inline static int32_t get_offset_of_m_isDefaultCalendar_51() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_isDefaultCalendar_51)); }
	inline bool get_m_isDefaultCalendar_51() const { return ___m_isDefaultCalendar_51; }
	inline bool* get_address_of_m_isDefaultCalendar_51() { return &___m_isDefaultCalendar_51; }
	inline void set_m_isDefaultCalendar_51(bool value)
	{
		___m_isDefaultCalendar_51 = value;
	}

	inline static int32_t get_offset_of_m_dateWords_53() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_dateWords_53)); }
	inline StringU5BU5D_t1281789340* get_m_dateWords_53() const { return ___m_dateWords_53; }
	inline StringU5BU5D_t1281789340** get_address_of_m_dateWords_53() { return &___m_dateWords_53; }
	inline void set_m_dateWords_53(StringU5BU5D_t1281789340* value)
	{
		___m_dateWords_53 = value;
		Il2CppCodeGenWriteBarrier((&___m_dateWords_53), value);
	}

	inline static int32_t get_offset_of_m_fullTimeSpanPositivePattern_54() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_fullTimeSpanPositivePattern_54)); }
	inline String_t* get_m_fullTimeSpanPositivePattern_54() const { return ___m_fullTimeSpanPositivePattern_54; }
	inline String_t** get_address_of_m_fullTimeSpanPositivePattern_54() { return &___m_fullTimeSpanPositivePattern_54; }
	inline void set_m_fullTimeSpanPositivePattern_54(String_t* value)
	{
		___m_fullTimeSpanPositivePattern_54 = value;
		Il2CppCodeGenWriteBarrier((&___m_fullTimeSpanPositivePattern_54), value);
	}

	inline static int32_t get_offset_of_m_fullTimeSpanNegativePattern_55() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_fullTimeSpanNegativePattern_55)); }
	inline String_t* get_m_fullTimeSpanNegativePattern_55() const { return ___m_fullTimeSpanNegativePattern_55; }
	inline String_t** get_address_of_m_fullTimeSpanNegativePattern_55() { return &___m_fullTimeSpanNegativePattern_55; }
	inline void set_m_fullTimeSpanNegativePattern_55(String_t* value)
	{
		___m_fullTimeSpanNegativePattern_55 = value;
		Il2CppCodeGenWriteBarrier((&___m_fullTimeSpanNegativePattern_55), value);
	}

	inline static int32_t get_offset_of_m_dtfiTokenHash_57() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_dtfiTokenHash_57)); }
	inline TokenHashValueU5BU5D_t818561467* get_m_dtfiTokenHash_57() const { return ___m_dtfiTokenHash_57; }
	inline TokenHashValueU5BU5D_t818561467** get_address_of_m_dtfiTokenHash_57() { return &___m_dtfiTokenHash_57; }
	inline void set_m_dtfiTokenHash_57(TokenHashValueU5BU5D_t818561467* value)
	{
		___m_dtfiTokenHash_57 = value;
		Il2CppCodeGenWriteBarrier((&___m_dtfiTokenHash_57), value);
	}
};

struct DateTimeFormatInfo_t2405853701_StaticFields
{
public:
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::invariantInfo
	DateTimeFormatInfo_t2405853701 * ___invariantInfo_0;
	// System.Boolean System.Globalization.DateTimeFormatInfo::preferExistingTokens
	bool ___preferExistingTokens_46;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::s_calendarNativeNames
	Hashtable_t1853889766 * ___s_calendarNativeNames_52;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::s_jajpDTFI
	DateTimeFormatInfo_t2405853701 * ___s_jajpDTFI_82;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::s_zhtwDTFI
	DateTimeFormatInfo_t2405853701 * ___s_zhtwDTFI_83;

public:
	inline static int32_t get_offset_of_invariantInfo_0() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701_StaticFields, ___invariantInfo_0)); }
	inline DateTimeFormatInfo_t2405853701 * get_invariantInfo_0() const { return ___invariantInfo_0; }
	inline DateTimeFormatInfo_t2405853701 ** get_address_of_invariantInfo_0() { return &___invariantInfo_0; }
	inline void set_invariantInfo_0(DateTimeFormatInfo_t2405853701 * value)
	{
		___invariantInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___invariantInfo_0), value);
	}

	inline static int32_t get_offset_of_preferExistingTokens_46() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701_StaticFields, ___preferExistingTokens_46)); }
	inline bool get_preferExistingTokens_46() const { return ___preferExistingTokens_46; }
	inline bool* get_address_of_preferExistingTokens_46() { return &___preferExistingTokens_46; }
	inline void set_preferExistingTokens_46(bool value)
	{
		___preferExistingTokens_46 = value;
	}

	inline static int32_t get_offset_of_s_calendarNativeNames_52() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701_StaticFields, ___s_calendarNativeNames_52)); }
	inline Hashtable_t1853889766 * get_s_calendarNativeNames_52() const { return ___s_calendarNativeNames_52; }
	inline Hashtable_t1853889766 ** get_address_of_s_calendarNativeNames_52() { return &___s_calendarNativeNames_52; }
	inline void set_s_calendarNativeNames_52(Hashtable_t1853889766 * value)
	{
		___s_calendarNativeNames_52 = value;
		Il2CppCodeGenWriteBarrier((&___s_calendarNativeNames_52), value);
	}

	inline static int32_t get_offset_of_s_jajpDTFI_82() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701_StaticFields, ___s_jajpDTFI_82)); }
	inline DateTimeFormatInfo_t2405853701 * get_s_jajpDTFI_82() const { return ___s_jajpDTFI_82; }
	inline DateTimeFormatInfo_t2405853701 ** get_address_of_s_jajpDTFI_82() { return &___s_jajpDTFI_82; }
	inline void set_s_jajpDTFI_82(DateTimeFormatInfo_t2405853701 * value)
	{
		___s_jajpDTFI_82 = value;
		Il2CppCodeGenWriteBarrier((&___s_jajpDTFI_82), value);
	}

	inline static int32_t get_offset_of_s_zhtwDTFI_83() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701_StaticFields, ___s_zhtwDTFI_83)); }
	inline DateTimeFormatInfo_t2405853701 * get_s_zhtwDTFI_83() const { return ___s_zhtwDTFI_83; }
	inline DateTimeFormatInfo_t2405853701 ** get_address_of_s_zhtwDTFI_83() { return &___s_zhtwDTFI_83; }
	inline void set_s_zhtwDTFI_83(DateTimeFormatInfo_t2405853701 * value)
	{
		___s_zhtwDTFI_83 = value;
		Il2CppCodeGenWriteBarrier((&___s_zhtwDTFI_83), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEFORMATINFO_T2405853701_H
#ifndef NUMBERFORMATINFO_T435877138_H
#define NUMBERFORMATINFO_T435877138_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.NumberFormatInfo
struct  NumberFormatInfo_t435877138  : public RuntimeObject
{
public:
	// System.Int32[] System.Globalization.NumberFormatInfo::numberGroupSizes
	Int32U5BU5D_t385246372* ___numberGroupSizes_1;
	// System.Int32[] System.Globalization.NumberFormatInfo::currencyGroupSizes
	Int32U5BU5D_t385246372* ___currencyGroupSizes_2;
	// System.Int32[] System.Globalization.NumberFormatInfo::percentGroupSizes
	Int32U5BU5D_t385246372* ___percentGroupSizes_3;
	// System.String System.Globalization.NumberFormatInfo::positiveSign
	String_t* ___positiveSign_4;
	// System.String System.Globalization.NumberFormatInfo::negativeSign
	String_t* ___negativeSign_5;
	// System.String System.Globalization.NumberFormatInfo::numberDecimalSeparator
	String_t* ___numberDecimalSeparator_6;
	// System.String System.Globalization.NumberFormatInfo::numberGroupSeparator
	String_t* ___numberGroupSeparator_7;
	// System.String System.Globalization.NumberFormatInfo::currencyGroupSeparator
	String_t* ___currencyGroupSeparator_8;
	// System.String System.Globalization.NumberFormatInfo::currencyDecimalSeparator
	String_t* ___currencyDecimalSeparator_9;
	// System.String System.Globalization.NumberFormatInfo::currencySymbol
	String_t* ___currencySymbol_10;
	// System.String System.Globalization.NumberFormatInfo::ansiCurrencySymbol
	String_t* ___ansiCurrencySymbol_11;
	// System.String System.Globalization.NumberFormatInfo::nanSymbol
	String_t* ___nanSymbol_12;
	// System.String System.Globalization.NumberFormatInfo::positiveInfinitySymbol
	String_t* ___positiveInfinitySymbol_13;
	// System.String System.Globalization.NumberFormatInfo::negativeInfinitySymbol
	String_t* ___negativeInfinitySymbol_14;
	// System.String System.Globalization.NumberFormatInfo::percentDecimalSeparator
	String_t* ___percentDecimalSeparator_15;
	// System.String System.Globalization.NumberFormatInfo::percentGroupSeparator
	String_t* ___percentGroupSeparator_16;
	// System.String System.Globalization.NumberFormatInfo::percentSymbol
	String_t* ___percentSymbol_17;
	// System.String System.Globalization.NumberFormatInfo::perMilleSymbol
	String_t* ___perMilleSymbol_18;
	// System.String[] System.Globalization.NumberFormatInfo::nativeDigits
	StringU5BU5D_t1281789340* ___nativeDigits_19;
	// System.Int32 System.Globalization.NumberFormatInfo::m_dataItem
	int32_t ___m_dataItem_20;
	// System.Int32 System.Globalization.NumberFormatInfo::numberDecimalDigits
	int32_t ___numberDecimalDigits_21;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyDecimalDigits
	int32_t ___currencyDecimalDigits_22;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyPositivePattern
	int32_t ___currencyPositivePattern_23;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyNegativePattern
	int32_t ___currencyNegativePattern_24;
	// System.Int32 System.Globalization.NumberFormatInfo::numberNegativePattern
	int32_t ___numberNegativePattern_25;
	// System.Int32 System.Globalization.NumberFormatInfo::percentPositivePattern
	int32_t ___percentPositivePattern_26;
	// System.Int32 System.Globalization.NumberFormatInfo::percentNegativePattern
	int32_t ___percentNegativePattern_27;
	// System.Int32 System.Globalization.NumberFormatInfo::percentDecimalDigits
	int32_t ___percentDecimalDigits_28;
	// System.Int32 System.Globalization.NumberFormatInfo::digitSubstitution
	int32_t ___digitSubstitution_29;
	// System.Boolean System.Globalization.NumberFormatInfo::isReadOnly
	bool ___isReadOnly_30;
	// System.Boolean System.Globalization.NumberFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_31;
	// System.Boolean System.Globalization.NumberFormatInfo::m_isInvariant
	bool ___m_isInvariant_32;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsNumber
	bool ___validForParseAsNumber_33;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsCurrency
	bool ___validForParseAsCurrency_34;

public:
	inline static int32_t get_offset_of_numberGroupSizes_1() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___numberGroupSizes_1)); }
	inline Int32U5BU5D_t385246372* get_numberGroupSizes_1() const { return ___numberGroupSizes_1; }
	inline Int32U5BU5D_t385246372** get_address_of_numberGroupSizes_1() { return &___numberGroupSizes_1; }
	inline void set_numberGroupSizes_1(Int32U5BU5D_t385246372* value)
	{
		___numberGroupSizes_1 = value;
		Il2CppCodeGenWriteBarrier((&___numberGroupSizes_1), value);
	}

	inline static int32_t get_offset_of_currencyGroupSizes_2() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyGroupSizes_2)); }
	inline Int32U5BU5D_t385246372* get_currencyGroupSizes_2() const { return ___currencyGroupSizes_2; }
	inline Int32U5BU5D_t385246372** get_address_of_currencyGroupSizes_2() { return &___currencyGroupSizes_2; }
	inline void set_currencyGroupSizes_2(Int32U5BU5D_t385246372* value)
	{
		___currencyGroupSizes_2 = value;
		Il2CppCodeGenWriteBarrier((&___currencyGroupSizes_2), value);
	}

	inline static int32_t get_offset_of_percentGroupSizes_3() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentGroupSizes_3)); }
	inline Int32U5BU5D_t385246372* get_percentGroupSizes_3() const { return ___percentGroupSizes_3; }
	inline Int32U5BU5D_t385246372** get_address_of_percentGroupSizes_3() { return &___percentGroupSizes_3; }
	inline void set_percentGroupSizes_3(Int32U5BU5D_t385246372* value)
	{
		___percentGroupSizes_3 = value;
		Il2CppCodeGenWriteBarrier((&___percentGroupSizes_3), value);
	}

	inline static int32_t get_offset_of_positiveSign_4() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___positiveSign_4)); }
	inline String_t* get_positiveSign_4() const { return ___positiveSign_4; }
	inline String_t** get_address_of_positiveSign_4() { return &___positiveSign_4; }
	inline void set_positiveSign_4(String_t* value)
	{
		___positiveSign_4 = value;
		Il2CppCodeGenWriteBarrier((&___positiveSign_4), value);
	}

	inline static int32_t get_offset_of_negativeSign_5() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___negativeSign_5)); }
	inline String_t* get_negativeSign_5() const { return ___negativeSign_5; }
	inline String_t** get_address_of_negativeSign_5() { return &___negativeSign_5; }
	inline void set_negativeSign_5(String_t* value)
	{
		___negativeSign_5 = value;
		Il2CppCodeGenWriteBarrier((&___negativeSign_5), value);
	}

	inline static int32_t get_offset_of_numberDecimalSeparator_6() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___numberDecimalSeparator_6)); }
	inline String_t* get_numberDecimalSeparator_6() const { return ___numberDecimalSeparator_6; }
	inline String_t** get_address_of_numberDecimalSeparator_6() { return &___numberDecimalSeparator_6; }
	inline void set_numberDecimalSeparator_6(String_t* value)
	{
		___numberDecimalSeparator_6 = value;
		Il2CppCodeGenWriteBarrier((&___numberDecimalSeparator_6), value);
	}

	inline static int32_t get_offset_of_numberGroupSeparator_7() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___numberGroupSeparator_7)); }
	inline String_t* get_numberGroupSeparator_7() const { return ___numberGroupSeparator_7; }
	inline String_t** get_address_of_numberGroupSeparator_7() { return &___numberGroupSeparator_7; }
	inline void set_numberGroupSeparator_7(String_t* value)
	{
		___numberGroupSeparator_7 = value;
		Il2CppCodeGenWriteBarrier((&___numberGroupSeparator_7), value);
	}

	inline static int32_t get_offset_of_currencyGroupSeparator_8() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyGroupSeparator_8)); }
	inline String_t* get_currencyGroupSeparator_8() const { return ___currencyGroupSeparator_8; }
	inline String_t** get_address_of_currencyGroupSeparator_8() { return &___currencyGroupSeparator_8; }
	inline void set_currencyGroupSeparator_8(String_t* value)
	{
		___currencyGroupSeparator_8 = value;
		Il2CppCodeGenWriteBarrier((&___currencyGroupSeparator_8), value);
	}

	inline static int32_t get_offset_of_currencyDecimalSeparator_9() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyDecimalSeparator_9)); }
	inline String_t* get_currencyDecimalSeparator_9() const { return ___currencyDecimalSeparator_9; }
	inline String_t** get_address_of_currencyDecimalSeparator_9() { return &___currencyDecimalSeparator_9; }
	inline void set_currencyDecimalSeparator_9(String_t* value)
	{
		___currencyDecimalSeparator_9 = value;
		Il2CppCodeGenWriteBarrier((&___currencyDecimalSeparator_9), value);
	}

	inline static int32_t get_offset_of_currencySymbol_10() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencySymbol_10)); }
	inline String_t* get_currencySymbol_10() const { return ___currencySymbol_10; }
	inline String_t** get_address_of_currencySymbol_10() { return &___currencySymbol_10; }
	inline void set_currencySymbol_10(String_t* value)
	{
		___currencySymbol_10 = value;
		Il2CppCodeGenWriteBarrier((&___currencySymbol_10), value);
	}

	inline static int32_t get_offset_of_ansiCurrencySymbol_11() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___ansiCurrencySymbol_11)); }
	inline String_t* get_ansiCurrencySymbol_11() const { return ___ansiCurrencySymbol_11; }
	inline String_t** get_address_of_ansiCurrencySymbol_11() { return &___ansiCurrencySymbol_11; }
	inline void set_ansiCurrencySymbol_11(String_t* value)
	{
		___ansiCurrencySymbol_11 = value;
		Il2CppCodeGenWriteBarrier((&___ansiCurrencySymbol_11), value);
	}

	inline static int32_t get_offset_of_nanSymbol_12() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___nanSymbol_12)); }
	inline String_t* get_nanSymbol_12() const { return ___nanSymbol_12; }
	inline String_t** get_address_of_nanSymbol_12() { return &___nanSymbol_12; }
	inline void set_nanSymbol_12(String_t* value)
	{
		___nanSymbol_12 = value;
		Il2CppCodeGenWriteBarrier((&___nanSymbol_12), value);
	}

	inline static int32_t get_offset_of_positiveInfinitySymbol_13() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___positiveInfinitySymbol_13)); }
	inline String_t* get_positiveInfinitySymbol_13() const { return ___positiveInfinitySymbol_13; }
	inline String_t** get_address_of_positiveInfinitySymbol_13() { return &___positiveInfinitySymbol_13; }
	inline void set_positiveInfinitySymbol_13(String_t* value)
	{
		___positiveInfinitySymbol_13 = value;
		Il2CppCodeGenWriteBarrier((&___positiveInfinitySymbol_13), value);
	}

	inline static int32_t get_offset_of_negativeInfinitySymbol_14() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___negativeInfinitySymbol_14)); }
	inline String_t* get_negativeInfinitySymbol_14() const { return ___negativeInfinitySymbol_14; }
	inline String_t** get_address_of_negativeInfinitySymbol_14() { return &___negativeInfinitySymbol_14; }
	inline void set_negativeInfinitySymbol_14(String_t* value)
	{
		___negativeInfinitySymbol_14 = value;
		Il2CppCodeGenWriteBarrier((&___negativeInfinitySymbol_14), value);
	}

	inline static int32_t get_offset_of_percentDecimalSeparator_15() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentDecimalSeparator_15)); }
	inline String_t* get_percentDecimalSeparator_15() const { return ___percentDecimalSeparator_15; }
	inline String_t** get_address_of_percentDecimalSeparator_15() { return &___percentDecimalSeparator_15; }
	inline void set_percentDecimalSeparator_15(String_t* value)
	{
		___percentDecimalSeparator_15 = value;
		Il2CppCodeGenWriteBarrier((&___percentDecimalSeparator_15), value);
	}

	inline static int32_t get_offset_of_percentGroupSeparator_16() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentGroupSeparator_16)); }
	inline String_t* get_percentGroupSeparator_16() const { return ___percentGroupSeparator_16; }
	inline String_t** get_address_of_percentGroupSeparator_16() { return &___percentGroupSeparator_16; }
	inline void set_percentGroupSeparator_16(String_t* value)
	{
		___percentGroupSeparator_16 = value;
		Il2CppCodeGenWriteBarrier((&___percentGroupSeparator_16), value);
	}

	inline static int32_t get_offset_of_percentSymbol_17() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentSymbol_17)); }
	inline String_t* get_percentSymbol_17() const { return ___percentSymbol_17; }
	inline String_t** get_address_of_percentSymbol_17() { return &___percentSymbol_17; }
	inline void set_percentSymbol_17(String_t* value)
	{
		___percentSymbol_17 = value;
		Il2CppCodeGenWriteBarrier((&___percentSymbol_17), value);
	}

	inline static int32_t get_offset_of_perMilleSymbol_18() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___perMilleSymbol_18)); }
	inline String_t* get_perMilleSymbol_18() const { return ___perMilleSymbol_18; }
	inline String_t** get_address_of_perMilleSymbol_18() { return &___perMilleSymbol_18; }
	inline void set_perMilleSymbol_18(String_t* value)
	{
		___perMilleSymbol_18 = value;
		Il2CppCodeGenWriteBarrier((&___perMilleSymbol_18), value);
	}

	inline static int32_t get_offset_of_nativeDigits_19() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___nativeDigits_19)); }
	inline StringU5BU5D_t1281789340* get_nativeDigits_19() const { return ___nativeDigits_19; }
	inline StringU5BU5D_t1281789340** get_address_of_nativeDigits_19() { return &___nativeDigits_19; }
	inline void set_nativeDigits_19(StringU5BU5D_t1281789340* value)
	{
		___nativeDigits_19 = value;
		Il2CppCodeGenWriteBarrier((&___nativeDigits_19), value);
	}

	inline static int32_t get_offset_of_m_dataItem_20() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___m_dataItem_20)); }
	inline int32_t get_m_dataItem_20() const { return ___m_dataItem_20; }
	inline int32_t* get_address_of_m_dataItem_20() { return &___m_dataItem_20; }
	inline void set_m_dataItem_20(int32_t value)
	{
		___m_dataItem_20 = value;
	}

	inline static int32_t get_offset_of_numberDecimalDigits_21() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___numberDecimalDigits_21)); }
	inline int32_t get_numberDecimalDigits_21() const { return ___numberDecimalDigits_21; }
	inline int32_t* get_address_of_numberDecimalDigits_21() { return &___numberDecimalDigits_21; }
	inline void set_numberDecimalDigits_21(int32_t value)
	{
		___numberDecimalDigits_21 = value;
	}

	inline static int32_t get_offset_of_currencyDecimalDigits_22() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyDecimalDigits_22)); }
	inline int32_t get_currencyDecimalDigits_22() const { return ___currencyDecimalDigits_22; }
	inline int32_t* get_address_of_currencyDecimalDigits_22() { return &___currencyDecimalDigits_22; }
	inline void set_currencyDecimalDigits_22(int32_t value)
	{
		___currencyDecimalDigits_22 = value;
	}

	inline static int32_t get_offset_of_currencyPositivePattern_23() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyPositivePattern_23)); }
	inline int32_t get_currencyPositivePattern_23() const { return ___currencyPositivePattern_23; }
	inline int32_t* get_address_of_currencyPositivePattern_23() { return &___currencyPositivePattern_23; }
	inline void set_currencyPositivePattern_23(int32_t value)
	{
		___currencyPositivePattern_23 = value;
	}

	inline static int32_t get_offset_of_currencyNegativePattern_24() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyNegativePattern_24)); }
	inline int32_t get_currencyNegativePattern_24() const { return ___currencyNegativePattern_24; }
	inline int32_t* get_address_of_currencyNegativePattern_24() { return &___currencyNegativePattern_24; }
	inline void set_currencyNegativePattern_24(int32_t value)
	{
		___currencyNegativePattern_24 = value;
	}

	inline static int32_t get_offset_of_numberNegativePattern_25() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___numberNegativePattern_25)); }
	inline int32_t get_numberNegativePattern_25() const { return ___numberNegativePattern_25; }
	inline int32_t* get_address_of_numberNegativePattern_25() { return &___numberNegativePattern_25; }
	inline void set_numberNegativePattern_25(int32_t value)
	{
		___numberNegativePattern_25 = value;
	}

	inline static int32_t get_offset_of_percentPositivePattern_26() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentPositivePattern_26)); }
	inline int32_t get_percentPositivePattern_26() const { return ___percentPositivePattern_26; }
	inline int32_t* get_address_of_percentPositivePattern_26() { return &___percentPositivePattern_26; }
	inline void set_percentPositivePattern_26(int32_t value)
	{
		___percentPositivePattern_26 = value;
	}

	inline static int32_t get_offset_of_percentNegativePattern_27() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentNegativePattern_27)); }
	inline int32_t get_percentNegativePattern_27() const { return ___percentNegativePattern_27; }
	inline int32_t* get_address_of_percentNegativePattern_27() { return &___percentNegativePattern_27; }
	inline void set_percentNegativePattern_27(int32_t value)
	{
		___percentNegativePattern_27 = value;
	}

	inline static int32_t get_offset_of_percentDecimalDigits_28() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentDecimalDigits_28)); }
	inline int32_t get_percentDecimalDigits_28() const { return ___percentDecimalDigits_28; }
	inline int32_t* get_address_of_percentDecimalDigits_28() { return &___percentDecimalDigits_28; }
	inline void set_percentDecimalDigits_28(int32_t value)
	{
		___percentDecimalDigits_28 = value;
	}

	inline static int32_t get_offset_of_digitSubstitution_29() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___digitSubstitution_29)); }
	inline int32_t get_digitSubstitution_29() const { return ___digitSubstitution_29; }
	inline int32_t* get_address_of_digitSubstitution_29() { return &___digitSubstitution_29; }
	inline void set_digitSubstitution_29(int32_t value)
	{
		___digitSubstitution_29 = value;
	}

	inline static int32_t get_offset_of_isReadOnly_30() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___isReadOnly_30)); }
	inline bool get_isReadOnly_30() const { return ___isReadOnly_30; }
	inline bool* get_address_of_isReadOnly_30() { return &___isReadOnly_30; }
	inline void set_isReadOnly_30(bool value)
	{
		___isReadOnly_30 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_31() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___m_useUserOverride_31)); }
	inline bool get_m_useUserOverride_31() const { return ___m_useUserOverride_31; }
	inline bool* get_address_of_m_useUserOverride_31() { return &___m_useUserOverride_31; }
	inline void set_m_useUserOverride_31(bool value)
	{
		___m_useUserOverride_31 = value;
	}

	inline static int32_t get_offset_of_m_isInvariant_32() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___m_isInvariant_32)); }
	inline bool get_m_isInvariant_32() const { return ___m_isInvariant_32; }
	inline bool* get_address_of_m_isInvariant_32() { return &___m_isInvariant_32; }
	inline void set_m_isInvariant_32(bool value)
	{
		___m_isInvariant_32 = value;
	}

	inline static int32_t get_offset_of_validForParseAsNumber_33() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___validForParseAsNumber_33)); }
	inline bool get_validForParseAsNumber_33() const { return ___validForParseAsNumber_33; }
	inline bool* get_address_of_validForParseAsNumber_33() { return &___validForParseAsNumber_33; }
	inline void set_validForParseAsNumber_33(bool value)
	{
		___validForParseAsNumber_33 = value;
	}

	inline static int32_t get_offset_of_validForParseAsCurrency_34() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___validForParseAsCurrency_34)); }
	inline bool get_validForParseAsCurrency_34() const { return ___validForParseAsCurrency_34; }
	inline bool* get_address_of_validForParseAsCurrency_34() { return &___validForParseAsCurrency_34; }
	inline void set_validForParseAsCurrency_34(bool value)
	{
		___validForParseAsCurrency_34 = value;
	}
};

struct NumberFormatInfo_t435877138_StaticFields
{
public:
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.NumberFormatInfo::invariantInfo
	NumberFormatInfo_t435877138 * ___invariantInfo_0;

public:
	inline static int32_t get_offset_of_invariantInfo_0() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138_StaticFields, ___invariantInfo_0)); }
	inline NumberFormatInfo_t435877138 * get_invariantInfo_0() const { return ___invariantInfo_0; }
	inline NumberFormatInfo_t435877138 ** get_address_of_invariantInfo_0() { return &___invariantInfo_0; }
	inline void set_invariantInfo_0(NumberFormatInfo_t435877138 * value)
	{
		___invariantInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___invariantInfo_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NUMBERFORMATINFO_T435877138_H
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
#ifndef MODULE_T2987026101_H
#define MODULE_T2987026101_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Module
struct  Module_t2987026101  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Module::_impl
	intptr_t ____impl_2;
	// System.Reflection.Assembly System.Reflection.Module::assembly
	Assembly_t * ___assembly_3;
	// System.String System.Reflection.Module::fqname
	String_t* ___fqname_4;
	// System.String System.Reflection.Module::name
	String_t* ___name_5;
	// System.String System.Reflection.Module::scopename
	String_t* ___scopename_6;
	// System.Boolean System.Reflection.Module::is_resource
	bool ___is_resource_7;
	// System.Int32 System.Reflection.Module::token
	int32_t ___token_8;

public:
	inline static int32_t get_offset_of__impl_2() { return static_cast<int32_t>(offsetof(Module_t2987026101, ____impl_2)); }
	inline intptr_t get__impl_2() const { return ____impl_2; }
	inline intptr_t* get_address_of__impl_2() { return &____impl_2; }
	inline void set__impl_2(intptr_t value)
	{
		____impl_2 = value;
	}

	inline static int32_t get_offset_of_assembly_3() { return static_cast<int32_t>(offsetof(Module_t2987026101, ___assembly_3)); }
	inline Assembly_t * get_assembly_3() const { return ___assembly_3; }
	inline Assembly_t ** get_address_of_assembly_3() { return &___assembly_3; }
	inline void set_assembly_3(Assembly_t * value)
	{
		___assembly_3 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_3), value);
	}

	inline static int32_t get_offset_of_fqname_4() { return static_cast<int32_t>(offsetof(Module_t2987026101, ___fqname_4)); }
	inline String_t* get_fqname_4() const { return ___fqname_4; }
	inline String_t** get_address_of_fqname_4() { return &___fqname_4; }
	inline void set_fqname_4(String_t* value)
	{
		___fqname_4 = value;
		Il2CppCodeGenWriteBarrier((&___fqname_4), value);
	}

	inline static int32_t get_offset_of_name_5() { return static_cast<int32_t>(offsetof(Module_t2987026101, ___name_5)); }
	inline String_t* get_name_5() const { return ___name_5; }
	inline String_t** get_address_of_name_5() { return &___name_5; }
	inline void set_name_5(String_t* value)
	{
		___name_5 = value;
		Il2CppCodeGenWriteBarrier((&___name_5), value);
	}

	inline static int32_t get_offset_of_scopename_6() { return static_cast<int32_t>(offsetof(Module_t2987026101, ___scopename_6)); }
	inline String_t* get_scopename_6() const { return ___scopename_6; }
	inline String_t** get_address_of_scopename_6() { return &___scopename_6; }
	inline void set_scopename_6(String_t* value)
	{
		___scopename_6 = value;
		Il2CppCodeGenWriteBarrier((&___scopename_6), value);
	}

	inline static int32_t get_offset_of_is_resource_7() { return static_cast<int32_t>(offsetof(Module_t2987026101, ___is_resource_7)); }
	inline bool get_is_resource_7() const { return ___is_resource_7; }
	inline bool* get_address_of_is_resource_7() { return &___is_resource_7; }
	inline void set_is_resource_7(bool value)
	{
		___is_resource_7 = value;
	}

	inline static int32_t get_offset_of_token_8() { return static_cast<int32_t>(offsetof(Module_t2987026101, ___token_8)); }
	inline int32_t get_token_8() const { return ___token_8; }
	inline int32_t* get_address_of_token_8() { return &___token_8; }
	inline void set_token_8(int32_t value)
	{
		___token_8 = value;
	}
};

struct Module_t2987026101_StaticFields
{
public:
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeName
	TypeFilter_t2356120900 * ___FilterTypeName_0;
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeNameIgnoreCase
	TypeFilter_t2356120900 * ___FilterTypeNameIgnoreCase_1;

public:
	inline static int32_t get_offset_of_FilterTypeName_0() { return static_cast<int32_t>(offsetof(Module_t2987026101_StaticFields, ___FilterTypeName_0)); }
	inline TypeFilter_t2356120900 * get_FilterTypeName_0() const { return ___FilterTypeName_0; }
	inline TypeFilter_t2356120900 ** get_address_of_FilterTypeName_0() { return &___FilterTypeName_0; }
	inline void set_FilterTypeName_0(TypeFilter_t2356120900 * value)
	{
		___FilterTypeName_0 = value;
		Il2CppCodeGenWriteBarrier((&___FilterTypeName_0), value);
	}

	inline static int32_t get_offset_of_FilterTypeNameIgnoreCase_1() { return static_cast<int32_t>(offsetof(Module_t2987026101_StaticFields, ___FilterTypeNameIgnoreCase_1)); }
	inline TypeFilter_t2356120900 * get_FilterTypeNameIgnoreCase_1() const { return ___FilterTypeNameIgnoreCase_1; }
	inline TypeFilter_t2356120900 ** get_address_of_FilterTypeNameIgnoreCase_1() { return &___FilterTypeNameIgnoreCase_1; }
	inline void set_FilterTypeNameIgnoreCase_1(TypeFilter_t2356120900 * value)
	{
		___FilterTypeNameIgnoreCase_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterTypeNameIgnoreCase_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.Module
struct Module_t2987026101_marshaled_pinvoke
{
	intptr_t ____impl_2;
	Assembly_t_marshaled_pinvoke* ___assembly_3;
	char* ___fqname_4;
	char* ___name_5;
	char* ___scopename_6;
	int32_t ___is_resource_7;
	int32_t ___token_8;
};
// Native definition for COM marshalling of System.Reflection.Module
struct Module_t2987026101_marshaled_com
{
	intptr_t ____impl_2;
	Assembly_t_marshaled_com* ___assembly_3;
	Il2CppChar* ___fqname_4;
	Il2CppChar* ___name_5;
	Il2CppChar* ___scopename_6;
	int32_t ___is_resource_7;
	int32_t ___token_8;
};
#endif // MODULE_T2987026101_H
#ifndef RUNTIMEASSEMBLY_T1451753063_H
#define RUNTIMEASSEMBLY_T1451753063_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.RuntimeAssembly
struct  RuntimeAssembly_t1451753063  : public Assembly_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEASSEMBLY_T1451753063_H
#ifndef COMEXCEPTION_T1620828383_H
#define COMEXCEPTION_T1620828383_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.COMException
struct  COMException_t1620828383  : public ExternalException_t3544951457
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMEXCEPTION_T1620828383_H
#ifndef STREAMINGCONTEXT_T3711869237_H
#define STREAMINGCONTEXT_T3711869237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContext
struct  StreamingContext_t3711869237 
{
public:
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject * ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;

public:
	inline static int32_t get_offset_of_m_additionalContext_0() { return static_cast<int32_t>(offsetof(StreamingContext_t3711869237, ___m_additionalContext_0)); }
	inline RuntimeObject * get_m_additionalContext_0() const { return ___m_additionalContext_0; }
	inline RuntimeObject ** get_address_of_m_additionalContext_0() { return &___m_additionalContext_0; }
	inline void set_m_additionalContext_0(RuntimeObject * value)
	{
		___m_additionalContext_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_additionalContext_0), value);
	}

	inline static int32_t get_offset_of_m_state_1() { return static_cast<int32_t>(offsetof(StreamingContext_t3711869237, ___m_state_1)); }
	inline int32_t get_m_state_1() const { return ___m_state_1; }
	inline int32_t* get_address_of_m_state_1() { return &___m_state_1; }
	inline void set_m_state_1(int32_t value)
	{
		___m_state_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t3711869237_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t3711869237_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
#endif // STREAMINGCONTEXT_T3711869237_H
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
#ifndef VARIANT_T2753289927_H
#define VARIANT_T2753289927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Variant
struct  Variant_t2753289927 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int16 System.Variant::vt
			int16_t ___vt_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___vt_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___wReserved1_1_OffsetPadding[2];
			// System.UInt16 System.Variant::wReserved1
			uint16_t ___wReserved1_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___wReserved1_1_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___wReserved1_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___wReserved2_2_OffsetPadding[4];
			// System.UInt16 System.Variant::wReserved2
			uint16_t ___wReserved2_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___wReserved2_2_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___wReserved2_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___wReserved3_3_OffsetPadding[6];
			// System.UInt16 System.Variant::wReserved3
			uint16_t ___wReserved3_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___wReserved3_3_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___wReserved3_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___llVal_4_OffsetPadding[8];
			// System.Int64 System.Variant::llVal
			int64_t ___llVal_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___llVal_4_OffsetPadding_forAlignmentOnly[8];
			int64_t ___llVal_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lVal_5_OffsetPadding[8];
			// System.Int32 System.Variant::lVal
			int32_t ___lVal_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lVal_5_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lVal_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___bVal_6_OffsetPadding[8];
			// System.Byte System.Variant::bVal
			uint8_t ___bVal_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___bVal_6_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___bVal_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___iVal_7_OffsetPadding[8];
			// System.Int16 System.Variant::iVal
			int16_t ___iVal_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___iVal_7_OffsetPadding_forAlignmentOnly[8];
			int16_t ___iVal_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___fltVal_8_OffsetPadding[8];
			// System.Single System.Variant::fltVal
			float ___fltVal_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___fltVal_8_OffsetPadding_forAlignmentOnly[8];
			float ___fltVal_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___dblVal_9_OffsetPadding[8];
			// System.Double System.Variant::dblVal
			double ___dblVal_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___dblVal_9_OffsetPadding_forAlignmentOnly[8];
			double ___dblVal_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___boolVal_10_OffsetPadding[8];
			// System.Int16 System.Variant::boolVal
			int16_t ___boolVal_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___boolVal_10_OffsetPadding_forAlignmentOnly[8];
			int16_t ___boolVal_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___bstrVal_11_OffsetPadding[8];
			// System.IntPtr System.Variant::bstrVal
			intptr_t ___bstrVal_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___bstrVal_11_OffsetPadding_forAlignmentOnly[8];
			intptr_t ___bstrVal_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___cVal_12_OffsetPadding[8];
			// System.SByte System.Variant::cVal
			int8_t ___cVal_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___cVal_12_OffsetPadding_forAlignmentOnly[8];
			int8_t ___cVal_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uiVal_13_OffsetPadding[8];
			// System.UInt16 System.Variant::uiVal
			uint16_t ___uiVal_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uiVal_13_OffsetPadding_forAlignmentOnly[8];
			uint16_t ___uiVal_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulVal_14_OffsetPadding[8];
			// System.UInt32 System.Variant::ulVal
			uint32_t ___ulVal_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulVal_14_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___ulVal_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ullVal_15_OffsetPadding[8];
			// System.UInt64 System.Variant::ullVal
			uint64_t ___ullVal_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ullVal_15_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ullVal_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___intVal_16_OffsetPadding[8];
			// System.Int32 System.Variant::intVal
			int32_t ___intVal_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___intVal_16_OffsetPadding_forAlignmentOnly[8];
			int32_t ___intVal_16_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uintVal_17_OffsetPadding[8];
			// System.UInt32 System.Variant::uintVal
			uint32_t ___uintVal_17;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uintVal_17_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___uintVal_17_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___pdispVal_18_OffsetPadding[8];
			// System.IntPtr System.Variant::pdispVal
			intptr_t ___pdispVal_18;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___pdispVal_18_OffsetPadding_forAlignmentOnly[8];
			intptr_t ___pdispVal_18_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___bRecord_19_OffsetPadding[8];
			// System.BRECORD System.Variant::bRecord
			BRECORD_t3470580684  ___bRecord_19;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___bRecord_19_OffsetPadding_forAlignmentOnly[8];
			BRECORD_t3470580684  ___bRecord_19_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_vt_0() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___vt_0)); }
	inline int16_t get_vt_0() const { return ___vt_0; }
	inline int16_t* get_address_of_vt_0() { return &___vt_0; }
	inline void set_vt_0(int16_t value)
	{
		___vt_0 = value;
	}

	inline static int32_t get_offset_of_wReserved1_1() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___wReserved1_1)); }
	inline uint16_t get_wReserved1_1() const { return ___wReserved1_1; }
	inline uint16_t* get_address_of_wReserved1_1() { return &___wReserved1_1; }
	inline void set_wReserved1_1(uint16_t value)
	{
		___wReserved1_1 = value;
	}

	inline static int32_t get_offset_of_wReserved2_2() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___wReserved2_2)); }
	inline uint16_t get_wReserved2_2() const { return ___wReserved2_2; }
	inline uint16_t* get_address_of_wReserved2_2() { return &___wReserved2_2; }
	inline void set_wReserved2_2(uint16_t value)
	{
		___wReserved2_2 = value;
	}

	inline static int32_t get_offset_of_wReserved3_3() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___wReserved3_3)); }
	inline uint16_t get_wReserved3_3() const { return ___wReserved3_3; }
	inline uint16_t* get_address_of_wReserved3_3() { return &___wReserved3_3; }
	inline void set_wReserved3_3(uint16_t value)
	{
		___wReserved3_3 = value;
	}

	inline static int32_t get_offset_of_llVal_4() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___llVal_4)); }
	inline int64_t get_llVal_4() const { return ___llVal_4; }
	inline int64_t* get_address_of_llVal_4() { return &___llVal_4; }
	inline void set_llVal_4(int64_t value)
	{
		___llVal_4 = value;
	}

	inline static int32_t get_offset_of_lVal_5() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___lVal_5)); }
	inline int32_t get_lVal_5() const { return ___lVal_5; }
	inline int32_t* get_address_of_lVal_5() { return &___lVal_5; }
	inline void set_lVal_5(int32_t value)
	{
		___lVal_5 = value;
	}

	inline static int32_t get_offset_of_bVal_6() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___bVal_6)); }
	inline uint8_t get_bVal_6() const { return ___bVal_6; }
	inline uint8_t* get_address_of_bVal_6() { return &___bVal_6; }
	inline void set_bVal_6(uint8_t value)
	{
		___bVal_6 = value;
	}

	inline static int32_t get_offset_of_iVal_7() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___iVal_7)); }
	inline int16_t get_iVal_7() const { return ___iVal_7; }
	inline int16_t* get_address_of_iVal_7() { return &___iVal_7; }
	inline void set_iVal_7(int16_t value)
	{
		___iVal_7 = value;
	}

	inline static int32_t get_offset_of_fltVal_8() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___fltVal_8)); }
	inline float get_fltVal_8() const { return ___fltVal_8; }
	inline float* get_address_of_fltVal_8() { return &___fltVal_8; }
	inline void set_fltVal_8(float value)
	{
		___fltVal_8 = value;
	}

	inline static int32_t get_offset_of_dblVal_9() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___dblVal_9)); }
	inline double get_dblVal_9() const { return ___dblVal_9; }
	inline double* get_address_of_dblVal_9() { return &___dblVal_9; }
	inline void set_dblVal_9(double value)
	{
		___dblVal_9 = value;
	}

	inline static int32_t get_offset_of_boolVal_10() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___boolVal_10)); }
	inline int16_t get_boolVal_10() const { return ___boolVal_10; }
	inline int16_t* get_address_of_boolVal_10() { return &___boolVal_10; }
	inline void set_boolVal_10(int16_t value)
	{
		___boolVal_10 = value;
	}

	inline static int32_t get_offset_of_bstrVal_11() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___bstrVal_11)); }
	inline intptr_t get_bstrVal_11() const { return ___bstrVal_11; }
	inline intptr_t* get_address_of_bstrVal_11() { return &___bstrVal_11; }
	inline void set_bstrVal_11(intptr_t value)
	{
		___bstrVal_11 = value;
	}

	inline static int32_t get_offset_of_cVal_12() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___cVal_12)); }
	inline int8_t get_cVal_12() const { return ___cVal_12; }
	inline int8_t* get_address_of_cVal_12() { return &___cVal_12; }
	inline void set_cVal_12(int8_t value)
	{
		___cVal_12 = value;
	}

	inline static int32_t get_offset_of_uiVal_13() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___uiVal_13)); }
	inline uint16_t get_uiVal_13() const { return ___uiVal_13; }
	inline uint16_t* get_address_of_uiVal_13() { return &___uiVal_13; }
	inline void set_uiVal_13(uint16_t value)
	{
		___uiVal_13 = value;
	}

	inline static int32_t get_offset_of_ulVal_14() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___ulVal_14)); }
	inline uint32_t get_ulVal_14() const { return ___ulVal_14; }
	inline uint32_t* get_address_of_ulVal_14() { return &___ulVal_14; }
	inline void set_ulVal_14(uint32_t value)
	{
		___ulVal_14 = value;
	}

	inline static int32_t get_offset_of_ullVal_15() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___ullVal_15)); }
	inline uint64_t get_ullVal_15() const { return ___ullVal_15; }
	inline uint64_t* get_address_of_ullVal_15() { return &___ullVal_15; }
	inline void set_ullVal_15(uint64_t value)
	{
		___ullVal_15 = value;
	}

	inline static int32_t get_offset_of_intVal_16() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___intVal_16)); }
	inline int32_t get_intVal_16() const { return ___intVal_16; }
	inline int32_t* get_address_of_intVal_16() { return &___intVal_16; }
	inline void set_intVal_16(int32_t value)
	{
		___intVal_16 = value;
	}

	inline static int32_t get_offset_of_uintVal_17() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___uintVal_17)); }
	inline uint32_t get_uintVal_17() const { return ___uintVal_17; }
	inline uint32_t* get_address_of_uintVal_17() { return &___uintVal_17; }
	inline void set_uintVal_17(uint32_t value)
	{
		___uintVal_17 = value;
	}

	inline static int32_t get_offset_of_pdispVal_18() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___pdispVal_18)); }
	inline intptr_t get_pdispVal_18() const { return ___pdispVal_18; }
	inline intptr_t* get_address_of_pdispVal_18() { return &___pdispVal_18; }
	inline void set_pdispVal_18(intptr_t value)
	{
		___pdispVal_18 = value;
	}

	inline static int32_t get_offset_of_bRecord_19() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___bRecord_19)); }
	inline BRECORD_t3470580684  get_bRecord_19() const { return ___bRecord_19; }
	inline BRECORD_t3470580684 * get_address_of_bRecord_19() { return &___bRecord_19; }
	inline void set_bRecord_19(BRECORD_t3470580684  value)
	{
		___bRecord_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VARIANT_T2753289927_H
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
#ifndef TYPEINFO_T1690786683_H
#define TYPEINFO_T1690786683_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TypeInfo
struct  TypeInfo_t1690786683  : public Type_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEINFO_T1690786683_H
#ifndef OBJECTCREATIONDELEGATE_T3727257075_H
#define OBJECTCREATIONDELEGATE_T3727257075_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ObjectCreationDelegate
struct  ObjectCreationDelegate_t3727257075  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTCREATIONDELEGATE_T3727257075_H
#ifndef SENDORPOSTCALLBACK_T2750080073_H
#define SENDORPOSTCALLBACK_T2750080073_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.SendOrPostCallback
struct  SendOrPostCallback_t2750080073  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENDORPOSTCALLBACK_T2750080073_H
#ifndef UNHANDLEDEXCEPTIONEVENTHANDLER_T3101989324_H
#define UNHANDLEDEXCEPTIONEVENTHANDLER_T3101989324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnhandledExceptionEventHandler
struct  UnhandledExceptionEventHandler_t3101989324  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNHANDLEDEXCEPTIONEVENTHANDLER_T3101989324_H
#ifndef RUNTIMETYPE_T3636489352_H
#define RUNTIMETYPE_T3636489352_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeType
struct  RuntimeType_t3636489352  : public TypeInfo_t1690786683
{
public:
	// System.MonoTypeInfo System.RuntimeType::type_info
	MonoTypeInfo_t3366989025 * ___type_info_26;
	// System.Object System.RuntimeType::GenericCache
	RuntimeObject * ___GenericCache_27;
	// System.Reflection.RuntimeConstructorInfo System.RuntimeType::m_serializationCtor
	RuntimeConstructorInfo_t1806616898 * ___m_serializationCtor_28;

public:
	inline static int32_t get_offset_of_type_info_26() { return static_cast<int32_t>(offsetof(RuntimeType_t3636489352, ___type_info_26)); }
	inline MonoTypeInfo_t3366989025 * get_type_info_26() const { return ___type_info_26; }
	inline MonoTypeInfo_t3366989025 ** get_address_of_type_info_26() { return &___type_info_26; }
	inline void set_type_info_26(MonoTypeInfo_t3366989025 * value)
	{
		___type_info_26 = value;
		Il2CppCodeGenWriteBarrier((&___type_info_26), value);
	}

	inline static int32_t get_offset_of_GenericCache_27() { return static_cast<int32_t>(offsetof(RuntimeType_t3636489352, ___GenericCache_27)); }
	inline RuntimeObject * get_GenericCache_27() const { return ___GenericCache_27; }
	inline RuntimeObject ** get_address_of_GenericCache_27() { return &___GenericCache_27; }
	inline void set_GenericCache_27(RuntimeObject * value)
	{
		___GenericCache_27 = value;
		Il2CppCodeGenWriteBarrier((&___GenericCache_27), value);
	}

	inline static int32_t get_offset_of_m_serializationCtor_28() { return static_cast<int32_t>(offsetof(RuntimeType_t3636489352, ___m_serializationCtor_28)); }
	inline RuntimeConstructorInfo_t1806616898 * get_m_serializationCtor_28() const { return ___m_serializationCtor_28; }
	inline RuntimeConstructorInfo_t1806616898 ** get_address_of_m_serializationCtor_28() { return &___m_serializationCtor_28; }
	inline void set_m_serializationCtor_28(RuntimeConstructorInfo_t1806616898 * value)
	{
		___m_serializationCtor_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_serializationCtor_28), value);
	}
};

struct RuntimeType_t3636489352_StaticFields
{
public:
	// System.RuntimeType System.RuntimeType::ValueType
	RuntimeType_t3636489352 * ___ValueType_10;
	// System.RuntimeType System.RuntimeType::EnumType
	RuntimeType_t3636489352 * ___EnumType_11;
	// System.RuntimeType System.RuntimeType::ObjectType
	RuntimeType_t3636489352 * ___ObjectType_12;
	// System.RuntimeType System.RuntimeType::StringType
	RuntimeType_t3636489352 * ___StringType_13;
	// System.RuntimeType System.RuntimeType::DelegateType
	RuntimeType_t3636489352 * ___DelegateType_14;
	// System.Type[] System.RuntimeType::s_SICtorParamTypes
	TypeU5BU5D_t3940880105* ___s_SICtorParamTypes_15;
	// System.RuntimeType System.RuntimeType::s_typedRef
	RuntimeType_t3636489352 * ___s_typedRef_25;
	// System.Collections.Generic.Dictionary`2<System.Guid,System.Type> System.RuntimeType::clsid_types
	Dictionary_2_t1532962293 * ___clsid_types_29;
	// System.Reflection.Emit.AssemblyBuilder System.RuntimeType::clsid_assemblybuilder
	AssemblyBuilder_t359885250 * ___clsid_assemblybuilder_30;

public:
	inline static int32_t get_offset_of_ValueType_10() { return static_cast<int32_t>(offsetof(RuntimeType_t3636489352_StaticFields, ___ValueType_10)); }
	inline RuntimeType_t3636489352 * get_ValueType_10() const { return ___ValueType_10; }
	inline RuntimeType_t3636489352 ** get_address_of_ValueType_10() { return &___ValueType_10; }
	inline void set_ValueType_10(RuntimeType_t3636489352 * value)
	{
		___ValueType_10 = value;
		Il2CppCodeGenWriteBarrier((&___ValueType_10), value);
	}

	inline static int32_t get_offset_of_EnumType_11() { return static_cast<int32_t>(offsetof(RuntimeType_t3636489352_StaticFields, ___EnumType_11)); }
	inline RuntimeType_t3636489352 * get_EnumType_11() const { return ___EnumType_11; }
	inline RuntimeType_t3636489352 ** get_address_of_EnumType_11() { return &___EnumType_11; }
	inline void set_EnumType_11(RuntimeType_t3636489352 * value)
	{
		___EnumType_11 = value;
		Il2CppCodeGenWriteBarrier((&___EnumType_11), value);
	}

	inline static int32_t get_offset_of_ObjectType_12() { return static_cast<int32_t>(offsetof(RuntimeType_t3636489352_StaticFields, ___ObjectType_12)); }
	inline RuntimeType_t3636489352 * get_ObjectType_12() const { return ___ObjectType_12; }
	inline RuntimeType_t3636489352 ** get_address_of_ObjectType_12() { return &___ObjectType_12; }
	inline void set_ObjectType_12(RuntimeType_t3636489352 * value)
	{
		___ObjectType_12 = value;
		Il2CppCodeGenWriteBarrier((&___ObjectType_12), value);
	}

	inline static int32_t get_offset_of_StringType_13() { return static_cast<int32_t>(offsetof(RuntimeType_t3636489352_StaticFields, ___StringType_13)); }
	inline RuntimeType_t3636489352 * get_StringType_13() const { return ___StringType_13; }
	inline RuntimeType_t3636489352 ** get_address_of_StringType_13() { return &___StringType_13; }
	inline void set_StringType_13(RuntimeType_t3636489352 * value)
	{
		___StringType_13 = value;
		Il2CppCodeGenWriteBarrier((&___StringType_13), value);
	}

	inline static int32_t get_offset_of_DelegateType_14() { return static_cast<int32_t>(offsetof(RuntimeType_t3636489352_StaticFields, ___DelegateType_14)); }
	inline RuntimeType_t3636489352 * get_DelegateType_14() const { return ___DelegateType_14; }
	inline RuntimeType_t3636489352 ** get_address_of_DelegateType_14() { return &___DelegateType_14; }
	inline void set_DelegateType_14(RuntimeType_t3636489352 * value)
	{
		___DelegateType_14 = value;
		Il2CppCodeGenWriteBarrier((&___DelegateType_14), value);
	}

	inline static int32_t get_offset_of_s_SICtorParamTypes_15() { return static_cast<int32_t>(offsetof(RuntimeType_t3636489352_StaticFields, ___s_SICtorParamTypes_15)); }
	inline TypeU5BU5D_t3940880105* get_s_SICtorParamTypes_15() const { return ___s_SICtorParamTypes_15; }
	inline TypeU5BU5D_t3940880105** get_address_of_s_SICtorParamTypes_15() { return &___s_SICtorParamTypes_15; }
	inline void set_s_SICtorParamTypes_15(TypeU5BU5D_t3940880105* value)
	{
		___s_SICtorParamTypes_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_SICtorParamTypes_15), value);
	}

	inline static int32_t get_offset_of_s_typedRef_25() { return static_cast<int32_t>(offsetof(RuntimeType_t3636489352_StaticFields, ___s_typedRef_25)); }
	inline RuntimeType_t3636489352 * get_s_typedRef_25() const { return ___s_typedRef_25; }
	inline RuntimeType_t3636489352 ** get_address_of_s_typedRef_25() { return &___s_typedRef_25; }
	inline void set_s_typedRef_25(RuntimeType_t3636489352 * value)
	{
		___s_typedRef_25 = value;
		Il2CppCodeGenWriteBarrier((&___s_typedRef_25), value);
	}

	inline static int32_t get_offset_of_clsid_types_29() { return static_cast<int32_t>(offsetof(RuntimeType_t3636489352_StaticFields, ___clsid_types_29)); }
	inline Dictionary_2_t1532962293 * get_clsid_types_29() const { return ___clsid_types_29; }
	inline Dictionary_2_t1532962293 ** get_address_of_clsid_types_29() { return &___clsid_types_29; }
	inline void set_clsid_types_29(Dictionary_2_t1532962293 * value)
	{
		___clsid_types_29 = value;
		Il2CppCodeGenWriteBarrier((&___clsid_types_29), value);
	}

	inline static int32_t get_offset_of_clsid_assemblybuilder_30() { return static_cast<int32_t>(offsetof(RuntimeType_t3636489352_StaticFields, ___clsid_assemblybuilder_30)); }
	inline AssemblyBuilder_t359885250 * get_clsid_assemblybuilder_30() const { return ___clsid_assemblybuilder_30; }
	inline AssemblyBuilder_t359885250 ** get_address_of_clsid_assemblybuilder_30() { return &___clsid_assemblybuilder_30; }
	inline void set_clsid_assemblybuilder_30(AssemblyBuilder_t359885250 * value)
	{
		___clsid_assemblybuilder_30 = value;
		Il2CppCodeGenWriteBarrier((&___clsid_assemblybuilder_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPE_T3636489352_H
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
// System.Int32[]
struct Int32U5BU5D_t385246372  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Type[]
struct TypeU5BU5D_t3940880105  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Char[]
struct CharU5BU5D_t3528271667  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
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

extern "C" void InputRecord_t2660212290_marshal_pinvoke(const InputRecord_t2660212290& unmarshaled, InputRecord_t2660212290_marshaled_pinvoke& marshaled);
extern "C" void InputRecord_t2660212290_marshal_pinvoke_back(const InputRecord_t2660212290_marshaled_pinvoke& marshaled, InputRecord_t2660212290& unmarshaled);
extern "C" void InputRecord_t2660212290_marshal_pinvoke_cleanup(InputRecord_t2660212290_marshaled_pinvoke& marshaled);
extern "C" void ComInteropProxy_t1891481270_marshal_pinvoke(const ComInteropProxy_t1891481270& unmarshaled, ComInteropProxy_t1891481270_marshaled_pinvoke& marshaled);
extern "C" void ComInteropProxy_t1891481270_marshal_pinvoke_back(const ComInteropProxy_t1891481270_marshaled_pinvoke& marshaled, ComInteropProxy_t1891481270& unmarshaled);
extern "C" void ComInteropProxy_t1891481270_marshal_pinvoke_cleanup(ComInteropProxy_t1891481270_marshaled_pinvoke& marshaled);
extern "C" void ComInteropProxy_t1891481270_marshal_com(const ComInteropProxy_t1891481270& unmarshaled, ComInteropProxy_t1891481270_marshaled_com& marshaled);
extern "C" void ComInteropProxy_t1891481270_marshal_com_back(const ComInteropProxy_t1891481270_marshaled_com& marshaled, ComInteropProxy_t1891481270& unmarshaled);
extern "C" void ComInteropProxy_t1891481270_marshal_com_cleanup(ComInteropProxy_t1891481270_marshaled_com& marshaled);

// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m1204004817_gshared (List_1_t128053199 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m2080863212_gshared (List_1_t128053199 * __this, int32_t p0, const RuntimeMethod* method);
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
extern "C" IL2CPP_METHOD_ATTR Int32U5BU5D_t385246372* List_1_ToArray_m1469074435_gshared (List_1_t128053199 * __this, const RuntimeMethod* method);

// System.String System.Environment::GetResourceString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Environment_GetResourceString_m2063689938 (RuntimeObject * __this /* static, unused */, String_t* ___key0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m1312628991 (ArgumentException_t132251570 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Int32 System.UInt32::CompareTo(System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t UInt32_CompareTo_m362578384 (uint32_t* __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Int32 System.UInt32::CompareTo(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR int32_t UInt32_CompareTo_m2218823230 (uint32_t* __this, uint32_t ___value0, const RuntimeMethod* method);
// System.Boolean System.UInt32::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool UInt32_Equals_m351935437 (uint32_t* __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.UInt32::Equals(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR bool UInt32_Equals_m4250336581 (uint32_t* __this, uint32_t ___obj0, const RuntimeMethod* method);
// System.Int32 System.UInt32::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t UInt32_GetHashCode_m3722548385 (uint32_t* __this, const RuntimeMethod* method);
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::get_CurrentInfo()
extern "C" IL2CPP_METHOD_ATTR NumberFormatInfo_t435877138 * NumberFormatInfo_get_CurrentInfo_m2605582008 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String System.Number::FormatUInt32(System.UInt32,System.String,System.Globalization.NumberFormatInfo)
extern "C" IL2CPP_METHOD_ATTR String_t* Number_FormatUInt32_m2486347252 (RuntimeObject * __this /* static, unused */, uint32_t ___value0, String_t* ___format1, NumberFormatInfo_t435877138 * ___info2, const RuntimeMethod* method);
// System.String System.UInt32::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* UInt32_ToString_m2574561716 (uint32_t* __this, const RuntimeMethod* method);
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::GetInstance(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR NumberFormatInfo_t435877138 * NumberFormatInfo_GetInstance_m2833078205 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___formatProvider0, const RuntimeMethod* method);
// System.String System.UInt32::ToString(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* UInt32_ToString_m4293943134 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.String System.UInt32::ToString(System.String,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* UInt32_ToString_m2420423038 (uint32_t* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.UInt32 System.Number::ParseUInt32(System.String,System.Globalization.NumberStyles,System.Globalization.NumberFormatInfo)
extern "C" IL2CPP_METHOD_ATTR uint32_t Number_ParseUInt32_m4237573864 (RuntimeObject * __this /* static, unused */, String_t* ___value0, int32_t ___options1, NumberFormatInfo_t435877138 * ___numfmt2, const RuntimeMethod* method);
// System.Void System.Globalization.NumberFormatInfo::ValidateParseStyleInteger(System.Globalization.NumberStyles)
extern "C" IL2CPP_METHOD_ATTR void NumberFormatInfo_ValidateParseStyleInteger_m957858295 (RuntimeObject * __this /* static, unused */, int32_t ___style0, const RuntimeMethod* method);
// System.Boolean System.Number::TryParseUInt32(System.String,System.Globalization.NumberStyles,System.Globalization.NumberFormatInfo,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR bool Number_TryParseUInt32_m2802499845 (RuntimeObject * __this /* static, unused */, String_t* ___s0, int32_t ___style1, NumberFormatInfo_t435877138 * ___info2, uint32_t* ___result3, const RuntimeMethod* method);
// System.TypeCode System.UInt32::GetTypeCode()
extern "C" IL2CPP_METHOD_ATTR int32_t UInt32_GetTypeCode_m88917904 (uint32_t* __this, const RuntimeMethod* method);
// System.Boolean System.Convert::ToBoolean(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR bool Convert_ToBoolean_m2807110707 (RuntimeObject * __this /* static, unused */, uint32_t ___value0, const RuntimeMethod* method);
// System.Boolean System.UInt32::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR bool UInt32_System_IConvertible_ToBoolean_m1763673183 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Char System.Convert::ToChar(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar Convert_ToChar_m2796006345 (RuntimeObject * __this /* static, unused */, uint32_t ___value0, const RuntimeMethod* method);
// System.Char System.UInt32::System.IConvertible.ToChar(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar UInt32_System_IConvertible_ToChar_m1873050533 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.SByte System.Convert::ToSByte(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR int8_t Convert_ToSByte_m2486156346 (RuntimeObject * __this /* static, unused */, uint32_t ___value0, const RuntimeMethod* method);
// System.SByte System.UInt32::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR int8_t UInt32_System_IConvertible_ToSByte_m1061556466 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Byte System.Convert::ToByte(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR uint8_t Convert_ToByte_m1993550870 (RuntimeObject * __this /* static, unused */, uint32_t ___value0, const RuntimeMethod* method);
// System.Byte System.UInt32::System.IConvertible.ToByte(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR uint8_t UInt32_System_IConvertible_ToByte_m4072781199 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int16 System.Convert::ToInt16(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR int16_t Convert_ToInt16_m571189957 (RuntimeObject * __this /* static, unused */, uint32_t ___value0, const RuntimeMethod* method);
// System.Int16 System.UInt32::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR int16_t UInt32_System_IConvertible_ToInt16_m1659441601 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt16 System.Convert::ToUInt16(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR uint16_t Convert_ToUInt16_m1480956416 (RuntimeObject * __this /* static, unused */, uint32_t ___value0, const RuntimeMethod* method);
// System.UInt16 System.UInt32::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR uint16_t UInt32_System_IConvertible_ToUInt16_m3125657960 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m3956995719 (RuntimeObject * __this /* static, unused */, uint32_t ___value0, const RuntimeMethod* method);
// System.Int32 System.UInt32::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR int32_t UInt32_System_IConvertible_ToInt32_m220754611 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt32 System.UInt32::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR uint32_t UInt32_System_IConvertible_ToUInt32_m1744564280 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int64 System.Convert::ToInt64(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR int64_t Convert_ToInt64_m3392013556 (RuntimeObject * __this /* static, unused */, uint32_t ___value0, const RuntimeMethod* method);
// System.Int64 System.UInt32::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR int64_t UInt32_System_IConvertible_ToInt64_m2261037378 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt64 System.Convert::ToUInt64(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR uint64_t Convert_ToUInt64_m1745056470 (RuntimeObject * __this /* static, unused */, uint32_t ___value0, const RuntimeMethod* method);
// System.UInt64 System.UInt32::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR uint64_t UInt32_System_IConvertible_ToUInt64_m1094958903 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Single System.Convert::ToSingle(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR float Convert_ToSingle_m3983149863 (RuntimeObject * __this /* static, unused */, uint32_t ___value0, const RuntimeMethod* method);
// System.Single System.UInt32::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR float UInt32_System_IConvertible_ToSingle_m1272823424 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Double System.Convert::ToDouble(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR double Convert_ToDouble_m2222536920 (RuntimeObject * __this /* static, unused */, uint32_t ___value0, const RuntimeMethod* method);
// System.Double System.UInt32::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR double UInt32_System_IConvertible_ToDouble_m940039456 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Decimal System.Convert::ToDecimal(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR Decimal_t2948259380  Convert_ToDecimal_m889385228 (RuntimeObject * __this /* static, unused */, uint32_t ___value0, const RuntimeMethod* method);
// System.Decimal System.UInt32::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR Decimal_t2948259380  UInt32_System_IConvertible_ToDecimal_m675004071 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.String System.Environment::GetResourceString(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* Environment_GetResourceString_m479507158 (RuntimeObject * __this /* static, unused */, String_t* ___key0, ObjectU5BU5D_t2843939325* ___values1, const RuntimeMethod* method);
// System.Void System.InvalidCastException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void InvalidCastException__ctor_m318645277 (InvalidCastException_t3927145244 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.DateTime System.UInt32::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  UInt32_System_IConvertible_ToDateTime_m2767723441 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Object System.Convert::DefaultToType(System.IConvertible,System.Type,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Convert_DefaultToType_m1860037989 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___value0, Type_t * ___targetType1, RuntimeObject* ___provider2, const RuntimeMethod* method);
// System.Object System.UInt32::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * UInt32_System_IConvertible_ToType_m922356584 (uint32_t* __this, Type_t * ___type0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Int32 System.UInt64::CompareTo(System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t UInt64_CompareTo_m3619843473 (uint64_t* __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Int32 System.UInt64::CompareTo(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR int32_t UInt64_CompareTo_m1614517204 (uint64_t* __this, uint64_t ___value0, const RuntimeMethod* method);
// System.Boolean System.UInt64::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool UInt64_Equals_m1879425698 (uint64_t* __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.UInt64::Equals(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR bool UInt64_Equals_m367573732 (uint64_t* __this, uint64_t ___obj0, const RuntimeMethod* method);
// System.Int32 System.UInt64::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t UInt64_GetHashCode_m4209760355 (uint64_t* __this, const RuntimeMethod* method);
// System.String System.Number::FormatUInt64(System.UInt64,System.String,System.Globalization.NumberFormatInfo)
extern "C" IL2CPP_METHOD_ATTR String_t* Number_FormatUInt64_m792080283 (RuntimeObject * __this /* static, unused */, uint64_t ___value0, String_t* ___format1, NumberFormatInfo_t435877138 * ___info2, const RuntimeMethod* method);
// System.String System.UInt64::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* UInt64_ToString_m1529093114 (uint64_t* __this, const RuntimeMethod* method);
// System.String System.UInt64::ToString(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* UInt64_ToString_m2623377370 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.String System.UInt64::ToString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* UInt64_ToString_m2177233542 (uint64_t* __this, String_t* ___format0, const RuntimeMethod* method);
// System.String System.UInt64::ToString(System.String,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* UInt64_ToString_m1695188334 (uint64_t* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.UInt64 System.Number::ParseUInt64(System.String,System.Globalization.NumberStyles,System.Globalization.NumberFormatInfo)
extern "C" IL2CPP_METHOD_ATTR uint64_t Number_ParseUInt64_m2694014565 (RuntimeObject * __this /* static, unused */, String_t* ___value0, int32_t ___options1, NumberFormatInfo_t435877138 * ___numfmt2, const RuntimeMethod* method);
// System.Boolean System.Number::TryParseUInt64(System.String,System.Globalization.NumberStyles,System.Globalization.NumberFormatInfo,System.UInt64&)
extern "C" IL2CPP_METHOD_ATTR bool Number_TryParseUInt64_m782753458 (RuntimeObject * __this /* static, unused */, String_t* ___s0, int32_t ___style1, NumberFormatInfo_t435877138 * ___info2, uint64_t* ___result3, const RuntimeMethod* method);
// System.TypeCode System.UInt64::GetTypeCode()
extern "C" IL2CPP_METHOD_ATTR int32_t UInt64_GetTypeCode_m844217172 (uint64_t* __this, const RuntimeMethod* method);
// System.Boolean System.Convert::ToBoolean(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR bool Convert_ToBoolean_m3613483153 (RuntimeObject * __this /* static, unused */, uint64_t ___value0, const RuntimeMethod* method);
// System.Boolean System.UInt64::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR bool UInt64_System_IConvertible_ToBoolean_m3071416000 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Char System.Convert::ToChar(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar Convert_ToChar_m1604365259 (RuntimeObject * __this /* static, unused */, uint64_t ___value0, const RuntimeMethod* method);
// System.Char System.UInt64::System.IConvertible.ToChar(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar UInt64_System_IConvertible_ToChar_m2074245892 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.SByte System.Convert::ToSByte(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR int8_t Convert_ToSByte_m1679390684 (RuntimeObject * __this /* static, unused */, uint64_t ___value0, const RuntimeMethod* method);
// System.SByte System.UInt64::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR int8_t UInt64_System_IConvertible_ToSByte_m30962591 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Byte System.Convert::ToByte(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR uint8_t Convert_ToByte_m3567528984 (RuntimeObject * __this /* static, unused */, uint64_t ___value0, const RuntimeMethod* method);
// System.Byte System.UInt64::System.IConvertible.ToByte(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR uint8_t UInt64_System_IConvertible_ToByte_m1501504925 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int16 System.Convert::ToInt16(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR int16_t Convert_ToInt16_m1733792763 (RuntimeObject * __this /* static, unused */, uint64_t ___value0, const RuntimeMethod* method);
// System.Int16 System.UInt64::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR int16_t UInt64_System_IConvertible_ToInt16_m3895479143 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt16 System.Convert::ToUInt16(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR uint16_t Convert_ToUInt16_m2672597498 (RuntimeObject * __this /* static, unused */, uint64_t ___value0, const RuntimeMethod* method);
// System.UInt16 System.UInt64::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR uint16_t UInt64_System_IConvertible_ToUInt16_m4165747038 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m825155517 (RuntimeObject * __this /* static, unused */, uint64_t ___value0, const RuntimeMethod* method);
// System.Int32 System.UInt64::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR int32_t UInt64_System_IConvertible_ToInt32_m949522652 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt32 System.Convert::ToUInt32(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR uint32_t Convert_ToUInt32_m1767593911 (RuntimeObject * __this /* static, unused */, uint64_t ___value0, const RuntimeMethod* method);
// System.UInt32 System.UInt64::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR uint32_t UInt64_System_IConvertible_ToUInt32_m2784653358 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int64 System.Convert::ToInt64(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR int64_t Convert_ToInt64_m260173354 (RuntimeObject * __this /* static, unused */, uint64_t ___value0, const RuntimeMethod* method);
// System.Int64 System.UInt64::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR int64_t UInt64_System_IConvertible_ToInt64_m4241475606 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt64 System.UInt64::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR uint64_t UInt64_System_IConvertible_ToUInt64_m2135047981 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Single System.Convert::ToSingle(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR float Convert_ToSingle_m2791508777 (RuntimeObject * __this /* static, unused */, uint64_t ___value0, const RuntimeMethod* method);
// System.Single System.UInt64::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR float UInt64_System_IConvertible_ToSingle_m925613075 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Double System.Convert::ToDouble(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR double Convert_ToDouble_m1030895834 (RuntimeObject * __this /* static, unused */, uint64_t ___value0, const RuntimeMethod* method);
// System.Double System.UInt64::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR double UInt64_System_IConvertible_ToDouble_m602078108 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Decimal System.Convert::ToDecimal(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR Decimal_t2948259380  Convert_ToDecimal_m1695757674 (RuntimeObject * __this /* static, unused */, uint64_t ___value0, const RuntimeMethod* method);
// System.Decimal System.UInt64::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR Decimal_t2948259380  UInt64_System_IConvertible_ToDecimal_m806594027 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.DateTime System.UInt64::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  UInt64_System_IConvertible_ToDateTime_m3434604642 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Object System.UInt64::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * UInt64_System_IConvertible_ToType_m4049257834 (uint64_t* __this, Type_t * ___type0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Void System.UIntPtr::.ctor(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void UIntPtr__ctor_m4250165422 (uintptr_t* __this, uint32_t ___value0, const RuntimeMethod* method);
// System.Boolean System.UIntPtr::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool UIntPtr_Equals_m1316671746 (uintptr_t* __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 System.UIntPtr::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t UIntPtr_GetHashCode_m3482152298 (uintptr_t* __this, const RuntimeMethod* method);
// System.Int32 System.UIntPtr::get_Size()
extern "C" IL2CPP_METHOD_ATTR int32_t UIntPtr_get_Size_m703595701 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String System.UIntPtr::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* UIntPtr_ToString_m984583492 (uintptr_t* __this, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m1170824041 (ArgumentNullException_t1615371798 * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.UInt64)
extern "C" IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m2020653395 (SerializationInfo_t950877179 * __this, String_t* ___name0, uint64_t ___value1, const RuntimeMethod* method);
// System.Void System.UIntPtr::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData_m1767630151 (uintptr_t* __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method);
// System.Void System.UnSafeCharBuffer::.ctor(System.Char*,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void UnSafeCharBuffer__ctor_m1145239641 (UnSafeCharBuffer_t2176740272 * __this, Il2CppChar* ___buffer0, int32_t ___bufferSize1, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m2969720369 (RuntimeObject * __this /* static, unused */, String_t* ___value0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method);
// System.Void System.IndexOutOfRangeException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_m2441337274 (IndexOutOfRangeException_t1578797820 * __this, const RuntimeMethod* method);
// System.Int32 System.Runtime.CompilerServices.RuntimeHelpers::get_OffsetToStringData()
extern "C" IL2CPP_METHOD_ATTR int32_t RuntimeHelpers_get_OffsetToStringData_m2192601476 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Buffer::Memcpy(System.Byte*,System.Byte*,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Buffer_Memcpy_m2035854300 (RuntimeObject * __this /* static, unused */, uint8_t* ___dest0, uint8_t* ___src1, int32_t ___size2, const RuntimeMethod* method);
// System.Void System.UnSafeCharBuffer::AppendString(System.String)
extern "C" IL2CPP_METHOD_ATTR void UnSafeCharBuffer_AppendString_m2223303597 (UnSafeCharBuffer_t2176740272 * __this, String_t* ___stringToAppend0, const RuntimeMethod* method);
// System.Void System.SystemException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void SystemException__ctor_m3298527747 (SystemException_t176217640 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Exception::SetErrorCode(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Exception_SetErrorCode_m4269507377 (Exception_t * __this, int32_t ___hr0, const RuntimeMethod* method);
// System.Void System.SystemException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void SystemException__ctor_m1515048899 (SystemException_t176217640 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method);
// System.Void System.EventArgs::.ctor()
extern "C" IL2CPP_METHOD_ATTR void EventArgs__ctor_m32674013 (EventArgs_t3591816995 * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  ___handle0, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::SetType(System.Type)
extern "C" IL2CPP_METHOD_ATTR void SerializationInfo_SetType_m3923964808 (SerializationInfo_t950877179 * __this, Type_t * ___type0, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m412754688 (SerializationInfo_t950877179 * __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m1204004817 (List_1_t128053199 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t128053199 *, const RuntimeMethod*))List_1__ctor_m1204004817_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
inline void List_1_Add_m2080863212 (List_1_t128053199 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t128053199 *, int32_t, const RuntimeMethod*))List_1_Add_m2080863212_gshared)(__this, p0, method);
}
// System.Boolean System.Type::get_IsArray()
extern "C" IL2CPP_METHOD_ATTR bool Type_get_IsArray_m2591212821 (Type_t * __this, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsPointer()
extern "C" IL2CPP_METHOD_ATTR bool Type_get_IsPointer_m4067542339 (Type_t * __this, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsByRef()
extern "C" IL2CPP_METHOD_ATTR bool Type_get_IsByRef_m1262524108 (Type_t * __this, const RuntimeMethod* method);
// System.Boolean System.Type::get_HasElementType()
extern "C" IL2CPP_METHOD_ATTR bool Type_get_HasElementType_m710151977 (Type_t * __this, const RuntimeMethod* method);
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
inline Int32U5BU5D_t385246372* List_1_ToArray_m1469074435 (List_1_t128053199 * __this, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t385246372* (*) (List_1_t128053199 *, const RuntimeMethod*))List_1_ToArray_m1469074435_gshared)(__this, method);
}
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object,System.Type)
extern "C" IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m3906743584 (SerializationInfo_t950877179 * __this, String_t* ___name0, RuntimeObject * ___value1, Type_t * ___type2, const RuntimeMethod* method);
// System.Type System.Type::GetRootElementType()
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetRootElementType_m2028550026 (Type_t * __this, const RuntimeMethod* method);
// System.RuntimeType System.UnitySerializationHolder::AddElementTypes(System.Runtime.Serialization.SerializationInfo,System.RuntimeType)
extern "C" IL2CPP_METHOD_ATTR RuntimeType_t3636489352 * UnitySerializationHolder_AddElementTypes_m2711578409 (RuntimeObject * __this /* static, unused */, SerializationInfo_t950877179 * ___info0, RuntimeType_t3636489352 * ___type1, const RuntimeMethod* method);
// System.Reflection.RuntimeAssembly System.RuntimeType::GetRuntimeAssembly()
extern "C" IL2CPP_METHOD_ATTR RuntimeAssembly_t1451753063 * RuntimeType_GetRuntimeAssembly_m2955606119 (RuntimeType_t3636489352 * __this, const RuntimeMethod* method);
// System.Void System.UnitySerializationHolder::GetUnitySerializationInfo(System.Runtime.Serialization.SerializationInfo,System.Int32,System.String,System.Reflection.RuntimeAssembly)
extern "C" IL2CPP_METHOD_ATTR void UnitySerializationHolder_GetUnitySerializationInfo_m3966690610 (RuntimeObject * __this /* static, unused */, SerializationInfo_t950877179 * ___info0, int32_t ___unityType1, String_t* ___data2, RuntimeAssembly_t1451753063 * ___assembly3, const RuntimeMethod* method);
// System.Boolean System.Reflection.Assembly::op_Equality(System.Reflection.Assembly,System.Reflection.Assembly)
extern "C" IL2CPP_METHOD_ATTR bool Assembly_op_Equality_m3828289814 (RuntimeObject * __this /* static, unused */, Assembly_t * ___left0, Assembly_t * ___right1, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m2872281893 (SerializationInfo_t950877179 * __this, String_t* ___name0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Int32 System.Runtime.Serialization.SerializationInfo::GetInt32(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t SerializationInfo_GetInt32_m2640574809 (SerializationInfo_t950877179 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Object System.Runtime.Serialization.SerializationInfo::GetValue(System.String,System.Type)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * SerializationInfo_GetValue_m42271953 (SerializationInfo_t950877179 * __this, String_t* ___name0, Type_t * ___type1, const RuntimeMethod* method);
// System.String System.Runtime.Serialization.SerializationInfo::GetString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* SerializationInfo_GetString_m3155282843 (SerializationInfo_t950877179 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void SerializationException__ctor_m3862484944 (SerializationException_t3941511869 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m2494070935 (NotSupportedException_t1314879016 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
extern "C" IL2CPP_METHOD_ATTR bool Type_op_Equality_m2683486427 (RuntimeObject * __this /* static, unused */, Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Type System.UnitySerializationHolder::MakeElementTypes(System.Type)
extern "C" IL2CPP_METHOD_ATTR Type_t * UnitySerializationHolder_MakeElementTypes_m672301684 (UnitySerializationHolder_t431912834 * __this, Type_t * ___type0, const RuntimeMethod* method);
// System.Boolean System.Reflection.MethodBase::op_Equality(System.Reflection.MethodBase,System.Reflection.MethodBase)
extern "C" IL2CPP_METHOD_ATTR bool MethodBase_op_Equality_m2405991987 (RuntimeObject * __this /* static, unused */, MethodBase_t * ___left0, MethodBase_t * ___right1, const RuntimeMethod* method);
// System.Void System.UnitySerializationHolder::ThrowInsufficientInformation(System.String)
extern "C" IL2CPP_METHOD_ATTR void UnitySerializationHolder_ThrowInsufficientInformation_m1747464776 (UnitySerializationHolder_t431912834 * __this, String_t* ___field0, const RuntimeMethod* method);
// System.Boolean System.Reflection.MethodBase::op_Inequality(System.Reflection.MethodBase,System.Reflection.MethodBase)
extern "C" IL2CPP_METHOD_ATTR bool MethodBase_op_Inequality_m736913402 (RuntimeObject * __this /* static, unused */, MethodBase_t * ___left0, MethodBase_t * ___right1, const RuntimeMethod* method);
// System.Type System.Type::GetType(System.String,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetType_m3971160356 (RuntimeObject * __this /* static, unused */, String_t* ___typeName0, bool ___throwOnError1, bool ___ignoreCase2, const RuntimeMethod* method);
// System.Reflection.Assembly System.Reflection.Assembly::Load(System.String)
extern "C" IL2CPP_METHOD_ATTR Assembly_t * Assembly_Load_m3487507613 (RuntimeObject * __this /* static, unused */, String_t* ___assemblyString0, const RuntimeMethod* method);
// System.Boolean System.Reflection.Module::op_Equality(System.Reflection.Module,System.Reflection.Module)
extern "C" IL2CPP_METHOD_ATTR bool Module_op_Equality_m1102431980 (RuntimeObject * __this /* static, unused */, Module_t2987026101 * ___left0, Module_t2987026101 * ___right1, const RuntimeMethod* method);
// System.Boolean System.ValueTuple::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool ValueTuple_Equals_m3777586424 (ValueTuple_t3168505507 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.ValueTuple::Equals(System.ValueTuple)
extern "C" IL2CPP_METHOD_ATTR bool ValueTuple_Equals_m3868013840 (ValueTuple_t3168505507 * __this, ValueTuple_t3168505507  ___other0, const RuntimeMethod* method);
// System.Boolean System.ValueTuple::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
extern "C" IL2CPP_METHOD_ATTR bool ValueTuple_System_Collections_IStructuralEquatable_Equals_m1158377527 (ValueTuple_t3168505507 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method);
// System.Type System.Object::GetType()
extern "C" IL2CPP_METHOD_ATTR Type_t * Object_GetType_m88164663 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String SR::Format(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* SR_Format_m1749913990 (RuntimeObject * __this /* static, unused */, String_t* ___resourceFormat0, RuntimeObject * ___p11, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m1216717135 (ArgumentException_t132251570 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Int32 System.ValueTuple::System.IComparable.CompareTo(System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t ValueTuple_System_IComparable_CompareTo_m3152321575 (ValueTuple_t3168505507 * __this, RuntimeObject * ___other0, const RuntimeMethod* method);
// System.Int32 System.ValueTuple::CompareTo(System.ValueTuple)
extern "C" IL2CPP_METHOD_ATTR int32_t ValueTuple_CompareTo_m2936302085 (ValueTuple_t3168505507 * __this, ValueTuple_t3168505507  ___other0, const RuntimeMethod* method);
// System.Int32 System.ValueTuple::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
extern "C" IL2CPP_METHOD_ATTR int32_t ValueTuple_System_Collections_IStructuralComparable_CompareTo_m1147772089 (ValueTuple_t3168505507 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method);
// System.Int32 System.ValueTuple::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t ValueTuple_GetHashCode_m2158739460 (ValueTuple_t3168505507 * __this, const RuntimeMethod* method);
// System.Int32 System.ValueTuple::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
extern "C" IL2CPP_METHOD_ATTR int32_t ValueTuple_System_Collections_IStructuralEquatable_GetHashCode_m3160204034 (ValueTuple_t3168505507 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method);
// System.String System.ValueTuple::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* ValueTuple_ToString_m2213345710 (ValueTuple_t3168505507 * __this, const RuntimeMethod* method);
// System.Int32 System.Numerics.Hashing.HashHelpers::Combine(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t HashHelpers_Combine_m3459330122 (RuntimeObject * __this /* static, unused */, int32_t ___h10, int32_t ___h21, const RuntimeMethod* method);
// System.Boolean System.RuntimeType::op_Inequality(System.RuntimeType,System.RuntimeType)
extern "C" IL2CPP_METHOD_ATTR bool RuntimeType_op_Inequality_m287584116 (RuntimeObject * __this /* static, unused */, RuntimeType_t3636489352 * ___left0, RuntimeType_t3636489352 * ___right1, const RuntimeMethod* method);
// System.Boolean System.ValueType::InternalEquals(System.Object,System.Object,System.Object[]&)
extern "C" IL2CPP_METHOD_ATTR bool ValueType_InternalEquals_m1384040357 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___o10, RuntimeObject * ___o21, ObjectU5BU5D_t2843939325** ___fields2, const RuntimeMethod* method);
// System.Boolean System.ValueType::DefaultEquals(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR bool ValueType_DefaultEquals_m2927252100 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___o10, RuntimeObject * ___o21, const RuntimeMethod* method);
// System.Int32 System.ValueType::InternalGetHashCode(System.Object,System.Object[]&)
extern "C" IL2CPP_METHOD_ATTR int32_t ValueType_InternalGetHashCode_m58786863 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___o0, ObjectU5BU5D_t2843939325** ___fields1, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::FreeBSTR(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Marshal_FreeBSTR_m2788901813 (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m3063970704 (RuntimeObject * __this /* static, unused */, intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Int32 System.Runtime.InteropServices.Marshal::Release(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR int32_t Marshal_Release_m3880542832 (RuntimeObject * __this /* static, unused */, intptr_t ___pUnk0, const RuntimeMethod* method);
// System.Void System.Variant::Clear()
extern "C" IL2CPP_METHOD_ATTR void Variant_Clear_m3388694274 (Variant_t2753289927 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m282481429 (ArgumentOutOfRangeException_t777629997 * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.Void System.Version::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Version__ctor_m872301635 (Version_t3456873960 * __this, const RuntimeMethod* method);
// System.Boolean System.Version::op_Equality(System.Version,System.Version)
extern "C" IL2CPP_METHOD_ATTR bool Version_op_Equality_m3804852517 (RuntimeObject * __this /* static, unused */, Version_t3456873960 * ___v10, Version_t3456873960 * ___v21, const RuntimeMethod* method);
// System.String System.Version::ToString(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* Version_ToString_m3654989516 (Version_t3456873960 * __this, int32_t ___fieldCount0, const RuntimeMethod* method);
// System.String System.Int32::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Int32_ToString_m141394615 (int32_t* __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilderCache::Acquire(System.Int32)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilderCache_Acquire_m4169564332 (RuntimeObject * __this /* static, unused */, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Version::AppendPositiveNumber(System.Int32,System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR void Version_AppendPositiveNumber_m308762805 (RuntimeObject * __this /* static, unused */, int32_t ___num0, StringBuilder_t * ___sb1, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m2383614642 (StringBuilder_t * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.String System.Text.StringBuilderCache::GetStringAndRelease(System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR String_t* StringBuilderCache_GetStringAndRelease_m1110745745 (RuntimeObject * __this /* static, unused */, StringBuilder_t * ___sb0, const RuntimeMethod* method);
// System.Int32 System.Text.StringBuilder::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_m3238060835 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Insert(System.Int32,System.Char)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Insert_m1076119876 (StringBuilder_t * __this, int32_t ___index0, Il2CppChar ___value1, const RuntimeMethod* method);
// System.Boolean System.Version::Equals(System.Version)
extern "C" IL2CPP_METHOD_ATTR bool Version_Equals_m1564427710 (Version_t3456873960 * __this, Version_t3456873960 * ___obj0, const RuntimeMethod* method);
// System.Int32 System.Version::CompareTo(System.Version)
extern "C" IL2CPP_METHOD_ATTR int32_t Version_CompareTo_m3146217210 (Version_t3456873960 * __this, Version_t3456873960 * ___value0, const RuntimeMethod* method);
// System.Boolean System.Version::op_LessThanOrEqual(System.Version,System.Version)
extern "C" IL2CPP_METHOD_ATTR bool Version_op_LessThanOrEqual_m666140174 (RuntimeObject * __this /* static, unused */, Version_t3456873960 * ___v10, Version_t3456873960 * ___v21, const RuntimeMethod* method);
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
extern "C" IL2CPP_METHOD_ATTR GCHandle_t3351438187  GCHandle_Alloc_m3823409740 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___value0, int32_t ___type1, const RuntimeMethod* method);
// System.Void System.WeakReference::.ctor(System.Object,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void WeakReference__ctor_m1054065938 (WeakReference_t1334886716 * __this, RuntimeObject * ___target0, bool ___trackResurrection1, const RuntimeMethod* method);
// System.Void System.WeakReference::AllocateHandle(System.Object)
extern "C" IL2CPP_METHOD_ATTR void WeakReference_AllocateHandle_m1478975559 (WeakReference_t1334886716 * __this, RuntimeObject * ___target0, const RuntimeMethod* method);
// System.Boolean System.Runtime.Serialization.SerializationInfo::GetBoolean(System.String)
extern "C" IL2CPP_METHOD_ATTR bool SerializationInfo_GetBoolean_m1756153320 (SerializationInfo_t950877179 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Boolean System.Runtime.InteropServices.GCHandle::get_IsAllocated()
extern "C" IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m1058226959 (GCHandle_t3351438187 * __this, const RuntimeMethod* method);
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GCHandle_get_Target_m1824973883 (GCHandle_t3351438187 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.GCHandle::Free()
extern "C" IL2CPP_METHOD_ATTR void GCHandle_Free_m1457699368 (GCHandle_t3351438187 * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
extern "C" IL2CPP_METHOD_ATTR void Object_Finalize_m3076187857 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m3427199315 (SerializationInfo_t950877179 * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method);
// System.IntPtr System.WindowsConsoleDriver::GetStdHandle(System.Handles)
extern "C" IL2CPP_METHOD_ATTR intptr_t WindowsConsoleDriver_GetStdHandle_m23119533 (RuntimeObject * __this /* static, unused */, int32_t ___handle0, const RuntimeMethod* method);
// System.Boolean System.WindowsConsoleDriver::GetConsoleScreenBufferInfo(System.IntPtr,System.ConsoleScreenBufferInfo&)
extern "C" IL2CPP_METHOD_ATTR bool WindowsConsoleDriver_GetConsoleScreenBufferInfo_m3609341087 (RuntimeObject * __this /* static, unused */, intptr_t ___handle0, ConsoleScreenBufferInfo_t3095351730 * ___info1, const RuntimeMethod* method);
// System.Boolean System.WindowsConsoleDriver::ReadConsoleInput(System.IntPtr,System.InputRecord&,System.Int32,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR bool WindowsConsoleDriver_ReadConsoleInput_m1790694890 (RuntimeObject * __this /* static, unused */, intptr_t ___handle0, InputRecord_t2660212290 * ___record1, int32_t ___length2, int32_t* ___nread3, const RuntimeMethod* method);
// System.Int32 System.Runtime.InteropServices.Marshal::GetLastWin32Error()
extern "C" IL2CPP_METHOD_ATTR int32_t Marshal_GetLastWin32Error_m1272610344 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m237278729 (InvalidOperationException_t56020091 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean System.WindowsConsoleDriver::IsModifierKey(System.Int16)
extern "C" IL2CPP_METHOD_ATTR bool WindowsConsoleDriver_IsModifierKey_m1974886538 (RuntimeObject * __this /* static, unused */, int16_t ___virtualKeyCode0, const RuntimeMethod* method);
// System.Void System.ConsoleKeyInfo::.ctor(System.Char,System.ConsoleKey,System.Boolean,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ConsoleKeyInfo__ctor_m535940175 (ConsoleKeyInfo_t1802691652 * __this, Il2CppChar ___keyChar0, int32_t ___key1, bool ___shift2, bool ___alt3, bool ___control4, const RuntimeMethod* method);
// System.Void System.Threading.SendOrPostCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SendOrPostCallback__ctor_m1566534627 (SendOrPostCallback_t2750080073 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.__ComObject::ReleaseInterfaces()
extern "C" IL2CPP_METHOD_ATTR void __ComObject_ReleaseInterfaces_m3890375834 (__ComObject_t2735933417 * __this, const RuntimeMethod* method);
// System.Void System.MarshalByRefObject::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MarshalByRefObject__ctor_m3039543187 (MarshalByRefObject_t2760389100 * __this, const RuntimeMethod* method);
// System.Void System.__ComObject::Initialize(System.Type)
extern "C" IL2CPP_METHOD_ATTR void __ComObject_Initialize_m2996039964 (__ComObject_t2735933417 * __this, Type_t * ___t0, const RuntimeMethod* method);
// System.Void System.__ComObject::InitializeApartmentDetails()
extern "C" IL2CPP_METHOD_ATTR void __ComObject_InitializeApartmentDetails_m739460630 (__ComObject_t2735933417 * __this, const RuntimeMethod* method);
// System.Guid System.__ComObject::get_IID_IUnknown()
extern "C" IL2CPP_METHOD_ATTR Guid_t  __ComObject_get_IID_IUnknown_m729737940 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 System.Runtime.InteropServices.Marshal::QueryInterface(System.IntPtr,System.Guid&,System.IntPtr&)
extern "C" IL2CPP_METHOD_ATTR int32_t Marshal_QueryInterface_m1662962511 (RuntimeObject * __this /* static, unused */, intptr_t ___pUnk0, Guid_t * ___iid1, intptr_t* ___ppv2, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::ThrowExceptionForHR(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Marshal_ThrowExceptionForHR_m2575255200 (RuntimeObject * __this /* static, unused */, int32_t ___errorCode0, const RuntimeMethod* method);
// System.IntPtr System.__ComObject::CreateIUnknown(System.Type)
extern "C" IL2CPP_METHOD_ATTR intptr_t __ComObject_CreateIUnknown_m2252770198 (RuntimeObject * __this /* static, unused */, Type_t * ___t0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::RunClassConstructor(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR void RuntimeHelpers_RunClassConstructor_m3392013529 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  ___type0, const RuntimeMethod* method);
// System.Runtime.InteropServices.ObjectCreationDelegate System.Runtime.InteropServices.ExtensibleClassFactory::GetObjectCreationCallback(System.Type)
extern "C" IL2CPP_METHOD_ATTR ObjectCreationDelegate_t3727257075 * ExtensibleClassFactory_GetObjectCreationCallback_m2897487368 (RuntimeObject * __this /* static, unused */, Type_t * ___t0, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.ObjectCreationDelegate::Invoke(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t ObjectCreationDelegate_Invoke_m3263378454 (ObjectCreationDelegate_t3727257075 * __this, intptr_t ___aggregator0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m408849716 (RuntimeObject * __this /* static, unused */, intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m2844511972 (RuntimeObject * __this /* static, unused */, String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.COMException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void COMException__ctor_m3321329575 (COMException_t1620828383 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Guid System.__ComObject::GetCLSID(System.Type)
extern "C" IL2CPP_METHOD_ATTR Guid_t  __ComObject_GetCLSID_m273875985 (RuntimeObject * __this /* static, unused */, Type_t * ___t0, const RuntimeMethod* method);
// System.Int32 System.__ComObject::CoCreateInstance(System.Guid,System.IntPtr,System.UInt32,System.Guid,System.IntPtr&)
extern "C" IL2CPP_METHOD_ATTR int32_t __ComObject_CoCreateInstance_m891247042 (RuntimeObject * __this /* static, unused */, Guid_t  ___rclsid0, intptr_t ___pUnkOuter1, uint32_t ___dwClsContext2, Guid_t  ___riid3, intptr_t* ___pUnk4, const RuntimeMethod* method);
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
extern "C" IL2CPP_METHOD_ATTR Thread_t2300836069 * Thread_get_CurrentThread_m4142136012 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Threading.ApartmentState System.Threading.Thread::GetApartmentState()
extern "C" IL2CPP_METHOD_ATTR int32_t Thread_GetApartmentState_m2217652568 (Thread_t2300836069 * __this, const RuntimeMethod* method);
// System.Threading.SynchronizationContext System.Threading.SynchronizationContext::get_Current()
extern "C" IL2CPP_METHOD_ATTR SynchronizationContext_t2326897723 * SynchronizationContext_get_Current_m3666546046 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsImport()
extern "C" IL2CPP_METHOD_ATTR bool Type_get_IsImport_m318717543 (Type_t * __this, const RuntimeMethod* method);
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
extern "C" IL2CPP_METHOD_ATTR bool Type_op_Inequality_m2948304386 (RuntimeObject * __this /* static, unused */, Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void System.__ComObject::CheckIUnknown()
extern "C" IL2CPP_METHOD_ATTR void __ComObject_CheckIUnknown_m2979951207 (__ComObject_t2735933417 * __this, const RuntimeMethod* method);
// System.IntPtr System.__ComObject::GetInterfaceInternal(System.Type,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR intptr_t __ComObject_GetInterfaceInternal_m1209860572 (__ComObject_t2735933417 * __this, Type_t * ___t0, bool ___throwException1, const RuntimeMethod* method);
// System.IntPtr System.__ComObject::GetInterface(System.Type,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR intptr_t __ComObject_GetInterface_m2711829723 (__ComObject_t2735933417 * __this, Type_t * ___t0, bool ___throwException1, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.InvalidComObjectException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void InvalidComObjectException__ctor_m4034112928 (InvalidComObjectException_t3939298412 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.IntPtr System.__ComObject::GetInterface(System.Type)
extern "C" IL2CPP_METHOD_ATTR intptr_t __ComObject_GetInterface_m3942153942 (__ComObject_t2735933417 * __this, Type_t * ___t0, const RuntimeMethod* method);
// System.Void System.Guid::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Guid__ctor_m2423264394 (Guid_t * __this, String_t* ___g0, const RuntimeMethod* method);
// System.IntPtr System.__ComObject::get_IUnknown()
extern "C" IL2CPP_METHOD_ATTR intptr_t __ComObject_get_IUnknown_m3992083790 (__ComObject_t2735933417 * __this, const RuntimeMethod* method);
// System.Int32 System.IntPtr::ToInt32()
extern "C" IL2CPP_METHOD_ATTR int32_t IntPtr_ToInt32_m2978512204 (intptr_t* __this, const RuntimeMethod* method);
// System.Void System.__DTString::.ctor(System.String,System.Globalization.DateTimeFormatInfo)
extern "C" IL2CPP_METHOD_ATTR void __DTString__ctor_m4216323856 (__DTString_t2014593278 * __this, String_t* ___str0, DateTimeFormatInfo_t2405853701 * ___dtfi1, const RuntimeMethod* method);
// System.Void System.__DTString::.ctor(System.String,System.Globalization.DateTimeFormatInfo,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void __DTString__ctor_m2897552437 (__DTString_t2014593278 * __this, String_t* ___str0, DateTimeFormatInfo_t2405853701 * ___dtfi1, bool ___checkDigitToken2, const RuntimeMethod* method);
// System.Globalization.CompareInfo System.Globalization.DateTimeFormatInfo::get_CompareInfo()
extern "C" IL2CPP_METHOD_ATTR CompareInfo_t1092934962 * DateTimeFormatInfo_get_CompareInfo_m2732307212 (DateTimeFormatInfo_t2405853701 * __this, const RuntimeMethod* method);
// System.Globalization.DateTimeFormatFlags System.Globalization.DateTimeFormatInfo::get_FormatFlags()
extern "C" IL2CPP_METHOD_ATTR int32_t DateTimeFormatInfo_get_FormatFlags_m1385434814 (DateTimeFormatInfo_t2405853701 * __this, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Threading.Thread::get_CurrentCulture()
extern "C" IL2CPP_METHOD_ATTR CultureInfo_t4157843068 * Thread_get_CurrentCulture_m349116646 (Thread_t2300836069 * __this, const RuntimeMethod* method);
// System.Globalization.CompareInfo System.__DTString::get_CompareInfo()
extern "C" IL2CPP_METHOD_ATTR CompareInfo_t1092934962 * __DTString_get_CompareInfo_m3716528085 (__DTString_t2014593278 * __this, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m2986988803 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean System.__DTString::GetNext()
extern "C" IL2CPP_METHOD_ATTR bool __DTString_GetNext_m3216272439 (__DTString_t2014593278 * __this, const RuntimeMethod* method);
// System.Boolean System.__DTString::AtEnd()
extern "C" IL2CPP_METHOD_ATTR bool __DTString_AtEnd_m4056853577 (__DTString_t2014593278 * __this, const RuntimeMethod* method);
// System.Boolean System.__DTString::Advance(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool __DTString_Advance_m3393158789 (__DTString_t2014593278 * __this, int32_t ___count0, const RuntimeMethod* method);
// System.Boolean System.DateTimeParse::IsDigit(System.Char)
extern "C" IL2CPP_METHOD_ATTR bool DateTimeParse_IsDigit_m3727153098 (RuntimeObject * __this /* static, unused */, Il2CppChar ___ch0, const RuntimeMethod* method);
// System.Boolean System.Globalization.DateTimeFormatInfo::Tokenize(System.TokenType,System.TokenType&,System.Int32&,System.__DTString&)
extern "C" IL2CPP_METHOD_ATTR bool DateTimeFormatInfo_Tokenize_m4098328262 (DateTimeFormatInfo_t2405853701 * __this, int32_t ___TokenMask0, int32_t* ___tokenType1, int32_t* ___tokenValue2, __DTString_t2014593278 * ___str3, const RuntimeMethod* method);
// System.Boolean System.Char::IsWhiteSpace(System.Char)
extern "C" IL2CPP_METHOD_ATTR bool Char_IsWhiteSpace_m2148390798 (RuntimeObject * __this /* static, unused */, Il2CppChar ___c0, const RuntimeMethod* method);
// System.Void System.__DTString::GetRegularToken(System.TokenType&,System.Int32&,System.Globalization.DateTimeFormatInfo)
extern "C" IL2CPP_METHOD_ATTR void __DTString_GetRegularToken_m3127405658 (__DTString_t2014593278 * __this, int32_t* ___tokenType0, int32_t* ___tokenValue1, DateTimeFormatInfo_t2405853701 * ___dtfi2, const RuntimeMethod* method);
// System.Boolean System.__DTString::SkipWhiteSpaceCurrent()
extern "C" IL2CPP_METHOD_ATTR bool __DTString_SkipWhiteSpaceCurrent_m2113872575 (__DTString_t2014593278 * __this, const RuntimeMethod* method);
// System.TokenType System.__DTString::GetSeparatorToken(System.Globalization.DateTimeFormatInfo,System.Int32&,System.Char&)
extern "C" IL2CPP_METHOD_ATTR int32_t __DTString_GetSeparatorToken_m2062126902 (__DTString_t2014593278 * __this, DateTimeFormatInfo_t2405853701 * ___dtfi0, int32_t* ___indexBeforeSeparator1, Il2CppChar* ___charBeforeSeparator2, const RuntimeMethod* method);
// System.Boolean System.__DTString::MatchSpecifiedWord(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool __DTString_MatchSpecifiedWord_m3597025336 (__DTString_t2014593278 * __this, String_t* ___target0, int32_t ___endIndex1, const RuntimeMethod* method);
// System.Boolean System.__DTString::MatchSpecifiedWord(System.String)
extern "C" IL2CPP_METHOD_ATTR bool __DTString_MatchSpecifiedWord_m2455863005 (__DTString_t2014593278 * __this, String_t* ___target0, const RuntimeMethod* method);
// System.Int32 System.String::IndexOfAny(System.Char[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t String_IndexOfAny_m2323029521 (String_t* __this, CharU5BU5D_t3528271667* ___anyOf0, int32_t ___startIndex1, const RuntimeMethod* method);
// System.Boolean System.Char::IsLetter(System.Char)
extern "C" IL2CPP_METHOD_ATTR bool Char_IsLetter_m3996985877 (RuntimeObject * __this /* static, unused */, Il2CppChar ___c0, const RuntimeMethod* method);
// System.Boolean System.__DTString::MatchSpecifiedWords(System.String,System.Boolean,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR bool __DTString_MatchSpecifiedWords_m1748097800 (__DTString_t2014593278 * __this, String_t* ___target0, bool ___checkWordBoundary1, int32_t* ___matchLength2, const RuntimeMethod* method);
// System.Boolean System.__DTString::Match(System.String)
extern "C" IL2CPP_METHOD_ATTR bool __DTString_Match_m1370723662 (__DTString_t2014593278 * __this, String_t* ___str0, const RuntimeMethod* method);
// System.Boolean System.__DTString::Match(System.Char)
extern "C" IL2CPP_METHOD_ATTR bool __DTString_Match_m1638998693 (__DTString_t2014593278 * __this, Il2CppChar ___ch0, const RuntimeMethod* method);
// System.Int32 System.__DTString::MatchLongestWords(System.String[],System.Int32&)
extern "C" IL2CPP_METHOD_ATTR int32_t __DTString_MatchLongestWords_m3768057568 (__DTString_t2014593278 * __this, StringU5BU5D_t1281789340* ___words0, int32_t* ___maxMatchStrLen1, const RuntimeMethod* method);
// System.Int32 System.__DTString::GetRepeatCount()
extern "C" IL2CPP_METHOD_ATTR int32_t __DTString_GetRepeatCount_m2245750089 (__DTString_t2014593278 * __this, const RuntimeMethod* method);
// System.Boolean System.__DTString::GetNextDigit()
extern "C" IL2CPP_METHOD_ATTR bool __DTString_GetNextDigit_m3564891386 (__DTString_t2014593278 * __this, const RuntimeMethod* method);
// System.Char System.__DTString::GetChar()
extern "C" IL2CPP_METHOD_ATTR Il2CppChar __DTString_GetChar_m1238696822 (__DTString_t2014593278 * __this, const RuntimeMethod* method);
// System.Int32 System.__DTString::GetDigit()
extern "C" IL2CPP_METHOD_ATTR int32_t __DTString_GetDigit_m3018404824 (__DTString_t2014593278 * __this, const RuntimeMethod* method);
// System.Void System.__DTString::SkipWhiteSpaces()
extern "C" IL2CPP_METHOD_ATTR void __DTString_SkipWhiteSpaces_m2053058269 (__DTString_t2014593278 * __this, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Substring_m1610150815 (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.Void System.__DTString::TrimTail()
extern "C" IL2CPP_METHOD_ATTR void __DTString_TrimTail_m653960243 (__DTString_t2014593278 * __this, const RuntimeMethod* method);
// System.String System.String::Remove(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Remove_m562998446 (String_t* __this, int32_t ___startIndex0, int32_t ___count1, const RuntimeMethod* method);
// System.Void System.__DTString::RemoveTrailingInQuoteSpaces()
extern "C" IL2CPP_METHOD_ATTR void __DTString_RemoveTrailingInQuoteSpaces_m4285619600 (__DTString_t2014593278 * __this, const RuntimeMethod* method);
// System.Void System.__DTString::RemoveLeadingInQuoteSpaces()
extern "C" IL2CPP_METHOD_ATTR void __DTString_RemoveLeadingInQuoteSpaces_m695439123 (__DTString_t2014593278 * __this, const RuntimeMethod* method);
// System.DTSubString System.__DTString::GetSubString()
extern "C" IL2CPP_METHOD_ATTR DTSubString_t967826655  __DTString_GetSubString_m2408595494 (__DTString_t2014593278 * __this, const RuntimeMethod* method);
// System.Void System.__DTString::ConsumeSubString(System.DTSubString)
extern "C" IL2CPP_METHOD_ATTR void __DTString_ConsumeSubString_m4032894792 (__DTString_t2014593278 * __this, DTSubString_t967826655  ___sub0, const RuntimeMethod* method);
// System.Void System.Reflection.InvalidFilterCriteriaException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void InvalidFilterCriteriaException__ctor_m948508901 (InvalidFilterCriteriaException_t2427731508 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.String System.String::Trim()
extern "C" IL2CPP_METHOD_ATTR String_t* String_Trim_m923598732 (String_t* __this, const RuntimeMethod* method);
// System.Int32 System.String::LastIndexOf(System.Char)
extern "C" IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m3451222878 (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Substring_m2848979100 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method);
// System.Boolean System.String::StartsWith(System.String,System.StringComparison)
extern "C" IL2CPP_METHOD_ATTR bool String_StartsWith_m2640722675 (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_Equals_m2270643605 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Int32 System.String::Compare(System.String,System.Int32,System.String,System.Int32,System.Int32,System.StringComparison)
extern "C" IL2CPP_METHOD_ATTR int32_t String_Compare_m1966407346 (RuntimeObject * __this /* static, unused */, String_t* ___strA0, int32_t ___indexA1, String_t* ___strB2, int32_t ___indexB3, int32_t ___length4, int32_t ___comparisonType5, const RuntimeMethod* method);
// System.Int32 System.String::Compare(System.String,System.String,System.StringComparison)
extern "C" IL2CPP_METHOD_ATTR int32_t String_Compare_m3203413707 (RuntimeObject * __this /* static, unused */, String_t* ___strA0, String_t* ___strB1, int32_t ___comparisonType2, const RuntimeMethod* method);
// System.Void System.__Filters::.ctor()
extern "C" IL2CPP_METHOD_ATTR void __Filters__ctor_m4259786029 (__Filters_t550753867 * __this, const RuntimeMethod* method);
// System.Void System.__Il2CppComObject::Finalize()
extern "C" IL2CPP_METHOD_ATTR void __Il2CppComObject_Finalize_m2923638372 (Il2CppComObject * __this, const RuntimeMethod* method);
// System.String System.Object::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Object_ToString_m1740002499 (RuntimeObject * __this, const RuntimeMethod* method);
// System.IntPtr XamMac.CoreFoundation.CFHelpers::CFStringGetLength(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t CFHelpers_CFStringGetLength_m1003035781 (RuntimeObject * __this /* static, unused */, intptr_t ___handle0, const RuntimeMethod* method);
// System.Int32 System.IntPtr::op_Explicit(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR int32_t IntPtr_op_Explicit_m4220076518 (RuntimeObject * __this /* static, unused */, intptr_t ___value0, const RuntimeMethod* method);
// System.IntPtr XamMac.CoreFoundation.CFHelpers::CFStringGetCharactersPtr(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t CFHelpers_CFStringGetCharactersPtr_m1790634856 (RuntimeObject * __this /* static, unused */, intptr_t ___handle0, const RuntimeMethod* method);
// System.Void XamMac.CoreFoundation.CFHelpers/CFRange::.ctor(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void CFRange__ctor_m1242434219 (CFRange_t1233619878 * __this, int32_t ___loc0, int32_t ___len1, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocCoTaskMem(System.Int32)
extern "C" IL2CPP_METHOD_ATTR intptr_t Marshal_AllocCoTaskMem_m1327939722 (RuntimeObject * __this /* static, unused */, int32_t ___cb0, const RuntimeMethod* method);
// System.IntPtr XamMac.CoreFoundation.CFHelpers::CFStringGetCharacters(System.IntPtr,XamMac.CoreFoundation.CFHelpers/CFRange,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t CFHelpers_CFStringGetCharacters_m1195295518 (RuntimeObject * __this /* static, unused */, intptr_t ___handle0, CFRange_t1233619878  ___range1, intptr_t ___buffer2, const RuntimeMethod* method);
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m2520637223 (RuntimeObject * __this /* static, unused */, intptr_t ___value0, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char*,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_CreateString_m3400201881 (String_t* __this, Il2CppChar* ___value0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::FreeCoTaskMem(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Marshal_FreeCoTaskMem_m3753155979 (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, const RuntimeMethod* method);
// System.IntPtr XamMac.CoreFoundation.CFHelpers::CFDataGetLength(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t CFHelpers_CFDataGetLength_m3730685275 (RuntimeObject * __this /* static, unused */, intptr_t ___handle0, const RuntimeMethod* method);
// System.IntPtr XamMac.CoreFoundation.CFHelpers::CFDataGetBytePtr(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t CFHelpers_CFDataGetBytePtr_m1648767664 (RuntimeObject * __this /* static, unused */, intptr_t ___handle0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Marshal_Copy_m1222846562 (RuntimeObject * __this /* static, unused */, intptr_t ___source0, ByteU5BU5D_t4116647657* ___destination1, int32_t ___startIndex2, int32_t ___length3, const RuntimeMethod* method);
// System.IntPtr System.IntPtr::op_Explicit(System.Void*)
extern "C" IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_m536245531 (RuntimeObject * __this /* static, unused */, void* ___value0, const RuntimeMethod* method);
// System.Void System.IntPtr::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void IntPtr__ctor_m987082960 (intptr_t* __this, int32_t ___value0, const RuntimeMethod* method);
// System.IntPtr XamMac.CoreFoundation.CFHelpers::CFDataCreate(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t CFHelpers_CFDataCreate_m3875740957 (RuntimeObject * __this /* static, unused */, intptr_t ___allocator0, intptr_t ___bytes1, intptr_t ___length2, const RuntimeMethod* method);
// System.IntPtr XamMac.CoreFoundation.CFHelpers::SecCertificateCreateWithData(System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t CFHelpers_SecCertificateCreateWithData_m1682200427 (RuntimeObject * __this /* static, unused */, intptr_t ___allocator0, intptr_t ___cfData1, const RuntimeMethod* method);
// System.Void XamMac.CoreFoundation.CFHelpers::CFRelease(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void CFHelpers_CFRelease_m3206817372 (RuntimeObject * __this /* static, unused */, intptr_t ___obj0, const RuntimeMethod* method);
// System.Void XamMac.CoreFoundation.CFHelpers/CFRange::.ctor(System.Int64,System.Int64)
extern "C" IL2CPP_METHOD_ATTR void CFRange__ctor_m3401693388 (CFRange_t1233619878 * __this, int64_t ___l0, int64_t ___len1, const RuntimeMethod* method);
// System.IntPtr System.IntPtr::op_Explicit(System.Int64)
extern "C" IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_m1593085246 (RuntimeObject * __this /* static, unused */, int64_t ___value0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 System.UInt32::CompareTo(System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t UInt32_CompareTo_m362578384 (uint32_t* __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_CompareTo_m362578384_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_1, UInt32_t2560061978_il2cpp_TypeInfo_var)))
		{
			goto IL_0024;
		}
	}
	{
		RuntimeObject * L_2 = ___value0;
		V_0 = ((*(uint32_t*)((uint32_t*)UnBox(L_2, UInt32_t2560061978_il2cpp_TypeInfo_var))));
		uint32_t L_3 = V_0;
		if ((!(((uint32_t)(*((uint32_t*)__this))) < ((uint32_t)L_3))))
		{
			goto IL_001b;
		}
	}
	{
		return (-1);
	}

IL_001b:
	{
		uint32_t L_4 = V_0;
		if ((!(((uint32_t)(*((uint32_t*)__this))) > ((uint32_t)L_4))))
		{
			goto IL_0022;
		}
	}
	{
		return 1;
	}

IL_0022:
	{
		return 0;
	}

IL_0024:
	{
		String_t* L_5 = Environment_GetResourceString_m2063689938(NULL /*static, unused*/, _stringLiteral1622425596, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_6 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_6, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, UInt32_CompareTo_m362578384_RuntimeMethod_var);
	}
}
extern "C"  int32_t UInt32_CompareTo_m362578384_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_CompareTo_m362578384(_thisAdjusted, ___value0, method);
}
// System.Int32 System.UInt32::CompareTo(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR int32_t UInt32_CompareTo_m2218823230 (uint32_t* __this, uint32_t ___value0, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___value0;
		if ((!(((uint32_t)(*((uint32_t*)__this))) < ((uint32_t)L_0))))
		{
			goto IL_0007;
		}
	}
	{
		return (-1);
	}

IL_0007:
	{
		uint32_t L_1 = ___value0;
		if ((!(((uint32_t)(*((uint32_t*)__this))) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		return 1;
	}

IL_000e:
	{
		return 0;
	}
}
extern "C"  int32_t UInt32_CompareTo_m2218823230_AdjustorThunk (RuntimeObject * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_CompareTo_m2218823230(_thisAdjusted, ___value0, method);
}
// System.Boolean System.UInt32::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool UInt32_Equals_m351935437 (uint32_t* __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_Equals_m351935437_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, UInt32_t2560061978_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject * L_1 = ___obj0;
		return (bool)((((int32_t)(*((uint32_t*)__this))) == ((int32_t)((*(uint32_t*)((uint32_t*)UnBox(L_1, UInt32_t2560061978_il2cpp_TypeInfo_var))))))? 1 : 0);
	}
}
extern "C"  bool UInt32_Equals_m351935437_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_Equals_m351935437(_thisAdjusted, ___obj0, method);
}
// System.Boolean System.UInt32::Equals(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR bool UInt32_Equals_m4250336581 (uint32_t* __this, uint32_t ___obj0, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___obj0;
		return (bool)((((int32_t)(*((uint32_t*)__this))) == ((int32_t)L_0))? 1 : 0);
	}
}
extern "C"  bool UInt32_Equals_m4250336581_AdjustorThunk (RuntimeObject * __this, uint32_t ___obj0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_Equals_m4250336581(_thisAdjusted, ___obj0, method);
}
// System.Int32 System.UInt32::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t UInt32_GetHashCode_m3722548385 (uint32_t* __this, const RuntimeMethod* method)
{
	{
		return (*((uint32_t*)__this));
	}
}
extern "C"  int32_t UInt32_GetHashCode_m3722548385_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_GetHashCode_m3722548385(_thisAdjusted, method);
}
// System.String System.UInt32::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* UInt32_ToString_m2574561716 (uint32_t* __this, const RuntimeMethod* method)
{
	{
		NumberFormatInfo_t435877138 * L_0 = NumberFormatInfo_get_CurrentInfo_m2605582008(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = Number_FormatUInt32_m2486347252(NULL /*static, unused*/, (*((uint32_t*)__this)), (String_t*)NULL, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  String_t* UInt32_ToString_m2574561716_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_ToString_m2574561716(_thisAdjusted, method);
}
// System.String System.UInt32::ToString(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* UInt32_ToString_m4293943134 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___provider0;
		NumberFormatInfo_t435877138 * L_1 = NumberFormatInfo_GetInstance_m2833078205(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		String_t* L_2 = Number_FormatUInt32_m2486347252(NULL /*static, unused*/, (*((uint32_t*)__this)), (String_t*)NULL, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
extern "C"  String_t* UInt32_ToString_m4293943134_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_ToString_m4293943134(_thisAdjusted, ___provider0, method);
}
// System.String System.UInt32::ToString(System.String,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* UInt32_ToString_m2420423038 (uint32_t* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___format0;
		RuntimeObject* L_1 = ___provider1;
		NumberFormatInfo_t435877138 * L_2 = NumberFormatInfo_GetInstance_m2833078205(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		String_t* L_3 = Number_FormatUInt32_m2486347252(NULL /*static, unused*/, (*((uint32_t*)__this)), L_0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
extern "C"  String_t* UInt32_ToString_m2420423038_AdjustorThunk (RuntimeObject * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_ToString_m2420423038(_thisAdjusted, ___format0, ___provider1, method);
}
// System.UInt32 System.UInt32::Parse(System.String)
extern "C" IL2CPP_METHOD_ATTR uint32_t UInt32_Parse_m3270868885 (RuntimeObject * __this /* static, unused */, String_t* ___s0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___s0;
		NumberFormatInfo_t435877138 * L_1 = NumberFormatInfo_get_CurrentInfo_m2605582008(NULL /*static, unused*/, /*hidden argument*/NULL);
		uint32_t L_2 = Number_ParseUInt32_m4237573864(NULL /*static, unused*/, L_0, 7, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.UInt32 System.UInt32::Parse(System.String,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR uint32_t UInt32_Parse_m1373460382 (RuntimeObject * __this /* static, unused */, String_t* ___s0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___s0;
		RuntimeObject* L_1 = ___provider1;
		NumberFormatInfo_t435877138 * L_2 = NumberFormatInfo_GetInstance_m2833078205(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		uint32_t L_3 = Number_ParseUInt32_m4237573864(NULL /*static, unused*/, L_0, 7, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.UInt32 System.UInt32::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR uint32_t UInt32_Parse_m3755665066 (RuntimeObject * __this /* static, unused */, String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___style1;
		NumberFormatInfo_ValidateParseStyleInteger_m957858295(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___s0;
		int32_t L_2 = ___style1;
		RuntimeObject* L_3 = ___provider2;
		NumberFormatInfo_t435877138 * L_4 = NumberFormatInfo_GetInstance_m2833078205(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		uint32_t L_5 = Number_ParseUInt32_m4237573864(NULL /*static, unused*/, L_1, L_2, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Boolean System.UInt32::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR bool UInt32_TryParse_m535404612 (RuntimeObject * __this /* static, unused */, String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, uint32_t* ___result3, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___style1;
		NumberFormatInfo_ValidateParseStyleInteger_m957858295(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___s0;
		int32_t L_2 = ___style1;
		RuntimeObject* L_3 = ___provider2;
		NumberFormatInfo_t435877138 * L_4 = NumberFormatInfo_GetInstance_m2833078205(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		uint32_t* L_5 = ___result3;
		bool L_6 = Number_TryParseUInt32_m2802499845(NULL /*static, unused*/, L_1, L_2, L_4, (uint32_t*)L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.TypeCode System.UInt32::GetTypeCode()
extern "C" IL2CPP_METHOD_ATTR int32_t UInt32_GetTypeCode_m88917904 (uint32_t* __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(((int32_t)10));
	}
}
extern "C"  int32_t UInt32_GetTypeCode_m88917904_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_GetTypeCode_m88917904(_thisAdjusted, method);
}
// System.Boolean System.UInt32::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR bool UInt32_System_IConvertible_ToBoolean_m1763673183 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToBoolean_m1763673183_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		bool L_0 = Convert_ToBoolean_m2807110707(NULL /*static, unused*/, (*((uint32_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  bool UInt32_System_IConvertible_ToBoolean_m1763673183_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_System_IConvertible_ToBoolean_m1763673183(_thisAdjusted, ___provider0, method);
}
// System.Char System.UInt32::System.IConvertible.ToChar(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar UInt32_System_IConvertible_ToChar_m1873050533 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToChar_m1873050533_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		Il2CppChar L_0 = Convert_ToChar_m2796006345(NULL /*static, unused*/, (*((uint32_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  Il2CppChar UInt32_System_IConvertible_ToChar_m1873050533_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_System_IConvertible_ToChar_m1873050533(_thisAdjusted, ___provider0, method);
}
// System.SByte System.UInt32::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR int8_t UInt32_System_IConvertible_ToSByte_m1061556466 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToSByte_m1061556466_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int8_t L_0 = Convert_ToSByte_m2486156346(NULL /*static, unused*/, (*((uint32_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  int8_t UInt32_System_IConvertible_ToSByte_m1061556466_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_System_IConvertible_ToSByte_m1061556466(_thisAdjusted, ___provider0, method);
}
// System.Byte System.UInt32::System.IConvertible.ToByte(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR uint8_t UInt32_System_IConvertible_ToByte_m4072781199 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToByte_m4072781199_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		uint8_t L_0 = Convert_ToByte_m1993550870(NULL /*static, unused*/, (*((uint32_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  uint8_t UInt32_System_IConvertible_ToByte_m4072781199_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_System_IConvertible_ToByte_m4072781199(_thisAdjusted, ___provider0, method);
}
// System.Int16 System.UInt32::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR int16_t UInt32_System_IConvertible_ToInt16_m1659441601 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToInt16_m1659441601_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int16_t L_0 = Convert_ToInt16_m571189957(NULL /*static, unused*/, (*((uint32_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  int16_t UInt32_System_IConvertible_ToInt16_m1659441601_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_System_IConvertible_ToInt16_m1659441601(_thisAdjusted, ___provider0, method);
}
// System.UInt16 System.UInt32::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR uint16_t UInt32_System_IConvertible_ToUInt16_m3125657960 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToUInt16_m3125657960_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		uint16_t L_0 = Convert_ToUInt16_m1480956416(NULL /*static, unused*/, (*((uint32_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  uint16_t UInt32_System_IConvertible_ToUInt16_m3125657960_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_System_IConvertible_ToUInt16_m3125657960(_thisAdjusted, ___provider0, method);
}
// System.Int32 System.UInt32::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR int32_t UInt32_System_IConvertible_ToInt32_m220754611 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToInt32_m220754611_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int32_t L_0 = Convert_ToInt32_m3956995719(NULL /*static, unused*/, (*((uint32_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  int32_t UInt32_System_IConvertible_ToInt32_m220754611_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_System_IConvertible_ToInt32_m220754611(_thisAdjusted, ___provider0, method);
}
// System.UInt32 System.UInt32::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR uint32_t UInt32_System_IConvertible_ToUInt32_m1744564280 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	{
		return (*((uint32_t*)__this));
	}
}
extern "C"  uint32_t UInt32_System_IConvertible_ToUInt32_m1744564280_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_System_IConvertible_ToUInt32_m1744564280(_thisAdjusted, ___provider0, method);
}
// System.Int64 System.UInt32::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR int64_t UInt32_System_IConvertible_ToInt64_m2261037378 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToInt64_m2261037378_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int64_t L_0 = Convert_ToInt64_m3392013556(NULL /*static, unused*/, (*((uint32_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  int64_t UInt32_System_IConvertible_ToInt64_m2261037378_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_System_IConvertible_ToInt64_m2261037378(_thisAdjusted, ___provider0, method);
}
// System.UInt64 System.UInt32::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR uint64_t UInt32_System_IConvertible_ToUInt64_m1094958903 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToUInt64_m1094958903_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		uint64_t L_0 = Convert_ToUInt64_m1745056470(NULL /*static, unused*/, (*((uint32_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  uint64_t UInt32_System_IConvertible_ToUInt64_m1094958903_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_System_IConvertible_ToUInt64_m1094958903(_thisAdjusted, ___provider0, method);
}
// System.Single System.UInt32::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR float UInt32_System_IConvertible_ToSingle_m1272823424 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToSingle_m1272823424_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		float L_0 = Convert_ToSingle_m3983149863(NULL /*static, unused*/, (*((uint32_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  float UInt32_System_IConvertible_ToSingle_m1272823424_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_System_IConvertible_ToSingle_m1272823424(_thisAdjusted, ___provider0, method);
}
// System.Double System.UInt32::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR double UInt32_System_IConvertible_ToDouble_m940039456 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToDouble_m940039456_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		double L_0 = Convert_ToDouble_m2222536920(NULL /*static, unused*/, (*((uint32_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  double UInt32_System_IConvertible_ToDouble_m940039456_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_System_IConvertible_ToDouble_m940039456(_thisAdjusted, ___provider0, method);
}
// System.Decimal System.UInt32::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR Decimal_t2948259380  UInt32_System_IConvertible_ToDecimal_m675004071 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToDecimal_m675004071_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		Decimal_t2948259380  L_0 = Convert_ToDecimal_m889385228(NULL /*static, unused*/, (*((uint32_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  Decimal_t2948259380  UInt32_System_IConvertible_ToDecimal_m675004071_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_System_IConvertible_ToDecimal_m675004071(_thisAdjusted, ___provider0, method);
}
// System.DateTime System.UInt32::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  UInt32_System_IConvertible_ToDateTime_m2767723441 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToDateTime_m2767723441_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral2789887848);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral2789887848);
		ObjectU5BU5D_t2843939325* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral3798051137);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral3798051137);
		String_t* L_3 = Environment_GetResourceString_m479507158(NULL /*static, unused*/, _stringLiteral4287968739, L_2, /*hidden argument*/NULL);
		InvalidCastException_t3927145244 * L_4 = (InvalidCastException_t3927145244 *)il2cpp_codegen_object_new(InvalidCastException_t3927145244_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m318645277(L_4, L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, UInt32_System_IConvertible_ToDateTime_m2767723441_RuntimeMethod_var);
	}
}
extern "C"  DateTime_t3738529785  UInt32_System_IConvertible_ToDateTime_m2767723441_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_System_IConvertible_ToDateTime_m2767723441(_thisAdjusted, ___provider0, method);
}
// System.Object System.UInt32::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * UInt32_System_IConvertible_ToType_m922356584 (uint32_t* __this, Type_t * ___type0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToType_m922356584_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = ((uint32_t)(*((uint32_t*)__this)));
		RuntimeObject * L_1 = Box(UInt32_t2560061978_il2cpp_TypeInfo_var, &L_0);
		Type_t * L_2 = ___type0;
		RuntimeObject* L_3 = ___provider1;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		RuntimeObject * L_4 = Convert_DefaultToType_m1860037989(NULL /*static, unused*/, (RuntimeObject*)L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
extern "C"  RuntimeObject * UInt32_System_IConvertible_ToType_m922356584_AdjustorThunk (RuntimeObject * __this, Type_t * ___type0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_System_IConvertible_ToType_m922356584(_thisAdjusted, ___type0, ___provider1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 System.UInt64::CompareTo(System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t UInt64_CompareTo_m3619843473 (uint64_t* __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_CompareTo_m3619843473_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_1, UInt64_t4134040092_il2cpp_TypeInfo_var)))
		{
			goto IL_0024;
		}
	}
	{
		RuntimeObject * L_2 = ___value0;
		V_0 = ((*(uint64_t*)((uint64_t*)UnBox(L_2, UInt64_t4134040092_il2cpp_TypeInfo_var))));
		uint64_t L_3 = V_0;
		if ((!(((uint64_t)(*((int64_t*)__this))) < ((uint64_t)L_3))))
		{
			goto IL_001b;
		}
	}
	{
		return (-1);
	}

IL_001b:
	{
		uint64_t L_4 = V_0;
		if ((!(((uint64_t)(*((int64_t*)__this))) > ((uint64_t)L_4))))
		{
			goto IL_0022;
		}
	}
	{
		return 1;
	}

IL_0022:
	{
		return 0;
	}

IL_0024:
	{
		String_t* L_5 = Environment_GetResourceString_m2063689938(NULL /*static, unused*/, _stringLiteral2814066682, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_6 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_6, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, UInt64_CompareTo_m3619843473_RuntimeMethod_var);
	}
}
extern "C"  int32_t UInt64_CompareTo_m3619843473_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_CompareTo_m3619843473(_thisAdjusted, ___value0, method);
}
// System.Int32 System.UInt64::CompareTo(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR int32_t UInt64_CompareTo_m1614517204 (uint64_t* __this, uint64_t ___value0, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = ___value0;
		if ((!(((uint64_t)(*((int64_t*)__this))) < ((uint64_t)L_0))))
		{
			goto IL_0007;
		}
	}
	{
		return (-1);
	}

IL_0007:
	{
		uint64_t L_1 = ___value0;
		if ((!(((uint64_t)(*((int64_t*)__this))) > ((uint64_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		return 1;
	}

IL_000e:
	{
		return 0;
	}
}
extern "C"  int32_t UInt64_CompareTo_m1614517204_AdjustorThunk (RuntimeObject * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_CompareTo_m1614517204(_thisAdjusted, ___value0, method);
}
// System.Boolean System.UInt64::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool UInt64_Equals_m1879425698 (uint64_t* __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_Equals_m1879425698_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, UInt64_t4134040092_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject * L_1 = ___obj0;
		return (bool)((((int64_t)(*((int64_t*)__this))) == ((int64_t)((*(uint64_t*)((uint64_t*)UnBox(L_1, UInt64_t4134040092_il2cpp_TypeInfo_var))))))? 1 : 0);
	}
}
extern "C"  bool UInt64_Equals_m1879425698_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_Equals_m1879425698(_thisAdjusted, ___obj0, method);
}
// System.Boolean System.UInt64::Equals(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR bool UInt64_Equals_m367573732 (uint64_t* __this, uint64_t ___obj0, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = ___obj0;
		return (bool)((((int64_t)(*((int64_t*)__this))) == ((int64_t)L_0))? 1 : 0);
	}
}
extern "C"  bool UInt64_Equals_m367573732_AdjustorThunk (RuntimeObject * __this, uint64_t ___obj0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_Equals_m367573732(_thisAdjusted, ___obj0, method);
}
// System.Int32 System.UInt64::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t UInt64_GetHashCode_m4209760355 (uint64_t* __this, const RuntimeMethod* method)
{
	{
		return ((int32_t)((int32_t)(((int32_t)((int32_t)(*((int64_t*)__this)))))^(int32_t)(((int32_t)((int32_t)((int64_t)((uint64_t)(*((int64_t*)__this))>>((int32_t)32))))))));
	}
}
extern "C"  int32_t UInt64_GetHashCode_m4209760355_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_GetHashCode_m4209760355(_thisAdjusted, method);
}
// System.String System.UInt64::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* UInt64_ToString_m1529093114 (uint64_t* __this, const RuntimeMethod* method)
{
	{
		NumberFormatInfo_t435877138 * L_0 = NumberFormatInfo_get_CurrentInfo_m2605582008(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = Number_FormatUInt64_m792080283(NULL /*static, unused*/, (*((int64_t*)__this)), (String_t*)NULL, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  String_t* UInt64_ToString_m1529093114_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_ToString_m1529093114(_thisAdjusted, method);
}
// System.String System.UInt64::ToString(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* UInt64_ToString_m2623377370 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___provider0;
		NumberFormatInfo_t435877138 * L_1 = NumberFormatInfo_GetInstance_m2833078205(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		String_t* L_2 = Number_FormatUInt64_m792080283(NULL /*static, unused*/, (*((int64_t*)__this)), (String_t*)NULL, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
extern "C"  String_t* UInt64_ToString_m2623377370_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_ToString_m2623377370(_thisAdjusted, ___provider0, method);
}
// System.String System.UInt64::ToString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* UInt64_ToString_m2177233542 (uint64_t* __this, String_t* ___format0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___format0;
		NumberFormatInfo_t435877138 * L_1 = NumberFormatInfo_get_CurrentInfo_m2605582008(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_2 = Number_FormatUInt64_m792080283(NULL /*static, unused*/, (*((int64_t*)__this)), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
extern "C"  String_t* UInt64_ToString_m2177233542_AdjustorThunk (RuntimeObject * __this, String_t* ___format0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_ToString_m2177233542(_thisAdjusted, ___format0, method);
}
// System.String System.UInt64::ToString(System.String,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* UInt64_ToString_m1695188334 (uint64_t* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___format0;
		RuntimeObject* L_1 = ___provider1;
		NumberFormatInfo_t435877138 * L_2 = NumberFormatInfo_GetInstance_m2833078205(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		String_t* L_3 = Number_FormatUInt64_m792080283(NULL /*static, unused*/, (*((int64_t*)__this)), L_0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
extern "C"  String_t* UInt64_ToString_m1695188334_AdjustorThunk (RuntimeObject * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_ToString_m1695188334(_thisAdjusted, ___format0, ___provider1, method);
}
// System.UInt64 System.UInt64::Parse(System.String,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR uint64_t UInt64_Parse_m819899889 (RuntimeObject * __this /* static, unused */, String_t* ___s0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___s0;
		RuntimeObject* L_1 = ___provider1;
		NumberFormatInfo_t435877138 * L_2 = NumberFormatInfo_GetInstance_m2833078205(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		uint64_t L_3 = Number_ParseUInt64_m2694014565(NULL /*static, unused*/, L_0, 7, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.UInt64 System.UInt64::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR uint64_t UInt64_Parse_m1485858293 (RuntimeObject * __this /* static, unused */, String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___style1;
		NumberFormatInfo_ValidateParseStyleInteger_m957858295(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___s0;
		int32_t L_2 = ___style1;
		RuntimeObject* L_3 = ___provider2;
		NumberFormatInfo_t435877138 * L_4 = NumberFormatInfo_GetInstance_m2833078205(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		uint64_t L_5 = Number_ParseUInt64_m2694014565(NULL /*static, unused*/, L_1, L_2, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Boolean System.UInt64::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.UInt64&)
extern "C" IL2CPP_METHOD_ATTR bool UInt64_TryParse_m3060369906 (RuntimeObject * __this /* static, unused */, String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, uint64_t* ___result3, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___style1;
		NumberFormatInfo_ValidateParseStyleInteger_m957858295(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___s0;
		int32_t L_2 = ___style1;
		RuntimeObject* L_3 = ___provider2;
		NumberFormatInfo_t435877138 * L_4 = NumberFormatInfo_GetInstance_m2833078205(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		uint64_t* L_5 = ___result3;
		bool L_6 = Number_TryParseUInt64_m782753458(NULL /*static, unused*/, L_1, L_2, L_4, (uint64_t*)L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.TypeCode System.UInt64::GetTypeCode()
extern "C" IL2CPP_METHOD_ATTR int32_t UInt64_GetTypeCode_m844217172 (uint64_t* __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(((int32_t)12));
	}
}
extern "C"  int32_t UInt64_GetTypeCode_m844217172_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_GetTypeCode_m844217172(_thisAdjusted, method);
}
// System.Boolean System.UInt64::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR bool UInt64_System_IConvertible_ToBoolean_m3071416000 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToBoolean_m3071416000_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		bool L_0 = Convert_ToBoolean_m3613483153(NULL /*static, unused*/, (*((int64_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  bool UInt64_System_IConvertible_ToBoolean_m3071416000_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_System_IConvertible_ToBoolean_m3071416000(_thisAdjusted, ___provider0, method);
}
// System.Char System.UInt64::System.IConvertible.ToChar(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar UInt64_System_IConvertible_ToChar_m2074245892 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToChar_m2074245892_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		Il2CppChar L_0 = Convert_ToChar_m1604365259(NULL /*static, unused*/, (*((int64_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  Il2CppChar UInt64_System_IConvertible_ToChar_m2074245892_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_System_IConvertible_ToChar_m2074245892(_thisAdjusted, ___provider0, method);
}
// System.SByte System.UInt64::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR int8_t UInt64_System_IConvertible_ToSByte_m30962591 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToSByte_m30962591_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int8_t L_0 = Convert_ToSByte_m1679390684(NULL /*static, unused*/, (*((int64_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  int8_t UInt64_System_IConvertible_ToSByte_m30962591_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_System_IConvertible_ToSByte_m30962591(_thisAdjusted, ___provider0, method);
}
// System.Byte System.UInt64::System.IConvertible.ToByte(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR uint8_t UInt64_System_IConvertible_ToByte_m1501504925 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToByte_m1501504925_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		uint8_t L_0 = Convert_ToByte_m3567528984(NULL /*static, unused*/, (*((int64_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  uint8_t UInt64_System_IConvertible_ToByte_m1501504925_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_System_IConvertible_ToByte_m1501504925(_thisAdjusted, ___provider0, method);
}
// System.Int16 System.UInt64::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR int16_t UInt64_System_IConvertible_ToInt16_m3895479143 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToInt16_m3895479143_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int16_t L_0 = Convert_ToInt16_m1733792763(NULL /*static, unused*/, (*((int64_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  int16_t UInt64_System_IConvertible_ToInt16_m3895479143_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_System_IConvertible_ToInt16_m3895479143(_thisAdjusted, ___provider0, method);
}
// System.UInt16 System.UInt64::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR uint16_t UInt64_System_IConvertible_ToUInt16_m4165747038 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToUInt16_m4165747038_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		uint16_t L_0 = Convert_ToUInt16_m2672597498(NULL /*static, unused*/, (*((int64_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  uint16_t UInt64_System_IConvertible_ToUInt16_m4165747038_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_System_IConvertible_ToUInt16_m4165747038(_thisAdjusted, ___provider0, method);
}
// System.Int32 System.UInt64::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR int32_t UInt64_System_IConvertible_ToInt32_m949522652 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToInt32_m949522652_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int32_t L_0 = Convert_ToInt32_m825155517(NULL /*static, unused*/, (*((int64_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  int32_t UInt64_System_IConvertible_ToInt32_m949522652_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_System_IConvertible_ToInt32_m949522652(_thisAdjusted, ___provider0, method);
}
// System.UInt32 System.UInt64::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR uint32_t UInt64_System_IConvertible_ToUInt32_m2784653358 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToUInt32_m2784653358_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		uint32_t L_0 = Convert_ToUInt32_m1767593911(NULL /*static, unused*/, (*((int64_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  uint32_t UInt64_System_IConvertible_ToUInt32_m2784653358_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_System_IConvertible_ToUInt32_m2784653358(_thisAdjusted, ___provider0, method);
}
// System.Int64 System.UInt64::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR int64_t UInt64_System_IConvertible_ToInt64_m4241475606 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToInt64_m4241475606_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int64_t L_0 = Convert_ToInt64_m260173354(NULL /*static, unused*/, (*((int64_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  int64_t UInt64_System_IConvertible_ToInt64_m4241475606_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_System_IConvertible_ToInt64_m4241475606(_thisAdjusted, ___provider0, method);
}
// System.UInt64 System.UInt64::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR uint64_t UInt64_System_IConvertible_ToUInt64_m2135047981 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	{
		return (*((int64_t*)__this));
	}
}
extern "C"  uint64_t UInt64_System_IConvertible_ToUInt64_m2135047981_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_System_IConvertible_ToUInt64_m2135047981(_thisAdjusted, ___provider0, method);
}
// System.Single System.UInt64::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR float UInt64_System_IConvertible_ToSingle_m925613075 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToSingle_m925613075_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		float L_0 = Convert_ToSingle_m2791508777(NULL /*static, unused*/, (*((int64_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  float UInt64_System_IConvertible_ToSingle_m925613075_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_System_IConvertible_ToSingle_m925613075(_thisAdjusted, ___provider0, method);
}
// System.Double System.UInt64::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR double UInt64_System_IConvertible_ToDouble_m602078108 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToDouble_m602078108_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		double L_0 = Convert_ToDouble_m1030895834(NULL /*static, unused*/, (*((int64_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  double UInt64_System_IConvertible_ToDouble_m602078108_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_System_IConvertible_ToDouble_m602078108(_thisAdjusted, ___provider0, method);
}
// System.Decimal System.UInt64::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR Decimal_t2948259380  UInt64_System_IConvertible_ToDecimal_m806594027 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToDecimal_m806594027_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		Decimal_t2948259380  L_0 = Convert_ToDecimal_m1695757674(NULL /*static, unused*/, (*((int64_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  Decimal_t2948259380  UInt64_System_IConvertible_ToDecimal_m806594027_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_System_IConvertible_ToDecimal_m806594027(_thisAdjusted, ___provider0, method);
}
// System.DateTime System.UInt64::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  UInt64_System_IConvertible_ToDateTime_m3434604642 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToDateTime_m3434604642_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral2789494635);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral2789494635);
		ObjectU5BU5D_t2843939325* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral3798051137);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral3798051137);
		String_t* L_3 = Environment_GetResourceString_m479507158(NULL /*static, unused*/, _stringLiteral4287968739, L_2, /*hidden argument*/NULL);
		InvalidCastException_t3927145244 * L_4 = (InvalidCastException_t3927145244 *)il2cpp_codegen_object_new(InvalidCastException_t3927145244_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m318645277(L_4, L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, UInt64_System_IConvertible_ToDateTime_m3434604642_RuntimeMethod_var);
	}
}
extern "C"  DateTime_t3738529785  UInt64_System_IConvertible_ToDateTime_m3434604642_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_System_IConvertible_ToDateTime_m3434604642(_thisAdjusted, ___provider0, method);
}
// System.Object System.UInt64::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * UInt64_System_IConvertible_ToType_m4049257834 (uint64_t* __this, Type_t * ___type0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToType_m4049257834_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0 = ((uint64_t)(*((int64_t*)__this)));
		RuntimeObject * L_1 = Box(UInt64_t4134040092_il2cpp_TypeInfo_var, &L_0);
		Type_t * L_2 = ___type0;
		RuntimeObject* L_3 = ___provider1;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		RuntimeObject * L_4 = Convert_DefaultToType_m1860037989(NULL /*static, unused*/, (RuntimeObject*)L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
extern "C"  RuntimeObject * UInt64_System_IConvertible_ToType_m4049257834_AdjustorThunk (RuntimeObject * __this, Type_t * ___type0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_System_IConvertible_ToType_m4049257834(_thisAdjusted, ___type0, ___provider1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.UIntPtr::.ctor(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void UIntPtr__ctor_m4250165422 (uintptr_t* __this, uint32_t ___value0, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___value0;
		*__this = ((((uintptr_t)L_0)));
		return;
	}
}
extern "C"  void UIntPtr__ctor_m4250165422_AdjustorThunk (RuntimeObject * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	uintptr_t* _thisAdjusted = reinterpret_cast<uintptr_t*>(__this + 1);
	UIntPtr__ctor_m4250165422(_thisAdjusted, ___value0, method);
}
// System.Boolean System.UIntPtr::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool UIntPtr_Equals_m1316671746 (uintptr_t* __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIntPtr_Equals_m1316671746_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uintptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, UIntPtr_t_il2cpp_TypeInfo_var)))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		V_0 = ((*(uintptr_t*)((uintptr_t*)UnBox(L_1, UIntPtr_t_il2cpp_TypeInfo_var))));
		uintptr_t L_2 = *__this;
		uintptr_t L_3 = V_0;
		return (bool)((((intptr_t)L_2) == ((intptr_t)L_3))? 1 : 0);
	}

IL_001f:
	{
		return (bool)0;
	}
}
extern "C"  bool UIntPtr_Equals_m1316671746_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	uintptr_t* _thisAdjusted = reinterpret_cast<uintptr_t*>(__this + 1);
	return UIntPtr_Equals_m1316671746(_thisAdjusted, ___obj0, method);
}
// System.Int32 System.UIntPtr::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t UIntPtr_GetHashCode_m3482152298 (uintptr_t* __this, const RuntimeMethod* method)
{
	{
		uintptr_t L_0 = *__this;
		return (((int32_t)((int32_t)L_0)));
	}
}
extern "C"  int32_t UIntPtr_GetHashCode_m3482152298_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	uintptr_t* _thisAdjusted = reinterpret_cast<uintptr_t*>(__this + 1);
	return UIntPtr_GetHashCode_m3482152298(_thisAdjusted, method);
}
// System.String System.UIntPtr::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* UIntPtr_ToString_m984583492 (uintptr_t* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIntPtr_ToString_m984583492_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		int32_t L_0 = UIntPtr_get_Size_m703595701(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_0) < ((int32_t)8)))
		{
			goto IL_0018;
		}
	}
	{
		uintptr_t L_1 = *__this;
		V_0 = (((int64_t)((uint64_t)L_1)));
		String_t* L_2 = UInt64_ToString_m1529093114((uint64_t*)(&V_0), /*hidden argument*/NULL);
		return L_2;
	}

IL_0018:
	{
		uintptr_t L_3 = *__this;
		V_1 = (((int32_t)((uint32_t)L_3)));
		String_t* L_4 = UInt32_ToString_m2574561716((uint32_t*)(&V_1), /*hidden argument*/NULL);
		return L_4;
	}
}
extern "C"  String_t* UIntPtr_ToString_m984583492_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	uintptr_t* _thisAdjusted = reinterpret_cast<uintptr_t*>(__this + 1);
	return UIntPtr_ToString_m984583492(_thisAdjusted, method);
}
// System.Void System.UIntPtr::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData_m1767630151 (uintptr_t* __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData_m1767630151_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t950877179 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral79347, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData_m1767630151_RuntimeMethod_var);
	}

IL_000e:
	{
		SerializationInfo_t950877179 * L_2 = ___info0;
		uintptr_t L_3 = *__this;
		NullCheck(L_2);
		SerializationInfo_AddValue_m2020653395(L_2, _stringLiteral1363226343, (((int64_t)((uint64_t)L_3))), /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData_m1767630151_AdjustorThunk (RuntimeObject * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method)
{
	uintptr_t* _thisAdjusted = reinterpret_cast<uintptr_t*>(__this + 1);
	UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData_m1767630151(_thisAdjusted, ___info0, ___context1, method);
}
// System.Boolean System.UIntPtr::op_Equality(System.UIntPtr,System.UIntPtr)
extern "C" IL2CPP_METHOD_ATTR bool UIntPtr_op_Equality_m2241921281 (RuntimeObject * __this /* static, unused */, uintptr_t ___value10, uintptr_t ___value21, const RuntimeMethod* method)
{
	{
		uintptr_t L_0 = ___value10;
		uintptr_t L_1 = ___value21;
		return (bool)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0);
	}
}
// System.Int32 System.UIntPtr::get_Size()
extern "C" IL2CPP_METHOD_ATTR int32_t UIntPtr_get_Size_m703595701 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(void*);
		return L_0;
	}
}
// System.Void System.UIntPtr::.cctor()
extern "C" IL2CPP_METHOD_ATTR void UIntPtr__cctor_m3513964473 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIntPtr__cctor_m3513964473_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		uintptr_t L_0;
		memset(&L_0, 0, sizeof(L_0));
		UIntPtr__ctor_m4250165422((&L_0), 0, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: System.UnSafeCharBuffer
extern "C" void UnSafeCharBuffer_t2176740272_marshal_pinvoke(const UnSafeCharBuffer_t2176740272& unmarshaled, UnSafeCharBuffer_t2176740272_marshaled_pinvoke& marshaled)
{
	marshaled.___m_buffer_0 = unmarshaled.get_m_buffer_0();
	marshaled.___m_totalSize_1 = unmarshaled.get_m_totalSize_1();
	marshaled.___m_length_2 = unmarshaled.get_m_length_2();
}
extern "C" void UnSafeCharBuffer_t2176740272_marshal_pinvoke_back(const UnSafeCharBuffer_t2176740272_marshaled_pinvoke& marshaled, UnSafeCharBuffer_t2176740272& unmarshaled)
{
	unmarshaled.set_m_buffer_0(marshaled.___m_buffer_0);
	int32_t unmarshaled_m_totalSize_temp_1 = 0;
	unmarshaled_m_totalSize_temp_1 = marshaled.___m_totalSize_1;
	unmarshaled.set_m_totalSize_1(unmarshaled_m_totalSize_temp_1);
	int32_t unmarshaled_m_length_temp_2 = 0;
	unmarshaled_m_length_temp_2 = marshaled.___m_length_2;
	unmarshaled.set_m_length_2(unmarshaled_m_length_temp_2);
}
// Conversion method for clean up from marshalling of: System.UnSafeCharBuffer
extern "C" void UnSafeCharBuffer_t2176740272_marshal_pinvoke_cleanup(UnSafeCharBuffer_t2176740272_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.UnSafeCharBuffer
extern "C" void UnSafeCharBuffer_t2176740272_marshal_com(const UnSafeCharBuffer_t2176740272& unmarshaled, UnSafeCharBuffer_t2176740272_marshaled_com& marshaled)
{
	marshaled.___m_buffer_0 = unmarshaled.get_m_buffer_0();
	marshaled.___m_totalSize_1 = unmarshaled.get_m_totalSize_1();
	marshaled.___m_length_2 = unmarshaled.get_m_length_2();
}
extern "C" void UnSafeCharBuffer_t2176740272_marshal_com_back(const UnSafeCharBuffer_t2176740272_marshaled_com& marshaled, UnSafeCharBuffer_t2176740272& unmarshaled)
{
	unmarshaled.set_m_buffer_0(marshaled.___m_buffer_0);
	int32_t unmarshaled_m_totalSize_temp_1 = 0;
	unmarshaled_m_totalSize_temp_1 = marshaled.___m_totalSize_1;
	unmarshaled.set_m_totalSize_1(unmarshaled_m_totalSize_temp_1);
	int32_t unmarshaled_m_length_temp_2 = 0;
	unmarshaled_m_length_temp_2 = marshaled.___m_length_2;
	unmarshaled.set_m_length_2(unmarshaled_m_length_temp_2);
}
// Conversion method for clean up from marshalling of: System.UnSafeCharBuffer
extern "C" void UnSafeCharBuffer_t2176740272_marshal_com_cleanup(UnSafeCharBuffer_t2176740272_marshaled_com& marshaled)
{
}
// System.Void System.UnSafeCharBuffer::.ctor(System.Char*,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void UnSafeCharBuffer__ctor_m1145239641 (UnSafeCharBuffer_t2176740272 * __this, Il2CppChar* ___buffer0, int32_t ___bufferSize1, const RuntimeMethod* method)
{
	{
		Il2CppChar* L_0 = ___buffer0;
		__this->set_m_buffer_0((Il2CppChar*)L_0);
		int32_t L_1 = ___bufferSize1;
		__this->set_m_totalSize_1(L_1);
		__this->set_m_length_2(0);
		return;
	}
}
extern "C"  void UnSafeCharBuffer__ctor_m1145239641_AdjustorThunk (RuntimeObject * __this, Il2CppChar* ___buffer0, int32_t ___bufferSize1, const RuntimeMethod* method)
{
	UnSafeCharBuffer_t2176740272 * _thisAdjusted = reinterpret_cast<UnSafeCharBuffer_t2176740272 *>(__this + 1);
	UnSafeCharBuffer__ctor_m1145239641(_thisAdjusted, ___buffer0, ___bufferSize1, method);
}
// System.Void System.UnSafeCharBuffer::AppendString(System.String)
extern "C" IL2CPP_METHOD_ATTR void UnSafeCharBuffer_AppendString_m2223303597 (UnSafeCharBuffer_t2176740272 * __this, String_t* ___stringToAppend0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnSafeCharBuffer_AppendString_m2223303597_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		String_t* L_0 = ___stringToAppend0;
		bool L_1 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		int32_t L_2 = __this->get_m_totalSize_1();
		int32_t L_3 = __this->get_m_length_2();
		String_t* L_4 = ___stringToAppend0;
		NullCheck(L_4);
		int32_t L_5 = String_get_Length_m3847582255(L_4, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3))) >= ((int32_t)L_5)))
		{
			goto IL_0024;
		}
	}
	{
		IndexOutOfRangeException_t1578797820 * L_6 = (IndexOutOfRangeException_t1578797820 *)il2cpp_codegen_object_new(IndexOutOfRangeException_t1578797820_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m2441337274(L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, UnSafeCharBuffer_AppendString_m2223303597_RuntimeMethod_var);
	}

IL_0024:
	{
		String_t* L_7 = ___stringToAppend0;
		V_1 = L_7;
		String_t* L_8 = V_1;
		V_0 = (Il2CppChar*)(((uintptr_t)L_8));
		Il2CppChar* L_9 = V_0;
		if (!L_9)
		{
			goto IL_0034;
		}
	}
	{
		Il2CppChar* L_10 = V_0;
		int32_t L_11 = RuntimeHelpers_get_OffsetToStringData_m2192601476(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_10, (int32_t)L_11));
	}

IL_0034:
	{
		Il2CppChar* L_12 = __this->get_m_buffer_0();
		int32_t L_13 = __this->get_m_length_2();
		Il2CppChar* L_14 = V_0;
		String_t* L_15 = ___stringToAppend0;
		NullCheck(L_15);
		int32_t L_16 = String_get_Length_m3847582255(L_15, /*hidden argument*/NULL);
		Buffer_Memcpy_m2035854300(NULL /*static, unused*/, (uint8_t*)(uint8_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_12, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)L_13)), (int32_t)2)))), (uint8_t*)(uint8_t*)L_14, ((int32_t)il2cpp_codegen_multiply((int32_t)L_16, (int32_t)2)), /*hidden argument*/NULL);
		V_1 = (String_t*)NULL;
		int32_t L_17 = __this->get_m_length_2();
		String_t* L_18 = ___stringToAppend0;
		NullCheck(L_18);
		int32_t L_19 = String_get_Length_m3847582255(L_18, /*hidden argument*/NULL);
		__this->set_m_length_2(((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)L_19)));
		return;
	}
}
extern "C"  void UnSafeCharBuffer_AppendString_m2223303597_AdjustorThunk (RuntimeObject * __this, String_t* ___stringToAppend0, const RuntimeMethod* method)
{
	UnSafeCharBuffer_t2176740272 * _thisAdjusted = reinterpret_cast<UnSafeCharBuffer_t2176740272 *>(__this + 1);
	UnSafeCharBuffer_AppendString_m2223303597(_thisAdjusted, ___stringToAppend0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.UnauthorizedAccessException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnauthorizedAccessException__ctor_m246605039 (UnauthorizedAccessException_t490705335 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnauthorizedAccessException__ctor_m246605039_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = Environment_GetResourceString_m2063689938(NULL /*static, unused*/, _stringLiteral2994918982, /*hidden argument*/NULL);
		SystemException__ctor_m3298527747(__this, L_0, /*hidden argument*/NULL);
		Exception_SetErrorCode_m4269507377(__this, ((int32_t)-2147024891), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UnauthorizedAccessException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void UnauthorizedAccessException__ctor_m40101894 (UnauthorizedAccessException_t490705335 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		SystemException__ctor_m3298527747(__this, L_0, /*hidden argument*/NULL);
		Exception_SetErrorCode_m4269507377(__this, ((int32_t)-2147024891), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UnauthorizedAccessException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void UnauthorizedAccessException__ctor_m1652256089 (UnauthorizedAccessException_t490705335 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method)
{
	{
		SerializationInfo_t950877179 * L_0 = ___info0;
		StreamingContext_t3711869237  L_1 = ___context1;
		SystemException__ctor_m1515048899(__this, L_0, L_1, /*hidden argument*/NULL);
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
// System.Void System.UnhandledExceptionEventArgs::.ctor(System.Object,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UnhandledExceptionEventArgs__ctor_m224348470 (UnhandledExceptionEventArgs_t2886101344 * __this, RuntimeObject * ___exception0, bool ___isTerminating1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnhandledExceptionEventArgs__ctor_m224348470_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t3591816995_il2cpp_TypeInfo_var);
		EventArgs__ctor_m32674013(__this, /*hidden argument*/NULL);
		RuntimeObject * L_0 = ___exception0;
		__this->set__Exception_1(L_0);
		bool L_1 = ___isTerminating1;
		__this->set__IsTerminating_2(L_1);
		return;
	}
}
// System.Object System.UnhandledExceptionEventArgs::get_ExceptionObject()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * UnhandledExceptionEventArgs_get_ExceptionObject_m862578480 (UnhandledExceptionEventArgs_t2886101344 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get__Exception_1();
		return L_0;
	}
}
// System.Boolean System.UnhandledExceptionEventArgs::get_IsTerminating()
extern "C" IL2CPP_METHOD_ATTR bool UnhandledExceptionEventArgs_get_IsTerminating_m4073714616 (UnhandledExceptionEventArgs_t2886101344 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__IsTerminating_2();
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
// System.Void System.UnhandledExceptionEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnhandledExceptionEventHandler__ctor_m626016213 (UnhandledExceptionEventHandler_t3101989324 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void System.UnhandledExceptionEventHandler::Invoke(System.Object,System.UnhandledExceptionEventArgs)
extern "C" IL2CPP_METHOD_ATTR void UnhandledExceptionEventHandler_Invoke_m1545705626 (UnhandledExceptionEventHandler_t3101989324 * __this, RuntimeObject * ___sender0, UnhandledExceptionEventArgs_t2886101344 * ___e1, const RuntimeMethod* method)
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
						typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, UnhandledExceptionEventArgs_t2886101344 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___sender0, ___e1, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, UnhandledExceptionEventArgs_t2886101344 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___sender0, ___e1, targetMethod);
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
								GenericInterfaceActionInvoker2< RuntimeObject *, UnhandledExceptionEventArgs_t2886101344 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
							else
								GenericVirtActionInvoker2< RuntimeObject *, UnhandledExceptionEventArgs_t2886101344 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker2< RuntimeObject *, UnhandledExceptionEventArgs_t2886101344 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___e1);
							else
								VirtActionInvoker2< RuntimeObject *, UnhandledExceptionEventArgs_t2886101344 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___e1);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, RuntimeObject *, UnhandledExceptionEventArgs_t2886101344 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
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
								GenericInterfaceActionInvoker1< UnhandledExceptionEventArgs_t2886101344 * >::Invoke(targetMethod, ___sender0, ___e1);
							else
								GenericVirtActionInvoker1< UnhandledExceptionEventArgs_t2886101344 * >::Invoke(targetMethod, ___sender0, ___e1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< UnhandledExceptionEventArgs_t2886101344 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sender0, ___e1);
							else
								VirtActionInvoker1< UnhandledExceptionEventArgs_t2886101344 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sender0, ___e1);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, UnhandledExceptionEventArgs_t2886101344 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
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
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, UnhandledExceptionEventArgs_t2886101344 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___sender0, ___e1, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, UnhandledExceptionEventArgs_t2886101344 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___sender0, ___e1, targetMethod);
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
							GenericInterfaceActionInvoker2< RuntimeObject *, UnhandledExceptionEventArgs_t2886101344 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
						else
							GenericVirtActionInvoker2< RuntimeObject *, UnhandledExceptionEventArgs_t2886101344 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker2< RuntimeObject *, UnhandledExceptionEventArgs_t2886101344 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___e1);
						else
							VirtActionInvoker2< RuntimeObject *, UnhandledExceptionEventArgs_t2886101344 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___e1);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, UnhandledExceptionEventArgs_t2886101344 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
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
							GenericInterfaceActionInvoker1< UnhandledExceptionEventArgs_t2886101344 * >::Invoke(targetMethod, ___sender0, ___e1);
						else
							GenericVirtActionInvoker1< UnhandledExceptionEventArgs_t2886101344 * >::Invoke(targetMethod, ___sender0, ___e1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< UnhandledExceptionEventArgs_t2886101344 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sender0, ___e1);
						else
							VirtActionInvoker1< UnhandledExceptionEventArgs_t2886101344 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sender0, ___e1);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, UnhandledExceptionEventArgs_t2886101344 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult System.UnhandledExceptionEventHandler::BeginInvoke(System.Object,System.UnhandledExceptionEventArgs,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UnhandledExceptionEventHandler_BeginInvoke_m1761611550 (UnhandledExceptionEventHandler_t3101989324 * __this, RuntimeObject * ___sender0, UnhandledExceptionEventArgs_t2886101344 * ___e1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender0;
	__d_args[1] = ___e1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void System.UnhandledExceptionEventHandler::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void UnhandledExceptionEventHandler_EndInvoke_m2316153791 (UnhandledExceptionEventHandler_t3101989324 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void System.UnitySerializationHolder::GetUnitySerializationInfo(System.Runtime.Serialization.SerializationInfo,System.Reflection.Missing)
extern "C" IL2CPP_METHOD_ATTR void UnitySerializationHolder_GetUnitySerializationInfo_m927411785 (RuntimeObject * __this /* static, unused */, SerializationInfo_t950877179 * ___info0, Missing_t508514592 * ___missing1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySerializationHolder_GetUnitySerializationInfo_m927411785_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t950877179 * L_0 = ___info0;
		RuntimeTypeHandle_t3027515415  L_1 = { reinterpret_cast<intptr_t> (UnitySerializationHolder_t431912834_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		SerializationInfo_SetType_m3923964808(L_0, L_2, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_3 = ___info0;
		NullCheck(L_3);
		SerializationInfo_AddValue_m412754688(L_3, _stringLiteral3283586028, 3, /*hidden argument*/NULL);
		return;
	}
}
// System.RuntimeType System.UnitySerializationHolder::AddElementTypes(System.Runtime.Serialization.SerializationInfo,System.RuntimeType)
extern "C" IL2CPP_METHOD_ATTR RuntimeType_t3636489352 * UnitySerializationHolder_AddElementTypes_m2711578409 (RuntimeObject * __this /* static, unused */, SerializationInfo_t950877179 * ___info0, RuntimeType_t3636489352 * ___type1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySerializationHolder_AddElementTypes_m2711578409_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t128053199 * V_0 = NULL;
	{
		List_1_t128053199 * L_0 = (List_1_t128053199 *)il2cpp_codegen_object_new(List_1_t128053199_il2cpp_TypeInfo_var);
		List_1__ctor_m1204004817(L_0, /*hidden argument*/List_1__ctor_m1204004817_RuntimeMethod_var);
		V_0 = L_0;
		goto IL_0063;
	}

IL_0008:
	{
		RuntimeType_t3636489352 * L_1 = ___type1;
		NullCheck(L_1);
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(77 /* System.Boolean System.Type::get_IsSzArray() */, L_1);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		List_1_t128053199 * L_3 = V_0;
		NullCheck(L_3);
		List_1_Add_m2080863212(L_3, 3, /*hidden argument*/List_1_Add_m2080863212_RuntimeMethod_var);
		goto IL_0056;
	}

IL_0019:
	{
		RuntimeType_t3636489352 * L_4 = ___type1;
		NullCheck(L_4);
		bool L_5 = Type_get_IsArray_m2591212821(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		List_1_t128053199 * L_6 = V_0;
		RuntimeType_t3636489352 * L_7 = ___type1;
		NullCheck(L_7);
		int32_t L_8 = VirtFuncInvoker0< int32_t >::Invoke(29 /* System.Int32 System.Type::GetArrayRank() */, L_7);
		NullCheck(L_6);
		List_1_Add_m2080863212(L_6, L_8, /*hidden argument*/List_1_Add_m2080863212_RuntimeMethod_var);
		List_1_t128053199 * L_9 = V_0;
		NullCheck(L_9);
		List_1_Add_m2080863212(L_9, 2, /*hidden argument*/List_1_Add_m2080863212_RuntimeMethod_var);
		goto IL_0056;
	}

IL_0036:
	{
		RuntimeType_t3636489352 * L_10 = ___type1;
		NullCheck(L_10);
		bool L_11 = Type_get_IsPointer_m4067542339(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0047;
		}
	}
	{
		List_1_t128053199 * L_12 = V_0;
		NullCheck(L_12);
		List_1_Add_m2080863212(L_12, 1, /*hidden argument*/List_1_Add_m2080863212_RuntimeMethod_var);
		goto IL_0056;
	}

IL_0047:
	{
		RuntimeType_t3636489352 * L_13 = ___type1;
		NullCheck(L_13);
		bool L_14 = Type_get_IsByRef_m1262524108(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0056;
		}
	}
	{
		List_1_t128053199 * L_15 = V_0;
		NullCheck(L_15);
		List_1_Add_m2080863212(L_15, 4, /*hidden argument*/List_1_Add_m2080863212_RuntimeMethod_var);
	}

IL_0056:
	{
		RuntimeType_t3636489352 * L_16 = ___type1;
		NullCheck(L_16);
		Type_t * L_17 = VirtFuncInvoker0< Type_t * >::Invoke(101 /* System.Type System.Type::GetElementType() */, L_16);
		___type1 = ((RuntimeType_t3636489352 *)CastclassClass((RuntimeObject*)L_17, RuntimeType_t3636489352_il2cpp_TypeInfo_var));
	}

IL_0063:
	{
		RuntimeType_t3636489352 * L_18 = ___type1;
		NullCheck(L_18);
		bool L_19 = Type_get_HasElementType_m710151977(L_18, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_0008;
		}
	}
	{
		SerializationInfo_t950877179 * L_20 = ___info0;
		List_1_t128053199 * L_21 = V_0;
		NullCheck(L_21);
		Int32U5BU5D_t385246372* L_22 = List_1_ToArray_m1469074435(L_21, /*hidden argument*/List_1_ToArray_m1469074435_RuntimeMethod_var);
		RuntimeTypeHandle_t3027515415  L_23 = { reinterpret_cast<intptr_t> (Int32U5BU5D_t385246372_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_24 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		NullCheck(L_20);
		SerializationInfo_AddValue_m3906743584(L_20, _stringLiteral3927933503, (RuntimeObject *)(RuntimeObject *)L_22, L_24, /*hidden argument*/NULL);
		RuntimeType_t3636489352 * L_25 = ___type1;
		return L_25;
	}
}
// System.Type System.UnitySerializationHolder::MakeElementTypes(System.Type)
extern "C" IL2CPP_METHOD_ATTR Type_t * UnitySerializationHolder_MakeElementTypes_m672301684 (UnitySerializationHolder_t431912834 * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t385246372* L_0 = __this->get_m_elementTypes_1();
		NullCheck(L_0);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length)))), (int32_t)1));
		goto IL_006f;
	}

IL_000d:
	{
		Int32U5BU5D_t385246372* L_1 = __this->get_m_elementTypes_1();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if ((!(((uint32_t)L_4) == ((uint32_t)3))))
		{
			goto IL_0022;
		}
	}
	{
		Type_t * L_5 = ___type0;
		NullCheck(L_5);
		Type_t * L_6 = VirtFuncInvoker0< Type_t * >::Invoke(19 /* System.Type System.Type::MakeArrayType() */, L_5);
		___type0 = L_6;
		goto IL_006b;
	}

IL_0022:
	{
		Int32U5BU5D_t385246372* L_7 = __this->get_m_elementTypes_1();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		if ((!(((uint32_t)L_10) == ((uint32_t)2))))
		{
			goto IL_0043;
		}
	}
	{
		Type_t * L_11 = ___type0;
		Int32U5BU5D_t385246372* L_12 = __this->get_m_elementTypes_1();
		int32_t L_13 = V_0;
		int32_t L_14 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1));
		V_0 = L_14;
		NullCheck(L_12);
		int32_t L_15 = L_14;
		int32_t L_16 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_11);
		Type_t * L_17 = VirtFuncInvoker1< Type_t *, int32_t >::Invoke(20 /* System.Type System.Type::MakeArrayType(System.Int32) */, L_11, L_16);
		___type0 = L_17;
		goto IL_006b;
	}

IL_0043:
	{
		Int32U5BU5D_t385246372* L_18 = __this->get_m_elementTypes_1();
		int32_t L_19 = V_0;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		int32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		if ((!(((uint32_t)L_21) == ((uint32_t)1))))
		{
			goto IL_0058;
		}
	}
	{
		Type_t * L_22 = ___type0;
		NullCheck(L_22);
		Type_t * L_23 = VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::MakePointerType() */, L_22);
		___type0 = L_23;
		goto IL_006b;
	}

IL_0058:
	{
		Int32U5BU5D_t385246372* L_24 = __this->get_m_elementTypes_1();
		int32_t L_25 = V_0;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		int32_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		if ((!(((uint32_t)L_27) == ((uint32_t)4))))
		{
			goto IL_006b;
		}
	}
	{
		Type_t * L_28 = ___type0;
		NullCheck(L_28);
		Type_t * L_29 = VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Type::MakeByRefType() */, L_28);
		___type0 = L_29;
	}

IL_006b:
	{
		int32_t L_30 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)1));
	}

IL_006f:
	{
		int32_t L_31 = V_0;
		if ((((int32_t)L_31) >= ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		Type_t * L_32 = ___type0;
		return L_32;
	}
}
// System.Void System.UnitySerializationHolder::GetUnitySerializationInfo(System.Runtime.Serialization.SerializationInfo,System.RuntimeType)
extern "C" IL2CPP_METHOD_ATTR void UnitySerializationHolder_GetUnitySerializationInfo_m3060468266 (RuntimeObject * __this /* static, unused */, SerializationInfo_t950877179 * ___info0, RuntimeType_t3636489352 * ___type1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySerializationHolder_GetUnitySerializationInfo_m3060468266_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		RuntimeType_t3636489352 * L_0 = ___type1;
		NullCheck(L_0);
		Type_t * L_1 = Type_GetRootElementType_m2028550026(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(80 /* System.Boolean System.Type::get_IsGenericParameter() */, L_1);
		if (!L_2)
		{
			goto IL_007a;
		}
	}
	{
		SerializationInfo_t950877179 * L_3 = ___info0;
		RuntimeType_t3636489352 * L_4 = ___type1;
		RuntimeType_t3636489352 * L_5 = UnitySerializationHolder_AddElementTypes_m2711578409(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		___type1 = L_5;
		SerializationInfo_t950877179 * L_6 = ___info0;
		RuntimeTypeHandle_t3027515415  L_7 = { reinterpret_cast<intptr_t> (UnitySerializationHolder_t431912834_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		SerializationInfo_SetType_m3923964808(L_6, L_8, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_9 = ___info0;
		NullCheck(L_9);
		SerializationInfo_AddValue_m412754688(L_9, _stringLiteral3283586028, 7, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_10 = ___info0;
		RuntimeType_t3636489352 * L_11 = ___type1;
		NullCheck(L_11);
		int32_t L_12 = VirtFuncInvoker0< int32_t >::Invoke(81 /* System.Int32 System.Type::get_GenericParameterPosition() */, L_11);
		NullCheck(L_10);
		SerializationInfo_AddValue_m412754688(L_10, _stringLiteral3378664767, L_12, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_13 = ___info0;
		RuntimeType_t3636489352 * L_14 = ___type1;
		NullCheck(L_14);
		MethodBase_t * L_15 = VirtFuncInvoker0< MethodBase_t * >::Invoke(16 /* System.Reflection.MethodBase System.Type::get_DeclaringMethod() */, L_14);
		RuntimeTypeHandle_t3027515415  L_16 = { reinterpret_cast<intptr_t> (MethodBase_t_0_0_0_var) };
		Type_t * L_17 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		NullCheck(L_13);
		SerializationInfo_AddValue_m3906743584(L_13, _stringLiteral98117656, L_15, L_17, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_18 = ___info0;
		RuntimeType_t3636489352 * L_19 = ___type1;
		NullCheck(L_19);
		Type_t * L_20 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_19);
		RuntimeTypeHandle_t3027515415  L_21 = { reinterpret_cast<intptr_t> (Type_t_0_0_0_var) };
		Type_t * L_22 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		NullCheck(L_18);
		SerializationInfo_AddValue_m3906743584(L_18, _stringLiteral2725392681, L_20, L_22, /*hidden argument*/NULL);
		return;
	}

IL_007a:
	{
		V_0 = 4;
		RuntimeType_t3636489352 * L_23 = ___type1;
		NullCheck(L_23);
		bool L_24 = VirtFuncInvoker0< bool >::Invoke(79 /* System.Boolean System.Type::get_IsGenericTypeDefinition() */, L_23);
		if (L_24)
		{
			goto IL_00bf;
		}
	}
	{
		RuntimeType_t3636489352 * L_25 = ___type1;
		NullCheck(L_25);
		bool L_26 = VirtFuncInvoker0< bool >::Invoke(82 /* System.Boolean System.Type::get_ContainsGenericParameters() */, L_25);
		if (!L_26)
		{
			goto IL_00bf;
		}
	}
	{
		V_0 = 8;
		SerializationInfo_t950877179 * L_27 = ___info0;
		RuntimeType_t3636489352 * L_28 = ___type1;
		RuntimeType_t3636489352 * L_29 = UnitySerializationHolder_AddElementTypes_m2711578409(NULL /*static, unused*/, L_27, L_28, /*hidden argument*/NULL);
		___type1 = L_29;
		SerializationInfo_t950877179 * L_30 = ___info0;
		RuntimeType_t3636489352 * L_31 = ___type1;
		NullCheck(L_31);
		TypeU5BU5D_t3940880105* L_32 = VirtFuncInvoker0< TypeU5BU5D_t3940880105* >::Invoke(102 /* System.Type[] System.Type::GetGenericArguments() */, L_31);
		RuntimeTypeHandle_t3027515415  L_33 = { reinterpret_cast<intptr_t> (TypeU5BU5D_t3940880105_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_34 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_33, /*hidden argument*/NULL);
		NullCheck(L_30);
		SerializationInfo_AddValue_m3906743584(L_30, _stringLiteral1245918466, (RuntimeObject *)(RuntimeObject *)L_32, L_34, /*hidden argument*/NULL);
		RuntimeType_t3636489352 * L_35 = ___type1;
		NullCheck(L_35);
		Type_t * L_36 = VirtFuncInvoker0< Type_t * >::Invoke(103 /* System.Type System.Type::GetGenericTypeDefinition() */, L_35);
		___type1 = ((RuntimeType_t3636489352 *)CastclassClass((RuntimeObject*)L_36, RuntimeType_t3636489352_il2cpp_TypeInfo_var));
	}

IL_00bf:
	{
		SerializationInfo_t950877179 * L_37 = ___info0;
		int32_t L_38 = V_0;
		RuntimeType_t3636489352 * L_39 = ___type1;
		NullCheck(L_39);
		String_t* L_40 = VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Type::get_FullName() */, L_39);
		RuntimeType_t3636489352 * L_41 = ___type1;
		NullCheck(L_41);
		RuntimeAssembly_t1451753063 * L_42 = RuntimeType_GetRuntimeAssembly_m2955606119(L_41, /*hidden argument*/NULL);
		UnitySerializationHolder_GetUnitySerializationInfo_m3966690610(NULL /*static, unused*/, L_37, L_38, L_40, L_42, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UnitySerializationHolder::GetUnitySerializationInfo(System.Runtime.Serialization.SerializationInfo,System.Int32,System.String,System.Reflection.RuntimeAssembly)
extern "C" IL2CPP_METHOD_ATTR void UnitySerializationHolder_GetUnitySerializationInfo_m3966690610 (RuntimeObject * __this /* static, unused */, SerializationInfo_t950877179 * ___info0, int32_t ___unityType1, String_t* ___data2, RuntimeAssembly_t1451753063 * ___assembly3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySerializationHolder_GetUnitySerializationInfo_m3966690610_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		SerializationInfo_t950877179 * L_0 = ___info0;
		RuntimeTypeHandle_t3027515415  L_1 = { reinterpret_cast<intptr_t> (UnitySerializationHolder_t431912834_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		SerializationInfo_SetType_m3923964808(L_0, L_2, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_3 = ___info0;
		String_t* L_4 = ___data2;
		RuntimeTypeHandle_t3027515415  L_5 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t * L_6 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		SerializationInfo_AddValue_m3906743584(L_3, _stringLiteral2037252898, L_4, L_6, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_7 = ___info0;
		int32_t L_8 = ___unityType1;
		NullCheck(L_7);
		SerializationInfo_AddValue_m412754688(L_7, _stringLiteral3283586028, L_8, /*hidden argument*/NULL);
		RuntimeAssembly_t1451753063 * L_9 = ___assembly3;
		bool L_10 = Assembly_op_Equality_m3828289814(NULL /*static, unused*/, L_9, (Assembly_t *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0043;
		}
	}
	{
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_0 = L_11;
		goto IL_004a;
	}

IL_0043:
	{
		RuntimeAssembly_t1451753063 * L_12 = ___assembly3;
		NullCheck(L_12);
		String_t* L_13 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.Assembly::get_FullName() */, L_12);
		V_0 = L_13;
	}

IL_004a:
	{
		SerializationInfo_t950877179 * L_14 = ___info0;
		String_t* L_15 = V_0;
		NullCheck(L_14);
		SerializationInfo_AddValue_m2872281893(L_14, _stringLiteral209558951, L_15, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UnitySerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void UnitySerializationHolder__ctor_m3869442095 (UnitySerializationHolder_t431912834 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySerializationHolder__ctor_m3869442095_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral79347, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, UnitySerializationHolder__ctor_m3869442095_RuntimeMethod_var);
	}

IL_0014:
	{
		SerializationInfo_t950877179 * L_2 = ___info0;
		NullCheck(L_2);
		int32_t L_3 = SerializationInfo_GetInt32_m2640574809(L_2, _stringLiteral3283586028, /*hidden argument*/NULL);
		__this->set_m_unityType_7(L_3);
		int32_t L_4 = __this->get_m_unityType_7();
		if ((!(((uint32_t)L_4) == ((uint32_t)3))))
		{
			goto IL_002f;
		}
	}
	{
		return;
	}

IL_002f:
	{
		int32_t L_5 = __this->get_m_unityType_7();
		if ((!(((uint32_t)L_5) == ((uint32_t)7))))
		{
			goto IL_00aa;
		}
	}
	{
		SerializationInfo_t950877179 * L_6 = ___info0;
		RuntimeTypeHandle_t3027515415  L_7 = { reinterpret_cast<intptr_t> (MethodBase_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		RuntimeObject * L_9 = SerializationInfo_GetValue_m42271953(L_6, _stringLiteral98117656, L_8, /*hidden argument*/NULL);
		__this->set_m_declaringMethod_4(((MethodBase_t *)IsInstClass((RuntimeObject*)L_9, MethodBase_t_il2cpp_TypeInfo_var)));
		SerializationInfo_t950877179 * L_10 = ___info0;
		RuntimeTypeHandle_t3027515415  L_11 = { reinterpret_cast<intptr_t> (Type_t_0_0_0_var) };
		Type_t * L_12 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		RuntimeObject * L_13 = SerializationInfo_GetValue_m42271953(L_10, _stringLiteral2725392681, L_12, /*hidden argument*/NULL);
		__this->set_m_declaringType_3(((Type_t *)IsInstClass((RuntimeObject*)L_13, Type_t_il2cpp_TypeInfo_var)));
		SerializationInfo_t950877179 * L_14 = ___info0;
		NullCheck(L_14);
		int32_t L_15 = SerializationInfo_GetInt32_m2640574809(L_14, _stringLiteral3378664767, /*hidden argument*/NULL);
		__this->set_m_genericParameterPosition_2(L_15);
		SerializationInfo_t950877179 * L_16 = ___info0;
		RuntimeTypeHandle_t3027515415  L_17 = { reinterpret_cast<intptr_t> (Int32U5BU5D_t385246372_0_0_0_var) };
		Type_t * L_18 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		RuntimeObject * L_19 = SerializationInfo_GetValue_m42271953(L_16, _stringLiteral3927933503, L_18, /*hidden argument*/NULL);
		__this->set_m_elementTypes_1(((Int32U5BU5D_t385246372*)IsInst((RuntimeObject*)L_19, Int32U5BU5D_t385246372_il2cpp_TypeInfo_var)));
		return;
	}

IL_00aa:
	{
		int32_t L_20 = __this->get_m_unityType_7();
		if ((!(((uint32_t)L_20) == ((uint32_t)8))))
		{
			goto IL_00f3;
		}
	}
	{
		SerializationInfo_t950877179 * L_21 = ___info0;
		RuntimeTypeHandle_t3027515415  L_22 = { reinterpret_cast<intptr_t> (TypeU5BU5D_t3940880105_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_23 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		NullCheck(L_21);
		RuntimeObject * L_24 = SerializationInfo_GetValue_m42271953(L_21, _stringLiteral1245918466, L_23, /*hidden argument*/NULL);
		__this->set_m_instantiation_0(((TypeU5BU5D_t3940880105*)IsInst((RuntimeObject*)L_24, TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var)));
		SerializationInfo_t950877179 * L_25 = ___info0;
		RuntimeTypeHandle_t3027515415  L_26 = { reinterpret_cast<intptr_t> (Int32U5BU5D_t385246372_0_0_0_var) };
		Type_t * L_27 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		NullCheck(L_25);
		RuntimeObject * L_28 = SerializationInfo_GetValue_m42271953(L_25, _stringLiteral3927933503, L_27, /*hidden argument*/NULL);
		__this->set_m_elementTypes_1(((Int32U5BU5D_t385246372*)IsInst((RuntimeObject*)L_28, Int32U5BU5D_t385246372_il2cpp_TypeInfo_var)));
	}

IL_00f3:
	{
		SerializationInfo_t950877179 * L_29 = ___info0;
		NullCheck(L_29);
		String_t* L_30 = SerializationInfo_GetString_m3155282843(L_29, _stringLiteral2037252898, /*hidden argument*/NULL);
		__this->set_m_data_5(L_30);
		SerializationInfo_t950877179 * L_31 = ___info0;
		NullCheck(L_31);
		String_t* L_32 = SerializationInfo_GetString_m3155282843(L_31, _stringLiteral209558951, /*hidden argument*/NULL);
		__this->set_m_assemblyName_6(L_32);
		return;
	}
}
// System.Void System.UnitySerializationHolder::ThrowInsufficientInformation(System.String)
extern "C" IL2CPP_METHOD_ATTR void UnitySerializationHolder_ThrowInsufficientInformation_m1747464776 (UnitySerializationHolder_t431912834 * __this, String_t* ___field0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySerializationHolder_ThrowInsufficientInformation_m1747464776_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		String_t* L_2 = ___field0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		String_t* L_3 = Environment_GetResourceString_m479507158(NULL /*static, unused*/, _stringLiteral3245515088, L_1, /*hidden argument*/NULL);
		SerializationException_t3941511869 * L_4 = (SerializationException_t3941511869 *)il2cpp_codegen_object_new(SerializationException_t3941511869_il2cpp_TypeInfo_var);
		SerializationException__ctor_m3862484944(L_4, L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, UnitySerializationHolder_ThrowInsufficientInformation_m1747464776_RuntimeMethod_var);
	}
}
// System.Void System.UnitySerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void UnitySerializationHolder_GetObjectData_m3377455907 (UnitySerializationHolder_t431912834 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySerializationHolder_GetObjectData_m3377455907_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = Environment_GetResourceString_m2063689938(NULL /*static, unused*/, _stringLiteral532335187, /*hidden argument*/NULL);
		NotSupportedException_t1314879016 * L_1 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2494070935(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, UnitySerializationHolder_GetObjectData_m3377455907_RuntimeMethod_var);
	}
}
// System.Object System.UnitySerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * UnitySerializationHolder_GetRealObject_m1624354633 (UnitySerializationHolder_t431912834 * __this, StreamingContext_t3711869237  ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySerializationHolder_GetRealObject_m1624354633_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Type_t * V_1 = NULL;
	Module_t2987026101 * V_2 = NULL;
	{
		int32_t L_0 = __this->get_m_unityType_7();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0034;
			}
			case 1:
			{
				goto IL_003a;
			}
			case 2:
			{
				goto IL_0040;
			}
			case 3:
			{
				goto IL_00e7;
			}
			case 4:
			{
				goto IL_014e;
			}
			case 5:
			{
				goto IL_01cb;
			}
			case 6:
			{
				goto IL_0086;
			}
			case 7:
			{
				goto IL_0046;
			}
		}
	}
	{
		goto IL_020a;
	}

IL_0034:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Empty_t4129602447_il2cpp_TypeInfo_var);
		Empty_t4129602447 * L_2 = ((Empty_t4129602447_StaticFields*)il2cpp_codegen_static_fields_for(Empty_t4129602447_il2cpp_TypeInfo_var))->get_Value_0();
		return L_2;
	}

IL_003a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DBNull_t3725197148_il2cpp_TypeInfo_var);
		DBNull_t3725197148 * L_3 = ((DBNull_t3725197148_StaticFields*)il2cpp_codegen_static_fields_for(DBNull_t3725197148_il2cpp_TypeInfo_var))->get_Value_0();
		return L_3;
	}

IL_0040:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Missing_t508514592_il2cpp_TypeInfo_var);
		Missing_t508514592 * L_4 = ((Missing_t508514592_StaticFields*)il2cpp_codegen_static_fields_for(Missing_t508514592_il2cpp_TypeInfo_var))->get_Value_0();
		return L_4;
	}

IL_0046:
	{
		__this->set_m_unityType_7(4);
		StreamingContext_t3711869237  L_5 = ___context0;
		RuntimeObject * L_6 = VirtFuncInvoker1< RuntimeObject *, StreamingContext_t3711869237  >::Invoke(7 /* System.Object System.UnitySerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext) */, __this, L_5);
		V_1 = ((Type_t *)IsInstClass((RuntimeObject*)L_6, Type_t_il2cpp_TypeInfo_var));
		__this->set_m_unityType_7(8);
		TypeU5BU5D_t3940880105* L_7 = __this->get_m_instantiation_0();
		NullCheck(L_7);
		int32_t L_8 = 0;
		Type_t * L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_10 = Type_op_Equality_m2683486427(NULL /*static, unused*/, L_9, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0073;
		}
	}
	{
		return NULL;
	}

IL_0073:
	{
		Type_t * L_11 = V_1;
		TypeU5BU5D_t3940880105* L_12 = __this->get_m_instantiation_0();
		NullCheck(L_11);
		Type_t * L_13 = VirtFuncInvoker1< Type_t *, TypeU5BU5D_t3940880105* >::Invoke(98 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_11, L_12);
		Type_t * L_14 = UnitySerializationHolder_MakeElementTypes_m672301684(__this, L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_0086:
	{
		MethodBase_t * L_15 = __this->get_m_declaringMethod_4();
		bool L_16 = MethodBase_op_Equality_m2405991987(NULL /*static, unused*/, L_15, (MethodBase_t *)NULL, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00ad;
		}
	}
	{
		Type_t * L_17 = __this->get_m_declaringType_3();
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_18 = Type_op_Equality_m2683486427(NULL /*static, unused*/, L_17, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00ad;
		}
	}
	{
		UnitySerializationHolder_ThrowInsufficientInformation_m1747464776(__this, _stringLiteral1313207612, /*hidden argument*/NULL);
	}

IL_00ad:
	{
		MethodBase_t * L_19 = __this->get_m_declaringMethod_4();
		bool L_20 = MethodBase_op_Inequality_m736913402(NULL /*static, unused*/, L_19, (MethodBase_t *)NULL, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00ce;
		}
	}
	{
		MethodBase_t * L_21 = __this->get_m_declaringMethod_4();
		NullCheck(L_21);
		TypeU5BU5D_t3940880105* L_22 = VirtFuncInvoker0< TypeU5BU5D_t3940880105* >::Invoke(23 /* System.Type[] System.Reflection.MethodBase::GetGenericArguments() */, L_21);
		int32_t L_23 = __this->get_m_genericParameterPosition_2();
		NullCheck(L_22);
		int32_t L_24 = L_23;
		Type_t * L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		return L_25;
	}

IL_00ce:
	{
		Type_t * L_26 = __this->get_m_declaringType_3();
		NullCheck(L_26);
		TypeU5BU5D_t3940880105* L_27 = VirtFuncInvoker0< TypeU5BU5D_t3940880105* >::Invoke(102 /* System.Type[] System.Type::GetGenericArguments() */, L_26);
		int32_t L_28 = __this->get_m_genericParameterPosition_2();
		NullCheck(L_27);
		int32_t L_29 = L_28;
		Type_t * L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		Type_t * L_31 = UnitySerializationHolder_MakeElementTypes_m672301684(__this, L_30, /*hidden argument*/NULL);
		return L_31;
	}

IL_00e7:
	{
		String_t* L_32 = __this->get_m_data_5();
		if (!L_32)
		{
			goto IL_00fc;
		}
	}
	{
		String_t* L_33 = __this->get_m_data_5();
		NullCheck(L_33);
		int32_t L_34 = String_get_Length_m3847582255(L_33, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_0107;
		}
	}

IL_00fc:
	{
		UnitySerializationHolder_ThrowInsufficientInformation_m1747464776(__this, _stringLiteral2037252898, /*hidden argument*/NULL);
	}

IL_0107:
	{
		String_t* L_35 = __this->get_m_assemblyName_6();
		if (L_35)
		{
			goto IL_011a;
		}
	}
	{
		UnitySerializationHolder_ThrowInsufficientInformation_m1747464776(__this, _stringLiteral209558951, /*hidden argument*/NULL);
	}

IL_011a:
	{
		String_t* L_36 = __this->get_m_assemblyName_6();
		NullCheck(L_36);
		int32_t L_37 = String_get_Length_m3847582255(L_36, /*hidden argument*/NULL);
		if (L_37)
		{
			goto IL_0135;
		}
	}
	{
		String_t* L_38 = __this->get_m_data_5();
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_39 = il2cpp_codegen_get_type((Il2CppMethodPointer)&Type_GetType_m3971160356, L_38, (bool)1, (bool)0, "mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089");
		return L_39;
	}

IL_0135:
	{
		String_t* L_40 = __this->get_m_assemblyName_6();
		Assembly_t * L_41 = Assembly_Load_m3487507613(NULL /*static, unused*/, L_40, /*hidden argument*/NULL);
		String_t* L_42 = __this->get_m_data_5();
		NullCheck(L_41);
		Type_t * L_43 = VirtFuncInvoker3< Type_t *, String_t*, bool, bool >::Invoke(26 /* System.Type System.Reflection.Assembly::GetType(System.String,System.Boolean,System.Boolean) */, L_41, L_42, (bool)1, (bool)0);
		return L_43;
	}

IL_014e:
	{
		String_t* L_44 = __this->get_m_data_5();
		if (!L_44)
		{
			goto IL_0163;
		}
	}
	{
		String_t* L_45 = __this->get_m_data_5();
		NullCheck(L_45);
		int32_t L_46 = String_get_Length_m3847582255(L_45, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_016e;
		}
	}

IL_0163:
	{
		UnitySerializationHolder_ThrowInsufficientInformation_m1747464776(__this, _stringLiteral2037252898, /*hidden argument*/NULL);
	}

IL_016e:
	{
		String_t* L_47 = __this->get_m_assemblyName_6();
		if (L_47)
		{
			goto IL_0181;
		}
	}
	{
		UnitySerializationHolder_ThrowInsufficientInformation_m1747464776(__this, _stringLiteral209558951, /*hidden argument*/NULL);
	}

IL_0181:
	{
		String_t* L_48 = __this->get_m_assemblyName_6();
		Assembly_t * L_49 = Assembly_Load_m3487507613(NULL /*static, unused*/, L_48, /*hidden argument*/NULL);
		String_t* L_50 = __this->get_m_data_5();
		NullCheck(L_49);
		Module_t2987026101 * L_51 = VirtFuncInvoker1< Module_t2987026101 *, String_t* >::Invoke(27 /* System.Reflection.Module System.Reflection.Assembly::GetModule(System.String) */, L_49, L_50);
		V_2 = L_51;
		Module_t2987026101 * L_52 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Module_t2987026101_il2cpp_TypeInfo_var);
		bool L_53 = Module_op_Equality_m1102431980(NULL /*static, unused*/, L_52, (Module_t2987026101 *)NULL, /*hidden argument*/NULL);
		if (!L_53)
		{
			goto IL_01c9;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_54 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t2843939325* L_55 = L_54;
		String_t* L_56 = __this->get_m_data_5();
		NullCheck(L_55);
		ArrayElementTypeCheck (L_55, L_56);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_56);
		ObjectU5BU5D_t2843939325* L_57 = L_55;
		String_t* L_58 = __this->get_m_assemblyName_6();
		NullCheck(L_57);
		ArrayElementTypeCheck (L_57, L_58);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_58);
		String_t* L_59 = Environment_GetResourceString_m479507158(NULL /*static, unused*/, _stringLiteral1498318814, L_57, /*hidden argument*/NULL);
		SerializationException_t3941511869 * L_60 = (SerializationException_t3941511869 *)il2cpp_codegen_object_new(SerializationException_t3941511869_il2cpp_TypeInfo_var);
		SerializationException__ctor_m3862484944(L_60, L_59, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_60, NULL, UnitySerializationHolder_GetRealObject_m1624354633_RuntimeMethod_var);
	}

IL_01c9:
	{
		Module_t2987026101 * L_61 = V_2;
		return L_61;
	}

IL_01cb:
	{
		String_t* L_62 = __this->get_m_data_5();
		if (!L_62)
		{
			goto IL_01e0;
		}
	}
	{
		String_t* L_63 = __this->get_m_data_5();
		NullCheck(L_63);
		int32_t L_64 = String_get_Length_m3847582255(L_63, /*hidden argument*/NULL);
		if (L_64)
		{
			goto IL_01eb;
		}
	}

IL_01e0:
	{
		UnitySerializationHolder_ThrowInsufficientInformation_m1747464776(__this, _stringLiteral2037252898, /*hidden argument*/NULL);
	}

IL_01eb:
	{
		String_t* L_65 = __this->get_m_assemblyName_6();
		if (L_65)
		{
			goto IL_01fe;
		}
	}
	{
		UnitySerializationHolder_ThrowInsufficientInformation_m1747464776(__this, _stringLiteral209558951, /*hidden argument*/NULL);
	}

IL_01fe:
	{
		String_t* L_66 = __this->get_m_assemblyName_6();
		Assembly_t * L_67 = Assembly_Load_m3487507613(NULL /*static, unused*/, L_66, /*hidden argument*/NULL);
		return L_67;
	}

IL_020a:
	{
		String_t* L_68 = Environment_GetResourceString_m2063689938(NULL /*static, unused*/, _stringLiteral3407159193, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_69 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_69, L_68, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_69, NULL, UnitySerializationHolder_GetRealObject_m1624354633_RuntimeMethod_var);
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
// System.Boolean System.ValueTuple::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool ValueTuple_Equals_m3777586424 (ValueTuple_t3168505507 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueTuple_Equals_m3777586424_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		return (bool)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, ValueTuple_t3168505507_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
extern "C"  bool ValueTuple_Equals_m3777586424_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	ValueTuple_t3168505507 * _thisAdjusted = reinterpret_cast<ValueTuple_t3168505507 *>(__this + 1);
	return ValueTuple_Equals_m3777586424(_thisAdjusted, ___obj0, method);
}
// System.Boolean System.ValueTuple::Equals(System.ValueTuple)
extern "C" IL2CPP_METHOD_ATTR bool ValueTuple_Equals_m3868013840 (ValueTuple_t3168505507 * __this, ValueTuple_t3168505507  ___other0, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
extern "C"  bool ValueTuple_Equals_m3868013840_AdjustorThunk (RuntimeObject * __this, ValueTuple_t3168505507  ___other0, const RuntimeMethod* method)
{
	ValueTuple_t3168505507 * _thisAdjusted = reinterpret_cast<ValueTuple_t3168505507 *>(__this + 1);
	return ValueTuple_Equals_m3868013840(_thisAdjusted, ___other0, method);
}
// System.Boolean System.ValueTuple::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
extern "C" IL2CPP_METHOD_ATTR bool ValueTuple_System_Collections_IStructuralEquatable_Equals_m1158377527 (ValueTuple_t3168505507 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueTuple_System_Collections_IStructuralEquatable_Equals_m1158377527_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___other0;
		return (bool)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, ValueTuple_t3168505507_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
extern "C"  bool ValueTuple_System_Collections_IStructuralEquatable_Equals_m1158377527_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	ValueTuple_t3168505507 * _thisAdjusted = reinterpret_cast<ValueTuple_t3168505507 *>(__this + 1);
	return ValueTuple_System_Collections_IStructuralEquatable_Equals_m1158377527(_thisAdjusted, ___other0, ___comparer1, method);
}
// System.Int32 System.ValueTuple::System.IComparable.CompareTo(System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t ValueTuple_System_IComparable_CompareTo_m3152321575 (ValueTuple_t3168505507 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueTuple_System_IComparable_CompareTo_m3152321575_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_1, ValueTuple_t3168505507_il2cpp_TypeInfo_var)))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_t3168505507  L_2 = (*(ValueTuple_t3168505507 *)__this);
		RuntimeObject * L_3 = Box(ValueTuple_t3168505507_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_3);
		Type_t * L_4 = Object_GetType_m88164663(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		String_t* L_6 = SR_Format_m1749913990(NULL /*static, unused*/, _stringLiteral4055290125, L_5, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_7 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_7, L_6, _stringLiteral2432405111, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, ValueTuple_System_IComparable_CompareTo_m3152321575_RuntimeMethod_var);
	}

IL_0037:
	{
		return 0;
	}
}
extern "C"  int32_t ValueTuple_System_IComparable_CompareTo_m3152321575_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	ValueTuple_t3168505507 * _thisAdjusted = reinterpret_cast<ValueTuple_t3168505507 *>(__this + 1);
	return ValueTuple_System_IComparable_CompareTo_m3152321575(_thisAdjusted, ___other0, method);
}
// System.Int32 System.ValueTuple::CompareTo(System.ValueTuple)
extern "C" IL2CPP_METHOD_ATTR int32_t ValueTuple_CompareTo_m2936302085 (ValueTuple_t3168505507 * __this, ValueTuple_t3168505507  ___other0, const RuntimeMethod* method)
{
	{
		return 0;
	}
}
extern "C"  int32_t ValueTuple_CompareTo_m2936302085_AdjustorThunk (RuntimeObject * __this, ValueTuple_t3168505507  ___other0, const RuntimeMethod* method)
{
	ValueTuple_t3168505507 * _thisAdjusted = reinterpret_cast<ValueTuple_t3168505507 *>(__this + 1);
	return ValueTuple_CompareTo_m2936302085(_thisAdjusted, ___other0, method);
}
// System.Int32 System.ValueTuple::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
extern "C" IL2CPP_METHOD_ATTR int32_t ValueTuple_System_Collections_IStructuralComparable_CompareTo_m1147772089 (ValueTuple_t3168505507 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueTuple_System_Collections_IStructuralComparable_CompareTo_m1147772089_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_1, ValueTuple_t3168505507_il2cpp_TypeInfo_var)))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_t3168505507  L_2 = (*(ValueTuple_t3168505507 *)__this);
		RuntimeObject * L_3 = Box(ValueTuple_t3168505507_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_3);
		Type_t * L_4 = Object_GetType_m88164663(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		String_t* L_6 = SR_Format_m1749913990(NULL /*static, unused*/, _stringLiteral4055290125, L_5, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_7 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_7, L_6, _stringLiteral2432405111, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, ValueTuple_System_Collections_IStructuralComparable_CompareTo_m1147772089_RuntimeMethod_var);
	}

IL_0037:
	{
		return 0;
	}
}
extern "C"  int32_t ValueTuple_System_Collections_IStructuralComparable_CompareTo_m1147772089_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	ValueTuple_t3168505507 * _thisAdjusted = reinterpret_cast<ValueTuple_t3168505507 *>(__this + 1);
	return ValueTuple_System_Collections_IStructuralComparable_CompareTo_m1147772089(_thisAdjusted, ___other0, ___comparer1, method);
}
// System.Int32 System.ValueTuple::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t ValueTuple_GetHashCode_m2158739460 (ValueTuple_t3168505507 * __this, const RuntimeMethod* method)
{
	{
		return 0;
	}
}
extern "C"  int32_t ValueTuple_GetHashCode_m2158739460_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ValueTuple_t3168505507 * _thisAdjusted = reinterpret_cast<ValueTuple_t3168505507 *>(__this + 1);
	return ValueTuple_GetHashCode_m2158739460(_thisAdjusted, method);
}
// System.Int32 System.ValueTuple::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
extern "C" IL2CPP_METHOD_ATTR int32_t ValueTuple_System_Collections_IStructuralEquatable_GetHashCode_m3160204034 (ValueTuple_t3168505507 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	{
		return 0;
	}
}
extern "C"  int32_t ValueTuple_System_Collections_IStructuralEquatable_GetHashCode_m3160204034_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	ValueTuple_t3168505507 * _thisAdjusted = reinterpret_cast<ValueTuple_t3168505507 *>(__this + 1);
	return ValueTuple_System_Collections_IStructuralEquatable_GetHashCode_m3160204034(_thisAdjusted, ___comparer0, method);
}
// System.String System.ValueTuple::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* ValueTuple_ToString_m2213345710 (ValueTuple_t3168505507 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueTuple_ToString_m2213345710_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral3450976136;
	}
}
extern "C"  String_t* ValueTuple_ToString_m2213345710_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ValueTuple_t3168505507 * _thisAdjusted = reinterpret_cast<ValueTuple_t3168505507 *>(__this + 1);
	return ValueTuple_ToString_m2213345710(_thisAdjusted, method);
}
// System.Int32 System.ValueTuple::CombineHashCodes(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t ValueTuple_CombineHashCodes_m2782652282 (RuntimeObject * __this /* static, unused */, int32_t ___h10, int32_t ___h21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueTuple_CombineHashCodes_m2782652282_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(HashHelpers_t1653534276_il2cpp_TypeInfo_var);
		int32_t L_0 = ((HashHelpers_t1653534276_StaticFields*)il2cpp_codegen_static_fields_for(HashHelpers_t1653534276_il2cpp_TypeInfo_var))->get_RandomSeed_0();
		int32_t L_1 = ___h10;
		int32_t L_2 = HashHelpers_Combine_m3459330122(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		int32_t L_3 = ___h21;
		int32_t L_4 = HashHelpers_Combine_m3459330122(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: System.ValueType
extern "C" void ValueType_t3640485471_marshal_pinvoke(const ValueType_t3640485471& unmarshaled, ValueType_t3640485471_marshaled_pinvoke& marshaled)
{
}
extern "C" void ValueType_t3640485471_marshal_pinvoke_back(const ValueType_t3640485471_marshaled_pinvoke& marshaled, ValueType_t3640485471& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: System.ValueType
extern "C" void ValueType_t3640485471_marshal_pinvoke_cleanup(ValueType_t3640485471_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.ValueType
extern "C" void ValueType_t3640485471_marshal_com(const ValueType_t3640485471& unmarshaled, ValueType_t3640485471_marshaled_com& marshaled)
{
}
extern "C" void ValueType_t3640485471_marshal_com_back(const ValueType_t3640485471_marshaled_com& marshaled, ValueType_t3640485471& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: System.ValueType
extern "C" void ValueType_t3640485471_marshal_com_cleanup(ValueType_t3640485471_marshaled_com& marshaled)
{
}
// System.Void System.ValueType::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ValueType__ctor_m2036258423 (RuntimeObject * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.ValueType::InternalEquals(System.Object,System.Object,System.Object[]&)
extern "C" IL2CPP_METHOD_ATTR bool ValueType_InternalEquals_m1384040357 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___o10, RuntimeObject * ___o21, ObjectU5BU5D_t2843939325** ___fields2, const RuntimeMethod* method)
{
	typedef bool (*ValueType_InternalEquals_m1384040357_ftn) (RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t2843939325**);
	using namespace il2cpp::icalls;
	return  ((ValueType_InternalEquals_m1384040357_ftn)mscorlib::System::ValueType::InternalEquals) (___o10, ___o21, ___fields2);
}
// System.Boolean System.ValueType::DefaultEquals(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR bool ValueType_DefaultEquals_m2927252100 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___o10, RuntimeObject * ___o21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueType_DefaultEquals_m2927252100_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeType_t3636489352 * V_0 = NULL;
	ObjectU5BU5D_t2843939325* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	RuntimeObject * V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	{
		RuntimeObject * L_0 = ___o10;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		RuntimeObject * L_1 = ___o21;
		if (L_1)
		{
			goto IL_0008;
		}
	}
	{
		return (bool)1;
	}

IL_0008:
	{
		RuntimeObject * L_2 = ___o10;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		RuntimeObject * L_3 = ___o21;
		if (L_3)
		{
			goto IL_0010;
		}
	}

IL_000e:
	{
		return (bool)0;
	}

IL_0010:
	{
		RuntimeObject * L_4 = ___o10;
		NullCheck(L_4);
		Type_t * L_5 = Object_GetType_m88164663(L_4, /*hidden argument*/NULL);
		RuntimeObject * L_6 = ___o21;
		NullCheck(L_6);
		Type_t * L_7 = Object_GetType_m88164663(L_6, /*hidden argument*/NULL);
		V_0 = ((RuntimeType_t3636489352 *)CastclassClass((RuntimeObject*)L_7, RuntimeType_t3636489352_il2cpp_TypeInfo_var));
		RuntimeType_t3636489352 * L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeType_t3636489352_il2cpp_TypeInfo_var);
		bool L_9 = RuntimeType_op_Inequality_m287584116(NULL /*static, unused*/, ((RuntimeType_t3636489352 *)CastclassClass((RuntimeObject*)L_5, RuntimeType_t3636489352_il2cpp_TypeInfo_var)), L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0031;
		}
	}
	{
		return (bool)0;
	}

IL_0031:
	{
		RuntimeObject * L_10 = ___o10;
		RuntimeObject * L_11 = ___o21;
		bool L_12 = ValueType_InternalEquals_m1384040357(NULL /*static, unused*/, L_10, L_11, (ObjectU5BU5D_t2843939325**)(&V_1), /*hidden argument*/NULL);
		V_2 = L_12;
		ObjectU5BU5D_t2843939325* L_13 = V_1;
		if (L_13)
		{
			goto IL_0040;
		}
	}
	{
		bool L_14 = V_2;
		return L_14;
	}

IL_0040:
	{
		V_3 = 0;
		goto IL_006b;
	}

IL_0044:
	{
		ObjectU5BU5D_t2843939325* L_15 = V_1;
		int32_t L_16 = V_3;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		RuntimeObject * L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_4 = L_18;
		ObjectU5BU5D_t2843939325* L_19 = V_1;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
		RuntimeObject * L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_5 = L_22;
		RuntimeObject * L_23 = V_4;
		if (L_23)
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject * L_24 = V_5;
		if (!L_24)
		{
			goto IL_0067;
		}
	}
	{
		return (bool)0;
	}

IL_005a:
	{
		RuntimeObject * L_25 = V_4;
		RuntimeObject * L_26 = V_5;
		NullCheck(L_25);
		bool L_27 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_25, L_26);
		if (L_27)
		{
			goto IL_0067;
		}
	}
	{
		return (bool)0;
	}

IL_0067:
	{
		int32_t L_28 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)2));
	}

IL_006b:
	{
		int32_t L_29 = V_3;
		ObjectU5BU5D_t2843939325* L_30 = V_1;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_30)->max_length)))))))
		{
			goto IL_0044;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean System.ValueType::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool ValueType_Equals_m1524437845 (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___obj0;
		bool L_1 = ValueType_DefaultEquals_m2927252100(NULL /*static, unused*/, __this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 System.ValueType::InternalGetHashCode(System.Object,System.Object[]&)
extern "C" IL2CPP_METHOD_ATTR int32_t ValueType_InternalGetHashCode_m58786863 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___o0, ObjectU5BU5D_t2843939325** ___fields1, const RuntimeMethod* method)
{
	typedef int32_t (*ValueType_InternalGetHashCode_m58786863_ftn) (RuntimeObject *, ObjectU5BU5D_t2843939325**);
	using namespace il2cpp::icalls;
	return  ((ValueType_InternalGetHashCode_m58786863_ftn)mscorlib::System::ValueType::InternalGetHashCode) (___o0, ___fields1);
}
// System.Int32 System.ValueType::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t ValueType_GetHashCode_m715362416 (RuntimeObject * __this, const RuntimeMethod* method)
{
	ObjectU5BU5D_t2843939325* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ValueType_InternalGetHashCode_m58786863(NULL /*static, unused*/, __this, (ObjectU5BU5D_t2843939325**)(&V_0), /*hidden argument*/NULL);
		V_1 = L_0;
		ObjectU5BU5D_t2843939325* L_1 = V_0;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		V_2 = 0;
		goto IL_0024;
	}

IL_0010:
	{
		ObjectU5BU5D_t2843939325* L_2 = V_0;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_6 = V_1;
		ObjectU5BU5D_t2843939325* L_7 = V_0;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		int32_t L_11 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_10);
		V_1 = ((int32_t)((int32_t)L_6^(int32_t)L_11));
	}

IL_0020:
	{
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0024:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t2843939325* L_14 = V_0;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_14)->max_length)))))))
		{
			goto IL_0010;
		}
	}

IL_002a:
	{
		int32_t L_15 = V_1;
		return L_15;
	}
}
// System.String System.ValueType::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* ValueType_ToString_m2292123621 (RuntimeObject * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = Object_GetType_m88164663(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Type::get_FullName() */, L_0);
		return L_1;
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
// System.Void System.Variant::Clear()
extern "C" IL2CPP_METHOD_ATTR void Variant_Clear_m3388694274 (Variant_t2753289927 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Variant_Clear_m3388694274_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int16_t L_0 = __this->get_vt_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_0015;
		}
	}
	{
		intptr_t L_1 = __this->get_bstrVal_11();
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		Marshal_FreeBSTR_m2788901813(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}

IL_0015:
	{
		int16_t L_2 = __this->get_vt_0();
		if ((((int32_t)L_2) == ((int32_t)((int32_t)9))))
		{
			goto IL_0029;
		}
	}
	{
		int16_t L_3 = __this->get_vt_0();
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_0047;
		}
	}

IL_0029:
	{
		intptr_t L_4 = __this->get_pdispVal_18();
		bool L_5 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_4, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0047;
		}
	}
	{
		intptr_t L_6 = __this->get_pdispVal_18();
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		Marshal_Release_m3880542832(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
	}

IL_0047:
	{
		return;
	}
}
extern "C"  void Variant_Clear_m3388694274_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Variant_t2753289927 * _thisAdjusted = reinterpret_cast<Variant_t2753289927 *>(__this + 1);
	Variant_Clear_m3388694274(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Version::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Version__ctor_m417728625 (Version_t3456873960 * __this, int32_t ___major0, int32_t ___minor1, int32_t ___build2, int32_t ___revision3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version__ctor_m417728625_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set__Build_2((-1));
		__this->set__Revision_3((-1));
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___major0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_002d;
		}
	}
	{
		String_t* L_1 = Environment_GetResourceString_m2063689938(NULL /*static, unused*/, _stringLiteral2448690427, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_2, _stringLiteral419133523, L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Version__ctor_m417728625_RuntimeMethod_var);
	}

IL_002d:
	{
		int32_t L_3 = ___minor1;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_4 = Environment_GetResourceString_m2063689938(NULL /*static, unused*/, _stringLiteral2448690427, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_5 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_5, _stringLiteral2762033855, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, Version__ctor_m417728625_RuntimeMethod_var);
	}

IL_0046:
	{
		int32_t L_6 = ___build2;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_005f;
		}
	}
	{
		String_t* L_7 = Environment_GetResourceString_m2063689938(NULL /*static, unused*/, _stringLiteral2448690427, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_8 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_8, _stringLiteral437191301, L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, NULL, Version__ctor_m417728625_RuntimeMethod_var);
	}

IL_005f:
	{
		int32_t L_9 = ___revision3;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		String_t* L_10 = Environment_GetResourceString_m2063689938(NULL /*static, unused*/, _stringLiteral2448690427, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_11 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_11, _stringLiteral3187820736, L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, NULL, Version__ctor_m417728625_RuntimeMethod_var);
	}

IL_0079:
	{
		int32_t L_12 = ___major0;
		__this->set__Major_0(L_12);
		int32_t L_13 = ___minor1;
		__this->set__Minor_1(L_13);
		int32_t L_14 = ___build2;
		__this->set__Build_2(L_14);
		int32_t L_15 = ___revision3;
		__this->set__Revision_3(L_15);
		return;
	}
}
// System.Void System.Version::.ctor(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Version__ctor_m3537335798 (Version_t3456873960 * __this, int32_t ___major0, int32_t ___minor1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version__ctor_m3537335798_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set__Build_2((-1));
		__this->set__Revision_3((-1));
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___major0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_002d;
		}
	}
	{
		String_t* L_1 = Environment_GetResourceString_m2063689938(NULL /*static, unused*/, _stringLiteral2448690427, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_2, _stringLiteral419133523, L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Version__ctor_m3537335798_RuntimeMethod_var);
	}

IL_002d:
	{
		int32_t L_3 = ___minor1;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_4 = Environment_GetResourceString_m2063689938(NULL /*static, unused*/, _stringLiteral2448690427, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_5 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_5, _stringLiteral2762033855, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, Version__ctor_m3537335798_RuntimeMethod_var);
	}

IL_0046:
	{
		int32_t L_6 = ___major0;
		__this->set__Major_0(L_6);
		int32_t L_7 = ___minor1;
		__this->set__Minor_1(L_7);
		return;
	}
}
// System.Void System.Version::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Version__ctor_m872301635 (Version_t3456873960 * __this, const RuntimeMethod* method)
{
	{
		__this->set__Build_2((-1));
		__this->set__Revision_3((-1));
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		__this->set__Major_0(0);
		__this->set__Minor_1(0);
		return;
	}
}
// System.Int32 System.Version::get_Major()
extern "C" IL2CPP_METHOD_ATTR int32_t Version_get_Major_m2457928275 (Version_t3456873960 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__Major_0();
		return L_0;
	}
}
// System.Int32 System.Version::get_Minor()
extern "C" IL2CPP_METHOD_ATTR int32_t Version_get_Minor_m150536655 (Version_t3456873960 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__Minor_1();
		return L_0;
	}
}
// System.Int32 System.Version::get_Build()
extern "C" IL2CPP_METHOD_ATTR int32_t Version_get_Build_m3667751407 (Version_t3456873960 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__Build_2();
		return L_0;
	}
}
// System.Int32 System.Version::get_Revision()
extern "C" IL2CPP_METHOD_ATTR int32_t Version_get_Revision_m3982234017 (Version_t3456873960 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__Revision_3();
		return L_0;
	}
}
// System.Object System.Version::Clone()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Version_Clone_m1749041863 (Version_t3456873960 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_Clone_m1749041863_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Version_t3456873960 * L_0 = (Version_t3456873960 *)il2cpp_codegen_object_new(Version_t3456873960_il2cpp_TypeInfo_var);
		Version__ctor_m872301635(L_0, /*hidden argument*/NULL);
		Version_t3456873960 * L_1 = L_0;
		int32_t L_2 = __this->get__Major_0();
		NullCheck(L_1);
		L_1->set__Major_0(L_2);
		Version_t3456873960 * L_3 = L_1;
		int32_t L_4 = __this->get__Minor_1();
		NullCheck(L_3);
		L_3->set__Minor_1(L_4);
		Version_t3456873960 * L_5 = L_3;
		int32_t L_6 = __this->get__Build_2();
		NullCheck(L_5);
		L_5->set__Build_2(L_6);
		Version_t3456873960 * L_7 = L_5;
		int32_t L_8 = __this->get__Revision_3();
		NullCheck(L_7);
		L_7->set__Revision_3(L_8);
		return L_7;
	}
}
// System.Int32 System.Version::CompareTo(System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t Version_CompareTo_m1662919407 (Version_t3456873960 * __this, RuntimeObject * ___version0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_CompareTo_m1662919407_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Version_t3456873960 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___version0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___version0;
		V_0 = ((Version_t3456873960 *)IsInstSealed((RuntimeObject*)L_1, Version_t3456873960_il2cpp_TypeInfo_var));
		Version_t3456873960 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Version_t3456873960_il2cpp_TypeInfo_var);
		bool L_3 = Version_op_Equality_m3804852517(NULL /*static, unused*/, L_2, (Version_t3456873960 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_4 = Environment_GetResourceString_m2063689938(NULL /*static, unused*/, _stringLiteral1182144617, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_5 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_5, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, Version_CompareTo_m1662919407_RuntimeMethod_var);
	}

IL_0025:
	{
		int32_t L_6 = __this->get__Major_0();
		Version_t3456873960 * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = L_7->get__Major_0();
		if ((((int32_t)L_6) == ((int32_t)L_8)))
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_9 = __this->get__Major_0();
		Version_t3456873960 * L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = L_10->get__Major_0();
		if ((((int32_t)L_9) <= ((int32_t)L_11)))
		{
			goto IL_0043;
		}
	}
	{
		return 1;
	}

IL_0043:
	{
		return (-1);
	}

IL_0045:
	{
		int32_t L_12 = __this->get__Minor_1();
		Version_t3456873960 * L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = L_13->get__Minor_1();
		if ((((int32_t)L_12) == ((int32_t)L_14)))
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_15 = __this->get__Minor_1();
		Version_t3456873960 * L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17 = L_16->get__Minor_1();
		if ((((int32_t)L_15) <= ((int32_t)L_17)))
		{
			goto IL_0063;
		}
	}
	{
		return 1;
	}

IL_0063:
	{
		return (-1);
	}

IL_0065:
	{
		int32_t L_18 = __this->get__Build_2();
		Version_t3456873960 * L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20 = L_19->get__Build_2();
		if ((((int32_t)L_18) == ((int32_t)L_20)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_21 = __this->get__Build_2();
		Version_t3456873960 * L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23 = L_22->get__Build_2();
		if ((((int32_t)L_21) <= ((int32_t)L_23)))
		{
			goto IL_0083;
		}
	}
	{
		return 1;
	}

IL_0083:
	{
		return (-1);
	}

IL_0085:
	{
		int32_t L_24 = __this->get__Revision_3();
		Version_t3456873960 * L_25 = V_0;
		NullCheck(L_25);
		int32_t L_26 = L_25->get__Revision_3();
		if ((((int32_t)L_24) == ((int32_t)L_26)))
		{
			goto IL_00a5;
		}
	}
	{
		int32_t L_27 = __this->get__Revision_3();
		Version_t3456873960 * L_28 = V_0;
		NullCheck(L_28);
		int32_t L_29 = L_28->get__Revision_3();
		if ((((int32_t)L_27) <= ((int32_t)L_29)))
		{
			goto IL_00a3;
		}
	}
	{
		return 1;
	}

IL_00a3:
	{
		return (-1);
	}

IL_00a5:
	{
		return 0;
	}
}
// System.Int32 System.Version::CompareTo(System.Version)
extern "C" IL2CPP_METHOD_ATTR int32_t Version_CompareTo_m3146217210 (Version_t3456873960 * __this, Version_t3456873960 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_CompareTo_m3146217210_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Version_t3456873960 * L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Version_t3456873960_il2cpp_TypeInfo_var);
		bool L_1 = Version_op_Equality_m3804852517(NULL /*static, unused*/, L_0, (Version_t3456873960 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		return 1;
	}

IL_000b:
	{
		int32_t L_2 = __this->get__Major_0();
		Version_t3456873960 * L_3 = ___value0;
		NullCheck(L_3);
		int32_t L_4 = L_3->get__Major_0();
		if ((((int32_t)L_2) == ((int32_t)L_4)))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_5 = __this->get__Major_0();
		Version_t3456873960 * L_6 = ___value0;
		NullCheck(L_6);
		int32_t L_7 = L_6->get__Major_0();
		if ((((int32_t)L_5) <= ((int32_t)L_7)))
		{
			goto IL_0029;
		}
	}
	{
		return 1;
	}

IL_0029:
	{
		return (-1);
	}

IL_002b:
	{
		int32_t L_8 = __this->get__Minor_1();
		Version_t3456873960 * L_9 = ___value0;
		NullCheck(L_9);
		int32_t L_10 = L_9->get__Minor_1();
		if ((((int32_t)L_8) == ((int32_t)L_10)))
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_11 = __this->get__Minor_1();
		Version_t3456873960 * L_12 = ___value0;
		NullCheck(L_12);
		int32_t L_13 = L_12->get__Minor_1();
		if ((((int32_t)L_11) <= ((int32_t)L_13)))
		{
			goto IL_0049;
		}
	}
	{
		return 1;
	}

IL_0049:
	{
		return (-1);
	}

IL_004b:
	{
		int32_t L_14 = __this->get__Build_2();
		Version_t3456873960 * L_15 = ___value0;
		NullCheck(L_15);
		int32_t L_16 = L_15->get__Build_2();
		if ((((int32_t)L_14) == ((int32_t)L_16)))
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_17 = __this->get__Build_2();
		Version_t3456873960 * L_18 = ___value0;
		NullCheck(L_18);
		int32_t L_19 = L_18->get__Build_2();
		if ((((int32_t)L_17) <= ((int32_t)L_19)))
		{
			goto IL_0069;
		}
	}
	{
		return 1;
	}

IL_0069:
	{
		return (-1);
	}

IL_006b:
	{
		int32_t L_20 = __this->get__Revision_3();
		Version_t3456873960 * L_21 = ___value0;
		NullCheck(L_21);
		int32_t L_22 = L_21->get__Revision_3();
		if ((((int32_t)L_20) == ((int32_t)L_22)))
		{
			goto IL_008b;
		}
	}
	{
		int32_t L_23 = __this->get__Revision_3();
		Version_t3456873960 * L_24 = ___value0;
		NullCheck(L_24);
		int32_t L_25 = L_24->get__Revision_3();
		if ((((int32_t)L_23) <= ((int32_t)L_25)))
		{
			goto IL_0089;
		}
	}
	{
		return 1;
	}

IL_0089:
	{
		return (-1);
	}

IL_008b:
	{
		return 0;
	}
}
// System.Boolean System.Version::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Version_Equals_m3073813696 (Version_t3456873960 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_Equals_m3073813696_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Version_t3456873960 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___obj0;
		V_0 = ((Version_t3456873960 *)IsInstSealed((RuntimeObject*)L_0, Version_t3456873960_il2cpp_TypeInfo_var));
		Version_t3456873960 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Version_t3456873960_il2cpp_TypeInfo_var);
		bool L_2 = Version_op_Equality_m3804852517(NULL /*static, unused*/, L_1, (Version_t3456873960 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		int32_t L_3 = __this->get__Major_0();
		Version_t3456873960 * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = L_4->get__Major_0();
		if ((!(((uint32_t)L_3) == ((uint32_t)L_5))))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_6 = __this->get__Minor_1();
		Version_t3456873960 * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = L_7->get__Minor_1();
		if ((!(((uint32_t)L_6) == ((uint32_t)L_8))))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_9 = __this->get__Build_2();
		Version_t3456873960 * L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = L_10->get__Build_2();
		if ((!(((uint32_t)L_9) == ((uint32_t)L_11))))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_12 = __this->get__Revision_3();
		Version_t3456873960 * L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = L_13->get__Revision_3();
		if ((((int32_t)L_12) == ((int32_t)L_14)))
		{
			goto IL_004c;
		}
	}

IL_004a:
	{
		return (bool)0;
	}

IL_004c:
	{
		return (bool)1;
	}
}
// System.Boolean System.Version::Equals(System.Version)
extern "C" IL2CPP_METHOD_ATTR bool Version_Equals_m1564427710 (Version_t3456873960 * __this, Version_t3456873960 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_Equals_m1564427710_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Version_t3456873960 * L_0 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Version_t3456873960_il2cpp_TypeInfo_var);
		bool L_1 = Version_op_Equality_m3804852517(NULL /*static, unused*/, L_0, (Version_t3456873960 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		return (bool)0;
	}

IL_000b:
	{
		int32_t L_2 = __this->get__Major_0();
		Version_t3456873960 * L_3 = ___obj0;
		NullCheck(L_3);
		int32_t L_4 = L_3->get__Major_0();
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_5 = __this->get__Minor_1();
		Version_t3456873960 * L_6 = ___obj0;
		NullCheck(L_6);
		int32_t L_7 = L_6->get__Minor_1();
		if ((!(((uint32_t)L_5) == ((uint32_t)L_7))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_8 = __this->get__Build_2();
		Version_t3456873960 * L_9 = ___obj0;
		NullCheck(L_9);
		int32_t L_10 = L_9->get__Build_2();
		if ((!(((uint32_t)L_8) == ((uint32_t)L_10))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_11 = __this->get__Revision_3();
		Version_t3456873960 * L_12 = ___obj0;
		NullCheck(L_12);
		int32_t L_13 = L_12->get__Revision_3();
		if ((((int32_t)L_11) == ((int32_t)L_13)))
		{
			goto IL_0045;
		}
	}

IL_0043:
	{
		return (bool)0;
	}

IL_0045:
	{
		return (bool)1;
	}
}
// System.Int32 System.Version::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Version_GetHashCode_m672974201 (Version_t3456873960 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__Major_0();
		int32_t L_1 = __this->get__Minor_1();
		int32_t L_2 = __this->get__Build_2();
		int32_t L_3 = __this->get__Revision_3();
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)0|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)15)))<<(int32_t)((int32_t)28)))))|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)20)))))|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)12)))))|(int32_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)4095)))));
	}
}
// System.String System.Version::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Version_ToString_m2279867705 (Version_t3456873960 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__Build_2();
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_1 = Version_ToString_m3654989516(__this, 2, /*hidden argument*/NULL);
		return L_1;
	}

IL_0011:
	{
		int32_t L_2 = __this->get__Revision_3();
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_3 = Version_ToString_m3654989516(__this, 3, /*hidden argument*/NULL);
		return L_3;
	}

IL_0022:
	{
		String_t* L_4 = Version_ToString_m3654989516(__this, 4, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.String System.Version::ToString(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* Version_ToString_m3654989516 (Version_t3456873960 * __this, int32_t ___fieldCount0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_ToString_m3654989516_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	{
		int32_t L_0 = ___fieldCount0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0014;
			}
			case 1:
			{
				goto IL_001a;
			}
			case 2:
			{
				goto IL_0026;
			}
		}
	}
	{
		goto IL_0056;
	}

IL_0014:
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_1;
	}

IL_001a:
	{
		int32_t* L_2 = __this->get_address_of__Major_0();
		String_t* L_3 = Int32_ToString_m141394615((int32_t*)L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0026:
	{
		StringBuilder_t * L_4 = StringBuilderCache_Acquire_m4169564332(NULL /*static, unused*/, ((int32_t)16), /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = __this->get__Major_0();
		StringBuilder_t * L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Version_t3456873960_il2cpp_TypeInfo_var);
		Version_AppendPositiveNumber_m308762805(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		StringBuilder_t * L_7 = V_0;
		NullCheck(L_7);
		StringBuilder_Append_m2383614642(L_7, ((int32_t)46), /*hidden argument*/NULL);
		int32_t L_8 = __this->get__Minor_1();
		StringBuilder_t * L_9 = V_0;
		Version_AppendPositiveNumber_m308762805(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		StringBuilder_t * L_10 = V_0;
		String_t* L_11 = StringBuilderCache_GetStringAndRelease_m1110745745(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		return L_11;
	}

IL_0056:
	{
		int32_t L_12 = __this->get__Build_2();
		if ((!(((uint32_t)L_12) == ((uint32_t)(-1)))))
		{
			goto IL_008a;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_13 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t2843939325* L_14 = L_13;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral3452614544);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral3452614544);
		ObjectU5BU5D_t2843939325* L_15 = L_14;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral3452614542);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral3452614542);
		String_t* L_16 = Environment_GetResourceString_m479507158(NULL /*static, unused*/, _stringLiteral3104458722, L_15, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_17 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_17, L_16, _stringLiteral3976682977, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, NULL, Version_ToString_m3654989516_RuntimeMethod_var);
	}

IL_008a:
	{
		int32_t L_18 = ___fieldCount0;
		if ((!(((uint32_t)L_18) == ((uint32_t)3))))
		{
			goto IL_00d3;
		}
	}
	{
		StringBuilder_t * L_19 = StringBuilderCache_Acquire_m4169564332(NULL /*static, unused*/, ((int32_t)16), /*hidden argument*/NULL);
		V_0 = L_19;
		int32_t L_20 = __this->get__Major_0();
		StringBuilder_t * L_21 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Version_t3456873960_il2cpp_TypeInfo_var);
		Version_AppendPositiveNumber_m308762805(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/NULL);
		StringBuilder_t * L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_Append_m2383614642(L_22, ((int32_t)46), /*hidden argument*/NULL);
		int32_t L_23 = __this->get__Minor_1();
		StringBuilder_t * L_24 = V_0;
		Version_AppendPositiveNumber_m308762805(NULL /*static, unused*/, L_23, L_24, /*hidden argument*/NULL);
		StringBuilder_t * L_25 = V_0;
		NullCheck(L_25);
		StringBuilder_Append_m2383614642(L_25, ((int32_t)46), /*hidden argument*/NULL);
		int32_t L_26 = __this->get__Build_2();
		StringBuilder_t * L_27 = V_0;
		Version_AppendPositiveNumber_m308762805(NULL /*static, unused*/, L_26, L_27, /*hidden argument*/NULL);
		StringBuilder_t * L_28 = V_0;
		String_t* L_29 = StringBuilderCache_GetStringAndRelease_m1110745745(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
		return L_29;
	}

IL_00d3:
	{
		int32_t L_30 = __this->get__Revision_3();
		if ((!(((uint32_t)L_30) == ((uint32_t)(-1)))))
		{
			goto IL_0107;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_31 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t2843939325* L_32 = L_31;
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, _stringLiteral3452614544);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral3452614544);
		ObjectU5BU5D_t2843939325* L_33 = L_32;
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, _stringLiteral3452614541);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral3452614541);
		String_t* L_34 = Environment_GetResourceString_m479507158(NULL /*static, unused*/, _stringLiteral3104458722, L_33, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_35 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_35, L_34, _stringLiteral3976682977, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, NULL, Version_ToString_m3654989516_RuntimeMethod_var);
	}

IL_0107:
	{
		int32_t L_36 = ___fieldCount0;
		if ((!(((uint32_t)L_36) == ((uint32_t)4))))
		{
			goto IL_0165;
		}
	}
	{
		StringBuilder_t * L_37 = StringBuilderCache_Acquire_m4169564332(NULL /*static, unused*/, ((int32_t)16), /*hidden argument*/NULL);
		V_0 = L_37;
		int32_t L_38 = __this->get__Major_0();
		StringBuilder_t * L_39 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Version_t3456873960_il2cpp_TypeInfo_var);
		Version_AppendPositiveNumber_m308762805(NULL /*static, unused*/, L_38, L_39, /*hidden argument*/NULL);
		StringBuilder_t * L_40 = V_0;
		NullCheck(L_40);
		StringBuilder_Append_m2383614642(L_40, ((int32_t)46), /*hidden argument*/NULL);
		int32_t L_41 = __this->get__Minor_1();
		StringBuilder_t * L_42 = V_0;
		Version_AppendPositiveNumber_m308762805(NULL /*static, unused*/, L_41, L_42, /*hidden argument*/NULL);
		StringBuilder_t * L_43 = V_0;
		NullCheck(L_43);
		StringBuilder_Append_m2383614642(L_43, ((int32_t)46), /*hidden argument*/NULL);
		int32_t L_44 = __this->get__Build_2();
		StringBuilder_t * L_45 = V_0;
		Version_AppendPositiveNumber_m308762805(NULL /*static, unused*/, L_44, L_45, /*hidden argument*/NULL);
		StringBuilder_t * L_46 = V_0;
		NullCheck(L_46);
		StringBuilder_Append_m2383614642(L_46, ((int32_t)46), /*hidden argument*/NULL);
		int32_t L_47 = __this->get__Revision_3();
		StringBuilder_t * L_48 = V_0;
		Version_AppendPositiveNumber_m308762805(NULL /*static, unused*/, L_47, L_48, /*hidden argument*/NULL);
		StringBuilder_t * L_49 = V_0;
		String_t* L_50 = StringBuilderCache_GetStringAndRelease_m1110745745(NULL /*static, unused*/, L_49, /*hidden argument*/NULL);
		return L_50;
	}

IL_0165:
	{
		ObjectU5BU5D_t2843939325* L_51 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t2843939325* L_52 = L_51;
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, _stringLiteral3452614544);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral3452614544);
		ObjectU5BU5D_t2843939325* L_53 = L_52;
		NullCheck(L_53);
		ArrayElementTypeCheck (L_53, _stringLiteral3452614540);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral3452614540);
		String_t* L_54 = Environment_GetResourceString_m479507158(NULL /*static, unused*/, _stringLiteral3104458722, L_53, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_55 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_55, L_54, _stringLiteral3976682977, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_55, NULL, Version_ToString_m3654989516_RuntimeMethod_var);
	}
}
// System.Void System.Version::AppendPositiveNumber(System.Int32,System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR void Version_AppendPositiveNumber_m308762805 (RuntimeObject * __this /* static, unused */, int32_t ___num0, StringBuilder_t * ___sb1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		StringBuilder_t * L_0 = ___sb1;
		NullCheck(L_0);
		int32_t L_1 = StringBuilder_get_Length_m3238060835(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0007:
	{
		int32_t L_2 = ___num0;
		V_1 = ((int32_t)((int32_t)L_2%(int32_t)((int32_t)10)));
		int32_t L_3 = ___num0;
		___num0 = ((int32_t)((int32_t)L_3/(int32_t)((int32_t)10)));
		StringBuilder_t * L_4 = ___sb1;
		int32_t L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_4);
		StringBuilder_Insert_m1076119876(L_4, L_5, (((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)48), (int32_t)L_6))))), /*hidden argument*/NULL);
		int32_t L_7 = ___num0;
		if ((((int32_t)L_7) > ((int32_t)0)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Boolean System.Version::op_Equality(System.Version,System.Version)
extern "C" IL2CPP_METHOD_ATTR bool Version_op_Equality_m3804852517 (RuntimeObject * __this /* static, unused */, Version_t3456873960 * ___v10, Version_t3456873960 * ___v21, const RuntimeMethod* method)
{
	{
		Version_t3456873960 * L_0 = ___v10;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		Version_t3456873960 * L_1 = ___v21;
		return (bool)((((RuntimeObject*)(Version_t3456873960 *)L_1) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
	}

IL_0008:
	{
		Version_t3456873960 * L_2 = ___v10;
		Version_t3456873960 * L_3 = ___v21;
		NullCheck(L_2);
		bool L_4 = Version_Equals_m1564427710(L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean System.Version::op_Inequality(System.Version,System.Version)
extern "C" IL2CPP_METHOD_ATTR bool Version_op_Inequality_m1696193441 (RuntimeObject * __this /* static, unused */, Version_t3456873960 * ___v10, Version_t3456873960 * ___v21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_op_Inequality_m1696193441_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Version_t3456873960 * L_0 = ___v10;
		Version_t3456873960 * L_1 = ___v21;
		IL2CPP_RUNTIME_CLASS_INIT(Version_t3456873960_il2cpp_TypeInfo_var);
		bool L_2 = Version_op_Equality_m3804852517(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Version::op_LessThan(System.Version,System.Version)
extern "C" IL2CPP_METHOD_ATTR bool Version_op_LessThan_m3745610070 (RuntimeObject * __this /* static, unused */, Version_t3456873960 * ___v10, Version_t3456873960 * ___v21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_op_LessThan_m3745610070_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Version_t3456873960 * L_0 = ___v10;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3451500490, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Version_op_LessThan_m3745610070_RuntimeMethod_var);
	}

IL_000e:
	{
		Version_t3456873960 * L_2 = ___v10;
		Version_t3456873960 * L_3 = ___v21;
		NullCheck(L_2);
		int32_t L_4 = Version_CompareTo_m3146217210(L_2, L_3, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_4) < ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Version::op_LessThanOrEqual(System.Version,System.Version)
extern "C" IL2CPP_METHOD_ATTR bool Version_op_LessThanOrEqual_m666140174 (RuntimeObject * __this /* static, unused */, Version_t3456873960 * ___v10, Version_t3456873960 * ___v21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_op_LessThanOrEqual_m666140174_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Version_t3456873960 * L_0 = ___v10;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3451500490, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Version_op_LessThanOrEqual_m666140174_RuntimeMethod_var);
	}

IL_000e:
	{
		Version_t3456873960 * L_2 = ___v10;
		Version_t3456873960 * L_3 = ___v21;
		NullCheck(L_2);
		int32_t L_4 = Version_CompareTo_m3146217210(L_2, L_3, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_4) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Version::op_GreaterThanOrEqual(System.Version,System.Version)
extern "C" IL2CPP_METHOD_ATTR bool Version_op_GreaterThanOrEqual_m474945801 (RuntimeObject * __this /* static, unused */, Version_t3456873960 * ___v10, Version_t3456873960 * ___v21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_op_GreaterThanOrEqual_m474945801_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Version_t3456873960 * L_0 = ___v21;
		Version_t3456873960 * L_1 = ___v10;
		IL2CPP_RUNTIME_CLASS_INIT(Version_t3456873960_il2cpp_TypeInfo_var);
		bool L_2 = Version_op_LessThanOrEqual_m666140174(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void System.Version::.cctor()
extern "C" IL2CPP_METHOD_ATTR void Version__cctor_m3568671087 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version__cctor_m3568671087_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t3528271667* L_0 = (CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t3528271667* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)46));
		((Version_t3456873960_StaticFields*)il2cpp_codegen_static_fields_for(Version_t3456873960_il2cpp_TypeInfo_var))->set_SeparatorsArray_4(L_1);
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
// System.Void System.WeakReference::AllocateHandle(System.Object)
extern "C" IL2CPP_METHOD_ATTR void WeakReference_AllocateHandle_m1478975559 (WeakReference_t1334886716 * __this, RuntimeObject * ___target0, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isLongReference_0();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject * L_1 = ___target0;
		GCHandle_t3351438187  L_2 = GCHandle_Alloc_m3823409740(NULL /*static, unused*/, L_1, 1, /*hidden argument*/NULL);
		__this->set_gcHandle_1(L_2);
		return;
	}

IL_0016:
	{
		RuntimeObject * L_3 = ___target0;
		GCHandle_t3351438187  L_4 = GCHandle_Alloc_m3823409740(NULL /*static, unused*/, L_3, 0, /*hidden argument*/NULL);
		__this->set_gcHandle_1(L_4);
		return;
	}
}
// System.Void System.WeakReference::.ctor(System.Object)
extern "C" IL2CPP_METHOD_ATTR void WeakReference__ctor_m2401547918 (WeakReference_t1334886716 * __this, RuntimeObject * ___target0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___target0;
		WeakReference__ctor_m1054065938(__this, L_0, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.WeakReference::.ctor(System.Object,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void WeakReference__ctor_m1054065938 (WeakReference_t1334886716 * __this, RuntimeObject * ___target0, bool ___trackResurrection1, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		bool L_0 = ___trackResurrection1;
		__this->set_isLongReference_0(L_0);
		RuntimeObject * L_1 = ___target0;
		WeakReference_AllocateHandle_m1478975559(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.WeakReference::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void WeakReference__ctor_m1244067698 (WeakReference_t1334886716 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeakReference__ctor_m1244067698_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral79347, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, WeakReference__ctor_m1244067698_RuntimeMethod_var);
	}

IL_0014:
	{
		SerializationInfo_t950877179 * L_2 = ___info0;
		NullCheck(L_2);
		bool L_3 = SerializationInfo_GetBoolean_m1756153320(L_2, _stringLiteral3234942771, /*hidden argument*/NULL);
		__this->set_isLongReference_0(L_3);
		SerializationInfo_t950877179 * L_4 = ___info0;
		RuntimeTypeHandle_t3027515415  L_5 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		RuntimeObject * L_7 = SerializationInfo_GetValue_m42271953(L_4, _stringLiteral2922588279, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		RuntimeObject * L_8 = V_0;
		WeakReference_AllocateHandle_m1478975559(__this, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.WeakReference::get_IsAlive()
extern "C" IL2CPP_METHOD_ATTR bool WeakReference_get_IsAlive_m1867740323 (WeakReference_t1334886716 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = VirtFuncInvoker0< RuntimeObject * >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, __this);
		return (bool)((!(((RuntimeObject*)(RuntimeObject *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Object System.WeakReference::get_Target()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * WeakReference_get_Target_m168713953 (WeakReference_t1334886716 * __this, const RuntimeMethod* method)
{
	{
		GCHandle_t3351438187 * L_0 = __this->get_address_of_gcHandle_1();
		bool L_1 = GCHandle_get_IsAllocated_m1058226959((GCHandle_t3351438187 *)L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return NULL;
	}

IL_000f:
	{
		GCHandle_t3351438187 * L_2 = __this->get_address_of_gcHandle_1();
		RuntimeObject * L_3 = GCHandle_get_Target_m1824973883((GCHandle_t3351438187 *)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean System.WeakReference::get_TrackResurrection()
extern "C" IL2CPP_METHOD_ATTR bool WeakReference_get_TrackResurrection_m942701017 (WeakReference_t1334886716 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isLongReference_0();
		return L_0;
	}
}
// System.Void System.WeakReference::Finalize()
extern "C" IL2CPP_METHOD_ATTR void WeakReference_Finalize_m2841826116 (WeakReference_t1334886716 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		GCHandle_t3351438187 * L_0 = __this->get_address_of_gcHandle_1();
		GCHandle_Free_m1457699368((GCHandle_t3351438187 *)L_0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x14, FINALLY_000d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000d;
	}

FINALLY_000d:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(13)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(13)
	{
		IL2CPP_JUMP_TBL(0x14, IL_0014)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0014:
	{
		return;
	}
}
// System.Void System.WeakReference::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void WeakReference_GetObjectData_m2192383095 (WeakReference_t1334886716 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeakReference_GetObjectData_m2192383095_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		SerializationInfo_t950877179 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral79347, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, WeakReference_GetObjectData_m2192383095_RuntimeMethod_var);
	}

IL_000e:
	{
		SerializationInfo_t950877179 * L_2 = ___info0;
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.WeakReference::get_TrackResurrection() */, __this);
		NullCheck(L_2);
		SerializationInfo_AddValue_m3427199315(L_2, _stringLiteral3234942771, L_3, /*hidden argument*/NULL);
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		SerializationInfo_t950877179 * L_4 = ___info0;
		RuntimeObject * L_5 = VirtFuncInvoker0< RuntimeObject * >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, __this);
		NullCheck(L_4);
		SerializationInfo_AddValue_m2872281893(L_4, _stringLiteral2922588279, L_5, /*hidden argument*/NULL);
		goto IL_0041;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0032;
		throw e;
	}

CATCH_0032:
	{ // begin catch(System.Exception)
		SerializationInfo_t950877179 * L_6 = ___info0;
		NullCheck(L_6);
		SerializationInfo_AddValue_m2872281893(L_6, _stringLiteral2922588279, NULL, /*hidden argument*/NULL);
		goto IL_0041;
	} // end catch (depth: 1)

IL_0041:
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
// System.Void System.WindowsConsoleDriver::.ctor()
extern "C" IL2CPP_METHOD_ATTR void WindowsConsoleDriver__ctor_m141100690 (WindowsConsoleDriver_t3991887195 * __this, const RuntimeMethod* method)
{
	ConsoleScreenBufferInfo_t3095351730  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		intptr_t L_0 = WindowsConsoleDriver_GetStdHandle_m23119533(NULL /*static, unused*/, ((int32_t)-11), /*hidden argument*/NULL);
		__this->set_outputHandle_1(L_0);
		intptr_t L_1 = WindowsConsoleDriver_GetStdHandle_m23119533(NULL /*static, unused*/, ((int32_t)-10), /*hidden argument*/NULL);
		__this->set_inputHandle_0(L_1);
		il2cpp_codegen_initobj((&V_0), sizeof(ConsoleScreenBufferInfo_t3095351730 ));
		intptr_t L_2 = __this->get_outputHandle_1();
		WindowsConsoleDriver_GetConsoleScreenBufferInfo_m3609341087(NULL /*static, unused*/, L_2, (ConsoleScreenBufferInfo_t3095351730 *)(&V_0), /*hidden argument*/NULL);
		ConsoleScreenBufferInfo_t3095351730  L_3 = V_0;
		int16_t L_4 = L_3.get_Attribute_2();
		__this->set_defaultAttribute_2(L_4);
		return;
	}
}
// System.ConsoleKeyInfo System.WindowsConsoleDriver::ReadKey(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR ConsoleKeyInfo_t1802691652  WindowsConsoleDriver_ReadKey_m209631140 (WindowsConsoleDriver_t3991887195 * __this, bool ___intercept0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsConsoleDriver_ReadKey_m209631140_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	InputRecord_t2660212290  V_1;
	memset(&V_1, 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		il2cpp_codegen_initobj((&V_1), sizeof(InputRecord_t2660212290 ));
	}

IL_0008:
	{
		intptr_t L_0 = __this->get_inputHandle_0();
		bool L_1 = WindowsConsoleDriver_ReadConsoleInput_m1790694890(NULL /*static, unused*/, L_0, (InputRecord_t2660212290 *)(&V_1), 1, (int32_t*)(&V_0), /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0034;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		int32_t L_2 = Marshal_GetLastWin32Error_m1272610344(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral1071424308, L_4, /*hidden argument*/NULL);
		InvalidOperationException_t56020091 * L_6 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_6, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, WindowsConsoleDriver_ReadKey_m209631140_RuntimeMethod_var);
	}

IL_0034:
	{
		InputRecord_t2660212290  L_7 = V_1;
		bool L_8 = L_7.get_KeyDown_1();
		if (!L_8)
		{
			goto IL_0008;
		}
	}
	{
		InputRecord_t2660212290  L_9 = V_1;
		int16_t L_10 = L_9.get_EventType_0();
		if ((!(((uint32_t)L_10) == ((uint32_t)1))))
		{
			goto IL_0008;
		}
	}
	{
		InputRecord_t2660212290  L_11 = V_1;
		int16_t L_12 = L_11.get_VirtualKeyCode_3();
		bool L_13 = WindowsConsoleDriver_IsModifierKey_m1974886538(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0008;
		}
	}
	{
		InputRecord_t2660212290  L_14 = V_1;
		int32_t L_15 = L_14.get_ControlKeyState_6();
		V_2 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_15&(int32_t)3))) <= ((uint32_t)0)))? 1 : 0);
		InputRecord_t2660212290  L_16 = V_1;
		int32_t L_17 = L_16.get_ControlKeyState_6();
		V_3 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_17&(int32_t)((int32_t)12)))) <= ((uint32_t)0)))? 1 : 0);
		InputRecord_t2660212290  L_18 = V_1;
		int32_t L_19 = L_18.get_ControlKeyState_6();
		V_4 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_19&(int32_t)((int32_t)16)))) <= ((uint32_t)0)))? 1 : 0);
		InputRecord_t2660212290  L_20 = V_1;
		Il2CppChar L_21 = L_20.get_Character_5();
		InputRecord_t2660212290  L_22 = V_1;
		int16_t L_23 = L_22.get_VirtualKeyCode_3();
		bool L_24 = V_4;
		bool L_25 = V_2;
		bool L_26 = V_3;
		ConsoleKeyInfo_t1802691652  L_27;
		memset(&L_27, 0, sizeof(L_27));
		ConsoleKeyInfo__ctor_m535940175((&L_27), L_21, L_23, L_24, L_25, L_26, /*hidden argument*/NULL);
		return L_27;
	}
}
// System.Boolean System.WindowsConsoleDriver::IsModifierKey(System.Int16)
extern "C" IL2CPP_METHOD_ATTR bool WindowsConsoleDriver_IsModifierKey_m1974886538 (RuntimeObject * __this /* static, unused */, int16_t ___virtualKeyCode0, const RuntimeMethod* method)
{
	{
		int16_t L_0 = ___virtualKeyCode0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)((int32_t)16)))) > ((uint32_t)2))))
		{
			goto IL_0016;
		}
	}
	{
		int16_t L_1 = ___virtualKeyCode0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)20))))
		{
			goto IL_0016;
		}
	}
	{
		int16_t L_2 = ___virtualKeyCode0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)((int32_t)144)))) <= ((uint32_t)1))))
		{
			goto IL_0018;
		}
	}

IL_0016:
	{
		return (bool)1;
	}

IL_0018:
	{
		return (bool)0;
	}
}
// System.IntPtr System.WindowsConsoleDriver::GetStdHandle(System.Handles)
extern "C" IL2CPP_METHOD_ATTR intptr_t WindowsConsoleDriver_GetStdHandle_m23119533 (RuntimeObject * __this /* static, unused */, int32_t ___handle0, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "GetStdHandle", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'GetStdHandle'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___handle0);
	il2cpp_codegen_marshal_store_last_error();

	return returnValue;
}
// System.Boolean System.WindowsConsoleDriver::GetConsoleScreenBufferInfo(System.IntPtr,System.ConsoleScreenBufferInfo&)
extern "C" IL2CPP_METHOD_ATTR bool WindowsConsoleDriver_GetConsoleScreenBufferInfo_m3609341087 (RuntimeObject * __this /* static, unused */, intptr_t ___handle0, ConsoleScreenBufferInfo_t3095351730 * ___info1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, ConsoleScreenBufferInfo_t3095351730 *);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(ConsoleScreenBufferInfo_t3095351730 *);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "GetConsoleScreenBufferInfo", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'GetConsoleScreenBufferInfo'"), NULL, NULL);
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___handle0, ___info1);
	il2cpp_codegen_marshal_store_last_error();

	return static_cast<bool>(returnValue);
}
// System.Boolean System.WindowsConsoleDriver::ReadConsoleInput(System.IntPtr,System.InputRecord&,System.Int32,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR bool WindowsConsoleDriver_ReadConsoleInput_m1790694890 (RuntimeObject * __this /* static, unused */, intptr_t ___handle0, InputRecord_t2660212290 * ___record1, int32_t ___length2, int32_t* ___nread3, const RuntimeMethod* method)
{


	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, InputRecord_t2660212290_marshaled_pinvoke*, int32_t, int32_t*);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(InputRecord_t2660212290_marshaled_pinvoke*) + sizeof(int32_t) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "ReadConsoleInput", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'ReadConsoleInput'"), NULL, NULL);
		}
	}

	// Marshaling of parameter '___record1' to native representation
	InputRecord_t2660212290_marshaled_pinvoke ____record1_empty = {};
	InputRecord_t2660212290_marshaled_pinvoke* ____record1_marshaled = &____record1_empty;

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___handle0, ____record1_marshaled, ___length2, ___nread3);
	il2cpp_codegen_marshal_store_last_error();

	// Marshaling of parameter '___record1' back from native representation
	InputRecord_t2660212290  _____record1_marshaled_unmarshaled_dereferenced;
	memset(&_____record1_marshaled_unmarshaled_dereferenced, 0, sizeof(_____record1_marshaled_unmarshaled_dereferenced));
	InputRecord_t2660212290_marshal_pinvoke_back(*____record1_marshaled, _____record1_marshaled_unmarshaled_dereferenced);
	*___record1 = _____record1_marshaled_unmarshaled_dereferenced;

	// Marshaling cleanup of parameter '___record1' native representation
	InputRecord_t2660212290_marshal_pinvoke_cleanup(*____record1_marshaled);

	return static_cast<bool>(returnValue);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: System.__ComObject
extern "C" void __ComObject_t2735933417_marshal_pinvoke(const __ComObject_t2735933417& unmarshaled, __ComObject_t2735933417_marshaled_pinvoke& marshaled)
{
	Exception_t* ___synchronization_context_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'synchronization_context' of type '__ComObject': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___synchronization_context_3Exception, NULL, NULL);
}
extern "C" void __ComObject_t2735933417_marshal_pinvoke_back(const __ComObject_t2735933417_marshaled_pinvoke& marshaled, __ComObject_t2735933417& unmarshaled)
{
	Exception_t* ___synchronization_context_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'synchronization_context' of type '__ComObject': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___synchronization_context_3Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: System.__ComObject
extern "C" void __ComObject_t2735933417_marshal_pinvoke_cleanup(__ComObject_t2735933417_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: System.__ComObject
extern "C" void __ComObject_t2735933417_marshal_com(const __ComObject_t2735933417& unmarshaled, __ComObject_t2735933417_marshaled_com& marshaled)
{
	Exception_t* ___synchronization_context_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'synchronization_context' of type '__ComObject': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___synchronization_context_3Exception, NULL, NULL);
}
extern "C" void __ComObject_t2735933417_marshal_com_back(const __ComObject_t2735933417_marshaled_com& marshaled, __ComObject_t2735933417& unmarshaled)
{
	Exception_t* ___synchronization_context_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'synchronization_context' of type '__ComObject': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___synchronization_context_3Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: System.__ComObject
extern "C" void __ComObject_t2735933417_marshal_com_cleanup(__ComObject_t2735933417_marshaled_com& marshaled)
{
}
// System.__ComObject System.__ComObject::CreateRCW(System.Type)
extern "C" IL2CPP_METHOD_ATTR __ComObject_t2735933417 * __ComObject_CreateRCW_m4043027283 (RuntimeObject * __this /* static, unused */, Type_t * ___t0, const RuntimeMethod* method)
{
	typedef __ComObject_t2735933417 * (*__ComObject_CreateRCW_m4043027283_ftn) (Type_t *);
	using namespace il2cpp::icalls;
	return  ((__ComObject_CreateRCW_m4043027283_ftn)mscorlib::System::__ComObject::CreateRCW) (___t0);
}
// System.Void System.__ComObject::ReleaseInterfaces()
extern "C" IL2CPP_METHOD_ATTR void __ComObject_ReleaseInterfaces_m3890375834 (__ComObject_t2735933417 * __this, const RuntimeMethod* method)
{
	typedef void (*__ComObject_ReleaseInterfaces_m3890375834_ftn) (__ComObject_t2735933417 *);
	using namespace il2cpp::icalls;
	 ((__ComObject_ReleaseInterfaces_m3890375834_ftn)mscorlib::System::__ComObject::ReleaseInterfaces) (__this);
}
// System.Void System.__ComObject::Finalize()
extern "C" IL2CPP_METHOD_ATTR void __ComObject_Finalize_m2071896946 (__ComObject_t2735933417 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (__ComObject_Finalize_m2071896946_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = __this->get_hash_table_2();
			bool L_1 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_0, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_1)
			{
				goto IL_003a;
			}
		}

IL_0012:
		{
			SynchronizationContext_t2326897723 * L_2 = __this->get_synchronization_context_3();
			if (!L_2)
			{
				goto IL_0034;
			}
		}

IL_001a:
		{
			SynchronizationContext_t2326897723 * L_3 = __this->get_synchronization_context_3();
			intptr_t L_4 = (intptr_t)__ComObject_U3CFinalizeU3Eb__6_0_m3058185046_RuntimeMethod_var;
			SendOrPostCallback_t2750080073 * L_5 = (SendOrPostCallback_t2750080073 *)il2cpp_codegen_object_new(SendOrPostCallback_t2750080073_il2cpp_TypeInfo_var);
			SendOrPostCallback__ctor_m1566534627(L_5, __this, L_4, /*hidden argument*/NULL);
			NullCheck(L_3);
			VirtActionInvoker2< SendOrPostCallback_t2750080073 *, RuntimeObject * >::Invoke(5 /* System.Void System.Threading.SynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object) */, L_3, L_5, __this);
			goto IL_003a;
		}

IL_0034:
		{
			__ComObject_ReleaseInterfaces_m3890375834(__this, /*hidden argument*/NULL);
		}

IL_003a:
		{
			__this->set_proxy_4((ComInteropProxy_t1891481270 *)NULL);
			IL2CPP_LEAVE(0x4A, FINALLY_0043);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0043;
	}

FINALLY_0043:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(67)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(67)
	{
		IL2CPP_JUMP_TBL(0x4A, IL_004a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004a:
	{
		return;
	}
}
// System.Void System.__ComObject::.ctor()
extern "C" IL2CPP_METHOD_ATTR void __ComObject__ctor_m3980049925 (__ComObject_t2735933417 * __this, const RuntimeMethod* method)
{
	{
		MarshalByRefObject__ctor_m3039543187(__this, /*hidden argument*/NULL);
		Type_t * L_0 = Object_GetType_m88164663(__this, /*hidden argument*/NULL);
		__ComObject_Initialize_m2996039964(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.__ComObject::.ctor(System.Type)
extern "C" IL2CPP_METHOD_ATTR void __ComObject__ctor_m3734994621 (__ComObject_t2735933417 * __this, Type_t * ___t0, const RuntimeMethod* method)
{
	{
		MarshalByRefObject__ctor_m3039543187(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___t0;
		__ComObject_Initialize_m2996039964(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.__ComObject::.ctor(System.IntPtr,Mono.Interop.ComInteropProxy)
extern "C" IL2CPP_METHOD_ATTR void __ComObject__ctor_m930682493 (__ComObject_t2735933417 * __this, intptr_t ___pItf0, ComInteropProxy_t1891481270 * ___p1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (__ComObject__ctor_m930682493_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		MarshalByRefObject__ctor_m3039543187(__this, /*hidden argument*/NULL);
		ComInteropProxy_t1891481270 * L_0 = ___p1;
		__this->set_proxy_4(L_0);
		__ComObject_InitializeApartmentDetails_m739460630(__this, /*hidden argument*/NULL);
		Guid_t  L_1 = __ComObject_get_IID_IUnknown_m729737940(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		intptr_t L_2 = ___pItf0;
		intptr_t* L_3 = __this->get_address_of_iunknown_1();
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		int32_t L_4 = Marshal_QueryInterface_m1662962511(NULL /*static, unused*/, L_2, (Guid_t *)(&V_0), (intptr_t*)L_3, /*hidden argument*/NULL);
		Marshal_ThrowExceptionForHR_m2575255200(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.__ComObject::Initialize(System.IntPtr,Mono.Interop.ComInteropProxy)
extern "C" IL2CPP_METHOD_ATTR void __ComObject_Initialize_m2801614435 (__ComObject_t2735933417 * __this, intptr_t ___pUnk0, ComInteropProxy_t1891481270 * ___p1, const RuntimeMethod* method)
{
	{
		ComInteropProxy_t1891481270 * L_0 = ___p1;
		__this->set_proxy_4(L_0);
		__ComObject_InitializeApartmentDetails_m739460630(__this, /*hidden argument*/NULL);
		intptr_t L_1 = ___pUnk0;
		__this->set_iunknown_1(L_1);
		return;
	}
}
// System.Void System.__ComObject::Initialize(System.Type)
extern "C" IL2CPP_METHOD_ATTR void __ComObject_Initialize_m2996039964 (__ComObject_t2735933417 * __this, Type_t * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (__ComObject_Initialize_m2996039964_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__ComObject_InitializeApartmentDetails_m739460630(__this, /*hidden argument*/NULL);
		intptr_t L_0 = __this->get_iunknown_1();
		bool L_1 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		return;
	}

IL_0019:
	{
		Type_t * L_2 = ___t0;
		intptr_t L_3 = __ComObject_CreateIUnknown_m2252770198(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		__this->set_iunknown_1(L_3);
		return;
	}
}
// System.IntPtr System.__ComObject::CreateIUnknown(System.Type)
extern "C" IL2CPP_METHOD_ATTR intptr_t __ComObject_CreateIUnknown_m2252770198 (RuntimeObject * __this /* static, unused */, Type_t * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (__ComObject_CreateIUnknown_m2252770198_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	ObjectCreationDelegate_t3727257075 * V_1 = NULL;
	{
		Type_t * L_0 = ___t0;
		NullCheck(L_0);
		RuntimeTypeHandle_t3027515415  L_1 = VirtFuncInvoker0< RuntimeTypeHandle_t3027515415  >::Invoke(25 /* System.RuntimeTypeHandle System.Type::get_TypeHandle() */, L_0);
		RuntimeHelpers_RunClassConstructor_m3392013529(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		Type_t * L_2 = ___t0;
		IL2CPP_RUNTIME_CLASS_INIT(ExtensibleClassFactory_t574234438_il2cpp_TypeInfo_var);
		ObjectCreationDelegate_t3727257075 * L_3 = ExtensibleClassFactory_GetObjectCreationCallback_m2897487368(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		ObjectCreationDelegate_t3727257075 * L_4 = V_1;
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		ObjectCreationDelegate_t3727257075 * L_5 = V_1;
		NullCheck(L_5);
		intptr_t L_6 = ObjectCreationDelegate_Invoke_m3263378454(L_5, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_6;
		intptr_t L_7 = V_0;
		bool L_8 = IntPtr_op_Equality_m408849716(NULL /*static, unused*/, L_7, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_005d;
		}
	}
	{
		Type_t * L_9 = ___t0;
		String_t* L_10 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral1316692200, L_9, /*hidden argument*/NULL);
		COMException_t1620828383 * L_11 = (COMException_t1620828383 *)il2cpp_codegen_object_new(COMException_t1620828383_il2cpp_TypeInfo_var);
		COMException__ctor_m3321329575(L_11, L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, NULL, __ComObject_CreateIUnknown_m2252770198_RuntimeMethod_var);
	}

IL_003f:
	{
		Type_t * L_12 = ___t0;
		Guid_t  L_13 = __ComObject_GetCLSID_m273875985(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		Guid_t  L_14 = __ComObject_get_IID_IUnknown_m729737940(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_15 = __ComObject_CoCreateInstance_m891247042(NULL /*static, unused*/, L_13, (intptr_t)(0), ((int32_t)21), L_14, (intptr_t*)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m2575255200(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
	}

IL_005d:
	{
		intptr_t L_16 = V_0;
		return L_16;
	}
}
// System.Void System.__ComObject::InitializeApartmentDetails()
extern "C" IL2CPP_METHOD_ATTR void __ComObject_InitializeApartmentDetails_m739460630 (__ComObject_t2735933417 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (__ComObject_InitializeApartmentDetails_m739460630_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Thread_t2300836069 * L_0 = Thread_get_CurrentThread_m4142136012(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = Thread_GetApartmentState_m2217652568(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		SynchronizationContext_t2326897723 * L_2 = SynchronizationContext_get_Current_m3666546046(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_synchronization_context_3(L_2);
		SynchronizationContext_t2326897723 * L_3 = __this->get_synchronization_context_3();
		if (!L_3)
		{
			goto IL_0043;
		}
	}
	{
		SynchronizationContext_t2326897723 * L_4 = __this->get_synchronization_context_3();
		NullCheck(L_4);
		Type_t * L_5 = Object_GetType_m88164663(L_4, /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_6 = { reinterpret_cast<intptr_t> (SynchronizationContext_t2326897723_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		bool L_8 = Type_op_Equality_m2683486427(NULL /*static, unused*/, L_5, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0043;
		}
	}
	{
		__this->set_synchronization_context_3((SynchronizationContext_t2326897723 *)NULL);
	}

IL_0043:
	{
		return;
	}
}
// System.Guid System.__ComObject::GetCLSID(System.Type)
extern "C" IL2CPP_METHOD_ATTR Guid_t  __ComObject_GetCLSID_m273875985 (RuntimeObject * __this /* static, unused */, Type_t * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (__ComObject_GetCLSID_m273875985_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	{
		Type_t * L_0 = ___t0;
		NullCheck(L_0);
		bool L_1 = Type_get_IsImport_m318717543(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		Type_t * L_2 = ___t0;
		NullCheck(L_2);
		Guid_t  L_3 = VirtFuncInvoker0< Guid_t  >::Invoke(22 /* System.Guid System.Type::get_GUID() */, L_2);
		return L_3;
	}

IL_000f:
	{
		Type_t * L_4 = ___t0;
		NullCheck(L_4);
		Type_t * L_5 = VirtFuncInvoker0< Type_t * >::Invoke(30 /* System.Type System.Type::get_BaseType() */, L_4);
		V_0 = L_5;
		goto IL_002e;
	}

IL_0018:
	{
		Type_t * L_6 = V_0;
		NullCheck(L_6);
		bool L_7 = Type_get_IsImport_m318717543(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0027;
		}
	}
	{
		Type_t * L_8 = V_0;
		NullCheck(L_8);
		Guid_t  L_9 = VirtFuncInvoker0< Guid_t  >::Invoke(22 /* System.Guid System.Type::get_GUID() */, L_8);
		return L_9;
	}

IL_0027:
	{
		Type_t * L_10 = V_0;
		NullCheck(L_10);
		Type_t * L_11 = VirtFuncInvoker0< Type_t * >::Invoke(30 /* System.Type System.Type::get_BaseType() */, L_10);
		V_0 = L_11;
	}

IL_002e:
	{
		Type_t * L_12 = V_0;
		RuntimeTypeHandle_t3027515415  L_13 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_14 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		bool L_15 = Type_op_Inequality_m2948304386(NULL /*static, unused*/, L_12, L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_0018;
		}
	}
	{
		Type_t * L_16 = ___t0;
		NullCheck(L_16);
		String_t* L_17 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_16);
		String_t* L_18 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1187417246, L_17, /*hidden argument*/NULL);
		COMException_t1620828383 * L_19 = (COMException_t1620828383 *)il2cpp_codegen_object_new(COMException_t1620828383_il2cpp_TypeInfo_var);
		COMException__ctor_m3321329575(L_19, L_18, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, NULL, __ComObject_GetCLSID_m273875985_RuntimeMethod_var);
	}
}
// System.IntPtr System.__ComObject::GetInterfaceInternal(System.Type,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR intptr_t __ComObject_GetInterfaceInternal_m1209860572 (__ComObject_t2735933417 * __this, Type_t * ___t0, bool ___throwException1, const RuntimeMethod* method)
{
	typedef intptr_t (*__ComObject_GetInterfaceInternal_m1209860572_ftn) (__ComObject_t2735933417 *, Type_t *, bool);
	using namespace il2cpp::icalls;
	return  ((__ComObject_GetInterfaceInternal_m1209860572_ftn)mscorlib::System::__ComObject::GetInterfaceInternal) (__this, ___t0, ___throwException1);
}
// System.IntPtr System.__ComObject::GetInterface(System.Type,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR intptr_t __ComObject_GetInterface_m2711829723 (__ComObject_t2735933417 * __this, Type_t * ___t0, bool ___throwException1, const RuntimeMethod* method)
{
	{
		__ComObject_CheckIUnknown_m2979951207(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___t0;
		bool L_1 = ___throwException1;
		intptr_t L_2 = __ComObject_GetInterfaceInternal_m1209860572(__this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.IntPtr System.__ComObject::GetInterface(System.Type)
extern "C" IL2CPP_METHOD_ATTR intptr_t __ComObject_GetInterface_m3942153942 (__ComObject_t2735933417 * __this, Type_t * ___t0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___t0;
		intptr_t L_1 = __ComObject_GetInterface_m2711829723(__this, L_0, (bool)1, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.__ComObject::CheckIUnknown()
extern "C" IL2CPP_METHOD_ATTR void __ComObject_CheckIUnknown_m2979951207 (__ComObject_t2735933417 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (__ComObject_CheckIUnknown_m2979951207_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_iunknown_1();
		bool L_1 = IntPtr_op_Equality_m408849716(NULL /*static, unused*/, L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		InvalidComObjectException_t3939298412 * L_2 = (InvalidComObjectException_t3939298412 *)il2cpp_codegen_object_new(InvalidComObjectException_t3939298412_il2cpp_TypeInfo_var);
		InvalidComObjectException__ctor_m4034112928(L_2, _stringLiteral1215330868, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, __ComObject_CheckIUnknown_m2979951207_RuntimeMethod_var);
	}

IL_001d:
	{
		return;
	}
}
// System.IntPtr System.__ComObject::get_IUnknown()
extern "C" IL2CPP_METHOD_ATTR intptr_t __ComObject_get_IUnknown_m3992083790 (__ComObject_t2735933417 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (__ComObject_get_IUnknown_m3992083790_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_iunknown_1();
		bool L_1 = IntPtr_op_Equality_m408849716(NULL /*static, unused*/, L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		InvalidComObjectException_t3939298412 * L_2 = (InvalidComObjectException_t3939298412 *)il2cpp_codegen_object_new(InvalidComObjectException_t3939298412_il2cpp_TypeInfo_var);
		InvalidComObjectException__ctor_m4034112928(L_2, _stringLiteral1215330868, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, __ComObject_get_IUnknown_m3992083790_RuntimeMethod_var);
	}

IL_001d:
	{
		intptr_t L_3 = __this->get_iunknown_1();
		return L_3;
	}
}
// System.IntPtr System.__ComObject::get_IDispatch()
extern "C" IL2CPP_METHOD_ATTR intptr_t __ComObject_get_IDispatch_m3519249931 (__ComObject_t2735933417 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (__ComObject_get_IDispatch_m3519249931_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset(&G_B2_0, 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset(&G_B1_0, 0, sizeof(G_B1_0));
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IDispatch_t1631546224_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		intptr_t L_2 = __ComObject_GetInterface_m3942153942(__this, L_1, /*hidden argument*/NULL);
		intptr_t L_3 = L_2;
		bool L_4 = IntPtr_op_Equality_m408849716(NULL /*static, unused*/, L_3, (intptr_t)(0), /*hidden argument*/NULL);
		G_B1_0 = L_3;
		if (!L_4)
		{
			G_B2_0 = L_3;
			goto IL_0028;
		}
	}
	{
		InvalidComObjectException_t3939298412 * L_5 = (InvalidComObjectException_t3939298412 *)il2cpp_codegen_object_new(InvalidComObjectException_t3939298412_il2cpp_TypeInfo_var);
		InvalidComObjectException__ctor_m4034112928(L_5, _stringLiteral1215330868, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, __ComObject_get_IDispatch_m3519249931_RuntimeMethod_var);
	}

IL_0028:
	{
		return G_B2_0;
	}
}
// System.Guid System.__ComObject::get_IID_IUnknown()
extern "C" IL2CPP_METHOD_ATTR Guid_t  __ComObject_get_IID_IUnknown_m729737940 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (__ComObject_get_IID_IUnknown_m729737940_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Guid_t  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Guid__ctor_m2423264394((&L_0), _stringLiteral1364036397, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Guid System.__ComObject::get_IID_IDispatch()
extern "C" IL2CPP_METHOD_ATTR Guid_t  __ComObject_get_IID_IDispatch_m3385651041 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (__ComObject_get_IID_IDispatch_m3385651041_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Guid_t  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Guid__ctor_m2423264394((&L_0), _stringLiteral731089754, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean System.__ComObject::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool __ComObject_Equals_m3128350380 (__ComObject_t2735933417 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (__ComObject_Equals_m3128350380_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	__ComObject_t2735933417 * V_0 = NULL;
	{
		__ComObject_CheckIUnknown_m2979951207(__this, /*hidden argument*/NULL);
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return (bool)0;
	}

IL_000b:
	{
		RuntimeObject * L_1 = ___obj0;
		V_0 = ((__ComObject_t2735933417 *)IsInstClass((RuntimeObject*)L_1, __ComObject_t2735933417_il2cpp_TypeInfo_var));
		__ComObject_t2735933417 * L_2 = V_0;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		intptr_t L_3 = __this->get_iunknown_1();
		__ComObject_t2735933417 * L_4 = V_0;
		NullCheck(L_4);
		intptr_t L_5 = __ComObject_get_IUnknown_m3992083790(L_4, /*hidden argument*/NULL);
		bool L_6 = IntPtr_op_Equality_m408849716(NULL /*static, unused*/, L_3, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Int32 System.__ComObject::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t __ComObject_GetHashCode_m3561592579 (__ComObject_t2735933417 * __this, const RuntimeMethod* method)
{
	{
		__ComObject_CheckIUnknown_m2979951207(__this, /*hidden argument*/NULL);
		intptr_t* L_0 = __this->get_address_of_iunknown_1();
		int32_t L_1 = IntPtr_ToInt32_m2978512204((intptr_t*)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 System.__ComObject::CoCreateInstance(System.Guid,System.IntPtr,System.UInt32,System.Guid,System.IntPtr&)
extern "C" IL2CPP_METHOD_ATTR int32_t __ComObject_CoCreateInstance_m891247042 (RuntimeObject * __this /* static, unused */, Guid_t  ___rclsid0, intptr_t ___pUnkOuter1, uint32_t ___dwClsContext2, Guid_t  ___riid3, intptr_t* ___pUnk4, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc) (Guid_t *, intptr_t, uint32_t, Guid_t *, intptr_t*);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(Guid_t ) + sizeof(intptr_t) + sizeof(uint32_t) + sizeof(Guid_t ) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("ole32.dll"), "CoCreateInstance", IL2CPP_CALL_STDCALL, CHARSET_UNICODE, parameterSize, true);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'CoCreateInstance'"), NULL, NULL);
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc((&___rclsid0), ___pUnkOuter1, ___dwClsContext2, (&___riid3), ___pUnk4);

	return returnValue;
}
// System.Void System.__ComObject::<Finalize>b__6_0(System.Object)
extern "C" IL2CPP_METHOD_ATTR void __ComObject_U3CFinalizeU3Eb__6_0_m3058185046 (__ComObject_t2735933417 * __this, RuntimeObject * ___state0, const RuntimeMethod* method)
{
	{
		__ComObject_ReleaseInterfaces_m3890375834(__this, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: System.__DTString
extern "C" void __DTString_t2014593278_marshal_pinvoke(const __DTString_t2014593278& unmarshaled, __DTString_t2014593278_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_info_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_info' of type '__DTString': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_info_4Exception, NULL, NULL);
}
extern "C" void __DTString_t2014593278_marshal_pinvoke_back(const __DTString_t2014593278_marshaled_pinvoke& marshaled, __DTString_t2014593278& unmarshaled)
{
	Exception_t* ___m_info_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_info' of type '__DTString': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_info_4Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: System.__DTString
extern "C" void __DTString_t2014593278_marshal_pinvoke_cleanup(__DTString_t2014593278_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.__DTString
extern "C" void __DTString_t2014593278_marshal_com(const __DTString_t2014593278& unmarshaled, __DTString_t2014593278_marshaled_com& marshaled)
{
	Exception_t* ___m_info_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_info' of type '__DTString': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_info_4Exception, NULL, NULL);
}
extern "C" void __DTString_t2014593278_marshal_com_back(const __DTString_t2014593278_marshaled_com& marshaled, __DTString_t2014593278& unmarshaled)
{
	Exception_t* ___m_info_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_info' of type '__DTString': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_info_4Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: System.__DTString
extern "C" void __DTString_t2014593278_marshal_com_cleanup(__DTString_t2014593278_marshaled_com& marshaled)
{
}
// System.Void System.__DTString::.ctor(System.String,System.Globalization.DateTimeFormatInfo,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void __DTString__ctor_m2897552437 (__DTString_t2014593278 * __this, String_t* ___str0, DateTimeFormatInfo_t2405853701 * ___dtfi1, bool ___checkDigitToken2, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___str0;
		DateTimeFormatInfo_t2405853701 * L_1 = ___dtfi1;
		__DTString__ctor_m4216323856((__DTString_t2014593278 *)__this, L_0, L_1, /*hidden argument*/NULL);
		bool L_2 = ___checkDigitToken2;
		__this->set_m_checkDigitToken_5(L_2);
		return;
	}
}
extern "C"  void __DTString__ctor_m2897552437_AdjustorThunk (RuntimeObject * __this, String_t* ___str0, DateTimeFormatInfo_t2405853701 * ___dtfi1, bool ___checkDigitToken2, const RuntimeMethod* method)
{
	__DTString_t2014593278 * _thisAdjusted = reinterpret_cast<__DTString_t2014593278 *>(__this + 1);
	__DTString__ctor_m2897552437(_thisAdjusted, ___str0, ___dtfi1, ___checkDigitToken2, method);
}
// System.Void System.__DTString::.ctor(System.String,System.Globalization.DateTimeFormatInfo)
extern "C" IL2CPP_METHOD_ATTR void __DTString__ctor_m4216323856 (__DTString_t2014593278 * __this, String_t* ___str0, DateTimeFormatInfo_t2405853701 * ___dtfi1, const RuntimeMethod* method)
{
	{
		__this->set_Index_1((-1));
		String_t* L_0 = ___str0;
		__this->set_Value_0(L_0);
		String_t* L_1 = __this->get_Value_0();
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m3847582255(L_1, /*hidden argument*/NULL);
		__this->set_len_2(L_2);
		__this->set_m_current_3(0);
		DateTimeFormatInfo_t2405853701 * L_3 = ___dtfi1;
		if (!L_3)
		{
			goto IL_0048;
		}
	}
	{
		DateTimeFormatInfo_t2405853701 * L_4 = ___dtfi1;
		NullCheck(L_4);
		CompareInfo_t1092934962 * L_5 = DateTimeFormatInfo_get_CompareInfo_m2732307212(L_4, /*hidden argument*/NULL);
		__this->set_m_info_4(L_5);
		DateTimeFormatInfo_t2405853701 * L_6 = ___dtfi1;
		NullCheck(L_6);
		int32_t L_7 = DateTimeFormatInfo_get_FormatFlags_m1385434814(L_6, /*hidden argument*/NULL);
		__this->set_m_checkDigitToken_5((bool)((!(((uint32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)32)))) <= ((uint32_t)0)))? 1 : 0));
		return;
	}

IL_0048:
	{
		Thread_t2300836069 * L_8 = Thread_get_CurrentThread_m4142136012(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		CultureInfo_t4157843068 * L_9 = Thread_get_CurrentCulture_m349116646(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		CompareInfo_t1092934962 * L_10 = VirtFuncInvoker0< CompareInfo_t1092934962 * >::Invoke(12 /* System.Globalization.CompareInfo System.Globalization.CultureInfo::get_CompareInfo() */, L_9);
		__this->set_m_info_4(L_10);
		__this->set_m_checkDigitToken_5((bool)0);
		return;
	}
}
extern "C"  void __DTString__ctor_m4216323856_AdjustorThunk (RuntimeObject * __this, String_t* ___str0, DateTimeFormatInfo_t2405853701 * ___dtfi1, const RuntimeMethod* method)
{
	__DTString_t2014593278 * _thisAdjusted = reinterpret_cast<__DTString_t2014593278 *>(__this + 1);
	__DTString__ctor_m4216323856(_thisAdjusted, ___str0, ___dtfi1, method);
}
// System.Globalization.CompareInfo System.__DTString::get_CompareInfo()
extern "C" IL2CPP_METHOD_ATTR CompareInfo_t1092934962 * __DTString_get_CompareInfo_m3716528085 (__DTString_t2014593278 * __this, const RuntimeMethod* method)
{
	{
		CompareInfo_t1092934962 * L_0 = __this->get_m_info_4();
		return L_0;
	}
}
extern "C"  CompareInfo_t1092934962 * __DTString_get_CompareInfo_m3716528085_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	__DTString_t2014593278 * _thisAdjusted = reinterpret_cast<__DTString_t2014593278 *>(__this + 1);
	return __DTString_get_CompareInfo_m3716528085(_thisAdjusted, method);
}
// System.Boolean System.__DTString::GetNext()
extern "C" IL2CPP_METHOD_ATTR bool __DTString_GetNext_m3216272439 (__DTString_t2014593278 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_Index_1();
		__this->set_Index_1(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		int32_t L_1 = __this->get_Index_1();
		int32_t L_2 = __this->get_len_2();
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0035;
		}
	}
	{
		String_t* L_3 = __this->get_Value_0();
		int32_t L_4 = __this->get_Index_1();
		NullCheck(L_3);
		Il2CppChar L_5 = String_get_Chars_m2986988803(L_3, L_4, /*hidden argument*/NULL);
		__this->set_m_current_3(L_5);
		return (bool)1;
	}

IL_0035:
	{
		return (bool)0;
	}
}
extern "C"  bool __DTString_GetNext_m3216272439_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	__DTString_t2014593278 * _thisAdjusted = reinterpret_cast<__DTString_t2014593278 *>(__this + 1);
	return __DTString_GetNext_m3216272439(_thisAdjusted, method);
}
// System.Boolean System.__DTString::AtEnd()
extern "C" IL2CPP_METHOD_ATTR bool __DTString_AtEnd_m4056853577 (__DTString_t2014593278 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_Index_1();
		int32_t L_1 = __this->get_len_2();
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0010;
		}
	}
	{
		return (bool)1;
	}

IL_0010:
	{
		return (bool)0;
	}
}
extern "C"  bool __DTString_AtEnd_m4056853577_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	__DTString_t2014593278 * _thisAdjusted = reinterpret_cast<__DTString_t2014593278 *>(__this + 1);
	return __DTString_AtEnd_m4056853577(_thisAdjusted, method);
}
// System.Boolean System.__DTString::Advance(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool __DTString_Advance_m3393158789 (__DTString_t2014593278 * __this, int32_t ___count0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_Index_1();
		int32_t L_1 = ___count0;
		__this->set_Index_1(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)));
		int32_t L_2 = __this->get_Index_1();
		int32_t L_3 = __this->get_len_2();
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_0035;
		}
	}
	{
		String_t* L_4 = __this->get_Value_0();
		int32_t L_5 = __this->get_Index_1();
		NullCheck(L_4);
		Il2CppChar L_6 = String_get_Chars_m2986988803(L_4, L_5, /*hidden argument*/NULL);
		__this->set_m_current_3(L_6);
		return (bool)1;
	}

IL_0035:
	{
		return (bool)0;
	}
}
extern "C"  bool __DTString_Advance_m3393158789_AdjustorThunk (RuntimeObject * __this, int32_t ___count0, const RuntimeMethod* method)
{
	__DTString_t2014593278 * _thisAdjusted = reinterpret_cast<__DTString_t2014593278 *>(__this + 1);
	return __DTString_Advance_m3393158789(_thisAdjusted, ___count0, method);
}
// System.Void System.__DTString::GetRegularToken(System.TokenType&,System.Int32&,System.Globalization.DateTimeFormatInfo)
extern "C" IL2CPP_METHOD_ATTR void __DTString_GetRegularToken_m3127405658 (__DTString_t2014593278 * __this, int32_t* ___tokenType0, int32_t* ___tokenValue1, DateTimeFormatInfo_t2405853701 * ___dtfi2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (__DTString_GetRegularToken_m3127405658_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Il2CppChar V_4 = 0x0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t* L_0 = ___tokenValue1;
		*((int32_t*)(L_0)) = (int32_t)0;
		int32_t L_1 = __this->get_Index_1();
		int32_t L_2 = __this->get_len_2();
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t* L_3 = ___tokenType0;
		*((int32_t*)(L_3)) = (int32_t)6;
		return;
	}

IL_0015:
	{
		int32_t* L_4 = ___tokenType0;
		*((int32_t*)(L_4)) = (int32_t)((int32_t)11);
	}

IL_0019:
	{
		Il2CppChar L_5 = __this->get_m_current_3();
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeParse_t715850018_il2cpp_TypeInfo_var);
		bool L_6 = DateTimeParse_IsDigit_m3727153098(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0112;
		}
	}
	{
		int32_t* L_7 = ___tokenValue1;
		Il2CppChar L_8 = __this->get_m_current_3();
		*((int32_t*)(L_7)) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)((int32_t)48)));
		int32_t L_9 = __this->get_Index_1();
		V_1 = L_9;
		goto IL_0070;
	}

IL_003d:
	{
		String_t* L_10 = __this->get_Value_0();
		int32_t L_11 = __this->get_Index_1();
		NullCheck(L_10);
		Il2CppChar L_12 = String_get_Chars_m2986988803(L_10, L_11, /*hidden argument*/NULL);
		__this->set_m_current_3(L_12);
		Il2CppChar L_13 = __this->get_m_current_3();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)((int32_t)48)));
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) > ((int32_t)((int32_t)9))))
		{
			goto IL_0089;
		}
	}
	{
		int32_t* L_16 = ___tokenValue1;
		int32_t* L_17 = ___tokenValue1;
		int32_t L_18 = V_0;
		*((int32_t*)(L_16)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)(*((int32_t*)L_17)), (int32_t)((int32_t)10))), (int32_t)L_18));
	}

IL_0070:
	{
		int32_t L_19 = __this->get_Index_1();
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
		int32_t L_20 = V_2;
		__this->set_Index_1(L_20);
		int32_t L_21 = V_2;
		int32_t L_22 = __this->get_len_2();
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_003d;
		}
	}

IL_0089:
	{
		int32_t L_23 = __this->get_Index_1();
		int32_t L_24 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)L_24))) <= ((int32_t)8)))
		{
			goto IL_009c;
		}
	}
	{
		int32_t* L_25 = ___tokenType0;
		*((int32_t*)(L_25)) = (int32_t)1;
		int32_t* L_26 = ___tokenValue1;
		*((int32_t*)(L_26)) = (int32_t)(-1);
		goto IL_00af;
	}

IL_009c:
	{
		int32_t L_27 = __this->get_Index_1();
		int32_t L_28 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_27, (int32_t)L_28))) >= ((int32_t)3)))
		{
			goto IL_00ac;
		}
	}
	{
		int32_t* L_29 = ___tokenType0;
		*((int32_t*)(L_29)) = (int32_t)1;
		goto IL_00af;
	}

IL_00ac:
	{
		int32_t* L_30 = ___tokenType0;
		*((int32_t*)(L_30)) = (int32_t)2;
	}

IL_00af:
	{
		bool L_31 = __this->get_m_checkDigitToken_5();
		if (!L_31)
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_32 = __this->get_Index_1();
		V_3 = L_32;
		Il2CppChar L_33 = __this->get_m_current_3();
		V_4 = L_33;
		int32_t L_34 = V_1;
		__this->set_Index_1(L_34);
		String_t* L_35 = __this->get_Value_0();
		int32_t L_36 = __this->get_Index_1();
		NullCheck(L_35);
		Il2CppChar L_37 = String_get_Chars_m2986988803(L_35, L_36, /*hidden argument*/NULL);
		__this->set_m_current_3(L_37);
		DateTimeFormatInfo_t2405853701 * L_38 = ___dtfi2;
		NullCheck(L_38);
		bool L_39 = DateTimeFormatInfo_Tokenize_m4098328262(L_38, ((int32_t)255), (int32_t*)(&V_5), (int32_t*)(&V_6), (__DTString_t2014593278 *)__this, /*hidden argument*/NULL);
		if (!L_39)
		{
			goto IL_0102;
		}
	}
	{
		int32_t* L_40 = ___tokenType0;
		int32_t L_41 = V_5;
		*((int32_t*)(L_40)) = (int32_t)L_41;
		int32_t* L_42 = ___tokenValue1;
		int32_t L_43 = V_6;
		*((int32_t*)(L_42)) = (int32_t)L_43;
		return;
	}

IL_0102:
	{
		int32_t L_44 = V_3;
		__this->set_Index_1(L_44);
		Il2CppChar L_45 = V_4;
		__this->set_m_current_3(L_45);
		return;
	}

IL_0112:
	{
		Il2CppChar L_46 = __this->get_m_current_3();
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_47 = Char_IsWhiteSpace_m2148390798(NULL /*static, unused*/, L_46, /*hidden argument*/NULL);
		if (!L_47)
		{
			goto IL_0165;
		}
	}
	{
		goto IL_0148;
	}

IL_0121:
	{
		String_t* L_48 = __this->get_Value_0();
		int32_t L_49 = __this->get_Index_1();
		NullCheck(L_48);
		Il2CppChar L_50 = String_get_Chars_m2986988803(L_48, L_49, /*hidden argument*/NULL);
		__this->set_m_current_3(L_50);
		Il2CppChar L_51 = __this->get_m_current_3();
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_52 = Char_IsWhiteSpace_m2148390798(NULL /*static, unused*/, L_51, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_0019;
		}
	}

IL_0148:
	{
		int32_t L_53 = __this->get_Index_1();
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)1));
		int32_t L_54 = V_2;
		__this->set_Index_1(L_54);
		int32_t L_55 = V_2;
		int32_t L_56 = __this->get_len_2();
		if ((((int32_t)L_55) < ((int32_t)L_56)))
		{
			goto IL_0121;
		}
	}
	{
		int32_t* L_57 = ___tokenType0;
		*((int32_t*)(L_57)) = (int32_t)6;
		return;
	}

IL_0165:
	{
		DateTimeFormatInfo_t2405853701 * L_58 = ___dtfi2;
		int32_t* L_59 = ___tokenType0;
		int32_t* L_60 = ___tokenValue1;
		NullCheck(L_58);
		DateTimeFormatInfo_Tokenize_m4098328262(L_58, ((int32_t)255), (int32_t*)L_59, (int32_t*)L_60, (__DTString_t2014593278 *)__this, /*hidden argument*/NULL);
	}

IL_0174:
	{
		return;
	}
}
extern "C"  void __DTString_GetRegularToken_m3127405658_AdjustorThunk (RuntimeObject * __this, int32_t* ___tokenType0, int32_t* ___tokenValue1, DateTimeFormatInfo_t2405853701 * ___dtfi2, const RuntimeMethod* method)
{
	__DTString_t2014593278 * _thisAdjusted = reinterpret_cast<__DTString_t2014593278 *>(__this + 1);
	__DTString_GetRegularToken_m3127405658(_thisAdjusted, ___tokenType0, ___tokenValue1, ___dtfi2, method);
}
// System.TokenType System.__DTString::GetSeparatorToken(System.Globalization.DateTimeFormatInfo,System.Int32&,System.Char&)
extern "C" IL2CPP_METHOD_ATTR int32_t __DTString_GetSeparatorToken_m2062126902 (__DTString_t2014593278 * __this, DateTimeFormatInfo_t2405853701 * ___dtfi0, int32_t* ___indexBeforeSeparator1, Il2CppChar* ___charBeforeSeparator2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (__DTString_GetSeparatorToken_m2062126902_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t* L_0 = ___indexBeforeSeparator1;
		int32_t L_1 = __this->get_Index_1();
		*((int32_t*)(L_0)) = (int32_t)L_1;
		Il2CppChar* L_2 = ___charBeforeSeparator2;
		Il2CppChar L_3 = __this->get_m_current_3();
		*((int16_t*)(L_2)) = (int16_t)L_3;
		bool L_4 = __DTString_SkipWhiteSpaceCurrent_m2113872575((__DTString_t2014593278 *)__this, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_001e;
		}
	}
	{
		return (int32_t)(((int32_t)512));
	}

IL_001e:
	{
		Il2CppChar L_5 = __this->get_m_current_3();
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeParse_t715850018_il2cpp_TypeInfo_var);
		bool L_6 = DateTimeParse_IsDigit_m3727153098(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0045;
		}
	}
	{
		DateTimeFormatInfo_t2405853701 * L_7 = ___dtfi0;
		NullCheck(L_7);
		bool L_8 = DateTimeFormatInfo_Tokenize_m4098328262(L_7, ((int32_t)65280), (int32_t*)(&V_0), (int32_t*)(&V_1), (__DTString_t2014593278 *)__this, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_004b;
		}
	}
	{
		V_0 = ((int32_t)768);
		goto IL_004b;
	}

IL_0045:
	{
		V_0 = ((int32_t)768);
	}

IL_004b:
	{
		int32_t L_9 = V_0;
		return L_9;
	}
}
extern "C"  int32_t __DTString_GetSeparatorToken_m2062126902_AdjustorThunk (RuntimeObject * __this, DateTimeFormatInfo_t2405853701 * ___dtfi0, int32_t* ___indexBeforeSeparator1, Il2CppChar* ___charBeforeSeparator2, const RuntimeMethod* method)
{
	__DTString_t2014593278 * _thisAdjusted = reinterpret_cast<__DTString_t2014593278 *>(__this + 1);
	return __DTString_GetSeparatorToken_m2062126902(_thisAdjusted, ___dtfi0, ___indexBeforeSeparator1, ___charBeforeSeparator2, method);
}
// System.Boolean System.__DTString::MatchSpecifiedWord(System.String)
extern "C" IL2CPP_METHOD_ATTR bool __DTString_MatchSpecifiedWord_m2455863005 (__DTString_t2014593278 * __this, String_t* ___target0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___target0;
		String_t* L_1 = ___target0;
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m3847582255(L_1, /*hidden argument*/NULL);
		int32_t L_3 = __this->get_Index_1();
		bool L_4 = __DTString_MatchSpecifiedWord_m3597025336((__DTString_t2014593278 *)__this, L_0, ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3)), /*hidden argument*/NULL);
		return L_4;
	}
}
extern "C"  bool __DTString_MatchSpecifiedWord_m2455863005_AdjustorThunk (RuntimeObject * __this, String_t* ___target0, const RuntimeMethod* method)
{
	__DTString_t2014593278 * _thisAdjusted = reinterpret_cast<__DTString_t2014593278 *>(__this + 1);
	return __DTString_MatchSpecifiedWord_m2455863005(_thisAdjusted, ___target0, method);
}
// System.Boolean System.__DTString::MatchSpecifiedWord(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool __DTString_MatchSpecifiedWord_m3597025336 (__DTString_t2014593278 * __this, String_t* ___target0, int32_t ___endIndex1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___endIndex1;
		int32_t L_1 = __this->get_Index_1();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		int32_t L_2 = V_0;
		String_t* L_3 = ___target0;
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m3847582255(L_3, /*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)L_4)))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)0;
	}

IL_0014:
	{
		int32_t L_5 = __this->get_Index_1();
		int32_t L_6 = V_0;
		int32_t L_7 = __this->get_len_2();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)L_6))) <= ((int32_t)L_7)))
		{
			goto IL_0026;
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		CompareInfo_t1092934962 * L_8 = __this->get_m_info_4();
		String_t* L_9 = __this->get_Value_0();
		int32_t L_10 = __this->get_Index_1();
		int32_t L_11 = V_0;
		String_t* L_12 = ___target0;
		int32_t L_13 = V_0;
		NullCheck(L_8);
		int32_t L_14 = VirtFuncInvoker7< int32_t, String_t*, int32_t, int32_t, String_t*, int32_t, int32_t, int32_t >::Invoke(8 /* System.Int32 System.Globalization.CompareInfo::Compare(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions) */, L_8, L_9, L_10, L_11, L_12, 0, L_13, 1);
		return (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
	}
}
extern "C"  bool __DTString_MatchSpecifiedWord_m3597025336_AdjustorThunk (RuntimeObject * __this, String_t* ___target0, int32_t ___endIndex1, const RuntimeMethod* method)
{
	__DTString_t2014593278 * _thisAdjusted = reinterpret_cast<__DTString_t2014593278 *>(__this + 1);
	return __DTString_MatchSpecifiedWord_m3597025336(_thisAdjusted, ___target0, ___endIndex1, method);
}
// System.Boolean System.__DTString::MatchSpecifiedWords(System.String,System.Boolean,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR bool __DTString_MatchSpecifiedWords_m1748097800 (__DTString_t2014593278 * __this, String_t* ___target0, bool ___checkWordBoundary1, int32_t* ___matchLength2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (__DTString_MatchSpecifiedWords_m1748097800_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		String_t* L_0 = __this->get_Value_0();
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m3847582255(L_0, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_Index_1();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_2));
		int32_t* L_3 = ___matchLength2;
		String_t* L_4 = ___target0;
		NullCheck(L_4);
		int32_t L_5 = String_get_Length_m3847582255(L_4, /*hidden argument*/NULL);
		*((int32_t*)(L_3)) = (int32_t)L_5;
		int32_t* L_6 = ___matchLength2;
		int32_t L_7 = V_0;
		if ((((int32_t)(*((int32_t*)L_6))) > ((int32_t)L_7)))
		{
			goto IL_0043;
		}
	}
	{
		CompareInfo_t1092934962 * L_8 = __this->get_m_info_4();
		String_t* L_9 = __this->get_Value_0();
		int32_t L_10 = __this->get_Index_1();
		int32_t* L_11 = ___matchLength2;
		String_t* L_12 = ___target0;
		int32_t* L_13 = ___matchLength2;
		NullCheck(L_8);
		int32_t L_14 = VirtFuncInvoker7< int32_t, String_t*, int32_t, int32_t, String_t*, int32_t, int32_t, int32_t >::Invoke(8 /* System.Int32 System.Globalization.CompareInfo::Compare(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions) */, L_8, L_9, L_10, (*((int32_t*)L_11)), L_12, 0, (*((int32_t*)L_13)), 1);
		if (!L_14)
		{
			goto IL_0147;
		}
	}

IL_0043:
	{
		V_1 = 0;
		int32_t L_15 = __this->get_Index_1();
		V_2 = L_15;
		String_t* L_16 = ___target0;
		IL2CPP_RUNTIME_CLASS_INIT(__DTString_t2014593278_il2cpp_TypeInfo_var);
		CharU5BU5D_t3528271667* L_17 = ((__DTString_t2014593278_StaticFields*)il2cpp_codegen_static_fields_for(__DTString_t2014593278_il2cpp_TypeInfo_var))->get_WhiteSpaceChecks_6();
		int32_t L_18 = V_1;
		NullCheck(L_16);
		int32_t L_19 = String_IndexOfAny_m2323029521(L_16, L_17, L_18, /*hidden argument*/NULL);
		V_3 = L_19;
		int32_t L_20 = V_3;
		if ((!(((uint32_t)L_20) == ((uint32_t)(-1)))))
		{
			goto IL_005f;
		}
	}
	{
		return (bool)0;
	}

IL_005f:
	{
		int32_t L_21 = V_3;
		int32_t L_22 = V_1;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)L_22));
		int32_t L_23 = V_2;
		String_t* L_24 = __this->get_Value_0();
		NullCheck(L_24);
		int32_t L_25 = String_get_Length_m3847582255(L_24, /*hidden argument*/NULL);
		int32_t L_26 = V_4;
		if ((((int32_t)L_23) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_25, (int32_t)L_26)))))
		{
			goto IL_0077;
		}
	}
	{
		return (bool)0;
	}

IL_0077:
	{
		int32_t L_27 = V_4;
		if (L_27)
		{
			goto IL_0083;
		}
	}
	{
		int32_t* L_28 = ___matchLength2;
		int32_t* L_29 = ___matchLength2;
		*((int32_t*)(L_28)) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(*((int32_t*)L_29)), (int32_t)1));
		goto IL_00bf;
	}

IL_0083:
	{
		String_t* L_30 = __this->get_Value_0();
		int32_t L_31 = V_2;
		int32_t L_32 = V_4;
		NullCheck(L_30);
		Il2CppChar L_33 = String_get_Chars_m2986988803(L_30, ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)L_32)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_34 = Char_IsWhiteSpace_m2148390798(NULL /*static, unused*/, L_33, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_009b;
		}
	}
	{
		return (bool)0;
	}

IL_009b:
	{
		CompareInfo_t1092934962 * L_35 = __this->get_m_info_4();
		String_t* L_36 = __this->get_Value_0();
		int32_t L_37 = V_2;
		int32_t L_38 = V_4;
		String_t* L_39 = ___target0;
		int32_t L_40 = V_1;
		int32_t L_41 = V_4;
		NullCheck(L_35);
		int32_t L_42 = VirtFuncInvoker7< int32_t, String_t*, int32_t, int32_t, String_t*, int32_t, int32_t, int32_t >::Invoke(8 /* System.Int32 System.Globalization.CompareInfo::Compare(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions) */, L_35, L_36, L_37, L_38, L_39, L_40, L_41, 1);
		if (!L_42)
		{
			goto IL_00b8;
		}
	}
	{
		return (bool)0;
	}

IL_00b8:
	{
		int32_t L_43 = V_2;
		int32_t L_44 = V_4;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)L_44)), (int32_t)1));
	}

IL_00bf:
	{
		int32_t L_45 = V_3;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1));
		goto IL_00cf;
	}

IL_00c5:
	{
		int32_t L_46 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1));
		int32_t* L_47 = ___matchLength2;
		int32_t* L_48 = ___matchLength2;
		*((int32_t*)(L_47)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_48)), (int32_t)1));
	}

IL_00cf:
	{
		int32_t L_49 = V_2;
		String_t* L_50 = __this->get_Value_0();
		NullCheck(L_50);
		int32_t L_51 = String_get_Length_m3847582255(L_50, /*hidden argument*/NULL);
		if ((((int32_t)L_49) >= ((int32_t)L_51)))
		{
			goto IL_00f0;
		}
	}
	{
		String_t* L_52 = __this->get_Value_0();
		int32_t L_53 = V_2;
		NullCheck(L_52);
		Il2CppChar L_54 = String_get_Chars_m2986988803(L_52, L_53, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_55 = Char_IsWhiteSpace_m2148390798(NULL /*static, unused*/, L_54, /*hidden argument*/NULL);
		if (L_55)
		{
			goto IL_00c5;
		}
	}

IL_00f0:
	{
		String_t* L_56 = ___target0;
		IL2CPP_RUNTIME_CLASS_INIT(__DTString_t2014593278_il2cpp_TypeInfo_var);
		CharU5BU5D_t3528271667* L_57 = ((__DTString_t2014593278_StaticFields*)il2cpp_codegen_static_fields_for(__DTString_t2014593278_il2cpp_TypeInfo_var))->get_WhiteSpaceChecks_6();
		int32_t L_58 = V_1;
		NullCheck(L_56);
		int32_t L_59 = String_IndexOfAny_m2323029521(L_56, L_57, L_58, /*hidden argument*/NULL);
		int32_t L_60 = L_59;
		V_3 = L_60;
		if ((((int32_t)L_60) >= ((int32_t)0)))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_61 = V_1;
		String_t* L_62 = ___target0;
		NullCheck(L_62);
		int32_t L_63 = String_get_Length_m3847582255(L_62, /*hidden argument*/NULL);
		if ((((int32_t)L_61) >= ((int32_t)L_63)))
		{
			goto IL_0147;
		}
	}
	{
		String_t* L_64 = ___target0;
		NullCheck(L_64);
		int32_t L_65 = String_get_Length_m3847582255(L_64, /*hidden argument*/NULL);
		int32_t L_66 = V_1;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_65, (int32_t)L_66));
		int32_t L_67 = V_2;
		String_t* L_68 = __this->get_Value_0();
		NullCheck(L_68);
		int32_t L_69 = String_get_Length_m3847582255(L_68, /*hidden argument*/NULL);
		int32_t L_70 = V_5;
		if ((((int32_t)L_67) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_69, (int32_t)L_70)))))
		{
			goto IL_012a;
		}
	}
	{
		return (bool)0;
	}

IL_012a:
	{
		CompareInfo_t1092934962 * L_71 = __this->get_m_info_4();
		String_t* L_72 = __this->get_Value_0();
		int32_t L_73 = V_2;
		int32_t L_74 = V_5;
		String_t* L_75 = ___target0;
		int32_t L_76 = V_1;
		int32_t L_77 = V_5;
		NullCheck(L_71);
		int32_t L_78 = VirtFuncInvoker7< int32_t, String_t*, int32_t, int32_t, String_t*, int32_t, int32_t, int32_t >::Invoke(8 /* System.Int32 System.Globalization.CompareInfo::Compare(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions) */, L_71, L_72, L_73, L_74, L_75, L_76, L_77, 1);
		if (!L_78)
		{
			goto IL_0147;
		}
	}
	{
		return (bool)0;
	}

IL_0147:
	{
		bool L_79 = ___checkWordBoundary1;
		if (!L_79)
		{
			goto IL_017a;
		}
	}
	{
		int32_t L_80 = __this->get_Index_1();
		int32_t* L_81 = ___matchLength2;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_80, (int32_t)(*((int32_t*)L_81))));
		int32_t L_82 = V_6;
		String_t* L_83 = __this->get_Value_0();
		NullCheck(L_83);
		int32_t L_84 = String_get_Length_m3847582255(L_83, /*hidden argument*/NULL);
		if ((((int32_t)L_82) >= ((int32_t)L_84)))
		{
			goto IL_017a;
		}
	}
	{
		String_t* L_85 = __this->get_Value_0();
		int32_t L_86 = V_6;
		NullCheck(L_85);
		Il2CppChar L_87 = String_get_Chars_m2986988803(L_85, L_86, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_88 = Char_IsLetter_m3996985877(NULL /*static, unused*/, L_87, /*hidden argument*/NULL);
		if (!L_88)
		{
			goto IL_017a;
		}
	}
	{
		return (bool)0;
	}

IL_017a:
	{
		return (bool)1;
	}
}
extern "C"  bool __DTString_MatchSpecifiedWords_m1748097800_AdjustorThunk (RuntimeObject * __this, String_t* ___target0, bool ___checkWordBoundary1, int32_t* ___matchLength2, const RuntimeMethod* method)
{
	__DTString_t2014593278 * _thisAdjusted = reinterpret_cast<__DTString_t2014593278 *>(__this + 1);
	return __DTString_MatchSpecifiedWords_m1748097800(_thisAdjusted, ___target0, ___checkWordBoundary1, ___matchLength2, method);
}
// System.Boolean System.__DTString::Match(System.String)
extern "C" IL2CPP_METHOD_ATTR bool __DTString_Match_m1370723662 (__DTString_t2014593278 * __this, String_t* ___str0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_Index_1();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1));
		int32_t L_1 = V_0;
		__this->set_Index_1(L_1);
		int32_t L_2 = V_0;
		int32_t L_3 = __this->get_len_2();
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_001b;
		}
	}
	{
		return (bool)0;
	}

IL_001b:
	{
		String_t* L_4 = ___str0;
		NullCheck(L_4);
		int32_t L_5 = String_get_Length_m3847582255(L_4, /*hidden argument*/NULL);
		String_t* L_6 = __this->get_Value_0();
		NullCheck(L_6);
		int32_t L_7 = String_get_Length_m3847582255(L_6, /*hidden argument*/NULL);
		int32_t L_8 = __this->get_Index_1();
		if ((((int32_t)L_5) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)L_8)))))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0037:
	{
		CompareInfo_t1092934962 * L_9 = __this->get_m_info_4();
		String_t* L_10 = __this->get_Value_0();
		int32_t L_11 = __this->get_Index_1();
		String_t* L_12 = ___str0;
		NullCheck(L_12);
		int32_t L_13 = String_get_Length_m3847582255(L_12, /*hidden argument*/NULL);
		String_t* L_14 = ___str0;
		String_t* L_15 = ___str0;
		NullCheck(L_15);
		int32_t L_16 = String_get_Length_m3847582255(L_15, /*hidden argument*/NULL);
		NullCheck(L_9);
		int32_t L_17 = VirtFuncInvoker7< int32_t, String_t*, int32_t, int32_t, String_t*, int32_t, int32_t, int32_t >::Invoke(8 /* System.Int32 System.Globalization.CompareInfo::Compare(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions) */, L_9, L_10, L_11, L_13, L_14, 0, L_16, ((int32_t)1073741824));
		if (L_17)
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_18 = __this->get_Index_1();
		String_t* L_19 = ___str0;
		NullCheck(L_19);
		int32_t L_20 = String_get_Length_m3847582255(L_19, /*hidden argument*/NULL);
		__this->set_Index_1(((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)1)))));
		return (bool)1;
	}

IL_007a:
	{
		return (bool)0;
	}
}
extern "C"  bool __DTString_Match_m1370723662_AdjustorThunk (RuntimeObject * __this, String_t* ___str0, const RuntimeMethod* method)
{
	__DTString_t2014593278 * _thisAdjusted = reinterpret_cast<__DTString_t2014593278 *>(__this + 1);
	return __DTString_Match_m1370723662(_thisAdjusted, ___str0, method);
}
// System.Boolean System.__DTString::Match(System.Char)
extern "C" IL2CPP_METHOD_ATTR bool __DTString_Match_m1638998693 (__DTString_t2014593278 * __this, Il2CppChar ___ch0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_Index_1();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1));
		int32_t L_1 = V_0;
		__this->set_Index_1(L_1);
		int32_t L_2 = V_0;
		int32_t L_3 = __this->get_len_2();
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_001b;
		}
	}
	{
		return (bool)0;
	}

IL_001b:
	{
		String_t* L_4 = __this->get_Value_0();
		int32_t L_5 = __this->get_Index_1();
		NullCheck(L_4);
		Il2CppChar L_6 = String_get_Chars_m2986988803(L_4, L_5, /*hidden argument*/NULL);
		Il2CppChar L_7 = ___ch0;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_0038;
		}
	}
	{
		Il2CppChar L_8 = ___ch0;
		__this->set_m_current_3(L_8);
		return (bool)1;
	}

IL_0038:
	{
		int32_t L_9 = __this->get_Index_1();
		__this->set_Index_1(((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1)));
		return (bool)0;
	}
}
extern "C"  bool __DTString_Match_m1638998693_AdjustorThunk (RuntimeObject * __this, Il2CppChar ___ch0, const RuntimeMethod* method)
{
	__DTString_t2014593278 * _thisAdjusted = reinterpret_cast<__DTString_t2014593278 *>(__this + 1);
	return __DTString_Match_m1638998693(_thisAdjusted, ___ch0, method);
}
// System.Int32 System.__DTString::MatchLongestWords(System.String[],System.Int32&)
extern "C" IL2CPP_METHOD_ATTR int32_t __DTString_MatchLongestWords_m3768057568 (__DTString_t2014593278 * __this, StringU5BU5D_t1281789340* ___words0, int32_t* ___maxMatchStrLen1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		V_0 = (-1);
		V_1 = 0;
		goto IL_002b;
	}

IL_0006:
	{
		StringU5BU5D_t1281789340* L_0 = ___words0;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		String_t* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_2 = L_3;
		String_t* L_4 = V_2;
		NullCheck(L_4);
		int32_t L_5 = String_get_Length_m3847582255(L_4, /*hidden argument*/NULL);
		V_3 = L_5;
		String_t* L_6 = V_2;
		bool L_7 = __DTString_MatchSpecifiedWords_m1748097800((__DTString_t2014593278 *)__this, L_6, (bool)0, (int32_t*)(&V_3), /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_8 = V_3;
		int32_t* L_9 = ___maxMatchStrLen1;
		if ((((int32_t)L_8) <= ((int32_t)(*((int32_t*)L_9)))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t* L_10 = ___maxMatchStrLen1;
		int32_t L_11 = V_3;
		*((int32_t*)(L_10)) = (int32_t)L_11;
		int32_t L_12 = V_1;
		V_0 = L_12;
	}

IL_0027:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_002b:
	{
		int32_t L_14 = V_1;
		StringU5BU5D_t1281789340* L_15 = ___words0;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_15)->max_length)))))))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_16 = V_0;
		return L_16;
	}
}
extern "C"  int32_t __DTString_MatchLongestWords_m3768057568_AdjustorThunk (RuntimeObject * __this, StringU5BU5D_t1281789340* ___words0, int32_t* ___maxMatchStrLen1, const RuntimeMethod* method)
{
	__DTString_t2014593278 * _thisAdjusted = reinterpret_cast<__DTString_t2014593278 *>(__this + 1);
	return __DTString_MatchLongestWords_m3768057568(_thisAdjusted, ___words0, ___maxMatchStrLen1, method);
}
// System.Int32 System.__DTString::GetRepeatCount()
extern "C" IL2CPP_METHOD_ATTR int32_t __DTString_GetRepeatCount_m2245750089 (__DTString_t2014593278 * __this, const RuntimeMethod* method)
{
	Il2CppChar V_0 = 0x0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = __this->get_Value_0();
		int32_t L_1 = __this->get_Index_1();
		NullCheck(L_0);
		Il2CppChar L_2 = String_get_Chars_m2986988803(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = __this->get_Index_1();
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
		goto IL_0021;
	}

IL_001d:
	{
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_0021:
	{
		int32_t L_5 = V_1;
		int32_t L_6 = __this->get_len_2();
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0039;
		}
	}
	{
		String_t* L_7 = __this->get_Value_0();
		int32_t L_8 = V_1;
		NullCheck(L_7);
		Il2CppChar L_9 = String_get_Chars_m2986988803(L_7, L_8, /*hidden argument*/NULL);
		Il2CppChar L_10 = V_0;
		if ((((int32_t)L_9) == ((int32_t)L_10)))
		{
			goto IL_001d;
		}
	}

IL_0039:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = __this->get_Index_1();
		int32_t L_13 = V_1;
		__this->set_Index_1(((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1)));
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)L_12));
	}
}
extern "C"  int32_t __DTString_GetRepeatCount_m2245750089_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	__DTString_t2014593278 * _thisAdjusted = reinterpret_cast<__DTString_t2014593278 *>(__this + 1);
	return __DTString_GetRepeatCount_m2245750089(_thisAdjusted, method);
}
// System.Boolean System.__DTString::GetNextDigit()
extern "C" IL2CPP_METHOD_ATTR bool __DTString_GetNextDigit_m3564891386 (__DTString_t2014593278 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (__DTString_GetNextDigit_m3564891386_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_Index_1();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1));
		int32_t L_1 = V_0;
		__this->set_Index_1(L_1);
		int32_t L_2 = V_0;
		int32_t L_3 = __this->get_len_2();
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_001b;
		}
	}
	{
		return (bool)0;
	}

IL_001b:
	{
		String_t* L_4 = __this->get_Value_0();
		int32_t L_5 = __this->get_Index_1();
		NullCheck(L_4);
		Il2CppChar L_6 = String_get_Chars_m2986988803(L_4, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeParse_t715850018_il2cpp_TypeInfo_var);
		bool L_7 = DateTimeParse_IsDigit_m3727153098(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
extern "C"  bool __DTString_GetNextDigit_m3564891386_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	__DTString_t2014593278 * _thisAdjusted = reinterpret_cast<__DTString_t2014593278 *>(__this + 1);
	return __DTString_GetNextDigit_m3564891386(_thisAdjusted, method);
}
// System.Char System.__DTString::GetChar()
extern "C" IL2CPP_METHOD_ATTR Il2CppChar __DTString_GetChar_m1238696822 (__DTString_t2014593278 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_Value_0();
		int32_t L_1 = __this->get_Index_1();
		NullCheck(L_0);
		Il2CppChar L_2 = String_get_Chars_m2986988803(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
extern "C"  Il2CppChar __DTString_GetChar_m1238696822_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	__DTString_t2014593278 * _thisAdjusted = reinterpret_cast<__DTString_t2014593278 *>(__this + 1);
	return __DTString_GetChar_m1238696822(_thisAdjusted, method);
}
// System.Int32 System.__DTString::GetDigit()
extern "C" IL2CPP_METHOD_ATTR int32_t __DTString_GetDigit_m3018404824 (__DTString_t2014593278 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_Value_0();
		int32_t L_1 = __this->get_Index_1();
		NullCheck(L_0);
		Il2CppChar L_2 = String_get_Chars_m2986988803(L_0, L_1, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)((int32_t)48)));
	}
}
extern "C"  int32_t __DTString_GetDigit_m3018404824_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	__DTString_t2014593278 * _thisAdjusted = reinterpret_cast<__DTString_t2014593278 *>(__this + 1);
	return __DTString_GetDigit_m3018404824(_thisAdjusted, method);
}
// System.Void System.__DTString::SkipWhiteSpaces()
extern "C" IL2CPP_METHOD_ATTR void __DTString_SkipWhiteSpaces_m2053058269 (__DTString_t2014593278 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (__DTString_SkipWhiteSpaces_m2053058269_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_002b;
	}

IL_0002:
	{
		String_t* L_0 = __this->get_Value_0();
		int32_t L_1 = __this->get_Index_1();
		NullCheck(L_0);
		Il2CppChar L_2 = String_get_Chars_m2986988803(L_0, ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_3 = Char_IsWhiteSpace_m2148390798(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		int32_t L_4 = __this->get_Index_1();
		__this->set_Index_1(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)));
	}

IL_002b:
	{
		int32_t L_5 = __this->get_Index_1();
		int32_t L_6 = __this->get_len_2();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1))) < ((int32_t)L_6)))
		{
			goto IL_0002;
		}
	}
	{
		return;
	}
}
extern "C"  void __DTString_SkipWhiteSpaces_m2053058269_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	__DTString_t2014593278 * _thisAdjusted = reinterpret_cast<__DTString_t2014593278 *>(__this + 1);
	__DTString_SkipWhiteSpaces_m2053058269(_thisAdjusted, method);
}
// System.Boolean System.__DTString::SkipWhiteSpaceCurrent()
extern "C" IL2CPP_METHOD_ATTR bool __DTString_SkipWhiteSpaceCurrent_m2113872575 (__DTString_t2014593278 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (__DTString_SkipWhiteSpaceCurrent_m2113872575_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_Index_1();
		int32_t L_1 = __this->get_len_2();
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0010;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		Il2CppChar L_2 = __this->get_m_current_3();
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_3 = Char_IsWhiteSpace_m2148390798(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0045;
		}
	}
	{
		return (bool)1;
	}

IL_001f:
	{
		String_t* L_4 = __this->get_Value_0();
		int32_t L_5 = __this->get_Index_1();
		NullCheck(L_4);
		Il2CppChar L_6 = String_get_Chars_m2986988803(L_4, L_5, /*hidden argument*/NULL);
		__this->set_m_current_3(L_6);
		Il2CppChar L_7 = __this->get_m_current_3();
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_8 = Char_IsWhiteSpace_m2148390798(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0045;
		}
	}
	{
		return (bool)1;
	}

IL_0045:
	{
		int32_t L_9 = __this->get_Index_1();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		int32_t L_10 = V_0;
		__this->set_Index_1(L_10);
		int32_t L_11 = V_0;
		int32_t L_12 = __this->get_len_2();
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
extern "C"  bool __DTString_SkipWhiteSpaceCurrent_m2113872575_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	__DTString_t2014593278 * _thisAdjusted = reinterpret_cast<__DTString_t2014593278 *>(__this + 1);
	return __DTString_SkipWhiteSpaceCurrent_m2113872575(_thisAdjusted, method);
}
// System.Void System.__DTString::TrimTail()
extern "C" IL2CPP_METHOD_ATTR void __DTString_TrimTail_m653960243 (__DTString_t2014593278 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (__DTString_TrimTail_m653960243_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_len_2();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1));
		goto IL_000f;
	}

IL_000b:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1));
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		String_t* L_3 = __this->get_Value_0();
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Il2CppChar L_5 = String_get_Chars_m2986988803(L_3, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_6 = Char_IsWhiteSpace_m2148390798(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_000b;
		}
	}

IL_0026:
	{
		String_t* L_7 = __this->get_Value_0();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		String_t* L_9 = String_Substring_m1610150815(L_7, 0, ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)), /*hidden argument*/NULL);
		__this->set_Value_0(L_9);
		String_t* L_10 = __this->get_Value_0();
		NullCheck(L_10);
		int32_t L_11 = String_get_Length_m3847582255(L_10, /*hidden argument*/NULL);
		__this->set_len_2(L_11);
		return;
	}
}
extern "C"  void __DTString_TrimTail_m653960243_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	__DTString_t2014593278 * _thisAdjusted = reinterpret_cast<__DTString_t2014593278 *>(__this + 1);
	__DTString_TrimTail_m653960243(_thisAdjusted, method);
}
// System.Void System.__DTString::RemoveTrailingInQuoteSpaces()
extern "C" IL2CPP_METHOD_ATTR void __DTString_RemoveTrailingInQuoteSpaces_m4285619600 (__DTString_t2014593278 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (__DTString_RemoveTrailingInQuoteSpaces_m4285619600_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Il2CppChar V_1 = 0x0;
	{
		int32_t L_0 = __this->get_len_2();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1));
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) > ((int32_t)1)))
		{
			goto IL_000e;
		}
	}
	{
		return;
	}

IL_000e:
	{
		String_t* L_2 = __this->get_Value_0();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		Il2CppChar L_4 = String_get_Chars_m2986988803(L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		Il2CppChar L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)39))))
		{
			goto IL_0025;
		}
	}
	{
		Il2CppChar L_6 = V_1;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_008f;
		}
	}

IL_0025:
	{
		String_t* L_7 = __this->get_Value_0();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		Il2CppChar L_9 = String_get_Chars_m2986988803(L_7, ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_10 = Char_IsWhiteSpace_m2148390798(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_008f;
		}
	}
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)1));
		goto IL_0044;
	}

IL_0040:
	{
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1));
	}

IL_0044:
	{
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) < ((int32_t)1)))
		{
			goto IL_005d;
		}
	}
	{
		String_t* L_14 = __this->get_Value_0();
		int32_t L_15 = V_0;
		NullCheck(L_14);
		Il2CppChar L_16 = String_get_Chars_m2986988803(L_14, ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_17 = Char_IsWhiteSpace_m2148390798(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_0040;
		}
	}

IL_005d:
	{
		String_t* L_18 = __this->get_Value_0();
		int32_t L_19 = V_0;
		String_t* L_20 = __this->get_Value_0();
		NullCheck(L_20);
		int32_t L_21 = String_get_Length_m3847582255(L_20, /*hidden argument*/NULL);
		int32_t L_22 = V_0;
		NullCheck(L_18);
		String_t* L_23 = String_Remove_m562998446(L_18, L_19, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1)), (int32_t)L_22)), /*hidden argument*/NULL);
		__this->set_Value_0(L_23);
		String_t* L_24 = __this->get_Value_0();
		NullCheck(L_24);
		int32_t L_25 = String_get_Length_m3847582255(L_24, /*hidden argument*/NULL);
		__this->set_len_2(L_25);
	}

IL_008f:
	{
		return;
	}
}
extern "C"  void __DTString_RemoveTrailingInQuoteSpaces_m4285619600_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	__DTString_t2014593278 * _thisAdjusted = reinterpret_cast<__DTString_t2014593278 *>(__this + 1);
	__DTString_RemoveTrailingInQuoteSpaces_m4285619600(_thisAdjusted, method);
}
// System.Void System.__DTString::RemoveLeadingInQuoteSpaces()
extern "C" IL2CPP_METHOD_ATTR void __DTString_RemoveLeadingInQuoteSpaces_m695439123 (__DTString_t2014593278 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (__DTString_RemoveLeadingInQuoteSpaces_m695439123_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Il2CppChar V_1 = 0x0;
	{
		int32_t L_0 = __this->get_len_2();
		if ((((int32_t)L_0) > ((int32_t)2)))
		{
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		V_0 = 0;
		String_t* L_1 = __this->get_Value_0();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		Il2CppChar L_3 = String_get_Chars_m2986988803(L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		Il2CppChar L_4 = V_1;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)39))))
		{
			goto IL_0029;
		}
	}
	{
		Il2CppChar L_5 = V_1;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0070;
		}
	}
	{
		goto IL_0029;
	}

IL_0025:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0029:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = __this->get_len_2();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1))) >= ((int32_t)L_8)))
		{
			goto IL_0049;
		}
	}
	{
		String_t* L_9 = __this->get_Value_0();
		int32_t L_10 = V_0;
		NullCheck(L_9);
		Il2CppChar L_11 = String_get_Chars_m2986988803(L_9, ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_12 = Char_IsWhiteSpace_m2148390798(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0025;
		}
	}

IL_0049:
	{
		int32_t L_13 = V_0;
		if (!L_13)
		{
			goto IL_0070;
		}
	}
	{
		String_t* L_14 = __this->get_Value_0();
		int32_t L_15 = V_0;
		NullCheck(L_14);
		String_t* L_16 = String_Remove_m562998446(L_14, 1, L_15, /*hidden argument*/NULL);
		__this->set_Value_0(L_16);
		String_t* L_17 = __this->get_Value_0();
		NullCheck(L_17);
		int32_t L_18 = String_get_Length_m3847582255(L_17, /*hidden argument*/NULL);
		__this->set_len_2(L_18);
	}

IL_0070:
	{
		return;
	}
}
extern "C"  void __DTString_RemoveLeadingInQuoteSpaces_m695439123_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	__DTString_t2014593278 * _thisAdjusted = reinterpret_cast<__DTString_t2014593278 *>(__this + 1);
	__DTString_RemoveLeadingInQuoteSpaces_m695439123(_thisAdjusted, method);
}
// System.DTSubString System.__DTString::GetSubString()
extern "C" IL2CPP_METHOD_ATTR DTSubString_t967826655  __DTString_GetSubString_m2408595494 (__DTString_t2014593278 * __this, const RuntimeMethod* method)
{
	DTSubString_t967826655  V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	int32_t V_3 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(DTSubString_t967826655 ));
		int32_t L_0 = __this->get_Index_1();
		(&V_0)->set_index_1(L_0);
		String_t* L_1 = __this->get_Value_0();
		(&V_0)->set_s_0(L_1);
		goto IL_00a2;
	}

IL_0024:
	{
		String_t* L_2 = __this->get_Value_0();
		int32_t L_3 = __this->get_Index_1();
		DTSubString_t967826655  L_4 = V_0;
		int32_t L_5 = L_4.get_length_2();
		NullCheck(L_2);
		Il2CppChar L_6 = String_get_Chars_m2986988803(L_2, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_5)), /*hidden argument*/NULL);
		V_2 = L_6;
		Il2CppChar L_7 = V_2;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)48))))
		{
			goto IL_004b;
		}
	}
	{
		Il2CppChar L_8 = V_2;
		if ((((int32_t)L_8) > ((int32_t)((int32_t)57))))
		{
			goto IL_004b;
		}
	}
	{
		V_1 = 2;
		goto IL_004d;
	}

IL_004b:
	{
		V_1 = 4;
	}

IL_004d:
	{
		DTSubString_t967826655  L_9 = V_0;
		int32_t L_10 = L_9.get_length_2();
		if (L_10)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_11 = V_1;
		(&V_0)->set_type_3(L_11);
		goto IL_0068;
	}

IL_005f:
	{
		DTSubString_t967826655  L_12 = V_0;
		int32_t L_13 = L_12.get_type_3();
		int32_t L_14 = V_1;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_00ba;
		}
	}

IL_0068:
	{
		int32_t* L_15 = (&V_0)->get_address_of_length_2();
		int32_t* L_16 = L_15;
		*((int32_t*)(L_16)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_16)), (int32_t)1));
		int32_t L_17 = V_1;
		if ((!(((uint32_t)L_17) == ((uint32_t)2))))
		{
			goto IL_00ba;
		}
	}
	{
		DTSubString_t967826655  L_18 = V_0;
		int32_t L_19 = L_18.get_length_2();
		if ((((int32_t)L_19) <= ((int32_t)8)))
		{
			goto IL_008b;
		}
	}
	{
		(&V_0)->set_type_3(1);
		DTSubString_t967826655  L_20 = V_0;
		return L_20;
	}

IL_008b:
	{
		Il2CppChar L_21 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)((int32_t)48)));
		DTSubString_t967826655  L_22 = V_0;
		int32_t L_23 = L_22.get_value_4();
		int32_t L_24 = V_3;
		(&V_0)->set_value_4(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_23, (int32_t)((int32_t)10))), (int32_t)L_24)));
	}

IL_00a2:
	{
		int32_t L_25 = __this->get_Index_1();
		DTSubString_t967826655  L_26 = V_0;
		int32_t L_27 = L_26.get_length_2();
		int32_t L_28 = __this->get_len_2();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)L_27))) < ((int32_t)L_28)))
		{
			goto IL_0024;
		}
	}

IL_00ba:
	{
		DTSubString_t967826655  L_29 = V_0;
		int32_t L_30 = L_29.get_length_2();
		if (L_30)
		{
			goto IL_00cc;
		}
	}
	{
		(&V_0)->set_type_3(3);
		DTSubString_t967826655  L_31 = V_0;
		return L_31;
	}

IL_00cc:
	{
		DTSubString_t967826655  L_32 = V_0;
		return L_32;
	}
}
extern "C"  DTSubString_t967826655  __DTString_GetSubString_m2408595494_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	__DTString_t2014593278 * _thisAdjusted = reinterpret_cast<__DTString_t2014593278 *>(__this + 1);
	return __DTString_GetSubString_m2408595494(_thisAdjusted, method);
}
// System.Void System.__DTString::ConsumeSubString(System.DTSubString)
extern "C" IL2CPP_METHOD_ATTR void __DTString_ConsumeSubString_m4032894792 (__DTString_t2014593278 * __this, DTSubString_t967826655  ___sub0, const RuntimeMethod* method)
{
	{
		DTSubString_t967826655  L_0 = ___sub0;
		int32_t L_1 = L_0.get_index_1();
		DTSubString_t967826655  L_2 = ___sub0;
		int32_t L_3 = L_2.get_length_2();
		__this->set_Index_1(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_3)));
		int32_t L_4 = __this->get_Index_1();
		int32_t L_5 = __this->get_len_2();
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0038;
		}
	}
	{
		String_t* L_6 = __this->get_Value_0();
		int32_t L_7 = __this->get_Index_1();
		NullCheck(L_6);
		Il2CppChar L_8 = String_get_Chars_m2986988803(L_6, L_7, /*hidden argument*/NULL);
		__this->set_m_current_3(L_8);
	}

IL_0038:
	{
		return;
	}
}
extern "C"  void __DTString_ConsumeSubString_m4032894792_AdjustorThunk (RuntimeObject * __this, DTSubString_t967826655  ___sub0, const RuntimeMethod* method)
{
	__DTString_t2014593278 * _thisAdjusted = reinterpret_cast<__DTString_t2014593278 *>(__this + 1);
	__DTString_ConsumeSubString_m4032894792(_thisAdjusted, ___sub0, method);
}
// System.Void System.__DTString::.cctor()
extern "C" IL2CPP_METHOD_ATTR void __DTString__cctor_m3069308443 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (__DTString__cctor_m3069308443_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t3528271667* L_0 = (CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t3528271667* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)32));
		CharU5BU5D_t3528271667* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)160));
		((__DTString_t2014593278_StaticFields*)il2cpp_codegen_static_fields_for(__DTString_t2014593278_il2cpp_TypeInfo_var))->set_WhiteSpaceChecks_6(L_2);
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
// System.Boolean System.__Filters::FilterAttribute(System.Reflection.MemberInfo,System.Object)
extern "C" IL2CPP_METHOD_ATTR bool __Filters_FilterAttribute_m1188844130 (__Filters_t550753867 * __this, MemberInfo_t * ___m0, RuntimeObject * ___filterCriteria1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (__Filters_FilterAttribute_m1188844130_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject * L_0 = ___filterCriteria1;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		String_t* L_1 = Environment_GetResourceString_m2063689938(NULL /*static, unused*/, _stringLiteral2976560351, /*hidden argument*/NULL);
		InvalidFilterCriteriaException_t2427731508 * L_2 = (InvalidFilterCriteriaException_t2427731508 *)il2cpp_codegen_object_new(InvalidFilterCriteriaException_t2427731508_il2cpp_TypeInfo_var);
		InvalidFilterCriteriaException__ctor_m948508901(L_2, L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, __Filters_FilterAttribute_m1188844130_RuntimeMethod_var);
	}

IL_0013:
	{
		MemberInfo_t * L_3 = ___m0;
		NullCheck(L_3);
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Reflection.MemberTypes System.Reflection.MemberInfo::get_MemberType() */, L_3);
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)4)))
		{
			goto IL_00ce;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((!(((uint32_t)L_7) == ((uint32_t)8))))
		{
			goto IL_0160;
		}
	}

IL_002c:
	{
		V_1 = 0;
	}

IL_002e:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_8 = ___filterCriteria1;
		V_1 = ((*(int32_t*)((int32_t*)UnBox(L_8, Int32_t2950945753_il2cpp_TypeInfo_var))));
		goto IL_0048;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0037;
		throw e;
	}

CATCH_0037:
	{ // begin catch(System.Object)
		String_t* L_9 = Environment_GetResourceString_m2063689938(NULL /*static, unused*/, _stringLiteral2976560351, /*hidden argument*/NULL);
		InvalidFilterCriteriaException_t2427731508 * L_10 = (InvalidFilterCriteriaException_t2427731508 *)il2cpp_codegen_object_new(InvalidFilterCriteriaException_t2427731508_il2cpp_TypeInfo_var);
		InvalidFilterCriteriaException__ctor_m948508901(L_10, L_9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, NULL, __Filters_FilterAttribute_m1188844130_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_0048:
	{
		MemberInfo_t * L_11 = ___m0;
		NullCheck(L_11);
		int32_t L_12 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Reflection.MemberTypes System.Reflection.MemberInfo::get_MemberType() */, L_11);
		if ((!(((uint32_t)L_12) == ((uint32_t)8))))
		{
			goto IL_005f;
		}
	}
	{
		MemberInfo_t * L_13 = ___m0;
		NullCheck(((MethodInfo_t *)CastclassClass((RuntimeObject*)L_13, MethodInfo_t_il2cpp_TypeInfo_var)));
		int32_t L_14 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Reflection.MethodAttributes System.Reflection.MethodBase::get_Attributes() */, ((MethodInfo_t *)CastclassClass((RuntimeObject*)L_13, MethodInfo_t_il2cpp_TypeInfo_var)));
		V_2 = L_14;
		goto IL_006b;
	}

IL_005f:
	{
		MemberInfo_t * L_15 = ___m0;
		NullCheck(((ConstructorInfo_t5769829 *)CastclassClass((RuntimeObject*)L_15, ConstructorInfo_t5769829_il2cpp_TypeInfo_var)));
		int32_t L_16 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Reflection.MethodAttributes System.Reflection.MethodBase::get_Attributes() */, ((ConstructorInfo_t5769829 *)CastclassClass((RuntimeObject*)L_15, ConstructorInfo_t5769829_il2cpp_TypeInfo_var)));
		V_2 = L_16;
	}

IL_006b:
	{
		int32_t L_17 = V_1;
		if (!((int32_t)((int32_t)L_17&(int32_t)7)))
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_18 = V_2;
		int32_t L_19 = V_1;
		if ((((int32_t)((int32_t)((int32_t)L_18&(int32_t)7))) == ((int32_t)((int32_t)((int32_t)L_19&(int32_t)7)))))
		{
			goto IL_007a;
		}
	}
	{
		return (bool)0;
	}

IL_007a:
	{
		int32_t L_20 = V_1;
		if (!((int32_t)((int32_t)L_20&(int32_t)((int32_t)16))))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_21 = V_2;
		if (((int32_t)((int32_t)L_21&(int32_t)((int32_t)16))))
		{
			goto IL_0088;
		}
	}
	{
		return (bool)0;
	}

IL_0088:
	{
		int32_t L_22 = V_1;
		if (!((int32_t)((int32_t)L_22&(int32_t)((int32_t)32))))
		{
			goto IL_0096;
		}
	}
	{
		int32_t L_23 = V_2;
		if (((int32_t)((int32_t)L_23&(int32_t)((int32_t)32))))
		{
			goto IL_0096;
		}
	}
	{
		return (bool)0;
	}

IL_0096:
	{
		int32_t L_24 = V_1;
		if (!((int32_t)((int32_t)L_24&(int32_t)((int32_t)64))))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_25 = V_2;
		if (((int32_t)((int32_t)L_25&(int32_t)((int32_t)64))))
		{
			goto IL_00a4;
		}
	}
	{
		return (bool)0;
	}

IL_00a4:
	{
		int32_t L_26 = V_1;
		if (!((int32_t)((int32_t)L_26&(int32_t)((int32_t)1024))))
		{
			goto IL_00b8;
		}
	}
	{
		int32_t L_27 = V_2;
		if (((int32_t)((int32_t)L_27&(int32_t)((int32_t)1024))))
		{
			goto IL_00b8;
		}
	}
	{
		return (bool)0;
	}

IL_00b8:
	{
		int32_t L_28 = V_1;
		if (!((int32_t)((int32_t)L_28&(int32_t)((int32_t)2048))))
		{
			goto IL_00cc;
		}
	}
	{
		int32_t L_29 = V_2;
		if (((int32_t)((int32_t)L_29&(int32_t)((int32_t)2048))))
		{
			goto IL_00cc;
		}
	}
	{
		return (bool)0;
	}

IL_00cc:
	{
		return (bool)1;
	}

IL_00ce:
	{
		V_3 = 0;
	}

IL_00d0:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_30 = ___filterCriteria1;
		V_3 = ((*(int32_t*)((int32_t*)UnBox(L_30, Int32_t2950945753_il2cpp_TypeInfo_var))));
		goto IL_00ea;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00d9;
		throw e;
	}

CATCH_00d9:
	{ // begin catch(System.Object)
		String_t* L_31 = Environment_GetResourceString_m2063689938(NULL /*static, unused*/, _stringLiteral2976560351, /*hidden argument*/NULL);
		InvalidFilterCriteriaException_t2427731508 * L_32 = (InvalidFilterCriteriaException_t2427731508 *)il2cpp_codegen_object_new(InvalidFilterCriteriaException_t2427731508_il2cpp_TypeInfo_var);
		InvalidFilterCriteriaException__ctor_m948508901(L_32, L_31, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_32, NULL, __Filters_FilterAttribute_m1188844130_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_00ea:
	{
		MemberInfo_t * L_33 = ___m0;
		NullCheck(((FieldInfo_t *)CastclassClass((RuntimeObject*)L_33, FieldInfo_t_il2cpp_TypeInfo_var)));
		int32_t L_34 = VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Reflection.FieldAttributes System.Reflection.FieldInfo::get_Attributes() */, ((FieldInfo_t *)CastclassClass((RuntimeObject*)L_33, FieldInfo_t_il2cpp_TypeInfo_var)));
		V_4 = L_34;
		int32_t L_35 = V_3;
		if (!((int32_t)((int32_t)L_35&(int32_t)7)))
		{
			goto IL_0107;
		}
	}
	{
		int32_t L_36 = V_4;
		int32_t L_37 = V_3;
		if ((((int32_t)((int32_t)((int32_t)L_36&(int32_t)7))) == ((int32_t)((int32_t)((int32_t)L_37&(int32_t)7)))))
		{
			goto IL_0107;
		}
	}
	{
		return (bool)0;
	}

IL_0107:
	{
		int32_t L_38 = V_3;
		if (!((int32_t)((int32_t)L_38&(int32_t)((int32_t)16))))
		{
			goto IL_0116;
		}
	}
	{
		int32_t L_39 = V_4;
		if (((int32_t)((int32_t)L_39&(int32_t)((int32_t)16))))
		{
			goto IL_0116;
		}
	}
	{
		return (bool)0;
	}

IL_0116:
	{
		int32_t L_40 = V_3;
		if (!((int32_t)((int32_t)L_40&(int32_t)((int32_t)32))))
		{
			goto IL_0125;
		}
	}
	{
		int32_t L_41 = V_4;
		if (((int32_t)((int32_t)L_41&(int32_t)((int32_t)32))))
		{
			goto IL_0125;
		}
	}
	{
		return (bool)0;
	}

IL_0125:
	{
		int32_t L_42 = V_3;
		if (!((int32_t)((int32_t)L_42&(int32_t)((int32_t)64))))
		{
			goto IL_0134;
		}
	}
	{
		int32_t L_43 = V_4;
		if (((int32_t)((int32_t)L_43&(int32_t)((int32_t)64))))
		{
			goto IL_0134;
		}
	}
	{
		return (bool)0;
	}

IL_0134:
	{
		int32_t L_44 = V_3;
		if (!((int32_t)((int32_t)L_44&(int32_t)((int32_t)128))))
		{
			goto IL_0149;
		}
	}
	{
		int32_t L_45 = V_4;
		if (((int32_t)((int32_t)L_45&(int32_t)((int32_t)128))))
		{
			goto IL_0149;
		}
	}
	{
		return (bool)0;
	}

IL_0149:
	{
		int32_t L_46 = V_3;
		if (!((int32_t)((int32_t)L_46&(int32_t)((int32_t)8192))))
		{
			goto IL_015e;
		}
	}
	{
		int32_t L_47 = V_4;
		if (((int32_t)((int32_t)L_47&(int32_t)((int32_t)8192))))
		{
			goto IL_015e;
		}
	}
	{
		return (bool)0;
	}

IL_015e:
	{
		return (bool)1;
	}

IL_0160:
	{
		return (bool)0;
	}
}
// System.Boolean System.__Filters::FilterName(System.Reflection.MemberInfo,System.Object)
extern "C" IL2CPP_METHOD_ATTR bool __Filters_FilterName_m969729198 (__Filters_t550753867 * __this, MemberInfo_t * ___m0, RuntimeObject * ___filterCriteria1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (__Filters_FilterName_m969729198_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		RuntimeObject * L_0 = ___filterCriteria1;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject * L_1 = ___filterCriteria1;
		if (((String_t*)IsInstSealed((RuntimeObject*)L_1, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_001b;
		}
	}

IL_000b:
	{
		String_t* L_2 = Environment_GetResourceString_m2063689938(NULL /*static, unused*/, _stringLiteral238790419, /*hidden argument*/NULL);
		InvalidFilterCriteriaException_t2427731508 * L_3 = (InvalidFilterCriteriaException_t2427731508 *)il2cpp_codegen_object_new(InvalidFilterCriteriaException_t2427731508_il2cpp_TypeInfo_var);
		InvalidFilterCriteriaException__ctor_m948508901(L_3, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, __Filters_FilterName_m969729198_RuntimeMethod_var);
	}

IL_001b:
	{
		RuntimeObject * L_4 = ___filterCriteria1;
		V_0 = ((String_t*)CastclassSealed((RuntimeObject*)L_4, String_t_il2cpp_TypeInfo_var));
		String_t* L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = String_Trim_m923598732(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		MemberInfo_t * L_7 = ___m0;
		NullCheck(L_7);
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_7);
		V_1 = L_8;
		MemberInfo_t * L_9 = ___m0;
		NullCheck(L_9);
		int32_t L_10 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Reflection.MemberTypes System.Reflection.MemberInfo::get_MemberType() */, L_9);
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)128)))))
		{
			goto IL_004e;
		}
	}
	{
		String_t* L_11 = V_1;
		String_t* L_12 = V_1;
		NullCheck(L_12);
		int32_t L_13 = String_LastIndexOf_m3451222878(L_12, ((int32_t)43), /*hidden argument*/NULL);
		NullCheck(L_11);
		String_t* L_14 = String_Substring_m2848979100(L_11, ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)), /*hidden argument*/NULL);
		V_1 = L_14;
	}

IL_004e:
	{
		String_t* L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = String_get_Length_m3847582255(L_15, /*hidden argument*/NULL);
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_0082;
		}
	}
	{
		String_t* L_17 = V_0;
		String_t* L_18 = V_0;
		NullCheck(L_18);
		int32_t L_19 = String_get_Length_m3847582255(L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		Il2CppChar L_20 = String_get_Chars_m2986988803(L_17, ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)42)))))
		{
			goto IL_0082;
		}
	}
	{
		String_t* L_21 = V_0;
		String_t* L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23 = String_get_Length_m3847582255(L_22, /*hidden argument*/NULL);
		NullCheck(L_21);
		String_t* L_24 = String_Substring_m1610150815(L_21, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)1)), /*hidden argument*/NULL);
		V_0 = L_24;
		String_t* L_25 = V_1;
		String_t* L_26 = V_0;
		NullCheck(L_25);
		bool L_27 = String_StartsWith_m2640722675(L_25, L_26, 4, /*hidden argument*/NULL);
		return L_27;
	}

IL_0082:
	{
		String_t* L_28 = V_1;
		String_t* L_29 = V_0;
		NullCheck(L_28);
		bool L_30 = String_Equals_m2270643605(L_28, L_29, /*hidden argument*/NULL);
		return L_30;
	}
}
// System.Boolean System.__Filters::FilterIgnoreCase(System.Reflection.MemberInfo,System.Object)
extern "C" IL2CPP_METHOD_ATTR bool __Filters_FilterIgnoreCase_m1077950596 (__Filters_t550753867 * __this, MemberInfo_t * ___m0, RuntimeObject * ___filterCriteria1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (__Filters_FilterIgnoreCase_m1077950596_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		RuntimeObject * L_0 = ___filterCriteria1;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject * L_1 = ___filterCriteria1;
		if (((String_t*)IsInstSealed((RuntimeObject*)L_1, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_001b;
		}
	}

IL_000b:
	{
		String_t* L_2 = Environment_GetResourceString_m2063689938(NULL /*static, unused*/, _stringLiteral238790419, /*hidden argument*/NULL);
		InvalidFilterCriteriaException_t2427731508 * L_3 = (InvalidFilterCriteriaException_t2427731508 *)il2cpp_codegen_object_new(InvalidFilterCriteriaException_t2427731508_il2cpp_TypeInfo_var);
		InvalidFilterCriteriaException__ctor_m948508901(L_3, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, __Filters_FilterIgnoreCase_m1077950596_RuntimeMethod_var);
	}

IL_001b:
	{
		RuntimeObject * L_4 = ___filterCriteria1;
		V_0 = ((String_t*)CastclassSealed((RuntimeObject*)L_4, String_t_il2cpp_TypeInfo_var));
		String_t* L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = String_Trim_m923598732(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		MemberInfo_t * L_7 = ___m0;
		NullCheck(L_7);
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_7);
		V_1 = L_8;
		MemberInfo_t * L_9 = ___m0;
		NullCheck(L_9);
		int32_t L_10 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Reflection.MemberTypes System.Reflection.MemberInfo::get_MemberType() */, L_9);
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)128)))))
		{
			goto IL_004e;
		}
	}
	{
		String_t* L_11 = V_1;
		String_t* L_12 = V_1;
		NullCheck(L_12);
		int32_t L_13 = String_LastIndexOf_m3451222878(L_12, ((int32_t)43), /*hidden argument*/NULL);
		NullCheck(L_11);
		String_t* L_14 = String_Substring_m2848979100(L_11, ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)), /*hidden argument*/NULL);
		V_1 = L_14;
	}

IL_004e:
	{
		String_t* L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = String_get_Length_m3847582255(L_15, /*hidden argument*/NULL);
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		String_t* L_17 = V_0;
		String_t* L_18 = V_0;
		NullCheck(L_18);
		int32_t L_19 = String_get_Length_m3847582255(L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		Il2CppChar L_20 = String_get_Chars_m2986988803(L_17, ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)42)))))
		{
			goto IL_008d;
		}
	}
	{
		String_t* L_21 = V_0;
		String_t* L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23 = String_get_Length_m3847582255(L_22, /*hidden argument*/NULL);
		NullCheck(L_21);
		String_t* L_24 = String_Substring_m1610150815(L_21, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)1)), /*hidden argument*/NULL);
		V_0 = L_24;
		String_t* L_25 = V_1;
		String_t* L_26 = V_0;
		String_t* L_27 = V_0;
		NullCheck(L_27);
		int32_t L_28 = String_get_Length_m3847582255(L_27, /*hidden argument*/NULL);
		int32_t L_29 = String_Compare_m1966407346(NULL /*static, unused*/, L_25, 0, L_26, 0, L_28, 5, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_29) == ((int32_t)0))? 1 : 0);
	}

IL_008d:
	{
		String_t* L_30 = V_0;
		String_t* L_31 = V_1;
		int32_t L_32 = String_Compare_m3203413707(NULL /*static, unused*/, L_30, L_31, 5, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_32) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.__Filters::.ctor()
extern "C" IL2CPP_METHOD_ATTR void __Filters__ctor_m4259786029 (__Filters_t550753867 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.__Filters::.cctor()
extern "C" IL2CPP_METHOD_ATTR void __Filters__cctor_m18745359 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (__Filters__cctor_m18745359_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__Filters_t550753867 * L_0 = (__Filters_t550753867 *)il2cpp_codegen_object_new(__Filters_t550753867_il2cpp_TypeInfo_var);
		__Filters__ctor_m4259786029(L_0, /*hidden argument*/NULL);
		((__Filters_t550753867_StaticFields*)il2cpp_codegen_static_fields_for(__Filters_t550753867_il2cpp_TypeInfo_var))->set_Instance_0(L_0);
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
// System.Void System.__Il2CppComDelegate::Finalize()
extern "C" IL2CPP_METHOD_ATTR void __Il2CppComDelegate_Finalize_m2460829410 (__Il2CppComDelegate_t1102178620 * __this, const RuntimeMethod* method)
{
	__Il2CppComObject_Finalize_m2923638372(__this, NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String System.__Il2CppComObject::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* __Il2CppComObject_ToString_m2200915729 (Il2CppComObject * __this, const RuntimeMethod* method)
{
	IStringable_t1634798504* ____istringable_t1634798504 = NULL;
	if (IL2CPP_HR_SUCCEEDED(__this->identity->QueryInterface(IStringable_t1634798504::IID, reinterpret_cast<void**>(&____istringable_t1634798504))))
	{
		// Native function invocation
		Il2CppHString returnValue = NULL;
		const il2cpp_hresult_t hr = ____istringable_t1634798504->IStringable_ToString_m698137009(&returnValue);
		____istringable_t1634798504->Release();

		il2cpp_codegen_com_raise_exception_if_failed(hr, false);

		// Marshaling of return value back from native representation
		String_t* _returnValue_unmarshaled = NULL;
		_returnValue_unmarshaled = il2cpp_codegen_marshal_hstring_result(returnValue);

		// Marshaling cleanup of return value native representation
		il2cpp_codegen_marshal_free_hstring(returnValue);
		returnValue = NULL;

		return _returnValue_unmarshaled;
	}
	return Object_ToString_m1740002499(__this, NULL);
}
// System.Void System.__Il2CppComObject::Finalize()
extern "C" IL2CPP_METHOD_ATTR void __Il2CppComObject_Finalize_m2923638372 (Il2CppComObject * __this, const RuntimeMethod* method)
{
	if (__this->identity != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime((RuntimeObject*)__this))
		{
			il2cpp_codegen_il2cpp_com_object_cleanup(__this);
		}
		__this->identity->Release();
		__this->identity = NULL;
	}

	Object_Finalize_m3076187857(__this, NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void XamMac.CoreFoundation.CFHelpers::CFRelease(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void CFHelpers_CFRelease_m3206817372 (RuntimeObject * __this /* static, unused */, intptr_t ___obj0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation"), "CFRelease", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'CFRelease'"), NULL, NULL);
		}
	}

	// Native function invocation
	il2cppPInvokeFunc(___obj0);

}
// System.IntPtr XamMac.CoreFoundation.CFHelpers::CFRetain(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t CFHelpers_CFRetain_m47160182 (RuntimeObject * __this /* static, unused */, intptr_t ___obj0, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation"), "CFRetain", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'CFRetain'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___obj0);

	return returnValue;
}
// System.IntPtr XamMac.CoreFoundation.CFHelpers::CFStringGetLength(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t CFHelpers_CFStringGetLength_m1003035781 (RuntimeObject * __this /* static, unused */, intptr_t ___handle0, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation"), "CFStringGetLength", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'CFStringGetLength'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___handle0);

	return returnValue;
}
// System.IntPtr XamMac.CoreFoundation.CFHelpers::CFStringGetCharactersPtr(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t CFHelpers_CFStringGetCharactersPtr_m1790634856 (RuntimeObject * __this /* static, unused */, intptr_t ___handle0, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation"), "CFStringGetCharactersPtr", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'CFStringGetCharactersPtr'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___handle0);

	return returnValue;
}
// System.IntPtr XamMac.CoreFoundation.CFHelpers::CFStringGetCharacters(System.IntPtr,XamMac.CoreFoundation.CFHelpers/CFRange,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t CFHelpers_CFStringGetCharacters_m1195295518 (RuntimeObject * __this /* static, unused */, intptr_t ___handle0, CFRange_t1233619878  ___range1, intptr_t ___buffer2, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, CFRange_t1233619878 , intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(CFRange_t1233619878 ) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation"), "CFStringGetCharacters", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'CFStringGetCharacters'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___handle0, ___range1, ___buffer2);

	return returnValue;
}
// System.String XamMac.CoreFoundation.CFHelpers::FetchString(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR String_t* CFHelpers_FetchString_m1875874129 (RuntimeObject * __this /* static, unused */, intptr_t ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CFHelpers_FetchString_m1875874129_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	intptr_t V_1;
	memset(&V_1, 0, sizeof(V_1));
	intptr_t V_2;
	memset(&V_2, 0, sizeof(V_2));
	CFRange_t1233619878  V_3;
	memset(&V_3, 0, sizeof(V_3));
	String_t* G_B6_0 = NULL;
	String_t* G_B5_0 = NULL;
	{
		intptr_t L_0 = ___handle0;
		bool L_1 = IntPtr_op_Equality_m408849716(NULL /*static, unused*/, L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_000f:
	{
		intptr_t L_2 = ___handle0;
		intptr_t L_3 = CFHelpers_CFStringGetLength_m1003035781(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		int32_t L_4 = IntPtr_op_Explicit_m4220076518(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		intptr_t L_5 = ___handle0;
		intptr_t L_6 = CFHelpers_CFStringGetCharactersPtr_m1790634856(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		V_2 = (intptr_t)(0);
		intptr_t L_7 = V_1;
		bool L_8 = IntPtr_op_Equality_m408849716(NULL /*static, unused*/, L_7, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_9 = V_0;
		CFRange__ctor_m1242434219((CFRange_t1233619878 *)(&V_3), 0, L_9, /*hidden argument*/NULL);
		int32_t L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		intptr_t L_11 = Marshal_AllocCoTaskMem_m1327939722(NULL /*static, unused*/, ((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)2)), /*hidden argument*/NULL);
		V_2 = L_11;
		intptr_t L_12 = ___handle0;
		CFRange_t1233619878  L_13 = V_3;
		intptr_t L_14 = V_2;
		CFHelpers_CFStringGetCharacters_m1195295518(NULL /*static, unused*/, L_12, L_13, L_14, /*hidden argument*/NULL);
		intptr_t L_15 = V_2;
		V_1 = L_15;
	}

IL_0052:
	{
		intptr_t L_16 = V_1;
		void* L_17 = IntPtr_op_Explicit_m2520637223(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		int32_t L_18 = V_0;
		String_t* L_19 = String_CreateString_m3400201881(NULL, (Il2CppChar*)(Il2CppChar*)L_17, 0, L_18, /*hidden argument*/NULL);
		intptr_t L_20 = V_2;
		bool L_21 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_20, (intptr_t)(0), /*hidden argument*/NULL);
		G_B5_0 = L_19;
		if (!L_21)
		{
			G_B6_0 = L_19;
			goto IL_0072;
		}
	}
	{
		intptr_t L_22 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		Marshal_FreeCoTaskMem_m3753155979(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		G_B6_0 = G_B5_0;
	}

IL_0072:
	{
		return G_B6_0;
	}
}
// System.IntPtr XamMac.CoreFoundation.CFHelpers::CFDataGetLength(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t CFHelpers_CFDataGetLength_m3730685275 (RuntimeObject * __this /* static, unused */, intptr_t ___handle0, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation"), "CFDataGetLength", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'CFDataGetLength'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___handle0);

	return returnValue;
}
// System.IntPtr XamMac.CoreFoundation.CFHelpers::CFDataGetBytePtr(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t CFHelpers_CFDataGetBytePtr_m1648767664 (RuntimeObject * __this /* static, unused */, intptr_t ___handle0, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation"), "CFDataGetBytePtr", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'CFDataGetBytePtr'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___handle0);

	return returnValue;
}
// System.Byte[] XamMac.CoreFoundation.CFHelpers::FetchDataBuffer(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* CFHelpers_FetchDataBuffer_m2260522698 (RuntimeObject * __this /* static, unused */, intptr_t ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CFHelpers_FetchDataBuffer_m2260522698_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	{
		intptr_t L_0 = ___handle0;
		intptr_t L_1 = CFHelpers_CFDataGetLength_m3730685275(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		int32_t L_2 = IntPtr_op_Explicit_m4220076518(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_3 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_0 = L_3;
		intptr_t L_4 = ___handle0;
		intptr_t L_5 = CFHelpers_CFDataGetBytePtr_m1648767664(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_6 = V_0;
		ByteU5BU5D_t4116647657* L_7 = V_0;
		NullCheck(L_7);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		Marshal_Copy_m1222846562(NULL /*static, unused*/, L_5, L_6, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_7)->max_length)))), /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_8 = V_0;
		return L_8;
	}
}
// System.IntPtr XamMac.CoreFoundation.CFHelpers::CFDataCreate(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t CFHelpers_CFDataCreate_m3875740957 (RuntimeObject * __this /* static, unused */, intptr_t ___allocator0, intptr_t ___bytes1, intptr_t ___length2, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation"), "CFDataCreate", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'CFDataCreate'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___allocator0, ___bytes1, ___length2);

	return returnValue;
}
// System.IntPtr XamMac.CoreFoundation.CFHelpers::SecCertificateCreateWithData(System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t CFHelpers_SecCertificateCreateWithData_m1682200427 (RuntimeObject * __this /* static, unused */, intptr_t ___allocator0, intptr_t ___cfData1, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("/System/Library/Frameworks/Security.framework/Security"), "SecCertificateCreateWithData", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'SecCertificateCreateWithData'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___allocator0, ___cfData1);

	return returnValue;
}
// System.IntPtr XamMac.CoreFoundation.CFHelpers::CreateCertificateFromData(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR intptr_t CFHelpers_CreateCertificateFromData_m702581168 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CFHelpers_CreateCertificateFromData_m702581168_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void* V_0 = NULL;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	intptr_t V_2;
	memset(&V_2, 0, sizeof(V_2));
	intptr_t G_B8_0;
	memset(&G_B8_0, 0, sizeof(G_B8_0));
	intptr_t G_B7_0;
	memset(&G_B7_0, 0, sizeof(G_B7_0));
	{
		ByteU5BU5D_t4116647657* L_0 = ___data0;
		ByteU5BU5D_t4116647657* L_1 = L_0;
		V_1 = L_1;
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_2 = V_1;
		NullCheck(L_2);
		if ((((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length)))))
		{
			goto IL_000f;
		}
	}

IL_000a:
	{
		V_0 = (void*)(((uintptr_t)0));
		goto IL_0018;
	}

IL_000f:
	{
		ByteU5BU5D_t4116647657* L_3 = V_1;
		NullCheck(L_3);
		V_0 = (void*)(((uintptr_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))));
	}

IL_0018:
	{
		void* L_4 = V_0;
		intptr_t L_5 = IntPtr_op_Explicit_m536245531(NULL /*static, unused*/, (void*)(void*)L_4, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_6 = ___data0;
		NullCheck(L_6);
		intptr_t L_7;
		memset(&L_7, 0, sizeof(L_7));
		IntPtr__ctor_m987082960((&L_7), (((int32_t)((int32_t)(((RuntimeArray *)L_6)->max_length)))), /*hidden argument*/NULL);
		intptr_t L_8 = CFHelpers_CFDataCreate_m3875740957(NULL /*static, unused*/, (intptr_t)(0), L_5, L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		intptr_t L_9 = V_2;
		bool L_10 = IntPtr_op_Equality_m408849716(NULL /*static, unused*/, L_9, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0044;
		}
	}
	{
		return (intptr_t)(0);
	}

IL_0044:
	{
		intptr_t L_11 = V_2;
		intptr_t L_12 = CFHelpers_SecCertificateCreateWithData_m1682200427(NULL /*static, unused*/, (intptr_t)(0), L_11, /*hidden argument*/NULL);
		intptr_t L_13 = V_2;
		bool L_14 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_13, (intptr_t)(0), /*hidden argument*/NULL);
		G_B7_0 = L_12;
		if (!L_14)
		{
			G_B8_0 = L_12;
			goto IL_0062;
		}
	}
	{
		intptr_t L_15 = V_2;
		CFHelpers_CFRelease_m3206817372(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		G_B8_0 = G_B7_0;
	}

IL_0062:
	{
		return G_B8_0;
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
// System.Void XamMac.CoreFoundation.CFHelpers/CFRange::.ctor(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void CFRange__ctor_m1242434219 (CFRange_t1233619878 * __this, int32_t ___loc0, int32_t ___len1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___loc0;
		int32_t L_1 = ___len1;
		CFRange__ctor_m3401693388((CFRange_t1233619878 *)__this, (((int64_t)((int64_t)L_0))), (((int64_t)((int64_t)L_1))), /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void CFRange__ctor_m1242434219_AdjustorThunk (RuntimeObject * __this, int32_t ___loc0, int32_t ___len1, const RuntimeMethod* method)
{
	CFRange_t1233619878 * _thisAdjusted = reinterpret_cast<CFRange_t1233619878 *>(__this + 1);
	CFRange__ctor_m1242434219(_thisAdjusted, ___loc0, ___len1, method);
}
// System.Void XamMac.CoreFoundation.CFHelpers/CFRange::.ctor(System.Int64,System.Int64)
extern "C" IL2CPP_METHOD_ATTR void CFRange__ctor_m3401693388 (CFRange_t1233619878 * __this, int64_t ___l0, int64_t ___len1, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___l0;
		intptr_t L_1 = IntPtr_op_Explicit_m1593085246(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->set_loc_0(L_1);
		int64_t L_2 = ___len1;
		intptr_t L_3 = IntPtr_op_Explicit_m1593085246(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		__this->set_len_1(L_3);
		return;
	}
}
extern "C"  void CFRange__ctor_m3401693388_AdjustorThunk (RuntimeObject * __this, int64_t ___l0, int64_t ___len1, const RuntimeMethod* method)
{
	CFRange_t1233619878 * _thisAdjusted = reinterpret_cast<CFRange_t1233619878 *>(__this + 1);
	CFRange__ctor_m3401693388(_thisAdjusted, ___l0, ___len1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
