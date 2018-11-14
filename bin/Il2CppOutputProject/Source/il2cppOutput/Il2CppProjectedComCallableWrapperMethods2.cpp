#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "vm/NonCachedCCWBase.h"
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t777629997;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.IDictionary`2<System.Guid,System.Object>
struct IDictionary_2_t592975088;
// System.Collections.Generic.IDictionary`2<System.Guid,System.Type>
struct IDictionary_2_t4291780980;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Object>
struct IDictionary_2_t432670886;
// System.Collections.Generic.IDictionary`2<System.Int32,System.String>
struct IDictionary_2_t3494982707;
// System.Collections.Generic.IDictionary`2<System.Object,System.Boolean>
struct IDictionary_2_t4203512936;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int32>
struct IDictionary_2_t2762203428;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_t2891363839;
// System.Collections.Generic.IDictionary`2<System.String,System.Boolean>
struct IDictionary_2_t2641362951;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t1200053443;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t1329213854;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t96558379;
// System.Collections.Generic.IDictionary`2<System.String,System.Type>
struct IDictionary_2_t733052450;
// System.Collections.Generic.IEnumerable`1<System.Collections.IEnumerable>
struct IEnumerable_1_t921020900;
// System.Collections.Generic.IList`1<System.Collections.Generic.IEnumerable`1<System.Collections.IEnumerable>>
struct IList_1_t2736340683;
// System.Collections.Generic.IList`1<System.DateTimeOffset>
struct IList_1_t749639994;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t600458651;
// System.Collections.Generic.IList`1<Windows.Foundation.IWwwFormUrlDecoderEntry>
struct IList_1_t463652457;
// System.Collections.Generic.IList`1<Windows.Foundation.Point>
struct IList_1_t1685306026;
// System.Collections.Generic.IList`1<Windows.Foundation.Rect>
struct IList_1_t215465974;
// System.Collections.Generic.IList`1<Windows.Foundation.Size>
struct IList_1_t2366237421;
// System.Collections.Generic.IReadOnlyDictionary`2<System.Guid,System.Object>
struct IReadOnlyDictionary_2_t2545093093;
// System.Collections.Generic.IReadOnlyDictionary`2<System.Guid,System.Type>
struct IReadOnlyDictionary_2_t1948931689;
// System.Collections.Generic.IReadOnlyDictionary`2<System.Int32,System.Object>
struct IReadOnlyDictionary_2_t2384788891;
// System.Collections.Generic.IReadOnlyDictionary`2<System.Int32,System.String>
struct IReadOnlyDictionary_2_t1152133416;
// System.Collections.Generic.IReadOnlyDictionary`2<System.Object,System.Boolean>
struct IReadOnlyDictionary_2_t1860663645;
// System.Collections.Generic.IReadOnlyDictionary`2<System.Object,System.Int32>
struct IReadOnlyDictionary_2_t419354137;
// System.Collections.Generic.IReadOnlyDictionary`2<System.Object,System.Object>
struct IReadOnlyDictionary_2_t548514548;
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.Boolean>
struct IReadOnlyDictionary_2_t298513660;
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.Int32>
struct IReadOnlyDictionary_2_t3152171448;
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.Object>
struct IReadOnlyDictionary_2_t3281331859;
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.String>
struct IReadOnlyDictionary_2_t2048676384;
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.Type>
struct IReadOnlyDictionary_2_t2685170455;
// System.Collections.Generic.KeyNotFoundException
struct KeyNotFoundException_t2292407383;
// System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>[]
struct KeyValuePair_2U5BU5D_t3332857673;
// System.Collections.Generic.KeyValuePair`2<System.Guid,System.Type>[]
struct KeyValuePair_2U5BU5D_t134831157;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t2652375035;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.String>[]
struct KeyValuePair_2U5BU5D_t1090225050;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t171748081;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t1954543557;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t118269214;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t1951926774;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t3734722250;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1898447907;
// System.Collections.Generic.KeyValuePair`2<System.String,System.String>[]
struct KeyValuePair_2U5BU5D_t336297922;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Type>[]
struct KeyValuePair_2U5BU5D_t2995388687;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IEnumerable`1<System.Collections.IEnumerable>>
struct ReadOnlyCollection_1_t2133597187;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.DateTimeOffset>
struct ReadOnlyCollection_1_t146896498;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t4292682451;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Windows.Foundation.IWwwFormUrlDecoderEntry>
struct ReadOnlyCollection_1_t4155876257;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Windows.Foundation.Point>
struct ReadOnlyCollection_1_t1082562530;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Windows.Foundation.Rect>
struct ReadOnlyCollection_1_t3907689774;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Windows.Foundation.Size>
struct ReadOnlyCollection_1_t1763493925;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<System.Guid,System.Object>
struct KeyCollection_t1978222403;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<System.Guid,System.Type>
struct KeyCollection_t1382060999;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_t1817918201;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<System.Int32,System.String>
struct KeyCollection_t585262726;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<System.Object,System.Boolean>
struct KeyCollection_t1293792955;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_t4147450743;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t4276611154;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<System.String,System.Boolean>
struct KeyCollection_t4026610266;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<System.String,System.Int32>
struct KeyCollection_t2585300758;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t2714461169;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t1481805694;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<System.String,System.Type>
struct KeyCollection_t2118299765;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Guid,System.Object>
struct ValueCollection_t1664400730;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Guid,System.Type>
struct ValueCollection_t1068239326;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t1504096528;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Int32,System.String>
struct ValueCollection_t271441053;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Object,System.Boolean>
struct ValueCollection_t979971282;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t3833629070;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t3962789481;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.String,System.Boolean>
struct ValueCollection_t3712788593;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.String,System.Int32>
struct ValueCollection_t2271479085;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_t2400639496;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t1167984021;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.String,System.Type>
struct ValueCollection_t1804478092;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Guid,System.Object>
struct ReadOnlyDictionary_2_t1128463424;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Guid,System.Type>
struct ReadOnlyDictionary_2_t532302020;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Int32,System.Object>
struct ReadOnlyDictionary_2_t968159222;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Int32,System.String>
struct ReadOnlyDictionary_2_t4030471043;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Object,System.Boolean>
struct ReadOnlyDictionary_2_t444033976;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Object,System.Int32>
struct ReadOnlyDictionary_2_t3297691764;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Object,System.Object>
struct ReadOnlyDictionary_2_t3426852175;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,System.Boolean>
struct ReadOnlyDictionary_2_t3176851287;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,System.Int32>
struct ReadOnlyDictionary_2_t1735541779;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,System.Object>
struct ReadOnlyDictionary_2_t1864702190;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,System.String>
struct ReadOnlyDictionary_2_t632046715;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,System.Type>
struct ReadOnlyDictionary_2_t1268540786;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.Exception
struct Exception_t;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.InvalidOperationException
struct InvalidOperationException_t56020091;
// System.Reflection.Binder
struct Binder_t2999457153;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<System.Guid,System.Object>
struct KeyValuePairComparer_t2155324696;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<System.Guid,System.Type>
struct KeyValuePairComparer_t1559163292;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<System.Int32,System.Object>
struct KeyValuePairComparer_t1995020494;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<System.Int32,System.String>
struct KeyValuePairComparer_t762365019;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<System.Object,System.Boolean>
struct KeyValuePairComparer_t1470895248;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<System.Object,System.Int32>
struct KeyValuePairComparer_t29585740;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<System.Object,System.Object>
struct KeyValuePairComparer_t158746151;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<System.String,System.Boolean>
struct KeyValuePairComparer_t4203712559;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<System.String,System.Int32>
struct KeyValuePairComparer_t2762403051;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<System.String,System.Object>
struct KeyValuePairComparer_t2891563462;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<System.String,System.String>
struct KeyValuePairComparer_t1658907987;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<System.String,System.Type>
struct KeyValuePairComparer_t2295402058;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Guid,System.Object>
struct ConstantSplittableMap_2_t1659983216;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Guid,System.Type>
struct ConstantSplittableMap_2_t1063821812;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int32,System.Object>
struct ConstantSplittableMap_2_t1499679014;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int32,System.String>
struct ConstantSplittableMap_2_t267023539;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Boolean>
struct ConstantSplittableMap_2_t975553768;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Int32>
struct ConstantSplittableMap_2_t3829211556;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Object>
struct ConstantSplittableMap_2_t3958371967;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.String,System.Boolean>
struct ConstantSplittableMap_2_t3708371079;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.String,System.Int32>
struct ConstantSplittableMap_2_t2267061571;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.String,System.Object>
struct ConstantSplittableMap_2_t2396221982;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.String,System.String>
struct ConstantSplittableMap_2_t1163566507;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.String,System.Type>
struct ConstantSplittableMap_2_t1800060578;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Void
struct Void_t1185182177;
// Windows.Foundation.IWwwFormUrlDecoderEntry
struct IWwwFormUrlDecoderEntry_t2943299970;

extern RuntimeClass* ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var;
extern RuntimeClass* ConstantSplittableMap_2_t1063821812_il2cpp_TypeInfo_var;
extern RuntimeClass* ConstantSplittableMap_2_t1163566507_il2cpp_TypeInfo_var;
extern RuntimeClass* ConstantSplittableMap_2_t1499679014_il2cpp_TypeInfo_var;
extern RuntimeClass* ConstantSplittableMap_2_t1659983216_il2cpp_TypeInfo_var;
extern RuntimeClass* ConstantSplittableMap_2_t1800060578_il2cpp_TypeInfo_var;
extern RuntimeClass* ConstantSplittableMap_2_t2267061571_il2cpp_TypeInfo_var;
extern RuntimeClass* ConstantSplittableMap_2_t2396221982_il2cpp_TypeInfo_var;
extern RuntimeClass* ConstantSplittableMap_2_t267023539_il2cpp_TypeInfo_var;
extern RuntimeClass* ConstantSplittableMap_2_t3708371079_il2cpp_TypeInfo_var;
extern RuntimeClass* ConstantSplittableMap_2_t3829211556_il2cpp_TypeInfo_var;
extern RuntimeClass* ConstantSplittableMap_2_t3958371967_il2cpp_TypeInfo_var;
extern RuntimeClass* ConstantSplittableMap_2_t975553768_il2cpp_TypeInfo_var;
extern RuntimeClass* DateTimeOffsetU5BU5D_t3473357058_il2cpp_TypeInfo_var;
extern RuntimeClass* DateTimeOffset_t3229287507_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_1_t1063402257_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_1_t1228298425_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_1_t1476484908_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_1_t1667021125_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_1_t1762472445_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_1_t2375551354_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_1_t2463819398_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_1_t2563564093_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_1_t2698138477_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_1_t2899676600_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_1_t3059980802_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_1_t3200058164_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_1_t3379069872_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_1_t3667059157_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_1_t3749173134_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_1_t3796219568_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_1_t813401369_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_1_t934241846_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_t1200053443_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_t1329213854_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_t2641362951_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_t2762203428_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_t2891363839_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_t3494982707_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_t4203512936_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_t4291780980_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_t432670886_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_t592975088_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_t733052450_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_t96558379_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1U5BU5D_t614637069_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_t1674966376_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_t1923152859_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_t2209140396_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_t3144806428_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_t3825737823_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t302556711_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t3127683955_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t3375870438_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t3661857975_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t983488106_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* IList_1_t1685306026_il2cpp_TypeInfo_var;
extern RuntimeClass* IList_1_t215465974_il2cpp_TypeInfo_var;
extern RuntimeClass* IList_1_t2366237421_il2cpp_TypeInfo_var;
extern RuntimeClass* IList_1_t2736340683_il2cpp_TypeInfo_var;
extern RuntimeClass* IList_1_t463652457_il2cpp_TypeInfo_var;
extern RuntimeClass* IList_1_t749639994_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyCollection_1_t2283332368_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyCollection_1_t234944505_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyCollection_1_t2404172845_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyCollection_1_t2533333256_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyCollection_1_t2698229424_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyCollection_1_t2946415907_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyCollection_1_t3136952124_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyCollection_1_t3232403444_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyCollection_1_t375021867_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyCollection_1_t3845482353_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyCollection_1_t3933750397_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyCollection_1_t4033495092_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyCollection_1_t4168069476_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyCollection_1_t554033575_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyCollection_1_t74640303_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyCollection_1_t842022860_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyCollection_1_t924136837_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyCollection_1_t971183271_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyDictionary_2_t1152133416_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyDictionary_2_t1860663645_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyDictionary_2_t1948931689_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyDictionary_2_t2048676384_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyDictionary_2_t2384788891_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyDictionary_2_t2545093093_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyDictionary_2_t2685170455_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyDictionary_2_t298513660_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyDictionary_2_t3152171448_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyDictionary_2_t3281331859_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyDictionary_2_t419354137_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyDictionary_2_t548514548_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyList_1_t1115340544_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyList_1_t1485443806_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyList_1_t3259536393_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyList_1_t3507722876_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyList_1_t3793710413_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyList_1_t434409149_il2cpp_TypeInfo_var;
extern RuntimeClass* IWwwFormUrlDecoderEntryU5BU5D_t40345143_il2cpp_TypeInfo_var;
extern RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidOperationException_t56020091_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyValuePair_2_t2280216431_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyValuePair_2_t231828568_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyValuePair_2_t2401056908_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyValuePair_2_t2530217319_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyValuePair_2_t3133836187_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyValuePair_2_t371905930_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyValuePair_2_t3842366416_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyValuePair_2_t3930634460_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyValuePair_2_t4030379155_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyValuePair_2_t4237331251_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyValuePair_2_t71524366_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyValuePair_2_t838906923_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyValuePair_2_t968067334_il2cpp_TypeInfo_var;
extern RuntimeClass* PointU5BU5D_t724808658_il2cpp_TypeInfo_var;
extern RuntimeClass* Point_t4164953539_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadOnlyCollection_1_t1082562530_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadOnlyCollection_1_t146896498_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadOnlyCollection_1_t1763493925_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadOnlyCollection_1_t2133597187_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadOnlyCollection_1_t3907689774_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadOnlyCollection_1_t4155876257_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadOnlyDictionary_2_t1128463424_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadOnlyDictionary_2_t1268540786_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadOnlyDictionary_2_t1735541779_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadOnlyDictionary_2_t1864702190_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadOnlyDictionary_2_t3176851287_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadOnlyDictionary_2_t3297691764_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadOnlyDictionary_2_t3426852175_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadOnlyDictionary_2_t4030471043_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadOnlyDictionary_2_t444033976_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadOnlyDictionary_2_t532302020_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadOnlyDictionary_2_t632046715_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadOnlyDictionary_2_t968159222_il2cpp_TypeInfo_var;
extern RuntimeClass* RectU5BU5D_t5657558_il2cpp_TypeInfo_var;
extern RuntimeClass* Rect_t2695113487_il2cpp_TypeInfo_var;
extern RuntimeClass* SizeU5BU5D_t1671914275_il2cpp_TypeInfo_var;
extern RuntimeClass* Size_t550917638_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1050527596;
extern String_t* _stringLiteral311452336;
extern String_t* _stringLiteral4076297504;
extern String_t* _stringLiteral4286223022;
extern String_t* _stringLiteral797640427;
extern const RuntimeMethod* ConstantSplittableMap_2_Split_m1776544164_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2_Split_m1997543296_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2_Split_m2176297438_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2_Split_m2998943571_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2_Split_m3256786513_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2_Split_m3288519233_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2_Split_m3318364013_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2_Split_m3390560063_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2_Split_m3822801152_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2_Split_m4122198191_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2_Split_m4128904398_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2_Split_m890587491_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2__ctor_m1053382043_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2__ctor_m137017575_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2__ctor_m1584615223_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2__ctor_m1702516145_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2__ctor_m2347350877_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2__ctor_m2413510944_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2__ctor_m245620443_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2__ctor_m2462269511_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2__ctor_m2528261516_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2__ctor_m3772921655_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2__ctor_m4057205974_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2__ctor_m4259417880_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m1218836954_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m1325471274_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m1816659530_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m2106922848_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m2635782095_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m2656778124_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m3340370308_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m4022343918_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m4184817181_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m4191308393_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m4294704491_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m865914345_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m913496574_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m1132502692_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m1669764045_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m1804680087_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m1897740815_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m200640467_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m2097707521_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m2459323959_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m2666064688_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m595908462_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m608750205_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m692097207_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m755756747_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m859821292_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyCollection_1__ctor_m1119069447_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyCollection_1__ctor_m1456287906_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyCollection_1__ctor_m337395851_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyCollection_1__ctor_m3612700832_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyCollection_1__ctor_m3697313193_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyCollection_1__ctor_m906551492_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyDictionary_2__ctor_m1629022071_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyDictionary_2__ctor_m2119190349_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyDictionary_2__ctor_m2131144993_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyDictionary_2__ctor_m3044404427_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyDictionary_2__ctor_m3621257446_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyDictionary_2__ctor_m3720374228_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyDictionary_2__ctor_m3912726125_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyDictionary_2__ctor_m4089905679_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyDictionary_2__ctor_m4155330511_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyDictionary_2__ctor_m461640262_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyDictionary_2__ctor_m515128087_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyDictionary_2__ctor_m965872150_RuntimeMethod_var;
extern const uint32_t IIterable_1_First_m1907809909_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IIterable_1_First_m2198371330_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IIterable_1_First_m4003146197_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IIterable_1_First_m516406116_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IIterable_1_First_m725484364_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IIterator_1_t1103430980_Adapter_GetCurrent_MetadataUsageId;
extern const uint32_t IIterator_1_t1103430980_Adapter_MoveNext_MetadataUsageId;
extern const uint32_t IIterator_1_t2039097012_Adapter_GetCurrent_MetadataUsageId;
extern const uint32_t IIterator_1_t2039097012_Adapter_MoveNext_MetadataUsageId;
extern const uint32_t IIterator_1_t2720028407_Adapter_GetCurrent_MetadataUsageId;
extern const uint32_t IIterator_1_t2720028407_Adapter_MoveNext_MetadataUsageId;
extern const uint32_t IIterator_1_t569256960_Adapter_GetCurrent_MetadataUsageId;
extern const uint32_t IIterator_1_t569256960_Adapter_MoveNext_MetadataUsageId;
extern const uint32_t IIterator_1_t817443443_Adapter_GetCurrent_MetadataUsageId;
extern const uint32_t IIterator_1_t817443443_Adapter_MoveNext_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Key_m1066766749_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Key_m1229610178_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Key_m1247672299_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Key_m1916408783_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Key_m2186241555_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Key_m2199926285_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Key_m2344176952_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Key_m2534079307_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Key_m2750152149_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Key_m3013852749_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Key_m3324945768_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Key_m3523589551_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Key_m599934735_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Value_m1427991677_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Value_m1590219272_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Value_m1911526895_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Value_m2003745203_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Value_m210688108_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Value_m2337749369_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Value_m2353902038_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Value_m2672088708_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Value_m269040038_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Value_m3279123715_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Value_m3450640679_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Value_m3611222262_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Value_m52124236_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_HasKey_m1003035185_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_HasKey_m1226002878_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_HasKey_m1382000797_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_HasKey_m1413942596_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_HasKey_m1694676420_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_HasKey_m1872447125_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_HasKey_m2190770956_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_HasKey_m2200864154_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_HasKey_m3111850129_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_HasKey_m3205845981_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_HasKey_m3322124696_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_HasKey_m973232472_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Lookup_m1298530599_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Lookup_m1783676987_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Lookup_m2362372490_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Lookup_m2993729319_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Lookup_m3331997343_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Lookup_m354916185_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Lookup_m3742065343_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Lookup_m3896662699_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Lookup_m4048973909_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Lookup_m594002932_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Lookup_m818349798_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Lookup_m877167602_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Split_m1626200424_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Split_m1911518659_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Split_m22494317_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Split_m2592840147_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Split_m2647546983_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Split_m3017881906_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Split_m3394162196_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Split_m3605358933_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Split_m4061037733_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Split_m842968636_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Split_m96786832_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Split_m978754527_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_get_Size_m1307357424_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_get_Size_m1359240774_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_get_Size_m1396842905_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_get_Size_m2008534305_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_get_Size_m2199812260_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_get_Size_m2349127300_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_get_Size_m3065552575_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_get_Size_m3316105878_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_get_Size_m3858358881_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_get_Size_m3871500701_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_get_Size_m516432122_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_get_Size_m546192505_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Clear_m112521936_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Clear_m1499398795_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Clear_m1518512299_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Clear_m1661948797_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Clear_m2457687352_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Clear_m2519350850_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Clear_m3357622563_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Clear_m3448822397_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Clear_m3558300509_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Clear_m3867596926_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Clear_m403209908_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Clear_m652986071_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_GetView_m1023461368_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_GetView_m1166070801_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_GetView_m160940274_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_GetView_m1648969448_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_GetView_m2883253156_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_GetView_m2992416671_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_GetView_m3237694789_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_GetView_m3361060608_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_GetView_m3445984058_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_GetView_m3605659067_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_GetView_m3764174551_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_GetView_m3956818822_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_HasKey_m1327307936_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_HasKey_m1506256555_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_HasKey_m2236943020_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_HasKey_m2433635512_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_HasKey_m2767397819_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_HasKey_m3055190088_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_HasKey_m3062070663_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_HasKey_m377757278_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_HasKey_m3863327211_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_HasKey_m4050764019_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_HasKey_m4208301656_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_HasKey_m650644540_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Insert_m1575381716_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Insert_m2357915180_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Insert_m267841037_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Insert_m3135696435_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Insert_m3186075525_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Insert_m335884934_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Insert_m3431746527_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Insert_m3883043034_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Insert_m48626576_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Insert_m490092833_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Insert_m52862695_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Insert_m610774430_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Lookup_m1731177585_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Lookup_m2400282917_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Lookup_m2451726409_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Lookup_m2791672174_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Lookup_m2973873145_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Lookup_m3058979306_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Lookup_m3068028334_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Lookup_m3419416962_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Lookup_m3451048385_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Lookup_m356884552_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Lookup_m372021310_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Lookup_m4271171535_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Remove_m1067146362_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Remove_m1560976792_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Remove_m1939883922_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Remove_m2388588850_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Remove_m2564332326_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Remove_m3274472395_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Remove_m3289693839_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Remove_m3800098948_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Remove_m3871291260_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Remove_m4261353678_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Remove_m441912298_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Remove_m970902889_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_get_Size_m1266343471_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_get_Size_m1704379977_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_get_Size_m2116548387_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_get_Size_m2259249674_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_get_Size_m2831091936_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_get_Size_m3320579976_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_get_Size_m3704454125_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_get_Size_m3747204495_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_get_Size_m4209346384_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_get_Size_m521129328_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_get_Size_m672085459_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_get_Size_m732615070_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVectorView_1_GetAt_m1224151036_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVectorView_1_GetAt_m2035733383_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVectorView_1_GetAt_m2196457089_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVectorView_1_GetAt_m2736327627_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVectorView_1_GetAt_m3042122219_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVectorView_1_GetAt_m828460566_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVectorView_1_GetMany_m1032517645_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVectorView_1_GetMany_m2898007465_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVectorView_1_GetMany_m320624579_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVectorView_1_GetMany_m4072637945_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVectorView_1_GetMany_m4144836697_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVectorView_1_GetMany_m66302439_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVectorView_1_IndexOf_m1205944866_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVectorView_1_IndexOf_m1240834200_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVectorView_1_IndexOf_m1513712387_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVectorView_1_IndexOf_m2753411397_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVectorView_1_IndexOf_m3219133186_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVectorView_1_IndexOf_m4185849224_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVectorView_1_get_Size_m1566737220_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVectorView_1_get_Size_m2047203447_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVectorView_1_get_Size_m2984082999_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVectorView_1_get_Size_m3307328074_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVectorView_1_get_Size_m3766324835_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVectorView_1_get_Size_m4174749221_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_Append_m195984872_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_Append_m2019222254_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_Append_m3775858658_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_Append_m4022682317_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_Append_m4126265023_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_Append_m723258973_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_Clear_m1953971700_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_Clear_m2273683721_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_Clear_m2360775652_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_Clear_m256950869_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_Clear_m26527518_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_Clear_m783567046_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_GetAt_m2330330105_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_GetAt_m2699244792_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_GetAt_m3254412450_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_GetAt_m3545656912_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_GetAt_m3687365220_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_GetAt_m789263590_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_GetMany_m3458941667_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_GetMany_m4076800509_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_GetMany_m4097846463_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_GetMany_m4242153011_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_GetMany_m476750240_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_GetMany_m569725914_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_GetView_m1062446282_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_GetView_m118185472_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_GetView_m1943501597_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_GetView_m2518531823_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_GetView_m3695632509_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_GetView_m391905035_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_IndexOf_m125330836_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_IndexOf_m1294821683_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_IndexOf_m2314753069_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_IndexOf_m2583104291_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_IndexOf_m3701100474_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_IndexOf_m428066000_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_InsertAt_m1485467707_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_InsertAt_m1857322035_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_InsertAt_m2042125523_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_InsertAt_m3604836490_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_InsertAt_m3629928755_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_InsertAt_m3860348037_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_RemoveAtEnd_m1250841087_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_RemoveAtEnd_m1446419325_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_RemoveAtEnd_m2572115469_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_RemoveAtEnd_m298642047_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_RemoveAtEnd_m4286336640_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_RemoveAtEnd_m535504839_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_RemoveAt_m1853546183_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_RemoveAt_m2716267656_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_RemoveAt_m2725070673_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_RemoveAt_m2821918640_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_RemoveAt_m394387669_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_RemoveAt_m3994675881_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_ReplaceAll_m1187859799_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_ReplaceAll_m1854201827_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_ReplaceAll_m2534884464_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_ReplaceAll_m2673034237_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_ReplaceAll_m2759782552_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_ReplaceAll_m4107471252_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_SetAt_m307161950_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_SetAt_m314985913_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_SetAt_m3412621482_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_SetAt_m565528379_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_SetAt_m60350146_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_SetAt_m661546338_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_get_Size_m2623241174_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_get_Size_m2774852035_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_get_Size_m3377152281_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_get_Size_m4157668882_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_get_Size_m59889375_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_get_Size_m853395603_ComCallableWrapperProjectedMethod_MetadataUsageId;
struct DateTime_t1679451545 ;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct IIterable_1_t3857532767;
struct IIterator_1_t1103430980;
struct IIterator_1_t2039097012;
struct IIterator_1_t2720028407;
struct IIterator_1_t4110278780;
struct IIterator_1_t569256960;
struct IIterator_1_t817443443;
struct IMapView_2_t1631520928;
struct IMapView_2_t1752361405;
struct IMapView_2_t1881521816;
struct IMapView_2_t190211420;
struct IMapView_2_t2485140684;
struct IMapView_2_t3193670913;
struct IMapView_2_t319371831;
struct IMapView_2_t3281938957;
struct IMapView_2_t3381683652;
struct IMapView_2_t3717796159;
struct IMapView_2_t3878100361;
struct IMapView_2_t4018177723;
struct IVectorView_1_t2033978749;
struct IVectorView_1_t2282165232;
struct IVectorView_1_t2568152769;
struct IVectorView_1_t259886162;
struct IVectorView_1_t3503818801;
struct IVectorView_1_t4184750196;
struct IWwwFormUrlDecoderEntry_t2943299970;
struct Point_t4164953539 ;
struct Rect_t2695113487 ;
struct Size_t550917638 ;

struct IEnumerable_1U5BU5D_t614637069;
struct DateTimeOffsetU5BU5D_t3473357058;
struct IWwwFormUrlDecoderEntryU5BU5D_t40345143;
struct PointU5BU5D_t724808658;
struct RectU5BU5D_t5657558;
struct SizeU5BU5D_t1671914275;


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
// Windows.Foundation.Collections.IIterable`1<System.Collections.IEnumerable>
struct NOVTABLE IIterable_1_t3857532767 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m595838657(IIterator_1_t4110278780** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.DateTimeOffset>
struct NOVTABLE IIterable_1_t850684967 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m2198371330(IIterator_1_t1103430980** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<Windows.Foundation.IWwwFormUrlDecoderEntry>
struct NOVTABLE IIterable_1_t564697430 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m725484364(IIterator_1_t817443443** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Point>
struct NOVTABLE IIterable_1_t1786350999 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m1907809909(IIterator_1_t2039097012** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Rect>
struct NOVTABLE IIterable_1_t316510947 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m516406116(IIterator_1_t569256960** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Size>
struct NOVTABLE IIterable_1_t2467282394 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m4003146197(IIterator_1_t2720028407** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterator`1<Windows.Foundation.IWwwFormUrlDecoderEntry>
struct NOVTABLE IIterator_1_t817443443 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterator_1_get_Current_m1946311790(IWwwFormUrlDecoderEntry_t2943299970** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IIterator_1_get_HasCurrent_m4030884216(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IIterator_1_MoveNext_m564191597(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IIterator_1_GetMany_m402209304(uint32_t ___items0ArraySize, IWwwFormUrlDecoderEntry_t2943299970** ___items0, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.Int32,System.Int32>
struct NOVTABLE IKeyValuePair_2_t967083573 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m2344176952(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m1590219272(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.Int32,System.Object>
struct NOVTABLE IKeyValuePair_2_t1096243984 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m2186241555(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m210688108(Il2CppIInspectable** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.Int32,System.String>
struct NOVTABLE IKeyValuePair_2_t4158555805 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m1229610178(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m1911526895(Il2CppHString* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.Object,System.Boolean>
struct NOVTABLE IKeyValuePair_2_t572118738 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m1916408783(Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m3611222262(bool* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.Object,System.Int32>
struct NOVTABLE IKeyValuePair_2_t3425776526 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m1066766749(Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m269040038(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.Object,System.Object>
struct NOVTABLE IKeyValuePair_2_t3554936937 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m2750152149(Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m2672088708(Il2CppIInspectable** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.String,System.Boolean>
struct NOVTABLE IKeyValuePair_2_t3304936049 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m2534079307(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m2353902038(bool* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.String,System.Int32>
struct NOVTABLE IKeyValuePair_2_t1863626541 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m599934735(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m2337749369(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.String,System.Object>
struct NOVTABLE IKeyValuePair_2_t1992786952 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m3523589551(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m3279123715(Il2CppIInspectable** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.String,System.String>
struct NOVTABLE IKeyValuePair_2_t760131477 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m3013852749(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m2003745203(Il2CppHString* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IMapView`2<System.Int32,System.Object>
struct NOVTABLE IMapView_2_t3717796159 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m3742065343(int32_t ___key0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m1359240774(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m973232472(int32_t ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m842968636(IMapView_2_t3717796159** ___first0, IMapView_2_t3717796159** ___second1) = 0;
};
// Windows.Foundation.Collections.IMapView`2<System.Int32,System.String>
struct NOVTABLE IMapView_2_t2485140684 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m2362372490(int32_t ___key0, Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m2199812260(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m2190770956(int32_t ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m1911518659(IMapView_2_t2485140684** ___first0, IMapView_2_t2485140684** ___second1) = 0;
};
// Windows.Foundation.Collections.IMapView`2<System.Object,System.Boolean>
struct NOVTABLE IMapView_2_t3193670913 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m4048973909(Il2CppIInspectable* ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m516432122(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m1413942596(Il2CppIInspectable* ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m2647546983(IMapView_2_t3193670913** ___first0, IMapView_2_t3193670913** ___second1) = 0;
};
// Windows.Foundation.Collections.IMapView`2<System.Object,System.Int32>
struct NOVTABLE IMapView_2_t1752361405 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m877167602(Il2CppIInspectable* ___key0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m3871500701(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m1872447125(Il2CppIInspectable* ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m4061037733(IMapView_2_t1752361405** ___first0, IMapView_2_t1752361405** ___second1) = 0;
};
// Windows.Foundation.Collections.IMapView`2<System.Object,System.Object>
struct NOVTABLE IMapView_2_t1881521816 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m354916185(Il2CppIInspectable* ___key0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m1307357424(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m1226002878(Il2CppIInspectable* ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m3017881906(IMapView_2_t1881521816** ___first0, IMapView_2_t1881521816** ___second1) = 0;
};
// Windows.Foundation.Collections.IMapView`2<System.String,System.Boolean>
struct NOVTABLE IMapView_2_t1631520928 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m818349798(Il2CppHString ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m1396842905(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m2200864154(Il2CppHString ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m22494317(IMapView_2_t1631520928** ___first0, IMapView_2_t1631520928** ___second1) = 0;
};
// Windows.Foundation.Collections.IMapView`2<System.String,System.Int32>
struct NOVTABLE IMapView_2_t190211420 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m1298530599(Il2CppHString ___key0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m546192505(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m3322124696(Il2CppHString ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m96786832(IMapView_2_t190211420** ___first0, IMapView_2_t190211420** ___second1) = 0;
};
// Windows.Foundation.Collections.IMapView`2<System.String,System.Object>
struct NOVTABLE IMapView_2_t319371831 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m2993729319(Il2CppHString ___key0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m2008534305(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m3205845981(Il2CppHString ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m1626200424(IMapView_2_t319371831** ___first0, IMapView_2_t319371831** ___second1) = 0;
};
// Windows.Foundation.Collections.IMapView`2<System.String,System.String>
struct NOVTABLE IMapView_2_t3381683652 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m1783676987(Il2CppHString ___key0, Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m3316105878(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m1003035185(Il2CppHString ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m978754527(IMapView_2_t3381683652** ___first0, IMapView_2_t3381683652** ___second1) = 0;
};
// Windows.Foundation.Collections.IMap`2<System.Int32,System.Object>
struct NOVTABLE IMap_2_t618456315 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m2451726409(int32_t ___key0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m2259249674(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m4208301656(int32_t ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m3361060608(IMapView_2_t3717796159** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m490092833(int32_t ___key0, Il2CppIInspectable* ___value1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m1067146362(int32_t ___key0) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m3558300509() = 0;
};
// Windows.Foundation.Collections.IMap`2<System.Int32,System.String>
struct NOVTABLE IMap_2_t3680768136 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m2973873145(int32_t ___key0, Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m1266343471(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m4050764019(int32_t ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m3445984058(IMapView_2_t2485140684** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m267841037(int32_t ___key0, Il2CppHString ___value1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m4261353678(int32_t ___key0) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m652986071() = 0;
};
// Windows.Foundation.Collections.IMap`2<System.Object,System.Boolean>
struct NOVTABLE IMap_2_t94331069 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m2791672174(Il2CppIInspectable* ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m521129328(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m3863327211(Il2CppIInspectable* ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m1166070801(IMapView_2_t3193670913** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m3431746527(Il2CppIInspectable* ___key0, bool ___value1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m1939883922(Il2CppIInspectable* ___key0) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m403209908() = 0;
};
// Windows.Foundation.Collections.IMap`2<System.Object,System.Int32>
struct NOVTABLE IMap_2_t2947988857 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m4271171535(Il2CppIInspectable* ___key0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m672085459(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m377757278(Il2CppIInspectable* ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m2992416671(IMapView_2_t1752361405** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m3186075525(Il2CppIInspectable* ___key0, int32_t ___value1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m1560976792(Il2CppIInspectable* ___key0) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m1661948797() = 0;
};
// Windows.Foundation.Collections.IMap`2<System.Object,System.Object>
struct NOVTABLE IMap_2_t3077149268 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m1731177585(Il2CppIInspectable* ___key0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m3704454125(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m2433635512(Il2CppIInspectable* ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m2883253156(IMapView_2_t1881521816** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m335884934(Il2CppIInspectable* ___key0, Il2CppIInspectable* ___value1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m3274472395(Il2CppIInspectable* ___key0) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m112521936() = 0;
};
// Windows.Foundation.Collections.IMap`2<System.String,System.Boolean>
struct NOVTABLE IMap_2_t2827148380 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m356884552(Il2CppHString ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m2116548387(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m650644540(Il2CppHString ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m1023461368(IMapView_2_t1631520928** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m2357915180(Il2CppHString ___key0, bool ___value1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m2388588850(Il2CppHString ___key0) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m3448822397() = 0;
};
// Windows.Foundation.Collections.IMap`2<System.String,System.Int32>
struct NOVTABLE IMap_2_t1385838872 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m2400282917(Il2CppHString ___key0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m3320579976(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m3055190088(Il2CppHString ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m3605659067(IMapView_2_t190211420** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m48626576(Il2CppHString ___key0, int32_t ___value1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m2564332326(Il2CppHString ___key0) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m1499398795() = 0;
};
// Windows.Foundation.Collections.IMap`2<System.String,System.Object>
struct NOVTABLE IMap_2_t1514999283 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m3451048385(Il2CppHString ___key0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m2831091936(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m1506256555(Il2CppHString ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m3764174551(IMapView_2_t319371831** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m3883043034(Il2CppHString ___key0, Il2CppIInspectable* ___value1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m970902889(Il2CppHString ___key0) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m3357622563() = 0;
};
// Windows.Foundation.Collections.IMap`2<System.String,System.String>
struct NOVTABLE IMap_2_t282343808 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m3419416962(Il2CppHString ___key0, Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m3747204495(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m1327307936(Il2CppHString ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m1648969448(IMapView_2_t3381683652** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m3135696435(Il2CppHString ___key0, Il2CppHString ___value1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m3800098948(Il2CppHString ___key0) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m3867596926() = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.Collections.Generic.IEnumerable`1<System.Collections.IEnumerable>>
struct NOVTABLE IVectorView_1_t259886162 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m3042122219(uint32_t ___index0, IIterable_1_t3857532767** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m4174749221(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m4185849224(IIterable_1_t3857532767* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m4072637945(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IIterable_1_t3857532767** ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.IWwwFormUrlDecoderEntry>
struct NOVTABLE IVectorView_1_t2282165232 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m2035733383(uint32_t ___index0, IWwwFormUrlDecoderEntry_t2943299970** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m2047203447(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m2753411397(IWwwFormUrlDecoderEntry_t2943299970* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m66302439(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IWwwFormUrlDecoderEntry_t2943299970** ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVector`1<System.Collections.Generic.IEnumerable`1<System.Collections.IEnumerable>>
struct NOVTABLE IVector_1_t1661642621 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m789263590(uint32_t ___index0, IIterable_1_t3857532767** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m2623241174(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m391905035(IVectorView_1_t259886162** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_m2314753069(IIterable_1_t3857532767* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m307161950(uint32_t ___index0, IIterable_1_t3857532767* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m2042125523(uint32_t ___index0, IIterable_1_t3857532767* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m2716267656(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m723258973(IIterable_1_t3857532767* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m1250841087() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m256950869() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m4097846463(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IIterable_1_t3857532767** ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m1187859799(uint32_t ___items0ArraySize, IIterable_1_t3857532767** ___items0) = 0;
};
// Windows.Foundation.Collections.IVector`1<Windows.Foundation.IWwwFormUrlDecoderEntry>
struct NOVTABLE IVector_1_t3683921691 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m3687365220(uint32_t ___index0, IWwwFormUrlDecoderEntry_t2943299970** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m853395603(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m2518531823(IVectorView_1_t2282165232** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_m125330836(IWwwFormUrlDecoderEntry_t2943299970* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m314985913(uint32_t ___index0, IWwwFormUrlDecoderEntry_t2943299970* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m1485467707(uint32_t ___index0, IWwwFormUrlDecoderEntry_t2943299970* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m2725070673(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m4022682317(IWwwFormUrlDecoderEntry_t2943299970* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m535504839() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m2360775652() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m569725914(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IWwwFormUrlDecoderEntry_t2943299970** ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m2534884464(uint32_t ___items0ArraySize, IWwwFormUrlDecoderEntry_t2943299970** ___items0) = 0;
};
// Windows.Foundation.IWwwFormUrlDecoderEntry
struct NOVTABLE IWwwFormUrlDecoderEntry_t2943299970 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IWwwFormUrlDecoderEntry_U24__Stripped0_get_Name_m1841419405() = 0;
	virtual il2cpp_hresult_t STDCALL IWwwFormUrlDecoderEntry_U24__Stripped1_get_Value_m2688400907() = 0;
};
#ifndef READONLYCOLLECTION_1_T2133597187_H
#define READONLYCOLLECTION_1_T2133597187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IEnumerable`1<System.Collections.IEnumerable>>
struct  ReadOnlyCollection_1_t2133597187  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject * ____syncRoot_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t2133597187, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of__syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t2133597187, ____syncRoot_1)); }
	inline RuntimeObject * get__syncRoot_1() const { return ____syncRoot_1; }
	inline RuntimeObject ** get_address_of__syncRoot_1() { return &____syncRoot_1; }
	inline void set__syncRoot_1(RuntimeObject * value)
	{
		____syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYCOLLECTION_1_T2133597187_H
#ifndef READONLYCOLLECTION_1_T146896498_H
#define READONLYCOLLECTION_1_T146896498_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.DateTimeOffset>
struct  ReadOnlyCollection_1_t146896498  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject * ____syncRoot_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t146896498, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of__syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t146896498, ____syncRoot_1)); }
	inline RuntimeObject * get__syncRoot_1() const { return ____syncRoot_1; }
	inline RuntimeObject ** get_address_of__syncRoot_1() { return &____syncRoot_1; }
	inline void set__syncRoot_1(RuntimeObject * value)
	{
		____syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYCOLLECTION_1_T146896498_H
#ifndef READONLYCOLLECTION_1_T4155876257_H
#define READONLYCOLLECTION_1_T4155876257_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyCollection`1<Windows.Foundation.IWwwFormUrlDecoderEntry>
struct  ReadOnlyCollection_1_t4155876257  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject * ____syncRoot_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t4155876257, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of__syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t4155876257, ____syncRoot_1)); }
	inline RuntimeObject * get__syncRoot_1() const { return ____syncRoot_1; }
	inline RuntimeObject ** get_address_of__syncRoot_1() { return &____syncRoot_1; }
	inline void set__syncRoot_1(RuntimeObject * value)
	{
		____syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYCOLLECTION_1_T4155876257_H
#ifndef READONLYCOLLECTION_1_T1082562530_H
#define READONLYCOLLECTION_1_T1082562530_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyCollection`1<Windows.Foundation.Point>
struct  ReadOnlyCollection_1_t1082562530  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject * ____syncRoot_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t1082562530, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of__syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t1082562530, ____syncRoot_1)); }
	inline RuntimeObject * get__syncRoot_1() const { return ____syncRoot_1; }
	inline RuntimeObject ** get_address_of__syncRoot_1() { return &____syncRoot_1; }
	inline void set__syncRoot_1(RuntimeObject * value)
	{
		____syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYCOLLECTION_1_T1082562530_H
#ifndef READONLYCOLLECTION_1_T3907689774_H
#define READONLYCOLLECTION_1_T3907689774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyCollection`1<Windows.Foundation.Rect>
struct  ReadOnlyCollection_1_t3907689774  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject * ____syncRoot_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t3907689774, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of__syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t3907689774, ____syncRoot_1)); }
	inline RuntimeObject * get__syncRoot_1() const { return ____syncRoot_1; }
	inline RuntimeObject ** get_address_of__syncRoot_1() { return &____syncRoot_1; }
	inline void set__syncRoot_1(RuntimeObject * value)
	{
		____syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYCOLLECTION_1_T3907689774_H
#ifndef READONLYCOLLECTION_1_T1763493925_H
#define READONLYCOLLECTION_1_T1763493925_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyCollection`1<Windows.Foundation.Size>
struct  ReadOnlyCollection_1_t1763493925  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject * ____syncRoot_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t1763493925, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of__syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t1763493925, ____syncRoot_1)); }
	inline RuntimeObject * get__syncRoot_1() const { return ____syncRoot_1; }
	inline RuntimeObject ** get_address_of__syncRoot_1() { return &____syncRoot_1; }
	inline void set__syncRoot_1(RuntimeObject * value)
	{
		____syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYCOLLECTION_1_T1763493925_H
#ifndef READONLYDICTIONARY_2_T1128463424_H
#define READONLYDICTIONARY_2_T1128463424_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Guid,System.Object>
struct  ReadOnlyDictionary_2_t1128463424  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_keys
	KeyCollection_t1978222403 * ___m_keys_2;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_values
	ValueCollection_t1664400730 * ___m_values_3;

public:
	inline static int32_t get_offset_of_m_dictionary_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t1128463424, ___m_dictionary_0)); }
	inline RuntimeObject* get_m_dictionary_0() const { return ___m_dictionary_0; }
	inline RuntimeObject** get_address_of_m_dictionary_0() { return &___m_dictionary_0; }
	inline void set_m_dictionary_0(RuntimeObject* value)
	{
		___m_dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_dictionary_0), value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t1128463424, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_syncRoot_1), value);
	}

	inline static int32_t get_offset_of_m_keys_2() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t1128463424, ___m_keys_2)); }
	inline KeyCollection_t1978222403 * get_m_keys_2() const { return ___m_keys_2; }
	inline KeyCollection_t1978222403 ** get_address_of_m_keys_2() { return &___m_keys_2; }
	inline void set_m_keys_2(KeyCollection_t1978222403 * value)
	{
		___m_keys_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_keys_2), value);
	}

	inline static int32_t get_offset_of_m_values_3() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t1128463424, ___m_values_3)); }
	inline ValueCollection_t1664400730 * get_m_values_3() const { return ___m_values_3; }
	inline ValueCollection_t1664400730 ** get_address_of_m_values_3() { return &___m_values_3; }
	inline void set_m_values_3(ValueCollection_t1664400730 * value)
	{
		___m_values_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYDICTIONARY_2_T1128463424_H
#ifndef READONLYDICTIONARY_2_T532302020_H
#define READONLYDICTIONARY_2_T532302020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Guid,System.Type>
struct  ReadOnlyDictionary_2_t532302020  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_keys
	KeyCollection_t1382060999 * ___m_keys_2;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_values
	ValueCollection_t1068239326 * ___m_values_3;

public:
	inline static int32_t get_offset_of_m_dictionary_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t532302020, ___m_dictionary_0)); }
	inline RuntimeObject* get_m_dictionary_0() const { return ___m_dictionary_0; }
	inline RuntimeObject** get_address_of_m_dictionary_0() { return &___m_dictionary_0; }
	inline void set_m_dictionary_0(RuntimeObject* value)
	{
		___m_dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_dictionary_0), value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t532302020, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_syncRoot_1), value);
	}

	inline static int32_t get_offset_of_m_keys_2() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t532302020, ___m_keys_2)); }
	inline KeyCollection_t1382060999 * get_m_keys_2() const { return ___m_keys_2; }
	inline KeyCollection_t1382060999 ** get_address_of_m_keys_2() { return &___m_keys_2; }
	inline void set_m_keys_2(KeyCollection_t1382060999 * value)
	{
		___m_keys_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_keys_2), value);
	}

	inline static int32_t get_offset_of_m_values_3() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t532302020, ___m_values_3)); }
	inline ValueCollection_t1068239326 * get_m_values_3() const { return ___m_values_3; }
	inline ValueCollection_t1068239326 ** get_address_of_m_values_3() { return &___m_values_3; }
	inline void set_m_values_3(ValueCollection_t1068239326 * value)
	{
		___m_values_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYDICTIONARY_2_T532302020_H
#ifndef READONLYDICTIONARY_2_T968159222_H
#define READONLYDICTIONARY_2_T968159222_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Int32,System.Object>
struct  ReadOnlyDictionary_2_t968159222  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_keys
	KeyCollection_t1817918201 * ___m_keys_2;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_values
	ValueCollection_t1504096528 * ___m_values_3;

public:
	inline static int32_t get_offset_of_m_dictionary_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t968159222, ___m_dictionary_0)); }
	inline RuntimeObject* get_m_dictionary_0() const { return ___m_dictionary_0; }
	inline RuntimeObject** get_address_of_m_dictionary_0() { return &___m_dictionary_0; }
	inline void set_m_dictionary_0(RuntimeObject* value)
	{
		___m_dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_dictionary_0), value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t968159222, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_syncRoot_1), value);
	}

	inline static int32_t get_offset_of_m_keys_2() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t968159222, ___m_keys_2)); }
	inline KeyCollection_t1817918201 * get_m_keys_2() const { return ___m_keys_2; }
	inline KeyCollection_t1817918201 ** get_address_of_m_keys_2() { return &___m_keys_2; }
	inline void set_m_keys_2(KeyCollection_t1817918201 * value)
	{
		___m_keys_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_keys_2), value);
	}

	inline static int32_t get_offset_of_m_values_3() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t968159222, ___m_values_3)); }
	inline ValueCollection_t1504096528 * get_m_values_3() const { return ___m_values_3; }
	inline ValueCollection_t1504096528 ** get_address_of_m_values_3() { return &___m_values_3; }
	inline void set_m_values_3(ValueCollection_t1504096528 * value)
	{
		___m_values_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYDICTIONARY_2_T968159222_H
#ifndef READONLYDICTIONARY_2_T4030471043_H
#define READONLYDICTIONARY_2_T4030471043_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Int32,System.String>
struct  ReadOnlyDictionary_2_t4030471043  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_keys
	KeyCollection_t585262726 * ___m_keys_2;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_values
	ValueCollection_t271441053 * ___m_values_3;

public:
	inline static int32_t get_offset_of_m_dictionary_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t4030471043, ___m_dictionary_0)); }
	inline RuntimeObject* get_m_dictionary_0() const { return ___m_dictionary_0; }
	inline RuntimeObject** get_address_of_m_dictionary_0() { return &___m_dictionary_0; }
	inline void set_m_dictionary_0(RuntimeObject* value)
	{
		___m_dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_dictionary_0), value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t4030471043, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_syncRoot_1), value);
	}

	inline static int32_t get_offset_of_m_keys_2() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t4030471043, ___m_keys_2)); }
	inline KeyCollection_t585262726 * get_m_keys_2() const { return ___m_keys_2; }
	inline KeyCollection_t585262726 ** get_address_of_m_keys_2() { return &___m_keys_2; }
	inline void set_m_keys_2(KeyCollection_t585262726 * value)
	{
		___m_keys_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_keys_2), value);
	}

	inline static int32_t get_offset_of_m_values_3() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t4030471043, ___m_values_3)); }
	inline ValueCollection_t271441053 * get_m_values_3() const { return ___m_values_3; }
	inline ValueCollection_t271441053 ** get_address_of_m_values_3() { return &___m_values_3; }
	inline void set_m_values_3(ValueCollection_t271441053 * value)
	{
		___m_values_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYDICTIONARY_2_T4030471043_H
#ifndef READONLYDICTIONARY_2_T444033976_H
#define READONLYDICTIONARY_2_T444033976_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Object,System.Boolean>
struct  ReadOnlyDictionary_2_t444033976  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_keys
	KeyCollection_t1293792955 * ___m_keys_2;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_values
	ValueCollection_t979971282 * ___m_values_3;

public:
	inline static int32_t get_offset_of_m_dictionary_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t444033976, ___m_dictionary_0)); }
	inline RuntimeObject* get_m_dictionary_0() const { return ___m_dictionary_0; }
	inline RuntimeObject** get_address_of_m_dictionary_0() { return &___m_dictionary_0; }
	inline void set_m_dictionary_0(RuntimeObject* value)
	{
		___m_dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_dictionary_0), value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t444033976, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_syncRoot_1), value);
	}

	inline static int32_t get_offset_of_m_keys_2() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t444033976, ___m_keys_2)); }
	inline KeyCollection_t1293792955 * get_m_keys_2() const { return ___m_keys_2; }
	inline KeyCollection_t1293792955 ** get_address_of_m_keys_2() { return &___m_keys_2; }
	inline void set_m_keys_2(KeyCollection_t1293792955 * value)
	{
		___m_keys_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_keys_2), value);
	}

	inline static int32_t get_offset_of_m_values_3() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t444033976, ___m_values_3)); }
	inline ValueCollection_t979971282 * get_m_values_3() const { return ___m_values_3; }
	inline ValueCollection_t979971282 ** get_address_of_m_values_3() { return &___m_values_3; }
	inline void set_m_values_3(ValueCollection_t979971282 * value)
	{
		___m_values_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYDICTIONARY_2_T444033976_H
#ifndef READONLYDICTIONARY_2_T3297691764_H
#define READONLYDICTIONARY_2_T3297691764_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Object,System.Int32>
struct  ReadOnlyDictionary_2_t3297691764  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_keys
	KeyCollection_t4147450743 * ___m_keys_2;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_values
	ValueCollection_t3833629070 * ___m_values_3;

public:
	inline static int32_t get_offset_of_m_dictionary_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t3297691764, ___m_dictionary_0)); }
	inline RuntimeObject* get_m_dictionary_0() const { return ___m_dictionary_0; }
	inline RuntimeObject** get_address_of_m_dictionary_0() { return &___m_dictionary_0; }
	inline void set_m_dictionary_0(RuntimeObject* value)
	{
		___m_dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_dictionary_0), value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t3297691764, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_syncRoot_1), value);
	}

	inline static int32_t get_offset_of_m_keys_2() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t3297691764, ___m_keys_2)); }
	inline KeyCollection_t4147450743 * get_m_keys_2() const { return ___m_keys_2; }
	inline KeyCollection_t4147450743 ** get_address_of_m_keys_2() { return &___m_keys_2; }
	inline void set_m_keys_2(KeyCollection_t4147450743 * value)
	{
		___m_keys_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_keys_2), value);
	}

	inline static int32_t get_offset_of_m_values_3() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t3297691764, ___m_values_3)); }
	inline ValueCollection_t3833629070 * get_m_values_3() const { return ___m_values_3; }
	inline ValueCollection_t3833629070 ** get_address_of_m_values_3() { return &___m_values_3; }
	inline void set_m_values_3(ValueCollection_t3833629070 * value)
	{
		___m_values_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYDICTIONARY_2_T3297691764_H
#ifndef READONLYDICTIONARY_2_T3426852175_H
#define READONLYDICTIONARY_2_T3426852175_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Object,System.Object>
struct  ReadOnlyDictionary_2_t3426852175  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_keys
	KeyCollection_t4276611154 * ___m_keys_2;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_values
	ValueCollection_t3962789481 * ___m_values_3;

public:
	inline static int32_t get_offset_of_m_dictionary_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t3426852175, ___m_dictionary_0)); }
	inline RuntimeObject* get_m_dictionary_0() const { return ___m_dictionary_0; }
	inline RuntimeObject** get_address_of_m_dictionary_0() { return &___m_dictionary_0; }
	inline void set_m_dictionary_0(RuntimeObject* value)
	{
		___m_dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_dictionary_0), value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t3426852175, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_syncRoot_1), value);
	}

	inline static int32_t get_offset_of_m_keys_2() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t3426852175, ___m_keys_2)); }
	inline KeyCollection_t4276611154 * get_m_keys_2() const { return ___m_keys_2; }
	inline KeyCollection_t4276611154 ** get_address_of_m_keys_2() { return &___m_keys_2; }
	inline void set_m_keys_2(KeyCollection_t4276611154 * value)
	{
		___m_keys_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_keys_2), value);
	}

	inline static int32_t get_offset_of_m_values_3() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t3426852175, ___m_values_3)); }
	inline ValueCollection_t3962789481 * get_m_values_3() const { return ___m_values_3; }
	inline ValueCollection_t3962789481 ** get_address_of_m_values_3() { return &___m_values_3; }
	inline void set_m_values_3(ValueCollection_t3962789481 * value)
	{
		___m_values_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYDICTIONARY_2_T3426852175_H
#ifndef READONLYDICTIONARY_2_T3176851287_H
#define READONLYDICTIONARY_2_T3176851287_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,System.Boolean>
struct  ReadOnlyDictionary_2_t3176851287  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_keys
	KeyCollection_t4026610266 * ___m_keys_2;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_values
	ValueCollection_t3712788593 * ___m_values_3;

public:
	inline static int32_t get_offset_of_m_dictionary_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t3176851287, ___m_dictionary_0)); }
	inline RuntimeObject* get_m_dictionary_0() const { return ___m_dictionary_0; }
	inline RuntimeObject** get_address_of_m_dictionary_0() { return &___m_dictionary_0; }
	inline void set_m_dictionary_0(RuntimeObject* value)
	{
		___m_dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_dictionary_0), value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t3176851287, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_syncRoot_1), value);
	}

	inline static int32_t get_offset_of_m_keys_2() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t3176851287, ___m_keys_2)); }
	inline KeyCollection_t4026610266 * get_m_keys_2() const { return ___m_keys_2; }
	inline KeyCollection_t4026610266 ** get_address_of_m_keys_2() { return &___m_keys_2; }
	inline void set_m_keys_2(KeyCollection_t4026610266 * value)
	{
		___m_keys_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_keys_2), value);
	}

	inline static int32_t get_offset_of_m_values_3() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t3176851287, ___m_values_3)); }
	inline ValueCollection_t3712788593 * get_m_values_3() const { return ___m_values_3; }
	inline ValueCollection_t3712788593 ** get_address_of_m_values_3() { return &___m_values_3; }
	inline void set_m_values_3(ValueCollection_t3712788593 * value)
	{
		___m_values_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYDICTIONARY_2_T3176851287_H
#ifndef READONLYDICTIONARY_2_T1735541779_H
#define READONLYDICTIONARY_2_T1735541779_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,System.Int32>
struct  ReadOnlyDictionary_2_t1735541779  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_keys
	KeyCollection_t2585300758 * ___m_keys_2;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_values
	ValueCollection_t2271479085 * ___m_values_3;

public:
	inline static int32_t get_offset_of_m_dictionary_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t1735541779, ___m_dictionary_0)); }
	inline RuntimeObject* get_m_dictionary_0() const { return ___m_dictionary_0; }
	inline RuntimeObject** get_address_of_m_dictionary_0() { return &___m_dictionary_0; }
	inline void set_m_dictionary_0(RuntimeObject* value)
	{
		___m_dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_dictionary_0), value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t1735541779, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_syncRoot_1), value);
	}

	inline static int32_t get_offset_of_m_keys_2() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t1735541779, ___m_keys_2)); }
	inline KeyCollection_t2585300758 * get_m_keys_2() const { return ___m_keys_2; }
	inline KeyCollection_t2585300758 ** get_address_of_m_keys_2() { return &___m_keys_2; }
	inline void set_m_keys_2(KeyCollection_t2585300758 * value)
	{
		___m_keys_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_keys_2), value);
	}

	inline static int32_t get_offset_of_m_values_3() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t1735541779, ___m_values_3)); }
	inline ValueCollection_t2271479085 * get_m_values_3() const { return ___m_values_3; }
	inline ValueCollection_t2271479085 ** get_address_of_m_values_3() { return &___m_values_3; }
	inline void set_m_values_3(ValueCollection_t2271479085 * value)
	{
		___m_values_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYDICTIONARY_2_T1735541779_H
#ifndef READONLYDICTIONARY_2_T1864702190_H
#define READONLYDICTIONARY_2_T1864702190_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,System.Object>
struct  ReadOnlyDictionary_2_t1864702190  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_keys
	KeyCollection_t2714461169 * ___m_keys_2;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_values
	ValueCollection_t2400639496 * ___m_values_3;

public:
	inline static int32_t get_offset_of_m_dictionary_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t1864702190, ___m_dictionary_0)); }
	inline RuntimeObject* get_m_dictionary_0() const { return ___m_dictionary_0; }
	inline RuntimeObject** get_address_of_m_dictionary_0() { return &___m_dictionary_0; }
	inline void set_m_dictionary_0(RuntimeObject* value)
	{
		___m_dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_dictionary_0), value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t1864702190, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_syncRoot_1), value);
	}

	inline static int32_t get_offset_of_m_keys_2() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t1864702190, ___m_keys_2)); }
	inline KeyCollection_t2714461169 * get_m_keys_2() const { return ___m_keys_2; }
	inline KeyCollection_t2714461169 ** get_address_of_m_keys_2() { return &___m_keys_2; }
	inline void set_m_keys_2(KeyCollection_t2714461169 * value)
	{
		___m_keys_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_keys_2), value);
	}

	inline static int32_t get_offset_of_m_values_3() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t1864702190, ___m_values_3)); }
	inline ValueCollection_t2400639496 * get_m_values_3() const { return ___m_values_3; }
	inline ValueCollection_t2400639496 ** get_address_of_m_values_3() { return &___m_values_3; }
	inline void set_m_values_3(ValueCollection_t2400639496 * value)
	{
		___m_values_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYDICTIONARY_2_T1864702190_H
#ifndef READONLYDICTIONARY_2_T632046715_H
#define READONLYDICTIONARY_2_T632046715_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,System.String>
struct  ReadOnlyDictionary_2_t632046715  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_keys
	KeyCollection_t1481805694 * ___m_keys_2;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_values
	ValueCollection_t1167984021 * ___m_values_3;

public:
	inline static int32_t get_offset_of_m_dictionary_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t632046715, ___m_dictionary_0)); }
	inline RuntimeObject* get_m_dictionary_0() const { return ___m_dictionary_0; }
	inline RuntimeObject** get_address_of_m_dictionary_0() { return &___m_dictionary_0; }
	inline void set_m_dictionary_0(RuntimeObject* value)
	{
		___m_dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_dictionary_0), value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t632046715, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_syncRoot_1), value);
	}

	inline static int32_t get_offset_of_m_keys_2() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t632046715, ___m_keys_2)); }
	inline KeyCollection_t1481805694 * get_m_keys_2() const { return ___m_keys_2; }
	inline KeyCollection_t1481805694 ** get_address_of_m_keys_2() { return &___m_keys_2; }
	inline void set_m_keys_2(KeyCollection_t1481805694 * value)
	{
		___m_keys_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_keys_2), value);
	}

	inline static int32_t get_offset_of_m_values_3() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t632046715, ___m_values_3)); }
	inline ValueCollection_t1167984021 * get_m_values_3() const { return ___m_values_3; }
	inline ValueCollection_t1167984021 ** get_address_of_m_values_3() { return &___m_values_3; }
	inline void set_m_values_3(ValueCollection_t1167984021 * value)
	{
		___m_values_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYDICTIONARY_2_T632046715_H
#ifndef READONLYDICTIONARY_2_T1268540786_H
#define READONLYDICTIONARY_2_T1268540786_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,System.Type>
struct  ReadOnlyDictionary_2_t1268540786  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_keys
	KeyCollection_t2118299765 * ___m_keys_2;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_values
	ValueCollection_t1804478092 * ___m_values_3;

public:
	inline static int32_t get_offset_of_m_dictionary_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t1268540786, ___m_dictionary_0)); }
	inline RuntimeObject* get_m_dictionary_0() const { return ___m_dictionary_0; }
	inline RuntimeObject** get_address_of_m_dictionary_0() { return &___m_dictionary_0; }
	inline void set_m_dictionary_0(RuntimeObject* value)
	{
		___m_dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_dictionary_0), value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t1268540786, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_syncRoot_1), value);
	}

	inline static int32_t get_offset_of_m_keys_2() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t1268540786, ___m_keys_2)); }
	inline KeyCollection_t2118299765 * get_m_keys_2() const { return ___m_keys_2; }
	inline KeyCollection_t2118299765 ** get_address_of_m_keys_2() { return &___m_keys_2; }
	inline void set_m_keys_2(KeyCollection_t2118299765 * value)
	{
		___m_keys_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_keys_2), value);
	}

	inline static int32_t get_offset_of_m_values_3() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t1268540786, ___m_values_3)); }
	inline ValueCollection_t1804478092 * get_m_values_3() const { return ___m_values_3; }
	inline ValueCollection_t1804478092 ** get_address_of_m_values_3() { return &___m_values_3; }
	inline void set_m_values_3(ValueCollection_t1804478092 * value)
	{
		___m_values_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYDICTIONARY_2_T1268540786_H
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
#ifndef CONSTANTSPLITTABLEMAP_2_T1659983216_H
#define CONSTANTSPLITTABLEMAP_2_T1659983216_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Guid,System.Object>
struct  ConstantSplittableMap_2_t1659983216  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_t3332857673* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t1659983216, ___items_1)); }
	inline KeyValuePair_2U5BU5D_t3332857673* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_t3332857673** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_t3332857673* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((&___items_1), value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t1659983216, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t1659983216, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_t1659983216_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_t2155324696 * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t1659983216_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_t2155324696 * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_t2155324696 ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_t2155324696 * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyValuePairComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANTSPLITTABLEMAP_2_T1659983216_H
#ifndef CONSTANTSPLITTABLEMAP_2_T1063821812_H
#define CONSTANTSPLITTABLEMAP_2_T1063821812_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Guid,System.Type>
struct  ConstantSplittableMap_2_t1063821812  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_t134831157* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t1063821812, ___items_1)); }
	inline KeyValuePair_2U5BU5D_t134831157* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_t134831157** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_t134831157* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((&___items_1), value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t1063821812, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t1063821812, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_t1063821812_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_t1559163292 * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t1063821812_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_t1559163292 * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_t1559163292 ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_t1559163292 * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyValuePairComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANTSPLITTABLEMAP_2_T1063821812_H
#ifndef CONSTANTSPLITTABLEMAP_2_T1499679014_H
#define CONSTANTSPLITTABLEMAP_2_T1499679014_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int32,System.Object>
struct  ConstantSplittableMap_2_t1499679014  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_t2652375035* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t1499679014, ___items_1)); }
	inline KeyValuePair_2U5BU5D_t2652375035* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_t2652375035** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_t2652375035* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((&___items_1), value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t1499679014, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t1499679014, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_t1499679014_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_t1995020494 * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t1499679014_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_t1995020494 * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_t1995020494 ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_t1995020494 * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyValuePairComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANTSPLITTABLEMAP_2_T1499679014_H
#ifndef CONSTANTSPLITTABLEMAP_2_T267023539_H
#define CONSTANTSPLITTABLEMAP_2_T267023539_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int32,System.String>
struct  ConstantSplittableMap_2_t267023539  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_t1090225050* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t267023539, ___items_1)); }
	inline KeyValuePair_2U5BU5D_t1090225050* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_t1090225050** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_t1090225050* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((&___items_1), value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t267023539, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t267023539, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_t267023539_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_t762365019 * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t267023539_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_t762365019 * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_t762365019 ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_t762365019 * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyValuePairComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANTSPLITTABLEMAP_2_T267023539_H
#ifndef CONSTANTSPLITTABLEMAP_2_T975553768_H
#define CONSTANTSPLITTABLEMAP_2_T975553768_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Boolean>
struct  ConstantSplittableMap_2_t975553768  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_t171748081* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t975553768, ___items_1)); }
	inline KeyValuePair_2U5BU5D_t171748081* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_t171748081** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_t171748081* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((&___items_1), value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t975553768, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t975553768, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_t975553768_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_t1470895248 * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t975553768_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_t1470895248 * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_t1470895248 ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_t1470895248 * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyValuePairComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANTSPLITTABLEMAP_2_T975553768_H
#ifndef CONSTANTSPLITTABLEMAP_2_T3829211556_H
#define CONSTANTSPLITTABLEMAP_2_T3829211556_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Int32>
struct  ConstantSplittableMap_2_t3829211556  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_t1954543557* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t3829211556, ___items_1)); }
	inline KeyValuePair_2U5BU5D_t1954543557* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_t1954543557** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_t1954543557* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((&___items_1), value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t3829211556, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t3829211556, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_t3829211556_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_t29585740 * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t3829211556_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_t29585740 * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_t29585740 ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_t29585740 * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyValuePairComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANTSPLITTABLEMAP_2_T3829211556_H
#ifndef CONSTANTSPLITTABLEMAP_2_T3958371967_H
#define CONSTANTSPLITTABLEMAP_2_T3958371967_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Object>
struct  ConstantSplittableMap_2_t3958371967  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_t118269214* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t3958371967, ___items_1)); }
	inline KeyValuePair_2U5BU5D_t118269214* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_t118269214** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_t118269214* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((&___items_1), value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t3958371967, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t3958371967, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_t3958371967_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_t158746151 * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t3958371967_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_t158746151 * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_t158746151 ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_t158746151 * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyValuePairComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANTSPLITTABLEMAP_2_T3958371967_H
#ifndef CONSTANTSPLITTABLEMAP_2_T3708371079_H
#define CONSTANTSPLITTABLEMAP_2_T3708371079_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.String,System.Boolean>
struct  ConstantSplittableMap_2_t3708371079  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_t1951926774* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t3708371079, ___items_1)); }
	inline KeyValuePair_2U5BU5D_t1951926774* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_t1951926774** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_t1951926774* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((&___items_1), value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t3708371079, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t3708371079, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_t3708371079_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_t4203712559 * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t3708371079_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_t4203712559 * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_t4203712559 ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_t4203712559 * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyValuePairComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANTSPLITTABLEMAP_2_T3708371079_H
#ifndef CONSTANTSPLITTABLEMAP_2_T2267061571_H
#define CONSTANTSPLITTABLEMAP_2_T2267061571_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.String,System.Int32>
struct  ConstantSplittableMap_2_t2267061571  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_t3734722250* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t2267061571, ___items_1)); }
	inline KeyValuePair_2U5BU5D_t3734722250* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_t3734722250** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_t3734722250* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((&___items_1), value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t2267061571, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t2267061571, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_t2267061571_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_t2762403051 * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t2267061571_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_t2762403051 * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_t2762403051 ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_t2762403051 * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyValuePairComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANTSPLITTABLEMAP_2_T2267061571_H
#ifndef CONSTANTSPLITTABLEMAP_2_T2396221982_H
#define CONSTANTSPLITTABLEMAP_2_T2396221982_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.String,System.Object>
struct  ConstantSplittableMap_2_t2396221982  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_t1898447907* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t2396221982, ___items_1)); }
	inline KeyValuePair_2U5BU5D_t1898447907* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_t1898447907** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_t1898447907* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((&___items_1), value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t2396221982, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t2396221982, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_t2396221982_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_t2891563462 * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t2396221982_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_t2891563462 * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_t2891563462 ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_t2891563462 * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyValuePairComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANTSPLITTABLEMAP_2_T2396221982_H
#ifndef CONSTANTSPLITTABLEMAP_2_T1163566507_H
#define CONSTANTSPLITTABLEMAP_2_T1163566507_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.String,System.String>
struct  ConstantSplittableMap_2_t1163566507  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_t336297922* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t1163566507, ___items_1)); }
	inline KeyValuePair_2U5BU5D_t336297922* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_t336297922** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_t336297922* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((&___items_1), value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t1163566507, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t1163566507, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_t1163566507_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_t1658907987 * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t1163566507_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_t1658907987 * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_t1658907987 ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_t1658907987 * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyValuePairComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANTSPLITTABLEMAP_2_T1163566507_H
#ifndef CONSTANTSPLITTABLEMAP_2_T1800060578_H
#define CONSTANTSPLITTABLEMAP_2_T1800060578_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.String,System.Type>
struct  ConstantSplittableMap_2_t1800060578  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_t2995388687* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t1800060578, ___items_1)); }
	inline KeyValuePair_2U5BU5D_t2995388687* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_t2995388687** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_t2995388687* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((&___items_1), value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t1800060578, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t1800060578, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_t1800060578_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_t2295402058 * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t1800060578_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_t2295402058 * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_t2295402058 ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_t2295402058 * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyValuePairComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANTSPLITTABLEMAP_2_T1800060578_H
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
#ifndef KEYVALUEPAIR_2_T4237331251_H
#define KEYVALUEPAIR_2_T4237331251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
struct  KeyValuePair_2_t4237331251 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4237331251, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4237331251, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T4237331251_H
#ifndef KEYVALUEPAIR_2_T71524366_H
#define KEYVALUEPAIR_2_T71524366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct  KeyValuePair_2_t71524366 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t71524366, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t71524366, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T71524366_H
#ifndef KEYVALUEPAIR_2_T3133836187_H
#define KEYVALUEPAIR_2_T3133836187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.String>
struct  KeyValuePair_2_t3133836187 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3133836187, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3133836187, ___value_1)); }
	inline String_t* get_value_1() const { return ___value_1; }
	inline String_t** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(String_t* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T3133836187_H
#ifndef KEYVALUEPAIR_2_T3842366416_H
#define KEYVALUEPAIR_2_T3842366416_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>
struct  KeyValuePair_2_t3842366416 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	bool ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3842366416, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3842366416, ___value_1)); }
	inline bool get_value_1() const { return ___value_1; }
	inline bool* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(bool value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T3842366416_H
#ifndef KEYVALUEPAIR_2_T2401056908_H
#define KEYVALUEPAIR_2_T2401056908_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
struct  KeyValuePair_2_t2401056908 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2401056908, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2401056908, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2401056908_H
#ifndef KEYVALUEPAIR_2_T2530217319_H
#define KEYVALUEPAIR_2_T2530217319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_t2530217319 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2530217319, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2530217319, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T2530217319_H
#ifndef KEYVALUEPAIR_2_T2280216431_H
#define KEYVALUEPAIR_2_T2280216431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>
struct  KeyValuePair_2_t2280216431 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	bool ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2280216431, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2280216431, ___value_1)); }
	inline bool get_value_1() const { return ___value_1; }
	inline bool* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(bool value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2280216431_H
#ifndef KEYVALUEPAIR_2_T838906923_H
#define KEYVALUEPAIR_2_T838906923_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
struct  KeyValuePair_2_t838906923 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t838906923, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t838906923, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T838906923_H
#ifndef KEYVALUEPAIR_2_T968067334_H
#define KEYVALUEPAIR_2_T968067334_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
struct  KeyValuePair_2_t968067334 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t968067334, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t968067334, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T968067334_H
#ifndef KEYVALUEPAIR_2_T4030379155_H
#define KEYVALUEPAIR_2_T4030379155_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct  KeyValuePair_2_t4030379155 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4030379155, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4030379155, ___value_1)); }
	inline String_t* get_value_1() const { return ___value_1; }
	inline String_t** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(String_t* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T4030379155_H
#ifndef KEYVALUEPAIR_2_T371905930_H
#define KEYVALUEPAIR_2_T371905930_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.String,System.Type>
struct  KeyValuePair_2_t371905930 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Type_t * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t371905930, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t371905930, ___value_1)); }
	inline Type_t * get_value_1() const { return ___value_1; }
	inline Type_t ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Type_t * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T371905930_H
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
#ifndef DATETIME_T1679451545_H
#define DATETIME_T1679451545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.DateTime
struct  DateTime_t1679451545 
{
public:
	// System.Int64 Windows.Foundation.DateTime::UniversalTime
	int64_t ___UniversalTime_0;

public:
	inline static int32_t get_offset_of_UniversalTime_0() { return static_cast<int32_t>(offsetof(DateTime_t1679451545, ___UniversalTime_0)); }
	inline int64_t get_UniversalTime_0() const { return ___UniversalTime_0; }
	inline int64_t* get_address_of_UniversalTime_0() { return &___UniversalTime_0; }
	inline void set_UniversalTime_0(int64_t value)
	{
		___UniversalTime_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T1679451545_H
#ifndef POINT_T4164953539_H
#define POINT_T4164953539_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Point
struct  Point_t4164953539 
{
public:
	// System.Single Windows.Foundation.Point::_x
	float ____x_0;
	// System.Single Windows.Foundation.Point::_y
	float ____y_1;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Point_t4164953539, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Point_t4164953539, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINT_T4164953539_H
#ifndef RECT_T2695113487_H
#define RECT_T2695113487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Rect
struct  Rect_t2695113487 
{
public:
	// System.Single Windows.Foundation.Rect::_x
	float ____x_0;
	// System.Single Windows.Foundation.Rect::_y
	float ____y_1;
	// System.Single Windows.Foundation.Rect::_width
	float ____width_2;
	// System.Single Windows.Foundation.Rect::_height
	float ____height_3;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Rect_t2695113487, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Rect_t2695113487, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}

	inline static int32_t get_offset_of__width_2() { return static_cast<int32_t>(offsetof(Rect_t2695113487, ____width_2)); }
	inline float get__width_2() const { return ____width_2; }
	inline float* get_address_of__width_2() { return &____width_2; }
	inline void set__width_2(float value)
	{
		____width_2 = value;
	}

	inline static int32_t get_offset_of__height_3() { return static_cast<int32_t>(offsetof(Rect_t2695113487, ____height_3)); }
	inline float get__height_3() const { return ____height_3; }
	inline float* get_address_of__height_3() { return &____height_3; }
	inline void set__height_3(float value)
	{
		____height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2695113487_H
#ifndef SIZE_T550917638_H
#define SIZE_T550917638_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Size
struct  Size_t550917638 
{
public:
	// System.Single Windows.Foundation.Size::_width
	float ____width_0;
	// System.Single Windows.Foundation.Size::_height
	float ____height_1;

public:
	inline static int32_t get_offset_of__width_0() { return static_cast<int32_t>(offsetof(Size_t550917638, ____width_0)); }
	inline float get__width_0() const { return ____width_0; }
	inline float* get_address_of__width_0() { return &____width_0; }
	inline void set__width_0(float value)
	{
		____width_0 = value;
	}

	inline static int32_t get_offset_of__height_1() { return static_cast<int32_t>(offsetof(Size_t550917638, ____height_1)); }
	inline float get__height_1() const { return ____height_1; }
	inline float* get_address_of__height_1() { return &____height_1; }
	inline void set__height_1(float value)
	{
		____height_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIZE_T550917638_H
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
#ifndef KEYNOTFOUNDEXCEPTION_T2292407383_H
#define KEYNOTFOUNDEXCEPTION_T2292407383_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyNotFoundException
struct  KeyNotFoundException_t2292407383  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYNOTFOUNDEXCEPTION_T2292407383_H
#ifndef KEYVALUEPAIR_2_T231828568_H
#define KEYVALUEPAIR_2_T231828568_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>
struct  KeyValuePair_2_t231828568 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Guid_t  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t231828568, ___key_0)); }
	inline Guid_t  get_key_0() const { return ___key_0; }
	inline Guid_t * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Guid_t  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t231828568, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T231828568_H
#ifndef KEYVALUEPAIR_2_T3930634460_H
#define KEYVALUEPAIR_2_T3930634460_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Guid,System.Type>
struct  KeyValuePair_2_t3930634460 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Guid_t  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Type_t * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3930634460, ___key_0)); }
	inline Guid_t  get_key_0() const { return ___key_0; }
	inline Guid_t * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Guid_t  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3930634460, ___value_1)); }
	inline Type_t * get_value_1() const { return ___value_1; }
	inline Type_t ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Type_t * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T3930634460_H
#ifndef DATETIMEOFFSET_T3229287507_H
#define DATETIMEOFFSET_T3229287507_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeOffset
struct  DateTimeOffset_t3229287507 
{
public:
	// System.DateTime System.DateTimeOffset::m_dateTime
	DateTime_t3738529785  ___m_dateTime_2;
	// System.Int16 System.DateTimeOffset::m_offsetMinutes
	int16_t ___m_offsetMinutes_3;

public:
	inline static int32_t get_offset_of_m_dateTime_2() { return static_cast<int32_t>(offsetof(DateTimeOffset_t3229287507, ___m_dateTime_2)); }
	inline DateTime_t3738529785  get_m_dateTime_2() const { return ___m_dateTime_2; }
	inline DateTime_t3738529785 * get_address_of_m_dateTime_2() { return &___m_dateTime_2; }
	inline void set_m_dateTime_2(DateTime_t3738529785  value)
	{
		___m_dateTime_2 = value;
	}

	inline static int32_t get_offset_of_m_offsetMinutes_3() { return static_cast<int32_t>(offsetof(DateTimeOffset_t3229287507, ___m_offsetMinutes_3)); }
	inline int16_t get_m_offsetMinutes_3() const { return ___m_offsetMinutes_3; }
	inline int16_t* get_address_of_m_offsetMinutes_3() { return &___m_offsetMinutes_3; }
	inline void set_m_offsetMinutes_3(int16_t value)
	{
		___m_offsetMinutes_3 = value;
	}
};

struct DateTimeOffset_t3229287507_StaticFields
{
public:
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t3229287507  ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t3229287507  ___MaxValue_1;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(DateTimeOffset_t3229287507_StaticFields, ___MinValue_0)); }
	inline DateTimeOffset_t3229287507  get_MinValue_0() const { return ___MinValue_0; }
	inline DateTimeOffset_t3229287507 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(DateTimeOffset_t3229287507  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(DateTimeOffset_t3229287507_StaticFields, ___MaxValue_1)); }
	inline DateTimeOffset_t3229287507  get_MaxValue_1() const { return ___MaxValue_1; }
	inline DateTimeOffset_t3229287507 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(DateTimeOffset_t3229287507  value)
	{
		___MaxValue_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEOFFSET_T3229287507_H
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
// Windows.Foundation.Collections.IIterator`1<System.DateTimeOffset>
struct NOVTABLE IIterator_1_t1103430980 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterator_1_get_Current_m3227006710(DateTime_t1679451545 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IIterator_1_get_HasCurrent_m57224880(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IIterator_1_MoveNext_m1172097404(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IIterator_1_GetMany_m875085322(uint32_t ___items0ArraySize, DateTime_t1679451545 * ___items0, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Point>
struct NOVTABLE IIterator_1_t2039097012 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterator_1_get_Current_m3650755423(Point_t4164953539 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IIterator_1_get_HasCurrent_m941782850(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IIterator_1_MoveNext_m1050410819(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IIterator_1_GetMany_m1958449181(uint32_t ___items0ArraySize, Point_t4164953539 * ___items0, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Rect>
struct NOVTABLE IIterator_1_t569256960 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterator_1_get_Current_m1183023450(Rect_t2695113487 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IIterator_1_get_HasCurrent_m1554425837(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IIterator_1_MoveNext_m328760485(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IIterator_1_GetMany_m269641506(uint32_t ___items0ArraySize, Rect_t2695113487 * ___items0, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Size>
struct NOVTABLE IIterator_1_t2720028407 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterator_1_get_Current_m573419872(Size_t550917638 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IIterator_1_get_HasCurrent_m4223115842(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IIterator_1_MoveNext_m2301142642(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IIterator_1_GetMany_m2384573303(uint32_t ___items0ArraySize, Size_t550917638 * ___items0, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.Guid,System.Object>
struct NOVTABLE IKeyValuePair_2_t1256548186 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m3324945768(Guid_t * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m52124236(Il2CppIInspectable** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IMapView`2<System.Guid,System.Object>
struct NOVTABLE IMapView_2_t3878100361 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m3331997343(Guid_t  ___key0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m3858358881(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m3111850129(Guid_t  ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m3394162196(IMapView_2_t3878100361** ___first0, IMapView_2_t3878100361** ___second1) = 0;
};
// Windows.Foundation.Collections.IMap`2<System.Guid,System.Object>
struct NOVTABLE IMap_2_t778760517 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m3068028334(Guid_t  ___key0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m1704379977(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m2236943020(Guid_t  ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m3237694789(IMapView_2_t3878100361** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m1575381716(Guid_t  ___key0, Il2CppIInspectable* ___value1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m3289693839(Guid_t  ___key0) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m2519350850() = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.DateTimeOffset>
struct NOVTABLE IVectorView_1_t2568152769 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m1224151036(uint32_t ___index0, DateTime_t1679451545 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m1566737220(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m1513712387(DateTime_t1679451545  ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m1032517645(uint32_t ___startIndex0, uint32_t ___items1ArraySize, DateTime_t1679451545 * ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.Point>
struct NOVTABLE IVectorView_1_t3503818801 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m828460566(uint32_t ___index0, Point_t4164953539 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m3766324835(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m1240834200(Point_t4164953539  ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m320624579(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Point_t4164953539 * ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.Rect>
struct NOVTABLE IVectorView_1_t2033978749 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m2736327627(uint32_t ___index0, Rect_t2695113487 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m2984082999(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m3219133186(Rect_t2695113487  ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m4144836697(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Rect_t2695113487 * ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.Size>
struct NOVTABLE IVectorView_1_t4184750196 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m2196457089(uint32_t ___index0, Size_t550917638 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m3307328074(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m1205944866(Size_t550917638  ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m2898007465(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Size_t550917638 * ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVector`1<System.DateTimeOffset>
struct NOVTABLE IVector_1_t3969909228 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m3254412450(uint32_t ___index0, DateTime_t1679451545 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m3377152281(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m1062446282(IVectorView_1_t2568152769** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_m1294821683(DateTime_t1679451545  ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m60350146(uint32_t ___index0, DateTime_t1679451545  ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m3629928755(uint32_t ___index0, DateTime_t1679451545  ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m2821918640(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m3775858658(DateTime_t1679451545  ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m1446419325() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m1953971700() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m3458941667(uint32_t ___startIndex0, uint32_t ___items1ArraySize, DateTime_t1679451545 * ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m1854201827(uint32_t ___items0ArraySize, DateTime_t1679451545 * ___items0) = 0;
};
// Windows.Foundation.Collections.IVector`1<Windows.Foundation.Point>
struct NOVTABLE IVector_1_t610607964 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m2330330105(uint32_t ___index0, Point_t4164953539 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m59889375(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m118185472(IVectorView_1_t3503818801** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_m428066000(Point_t4164953539  ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m565528379(uint32_t ___index0, Point_t4164953539  ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m3604836490(uint32_t ___index0, Point_t4164953539  ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m1853546183(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m195984872(Point_t4164953539  ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m4286336640() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m2273683721() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m4242153011(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Point_t4164953539 * ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m2759782552(uint32_t ___items0ArraySize, Point_t4164953539 * ___items0) = 0;
};
// Windows.Foundation.Collections.IVector`1<Windows.Foundation.Rect>
struct NOVTABLE IVector_1_t3435735208 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m3545656912(uint32_t ___index0, Rect_t2695113487 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m2774852035(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m3695632509(IVectorView_1_t2033978749** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_m2583104291(Rect_t2695113487  ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m661546338(uint32_t ___index0, Rect_t2695113487  ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m1857322035(uint32_t ___index0, Rect_t2695113487  ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m3994675881(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m4126265023(Rect_t2695113487  ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m298642047() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m26527518() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m476750240(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Rect_t2695113487 * ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m2673034237(uint32_t ___items0ArraySize, Rect_t2695113487 * ___items0) = 0;
};
// Windows.Foundation.Collections.IVector`1<Windows.Foundation.Size>
struct NOVTABLE IVector_1_t1291539359 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m2699244792(uint32_t ___index0, Size_t550917638 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m4157668882(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m1943501597(IVectorView_1_t4184750196** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_m3701100474(Size_t550917638  ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m3412621482(uint32_t ___index0, Size_t550917638  ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m3860348037(uint32_t ___index0, Size_t550917638  ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m394387669(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m2019222254(Size_t550917638  ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m2572115469() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m783567046() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m4076800509(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Size_t550917638 * ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m4107471252(uint32_t ___items0ArraySize, Size_t550917638 * ___items0) = 0;
};
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
// Windows.Foundation.Collections.IKeyValuePair`2<System.Guid,System.Type>
struct NOVTABLE IKeyValuePair_2_t660386782 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m1247672299(Guid_t * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m3450640679(Il2CppWindowsRuntimeTypeName* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.String,System.Type>
struct NOVTABLE IKeyValuePair_2_t1396625548 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m2199926285(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m1427991677(Il2CppWindowsRuntimeTypeName* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IMapView`2<System.Guid,System.Type>
struct NOVTABLE IMapView_2_t3281938957 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m3896662699(Guid_t  ___key0, Il2CppWindowsRuntimeTypeName* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m2349127300(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m1382000797(Guid_t  ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m2592840147(IMapView_2_t3281938957** ___first0, IMapView_2_t3281938957** ___second1) = 0;
};
// Windows.Foundation.Collections.IMapView`2<System.String,System.Type>
struct NOVTABLE IMapView_2_t4018177723 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m594002932(Il2CppHString ___key0, Il2CppWindowsRuntimeTypeName* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m3065552575(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m1694676420(Il2CppHString ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m3605358933(IMapView_2_t4018177723** ___first0, IMapView_2_t4018177723** ___second1) = 0;
};
// Windows.Foundation.Collections.IMap`2<System.Guid,System.Type>
struct NOVTABLE IMap_2_t182599113 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m372021310(Guid_t  ___key0, Il2CppWindowsRuntimeTypeName* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m4209346384(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m2767397819(Guid_t  ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m3956818822(IMapView_2_t3281938957** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m52862695(Guid_t  ___key0, Il2CppWindowsRuntimeTypeName ___value1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m441912298(Guid_t  ___key0) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m1518512299() = 0;
};
// Windows.Foundation.Collections.IMap`2<System.String,System.Type>
struct NOVTABLE IMap_2_t918837879 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m3058979306(Il2CppHString ___key0, Il2CppWindowsRuntimeTypeName* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m732615070(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m3062070663(Il2CppHString ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m160940274(IMapView_2_t4018177723** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m610774430(Il2CppHString ___key0, Il2CppWindowsRuntimeTypeName ___value1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m3871291260(Il2CppHString ___key0) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m2457687352() = 0;
};
// System.DateTimeOffset[]
struct DateTimeOffsetU5BU5D_t3473357058  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DateTimeOffset_t3229287507  m_Items[1];

public:
	inline DateTimeOffset_t3229287507  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DateTimeOffset_t3229287507 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DateTimeOffset_t3229287507  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline DateTimeOffset_t3229287507  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DateTimeOffset_t3229287507 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DateTimeOffset_t3229287507  value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.IEnumerable`1<System.Collections.IEnumerable>[]
struct IEnumerable_1U5BU5D_t614637069  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Windows.Foundation.Point[]
struct PointU5BU5D_t724808658  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Point_t4164953539  m_Items[1];

public:
	inline Point_t4164953539  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Point_t4164953539 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Point_t4164953539  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Point_t4164953539  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Point_t4164953539 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Point_t4164953539  value)
	{
		m_Items[index] = value;
	}
};
// Windows.Foundation.Size[]
struct SizeU5BU5D_t1671914275  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Size_t550917638  m_Items[1];

public:
	inline Size_t550917638  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Size_t550917638 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Size_t550917638  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Size_t550917638  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Size_t550917638 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Size_t550917638  value)
	{
		m_Items[index] = value;
	}
};
// Windows.Foundation.Rect[]
struct RectU5BU5D_t5657558  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Rect_t2695113487  m_Items[1];

public:
	inline Rect_t2695113487  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Rect_t2695113487 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Rect_t2695113487  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Rect_t2695113487  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Rect_t2695113487 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Rect_t2695113487  value)
	{
		m_Items[index] = value;
	}
};
// Windows.Foundation.IWwwFormUrlDecoderEntry[]
struct IWwwFormUrlDecoderEntryU5BU5D_t40345143  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.DateTimeOffset>::.ctor(System.Collections.Generic.IList`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyCollection_1__ctor_m1456287906_gshared (ReadOnlyCollection_1_t146896498 * __this, RuntimeObject* ___list0, const RuntimeMethod* method);
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::.ctor(System.Collections.Generic.IList`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyCollection_1__ctor_m2122524688_gshared (ReadOnlyCollection_1_t4292682451 * __this, RuntimeObject* ___list0, const RuntimeMethod* method);
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Windows.Foundation.Point>::.ctor(System.Collections.Generic.IList`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyCollection_1__ctor_m3612700832_gshared (ReadOnlyCollection_1_t1082562530 * __this, RuntimeObject* ___list0, const RuntimeMethod* method);
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Windows.Foundation.Size>::.ctor(System.Collections.Generic.IList`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyCollection_1__ctor_m3697313193_gshared (ReadOnlyCollection_1_t1763493925 * __this, RuntimeObject* ___list0, const RuntimeMethod* method);
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Windows.Foundation.Rect>::.ctor(System.Collections.Generic.IList`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyCollection_1__ctor_m906551492_gshared (ReadOnlyCollection_1_t3907689774 * __this, RuntimeObject* ___list0, const RuntimeMethod* method);
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyDictionary_2__ctor_m3044404427_gshared (ReadOnlyDictionary_2_t3426852175 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
extern "C" IL2CPP_METHOD_ATTR void ConstantSplittableMap_2__ctor_m4259417880_gshared (ConstantSplittableMap_2_t3958371967 * __this, RuntimeObject* ___data0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Object>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
extern "C" IL2CPP_METHOD_ATTR void ConstantSplittableMap_2_Split_m2998943571_gshared (ConstantSplittableMap_2_t3958371967 * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_m4184817181_gshared (KeyValuePair_2_t2530217319 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m1132502692_gshared (KeyValuePair_2_t2530217319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Guid,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyDictionary_2__ctor_m2119190349_gshared (ReadOnlyDictionary_2_t1128463424 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Guid,System.Object>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
extern "C" IL2CPP_METHOD_ATTR void ConstantSplittableMap_2__ctor_m2413510944_gshared (ConstantSplittableMap_2_t1659983216 * __this, RuntimeObject* ___data0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Guid,System.Object>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
extern "C" IL2CPP_METHOD_ATTR void ConstantSplittableMap_2_Split_m3822801152_gshared (ConstantSplittableMap_2_t1659983216 * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>::get_Key()
extern "C" IL2CPP_METHOD_ATTR Guid_t  KeyValuePair_2_get_Key_m4294704491_gshared (KeyValuePair_2_t231828568 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>::get_Value()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m2666064688_gshared (KeyValuePair_2_t231828568 * __this, const RuntimeMethod* method);
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyDictionary_2__ctor_m3621257446_gshared (ReadOnlyDictionary_2_t968159222 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
extern "C" IL2CPP_METHOD_ATTR void ConstantSplittableMap_2__ctor_m3772921655_gshared (ConstantSplittableMap_2_t1499679014 * __this, RuntimeObject* ___data0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int32,System.Object>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
extern "C" IL2CPP_METHOD_ATTR void ConstantSplittableMap_2_Split_m2176297438_gshared (ConstantSplittableMap_2_t1499679014 * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
extern "C" IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m4191308393_gshared (KeyValuePair_2_t71524366 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m595908462_gshared (KeyValuePair_2_t71524366 * __this, const RuntimeMethod* method);
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyDictionary_2__ctor_m965872150_gshared (ReadOnlyDictionary_2_t3297691764 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
extern "C" IL2CPP_METHOD_ATTR void ConstantSplittableMap_2__ctor_m2528261516_gshared (ConstantSplittableMap_2_t3829211556 * __this, RuntimeObject* ___data0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Int32>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
extern "C" IL2CPP_METHOD_ATTR void ConstantSplittableMap_2_Split_m1776544164_gshared (ConstantSplittableMap_2_t3829211556 * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Key()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_m1218836954_gshared (KeyValuePair_2_t2401056908 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Value_m755756747_gshared (KeyValuePair_2_t2401056908 * __this, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Key()
extern "C" IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m2635782095_gshared (KeyValuePair_2_t4237331251 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Value_m1804680087_gshared (KeyValuePair_2_t4237331251 * __this, const RuntimeMethod* method);
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyDictionary_2__ctor_m4089905679_gshared (ReadOnlyDictionary_2_t444033976 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
extern "C" IL2CPP_METHOD_ATTR void ConstantSplittableMap_2__ctor_m1584615223_gshared (ConstantSplittableMap_2_t975553768 * __this, RuntimeObject* ___data0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Boolean>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
extern "C" IL2CPP_METHOD_ATTR void ConstantSplittableMap_2_Split_m3318364013_gshared (ConstantSplittableMap_2_t975553768 * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Key()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_m2106922848_gshared (KeyValuePair_2_t3842366416 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Value()
extern "C" IL2CPP_METHOD_ATTR bool KeyValuePair_2_get_Value_m1669764045_gshared (KeyValuePair_2_t3842366416 * __this, const RuntimeMethod* method);

// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.DateTimeOffset>::.ctor(System.Collections.Generic.IList`1<T>)
inline void ReadOnlyCollection_1__ctor_m1456287906 (ReadOnlyCollection_1_t146896498 * __this, RuntimeObject* ___list0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyCollection_1_t146896498 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1__ctor_m1456287906_gshared)(__this, ___list0, method);
}
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m282481429 (ArgumentOutOfRangeException_t777629997 * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.DateTimeOffset System.DateTimeOffset::ToLocalTime(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR DateTimeOffset_t3229287507  DateTimeOffset_ToLocalTime_m1141180670 (DateTimeOffset_t3229287507 * __this, bool ___throwOnOverflow0, const RuntimeMethod* method);
// System.Boolean System.DateTimeOffset::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool DateTimeOffset_Equals_m3030958070 (DateTimeOffset_t3229287507 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m237278729 (InvalidOperationException_t56020091 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Exception::set_HResult(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Exception_set_HResult_m3489164646 (Exception_t * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m3628145864 (ArgumentOutOfRangeException_t777629997 * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IEnumerable`1<System.Collections.IEnumerable>>::.ctor(System.Collections.Generic.IList`1<T>)
inline void ReadOnlyCollection_1__ctor_m1119069447 (ReadOnlyCollection_1_t2133597187 * __this, RuntimeObject* ___list0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyCollection_1_t2133597187 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1__ctor_m2122524688_gshared)(__this, ___list0, method);
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Windows.Foundation.Point>::.ctor(System.Collections.Generic.IList`1<T>)
inline void ReadOnlyCollection_1__ctor_m3612700832 (ReadOnlyCollection_1_t1082562530 * __this, RuntimeObject* ___list0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyCollection_1_t1082562530 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1__ctor_m3612700832_gshared)(__this, ___list0, method);
}
// System.Boolean Windows.Foundation.Point::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Point_Equals_m1617877981 (Point_t4164953539 * __this, RuntimeObject * ___o0, const RuntimeMethod* method);
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Windows.Foundation.Size>::.ctor(System.Collections.Generic.IList`1<T>)
inline void ReadOnlyCollection_1__ctor_m3697313193 (ReadOnlyCollection_1_t1763493925 * __this, RuntimeObject* ___list0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyCollection_1_t1763493925 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1__ctor_m3697313193_gshared)(__this, ___list0, method);
}
// System.Boolean Windows.Foundation.Size::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Size_Equals_m1950794187 (Size_t550917638 * __this, RuntimeObject * ___o0, const RuntimeMethod* method);
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Windows.Foundation.Rect>::.ctor(System.Collections.Generic.IList`1<T>)
inline void ReadOnlyCollection_1__ctor_m906551492 (ReadOnlyCollection_1_t3907689774 * __this, RuntimeObject* ___list0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyCollection_1_t3907689774 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1__ctor_m906551492_gshared)(__this, ___list0, method);
}
// System.Boolean Windows.Foundation.Rect::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Rect_Equals_m2314324014 (Rect_t2695113487 * __this, RuntimeObject * ___o0, const RuntimeMethod* method);
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::.ctor(System.Collections.Generic.IList`1<T>)
inline void ReadOnlyCollection_1__ctor_m337395851 (ReadOnlyCollection_1_t4155876257 * __this, RuntimeObject* ___list0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyCollection_1_t4155876257 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1__ctor_m2122524688_gshared)(__this, ___list0, method);
}
// System.Void System.Collections.Generic.KeyNotFoundException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void KeyNotFoundException__ctor_m2696589580 (KeyNotFoundException_t2292407383 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,System.String>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
inline void ReadOnlyDictionary_2__ctor_m461640262 (ReadOnlyDictionary_2_t632046715 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyDictionary_2_t632046715 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_m3044404427_gshared)(__this, ___dictionary0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.String,System.String>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
inline void ConstantSplittableMap_2__ctor_m2462269511 (ConstantSplittableMap_2_t1163566507 * __this, RuntimeObject* ___data0, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_t1163566507 *, RuntimeObject*, const RuntimeMethod*))ConstantSplittableMap_2__ctor_m4259417880_gshared)(__this, ___data0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.String,System.String>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
inline void ConstantSplittableMap_2_Split_m890587491 (ConstantSplittableMap_2_t1163566507 * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_t1163566507 *, RuntimeObject**, RuntimeObject**, const RuntimeMethod*))ConstantSplittableMap_2_Split_m2998943571_gshared)(__this, ___firstPartition0, ___secondPartition1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
inline RuntimeObject * KeyValuePair_2_get_Key_m4184817181 (KeyValuePair_2_t2530217319 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (KeyValuePair_2_t2530217319 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m4184817181_gshared)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
inline RuntimeObject * KeyValuePair_2_get_Value_m1132502692 (KeyValuePair_2_t2530217319 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (KeyValuePair_2_t2530217319 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m1132502692_gshared)(__this, method);
}
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
inline void ReadOnlyDictionary_2__ctor_m3044404427 (ReadOnlyDictionary_2_t3426852175 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyDictionary_2_t3426852175 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_m3044404427_gshared)(__this, ___dictionary0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
inline void ConstantSplittableMap_2__ctor_m4259417880 (ConstantSplittableMap_2_t3958371967 * __this, RuntimeObject* ___data0, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_t3958371967 *, RuntimeObject*, const RuntimeMethod*))ConstantSplittableMap_2__ctor_m4259417880_gshared)(__this, ___data0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Object>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
inline void ConstantSplittableMap_2_Split_m2998943571 (ConstantSplittableMap_2_t3958371967 * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_t3958371967 *, RuntimeObject**, RuntimeObject**, const RuntimeMethod*))ConstantSplittableMap_2_Split_m2998943571_gshared)(__this, ___firstPartition0, ___secondPartition1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m865914345 (KeyValuePair_2_t4030379155 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t4030379155 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m4184817181_gshared)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_m1897740815 (KeyValuePair_2_t4030379155 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t4030379155 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m1132502692_gshared)(__this, method);
}
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Guid,System.Type>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
inline void ReadOnlyDictionary_2__ctor_m3720374228 (ReadOnlyDictionary_2_t532302020 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyDictionary_2_t532302020 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_m2119190349_gshared)(__this, ___dictionary0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Guid,System.Type>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
inline void ConstantSplittableMap_2__ctor_m4057205974 (ConstantSplittableMap_2_t1063821812 * __this, RuntimeObject* ___data0, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_t1063821812 *, RuntimeObject*, const RuntimeMethod*))ConstantSplittableMap_2__ctor_m2413510944_gshared)(__this, ___data0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Guid,System.Type>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
inline void ConstantSplittableMap_2_Split_m4122198191 (ConstantSplittableMap_2_t1063821812 * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_t1063821812 *, RuntimeObject**, RuntimeObject**, const RuntimeMethod*))ConstantSplittableMap_2_Split_m3822801152_gshared)(__this, ___firstPartition0, ___secondPartition1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>::get_Key()
inline Guid_t  KeyValuePair_2_get_Key_m4294704491 (KeyValuePair_2_t231828568 * __this, const RuntimeMethod* method)
{
	return ((  Guid_t  (*) (KeyValuePair_2_t231828568 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m4294704491_gshared)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>::get_Value()
inline RuntimeObject * KeyValuePair_2_get_Value_m2666064688 (KeyValuePair_2_t231828568 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (KeyValuePair_2_t231828568 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m2666064688_gshared)(__this, method);
}
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Guid,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
inline void ReadOnlyDictionary_2__ctor_m2119190349 (ReadOnlyDictionary_2_t1128463424 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyDictionary_2_t1128463424 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_m2119190349_gshared)(__this, ___dictionary0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Guid,System.Object>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
inline void ConstantSplittableMap_2__ctor_m2413510944 (ConstantSplittableMap_2_t1659983216 * __this, RuntimeObject* ___data0, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_t1659983216 *, RuntimeObject*, const RuntimeMethod*))ConstantSplittableMap_2__ctor_m2413510944_gshared)(__this, ___data0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Guid,System.Object>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
inline void ConstantSplittableMap_2_Split_m3822801152 (ConstantSplittableMap_2_t1659983216 * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_t1659983216 *, RuntimeObject**, RuntimeObject**, const RuntimeMethod*))ConstantSplittableMap_2_Split_m3822801152_gshared)(__this, ___firstPartition0, ___secondPartition1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Guid,System.Type>::get_Key()
inline Guid_t  KeyValuePair_2_get_Key_m1325471274 (KeyValuePair_2_t3930634460 * __this, const RuntimeMethod* method)
{
	return ((  Guid_t  (*) (KeyValuePair_2_t3930634460 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m4294704491_gshared)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Guid,System.Type>::get_Value()
inline Type_t * KeyValuePair_2_get_Value_m859821292 (KeyValuePair_2_t3930634460 * __this, const RuntimeMethod* method)
{
	return ((  Type_t * (*) (KeyValuePair_2_t3930634460 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m2666064688_gshared)(__this, method);
}
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Int32,System.String>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
inline void ReadOnlyDictionary_2__ctor_m4155330511 (ReadOnlyDictionary_2_t4030471043 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyDictionary_2_t4030471043 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_m3621257446_gshared)(__this, ___dictionary0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int32,System.String>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
inline void ConstantSplittableMap_2__ctor_m1053382043 (ConstantSplittableMap_2_t267023539 * __this, RuntimeObject* ___data0, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_t267023539 *, RuntimeObject*, const RuntimeMethod*))ConstantSplittableMap_2__ctor_m3772921655_gshared)(__this, ___data0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int32,System.String>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
inline void ConstantSplittableMap_2_Split_m4128904398 (ConstantSplittableMap_2_t267023539 * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_t267023539 *, RuntimeObject**, RuntimeObject**, const RuntimeMethod*))ConstantSplittableMap_2_Split_m2176297438_gshared)(__this, ___firstPartition0, ___secondPartition1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
inline int32_t KeyValuePair_2_get_Key_m4191308393 (KeyValuePair_2_t71524366 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_t71524366 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m4191308393_gshared)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
inline RuntimeObject * KeyValuePair_2_get_Value_m595908462 (KeyValuePair_2_t71524366 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (KeyValuePair_2_t71524366 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m595908462_gshared)(__this, method);
}
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
inline void ReadOnlyDictionary_2__ctor_m3621257446 (ReadOnlyDictionary_2_t968159222 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyDictionary_2_t968159222 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_m3621257446_gshared)(__this, ___dictionary0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
inline void ConstantSplittableMap_2__ctor_m3772921655 (ConstantSplittableMap_2_t1499679014 * __this, RuntimeObject* ___data0, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_t1499679014 *, RuntimeObject*, const RuntimeMethod*))ConstantSplittableMap_2__ctor_m3772921655_gshared)(__this, ___data0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int32,System.Object>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
inline void ConstantSplittableMap_2_Split_m2176297438 (ConstantSplittableMap_2_t1499679014 * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_t1499679014 *, RuntimeObject**, RuntimeObject**, const RuntimeMethod*))ConstantSplittableMap_2_Split_m2176297438_gshared)(__this, ___firstPartition0, ___secondPartition1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.String>::get_Key()
inline int32_t KeyValuePair_2_get_Key_m4022343918 (KeyValuePair_2_t3133836187 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_t3133836187 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m4191308393_gshared)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_m200640467 (KeyValuePair_2_t3133836187 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t3133836187 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m595908462_gshared)(__this, method);
}
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
inline void ReadOnlyDictionary_2__ctor_m3912726125 (ReadOnlyDictionary_2_t1864702190 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyDictionary_2_t1864702190 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_m3044404427_gshared)(__this, ___dictionary0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.String,System.Object>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
inline void ConstantSplittableMap_2__ctor_m245620443 (ConstantSplittableMap_2_t2396221982 * __this, RuntimeObject* ___data0, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_t2396221982 *, RuntimeObject*, const RuntimeMethod*))ConstantSplittableMap_2__ctor_m4259417880_gshared)(__this, ___data0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.String,System.Object>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
inline void ConstantSplittableMap_2_Split_m1997543296 (ConstantSplittableMap_2_t2396221982 * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_t2396221982 *, RuntimeObject**, RuntimeObject**, const RuntimeMethod*))ConstantSplittableMap_2_Split_m2998943571_gshared)(__this, ___firstPartition0, ___secondPartition1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m913496574 (KeyValuePair_2_t968067334 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t968067334 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m4184817181_gshared)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Value()
inline RuntimeObject * KeyValuePair_2_get_Value_m2459323959 (KeyValuePair_2_t968067334 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (KeyValuePair_2_t968067334 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m1132502692_gshared)(__this, method);
}
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
inline void ReadOnlyDictionary_2__ctor_m2131144993 (ReadOnlyDictionary_2_t1735541779 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyDictionary_2_t1735541779 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_m965872150_gshared)(__this, ___dictionary0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.String,System.Int32>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
inline void ConstantSplittableMap_2__ctor_m2347350877 (ConstantSplittableMap_2_t2267061571 * __this, RuntimeObject* ___data0, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_t2267061571 *, RuntimeObject*, const RuntimeMethod*))ConstantSplittableMap_2__ctor_m2528261516_gshared)(__this, ___data0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.String,System.Int32>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
inline void ConstantSplittableMap_2_Split_m3256786513 (ConstantSplittableMap_2_t2267061571 * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_t2267061571 *, RuntimeObject**, RuntimeObject**, const RuntimeMethod*))ConstantSplittableMap_2_Split_m1776544164_gshared)(__this, ___firstPartition0, ___secondPartition1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Key()
inline RuntimeObject * KeyValuePair_2_get_Key_m1218836954 (KeyValuePair_2_t2401056908 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (KeyValuePair_2_t2401056908 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1218836954_gshared)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Value()
inline int32_t KeyValuePair_2_get_Value_m755756747 (KeyValuePair_2_t2401056908 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_t2401056908 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m755756747_gshared)(__this, method);
}
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
inline void ReadOnlyDictionary_2__ctor_m965872150 (ReadOnlyDictionary_2_t3297691764 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyDictionary_2_t3297691764 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_m965872150_gshared)(__this, ___dictionary0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
inline void ConstantSplittableMap_2__ctor_m2528261516 (ConstantSplittableMap_2_t3829211556 * __this, RuntimeObject* ___data0, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_t3829211556 *, RuntimeObject*, const RuntimeMethod*))ConstantSplittableMap_2__ctor_m2528261516_gshared)(__this, ___data0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Int32>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
inline void ConstantSplittableMap_2_Split_m1776544164 (ConstantSplittableMap_2_t3829211556 * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_t3829211556 *, RuntimeObject**, RuntimeObject**, const RuntimeMethod*))ConstantSplittableMap_2_Split_m1776544164_gshared)(__this, ___firstPartition0, ___secondPartition1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m3340370308 (KeyValuePair_2_t838906923 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t838906923 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1218836954_gshared)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>::get_Value()
inline int32_t KeyValuePair_2_get_Value_m692097207 (KeyValuePair_2_t838906923 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_t838906923 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m755756747_gshared)(__this, method);
}
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,System.Type>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
inline void ReadOnlyDictionary_2__ctor_m515128087 (ReadOnlyDictionary_2_t1268540786 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyDictionary_2_t1268540786 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_m3044404427_gshared)(__this, ___dictionary0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.String,System.Type>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
inline void ConstantSplittableMap_2__ctor_m137017575 (ConstantSplittableMap_2_t1800060578 * __this, RuntimeObject* ___data0, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_t1800060578 *, RuntimeObject*, const RuntimeMethod*))ConstantSplittableMap_2__ctor_m4259417880_gshared)(__this, ___data0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.String,System.Type>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
inline void ConstantSplittableMap_2_Split_m3390560063 (ConstantSplittableMap_2_t1800060578 * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_t1800060578 *, RuntimeObject**, RuntimeObject**, const RuntimeMethod*))ConstantSplittableMap_2_Split_m2998943571_gshared)(__this, ___firstPartition0, ___secondPartition1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.Type>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m2656778124 (KeyValuePair_2_t371905930 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t371905930 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m4184817181_gshared)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.Type>::get_Value()
inline Type_t * KeyValuePair_2_get_Value_m2097707521 (KeyValuePair_2_t371905930 * __this, const RuntimeMethod* method)
{
	return ((  Type_t * (*) (KeyValuePair_2_t371905930 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m1132502692_gshared)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Key()
inline int32_t KeyValuePair_2_get_Key_m2635782095 (KeyValuePair_2_t4237331251 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_t4237331251 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m2635782095_gshared)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Value()
inline int32_t KeyValuePair_2_get_Value_m1804680087 (KeyValuePair_2_t4237331251 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_t4237331251 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m1804680087_gshared)(__this, method);
}
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
inline void ReadOnlyDictionary_2__ctor_m1629022071 (ReadOnlyDictionary_2_t3176851287 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyDictionary_2_t3176851287 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_m4089905679_gshared)(__this, ___dictionary0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.String,System.Boolean>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
inline void ConstantSplittableMap_2__ctor_m1702516145 (ConstantSplittableMap_2_t3708371079 * __this, RuntimeObject* ___data0, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_t3708371079 *, RuntimeObject*, const RuntimeMethod*))ConstantSplittableMap_2__ctor_m1584615223_gshared)(__this, ___data0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.String,System.Boolean>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
inline void ConstantSplittableMap_2_Split_m3288519233 (ConstantSplittableMap_2_t3708371079 * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_t3708371079 *, RuntimeObject**, RuntimeObject**, const RuntimeMethod*))ConstantSplittableMap_2_Split_m3318364013_gshared)(__this, ___firstPartition0, ___secondPartition1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Key()
inline RuntimeObject * KeyValuePair_2_get_Key_m2106922848 (KeyValuePair_2_t3842366416 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (KeyValuePair_2_t3842366416 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m2106922848_gshared)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Value()
inline bool KeyValuePair_2_get_Value_m1669764045 (KeyValuePair_2_t3842366416 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (KeyValuePair_2_t3842366416 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m1669764045_gshared)(__this, method);
}
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
inline void ReadOnlyDictionary_2__ctor_m4089905679 (ReadOnlyDictionary_2_t444033976 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyDictionary_2_t444033976 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_m4089905679_gshared)(__this, ___dictionary0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
inline void ConstantSplittableMap_2__ctor_m1584615223 (ConstantSplittableMap_2_t975553768 * __this, RuntimeObject* ___data0, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_t975553768 *, RuntimeObject*, const RuntimeMethod*))ConstantSplittableMap_2__ctor_m1584615223_gshared)(__this, ___data0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Boolean>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
inline void ConstantSplittableMap_2_Split_m3318364013 (ConstantSplittableMap_2_t975553768 * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_t975553768 *, RuntimeObject**, RuntimeObject**, const RuntimeMethod*))ConstantSplittableMap_2_Split_m3318364013_gshared)(__this, ___firstPartition0, ___secondPartition1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m1816659530 (KeyValuePair_2_t2280216431 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t2280216431 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m2106922848_gshared)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>::get_Value()
inline bool KeyValuePair_2_get_Value_m608750205 (KeyValuePair_2_t2280216431 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (KeyValuePair_2_t2280216431 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m1669764045_gshared)(__this, method);
}
// Projected COM callable wrapper method for T Windows.Foundation.Collections.IVector`1<System.DateTimeOffset>::GetAt(System.UInt32)
il2cpp_hresult_t IVector_1_GetAt_m3254412450_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, DateTime_t1679451545 * comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetAt_m3254412450_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	DateTimeOffset_t3229287507  returnValue;
	try
	{
		try
		{
			returnValue = InterfaceFuncInvoker1< DateTimeOffset_t3229287507 , int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.DateTimeOffset>::get_Item(System.Int32) */, IList_1_t749639994_il2cpp_TypeInfo_var, __this, ___index0);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			if (IsInst(ex.ex, ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var))
			{
				ex.ex->hresult = -2147483637; // E_BOUNDS
			}

			throw;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	DateTime_t1679451545  _returnValue_marshaled = {};
	(_returnValue_marshaled).set_UniversalTime_0((returnValue.get_m_dateTime_2().get_dateData_44() & 0x3FFFFFFFFFFFFFFF) - 504911232000000000);

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IVector`1<System.DateTimeOffset>::get_Size()
il2cpp_hresult_t IVector_1_get_Size_m3377152281_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_get_Size_m3377152281_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.DateTimeOffset>::get_Count() */, ICollection_1_t1762472445_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Collections.Generic.IReadOnlyList`1<T> Windows.Foundation.Collections.IVector`1<System.DateTimeOffset>::GetView()
il2cpp_hresult_t IVector_1_GetView_m1062446282_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IVectorView_1_t2568152769** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetView_m1062446282_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		RuntimeObject* __thisValue = __this;
		if (IsInst(__thisValue, IReadOnlyList_1_t3793710413_il2cpp_TypeInfo_var))
		{
			returnValue = __thisValue;
		}
		else
		{
			ReadOnlyCollection_1_t146896498 * readOnlyCollection = (ReadOnlyCollection_1_t146896498*)il2cpp_codegen_object_new(ReadOnlyCollection_1_t146896498_il2cpp_TypeInfo_var);
			ReadOnlyCollection_1__ctor_m1456287906(readOnlyCollection, __thisValue, ReadOnlyCollection_1__ctor_m1456287906_RuntimeMethod_var);
			returnValue = readOnlyCollection;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IVectorView_1_t2568152769* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(IVectorView_1_t2568152769::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IVectorView_1_t2568152769>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IVector`1<System.DateTimeOffset>::IndexOf(T,System.UInt32&)
il2cpp_hresult_t IVector_1_IndexOf_m1294821683_ComCallableWrapperProjectedMethod(RuntimeObject* __this, DateTime_t1679451545  ___value0, uint32_t* ___index1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_IndexOf_m1294821683_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___value0' to managed representation
	DateTimeOffset_t3229287507  ____value0_unmarshaled;
	memset(&____value0_unmarshaled, 0, sizeof(____value0_unmarshaled));
	if ((___value0).get_UniversalTime_0() < -504911232000000000 || (___value0).get_UniversalTime_0() > 2650467743999999999)
	{
		ArgumentOutOfRangeException_t777629997 * exception = (ArgumentOutOfRangeException_t777629997*)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(exception, _stringLiteral4286223022, _stringLiteral311452336, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(exception, NULL, NULL);
	}

	DateTimeOffset_t3229287507  ____value0_unmarshaledStaging;
	DateTime_t3738529785  ____value0_unmarshaledDateTime;
	____value0_unmarshaledDateTime.set_dateData_44((___value0).get_UniversalTime_0() + 504911232000000000);
	____value0_unmarshaledStaging.set_m_dateTime_2(____value0_unmarshaledDateTime);
	____value0_unmarshaledStaging.set_m_offsetMinutes_3(0);
	____value0_unmarshaled = DateTimeOffset_ToLocalTime_m1141180670((&____value0_unmarshaledStaging), true, NULL);;

	// Marshaling of parameter '___index1' to managed representation
	uint32_t ____index1_empty = 0;

	// Managed method invocation
	bool returnValue;
	try
	{
		____index1_empty = 0;
		returnValue = false;

		int elementsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.DateTimeOffset>::get_Count() */, ICollection_1_t1762472445_il2cpp_TypeInfo_var, __this);
		for (int i = 0; i < elementsInCollection; i++)
		{
			DateTimeOffset_t3229287507  item = InterfaceFuncInvoker1< DateTimeOffset_t3229287507 , int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.DateTimeOffset>::get_Item(System.Int32) */, IList_1_t749639994_il2cpp_TypeInfo_var, __this, i);
			if (DateTimeOffset_Equals_m3030958070((&item), Box(DateTimeOffset_t3229287507_il2cpp_TypeInfo_var, &____value0_unmarshaled), NULL))
			{
				____index1_empty = static_cast<uint32_t>(i);
				returnValue = true;
				break;
			}
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter '___index1' back from managed representation
	*___index1 = ____index1_empty;

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IVector`1<System.DateTimeOffset>::SetAt(System.UInt32,T)
il2cpp_hresult_t IVector_1_SetAt_m60350146_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, DateTime_t1679451545  ___value1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_SetAt_m60350146_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___value1' to managed representation
	DateTimeOffset_t3229287507  ____value1_unmarshaled;
	memset(&____value1_unmarshaled, 0, sizeof(____value1_unmarshaled));
	if ((___value1).get_UniversalTime_0() < -504911232000000000 || (___value1).get_UniversalTime_0() > 2650467743999999999)
	{
		ArgumentOutOfRangeException_t777629997 * exception = (ArgumentOutOfRangeException_t777629997*)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(exception, _stringLiteral4286223022, _stringLiteral311452336, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(exception, NULL, NULL);
	}

	DateTimeOffset_t3229287507  ____value1_unmarshaledStaging;
	DateTime_t3738529785  ____value1_unmarshaledDateTime;
	____value1_unmarshaledDateTime.set_dateData_44((___value1).get_UniversalTime_0() + 504911232000000000);
	____value1_unmarshaledStaging.set_m_dateTime_2(____value1_unmarshaledDateTime);
	____value1_unmarshaledStaging.set_m_offsetMinutes_3(0);
	____value1_unmarshaled = DateTimeOffset_ToLocalTime_m1141180670((&____value1_unmarshaledStaging), true, NULL);;

	// Managed method invocation
	try
	{
		try
		{
			InterfaceActionInvoker2< int32_t, DateTimeOffset_t3229287507  >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<System.DateTimeOffset>::set_Item(System.Int32,T) */, IList_1_t749639994_il2cpp_TypeInfo_var, __this, ___index0, ____value1_unmarshaled);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			if (IsInst(ex.ex, ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var))
			{
				ex.ex->hresult = -2147483637; // E_BOUNDS
			}

			throw;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IVector`1<System.DateTimeOffset>::InsertAt(System.UInt32,T)
il2cpp_hresult_t IVector_1_InsertAt_m3629928755_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, DateTime_t1679451545  ___value1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_InsertAt_m3629928755_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___value1' to managed representation
	DateTimeOffset_t3229287507  ____value1_unmarshaled;
	memset(&____value1_unmarshaled, 0, sizeof(____value1_unmarshaled));
	if ((___value1).get_UniversalTime_0() < -504911232000000000 || (___value1).get_UniversalTime_0() > 2650467743999999999)
	{
		ArgumentOutOfRangeException_t777629997 * exception = (ArgumentOutOfRangeException_t777629997*)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(exception, _stringLiteral4286223022, _stringLiteral311452336, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(exception, NULL, NULL);
	}

	DateTimeOffset_t3229287507  ____value1_unmarshaledStaging;
	DateTime_t3738529785  ____value1_unmarshaledDateTime;
	____value1_unmarshaledDateTime.set_dateData_44((___value1).get_UniversalTime_0() + 504911232000000000);
	____value1_unmarshaledStaging.set_m_dateTime_2(____value1_unmarshaledDateTime);
	____value1_unmarshaledStaging.set_m_offsetMinutes_3(0);
	____value1_unmarshaled = DateTimeOffset_ToLocalTime_m1141180670((&____value1_unmarshaledStaging), true, NULL);;

	// Managed method invocation
	try
	{
		try
		{
			InterfaceActionInvoker2< int32_t, DateTimeOffset_t3229287507  >::Invoke(3 /* System.Void System.Collections.Generic.IList`1<System.DateTimeOffset>::Insert(System.Int32,T) */, IList_1_t749639994_il2cpp_TypeInfo_var, __this, ___index0, ____value1_unmarshaled);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			if (IsInst(ex.ex, ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var))
			{
				ex.ex->hresult = -2147483637; // E_BOUNDS
			}

			throw;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IVector`1<System.DateTimeOffset>::RemoveAt(System.UInt32)
il2cpp_hresult_t IVector_1_RemoveAt_m2821918640_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_RemoveAt_m2821918640_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		try
		{
			InterfaceActionInvoker1< int32_t >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<System.DateTimeOffset>::RemoveAt(System.Int32) */, IList_1_t749639994_il2cpp_TypeInfo_var, __this, ___index0);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			if (IsInst(ex.ex, ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var))
			{
				ex.ex->hresult = -2147483637; // E_BOUNDS
			}

			throw;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IVector`1<System.DateTimeOffset>::Append(T)
il2cpp_hresult_t IVector_1_Append_m3775858658_ComCallableWrapperProjectedMethod(RuntimeObject* __this, DateTime_t1679451545  ___value0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_Append_m3775858658_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___value0' to managed representation
	DateTimeOffset_t3229287507  ____value0_unmarshaled;
	memset(&____value0_unmarshaled, 0, sizeof(____value0_unmarshaled));
	if ((___value0).get_UniversalTime_0() < -504911232000000000 || (___value0).get_UniversalTime_0() > 2650467743999999999)
	{
		ArgumentOutOfRangeException_t777629997 * exception = (ArgumentOutOfRangeException_t777629997*)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(exception, _stringLiteral4286223022, _stringLiteral311452336, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(exception, NULL, NULL);
	}

	DateTimeOffset_t3229287507  ____value0_unmarshaledStaging;
	DateTime_t3738529785  ____value0_unmarshaledDateTime;
	____value0_unmarshaledDateTime.set_dateData_44((___value0).get_UniversalTime_0() + 504911232000000000);
	____value0_unmarshaledStaging.set_m_dateTime_2(____value0_unmarshaledDateTime);
	____value0_unmarshaledStaging.set_m_offsetMinutes_3(0);
	____value0_unmarshaled = DateTimeOffset_ToLocalTime_m1141180670((&____value0_unmarshaledStaging), true, NULL);;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker1< DateTimeOffset_t3229287507  >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.DateTimeOffset>::Add(T) */, ICollection_1_t1762472445_il2cpp_TypeInfo_var, __thisValue, ____value0_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IVector`1<System.DateTimeOffset>::RemoveAtEnd()
il2cpp_hresult_t IVector_1_RemoveAtEnd_m1446419325_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_RemoveAtEnd_m1446419325_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		int32_t itemsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.DateTimeOffset>::get_Count() */, ICollection_1_t1762472445_il2cpp_TypeInfo_var, __thisValue);
		if (itemsInCollection == 0)
		{
			InvalidOperationException_t56020091 * exception = (InvalidOperationException_t56020091*)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
			InvalidOperationException__ctor_m237278729(exception, _stringLiteral1050527596, NULL);
			Exception_set_HResult_m3489164646(exception, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(exception, NULL, NULL);
		}
		InterfaceActionInvoker1< int32_t >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<System.DateTimeOffset>::RemoveAt(System.Int32) */, IList_1_t749639994_il2cpp_TypeInfo_var, __thisValue, itemsInCollection - 1);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IVector`1<System.DateTimeOffset>::Clear()
il2cpp_hresult_t IVector_1_Clear_m1953971700_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_Clear_m1953971700_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.DateTimeOffset>::Clear() */, ICollection_1_t1762472445_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IVector`1<System.DateTimeOffset>::GetMany(System.UInt32,T[])
il2cpp_hresult_t IVector_1_GetMany_m3458941667_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, DateTime_t1679451545 * ___items1, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetMany_m3458941667_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		uint32_t elementsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.DateTimeOffset>::get_Count() */, ICollection_1_t1762472445_il2cpp_TypeInfo_var, __this);
		if (___startIndex0 != elementsInCollection && ___items1 != NULL)
		{
			if (___startIndex0 > elementsInCollection || ___startIndex0 > 2147483647)
			{
				ArgumentOutOfRangeException_t777629997 * exception = (ArgumentOutOfRangeException_t777629997*)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
				ArgumentOutOfRangeException__ctor_m3628145864(exception, _stringLiteral797640427, NULL);
				Exception_set_HResult_m3489164646(exception, -2147483637, NULL); // E_BOUNDS
				IL2CPP_RAISE_MANAGED_EXCEPTION(exception, NULL, NULL);
			}
			returnValue = std::min(___items1ArraySize, elementsInCollection - ___startIndex0);
			for (uint32_t i = 0; i < returnValue; i++)
			{
				DateTimeOffset_t3229287507  itemManaged = InterfaceFuncInvoker1< DateTimeOffset_t3229287507 , int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.DateTimeOffset>::get_Item(System.Int32) */, IList_1_t749639994_il2cpp_TypeInfo_var, __this, i + ___startIndex0);
				(___items1[i]).set_UniversalTime_0((itemManaged.get_m_dateTime_2().get_dateData_44() & 0x3FFFFFFFFFFFFFFF) - 504911232000000000);
			}
		}
		else
		{
			returnValue = 0;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IVector`1<System.DateTimeOffset>::ReplaceAll(T[])
il2cpp_hresult_t IVector_1_ReplaceAll_m1854201827_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___items0ArraySize, DateTime_t1679451545 * ___items0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_ReplaceAll_m1854201827_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___items0' to managed representation
	DateTimeOffsetU5BU5D_t3473357058* ____items0_unmarshaled = NULL;
	if (___items0 != NULL)
	{
		if (____items0_unmarshaled == NULL)
		{
			____items0_unmarshaled = reinterpret_cast<DateTimeOffsetU5BU5D_t3473357058*>(SZArrayNew(DateTimeOffsetU5BU5D_t3473357058_il2cpp_TypeInfo_var, static_cast<int32_t>(___items0ArraySize)));
		}
		il2cpp_array_size_t _arrayLength = (____items0_unmarshaled)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			DateTimeOffset_t3229287507  ____items0_i__unmarshaled;
			memset(&____items0_i__unmarshaled, 0, sizeof(____items0_i__unmarshaled));
			if (((___items0)[i]).get_UniversalTime_0() < -504911232000000000 || ((___items0)[i]).get_UniversalTime_0() > 2650467743999999999)
			{
				ArgumentOutOfRangeException_t777629997 * exception = (ArgumentOutOfRangeException_t777629997*)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
				ArgumentOutOfRangeException__ctor_m282481429(exception, _stringLiteral4286223022, _stringLiteral311452336, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(exception, NULL, NULL);
			}

			DateTimeOffset_t3229287507  ____items0_i__unmarshaledStaging;
			DateTime_t3738529785  ____items0_i__unmarshaledDateTime;
			____items0_i__unmarshaledDateTime.set_dateData_44(((___items0)[i]).get_UniversalTime_0() + 504911232000000000);
			____items0_i__unmarshaledStaging.set_m_dateTime_2(____items0_i__unmarshaledDateTime);
			____items0_i__unmarshaledStaging.set_m_offsetMinutes_3(0);
			____items0_i__unmarshaled = DateTimeOffset_ToLocalTime_m1141180670((&____items0_i__unmarshaledStaging), true, NULL);;
			(____items0_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), ____items0_i__unmarshaled);
		}
	}

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.DateTimeOffset>::Clear() */, ICollection_1_t1762472445_il2cpp_TypeInfo_var, __thisValue);
		if (____items0_unmarshaled != NULL)
		{
			il2cpp_array_size_t itemsInCollection = ____items0_unmarshaled->max_length;
			for (il2cpp_array_size_t i = 0; i < itemsInCollection; i++)
			{
				InterfaceActionInvoker1< DateTimeOffset_t3229287507  >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.DateTimeOffset>::Add(T) */, ICollection_1_t1762472445_il2cpp_TypeInfo_var, __thisValue, (____items0_unmarshaled)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
			}
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Windows.Foundation.Collections.IIterator`1<System.DateTimeOffset> adapter
struct IIterator_1_t1103430980_Adapter IL2CPP_FINAL : il2cpp::vm::NonCachedCCWBase<IIterator_1_t1103430980_Adapter>, IIterator_1_t1103430980
{
	inline IIterator_1_t1103430980_Adapter(RuntimeObject* obj) : il2cpp::vm::NonCachedCCWBase<IIterator_1_t1103430980_Adapter>(obj), _initialized(false), _hasCurrent(false) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterator_1_t1103430980::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterator_1_t1103430980*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IIterator_1_t1103430980::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetRuntimeClassName(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}
	virtual il2cpp_hresult_t STDCALL IIterator_1_get_Current_m3227006710(DateTime_t1679451545 * comReturnValue) IL2CPP_OVERRIDE;
	virtual il2cpp_hresult_t STDCALL IIterator_1_get_HasCurrent_m57224880(bool* comReturnValue) IL2CPP_OVERRIDE;
	virtual il2cpp_hresult_t STDCALL IIterator_1_MoveNext_m1172097404(bool* comReturnValue) IL2CPP_OVERRIDE;
	virtual il2cpp_hresult_t STDCALL IIterator_1_GetMany_m875085322(uint32_t ___items0ArraySize, DateTime_t1679451545 * ___items0, uint32_t* comReturnValue) IL2CPP_OVERRIDE;
private:
	bool _initialized;
	bool _hasCurrent;
	il2cpp_hresult_t Initialize();
	il2cpp_hresult_t GetCurrent(DateTime_t1679451545 * comReturnValue);
	il2cpp_hresult_t MoveNext(bool* comReturnValue);
};
il2cpp_hresult_t IIterator_1_t1103430980_Adapter::IIterator_1_get_Current_m3227006710(DateTime_t1679451545 * comReturnValue)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;
	il2cpp_hresult_t hr = Initialize();
	if (IL2CPP_HR_FAILED(hr))
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		return hr;
	}
	return GetCurrent(comReturnValue);
}
il2cpp_hresult_t IIterator_1_t1103430980_Adapter::IIterator_1_get_HasCurrent_m57224880(bool* comReturnValue)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;
	il2cpp_hresult_t hr = Initialize();
	if (IL2CPP_HR_FAILED(hr))
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		return hr;
	}
	*comReturnValue = _hasCurrent;
	return IL2CPP_S_OK;
}
il2cpp_hresult_t IIterator_1_t1103430980_Adapter::IIterator_1_MoveNext_m1172097404(bool* comReturnValue)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;
	il2cpp_hresult_t hr = Initialize();
	if (IL2CPP_HR_FAILED(hr))
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		return hr;
	}
	hr = MoveNext(&_hasCurrent);
	*comReturnValue = _hasCurrent;
	return hr;
}
il2cpp_hresult_t IIterator_1_t1103430980_Adapter::IIterator_1_GetMany_m875085322(uint32_t ___items0ArraySize, DateTime_t1679451545 * ___items0, uint32_t* comReturnValue)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;
	il2cpp_hresult_t hr = Initialize();
	if (IL2CPP_HR_FAILED(hr))
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		return hr;
	}
	uint32_t count = 0;
	for (; _hasCurrent && (count < ___items0ArraySize); ++count)
	{
		hr = GetCurrent(___items0 + count);
		if (IL2CPP_HR_FAILED(hr))
		{
			*comReturnValue = count;
			return hr;
		}
		hr = MoveNext(&_hasCurrent);
		if (IL2CPP_HR_FAILED(hr))
		{
			*comReturnValue = count + 1;
			return hr;
		}
	}
	*comReturnValue = count;
	return IL2CPP_S_OK;
}
il2cpp_hresult_t IIterator_1_t1103430980_Adapter::Initialize()
{
	if (_initialized)
	{
		return IL2CPP_S_OK;
	}
	il2cpp_hresult_t hr = MoveNext(&_hasCurrent);
	_initialized = IL2CPP_HR_SUCCEEDED(hr);
	return hr;
}
il2cpp_hresult_t IIterator_1_t1103430980_Adapter::GetCurrent(DateTime_t1679451545 * comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IIterator_1_t1103430980_Adapter_GetCurrent_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	// Managed method invocation
	DateTimeOffset_t3229287507  returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)GetManagedObjectInline();
		returnValue = InterfaceFuncInvoker0< DateTimeOffset_t3229287507  >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.DateTimeOffset>::get_Current() */, IEnumerator_1_t3661857975_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return (ex.ex->hresult == IL2CPP_COR_E_INVALIDOPERATION) ? IL2CPP_E_BOUNDS : ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	DateTime_t1679451545  _returnValue_marshaled = {};
	(_returnValue_marshaled).set_UniversalTime_0((returnValue.get_m_dateTime_2().get_dateData_44() & 0x3FFFFFFFFFFFFFFF) - 504911232000000000);

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
il2cpp_hresult_t IIterator_1_t1103430980_Adapter::MoveNext(bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IIterator_1_t1103430980_Adapter_MoveNext_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)GetManagedObjectInline();
		returnValue = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for Windows.Foundation.Collections.IIterator`1<T> Windows.Foundation.Collections.IIterable`1<System.DateTimeOffset>::First()
il2cpp_hresult_t IIterable_1_First_m2198371330_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t1103430980** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IIterable_1_First_m2198371330_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* returnValue;
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.DateTimeOffset>::GetEnumerator() */, IEnumerable_1_t2209140396_il2cpp_TypeInfo_var, __thisValue);
		*comReturnValue = (returnValue != NULL) ? IIterator_1_t1103430980_Adapter::__CreateInstance(returnValue) : NULL;
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for T Windows.Foundation.Collections.IVectorView`1<System.DateTimeOffset>::GetAt(System.UInt32)
il2cpp_hresult_t IVectorView_1_GetAt_m1224151036_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, DateTime_t1679451545 * comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_GetAt_m1224151036_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	DateTimeOffset_t3229287507  returnValue;
	try
	{
		try
		{
			returnValue = InterfaceFuncInvoker1< DateTimeOffset_t3229287507 , int32_t >::Invoke(0 /* T System.Collections.Generic.IReadOnlyList`1<System.DateTimeOffset>::get_Item(System.Int32) */, IReadOnlyList_1_t3793710413_il2cpp_TypeInfo_var, __this, ___index0);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			if (IsInst(ex.ex, ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var))
			{
				ex.ex->hresult = -2147483637; // E_BOUNDS
			}

			throw;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	DateTime_t1679451545  _returnValue_marshaled = {};
	(_returnValue_marshaled).set_UniversalTime_0((returnValue.get_m_dateTime_2().get_dateData_44() & 0x3FFFFFFFFFFFFFFF) - 504911232000000000);

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IVectorView`1<System.DateTimeOffset>::get_Size()
il2cpp_hresult_t IVectorView_1_get_Size_m1566737220_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_get_Size_m1566737220_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.DateTimeOffset>::get_Count() */, IReadOnlyCollection_1_t3232403444_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IVectorView`1<System.DateTimeOffset>::IndexOf(T,System.UInt32&)
il2cpp_hresult_t IVectorView_1_IndexOf_m1513712387_ComCallableWrapperProjectedMethod(RuntimeObject* __this, DateTime_t1679451545  ___value0, uint32_t* ___index1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_IndexOf_m1513712387_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___value0' to managed representation
	DateTimeOffset_t3229287507  ____value0_unmarshaled;
	memset(&____value0_unmarshaled, 0, sizeof(____value0_unmarshaled));
	if ((___value0).get_UniversalTime_0() < -504911232000000000 || (___value0).get_UniversalTime_0() > 2650467743999999999)
	{
		ArgumentOutOfRangeException_t777629997 * exception = (ArgumentOutOfRangeException_t777629997*)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(exception, _stringLiteral4286223022, _stringLiteral311452336, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(exception, NULL, NULL);
	}

	DateTimeOffset_t3229287507  ____value0_unmarshaledStaging;
	DateTime_t3738529785  ____value0_unmarshaledDateTime;
	____value0_unmarshaledDateTime.set_dateData_44((___value0).get_UniversalTime_0() + 504911232000000000);
	____value0_unmarshaledStaging.set_m_dateTime_2(____value0_unmarshaledDateTime);
	____value0_unmarshaledStaging.set_m_offsetMinutes_3(0);
	____value0_unmarshaled = DateTimeOffset_ToLocalTime_m1141180670((&____value0_unmarshaledStaging), true, NULL);;

	// Marshaling of parameter '___index1' to managed representation
	uint32_t ____index1_empty = 0;

	// Managed method invocation
	bool returnValue;
	try
	{
		____index1_empty = 0;
		returnValue = false;

		int elementsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.DateTimeOffset>::get_Count() */, IReadOnlyCollection_1_t3232403444_il2cpp_TypeInfo_var, __this);
		for (int i = 0; i < elementsInCollection; i++)
		{
			DateTimeOffset_t3229287507  item = InterfaceFuncInvoker1< DateTimeOffset_t3229287507 , int32_t >::Invoke(0 /* T System.Collections.Generic.IReadOnlyList`1<System.DateTimeOffset>::get_Item(System.Int32) */, IReadOnlyList_1_t3793710413_il2cpp_TypeInfo_var, __this, i);
			if (DateTimeOffset_Equals_m3030958070((&item), Box(DateTimeOffset_t3229287507_il2cpp_TypeInfo_var, &____value0_unmarshaled), NULL))
			{
				____index1_empty = static_cast<uint32_t>(i);
				returnValue = true;
				break;
			}
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter '___index1' back from managed representation
	*___index1 = ____index1_empty;

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IVectorView`1<System.DateTimeOffset>::GetMany(System.UInt32,T[])
il2cpp_hresult_t IVectorView_1_GetMany_m1032517645_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, DateTime_t1679451545 * ___items1, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_GetMany_m1032517645_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		uint32_t elementsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.DateTimeOffset>::get_Count() */, IReadOnlyCollection_1_t3232403444_il2cpp_TypeInfo_var, __this);
		if (___startIndex0 != elementsInCollection && ___items1 != NULL)
		{
			if (___startIndex0 > elementsInCollection || ___startIndex0 > 2147483647)
			{
				ArgumentOutOfRangeException_t777629997 * exception = (ArgumentOutOfRangeException_t777629997*)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
				ArgumentOutOfRangeException__ctor_m3628145864(exception, _stringLiteral797640427, NULL);
				Exception_set_HResult_m3489164646(exception, -2147483637, NULL); // E_BOUNDS
				IL2CPP_RAISE_MANAGED_EXCEPTION(exception, NULL, NULL);
			}
			returnValue = std::min(___items1ArraySize, elementsInCollection - ___startIndex0);
			for (uint32_t i = 0; i < returnValue; i++)
			{
				DateTimeOffset_t3229287507  itemManaged = InterfaceFuncInvoker1< DateTimeOffset_t3229287507 , int32_t >::Invoke(0 /* T System.Collections.Generic.IReadOnlyList`1<System.DateTimeOffset>::get_Item(System.Int32) */, IReadOnlyList_1_t3793710413_il2cpp_TypeInfo_var, __this, i + ___startIndex0);
				(___items1[i]).set_UniversalTime_0((itemManaged.get_m_dateTime_2().get_dateData_44() & 0x3FFFFFFFFFFFFFFF) - 504911232000000000);
			}
		}
		else
		{
			returnValue = 0;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for T Windows.Foundation.Collections.IVectorView`1<System.Collections.Generic.IEnumerable`1<System.Collections.IEnumerable>>::GetAt(System.UInt32)
il2cpp_hresult_t IVectorView_1_GetAt_m3042122219_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, IIterable_1_t3857532767** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_GetAt_m3042122219_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		try
		{
			returnValue = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* T System.Collections.Generic.IReadOnlyList`1<System.Collections.Generic.IEnumerable`1<System.Collections.IEnumerable>>::get_Item(System.Int32) */, IReadOnlyList_1_t1485443806_il2cpp_TypeInfo_var, __this, ___index0);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			if (IsInst(ex.ex, ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var))
			{
				ex.ex->hresult = -2147483637; // E_BOUNDS
			}

			throw;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IIterable_1_t3857532767* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(IIterable_1_t3857532767::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IIterable_1_t3857532767>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IVectorView`1<System.Collections.Generic.IEnumerable`1<System.Collections.IEnumerable>>::get_Size()
il2cpp_hresult_t IVectorView_1_get_Size_m4174749221_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_get_Size_m4174749221_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.IEnumerable`1<System.Collections.IEnumerable>>::get_Count() */, IReadOnlyCollection_1_t924136837_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IVectorView`1<System.Collections.Generic.IEnumerable`1<System.Collections.IEnumerable>>::IndexOf(T,System.UInt32&)
il2cpp_hresult_t IVectorView_1_IndexOf_m4185849224_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterable_1_t3857532767* ___value0, uint32_t* ___index1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_IndexOf_m4185849224_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___value0' to managed representation
	RuntimeObject* ____value0_unmarshaled = NULL;
	if (___value0 != NULL)
	{
		____value0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___value0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____value0_unmarshaled = NULL;
	}

	// Marshaling of parameter '___index1' to managed representation
	uint32_t ____index1_empty = 0;

	// Managed method invocation
	bool returnValue;
	try
	{
		____index1_empty = 0;
		returnValue = false;

		int elementsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.IEnumerable`1<System.Collections.IEnumerable>>::get_Count() */, IReadOnlyCollection_1_t924136837_il2cpp_TypeInfo_var, __this);
		for (int i = 0; i < elementsInCollection; i++)
		{
			RuntimeObject* item = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* T System.Collections.Generic.IReadOnlyList`1<System.Collections.Generic.IEnumerable`1<System.Collections.IEnumerable>>::get_Item(System.Int32) */, IReadOnlyList_1_t1485443806_il2cpp_TypeInfo_var, __this, i);
			if (VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, item, ____value0_unmarshaled))
			{
				____index1_empty = static_cast<uint32_t>(i);
				returnValue = true;
				break;
			}
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter '___index1' back from managed representation
	*___index1 = ____index1_empty;

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IVectorView`1<System.Collections.Generic.IEnumerable`1<System.Collections.IEnumerable>>::GetMany(System.UInt32,T[])
il2cpp_hresult_t IVectorView_1_GetMany_m4072637945_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, IIterable_1_t3857532767** ___items1, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_GetMany_m4072637945_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		uint32_t elementsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.IEnumerable`1<System.Collections.IEnumerable>>::get_Count() */, IReadOnlyCollection_1_t924136837_il2cpp_TypeInfo_var, __this);
		if (___startIndex0 != elementsInCollection && ___items1 != NULL)
		{
			if (___startIndex0 > elementsInCollection || ___startIndex0 > 2147483647)
			{
				ArgumentOutOfRangeException_t777629997 * exception = (ArgumentOutOfRangeException_t777629997*)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
				ArgumentOutOfRangeException__ctor_m3628145864(exception, _stringLiteral797640427, NULL);
				Exception_set_HResult_m3489164646(exception, -2147483637, NULL); // E_BOUNDS
				IL2CPP_RAISE_MANAGED_EXCEPTION(exception, NULL, NULL);
			}
			returnValue = std::min(___items1ArraySize, elementsInCollection - ___startIndex0);
			for (uint32_t i = 0; i < returnValue; i++)
			{
				RuntimeObject* itemManaged = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* T System.Collections.Generic.IReadOnlyList`1<System.Collections.Generic.IEnumerable`1<System.Collections.IEnumerable>>::get_Item(System.Int32) */, IReadOnlyList_1_t1485443806_il2cpp_TypeInfo_var, __this, i + ___startIndex0);
				if (itemManaged != NULL)
				{
					if (il2cpp_codegen_is_import_or_windows_runtime(itemManaged))
					{
						il2cpp_hresult_t hr = ((Il2CppComObject *)itemManaged)->identity->QueryInterface(IIterable_1_t3857532767::IID, reinterpret_cast<void**>(&___items1[i]));
						il2cpp_codegen_com_raise_exception_if_failed(hr, false);
					}
					else
					{
						___items1[i] = il2cpp_codegen_com_get_or_create_ccw<IIterable_1_t3857532767>(itemManaged);
					}
				}
				else
				{
					___items1[i] = NULL;
				}
			}
		}
		else
		{
			returnValue = 0;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for T Windows.Foundation.Collections.IVector`1<System.Collections.Generic.IEnumerable`1<System.Collections.IEnumerable>>::GetAt(System.UInt32)
il2cpp_hresult_t IVector_1_GetAt_m789263590_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, IIterable_1_t3857532767** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetAt_m789263590_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		try
		{
			returnValue = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Collections.Generic.IEnumerable`1<System.Collections.IEnumerable>>::get_Item(System.Int32) */, IList_1_t2736340683_il2cpp_TypeInfo_var, __this, ___index0);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			if (IsInst(ex.ex, ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var))
			{
				ex.ex->hresult = -2147483637; // E_BOUNDS
			}

			throw;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IIterable_1_t3857532767* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(IIterable_1_t3857532767::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IIterable_1_t3857532767>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IVector`1<System.Collections.Generic.IEnumerable`1<System.Collections.IEnumerable>>::get_Size()
il2cpp_hresult_t IVector_1_get_Size_m2623241174_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_get_Size_m2623241174_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.IEnumerable`1<System.Collections.IEnumerable>>::get_Count() */, ICollection_1_t3749173134_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Collections.Generic.IReadOnlyList`1<T> Windows.Foundation.Collections.IVector`1<System.Collections.Generic.IEnumerable`1<System.Collections.IEnumerable>>::GetView()
il2cpp_hresult_t IVector_1_GetView_m391905035_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IVectorView_1_t259886162** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetView_m391905035_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		RuntimeObject* __thisValue = __this;
		if (IsInst(__thisValue, IReadOnlyList_1_t1485443806_il2cpp_TypeInfo_var))
		{
			returnValue = __thisValue;
		}
		else
		{
			ReadOnlyCollection_1_t2133597187 * readOnlyCollection = (ReadOnlyCollection_1_t2133597187*)il2cpp_codegen_object_new(ReadOnlyCollection_1_t2133597187_il2cpp_TypeInfo_var);
			ReadOnlyCollection_1__ctor_m1119069447(readOnlyCollection, __thisValue, ReadOnlyCollection_1__ctor_m1119069447_RuntimeMethod_var);
			returnValue = readOnlyCollection;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IVectorView_1_t259886162* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(IVectorView_1_t259886162::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IVectorView_1_t259886162>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IVector`1<System.Collections.Generic.IEnumerable`1<System.Collections.IEnumerable>>::IndexOf(T,System.UInt32&)
il2cpp_hresult_t IVector_1_IndexOf_m2314753069_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterable_1_t3857532767* ___value0, uint32_t* ___index1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_IndexOf_m2314753069_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___value0' to managed representation
	RuntimeObject* ____value0_unmarshaled = NULL;
	if (___value0 != NULL)
	{
		____value0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___value0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____value0_unmarshaled = NULL;
	}

	// Marshaling of parameter '___index1' to managed representation
	uint32_t ____index1_empty = 0;

	// Managed method invocation
	bool returnValue;
	try
	{
		____index1_empty = 0;
		returnValue = false;

		int elementsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.IEnumerable`1<System.Collections.IEnumerable>>::get_Count() */, ICollection_1_t3749173134_il2cpp_TypeInfo_var, __this);
		for (int i = 0; i < elementsInCollection; i++)
		{
			RuntimeObject* item = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Collections.Generic.IEnumerable`1<System.Collections.IEnumerable>>::get_Item(System.Int32) */, IList_1_t2736340683_il2cpp_TypeInfo_var, __this, i);
			if (VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, item, ____value0_unmarshaled))
			{
				____index1_empty = static_cast<uint32_t>(i);
				returnValue = true;
				break;
			}
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter '___index1' back from managed representation
	*___index1 = ____index1_empty;

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IVector`1<System.Collections.Generic.IEnumerable`1<System.Collections.IEnumerable>>::SetAt(System.UInt32,T)
il2cpp_hresult_t IVector_1_SetAt_m307161950_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, IIterable_1_t3857532767* ___value1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_SetAt_m307161950_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___value1' to managed representation
	RuntimeObject* ____value1_unmarshaled = NULL;
	if (___value1 != NULL)
	{
		____value1_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___value1, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____value1_unmarshaled = NULL;
	}

	// Managed method invocation
	try
	{
		try
		{
			InterfaceActionInvoker2< int32_t, RuntimeObject* >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<System.Collections.Generic.IEnumerable`1<System.Collections.IEnumerable>>::set_Item(System.Int32,T) */, IList_1_t2736340683_il2cpp_TypeInfo_var, __this, ___index0, ____value1_unmarshaled);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			if (IsInst(ex.ex, ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var))
			{
				ex.ex->hresult = -2147483637; // E_BOUNDS
			}

			throw;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IVector`1<System.Collections.Generic.IEnumerable`1<System.Collections.IEnumerable>>::InsertAt(System.UInt32,T)
il2cpp_hresult_t IVector_1_InsertAt_m2042125523_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, IIterable_1_t3857532767* ___value1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_InsertAt_m2042125523_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___value1' to managed representation
	RuntimeObject* ____value1_unmarshaled = NULL;
	if (___value1 != NULL)
	{
		____value1_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___value1, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____value1_unmarshaled = NULL;
	}

	// Managed method invocation
	try
	{
		try
		{
			InterfaceActionInvoker2< int32_t, RuntimeObject* >::Invoke(3 /* System.Void System.Collections.Generic.IList`1<System.Collections.Generic.IEnumerable`1<System.Collections.IEnumerable>>::Insert(System.Int32,T) */, IList_1_t2736340683_il2cpp_TypeInfo_var, __this, ___index0, ____value1_unmarshaled);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			if (IsInst(ex.ex, ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var))
			{
				ex.ex->hresult = -2147483637; // E_BOUNDS
			}

			throw;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IVector`1<System.Collections.Generic.IEnumerable`1<System.Collections.IEnumerable>>::RemoveAt(System.UInt32)
il2cpp_hresult_t IVector_1_RemoveAt_m2716267656_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_RemoveAt_m2716267656_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		try
		{
			InterfaceActionInvoker1< int32_t >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<System.Collections.Generic.IEnumerable`1<System.Collections.IEnumerable>>::RemoveAt(System.Int32) */, IList_1_t2736340683_il2cpp_TypeInfo_var, __this, ___index0);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			if (IsInst(ex.ex, ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var))
			{
				ex.ex->hresult = -2147483637; // E_BOUNDS
			}

			throw;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IVector`1<System.Collections.Generic.IEnumerable`1<System.Collections.IEnumerable>>::Append(T)
il2cpp_hresult_t IVector_1_Append_m723258973_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterable_1_t3857532767* ___value0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_Append_m723258973_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___value0' to managed representation
	RuntimeObject* ____value0_unmarshaled = NULL;
	if (___value0 != NULL)
	{
		____value0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___value0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____value0_unmarshaled = NULL;
	}

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.IEnumerable`1<System.Collections.IEnumerable>>::Add(T) */, ICollection_1_t3749173134_il2cpp_TypeInfo_var, __thisValue, ____value0_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IVector`1<System.Collections.Generic.IEnumerable`1<System.Collections.IEnumerable>>::RemoveAtEnd()
il2cpp_hresult_t IVector_1_RemoveAtEnd_m1250841087_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_RemoveAtEnd_m1250841087_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		int32_t itemsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.IEnumerable`1<System.Collections.IEnumerable>>::get_Count() */, ICollection_1_t3749173134_il2cpp_TypeInfo_var, __thisValue);
		if (itemsInCollection == 0)
		{
			InvalidOperationException_t56020091 * exception = (InvalidOperationException_t56020091*)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
			InvalidOperationException__ctor_m237278729(exception, _stringLiteral1050527596, NULL);
			Exception_set_HResult_m3489164646(exception, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(exception, NULL, NULL);
		}
		InterfaceActionInvoker1< int32_t >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<System.Collections.Generic.IEnumerable`1<System.Collections.IEnumerable>>::RemoveAt(System.Int32) */, IList_1_t2736340683_il2cpp_TypeInfo_var, __thisValue, itemsInCollection - 1);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IVector`1<System.Collections.Generic.IEnumerable`1<System.Collections.IEnumerable>>::Clear()
il2cpp_hresult_t IVector_1_Clear_m256950869_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_Clear_m256950869_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.IEnumerable`1<System.Collections.IEnumerable>>::Clear() */, ICollection_1_t3749173134_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IVector`1<System.Collections.Generic.IEnumerable`1<System.Collections.IEnumerable>>::GetMany(System.UInt32,T[])
il2cpp_hresult_t IVector_1_GetMany_m4097846463_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, IIterable_1_t3857532767** ___items1, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetMany_m4097846463_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		uint32_t elementsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.IEnumerable`1<System.Collections.IEnumerable>>::get_Count() */, ICollection_1_t3749173134_il2cpp_TypeInfo_var, __this);
		if (___startIndex0 != elementsInCollection && ___items1 != NULL)
		{
			if (___startIndex0 > elementsInCollection || ___startIndex0 > 2147483647)
			{
				ArgumentOutOfRangeException_t777629997 * exception = (ArgumentOutOfRangeException_t777629997*)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
				ArgumentOutOfRangeException__ctor_m3628145864(exception, _stringLiteral797640427, NULL);
				Exception_set_HResult_m3489164646(exception, -2147483637, NULL); // E_BOUNDS
				IL2CPP_RAISE_MANAGED_EXCEPTION(exception, NULL, NULL);
			}
			returnValue = std::min(___items1ArraySize, elementsInCollection - ___startIndex0);
			for (uint32_t i = 0; i < returnValue; i++)
			{
				RuntimeObject* itemManaged = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Collections.Generic.IEnumerable`1<System.Collections.IEnumerable>>::get_Item(System.Int32) */, IList_1_t2736340683_il2cpp_TypeInfo_var, __this, i + ___startIndex0);
				if (itemManaged != NULL)
				{
					if (il2cpp_codegen_is_import_or_windows_runtime(itemManaged))
					{
						il2cpp_hresult_t hr = ((Il2CppComObject *)itemManaged)->identity->QueryInterface(IIterable_1_t3857532767::IID, reinterpret_cast<void**>(&___items1[i]));
						il2cpp_codegen_com_raise_exception_if_failed(hr, false);
					}
					else
					{
						___items1[i] = il2cpp_codegen_com_get_or_create_ccw<IIterable_1_t3857532767>(itemManaged);
					}
				}
				else
				{
					___items1[i] = NULL;
				}
			}
		}
		else
		{
			returnValue = 0;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IVector`1<System.Collections.Generic.IEnumerable`1<System.Collections.IEnumerable>>::ReplaceAll(T[])
il2cpp_hresult_t IVector_1_ReplaceAll_m1187859799_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___items0ArraySize, IIterable_1_t3857532767** ___items0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_ReplaceAll_m1187859799_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___items0' to managed representation
	IEnumerable_1U5BU5D_t614637069* ____items0_unmarshaled = NULL;
	if (___items0 != NULL)
	{
		if (____items0_unmarshaled == NULL)
		{
			____items0_unmarshaled = reinterpret_cast<IEnumerable_1U5BU5D_t614637069*>(SZArrayNew(IEnumerable_1U5BU5D_t614637069_il2cpp_TypeInfo_var, static_cast<int32_t>(___items0ArraySize)));
		}
		il2cpp_array_size_t _arrayLength = (____items0_unmarshaled)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			RuntimeObject* ____items0_i__unmarshaled = NULL;
			if ((___items0)[i] != NULL)
			{
				____items0_i__unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>((___items0)[i], Il2CppComObject_il2cpp_TypeInfo_var);
			}
			else
			{
				____items0_i__unmarshaled = NULL;
			}
			(____items0_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), ____items0_i__unmarshaled);
		}
	}

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.IEnumerable`1<System.Collections.IEnumerable>>::Clear() */, ICollection_1_t3749173134_il2cpp_TypeInfo_var, __thisValue);
		if (____items0_unmarshaled != NULL)
		{
			il2cpp_array_size_t itemsInCollection = ____items0_unmarshaled->max_length;
			for (il2cpp_array_size_t i = 0; i < itemsInCollection; i++)
			{
				InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.IEnumerable`1<System.Collections.IEnumerable>>::Add(T) */, ICollection_1_t3749173134_il2cpp_TypeInfo_var, __thisValue, (____items0_unmarshaled)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
			}
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for T Windows.Foundation.Collections.IVector`1<Windows.Foundation.Point>::GetAt(System.UInt32)
il2cpp_hresult_t IVector_1_GetAt_m2330330105_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Point_t4164953539 * comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetAt_m2330330105_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	Point_t4164953539  returnValue;
	try
	{
		try
		{
			returnValue = InterfaceFuncInvoker1< Point_t4164953539 , int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<Windows.Foundation.Point>::get_Item(System.Int32) */, IList_1_t1685306026_il2cpp_TypeInfo_var, __this, ___index0);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			if (IsInst(ex.ex, ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var))
			{
				ex.ex->hresult = -2147483637; // E_BOUNDS
			}

			throw;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IVector`1<Windows.Foundation.Point>::get_Size()
il2cpp_hresult_t IVector_1_get_Size_m59889375_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_get_Size_m59889375_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Windows.Foundation.Point>::get_Count() */, ICollection_1_t2698138477_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Collections.Generic.IReadOnlyList`1<T> Windows.Foundation.Collections.IVector`1<Windows.Foundation.Point>::GetView()
il2cpp_hresult_t IVector_1_GetView_m118185472_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IVectorView_1_t3503818801** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetView_m118185472_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		RuntimeObject* __thisValue = __this;
		if (IsInst(__thisValue, IReadOnlyList_1_t434409149_il2cpp_TypeInfo_var))
		{
			returnValue = __thisValue;
		}
		else
		{
			ReadOnlyCollection_1_t1082562530 * readOnlyCollection = (ReadOnlyCollection_1_t1082562530*)il2cpp_codegen_object_new(ReadOnlyCollection_1_t1082562530_il2cpp_TypeInfo_var);
			ReadOnlyCollection_1__ctor_m3612700832(readOnlyCollection, __thisValue, ReadOnlyCollection_1__ctor_m3612700832_RuntimeMethod_var);
			returnValue = readOnlyCollection;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IVectorView_1_t3503818801* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(IVectorView_1_t3503818801::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IVectorView_1_t3503818801>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IVector`1<Windows.Foundation.Point>::IndexOf(T,System.UInt32&)
il2cpp_hresult_t IVector_1_IndexOf_m428066000_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Point_t4164953539  ___value0, uint32_t* ___index1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_IndexOf_m428066000_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___index1' to managed representation
	uint32_t ____index1_empty = 0;

	// Managed method invocation
	bool returnValue;
	try
	{
		____index1_empty = 0;
		returnValue = false;

		int elementsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Windows.Foundation.Point>::get_Count() */, ICollection_1_t2698138477_il2cpp_TypeInfo_var, __this);
		for (int i = 0; i < elementsInCollection; i++)
		{
			Point_t4164953539  item = InterfaceFuncInvoker1< Point_t4164953539 , int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<Windows.Foundation.Point>::get_Item(System.Int32) */, IList_1_t1685306026_il2cpp_TypeInfo_var, __this, i);
			if (Point_Equals_m1617877981((&item), Box(Point_t4164953539_il2cpp_TypeInfo_var, &___value0), NULL))
			{
				____index1_empty = static_cast<uint32_t>(i);
				returnValue = true;
				break;
			}
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter '___index1' back from managed representation
	*___index1 = ____index1_empty;

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.Point>::SetAt(System.UInt32,T)
il2cpp_hresult_t IVector_1_SetAt_m565528379_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Point_t4164953539  ___value1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_SetAt_m565528379_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		try
		{
			InterfaceActionInvoker2< int32_t, Point_t4164953539  >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<Windows.Foundation.Point>::set_Item(System.Int32,T) */, IList_1_t1685306026_il2cpp_TypeInfo_var, __this, ___index0, ___value1);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			if (IsInst(ex.ex, ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var))
			{
				ex.ex->hresult = -2147483637; // E_BOUNDS
			}

			throw;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.Point>::InsertAt(System.UInt32,T)
il2cpp_hresult_t IVector_1_InsertAt_m3604836490_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Point_t4164953539  ___value1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_InsertAt_m3604836490_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		try
		{
			InterfaceActionInvoker2< int32_t, Point_t4164953539  >::Invoke(3 /* System.Void System.Collections.Generic.IList`1<Windows.Foundation.Point>::Insert(System.Int32,T) */, IList_1_t1685306026_il2cpp_TypeInfo_var, __this, ___index0, ___value1);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			if (IsInst(ex.ex, ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var))
			{
				ex.ex->hresult = -2147483637; // E_BOUNDS
			}

			throw;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.Point>::RemoveAt(System.UInt32)
il2cpp_hresult_t IVector_1_RemoveAt_m1853546183_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_RemoveAt_m1853546183_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		try
		{
			InterfaceActionInvoker1< int32_t >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<Windows.Foundation.Point>::RemoveAt(System.Int32) */, IList_1_t1685306026_il2cpp_TypeInfo_var, __this, ___index0);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			if (IsInst(ex.ex, ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var))
			{
				ex.ex->hresult = -2147483637; // E_BOUNDS
			}

			throw;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.Point>::Append(T)
il2cpp_hresult_t IVector_1_Append_m195984872_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Point_t4164953539  ___value0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_Append_m195984872_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker1< Point_t4164953539  >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<Windows.Foundation.Point>::Add(T) */, ICollection_1_t2698138477_il2cpp_TypeInfo_var, __thisValue, ___value0);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.Point>::RemoveAtEnd()
il2cpp_hresult_t IVector_1_RemoveAtEnd_m4286336640_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_RemoveAtEnd_m4286336640_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		int32_t itemsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Windows.Foundation.Point>::get_Count() */, ICollection_1_t2698138477_il2cpp_TypeInfo_var, __thisValue);
		if (itemsInCollection == 0)
		{
			InvalidOperationException_t56020091 * exception = (InvalidOperationException_t56020091*)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
			InvalidOperationException__ctor_m237278729(exception, _stringLiteral1050527596, NULL);
			Exception_set_HResult_m3489164646(exception, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(exception, NULL, NULL);
		}
		InterfaceActionInvoker1< int32_t >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<Windows.Foundation.Point>::RemoveAt(System.Int32) */, IList_1_t1685306026_il2cpp_TypeInfo_var, __thisValue, itemsInCollection - 1);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.Point>::Clear()
il2cpp_hresult_t IVector_1_Clear_m2273683721_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_Clear_m2273683721_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<Windows.Foundation.Point>::Clear() */, ICollection_1_t2698138477_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IVector`1<Windows.Foundation.Point>::GetMany(System.UInt32,T[])
il2cpp_hresult_t IVector_1_GetMany_m4242153011_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, Point_t4164953539 * ___items1, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetMany_m4242153011_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		uint32_t elementsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Windows.Foundation.Point>::get_Count() */, ICollection_1_t2698138477_il2cpp_TypeInfo_var, __this);
		if (___startIndex0 != elementsInCollection && ___items1 != NULL)
		{
			if (___startIndex0 > elementsInCollection || ___startIndex0 > 2147483647)
			{
				ArgumentOutOfRangeException_t777629997 * exception = (ArgumentOutOfRangeException_t777629997*)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
				ArgumentOutOfRangeException__ctor_m3628145864(exception, _stringLiteral797640427, NULL);
				Exception_set_HResult_m3489164646(exception, -2147483637, NULL); // E_BOUNDS
				IL2CPP_RAISE_MANAGED_EXCEPTION(exception, NULL, NULL);
			}
			returnValue = std::min(___items1ArraySize, elementsInCollection - ___startIndex0);
			for (uint32_t i = 0; i < returnValue; i++)
			{
				Point_t4164953539  itemManaged = InterfaceFuncInvoker1< Point_t4164953539 , int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<Windows.Foundation.Point>::get_Item(System.Int32) */, IList_1_t1685306026_il2cpp_TypeInfo_var, __this, i + ___startIndex0);
				___items1[i] = itemManaged;
			}
		}
		else
		{
			returnValue = 0;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.Point>::ReplaceAll(T[])
il2cpp_hresult_t IVector_1_ReplaceAll_m2759782552_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___items0ArraySize, Point_t4164953539 * ___items0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_ReplaceAll_m2759782552_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___items0' to managed representation
	PointU5BU5D_t724808658* ____items0_unmarshaled = NULL;
	if (___items0 != NULL)
	{
		____items0_unmarshaled = reinterpret_cast<PointU5BU5D_t724808658*>(SZArrayNew(PointU5BU5D_t724808658_il2cpp_TypeInfo_var, static_cast<int32_t>(___items0ArraySize)));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___items0ArraySize)); i++)
		{
			(____items0_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___items0)[i]);
		}
	}

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<Windows.Foundation.Point>::Clear() */, ICollection_1_t2698138477_il2cpp_TypeInfo_var, __thisValue);
		if (____items0_unmarshaled != NULL)
		{
			il2cpp_array_size_t itemsInCollection = ____items0_unmarshaled->max_length;
			for (il2cpp_array_size_t i = 0; i < itemsInCollection; i++)
			{
				InterfaceActionInvoker1< Point_t4164953539  >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<Windows.Foundation.Point>::Add(T) */, ICollection_1_t2698138477_il2cpp_TypeInfo_var, __thisValue, (____items0_unmarshaled)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
			}
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Point> adapter
struct IIterator_1_t2039097012_Adapter IL2CPP_FINAL : il2cpp::vm::NonCachedCCWBase<IIterator_1_t2039097012_Adapter>, IIterator_1_t2039097012
{
	inline IIterator_1_t2039097012_Adapter(RuntimeObject* obj) : il2cpp::vm::NonCachedCCWBase<IIterator_1_t2039097012_Adapter>(obj), _initialized(false), _hasCurrent(false) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterator_1_t2039097012::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterator_1_t2039097012*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IIterator_1_t2039097012::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetRuntimeClassName(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}
	virtual il2cpp_hresult_t STDCALL IIterator_1_get_Current_m3650755423(Point_t4164953539 * comReturnValue) IL2CPP_OVERRIDE;
	virtual il2cpp_hresult_t STDCALL IIterator_1_get_HasCurrent_m941782850(bool* comReturnValue) IL2CPP_OVERRIDE;
	virtual il2cpp_hresult_t STDCALL IIterator_1_MoveNext_m1050410819(bool* comReturnValue) IL2CPP_OVERRIDE;
	virtual il2cpp_hresult_t STDCALL IIterator_1_GetMany_m1958449181(uint32_t ___items0ArraySize, Point_t4164953539 * ___items0, uint32_t* comReturnValue) IL2CPP_OVERRIDE;
private:
	bool _initialized;
	bool _hasCurrent;
	il2cpp_hresult_t Initialize();
	il2cpp_hresult_t GetCurrent(Point_t4164953539 * comReturnValue);
	il2cpp_hresult_t MoveNext(bool* comReturnValue);
};
il2cpp_hresult_t IIterator_1_t2039097012_Adapter::IIterator_1_get_Current_m3650755423(Point_t4164953539 * comReturnValue)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;
	il2cpp_hresult_t hr = Initialize();
	if (IL2CPP_HR_FAILED(hr))
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		return hr;
	}
	return GetCurrent(comReturnValue);
}
il2cpp_hresult_t IIterator_1_t2039097012_Adapter::IIterator_1_get_HasCurrent_m941782850(bool* comReturnValue)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;
	il2cpp_hresult_t hr = Initialize();
	if (IL2CPP_HR_FAILED(hr))
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		return hr;
	}
	*comReturnValue = _hasCurrent;
	return IL2CPP_S_OK;
}
il2cpp_hresult_t IIterator_1_t2039097012_Adapter::IIterator_1_MoveNext_m1050410819(bool* comReturnValue)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;
	il2cpp_hresult_t hr = Initialize();
	if (IL2CPP_HR_FAILED(hr))
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		return hr;
	}
	hr = MoveNext(&_hasCurrent);
	*comReturnValue = _hasCurrent;
	return hr;
}
il2cpp_hresult_t IIterator_1_t2039097012_Adapter::IIterator_1_GetMany_m1958449181(uint32_t ___items0ArraySize, Point_t4164953539 * ___items0, uint32_t* comReturnValue)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;
	il2cpp_hresult_t hr = Initialize();
	if (IL2CPP_HR_FAILED(hr))
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		return hr;
	}
	uint32_t count = 0;
	for (; _hasCurrent && (count < ___items0ArraySize); ++count)
	{
		hr = GetCurrent(___items0 + count);
		if (IL2CPP_HR_FAILED(hr))
		{
			*comReturnValue = count;
			return hr;
		}
		hr = MoveNext(&_hasCurrent);
		if (IL2CPP_HR_FAILED(hr))
		{
			*comReturnValue = count + 1;
			return hr;
		}
	}
	*comReturnValue = count;
	return IL2CPP_S_OK;
}
il2cpp_hresult_t IIterator_1_t2039097012_Adapter::Initialize()
{
	if (_initialized)
	{
		return IL2CPP_S_OK;
	}
	il2cpp_hresult_t hr = MoveNext(&_hasCurrent);
	_initialized = IL2CPP_HR_SUCCEEDED(hr);
	return hr;
}
il2cpp_hresult_t IIterator_1_t2039097012_Adapter::GetCurrent(Point_t4164953539 * comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IIterator_1_t2039097012_Adapter_GetCurrent_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	// Managed method invocation
	Point_t4164953539  returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)GetManagedObjectInline();
		returnValue = InterfaceFuncInvoker0< Point_t4164953539  >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Windows.Foundation.Point>::get_Current() */, IEnumerator_1_t302556711_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return (ex.ex->hresult == IL2CPP_COR_E_INVALIDOPERATION) ? IL2CPP_E_BOUNDS : ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
il2cpp_hresult_t IIterator_1_t2039097012_Adapter::MoveNext(bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IIterator_1_t2039097012_Adapter_MoveNext_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)GetManagedObjectInline();
		returnValue = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for Windows.Foundation.Collections.IIterator`1<T> Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Point>::First()
il2cpp_hresult_t IIterable_1_First_m1907809909_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t2039097012** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IIterable_1_First_m1907809909_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* returnValue;
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Windows.Foundation.Point>::GetEnumerator() */, IEnumerable_1_t3144806428_il2cpp_TypeInfo_var, __thisValue);
		*comReturnValue = (returnValue != NULL) ? IIterator_1_t2039097012_Adapter::__CreateInstance(returnValue) : NULL;
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for T Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.Point>::GetAt(System.UInt32)
il2cpp_hresult_t IVectorView_1_GetAt_m828460566_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Point_t4164953539 * comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_GetAt_m828460566_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	Point_t4164953539  returnValue;
	try
	{
		try
		{
			returnValue = InterfaceFuncInvoker1< Point_t4164953539 , int32_t >::Invoke(0 /* T System.Collections.Generic.IReadOnlyList`1<Windows.Foundation.Point>::get_Item(System.Int32) */, IReadOnlyList_1_t434409149_il2cpp_TypeInfo_var, __this, ___index0);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			if (IsInst(ex.ex, ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var))
			{
				ex.ex->hresult = -2147483637; // E_BOUNDS
			}

			throw;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.Point>::get_Size()
il2cpp_hresult_t IVectorView_1_get_Size_m3766324835_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_get_Size_m3766324835_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Windows.Foundation.Point>::get_Count() */, IReadOnlyCollection_1_t4168069476_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.Point>::IndexOf(T,System.UInt32&)
il2cpp_hresult_t IVectorView_1_IndexOf_m1240834200_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Point_t4164953539  ___value0, uint32_t* ___index1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_IndexOf_m1240834200_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___index1' to managed representation
	uint32_t ____index1_empty = 0;

	// Managed method invocation
	bool returnValue;
	try
	{
		____index1_empty = 0;
		returnValue = false;

		int elementsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Windows.Foundation.Point>::get_Count() */, IReadOnlyCollection_1_t4168069476_il2cpp_TypeInfo_var, __this);
		for (int i = 0; i < elementsInCollection; i++)
		{
			Point_t4164953539  item = InterfaceFuncInvoker1< Point_t4164953539 , int32_t >::Invoke(0 /* T System.Collections.Generic.IReadOnlyList`1<Windows.Foundation.Point>::get_Item(System.Int32) */, IReadOnlyList_1_t434409149_il2cpp_TypeInfo_var, __this, i);
			if (Point_Equals_m1617877981((&item), Box(Point_t4164953539_il2cpp_TypeInfo_var, &___value0), NULL))
			{
				____index1_empty = static_cast<uint32_t>(i);
				returnValue = true;
				break;
			}
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter '___index1' back from managed representation
	*___index1 = ____index1_empty;

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.Point>::GetMany(System.UInt32,T[])
il2cpp_hresult_t IVectorView_1_GetMany_m320624579_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, Point_t4164953539 * ___items1, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_GetMany_m320624579_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		uint32_t elementsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Windows.Foundation.Point>::get_Count() */, IReadOnlyCollection_1_t4168069476_il2cpp_TypeInfo_var, __this);
		if (___startIndex0 != elementsInCollection && ___items1 != NULL)
		{
			if (___startIndex0 > elementsInCollection || ___startIndex0 > 2147483647)
			{
				ArgumentOutOfRangeException_t777629997 * exception = (ArgumentOutOfRangeException_t777629997*)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
				ArgumentOutOfRangeException__ctor_m3628145864(exception, _stringLiteral797640427, NULL);
				Exception_set_HResult_m3489164646(exception, -2147483637, NULL); // E_BOUNDS
				IL2CPP_RAISE_MANAGED_EXCEPTION(exception, NULL, NULL);
			}
			returnValue = std::min(___items1ArraySize, elementsInCollection - ___startIndex0);
			for (uint32_t i = 0; i < returnValue; i++)
			{
				Point_t4164953539  itemManaged = InterfaceFuncInvoker1< Point_t4164953539 , int32_t >::Invoke(0 /* T System.Collections.Generic.IReadOnlyList`1<Windows.Foundation.Point>::get_Item(System.Int32) */, IReadOnlyList_1_t434409149_il2cpp_TypeInfo_var, __this, i + ___startIndex0);
				___items1[i] = itemManaged;
			}
		}
		else
		{
			returnValue = 0;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for T Windows.Foundation.Collections.IVector`1<Windows.Foundation.Size>::GetAt(System.UInt32)
il2cpp_hresult_t IVector_1_GetAt_m2699244792_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Size_t550917638 * comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetAt_m2699244792_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	Size_t550917638  returnValue;
	try
	{
		try
		{
			returnValue = InterfaceFuncInvoker1< Size_t550917638 , int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<Windows.Foundation.Size>::get_Item(System.Int32) */, IList_1_t2366237421_il2cpp_TypeInfo_var, __this, ___index0);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			if (IsInst(ex.ex, ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var))
			{
				ex.ex->hresult = -2147483637; // E_BOUNDS
			}

			throw;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IVector`1<Windows.Foundation.Size>::get_Size()
il2cpp_hresult_t IVector_1_get_Size_m4157668882_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_get_Size_m4157668882_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Windows.Foundation.Size>::get_Count() */, ICollection_1_t3379069872_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Collections.Generic.IReadOnlyList`1<T> Windows.Foundation.Collections.IVector`1<Windows.Foundation.Size>::GetView()
il2cpp_hresult_t IVector_1_GetView_m1943501597_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IVectorView_1_t4184750196** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetView_m1943501597_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		RuntimeObject* __thisValue = __this;
		if (IsInst(__thisValue, IReadOnlyList_1_t1115340544_il2cpp_TypeInfo_var))
		{
			returnValue = __thisValue;
		}
		else
		{
			ReadOnlyCollection_1_t1763493925 * readOnlyCollection = (ReadOnlyCollection_1_t1763493925*)il2cpp_codegen_object_new(ReadOnlyCollection_1_t1763493925_il2cpp_TypeInfo_var);
			ReadOnlyCollection_1__ctor_m3697313193(readOnlyCollection, __thisValue, ReadOnlyCollection_1__ctor_m3697313193_RuntimeMethod_var);
			returnValue = readOnlyCollection;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IVectorView_1_t4184750196* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(IVectorView_1_t4184750196::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IVectorView_1_t4184750196>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IVector`1<Windows.Foundation.Size>::IndexOf(T,System.UInt32&)
il2cpp_hresult_t IVector_1_IndexOf_m3701100474_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Size_t550917638  ___value0, uint32_t* ___index1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_IndexOf_m3701100474_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___index1' to managed representation
	uint32_t ____index1_empty = 0;

	// Managed method invocation
	bool returnValue;
	try
	{
		____index1_empty = 0;
		returnValue = false;

		int elementsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Windows.Foundation.Size>::get_Count() */, ICollection_1_t3379069872_il2cpp_TypeInfo_var, __this);
		for (int i = 0; i < elementsInCollection; i++)
		{
			Size_t550917638  item = InterfaceFuncInvoker1< Size_t550917638 , int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<Windows.Foundation.Size>::get_Item(System.Int32) */, IList_1_t2366237421_il2cpp_TypeInfo_var, __this, i);
			if (Size_Equals_m1950794187((&item), Box(Size_t550917638_il2cpp_TypeInfo_var, &___value0), NULL))
			{
				____index1_empty = static_cast<uint32_t>(i);
				returnValue = true;
				break;
			}
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter '___index1' back from managed representation
	*___index1 = ____index1_empty;

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.Size>::SetAt(System.UInt32,T)
il2cpp_hresult_t IVector_1_SetAt_m3412621482_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Size_t550917638  ___value1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_SetAt_m3412621482_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		try
		{
			InterfaceActionInvoker2< int32_t, Size_t550917638  >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<Windows.Foundation.Size>::set_Item(System.Int32,T) */, IList_1_t2366237421_il2cpp_TypeInfo_var, __this, ___index0, ___value1);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			if (IsInst(ex.ex, ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var))
			{
				ex.ex->hresult = -2147483637; // E_BOUNDS
			}

			throw;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.Size>::InsertAt(System.UInt32,T)
il2cpp_hresult_t IVector_1_InsertAt_m3860348037_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Size_t550917638  ___value1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_InsertAt_m3860348037_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		try
		{
			InterfaceActionInvoker2< int32_t, Size_t550917638  >::Invoke(3 /* System.Void System.Collections.Generic.IList`1<Windows.Foundation.Size>::Insert(System.Int32,T) */, IList_1_t2366237421_il2cpp_TypeInfo_var, __this, ___index0, ___value1);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			if (IsInst(ex.ex, ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var))
			{
				ex.ex->hresult = -2147483637; // E_BOUNDS
			}

			throw;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.Size>::RemoveAt(System.UInt32)
il2cpp_hresult_t IVector_1_RemoveAt_m394387669_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_RemoveAt_m394387669_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		try
		{
			InterfaceActionInvoker1< int32_t >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<Windows.Foundation.Size>::RemoveAt(System.Int32) */, IList_1_t2366237421_il2cpp_TypeInfo_var, __this, ___index0);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			if (IsInst(ex.ex, ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var))
			{
				ex.ex->hresult = -2147483637; // E_BOUNDS
			}

			throw;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.Size>::Append(T)
il2cpp_hresult_t IVector_1_Append_m2019222254_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Size_t550917638  ___value0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_Append_m2019222254_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker1< Size_t550917638  >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<Windows.Foundation.Size>::Add(T) */, ICollection_1_t3379069872_il2cpp_TypeInfo_var, __thisValue, ___value0);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.Size>::RemoveAtEnd()
il2cpp_hresult_t IVector_1_RemoveAtEnd_m2572115469_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_RemoveAtEnd_m2572115469_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		int32_t itemsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Windows.Foundation.Size>::get_Count() */, ICollection_1_t3379069872_il2cpp_TypeInfo_var, __thisValue);
		if (itemsInCollection == 0)
		{
			InvalidOperationException_t56020091 * exception = (InvalidOperationException_t56020091*)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
			InvalidOperationException__ctor_m237278729(exception, _stringLiteral1050527596, NULL);
			Exception_set_HResult_m3489164646(exception, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(exception, NULL, NULL);
		}
		InterfaceActionInvoker1< int32_t >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<Windows.Foundation.Size>::RemoveAt(System.Int32) */, IList_1_t2366237421_il2cpp_TypeInfo_var, __thisValue, itemsInCollection - 1);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.Size>::Clear()
il2cpp_hresult_t IVector_1_Clear_m783567046_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_Clear_m783567046_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<Windows.Foundation.Size>::Clear() */, ICollection_1_t3379069872_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IVector`1<Windows.Foundation.Size>::GetMany(System.UInt32,T[])
il2cpp_hresult_t IVector_1_GetMany_m4076800509_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, Size_t550917638 * ___items1, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetMany_m4076800509_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		uint32_t elementsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Windows.Foundation.Size>::get_Count() */, ICollection_1_t3379069872_il2cpp_TypeInfo_var, __this);
		if (___startIndex0 != elementsInCollection && ___items1 != NULL)
		{
			if (___startIndex0 > elementsInCollection || ___startIndex0 > 2147483647)
			{
				ArgumentOutOfRangeException_t777629997 * exception = (ArgumentOutOfRangeException_t777629997*)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
				ArgumentOutOfRangeException__ctor_m3628145864(exception, _stringLiteral797640427, NULL);
				Exception_set_HResult_m3489164646(exception, -2147483637, NULL); // E_BOUNDS
				IL2CPP_RAISE_MANAGED_EXCEPTION(exception, NULL, NULL);
			}
			returnValue = std::min(___items1ArraySize, elementsInCollection - ___startIndex0);
			for (uint32_t i = 0; i < returnValue; i++)
			{
				Size_t550917638  itemManaged = InterfaceFuncInvoker1< Size_t550917638 , int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<Windows.Foundation.Size>::get_Item(System.Int32) */, IList_1_t2366237421_il2cpp_TypeInfo_var, __this, i + ___startIndex0);
				___items1[i] = itemManaged;
			}
		}
		else
		{
			returnValue = 0;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.Size>::ReplaceAll(T[])
il2cpp_hresult_t IVector_1_ReplaceAll_m4107471252_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___items0ArraySize, Size_t550917638 * ___items0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_ReplaceAll_m4107471252_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___items0' to managed representation
	SizeU5BU5D_t1671914275* ____items0_unmarshaled = NULL;
	if (___items0 != NULL)
	{
		____items0_unmarshaled = reinterpret_cast<SizeU5BU5D_t1671914275*>(SZArrayNew(SizeU5BU5D_t1671914275_il2cpp_TypeInfo_var, static_cast<int32_t>(___items0ArraySize)));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___items0ArraySize)); i++)
		{
			(____items0_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___items0)[i]);
		}
	}

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<Windows.Foundation.Size>::Clear() */, ICollection_1_t3379069872_il2cpp_TypeInfo_var, __thisValue);
		if (____items0_unmarshaled != NULL)
		{
			il2cpp_array_size_t itemsInCollection = ____items0_unmarshaled->max_length;
			for (il2cpp_array_size_t i = 0; i < itemsInCollection; i++)
			{
				InterfaceActionInvoker1< Size_t550917638  >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<Windows.Foundation.Size>::Add(T) */, ICollection_1_t3379069872_il2cpp_TypeInfo_var, __thisValue, (____items0_unmarshaled)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
			}
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Size> adapter
struct IIterator_1_t2720028407_Adapter IL2CPP_FINAL : il2cpp::vm::NonCachedCCWBase<IIterator_1_t2720028407_Adapter>, IIterator_1_t2720028407
{
	inline IIterator_1_t2720028407_Adapter(RuntimeObject* obj) : il2cpp::vm::NonCachedCCWBase<IIterator_1_t2720028407_Adapter>(obj), _initialized(false), _hasCurrent(false) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterator_1_t2720028407::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterator_1_t2720028407*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IIterator_1_t2720028407::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetRuntimeClassName(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}
	virtual il2cpp_hresult_t STDCALL IIterator_1_get_Current_m573419872(Size_t550917638 * comReturnValue) IL2CPP_OVERRIDE;
	virtual il2cpp_hresult_t STDCALL IIterator_1_get_HasCurrent_m4223115842(bool* comReturnValue) IL2CPP_OVERRIDE;
	virtual il2cpp_hresult_t STDCALL IIterator_1_MoveNext_m2301142642(bool* comReturnValue) IL2CPP_OVERRIDE;
	virtual il2cpp_hresult_t STDCALL IIterator_1_GetMany_m2384573303(uint32_t ___items0ArraySize, Size_t550917638 * ___items0, uint32_t* comReturnValue) IL2CPP_OVERRIDE;
private:
	bool _initialized;
	bool _hasCurrent;
	il2cpp_hresult_t Initialize();
	il2cpp_hresult_t GetCurrent(Size_t550917638 * comReturnValue);
	il2cpp_hresult_t MoveNext(bool* comReturnValue);
};
il2cpp_hresult_t IIterator_1_t2720028407_Adapter::IIterator_1_get_Current_m573419872(Size_t550917638 * comReturnValue)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;
	il2cpp_hresult_t hr = Initialize();
	if (IL2CPP_HR_FAILED(hr))
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		return hr;
	}
	return GetCurrent(comReturnValue);
}
il2cpp_hresult_t IIterator_1_t2720028407_Adapter::IIterator_1_get_HasCurrent_m4223115842(bool* comReturnValue)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;
	il2cpp_hresult_t hr = Initialize();
	if (IL2CPP_HR_FAILED(hr))
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		return hr;
	}
	*comReturnValue = _hasCurrent;
	return IL2CPP_S_OK;
}
il2cpp_hresult_t IIterator_1_t2720028407_Adapter::IIterator_1_MoveNext_m2301142642(bool* comReturnValue)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;
	il2cpp_hresult_t hr = Initialize();
	if (IL2CPP_HR_FAILED(hr))
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		return hr;
	}
	hr = MoveNext(&_hasCurrent);
	*comReturnValue = _hasCurrent;
	return hr;
}
il2cpp_hresult_t IIterator_1_t2720028407_Adapter::IIterator_1_GetMany_m2384573303(uint32_t ___items0ArraySize, Size_t550917638 * ___items0, uint32_t* comReturnValue)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;
	il2cpp_hresult_t hr = Initialize();
	if (IL2CPP_HR_FAILED(hr))
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		return hr;
	}
	uint32_t count = 0;
	for (; _hasCurrent && (count < ___items0ArraySize); ++count)
	{
		hr = GetCurrent(___items0 + count);
		if (IL2CPP_HR_FAILED(hr))
		{
			*comReturnValue = count;
			return hr;
		}
		hr = MoveNext(&_hasCurrent);
		if (IL2CPP_HR_FAILED(hr))
		{
			*comReturnValue = count + 1;
			return hr;
		}
	}
	*comReturnValue = count;
	return IL2CPP_S_OK;
}
il2cpp_hresult_t IIterator_1_t2720028407_Adapter::Initialize()
{
	if (_initialized)
	{
		return IL2CPP_S_OK;
	}
	il2cpp_hresult_t hr = MoveNext(&_hasCurrent);
	_initialized = IL2CPP_HR_SUCCEEDED(hr);
	return hr;
}
il2cpp_hresult_t IIterator_1_t2720028407_Adapter::GetCurrent(Size_t550917638 * comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IIterator_1_t2720028407_Adapter_GetCurrent_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	// Managed method invocation
	Size_t550917638  returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)GetManagedObjectInline();
		returnValue = InterfaceFuncInvoker0< Size_t550917638  >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Windows.Foundation.Size>::get_Current() */, IEnumerator_1_t983488106_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return (ex.ex->hresult == IL2CPP_COR_E_INVALIDOPERATION) ? IL2CPP_E_BOUNDS : ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
il2cpp_hresult_t IIterator_1_t2720028407_Adapter::MoveNext(bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IIterator_1_t2720028407_Adapter_MoveNext_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)GetManagedObjectInline();
		returnValue = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for Windows.Foundation.Collections.IIterator`1<T> Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Size>::First()
il2cpp_hresult_t IIterable_1_First_m4003146197_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t2720028407** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IIterable_1_First_m4003146197_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* returnValue;
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Windows.Foundation.Size>::GetEnumerator() */, IEnumerable_1_t3825737823_il2cpp_TypeInfo_var, __thisValue);
		*comReturnValue = (returnValue != NULL) ? IIterator_1_t2720028407_Adapter::__CreateInstance(returnValue) : NULL;
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for T Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.Size>::GetAt(System.UInt32)
il2cpp_hresult_t IVectorView_1_GetAt_m2196457089_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Size_t550917638 * comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_GetAt_m2196457089_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	Size_t550917638  returnValue;
	try
	{
		try
		{
			returnValue = InterfaceFuncInvoker1< Size_t550917638 , int32_t >::Invoke(0 /* T System.Collections.Generic.IReadOnlyList`1<Windows.Foundation.Size>::get_Item(System.Int32) */, IReadOnlyList_1_t1115340544_il2cpp_TypeInfo_var, __this, ___index0);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			if (IsInst(ex.ex, ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var))
			{
				ex.ex->hresult = -2147483637; // E_BOUNDS
			}

			throw;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.Size>::get_Size()
il2cpp_hresult_t IVectorView_1_get_Size_m3307328074_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_get_Size_m3307328074_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Windows.Foundation.Size>::get_Count() */, IReadOnlyCollection_1_t554033575_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.Size>::IndexOf(T,System.UInt32&)
il2cpp_hresult_t IVectorView_1_IndexOf_m1205944866_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Size_t550917638  ___value0, uint32_t* ___index1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_IndexOf_m1205944866_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___index1' to managed representation
	uint32_t ____index1_empty = 0;

	// Managed method invocation
	bool returnValue;
	try
	{
		____index1_empty = 0;
		returnValue = false;

		int elementsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Windows.Foundation.Size>::get_Count() */, IReadOnlyCollection_1_t554033575_il2cpp_TypeInfo_var, __this);
		for (int i = 0; i < elementsInCollection; i++)
		{
			Size_t550917638  item = InterfaceFuncInvoker1< Size_t550917638 , int32_t >::Invoke(0 /* T System.Collections.Generic.IReadOnlyList`1<Windows.Foundation.Size>::get_Item(System.Int32) */, IReadOnlyList_1_t1115340544_il2cpp_TypeInfo_var, __this, i);
			if (Size_Equals_m1950794187((&item), Box(Size_t550917638_il2cpp_TypeInfo_var, &___value0), NULL))
			{
				____index1_empty = static_cast<uint32_t>(i);
				returnValue = true;
				break;
			}
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter '___index1' back from managed representation
	*___index1 = ____index1_empty;

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.Size>::GetMany(System.UInt32,T[])
il2cpp_hresult_t IVectorView_1_GetMany_m2898007465_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, Size_t550917638 * ___items1, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_GetMany_m2898007465_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		uint32_t elementsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Windows.Foundation.Size>::get_Count() */, IReadOnlyCollection_1_t554033575_il2cpp_TypeInfo_var, __this);
		if (___startIndex0 != elementsInCollection && ___items1 != NULL)
		{
			if (___startIndex0 > elementsInCollection || ___startIndex0 > 2147483647)
			{
				ArgumentOutOfRangeException_t777629997 * exception = (ArgumentOutOfRangeException_t777629997*)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
				ArgumentOutOfRangeException__ctor_m3628145864(exception, _stringLiteral797640427, NULL);
				Exception_set_HResult_m3489164646(exception, -2147483637, NULL); // E_BOUNDS
				IL2CPP_RAISE_MANAGED_EXCEPTION(exception, NULL, NULL);
			}
			returnValue = std::min(___items1ArraySize, elementsInCollection - ___startIndex0);
			for (uint32_t i = 0; i < returnValue; i++)
			{
				Size_t550917638  itemManaged = InterfaceFuncInvoker1< Size_t550917638 , int32_t >::Invoke(0 /* T System.Collections.Generic.IReadOnlyList`1<Windows.Foundation.Size>::get_Item(System.Int32) */, IReadOnlyList_1_t1115340544_il2cpp_TypeInfo_var, __this, i + ___startIndex0);
				___items1[i] = itemManaged;
			}
		}
		else
		{
			returnValue = 0;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for T Windows.Foundation.Collections.IVector`1<Windows.Foundation.Rect>::GetAt(System.UInt32)
il2cpp_hresult_t IVector_1_GetAt_m3545656912_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Rect_t2695113487 * comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetAt_m3545656912_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	Rect_t2695113487  returnValue;
	try
	{
		try
		{
			returnValue = InterfaceFuncInvoker1< Rect_t2695113487 , int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<Windows.Foundation.Rect>::get_Item(System.Int32) */, IList_1_t215465974_il2cpp_TypeInfo_var, __this, ___index0);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			if (IsInst(ex.ex, ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var))
			{
				ex.ex->hresult = -2147483637; // E_BOUNDS
			}

			throw;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IVector`1<Windows.Foundation.Rect>::get_Size()
il2cpp_hresult_t IVector_1_get_Size_m2774852035_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_get_Size_m2774852035_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Windows.Foundation.Rect>::get_Count() */, ICollection_1_t1228298425_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Collections.Generic.IReadOnlyList`1<T> Windows.Foundation.Collections.IVector`1<Windows.Foundation.Rect>::GetView()
il2cpp_hresult_t IVector_1_GetView_m3695632509_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IVectorView_1_t2033978749** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetView_m3695632509_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		RuntimeObject* __thisValue = __this;
		if (IsInst(__thisValue, IReadOnlyList_1_t3259536393_il2cpp_TypeInfo_var))
		{
			returnValue = __thisValue;
		}
		else
		{
			ReadOnlyCollection_1_t3907689774 * readOnlyCollection = (ReadOnlyCollection_1_t3907689774*)il2cpp_codegen_object_new(ReadOnlyCollection_1_t3907689774_il2cpp_TypeInfo_var);
			ReadOnlyCollection_1__ctor_m906551492(readOnlyCollection, __thisValue, ReadOnlyCollection_1__ctor_m906551492_RuntimeMethod_var);
			returnValue = readOnlyCollection;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IVectorView_1_t2033978749* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(IVectorView_1_t2033978749::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IVectorView_1_t2033978749>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IVector`1<Windows.Foundation.Rect>::IndexOf(T,System.UInt32&)
il2cpp_hresult_t IVector_1_IndexOf_m2583104291_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Rect_t2695113487  ___value0, uint32_t* ___index1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_IndexOf_m2583104291_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___index1' to managed representation
	uint32_t ____index1_empty = 0;

	// Managed method invocation
	bool returnValue;
	try
	{
		____index1_empty = 0;
		returnValue = false;

		int elementsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Windows.Foundation.Rect>::get_Count() */, ICollection_1_t1228298425_il2cpp_TypeInfo_var, __this);
		for (int i = 0; i < elementsInCollection; i++)
		{
			Rect_t2695113487  item = InterfaceFuncInvoker1< Rect_t2695113487 , int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<Windows.Foundation.Rect>::get_Item(System.Int32) */, IList_1_t215465974_il2cpp_TypeInfo_var, __this, i);
			if (Rect_Equals_m2314324014((&item), Box(Rect_t2695113487_il2cpp_TypeInfo_var, &___value0), NULL))
			{
				____index1_empty = static_cast<uint32_t>(i);
				returnValue = true;
				break;
			}
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter '___index1' back from managed representation
	*___index1 = ____index1_empty;

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.Rect>::SetAt(System.UInt32,T)
il2cpp_hresult_t IVector_1_SetAt_m661546338_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Rect_t2695113487  ___value1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_SetAt_m661546338_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		try
		{
			InterfaceActionInvoker2< int32_t, Rect_t2695113487  >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<Windows.Foundation.Rect>::set_Item(System.Int32,T) */, IList_1_t215465974_il2cpp_TypeInfo_var, __this, ___index0, ___value1);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			if (IsInst(ex.ex, ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var))
			{
				ex.ex->hresult = -2147483637; // E_BOUNDS
			}

			throw;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.Rect>::InsertAt(System.UInt32,T)
il2cpp_hresult_t IVector_1_InsertAt_m1857322035_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Rect_t2695113487  ___value1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_InsertAt_m1857322035_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		try
		{
			InterfaceActionInvoker2< int32_t, Rect_t2695113487  >::Invoke(3 /* System.Void System.Collections.Generic.IList`1<Windows.Foundation.Rect>::Insert(System.Int32,T) */, IList_1_t215465974_il2cpp_TypeInfo_var, __this, ___index0, ___value1);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			if (IsInst(ex.ex, ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var))
			{
				ex.ex->hresult = -2147483637; // E_BOUNDS
			}

			throw;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.Rect>::RemoveAt(System.UInt32)
il2cpp_hresult_t IVector_1_RemoveAt_m3994675881_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_RemoveAt_m3994675881_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		try
		{
			InterfaceActionInvoker1< int32_t >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<Windows.Foundation.Rect>::RemoveAt(System.Int32) */, IList_1_t215465974_il2cpp_TypeInfo_var, __this, ___index0);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			if (IsInst(ex.ex, ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var))
			{
				ex.ex->hresult = -2147483637; // E_BOUNDS
			}

			throw;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.Rect>::Append(T)
il2cpp_hresult_t IVector_1_Append_m4126265023_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Rect_t2695113487  ___value0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_Append_m4126265023_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker1< Rect_t2695113487  >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<Windows.Foundation.Rect>::Add(T) */, ICollection_1_t1228298425_il2cpp_TypeInfo_var, __thisValue, ___value0);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.Rect>::RemoveAtEnd()
il2cpp_hresult_t IVector_1_RemoveAtEnd_m298642047_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_RemoveAtEnd_m298642047_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		int32_t itemsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Windows.Foundation.Rect>::get_Count() */, ICollection_1_t1228298425_il2cpp_TypeInfo_var, __thisValue);
		if (itemsInCollection == 0)
		{
			InvalidOperationException_t56020091 * exception = (InvalidOperationException_t56020091*)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
			InvalidOperationException__ctor_m237278729(exception, _stringLiteral1050527596, NULL);
			Exception_set_HResult_m3489164646(exception, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(exception, NULL, NULL);
		}
		InterfaceActionInvoker1< int32_t >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<Windows.Foundation.Rect>::RemoveAt(System.Int32) */, IList_1_t215465974_il2cpp_TypeInfo_var, __thisValue, itemsInCollection - 1);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.Rect>::Clear()
il2cpp_hresult_t IVector_1_Clear_m26527518_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_Clear_m26527518_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<Windows.Foundation.Rect>::Clear() */, ICollection_1_t1228298425_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IVector`1<Windows.Foundation.Rect>::GetMany(System.UInt32,T[])
il2cpp_hresult_t IVector_1_GetMany_m476750240_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, Rect_t2695113487 * ___items1, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetMany_m476750240_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		uint32_t elementsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Windows.Foundation.Rect>::get_Count() */, ICollection_1_t1228298425_il2cpp_TypeInfo_var, __this);
		if (___startIndex0 != elementsInCollection && ___items1 != NULL)
		{
			if (___startIndex0 > elementsInCollection || ___startIndex0 > 2147483647)
			{
				ArgumentOutOfRangeException_t777629997 * exception = (ArgumentOutOfRangeException_t777629997*)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
				ArgumentOutOfRangeException__ctor_m3628145864(exception, _stringLiteral797640427, NULL);
				Exception_set_HResult_m3489164646(exception, -2147483637, NULL); // E_BOUNDS
				IL2CPP_RAISE_MANAGED_EXCEPTION(exception, NULL, NULL);
			}
			returnValue = std::min(___items1ArraySize, elementsInCollection - ___startIndex0);
			for (uint32_t i = 0; i < returnValue; i++)
			{
				Rect_t2695113487  itemManaged = InterfaceFuncInvoker1< Rect_t2695113487 , int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<Windows.Foundation.Rect>::get_Item(System.Int32) */, IList_1_t215465974_il2cpp_TypeInfo_var, __this, i + ___startIndex0);
				___items1[i] = itemManaged;
			}
		}
		else
		{
			returnValue = 0;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.Rect>::ReplaceAll(T[])
il2cpp_hresult_t IVector_1_ReplaceAll_m2673034237_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___items0ArraySize, Rect_t2695113487 * ___items0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_ReplaceAll_m2673034237_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___items0' to managed representation
	RectU5BU5D_t5657558* ____items0_unmarshaled = NULL;
	if (___items0 != NULL)
	{
		____items0_unmarshaled = reinterpret_cast<RectU5BU5D_t5657558*>(SZArrayNew(RectU5BU5D_t5657558_il2cpp_TypeInfo_var, static_cast<int32_t>(___items0ArraySize)));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___items0ArraySize)); i++)
		{
			(____items0_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___items0)[i]);
		}
	}

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<Windows.Foundation.Rect>::Clear() */, ICollection_1_t1228298425_il2cpp_TypeInfo_var, __thisValue);
		if (____items0_unmarshaled != NULL)
		{
			il2cpp_array_size_t itemsInCollection = ____items0_unmarshaled->max_length;
			for (il2cpp_array_size_t i = 0; i < itemsInCollection; i++)
			{
				InterfaceActionInvoker1< Rect_t2695113487  >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<Windows.Foundation.Rect>::Add(T) */, ICollection_1_t1228298425_il2cpp_TypeInfo_var, __thisValue, (____items0_unmarshaled)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
			}
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Rect> adapter
struct IIterator_1_t569256960_Adapter IL2CPP_FINAL : il2cpp::vm::NonCachedCCWBase<IIterator_1_t569256960_Adapter>, IIterator_1_t569256960
{
	inline IIterator_1_t569256960_Adapter(RuntimeObject* obj) : il2cpp::vm::NonCachedCCWBase<IIterator_1_t569256960_Adapter>(obj), _initialized(false), _hasCurrent(false) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterator_1_t569256960::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterator_1_t569256960*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IIterator_1_t569256960::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetRuntimeClassName(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}
	virtual il2cpp_hresult_t STDCALL IIterator_1_get_Current_m1183023450(Rect_t2695113487 * comReturnValue) IL2CPP_OVERRIDE;
	virtual il2cpp_hresult_t STDCALL IIterator_1_get_HasCurrent_m1554425837(bool* comReturnValue) IL2CPP_OVERRIDE;
	virtual il2cpp_hresult_t STDCALL IIterator_1_MoveNext_m328760485(bool* comReturnValue) IL2CPP_OVERRIDE;
	virtual il2cpp_hresult_t STDCALL IIterator_1_GetMany_m269641506(uint32_t ___items0ArraySize, Rect_t2695113487 * ___items0, uint32_t* comReturnValue) IL2CPP_OVERRIDE;
private:
	bool _initialized;
	bool _hasCurrent;
	il2cpp_hresult_t Initialize();
	il2cpp_hresult_t GetCurrent(Rect_t2695113487 * comReturnValue);
	il2cpp_hresult_t MoveNext(bool* comReturnValue);
};
il2cpp_hresult_t IIterator_1_t569256960_Adapter::IIterator_1_get_Current_m1183023450(Rect_t2695113487 * comReturnValue)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;
	il2cpp_hresult_t hr = Initialize();
	if (IL2CPP_HR_FAILED(hr))
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		return hr;
	}
	return GetCurrent(comReturnValue);
}
il2cpp_hresult_t IIterator_1_t569256960_Adapter::IIterator_1_get_HasCurrent_m1554425837(bool* comReturnValue)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;
	il2cpp_hresult_t hr = Initialize();
	if (IL2CPP_HR_FAILED(hr))
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		return hr;
	}
	*comReturnValue = _hasCurrent;
	return IL2CPP_S_OK;
}
il2cpp_hresult_t IIterator_1_t569256960_Adapter::IIterator_1_MoveNext_m328760485(bool* comReturnValue)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;
	il2cpp_hresult_t hr = Initialize();
	if (IL2CPP_HR_FAILED(hr))
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		return hr;
	}
	hr = MoveNext(&_hasCurrent);
	*comReturnValue = _hasCurrent;
	return hr;
}
il2cpp_hresult_t IIterator_1_t569256960_Adapter::IIterator_1_GetMany_m269641506(uint32_t ___items0ArraySize, Rect_t2695113487 * ___items0, uint32_t* comReturnValue)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;
	il2cpp_hresult_t hr = Initialize();
	if (IL2CPP_HR_FAILED(hr))
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		return hr;
	}
	uint32_t count = 0;
	for (; _hasCurrent && (count < ___items0ArraySize); ++count)
	{
		hr = GetCurrent(___items0 + count);
		if (IL2CPP_HR_FAILED(hr))
		{
			*comReturnValue = count;
			return hr;
		}
		hr = MoveNext(&_hasCurrent);
		if (IL2CPP_HR_FAILED(hr))
		{
			*comReturnValue = count + 1;
			return hr;
		}
	}
	*comReturnValue = count;
	return IL2CPP_S_OK;
}
il2cpp_hresult_t IIterator_1_t569256960_Adapter::Initialize()
{
	if (_initialized)
	{
		return IL2CPP_S_OK;
	}
	il2cpp_hresult_t hr = MoveNext(&_hasCurrent);
	_initialized = IL2CPP_HR_SUCCEEDED(hr);
	return hr;
}
il2cpp_hresult_t IIterator_1_t569256960_Adapter::GetCurrent(Rect_t2695113487 * comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IIterator_1_t569256960_Adapter_GetCurrent_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	// Managed method invocation
	Rect_t2695113487  returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)GetManagedObjectInline();
		returnValue = InterfaceFuncInvoker0< Rect_t2695113487  >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Windows.Foundation.Rect>::get_Current() */, IEnumerator_1_t3127683955_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return (ex.ex->hresult == IL2CPP_COR_E_INVALIDOPERATION) ? IL2CPP_E_BOUNDS : ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
il2cpp_hresult_t IIterator_1_t569256960_Adapter::MoveNext(bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IIterator_1_t569256960_Adapter_MoveNext_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)GetManagedObjectInline();
		returnValue = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for Windows.Foundation.Collections.IIterator`1<T> Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Rect>::First()
il2cpp_hresult_t IIterable_1_First_m516406116_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t569256960** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IIterable_1_First_m516406116_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* returnValue;
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Windows.Foundation.Rect>::GetEnumerator() */, IEnumerable_1_t1674966376_il2cpp_TypeInfo_var, __thisValue);
		*comReturnValue = (returnValue != NULL) ? IIterator_1_t569256960_Adapter::__CreateInstance(returnValue) : NULL;
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for T Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.Rect>::GetAt(System.UInt32)
il2cpp_hresult_t IVectorView_1_GetAt_m2736327627_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Rect_t2695113487 * comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_GetAt_m2736327627_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	Rect_t2695113487  returnValue;
	try
	{
		try
		{
			returnValue = InterfaceFuncInvoker1< Rect_t2695113487 , int32_t >::Invoke(0 /* T System.Collections.Generic.IReadOnlyList`1<Windows.Foundation.Rect>::get_Item(System.Int32) */, IReadOnlyList_1_t3259536393_il2cpp_TypeInfo_var, __this, ___index0);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			if (IsInst(ex.ex, ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var))
			{
				ex.ex->hresult = -2147483637; // E_BOUNDS
			}

			throw;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.Rect>::get_Size()
il2cpp_hresult_t IVectorView_1_get_Size_m2984082999_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_get_Size_m2984082999_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Windows.Foundation.Rect>::get_Count() */, IReadOnlyCollection_1_t2698229424_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.Rect>::IndexOf(T,System.UInt32&)
il2cpp_hresult_t IVectorView_1_IndexOf_m3219133186_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Rect_t2695113487  ___value0, uint32_t* ___index1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_IndexOf_m3219133186_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___index1' to managed representation
	uint32_t ____index1_empty = 0;

	// Managed method invocation
	bool returnValue;
	try
	{
		____index1_empty = 0;
		returnValue = false;

		int elementsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Windows.Foundation.Rect>::get_Count() */, IReadOnlyCollection_1_t2698229424_il2cpp_TypeInfo_var, __this);
		for (int i = 0; i < elementsInCollection; i++)
		{
			Rect_t2695113487  item = InterfaceFuncInvoker1< Rect_t2695113487 , int32_t >::Invoke(0 /* T System.Collections.Generic.IReadOnlyList`1<Windows.Foundation.Rect>::get_Item(System.Int32) */, IReadOnlyList_1_t3259536393_il2cpp_TypeInfo_var, __this, i);
			if (Rect_Equals_m2314324014((&item), Box(Rect_t2695113487_il2cpp_TypeInfo_var, &___value0), NULL))
			{
				____index1_empty = static_cast<uint32_t>(i);
				returnValue = true;
				break;
			}
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter '___index1' back from managed representation
	*___index1 = ____index1_empty;

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.Rect>::GetMany(System.UInt32,T[])
il2cpp_hresult_t IVectorView_1_GetMany_m4144836697_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, Rect_t2695113487 * ___items1, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_GetMany_m4144836697_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		uint32_t elementsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Windows.Foundation.Rect>::get_Count() */, IReadOnlyCollection_1_t2698229424_il2cpp_TypeInfo_var, __this);
		if (___startIndex0 != elementsInCollection && ___items1 != NULL)
		{
			if (___startIndex0 > elementsInCollection || ___startIndex0 > 2147483647)
			{
				ArgumentOutOfRangeException_t777629997 * exception = (ArgumentOutOfRangeException_t777629997*)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
				ArgumentOutOfRangeException__ctor_m3628145864(exception, _stringLiteral797640427, NULL);
				Exception_set_HResult_m3489164646(exception, -2147483637, NULL); // E_BOUNDS
				IL2CPP_RAISE_MANAGED_EXCEPTION(exception, NULL, NULL);
			}
			returnValue = std::min(___items1ArraySize, elementsInCollection - ___startIndex0);
			for (uint32_t i = 0; i < returnValue; i++)
			{
				Rect_t2695113487  itemManaged = InterfaceFuncInvoker1< Rect_t2695113487 , int32_t >::Invoke(0 /* T System.Collections.Generic.IReadOnlyList`1<Windows.Foundation.Rect>::get_Item(System.Int32) */, IReadOnlyList_1_t3259536393_il2cpp_TypeInfo_var, __this, i + ___startIndex0);
				___items1[i] = itemManaged;
			}
		}
		else
		{
			returnValue = 0;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for T Windows.Foundation.Collections.IVector`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::GetAt(System.UInt32)
il2cpp_hresult_t IVector_1_GetAt_m3687365220_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, IWwwFormUrlDecoderEntry_t2943299970** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetAt_m3687365220_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		try
		{
			returnValue = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::get_Item(System.Int32) */, IList_1_t463652457_il2cpp_TypeInfo_var, __this, ___index0);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			if (IsInst(ex.ex, ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var))
			{
				ex.ex->hresult = -2147483637; // E_BOUNDS
			}

			throw;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IWwwFormUrlDecoderEntry_t2943299970* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(IWwwFormUrlDecoderEntry_t2943299970::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IWwwFormUrlDecoderEntry_t2943299970>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IVector`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::get_Size()
il2cpp_hresult_t IVector_1_get_Size_m853395603_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_get_Size_m853395603_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::get_Count() */, ICollection_1_t1476484908_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Collections.Generic.IReadOnlyList`1<T> Windows.Foundation.Collections.IVector`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::GetView()
il2cpp_hresult_t IVector_1_GetView_m2518531823_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IVectorView_1_t2282165232** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetView_m2518531823_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		RuntimeObject* __thisValue = __this;
		if (IsInst(__thisValue, IReadOnlyList_1_t3507722876_il2cpp_TypeInfo_var))
		{
			returnValue = __thisValue;
		}
		else
		{
			ReadOnlyCollection_1_t4155876257 * readOnlyCollection = (ReadOnlyCollection_1_t4155876257*)il2cpp_codegen_object_new(ReadOnlyCollection_1_t4155876257_il2cpp_TypeInfo_var);
			ReadOnlyCollection_1__ctor_m337395851(readOnlyCollection, __thisValue, ReadOnlyCollection_1__ctor_m337395851_RuntimeMethod_var);
			returnValue = readOnlyCollection;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IVectorView_1_t2282165232* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(IVectorView_1_t2282165232::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IVectorView_1_t2282165232>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IVector`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::IndexOf(T,System.UInt32&)
il2cpp_hresult_t IVector_1_IndexOf_m125330836_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IWwwFormUrlDecoderEntry_t2943299970* ___value0, uint32_t* ___index1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_IndexOf_m125330836_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___value0' to managed representation
	RuntimeObject* ____value0_unmarshaled = NULL;
	if (___value0 != NULL)
	{
		____value0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___value0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____value0_unmarshaled = NULL;
	}

	// Marshaling of parameter '___index1' to managed representation
	uint32_t ____index1_empty = 0;

	// Managed method invocation
	bool returnValue;
	try
	{
		____index1_empty = 0;
		returnValue = false;

		int elementsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::get_Count() */, ICollection_1_t1476484908_il2cpp_TypeInfo_var, __this);
		for (int i = 0; i < elementsInCollection; i++)
		{
			RuntimeObject* item = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::get_Item(System.Int32) */, IList_1_t463652457_il2cpp_TypeInfo_var, __this, i);
			if (VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, item, ____value0_unmarshaled))
			{
				____index1_empty = static_cast<uint32_t>(i);
				returnValue = true;
				break;
			}
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter '___index1' back from managed representation
	*___index1 = ____index1_empty;

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::SetAt(System.UInt32,T)
il2cpp_hresult_t IVector_1_SetAt_m314985913_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, IWwwFormUrlDecoderEntry_t2943299970* ___value1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_SetAt_m314985913_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___value1' to managed representation
	RuntimeObject* ____value1_unmarshaled = NULL;
	if (___value1 != NULL)
	{
		____value1_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___value1, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____value1_unmarshaled = NULL;
	}

	// Managed method invocation
	try
	{
		try
		{
			InterfaceActionInvoker2< int32_t, RuntimeObject* >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::set_Item(System.Int32,T) */, IList_1_t463652457_il2cpp_TypeInfo_var, __this, ___index0, ____value1_unmarshaled);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			if (IsInst(ex.ex, ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var))
			{
				ex.ex->hresult = -2147483637; // E_BOUNDS
			}

			throw;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::InsertAt(System.UInt32,T)
il2cpp_hresult_t IVector_1_InsertAt_m1485467707_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, IWwwFormUrlDecoderEntry_t2943299970* ___value1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_InsertAt_m1485467707_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___value1' to managed representation
	RuntimeObject* ____value1_unmarshaled = NULL;
	if (___value1 != NULL)
	{
		____value1_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___value1, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____value1_unmarshaled = NULL;
	}

	// Managed method invocation
	try
	{
		try
		{
			InterfaceActionInvoker2< int32_t, RuntimeObject* >::Invoke(3 /* System.Void System.Collections.Generic.IList`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::Insert(System.Int32,T) */, IList_1_t463652457_il2cpp_TypeInfo_var, __this, ___index0, ____value1_unmarshaled);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			if (IsInst(ex.ex, ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var))
			{
				ex.ex->hresult = -2147483637; // E_BOUNDS
			}

			throw;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::RemoveAt(System.UInt32)
il2cpp_hresult_t IVector_1_RemoveAt_m2725070673_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_RemoveAt_m2725070673_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		try
		{
			InterfaceActionInvoker1< int32_t >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::RemoveAt(System.Int32) */, IList_1_t463652457_il2cpp_TypeInfo_var, __this, ___index0);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			if (IsInst(ex.ex, ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var))
			{
				ex.ex->hresult = -2147483637; // E_BOUNDS
			}

			throw;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::Append(T)
il2cpp_hresult_t IVector_1_Append_m4022682317_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IWwwFormUrlDecoderEntry_t2943299970* ___value0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_Append_m4022682317_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___value0' to managed representation
	RuntimeObject* ____value0_unmarshaled = NULL;
	if (___value0 != NULL)
	{
		____value0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___value0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____value0_unmarshaled = NULL;
	}

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::Add(T) */, ICollection_1_t1476484908_il2cpp_TypeInfo_var, __thisValue, ____value0_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::RemoveAtEnd()
il2cpp_hresult_t IVector_1_RemoveAtEnd_m535504839_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_RemoveAtEnd_m535504839_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		int32_t itemsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::get_Count() */, ICollection_1_t1476484908_il2cpp_TypeInfo_var, __thisValue);
		if (itemsInCollection == 0)
		{
			InvalidOperationException_t56020091 * exception = (InvalidOperationException_t56020091*)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
			InvalidOperationException__ctor_m237278729(exception, _stringLiteral1050527596, NULL);
			Exception_set_HResult_m3489164646(exception, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(exception, NULL, NULL);
		}
		InterfaceActionInvoker1< int32_t >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::RemoveAt(System.Int32) */, IList_1_t463652457_il2cpp_TypeInfo_var, __thisValue, itemsInCollection - 1);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::Clear()
il2cpp_hresult_t IVector_1_Clear_m2360775652_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_Clear_m2360775652_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::Clear() */, ICollection_1_t1476484908_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IVector`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::GetMany(System.UInt32,T[])
il2cpp_hresult_t IVector_1_GetMany_m569725914_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, IWwwFormUrlDecoderEntry_t2943299970** ___items1, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetMany_m569725914_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		uint32_t elementsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::get_Count() */, ICollection_1_t1476484908_il2cpp_TypeInfo_var, __this);
		if (___startIndex0 != elementsInCollection && ___items1 != NULL)
		{
			if (___startIndex0 > elementsInCollection || ___startIndex0 > 2147483647)
			{
				ArgumentOutOfRangeException_t777629997 * exception = (ArgumentOutOfRangeException_t777629997*)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
				ArgumentOutOfRangeException__ctor_m3628145864(exception, _stringLiteral797640427, NULL);
				Exception_set_HResult_m3489164646(exception, -2147483637, NULL); // E_BOUNDS
				IL2CPP_RAISE_MANAGED_EXCEPTION(exception, NULL, NULL);
			}
			returnValue = std::min(___items1ArraySize, elementsInCollection - ___startIndex0);
			for (uint32_t i = 0; i < returnValue; i++)
			{
				RuntimeObject* itemManaged = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::get_Item(System.Int32) */, IList_1_t463652457_il2cpp_TypeInfo_var, __this, i + ___startIndex0);
				if (itemManaged != NULL)
				{
					if (il2cpp_codegen_is_import_or_windows_runtime(itemManaged))
					{
						il2cpp_hresult_t hr = ((Il2CppComObject *)itemManaged)->identity->QueryInterface(IWwwFormUrlDecoderEntry_t2943299970::IID, reinterpret_cast<void**>(&___items1[i]));
						il2cpp_codegen_com_raise_exception_if_failed(hr, false);
					}
					else
					{
						___items1[i] = il2cpp_codegen_com_get_or_create_ccw<IWwwFormUrlDecoderEntry_t2943299970>(itemManaged);
					}
				}
				else
				{
					___items1[i] = NULL;
				}
			}
		}
		else
		{
			returnValue = 0;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::ReplaceAll(T[])
il2cpp_hresult_t IVector_1_ReplaceAll_m2534884464_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___items0ArraySize, IWwwFormUrlDecoderEntry_t2943299970** ___items0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_ReplaceAll_m2534884464_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___items0' to managed representation
	IWwwFormUrlDecoderEntryU5BU5D_t40345143* ____items0_unmarshaled = NULL;
	if (___items0 != NULL)
	{
		if (____items0_unmarshaled == NULL)
		{
			____items0_unmarshaled = reinterpret_cast<IWwwFormUrlDecoderEntryU5BU5D_t40345143*>(SZArrayNew(IWwwFormUrlDecoderEntryU5BU5D_t40345143_il2cpp_TypeInfo_var, static_cast<int32_t>(___items0ArraySize)));
		}
		il2cpp_array_size_t _arrayLength = (____items0_unmarshaled)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			RuntimeObject* ____items0_i__unmarshaled = NULL;
			if ((___items0)[i] != NULL)
			{
				____items0_i__unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>((___items0)[i], Il2CppComObject_il2cpp_TypeInfo_var);
			}
			else
			{
				____items0_i__unmarshaled = NULL;
			}
			(____items0_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), ____items0_i__unmarshaled);
		}
	}

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::Clear() */, ICollection_1_t1476484908_il2cpp_TypeInfo_var, __thisValue);
		if (____items0_unmarshaled != NULL)
		{
			il2cpp_array_size_t itemsInCollection = ____items0_unmarshaled->max_length;
			for (il2cpp_array_size_t i = 0; i < itemsInCollection; i++)
			{
				InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::Add(T) */, ICollection_1_t1476484908_il2cpp_TypeInfo_var, __thisValue, (____items0_unmarshaled)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
			}
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Windows.Foundation.Collections.IIterator`1<Windows.Foundation.IWwwFormUrlDecoderEntry> adapter
struct IIterator_1_t817443443_Adapter IL2CPP_FINAL : il2cpp::vm::NonCachedCCWBase<IIterator_1_t817443443_Adapter>, IIterator_1_t817443443
{
	inline IIterator_1_t817443443_Adapter(RuntimeObject* obj) : il2cpp::vm::NonCachedCCWBase<IIterator_1_t817443443_Adapter>(obj), _initialized(false), _hasCurrent(false) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterator_1_t817443443::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterator_1_t817443443*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IIterator_1_t817443443::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetRuntimeClassName(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}
	virtual il2cpp_hresult_t STDCALL IIterator_1_get_Current_m1946311790(IWwwFormUrlDecoderEntry_t2943299970** comReturnValue) IL2CPP_OVERRIDE;
	virtual il2cpp_hresult_t STDCALL IIterator_1_get_HasCurrent_m4030884216(bool* comReturnValue) IL2CPP_OVERRIDE;
	virtual il2cpp_hresult_t STDCALL IIterator_1_MoveNext_m564191597(bool* comReturnValue) IL2CPP_OVERRIDE;
	virtual il2cpp_hresult_t STDCALL IIterator_1_GetMany_m402209304(uint32_t ___items0ArraySize, IWwwFormUrlDecoderEntry_t2943299970** ___items0, uint32_t* comReturnValue) IL2CPP_OVERRIDE;
private:
	bool _initialized;
	bool _hasCurrent;
	il2cpp_hresult_t Initialize();
	il2cpp_hresult_t GetCurrent(IWwwFormUrlDecoderEntry_t2943299970** comReturnValue);
	il2cpp_hresult_t MoveNext(bool* comReturnValue);
};
il2cpp_hresult_t IIterator_1_t817443443_Adapter::IIterator_1_get_Current_m1946311790(IWwwFormUrlDecoderEntry_t2943299970** comReturnValue)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;
	il2cpp_hresult_t hr = Initialize();
	if (IL2CPP_HR_FAILED(hr))
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		return hr;
	}
	return GetCurrent(comReturnValue);
}
il2cpp_hresult_t IIterator_1_t817443443_Adapter::IIterator_1_get_HasCurrent_m4030884216(bool* comReturnValue)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;
	il2cpp_hresult_t hr = Initialize();
	if (IL2CPP_HR_FAILED(hr))
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		return hr;
	}
	*comReturnValue = _hasCurrent;
	return IL2CPP_S_OK;
}
il2cpp_hresult_t IIterator_1_t817443443_Adapter::IIterator_1_MoveNext_m564191597(bool* comReturnValue)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;
	il2cpp_hresult_t hr = Initialize();
	if (IL2CPP_HR_FAILED(hr))
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		return hr;
	}
	hr = MoveNext(&_hasCurrent);
	*comReturnValue = _hasCurrent;
	return hr;
}
il2cpp_hresult_t IIterator_1_t817443443_Adapter::IIterator_1_GetMany_m402209304(uint32_t ___items0ArraySize, IWwwFormUrlDecoderEntry_t2943299970** ___items0, uint32_t* comReturnValue)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;
	il2cpp_hresult_t hr = Initialize();
	if (IL2CPP_HR_FAILED(hr))
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		return hr;
	}
	uint32_t count = 0;
	for (; _hasCurrent && (count < ___items0ArraySize); ++count)
	{
		hr = GetCurrent(___items0 + count);
		if (IL2CPP_HR_FAILED(hr))
		{
			*comReturnValue = count;
			return hr;
		}
		hr = MoveNext(&_hasCurrent);
		if (IL2CPP_HR_FAILED(hr))
		{
			*comReturnValue = count + 1;
			return hr;
		}
	}
	*comReturnValue = count;
	return IL2CPP_S_OK;
}
il2cpp_hresult_t IIterator_1_t817443443_Adapter::Initialize()
{
	if (_initialized)
	{
		return IL2CPP_S_OK;
	}
	il2cpp_hresult_t hr = MoveNext(&_hasCurrent);
	_initialized = IL2CPP_HR_SUCCEEDED(hr);
	return hr;
}
il2cpp_hresult_t IIterator_1_t817443443_Adapter::GetCurrent(IWwwFormUrlDecoderEntry_t2943299970** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IIterator_1_t817443443_Adapter_GetCurrent_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)GetManagedObjectInline();
		returnValue = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::get_Current() */, IEnumerator_1_t3375870438_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return (ex.ex->hresult == IL2CPP_COR_E_INVALIDOPERATION) ? IL2CPP_E_BOUNDS : ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IWwwFormUrlDecoderEntry_t2943299970* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(IWwwFormUrlDecoderEntry_t2943299970::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IWwwFormUrlDecoderEntry_t2943299970>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
il2cpp_hresult_t IIterator_1_t817443443_Adapter::MoveNext(bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IIterator_1_t817443443_Adapter_MoveNext_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)GetManagedObjectInline();
		returnValue = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for Windows.Foundation.Collections.IIterator`1<T> Windows.Foundation.Collections.IIterable`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::First()
il2cpp_hresult_t IIterable_1_First_m725484364_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t817443443** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IIterable_1_First_m725484364_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* returnValue;
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::GetEnumerator() */, IEnumerable_1_t1923152859_il2cpp_TypeInfo_var, __thisValue);
		*comReturnValue = (returnValue != NULL) ? IIterator_1_t817443443_Adapter::__CreateInstance(returnValue) : NULL;
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for T Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::GetAt(System.UInt32)
il2cpp_hresult_t IVectorView_1_GetAt_m2035733383_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, IWwwFormUrlDecoderEntry_t2943299970** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_GetAt_m2035733383_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		try
		{
			returnValue = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* T System.Collections.Generic.IReadOnlyList`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::get_Item(System.Int32) */, IReadOnlyList_1_t3507722876_il2cpp_TypeInfo_var, __this, ___index0);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			if (IsInst(ex.ex, ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var))
			{
				ex.ex->hresult = -2147483637; // E_BOUNDS
			}

			throw;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IWwwFormUrlDecoderEntry_t2943299970* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(IWwwFormUrlDecoderEntry_t2943299970::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IWwwFormUrlDecoderEntry_t2943299970>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::get_Size()
il2cpp_hresult_t IVectorView_1_get_Size_m2047203447_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_get_Size_m2047203447_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::get_Count() */, IReadOnlyCollection_1_t2946415907_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::IndexOf(T,System.UInt32&)
il2cpp_hresult_t IVectorView_1_IndexOf_m2753411397_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IWwwFormUrlDecoderEntry_t2943299970* ___value0, uint32_t* ___index1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_IndexOf_m2753411397_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___value0' to managed representation
	RuntimeObject* ____value0_unmarshaled = NULL;
	if (___value0 != NULL)
	{
		____value0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___value0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____value0_unmarshaled = NULL;
	}

	// Marshaling of parameter '___index1' to managed representation
	uint32_t ____index1_empty = 0;

	// Managed method invocation
	bool returnValue;
	try
	{
		____index1_empty = 0;
		returnValue = false;

		int elementsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::get_Count() */, IReadOnlyCollection_1_t2946415907_il2cpp_TypeInfo_var, __this);
		for (int i = 0; i < elementsInCollection; i++)
		{
			RuntimeObject* item = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* T System.Collections.Generic.IReadOnlyList`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::get_Item(System.Int32) */, IReadOnlyList_1_t3507722876_il2cpp_TypeInfo_var, __this, i);
			if (VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, item, ____value0_unmarshaled))
			{
				____index1_empty = static_cast<uint32_t>(i);
				returnValue = true;
				break;
			}
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter '___index1' back from managed representation
	*___index1 = ____index1_empty;

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::GetMany(System.UInt32,T[])
il2cpp_hresult_t IVectorView_1_GetMany_m66302439_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, IWwwFormUrlDecoderEntry_t2943299970** ___items1, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_GetMany_m66302439_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		uint32_t elementsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::get_Count() */, IReadOnlyCollection_1_t2946415907_il2cpp_TypeInfo_var, __this);
		if (___startIndex0 != elementsInCollection && ___items1 != NULL)
		{
			if (___startIndex0 > elementsInCollection || ___startIndex0 > 2147483647)
			{
				ArgumentOutOfRangeException_t777629997 * exception = (ArgumentOutOfRangeException_t777629997*)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
				ArgumentOutOfRangeException__ctor_m3628145864(exception, _stringLiteral797640427, NULL);
				Exception_set_HResult_m3489164646(exception, -2147483637, NULL); // E_BOUNDS
				IL2CPP_RAISE_MANAGED_EXCEPTION(exception, NULL, NULL);
			}
			returnValue = std::min(___items1ArraySize, elementsInCollection - ___startIndex0);
			for (uint32_t i = 0; i < returnValue; i++)
			{
				RuntimeObject* itemManaged = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* T System.Collections.Generic.IReadOnlyList`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::get_Item(System.Int32) */, IReadOnlyList_1_t3507722876_il2cpp_TypeInfo_var, __this, i + ___startIndex0);
				if (itemManaged != NULL)
				{
					if (il2cpp_codegen_is_import_or_windows_runtime(itemManaged))
					{
						il2cpp_hresult_t hr = ((Il2CppComObject *)itemManaged)->identity->QueryInterface(IWwwFormUrlDecoderEntry_t2943299970::IID, reinterpret_cast<void**>(&___items1[i]));
						il2cpp_codegen_com_raise_exception_if_failed(hr, false);
					}
					else
					{
						___items1[i] = il2cpp_codegen_com_get_or_create_ccw<IWwwFormUrlDecoderEntry_t2943299970>(itemManaged);
					}
				}
				else
				{
					___items1[i] = NULL;
				}
			}
		}
		else
		{
			returnValue = 0;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMap`2<System.String,System.String>::Lookup(K)
il2cpp_hresult_t IMap_2_Lookup_m3419416962_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, Il2CppHString* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Lookup_m3419416962_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	String_t* returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, String_t*, String_t** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.String>::TryGetValue(TKey,TValue&) */, IDictionary_2_t96558379_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppHString _returnValue_marshaled = NULL;
	if (returnValue == NULL)
	{
		IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("returnValue"), NULL, NULL);
	}
	_returnValue_marshaled = il2cpp_codegen_create_hstring(returnValue);

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMap`2<System.String,System.String>::get_Size()
il2cpp_hresult_t IMap_2_get_Size_m3747204495_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_get_Size_m3747204495_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Count() */, ICollection_1_t2563564093_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.String,System.String>::HasKey(K)
il2cpp_hresult_t IMap_2_HasKey_m1327307936_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_HasKey_m1327307936_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, String_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.String>::ContainsKey(TKey) */, IDictionary_2_t96558379_il2cpp_TypeInfo_var, __thisValue, ____key0_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Collections.Generic.IReadOnlyDictionary`2<K,V> Windows.Foundation.Collections.IMap`2<System.String,System.String>::GetView()
il2cpp_hresult_t IMap_2_GetView_m1648969448_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t3381683652** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_GetView_m1648969448_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		RuntimeObject* __thisValue = __this;
		if (IsInst(__thisValue, IReadOnlyDictionary_2_t2048676384_il2cpp_TypeInfo_var))
		{
			returnValue = __thisValue;
		}
		else
		{
			ReadOnlyDictionary_2_t632046715 * readOnlyDictionary = (ReadOnlyDictionary_2_t632046715*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_t632046715_il2cpp_TypeInfo_var);
			ReadOnlyDictionary_2__ctor_m461640262(readOnlyDictionary, __thisValue, ReadOnlyDictionary_2__ctor_m461640262_RuntimeMethod_var);
			returnValue = readOnlyDictionary;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IMapView_2_t3381683652* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(IMapView_2_t3381683652::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t3381683652>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.String,System.String>::Insert(K,V)
il2cpp_hresult_t IMap_2_Insert_m3135696435_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, Il2CppHString ___value1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Insert_m3135696435_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Marshaling of parameter '___value1' to managed representation
	String_t* ____value1_unmarshaled = NULL;
	____value1_unmarshaled = il2cpp_codegen_marshal_hstring_result(___value1);

	// Managed method invocation
	bool returnValue;
	try
	{
		returnValue = InterfaceFuncInvoker1< bool, String_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.String>::ContainsKey(TKey) */, IDictionary_2_t96558379_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.String>::set_Item(TKey,TValue) */, IDictionary_2_t96558379_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, ____value1_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.String,System.String>::Remove(K)
il2cpp_hresult_t IMap_2_Remove_m3800098948_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Remove_m3800098948_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	try
	{
		bool removed = InterfaceFuncInvoker1< bool, String_t* >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.String>::Remove(TKey) */, IDictionary_2_t96558379_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled);

		if (!removed)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.String,System.String>::Clear()
il2cpp_hresult_t IMap_2_Clear_m3867596926_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Clear_m3867596926_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::Clear() */, ICollection_1_t2563564093_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMapView`2<System.String,System.String>::Lookup(K)
il2cpp_hresult_t IMapView_2_Lookup_m1783676987_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, Il2CppHString* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Lookup_m1783676987_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	String_t* returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, String_t*, String_t** >::Invoke(1 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.String>::TryGetValue(TKey,TValue&) */, IReadOnlyDictionary_2_t2048676384_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppHString _returnValue_marshaled = NULL;
	if (returnValue == NULL)
	{
		IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("returnValue"), NULL, NULL);
	}
	_returnValue_marshaled = il2cpp_codegen_create_hstring(returnValue);

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMapView`2<System.String,System.String>::get_Size()
il2cpp_hresult_t IMapView_2_get_Size_m3316105878_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_get_Size_m3316105878_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Count() */, IReadOnlyCollection_1_t4033495092_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMapView`2<System.String,System.String>::HasKey(K)
il2cpp_hresult_t IMapView_2_HasKey_m1003035185_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_HasKey_m1003035185_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, String_t* >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.String>::ContainsKey(TKey) */, IReadOnlyDictionary_2_t2048676384_il2cpp_TypeInfo_var, __thisValue, ____key0_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMapView`2<System.String,System.String>::Split(System.Collections.Generic.IReadOnlyDictionary`2<K,V>&,System.Collections.Generic.IReadOnlyDictionary`2<K,V>&)
il2cpp_hresult_t IMapView_2_Split_m978754527_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t3381683652** ___first0, IMapView_2_t3381683652** ___second1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Split_m978754527_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___first0' to managed representation
	RuntimeObject* ____first0_empty = NULL;

	// Marshaling of parameter '___second1' to managed representation
	RuntimeObject* ____second1_empty = NULL;

	// Managed method invocation
	try
	{
		int32_t itemsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Count() */, IReadOnlyCollection_1_t4033495092_il2cpp_TypeInfo_var, __this);
		if (itemsInCollection > 1)
		{
			ConstantSplittableMap_2_t1163566507 * splittableMap = (ConstantSplittableMap_2_t1163566507 *)IsInstSealed(__this, ConstantSplittableMap_2_t1163566507_il2cpp_TypeInfo_var);

			if (splittableMap == NULL)
			{
				splittableMap = (ConstantSplittableMap_2_t1163566507*)il2cpp_codegen_object_new(ConstantSplittableMap_2_t1163566507_il2cpp_TypeInfo_var);
				ConstantSplittableMap_2__ctor_m2462269511(splittableMap, __this, ConstantSplittableMap_2__ctor_m2462269511_RuntimeMethod_var);
			}

			ConstantSplittableMap_2_Split_m890587491(splittableMap, (&____first0_empty), (&____second1_empty), ConstantSplittableMap_2_Split_m890587491_RuntimeMethod_var);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter '___first0' back from managed representation
	if (____first0_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____first0_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____first0_empty)->identity->QueryInterface(IMapView_2_t3381683652::IID, reinterpret_cast<void**>(&*___first0));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___first0 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t3381683652>(____first0_empty);
		}
	}
	else
	{
		*___first0 = NULL;
	}

	// Marshaling of parameter '___second1' back from managed representation
	if (____second1_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____second1_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____second1_empty)->identity->QueryInterface(IMapView_2_t3381683652::IID, reinterpret_cast<void**>(&*___second1));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___second1 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t3381683652>(____second1_empty);
		}
	}
	else
	{
		*___second1 = NULL;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for K Windows.Foundation.Collections.IKeyValuePair`2<System.Object,System.Object>::get_Key()
il2cpp_hresult_t IKeyValuePair_2_get_Key_m2750152149_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Key_m2750152149_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject * returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Key_m4184817181((KeyValuePair_2_t2530217319*)UnBox(__thisValue, KeyValuePair_2_t2530217319_il2cpp_TypeInfo_var), KeyValuePair_2_get_Key_m4184817181_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppIInspectable* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IKeyValuePair`2<System.Object,System.Object>::get_Value()
il2cpp_hresult_t IKeyValuePair_2_get_Value_m2672088708_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Value_m2672088708_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject * returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Value_m1132502692((KeyValuePair_2_t2530217319*)UnBox(__thisValue, KeyValuePair_2_t2530217319_il2cpp_TypeInfo_var), KeyValuePair_2_get_Value_m1132502692_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppIInspectable* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMap`2<System.Object,System.Object>::Lookup(K)
il2cpp_hresult_t IMap_2_Lookup_m1731177585_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0, Il2CppIInspectable** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Lookup_m1731177585_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	RuntimeObject * returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject ** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&) */, IDictionary_2_t2891363839_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppIInspectable* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMap`2<System.Object,System.Object>::get_Size()
il2cpp_hresult_t IMap_2_get_Size_m3704454125_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_get_Size_m3704454125_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count() */, ICollection_1_t1063402257_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.Object,System.Object>::HasKey(K)
il2cpp_hresult_t IMap_2_HasKey_m2433635512_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_HasKey_m2433635512_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Object>::ContainsKey(TKey) */, IDictionary_2_t2891363839_il2cpp_TypeInfo_var, __thisValue, ____key0_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Collections.Generic.IReadOnlyDictionary`2<K,V> Windows.Foundation.Collections.IMap`2<System.Object,System.Object>::GetView()
il2cpp_hresult_t IMap_2_GetView_m2883253156_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t1881521816** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_GetView_m2883253156_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		RuntimeObject* __thisValue = __this;
		if (IsInst(__thisValue, IReadOnlyDictionary_2_t548514548_il2cpp_TypeInfo_var))
		{
			returnValue = __thisValue;
		}
		else
		{
			ReadOnlyDictionary_2_t3426852175 * readOnlyDictionary = (ReadOnlyDictionary_2_t3426852175*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_t3426852175_il2cpp_TypeInfo_var);
			ReadOnlyDictionary_2__ctor_m3044404427(readOnlyDictionary, __thisValue, ReadOnlyDictionary_2__ctor_m3044404427_RuntimeMethod_var);
			returnValue = readOnlyDictionary;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IMapView_2_t1881521816* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(IMapView_2_t1881521816::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t1881521816>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.Object,System.Object>::Insert(K,V)
il2cpp_hresult_t IMap_2_Insert_m335884934_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0, Il2CppIInspectable* ___value1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Insert_m335884934_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Marshaling of parameter '___value1' to managed representation
	RuntimeObject * ____value1_unmarshaled = NULL;
	if (___value1 != NULL)
	{
		____value1_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___value1, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____value1_unmarshaled = NULL;
	}

	// Managed method invocation
	bool returnValue;
	try
	{
		returnValue = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Object>::ContainsKey(TKey) */, IDictionary_2_t2891363839_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled);
		InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Object,System.Object>::set_Item(TKey,TValue) */, IDictionary_2_t2891363839_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, ____value1_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.Object,System.Object>::Remove(K)
il2cpp_hresult_t IMap_2_Remove_m3274472395_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Remove_m3274472395_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	try
	{
		bool removed = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Object>::Remove(TKey) */, IDictionary_2_t2891363839_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled);

		if (!removed)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.Object,System.Object>::Clear()
il2cpp_hresult_t IMap_2_Clear_m112521936_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Clear_m112521936_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear() */, ICollection_1_t1063402257_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMapView`2<System.Object,System.Object>::Lookup(K)
il2cpp_hresult_t IMapView_2_Lookup_m354916185_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0, Il2CppIInspectable** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Lookup_m354916185_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	RuntimeObject * returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject ** >::Invoke(1 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&) */, IReadOnlyDictionary_2_t548514548_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppIInspectable* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMapView`2<System.Object,System.Object>::get_Size()
il2cpp_hresult_t IMapView_2_get_Size_m1307357424_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_get_Size_m1307357424_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count() */, IReadOnlyCollection_1_t2533333256_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMapView`2<System.Object,System.Object>::HasKey(K)
il2cpp_hresult_t IMapView_2_HasKey_m1226002878_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_HasKey_m1226002878_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Object,System.Object>::ContainsKey(TKey) */, IReadOnlyDictionary_2_t548514548_il2cpp_TypeInfo_var, __thisValue, ____key0_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMapView`2<System.Object,System.Object>::Split(System.Collections.Generic.IReadOnlyDictionary`2<K,V>&,System.Collections.Generic.IReadOnlyDictionary`2<K,V>&)
il2cpp_hresult_t IMapView_2_Split_m3017881906_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t1881521816** ___first0, IMapView_2_t1881521816** ___second1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Split_m3017881906_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___first0' to managed representation
	RuntimeObject* ____first0_empty = NULL;

	// Marshaling of parameter '___second1' to managed representation
	RuntimeObject* ____second1_empty = NULL;

	// Managed method invocation
	try
	{
		int32_t itemsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count() */, IReadOnlyCollection_1_t2533333256_il2cpp_TypeInfo_var, __this);
		if (itemsInCollection > 1)
		{
			ConstantSplittableMap_2_t3958371967 * splittableMap = (ConstantSplittableMap_2_t3958371967 *)IsInstSealed(__this, ConstantSplittableMap_2_t3958371967_il2cpp_TypeInfo_var);

			if (splittableMap == NULL)
			{
				splittableMap = (ConstantSplittableMap_2_t3958371967*)il2cpp_codegen_object_new(ConstantSplittableMap_2_t3958371967_il2cpp_TypeInfo_var);
				ConstantSplittableMap_2__ctor_m4259417880(splittableMap, __this, ConstantSplittableMap_2__ctor_m4259417880_RuntimeMethod_var);
			}

			ConstantSplittableMap_2_Split_m2998943571(splittableMap, (&____first0_empty), (&____second1_empty), ConstantSplittableMap_2_Split_m2998943571_RuntimeMethod_var);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter '___first0' back from managed representation
	if (____first0_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____first0_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____first0_empty)->identity->QueryInterface(IMapView_2_t1881521816::IID, reinterpret_cast<void**>(&*___first0));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___first0 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t1881521816>(____first0_empty);
		}
	}
	else
	{
		*___first0 = NULL;
	}

	// Marshaling of parameter '___second1' back from managed representation
	if (____second1_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____second1_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____second1_empty)->identity->QueryInterface(IMapView_2_t1881521816::IID, reinterpret_cast<void**>(&*___second1));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___second1 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t1881521816>(____second1_empty);
		}
	}
	else
	{
		*___second1 = NULL;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for K Windows.Foundation.Collections.IKeyValuePair`2<System.String,System.String>::get_Key()
il2cpp_hresult_t IKeyValuePair_2_get_Key_m3013852749_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Key_m3013852749_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	String_t* returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Key_m865914345((KeyValuePair_2_t4030379155*)UnBox(__thisValue, KeyValuePair_2_t4030379155_il2cpp_TypeInfo_var), KeyValuePair_2_get_Key_m865914345_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppHString _returnValue_marshaled = NULL;
	if (returnValue == NULL)
	{
		IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("returnValue"), NULL, NULL);
	}
	_returnValue_marshaled = il2cpp_codegen_create_hstring(returnValue);

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IKeyValuePair`2<System.String,System.String>::get_Value()
il2cpp_hresult_t IKeyValuePair_2_get_Value_m2003745203_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Value_m2003745203_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	String_t* returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Value_m1897740815((KeyValuePair_2_t4030379155*)UnBox(__thisValue, KeyValuePair_2_t4030379155_il2cpp_TypeInfo_var), KeyValuePair_2_get_Value_m1897740815_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppHString _returnValue_marshaled = NULL;
	if (returnValue == NULL)
	{
		IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("returnValue"), NULL, NULL);
	}
	_returnValue_marshaled = il2cpp_codegen_create_hstring(returnValue);

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMap`2<System.Guid,System.Type>::Lookup(K)
il2cpp_hresult_t IMap_2_Lookup_m372021310_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Guid_t  ___key0, Il2CppWindowsRuntimeTypeName* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Lookup_m372021310_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	Type_t * returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, Guid_t , Type_t ** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Guid,System.Type>::TryGetValue(TKey,TValue&) */, IDictionary_2_t4291780980_il2cpp_TypeInfo_var, __this, ___key0, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppWindowsRuntimeTypeName _returnValue_marshaled = Il2CppWindowsRuntimeTypeName();
	il2cpp_codegen_marshal_type_to_native(returnValue, _returnValue_marshaled);

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMap`2<System.Guid,System.Type>::get_Size()
il2cpp_hresult_t IMap_2_get_Size_m4209346384_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_get_Size_m4209346384_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Guid,System.Type>>::get_Count() */, ICollection_1_t2463819398_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.Guid,System.Type>::HasKey(K)
il2cpp_hresult_t IMap_2_HasKey_m2767397819_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Guid_t  ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_HasKey_m2767397819_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, Guid_t  >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Guid,System.Type>::ContainsKey(TKey) */, IDictionary_2_t4291780980_il2cpp_TypeInfo_var, __thisValue, ___key0);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Collections.Generic.IReadOnlyDictionary`2<K,V> Windows.Foundation.Collections.IMap`2<System.Guid,System.Type>::GetView()
il2cpp_hresult_t IMap_2_GetView_m3956818822_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t3281938957** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_GetView_m3956818822_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		RuntimeObject* __thisValue = __this;
		if (IsInst(__thisValue, IReadOnlyDictionary_2_t1948931689_il2cpp_TypeInfo_var))
		{
			returnValue = __thisValue;
		}
		else
		{
			ReadOnlyDictionary_2_t532302020 * readOnlyDictionary = (ReadOnlyDictionary_2_t532302020*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_t532302020_il2cpp_TypeInfo_var);
			ReadOnlyDictionary_2__ctor_m3720374228(readOnlyDictionary, __thisValue, ReadOnlyDictionary_2__ctor_m3720374228_RuntimeMethod_var);
			returnValue = readOnlyDictionary;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IMapView_2_t3281938957* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(IMapView_2_t3281938957::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t3281938957>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.Guid,System.Type>::Insert(K,V)
il2cpp_hresult_t IMap_2_Insert_m52862695_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Guid_t  ___key0, Il2CppWindowsRuntimeTypeName ___value1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Insert_m52862695_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___value1' to managed representation
	Type_t * ____value1_unmarshaled = NULL;
	____value1_unmarshaled = il2cpp_codegen_marshal_type_from_native(___value1);

	// Managed method invocation
	bool returnValue;
	try
	{
		returnValue = InterfaceFuncInvoker1< bool, Guid_t  >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Guid,System.Type>::ContainsKey(TKey) */, IDictionary_2_t4291780980_il2cpp_TypeInfo_var, __this, ___key0);
		InterfaceActionInvoker2< Guid_t , Type_t * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Guid,System.Type>::set_Item(TKey,TValue) */, IDictionary_2_t4291780980_il2cpp_TypeInfo_var, __this, ___key0, ____value1_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.Guid,System.Type>::Remove(K)
il2cpp_hresult_t IMap_2_Remove_m441912298_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Guid_t  ___key0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Remove_m441912298_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		bool removed = InterfaceFuncInvoker1< bool, Guid_t  >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Guid,System.Type>::Remove(TKey) */, IDictionary_2_t4291780980_il2cpp_TypeInfo_var, __this, ___key0);

		if (!removed)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.Guid,System.Type>::Clear()
il2cpp_hresult_t IMap_2_Clear_m1518512299_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Clear_m1518512299_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Guid,System.Type>>::Clear() */, ICollection_1_t2463819398_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMapView`2<System.Guid,System.Type>::Lookup(K)
il2cpp_hresult_t IMapView_2_Lookup_m3896662699_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Guid_t  ___key0, Il2CppWindowsRuntimeTypeName* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Lookup_m3896662699_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	Type_t * returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, Guid_t , Type_t ** >::Invoke(1 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Guid,System.Type>::TryGetValue(TKey,TValue&) */, IReadOnlyDictionary_2_t1948931689_il2cpp_TypeInfo_var, __this, ___key0, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppWindowsRuntimeTypeName _returnValue_marshaled = Il2CppWindowsRuntimeTypeName();
	il2cpp_codegen_marshal_type_to_native(returnValue, _returnValue_marshaled);

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMapView`2<System.Guid,System.Type>::get_Size()
il2cpp_hresult_t IMapView_2_get_Size_m2349127300_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_get_Size_m2349127300_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Guid,System.Type>>::get_Count() */, IReadOnlyCollection_1_t3933750397_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMapView`2<System.Guid,System.Type>::HasKey(K)
il2cpp_hresult_t IMapView_2_HasKey_m1382000797_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Guid_t  ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_HasKey_m1382000797_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, Guid_t  >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Guid,System.Type>::ContainsKey(TKey) */, IReadOnlyDictionary_2_t1948931689_il2cpp_TypeInfo_var, __thisValue, ___key0);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMapView`2<System.Guid,System.Type>::Split(System.Collections.Generic.IReadOnlyDictionary`2<K,V>&,System.Collections.Generic.IReadOnlyDictionary`2<K,V>&)
il2cpp_hresult_t IMapView_2_Split_m2592840147_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t3281938957** ___first0, IMapView_2_t3281938957** ___second1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Split_m2592840147_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___first0' to managed representation
	RuntimeObject* ____first0_empty = NULL;

	// Marshaling of parameter '___second1' to managed representation
	RuntimeObject* ____second1_empty = NULL;

	// Managed method invocation
	try
	{
		int32_t itemsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Guid,System.Type>>::get_Count() */, IReadOnlyCollection_1_t3933750397_il2cpp_TypeInfo_var, __this);
		if (itemsInCollection > 1)
		{
			ConstantSplittableMap_2_t1063821812 * splittableMap = (ConstantSplittableMap_2_t1063821812 *)IsInstSealed(__this, ConstantSplittableMap_2_t1063821812_il2cpp_TypeInfo_var);

			if (splittableMap == NULL)
			{
				splittableMap = (ConstantSplittableMap_2_t1063821812*)il2cpp_codegen_object_new(ConstantSplittableMap_2_t1063821812_il2cpp_TypeInfo_var);
				ConstantSplittableMap_2__ctor_m4057205974(splittableMap, __this, ConstantSplittableMap_2__ctor_m4057205974_RuntimeMethod_var);
			}

			ConstantSplittableMap_2_Split_m4122198191(splittableMap, (&____first0_empty), (&____second1_empty), ConstantSplittableMap_2_Split_m4122198191_RuntimeMethod_var);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter '___first0' back from managed representation
	if (____first0_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____first0_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____first0_empty)->identity->QueryInterface(IMapView_2_t3281938957::IID, reinterpret_cast<void**>(&*___first0));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___first0 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t3281938957>(____first0_empty);
		}
	}
	else
	{
		*___first0 = NULL;
	}

	// Marshaling of parameter '___second1' back from managed representation
	if (____second1_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____second1_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____second1_empty)->identity->QueryInterface(IMapView_2_t3281938957::IID, reinterpret_cast<void**>(&*___second1));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___second1 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t3281938957>(____second1_empty);
		}
	}
	else
	{
		*___second1 = NULL;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for K Windows.Foundation.Collections.IKeyValuePair`2<System.Guid,System.Object>::get_Key()
il2cpp_hresult_t IKeyValuePair_2_get_Key_m3324945768_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Guid_t * comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Key_m3324945768_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	Guid_t  returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Key_m4294704491((KeyValuePair_2_t231828568*)UnBox(__thisValue, KeyValuePair_2_t231828568_il2cpp_TypeInfo_var), KeyValuePair_2_get_Key_m4294704491_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IKeyValuePair`2<System.Guid,System.Object>::get_Value()
il2cpp_hresult_t IKeyValuePair_2_get_Value_m52124236_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Value_m52124236_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject * returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Value_m2666064688((KeyValuePair_2_t231828568*)UnBox(__thisValue, KeyValuePair_2_t231828568_il2cpp_TypeInfo_var), KeyValuePair_2_get_Value_m2666064688_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppIInspectable* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMap`2<System.Guid,System.Object>::Lookup(K)
il2cpp_hresult_t IMap_2_Lookup_m3068028334_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Guid_t  ___key0, Il2CppIInspectable** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Lookup_m3068028334_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject * returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, Guid_t , RuntimeObject ** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Guid,System.Object>::TryGetValue(TKey,TValue&) */, IDictionary_2_t592975088_il2cpp_TypeInfo_var, __this, ___key0, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppIInspectable* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMap`2<System.Guid,System.Object>::get_Size()
il2cpp_hresult_t IMap_2_get_Size_m1704379977_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_get_Size_m1704379977_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>>::get_Count() */, ICollection_1_t3059980802_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.Guid,System.Object>::HasKey(K)
il2cpp_hresult_t IMap_2_HasKey_m2236943020_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Guid_t  ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_HasKey_m2236943020_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, Guid_t  >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Guid,System.Object>::ContainsKey(TKey) */, IDictionary_2_t592975088_il2cpp_TypeInfo_var, __thisValue, ___key0);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Collections.Generic.IReadOnlyDictionary`2<K,V> Windows.Foundation.Collections.IMap`2<System.Guid,System.Object>::GetView()
il2cpp_hresult_t IMap_2_GetView_m3237694789_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t3878100361** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_GetView_m3237694789_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		RuntimeObject* __thisValue = __this;
		if (IsInst(__thisValue, IReadOnlyDictionary_2_t2545093093_il2cpp_TypeInfo_var))
		{
			returnValue = __thisValue;
		}
		else
		{
			ReadOnlyDictionary_2_t1128463424 * readOnlyDictionary = (ReadOnlyDictionary_2_t1128463424*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_t1128463424_il2cpp_TypeInfo_var);
			ReadOnlyDictionary_2__ctor_m2119190349(readOnlyDictionary, __thisValue, ReadOnlyDictionary_2__ctor_m2119190349_RuntimeMethod_var);
			returnValue = readOnlyDictionary;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IMapView_2_t3878100361* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(IMapView_2_t3878100361::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t3878100361>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.Guid,System.Object>::Insert(K,V)
il2cpp_hresult_t IMap_2_Insert_m1575381716_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Guid_t  ___key0, Il2CppIInspectable* ___value1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Insert_m1575381716_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___value1' to managed representation
	RuntimeObject * ____value1_unmarshaled = NULL;
	if (___value1 != NULL)
	{
		____value1_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___value1, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____value1_unmarshaled = NULL;
	}

	// Managed method invocation
	bool returnValue;
	try
	{
		returnValue = InterfaceFuncInvoker1< bool, Guid_t  >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Guid,System.Object>::ContainsKey(TKey) */, IDictionary_2_t592975088_il2cpp_TypeInfo_var, __this, ___key0);
		InterfaceActionInvoker2< Guid_t , RuntimeObject * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Guid,System.Object>::set_Item(TKey,TValue) */, IDictionary_2_t592975088_il2cpp_TypeInfo_var, __this, ___key0, ____value1_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.Guid,System.Object>::Remove(K)
il2cpp_hresult_t IMap_2_Remove_m3289693839_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Guid_t  ___key0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Remove_m3289693839_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		bool removed = InterfaceFuncInvoker1< bool, Guid_t  >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Guid,System.Object>::Remove(TKey) */, IDictionary_2_t592975088_il2cpp_TypeInfo_var, __this, ___key0);

		if (!removed)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.Guid,System.Object>::Clear()
il2cpp_hresult_t IMap_2_Clear_m2519350850_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Clear_m2519350850_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>>::Clear() */, ICollection_1_t3059980802_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMapView`2<System.Guid,System.Object>::Lookup(K)
il2cpp_hresult_t IMapView_2_Lookup_m3331997343_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Guid_t  ___key0, Il2CppIInspectable** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Lookup_m3331997343_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject * returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, Guid_t , RuntimeObject ** >::Invoke(1 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Guid,System.Object>::TryGetValue(TKey,TValue&) */, IReadOnlyDictionary_2_t2545093093_il2cpp_TypeInfo_var, __this, ___key0, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppIInspectable* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMapView`2<System.Guid,System.Object>::get_Size()
il2cpp_hresult_t IMapView_2_get_Size_m3858358881_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_get_Size_m3858358881_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>>::get_Count() */, IReadOnlyCollection_1_t234944505_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMapView`2<System.Guid,System.Object>::HasKey(K)
il2cpp_hresult_t IMapView_2_HasKey_m3111850129_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Guid_t  ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_HasKey_m3111850129_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, Guid_t  >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Guid,System.Object>::ContainsKey(TKey) */, IReadOnlyDictionary_2_t2545093093_il2cpp_TypeInfo_var, __thisValue, ___key0);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMapView`2<System.Guid,System.Object>::Split(System.Collections.Generic.IReadOnlyDictionary`2<K,V>&,System.Collections.Generic.IReadOnlyDictionary`2<K,V>&)
il2cpp_hresult_t IMapView_2_Split_m3394162196_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t3878100361** ___first0, IMapView_2_t3878100361** ___second1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Split_m3394162196_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___first0' to managed representation
	RuntimeObject* ____first0_empty = NULL;

	// Marshaling of parameter '___second1' to managed representation
	RuntimeObject* ____second1_empty = NULL;

	// Managed method invocation
	try
	{
		int32_t itemsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>>::get_Count() */, IReadOnlyCollection_1_t234944505_il2cpp_TypeInfo_var, __this);
		if (itemsInCollection > 1)
		{
			ConstantSplittableMap_2_t1659983216 * splittableMap = (ConstantSplittableMap_2_t1659983216 *)IsInstSealed(__this, ConstantSplittableMap_2_t1659983216_il2cpp_TypeInfo_var);

			if (splittableMap == NULL)
			{
				splittableMap = (ConstantSplittableMap_2_t1659983216*)il2cpp_codegen_object_new(ConstantSplittableMap_2_t1659983216_il2cpp_TypeInfo_var);
				ConstantSplittableMap_2__ctor_m2413510944(splittableMap, __this, ConstantSplittableMap_2__ctor_m2413510944_RuntimeMethod_var);
			}

			ConstantSplittableMap_2_Split_m3822801152(splittableMap, (&____first0_empty), (&____second1_empty), ConstantSplittableMap_2_Split_m3822801152_RuntimeMethod_var);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter '___first0' back from managed representation
	if (____first0_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____first0_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____first0_empty)->identity->QueryInterface(IMapView_2_t3878100361::IID, reinterpret_cast<void**>(&*___first0));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___first0 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t3878100361>(____first0_empty);
		}
	}
	else
	{
		*___first0 = NULL;
	}

	// Marshaling of parameter '___second1' back from managed representation
	if (____second1_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____second1_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____second1_empty)->identity->QueryInterface(IMapView_2_t3878100361::IID, reinterpret_cast<void**>(&*___second1));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___second1 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t3878100361>(____second1_empty);
		}
	}
	else
	{
		*___second1 = NULL;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for K Windows.Foundation.Collections.IKeyValuePair`2<System.Guid,System.Type>::get_Key()
il2cpp_hresult_t IKeyValuePair_2_get_Key_m1247672299_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Guid_t * comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Key_m1247672299_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	Guid_t  returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Key_m1325471274((KeyValuePair_2_t3930634460*)UnBox(__thisValue, KeyValuePair_2_t3930634460_il2cpp_TypeInfo_var), KeyValuePair_2_get_Key_m1325471274_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IKeyValuePair`2<System.Guid,System.Type>::get_Value()
il2cpp_hresult_t IKeyValuePair_2_get_Value_m3450640679_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Value_m3450640679_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	Type_t * returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Value_m859821292((KeyValuePair_2_t3930634460*)UnBox(__thisValue, KeyValuePair_2_t3930634460_il2cpp_TypeInfo_var), KeyValuePair_2_get_Value_m859821292_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppWindowsRuntimeTypeName _returnValue_marshaled = Il2CppWindowsRuntimeTypeName();
	il2cpp_codegen_marshal_type_to_native(returnValue, _returnValue_marshaled);

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMap`2<System.Int32,System.String>::Lookup(K)
il2cpp_hresult_t IMap_2_Lookup_m2973873145_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___key0, Il2CppHString* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Lookup_m2973873145_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	String_t* returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, int32_t, String_t** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,System.String>::TryGetValue(TKey,TValue&) */, IDictionary_2_t3494982707_il2cpp_TypeInfo_var, __this, ___key0, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppHString _returnValue_marshaled = NULL;
	if (returnValue == NULL)
	{
		IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("returnValue"), NULL, NULL);
	}
	_returnValue_marshaled = il2cpp_codegen_create_hstring(returnValue);

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMap`2<System.Int32,System.String>::get_Size()
il2cpp_hresult_t IMap_2_get_Size_m1266343471_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_get_Size_m1266343471_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.String>>::get_Count() */, ICollection_1_t1667021125_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.Int32,System.String>::HasKey(K)
il2cpp_hresult_t IMap_2_HasKey_m4050764019_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_HasKey_m4050764019_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,System.String>::ContainsKey(TKey) */, IDictionary_2_t3494982707_il2cpp_TypeInfo_var, __thisValue, ___key0);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Collections.Generic.IReadOnlyDictionary`2<K,V> Windows.Foundation.Collections.IMap`2<System.Int32,System.String>::GetView()
il2cpp_hresult_t IMap_2_GetView_m3445984058_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t2485140684** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_GetView_m3445984058_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		RuntimeObject* __thisValue = __this;
		if (IsInst(__thisValue, IReadOnlyDictionary_2_t1152133416_il2cpp_TypeInfo_var))
		{
			returnValue = __thisValue;
		}
		else
		{
			ReadOnlyDictionary_2_t4030471043 * readOnlyDictionary = (ReadOnlyDictionary_2_t4030471043*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_t4030471043_il2cpp_TypeInfo_var);
			ReadOnlyDictionary_2__ctor_m4155330511(readOnlyDictionary, __thisValue, ReadOnlyDictionary_2__ctor_m4155330511_RuntimeMethod_var);
			returnValue = readOnlyDictionary;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IMapView_2_t2485140684* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(IMapView_2_t2485140684::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t2485140684>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.Int32,System.String>::Insert(K,V)
il2cpp_hresult_t IMap_2_Insert_m267841037_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___key0, Il2CppHString ___value1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Insert_m267841037_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___value1' to managed representation
	String_t* ____value1_unmarshaled = NULL;
	____value1_unmarshaled = il2cpp_codegen_marshal_hstring_result(___value1);

	// Managed method invocation
	bool returnValue;
	try
	{
		returnValue = InterfaceFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,System.String>::ContainsKey(TKey) */, IDictionary_2_t3494982707_il2cpp_TypeInfo_var, __this, ___key0);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(TKey,TValue) */, IDictionary_2_t3494982707_il2cpp_TypeInfo_var, __this, ___key0, ____value1_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.Int32,System.String>::Remove(K)
il2cpp_hresult_t IMap_2_Remove_m4261353678_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___key0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Remove_m4261353678_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		bool removed = InterfaceFuncInvoker1< bool, int32_t >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,System.String>::Remove(TKey) */, IDictionary_2_t3494982707_il2cpp_TypeInfo_var, __this, ___key0);

		if (!removed)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.Int32,System.String>::Clear()
il2cpp_hresult_t IMap_2_Clear_m652986071_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Clear_m652986071_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.String>>::Clear() */, ICollection_1_t1667021125_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMapView`2<System.Int32,System.String>::Lookup(K)
il2cpp_hresult_t IMapView_2_Lookup_m2362372490_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___key0, Il2CppHString* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Lookup_m2362372490_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	String_t* returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, int32_t, String_t** >::Invoke(1 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Int32,System.String>::TryGetValue(TKey,TValue&) */, IReadOnlyDictionary_2_t1152133416_il2cpp_TypeInfo_var, __this, ___key0, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppHString _returnValue_marshaled = NULL;
	if (returnValue == NULL)
	{
		IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("returnValue"), NULL, NULL);
	}
	_returnValue_marshaled = il2cpp_codegen_create_hstring(returnValue);

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMapView`2<System.Int32,System.String>::get_Size()
il2cpp_hresult_t IMapView_2_get_Size_m2199812260_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_get_Size_m2199812260_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.String>>::get_Count() */, IReadOnlyCollection_1_t3136952124_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMapView`2<System.Int32,System.String>::HasKey(K)
il2cpp_hresult_t IMapView_2_HasKey_m2190770956_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_HasKey_m2190770956_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Int32,System.String>::ContainsKey(TKey) */, IReadOnlyDictionary_2_t1152133416_il2cpp_TypeInfo_var, __thisValue, ___key0);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMapView`2<System.Int32,System.String>::Split(System.Collections.Generic.IReadOnlyDictionary`2<K,V>&,System.Collections.Generic.IReadOnlyDictionary`2<K,V>&)
il2cpp_hresult_t IMapView_2_Split_m1911518659_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t2485140684** ___first0, IMapView_2_t2485140684** ___second1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Split_m1911518659_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___first0' to managed representation
	RuntimeObject* ____first0_empty = NULL;

	// Marshaling of parameter '___second1' to managed representation
	RuntimeObject* ____second1_empty = NULL;

	// Managed method invocation
	try
	{
		int32_t itemsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.String>>::get_Count() */, IReadOnlyCollection_1_t3136952124_il2cpp_TypeInfo_var, __this);
		if (itemsInCollection > 1)
		{
			ConstantSplittableMap_2_t267023539 * splittableMap = (ConstantSplittableMap_2_t267023539 *)IsInstSealed(__this, ConstantSplittableMap_2_t267023539_il2cpp_TypeInfo_var);

			if (splittableMap == NULL)
			{
				splittableMap = (ConstantSplittableMap_2_t267023539*)il2cpp_codegen_object_new(ConstantSplittableMap_2_t267023539_il2cpp_TypeInfo_var);
				ConstantSplittableMap_2__ctor_m1053382043(splittableMap, __this, ConstantSplittableMap_2__ctor_m1053382043_RuntimeMethod_var);
			}

			ConstantSplittableMap_2_Split_m4128904398(splittableMap, (&____first0_empty), (&____second1_empty), ConstantSplittableMap_2_Split_m4128904398_RuntimeMethod_var);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter '___first0' back from managed representation
	if (____first0_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____first0_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____first0_empty)->identity->QueryInterface(IMapView_2_t2485140684::IID, reinterpret_cast<void**>(&*___first0));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___first0 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t2485140684>(____first0_empty);
		}
	}
	else
	{
		*___first0 = NULL;
	}

	// Marshaling of parameter '___second1' back from managed representation
	if (____second1_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____second1_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____second1_empty)->identity->QueryInterface(IMapView_2_t2485140684::IID, reinterpret_cast<void**>(&*___second1));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___second1 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t2485140684>(____second1_empty);
		}
	}
	else
	{
		*___second1 = NULL;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for K Windows.Foundation.Collections.IKeyValuePair`2<System.Int32,System.Object>::get_Key()
il2cpp_hresult_t IKeyValuePair_2_get_Key_m2186241555_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Key_m2186241555_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Key_m4191308393((KeyValuePair_2_t71524366*)UnBox(__thisValue, KeyValuePair_2_t71524366_il2cpp_TypeInfo_var), KeyValuePair_2_get_Key_m4191308393_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IKeyValuePair`2<System.Int32,System.Object>::get_Value()
il2cpp_hresult_t IKeyValuePair_2_get_Value_m210688108_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Value_m210688108_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject * returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Value_m595908462((KeyValuePair_2_t71524366*)UnBox(__thisValue, KeyValuePair_2_t71524366_il2cpp_TypeInfo_var), KeyValuePair_2_get_Value_m595908462_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppIInspectable* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMap`2<System.Int32,System.Object>::Lookup(K)
il2cpp_hresult_t IMap_2_Lookup_m2451726409_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___key0, Il2CppIInspectable** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Lookup_m2451726409_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject * returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, int32_t, RuntimeObject ** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&) */, IDictionary_2_t432670886_il2cpp_TypeInfo_var, __this, ___key0, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppIInspectable* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMap`2<System.Int32,System.Object>::get_Size()
il2cpp_hresult_t IMap_2_get_Size_m2259249674_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_get_Size_m2259249674_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::get_Count() */, ICollection_1_t2899676600_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.Int32,System.Object>::HasKey(K)
il2cpp_hresult_t IMap_2_HasKey_m4208301656_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_HasKey_m4208301656_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,System.Object>::ContainsKey(TKey) */, IDictionary_2_t432670886_il2cpp_TypeInfo_var, __thisValue, ___key0);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Collections.Generic.IReadOnlyDictionary`2<K,V> Windows.Foundation.Collections.IMap`2<System.Int32,System.Object>::GetView()
il2cpp_hresult_t IMap_2_GetView_m3361060608_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t3717796159** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_GetView_m3361060608_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		RuntimeObject* __thisValue = __this;
		if (IsInst(__thisValue, IReadOnlyDictionary_2_t2384788891_il2cpp_TypeInfo_var))
		{
			returnValue = __thisValue;
		}
		else
		{
			ReadOnlyDictionary_2_t968159222 * readOnlyDictionary = (ReadOnlyDictionary_2_t968159222*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_t968159222_il2cpp_TypeInfo_var);
			ReadOnlyDictionary_2__ctor_m3621257446(readOnlyDictionary, __thisValue, ReadOnlyDictionary_2__ctor_m3621257446_RuntimeMethod_var);
			returnValue = readOnlyDictionary;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IMapView_2_t3717796159* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(IMapView_2_t3717796159::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t3717796159>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.Int32,System.Object>::Insert(K,V)
il2cpp_hresult_t IMap_2_Insert_m490092833_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___key0, Il2CppIInspectable* ___value1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Insert_m490092833_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___value1' to managed representation
	RuntimeObject * ____value1_unmarshaled = NULL;
	if (___value1 != NULL)
	{
		____value1_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___value1, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____value1_unmarshaled = NULL;
	}

	// Managed method invocation
	bool returnValue;
	try
	{
		returnValue = InterfaceFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,System.Object>::ContainsKey(TKey) */, IDictionary_2_t432670886_il2cpp_TypeInfo_var, __this, ___key0);
		InterfaceActionInvoker2< int32_t, RuntimeObject * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue) */, IDictionary_2_t432670886_il2cpp_TypeInfo_var, __this, ___key0, ____value1_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.Int32,System.Object>::Remove(K)
il2cpp_hresult_t IMap_2_Remove_m1067146362_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___key0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Remove_m1067146362_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		bool removed = InterfaceFuncInvoker1< bool, int32_t >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,System.Object>::Remove(TKey) */, IDictionary_2_t432670886_il2cpp_TypeInfo_var, __this, ___key0);

		if (!removed)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.Int32,System.Object>::Clear()
il2cpp_hresult_t IMap_2_Clear_m3558300509_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Clear_m3558300509_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::Clear() */, ICollection_1_t2899676600_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMapView`2<System.Int32,System.Object>::Lookup(K)
il2cpp_hresult_t IMapView_2_Lookup_m3742065343_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___key0, Il2CppIInspectable** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Lookup_m3742065343_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject * returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, int32_t, RuntimeObject ** >::Invoke(1 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&) */, IReadOnlyDictionary_2_t2384788891_il2cpp_TypeInfo_var, __this, ___key0, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppIInspectable* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMapView`2<System.Int32,System.Object>::get_Size()
il2cpp_hresult_t IMapView_2_get_Size_m1359240774_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_get_Size_m1359240774_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::get_Count() */, IReadOnlyCollection_1_t74640303_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMapView`2<System.Int32,System.Object>::HasKey(K)
il2cpp_hresult_t IMapView_2_HasKey_m973232472_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_HasKey_m973232472_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Int32,System.Object>::ContainsKey(TKey) */, IReadOnlyDictionary_2_t2384788891_il2cpp_TypeInfo_var, __thisValue, ___key0);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMapView`2<System.Int32,System.Object>::Split(System.Collections.Generic.IReadOnlyDictionary`2<K,V>&,System.Collections.Generic.IReadOnlyDictionary`2<K,V>&)
il2cpp_hresult_t IMapView_2_Split_m842968636_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t3717796159** ___first0, IMapView_2_t3717796159** ___second1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Split_m842968636_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___first0' to managed representation
	RuntimeObject* ____first0_empty = NULL;

	// Marshaling of parameter '___second1' to managed representation
	RuntimeObject* ____second1_empty = NULL;

	// Managed method invocation
	try
	{
		int32_t itemsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::get_Count() */, IReadOnlyCollection_1_t74640303_il2cpp_TypeInfo_var, __this);
		if (itemsInCollection > 1)
		{
			ConstantSplittableMap_2_t1499679014 * splittableMap = (ConstantSplittableMap_2_t1499679014 *)IsInstSealed(__this, ConstantSplittableMap_2_t1499679014_il2cpp_TypeInfo_var);

			if (splittableMap == NULL)
			{
				splittableMap = (ConstantSplittableMap_2_t1499679014*)il2cpp_codegen_object_new(ConstantSplittableMap_2_t1499679014_il2cpp_TypeInfo_var);
				ConstantSplittableMap_2__ctor_m3772921655(splittableMap, __this, ConstantSplittableMap_2__ctor_m3772921655_RuntimeMethod_var);
			}

			ConstantSplittableMap_2_Split_m2176297438(splittableMap, (&____first0_empty), (&____second1_empty), ConstantSplittableMap_2_Split_m2176297438_RuntimeMethod_var);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter '___first0' back from managed representation
	if (____first0_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____first0_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____first0_empty)->identity->QueryInterface(IMapView_2_t3717796159::IID, reinterpret_cast<void**>(&*___first0));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___first0 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t3717796159>(____first0_empty);
		}
	}
	else
	{
		*___first0 = NULL;
	}

	// Marshaling of parameter '___second1' back from managed representation
	if (____second1_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____second1_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____second1_empty)->identity->QueryInterface(IMapView_2_t3717796159::IID, reinterpret_cast<void**>(&*___second1));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___second1 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t3717796159>(____second1_empty);
		}
	}
	else
	{
		*___second1 = NULL;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for K Windows.Foundation.Collections.IKeyValuePair`2<System.Int32,System.String>::get_Key()
il2cpp_hresult_t IKeyValuePair_2_get_Key_m1229610178_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Key_m1229610178_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Key_m4022343918((KeyValuePair_2_t3133836187*)UnBox(__thisValue, KeyValuePair_2_t3133836187_il2cpp_TypeInfo_var), KeyValuePair_2_get_Key_m4022343918_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IKeyValuePair`2<System.Int32,System.String>::get_Value()
il2cpp_hresult_t IKeyValuePair_2_get_Value_m1911526895_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Value_m1911526895_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	String_t* returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Value_m200640467((KeyValuePair_2_t3133836187*)UnBox(__thisValue, KeyValuePair_2_t3133836187_il2cpp_TypeInfo_var), KeyValuePair_2_get_Value_m200640467_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppHString _returnValue_marshaled = NULL;
	if (returnValue == NULL)
	{
		IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("returnValue"), NULL, NULL);
	}
	_returnValue_marshaled = il2cpp_codegen_create_hstring(returnValue);

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMap`2<System.String,System.Object>::Lookup(K)
il2cpp_hresult_t IMap_2_Lookup_m3451048385_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, Il2CppIInspectable** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Lookup_m3451048385_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	RuntimeObject * returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, String_t*, RuntimeObject ** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::TryGetValue(TKey,TValue&) */, IDictionary_2_t1329213854_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppIInspectable* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMap`2<System.String,System.Object>::get_Size()
il2cpp_hresult_t IMap_2_get_Size_m2831091936_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_get_Size_m2831091936_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Count() */, ICollection_1_t3796219568_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.String,System.Object>::HasKey(K)
il2cpp_hresult_t IMap_2_HasKey_m1506256555_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_HasKey_m1506256555_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, String_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::ContainsKey(TKey) */, IDictionary_2_t1329213854_il2cpp_TypeInfo_var, __thisValue, ____key0_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Collections.Generic.IReadOnlyDictionary`2<K,V> Windows.Foundation.Collections.IMap`2<System.String,System.Object>::GetView()
il2cpp_hresult_t IMap_2_GetView_m3764174551_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t319371831** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_GetView_m3764174551_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		RuntimeObject* __thisValue = __this;
		if (IsInst(__thisValue, IReadOnlyDictionary_2_t3281331859_il2cpp_TypeInfo_var))
		{
			returnValue = __thisValue;
		}
		else
		{
			ReadOnlyDictionary_2_t1864702190 * readOnlyDictionary = (ReadOnlyDictionary_2_t1864702190*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_t1864702190_il2cpp_TypeInfo_var);
			ReadOnlyDictionary_2__ctor_m3912726125(readOnlyDictionary, __thisValue, ReadOnlyDictionary_2__ctor_m3912726125_RuntimeMethod_var);
			returnValue = readOnlyDictionary;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IMapView_2_t319371831* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(IMapView_2_t319371831::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t319371831>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.String,System.Object>::Insert(K,V)
il2cpp_hresult_t IMap_2_Insert_m3883043034_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, Il2CppIInspectable* ___value1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Insert_m3883043034_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Marshaling of parameter '___value1' to managed representation
	RuntimeObject * ____value1_unmarshaled = NULL;
	if (___value1 != NULL)
	{
		____value1_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___value1, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____value1_unmarshaled = NULL;
	}

	// Managed method invocation
	bool returnValue;
	try
	{
		returnValue = InterfaceFuncInvoker1< bool, String_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::ContainsKey(TKey) */, IDictionary_2_t1329213854_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled);
		InterfaceActionInvoker2< String_t*, RuntimeObject * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::set_Item(TKey,TValue) */, IDictionary_2_t1329213854_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, ____value1_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.String,System.Object>::Remove(K)
il2cpp_hresult_t IMap_2_Remove_m970902889_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Remove_m970902889_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	try
	{
		bool removed = InterfaceFuncInvoker1< bool, String_t* >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::Remove(TKey) */, IDictionary_2_t1329213854_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled);

		if (!removed)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.String,System.Object>::Clear()
il2cpp_hresult_t IMap_2_Clear_m3357622563_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Clear_m3357622563_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Clear() */, ICollection_1_t3796219568_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMapView`2<System.String,System.Object>::Lookup(K)
il2cpp_hresult_t IMapView_2_Lookup_m2993729319_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, Il2CppIInspectable** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Lookup_m2993729319_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	RuntimeObject * returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, String_t*, RuntimeObject ** >::Invoke(1 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.Object>::TryGetValue(TKey,TValue&) */, IReadOnlyDictionary_2_t3281331859_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppIInspectable* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMapView`2<System.String,System.Object>::get_Size()
il2cpp_hresult_t IMapView_2_get_Size_m2008534305_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_get_Size_m2008534305_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Count() */, IReadOnlyCollection_1_t971183271_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMapView`2<System.String,System.Object>::HasKey(K)
il2cpp_hresult_t IMapView_2_HasKey_m3205845981_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_HasKey_m3205845981_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, String_t* >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.Object>::ContainsKey(TKey) */, IReadOnlyDictionary_2_t3281331859_il2cpp_TypeInfo_var, __thisValue, ____key0_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMapView`2<System.String,System.Object>::Split(System.Collections.Generic.IReadOnlyDictionary`2<K,V>&,System.Collections.Generic.IReadOnlyDictionary`2<K,V>&)
il2cpp_hresult_t IMapView_2_Split_m1626200424_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t319371831** ___first0, IMapView_2_t319371831** ___second1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Split_m1626200424_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___first0' to managed representation
	RuntimeObject* ____first0_empty = NULL;

	// Marshaling of parameter '___second1' to managed representation
	RuntimeObject* ____second1_empty = NULL;

	// Managed method invocation
	try
	{
		int32_t itemsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Count() */, IReadOnlyCollection_1_t971183271_il2cpp_TypeInfo_var, __this);
		if (itemsInCollection > 1)
		{
			ConstantSplittableMap_2_t2396221982 * splittableMap = (ConstantSplittableMap_2_t2396221982 *)IsInstSealed(__this, ConstantSplittableMap_2_t2396221982_il2cpp_TypeInfo_var);

			if (splittableMap == NULL)
			{
				splittableMap = (ConstantSplittableMap_2_t2396221982*)il2cpp_codegen_object_new(ConstantSplittableMap_2_t2396221982_il2cpp_TypeInfo_var);
				ConstantSplittableMap_2__ctor_m245620443(splittableMap, __this, ConstantSplittableMap_2__ctor_m245620443_RuntimeMethod_var);
			}

			ConstantSplittableMap_2_Split_m1997543296(splittableMap, (&____first0_empty), (&____second1_empty), ConstantSplittableMap_2_Split_m1997543296_RuntimeMethod_var);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter '___first0' back from managed representation
	if (____first0_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____first0_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____first0_empty)->identity->QueryInterface(IMapView_2_t319371831::IID, reinterpret_cast<void**>(&*___first0));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___first0 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t319371831>(____first0_empty);
		}
	}
	else
	{
		*___first0 = NULL;
	}

	// Marshaling of parameter '___second1' back from managed representation
	if (____second1_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____second1_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____second1_empty)->identity->QueryInterface(IMapView_2_t319371831::IID, reinterpret_cast<void**>(&*___second1));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___second1 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t319371831>(____second1_empty);
		}
	}
	else
	{
		*___second1 = NULL;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for K Windows.Foundation.Collections.IKeyValuePair`2<System.String,System.Object>::get_Key()
il2cpp_hresult_t IKeyValuePair_2_get_Key_m3523589551_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Key_m3523589551_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	String_t* returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Key_m913496574((KeyValuePair_2_t968067334*)UnBox(__thisValue, KeyValuePair_2_t968067334_il2cpp_TypeInfo_var), KeyValuePair_2_get_Key_m913496574_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppHString _returnValue_marshaled = NULL;
	if (returnValue == NULL)
	{
		IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("returnValue"), NULL, NULL);
	}
	_returnValue_marshaled = il2cpp_codegen_create_hstring(returnValue);

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IKeyValuePair`2<System.String,System.Object>::get_Value()
il2cpp_hresult_t IKeyValuePair_2_get_Value_m3279123715_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Value_m3279123715_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject * returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Value_m2459323959((KeyValuePair_2_t968067334*)UnBox(__thisValue, KeyValuePair_2_t968067334_il2cpp_TypeInfo_var), KeyValuePair_2_get_Value_m2459323959_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppIInspectable* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMap`2<System.String,System.Int32>::Lookup(K)
il2cpp_hresult_t IMap_2_Lookup_m2400282917_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, int32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Lookup_m2400282917_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	int32_t returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, String_t*, int32_t* >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&) */, IDictionary_2_t1200053443_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMap`2<System.String,System.Int32>::get_Size()
il2cpp_hresult_t IMap_2_get_Size_m3320579976_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_get_Size_m3320579976_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::get_Count() */, ICollection_1_t3667059157_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.String,System.Int32>::HasKey(K)
il2cpp_hresult_t IMap_2_HasKey_m3055190088_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_HasKey_m3055190088_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, String_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Int32>::ContainsKey(TKey) */, IDictionary_2_t1200053443_il2cpp_TypeInfo_var, __thisValue, ____key0_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Collections.Generic.IReadOnlyDictionary`2<K,V> Windows.Foundation.Collections.IMap`2<System.String,System.Int32>::GetView()
il2cpp_hresult_t IMap_2_GetView_m3605659067_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t190211420** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_GetView_m3605659067_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		RuntimeObject* __thisValue = __this;
		if (IsInst(__thisValue, IReadOnlyDictionary_2_t3152171448_il2cpp_TypeInfo_var))
		{
			returnValue = __thisValue;
		}
		else
		{
			ReadOnlyDictionary_2_t1735541779 * readOnlyDictionary = (ReadOnlyDictionary_2_t1735541779*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_t1735541779_il2cpp_TypeInfo_var);
			ReadOnlyDictionary_2__ctor_m2131144993(readOnlyDictionary, __thisValue, ReadOnlyDictionary_2__ctor_m2131144993_RuntimeMethod_var);
			returnValue = readOnlyDictionary;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IMapView_2_t190211420* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(IMapView_2_t190211420::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t190211420>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.String,System.Int32>::Insert(K,V)
il2cpp_hresult_t IMap_2_Insert_m48626576_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, int32_t ___value1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Insert_m48626576_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	bool returnValue;
	try
	{
		returnValue = InterfaceFuncInvoker1< bool, String_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Int32>::ContainsKey(TKey) */, IDictionary_2_t1200053443_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(TKey,TValue) */, IDictionary_2_t1200053443_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, ___value1);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.String,System.Int32>::Remove(K)
il2cpp_hresult_t IMap_2_Remove_m2564332326_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Remove_m2564332326_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	try
	{
		bool removed = InterfaceFuncInvoker1< bool, String_t* >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Int32>::Remove(TKey) */, IDictionary_2_t1200053443_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled);

		if (!removed)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.String,System.Int32>::Clear()
il2cpp_hresult_t IMap_2_Clear_m1499398795_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Clear_m1499398795_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Clear() */, ICollection_1_t3667059157_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMapView`2<System.String,System.Int32>::Lookup(K)
il2cpp_hresult_t IMapView_2_Lookup_m1298530599_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, int32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Lookup_m1298530599_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	int32_t returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, String_t*, int32_t* >::Invoke(1 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&) */, IReadOnlyDictionary_2_t3152171448_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMapView`2<System.String,System.Int32>::get_Size()
il2cpp_hresult_t IMapView_2_get_Size_m546192505_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_get_Size_m546192505_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::get_Count() */, IReadOnlyCollection_1_t842022860_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMapView`2<System.String,System.Int32>::HasKey(K)
il2cpp_hresult_t IMapView_2_HasKey_m3322124696_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_HasKey_m3322124696_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, String_t* >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.Int32>::ContainsKey(TKey) */, IReadOnlyDictionary_2_t3152171448_il2cpp_TypeInfo_var, __thisValue, ____key0_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMapView`2<System.String,System.Int32>::Split(System.Collections.Generic.IReadOnlyDictionary`2<K,V>&,System.Collections.Generic.IReadOnlyDictionary`2<K,V>&)
il2cpp_hresult_t IMapView_2_Split_m96786832_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t190211420** ___first0, IMapView_2_t190211420** ___second1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Split_m96786832_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___first0' to managed representation
	RuntimeObject* ____first0_empty = NULL;

	// Marshaling of parameter '___second1' to managed representation
	RuntimeObject* ____second1_empty = NULL;

	// Managed method invocation
	try
	{
		int32_t itemsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::get_Count() */, IReadOnlyCollection_1_t842022860_il2cpp_TypeInfo_var, __this);
		if (itemsInCollection > 1)
		{
			ConstantSplittableMap_2_t2267061571 * splittableMap = (ConstantSplittableMap_2_t2267061571 *)IsInstSealed(__this, ConstantSplittableMap_2_t2267061571_il2cpp_TypeInfo_var);

			if (splittableMap == NULL)
			{
				splittableMap = (ConstantSplittableMap_2_t2267061571*)il2cpp_codegen_object_new(ConstantSplittableMap_2_t2267061571_il2cpp_TypeInfo_var);
				ConstantSplittableMap_2__ctor_m2347350877(splittableMap, __this, ConstantSplittableMap_2__ctor_m2347350877_RuntimeMethod_var);
			}

			ConstantSplittableMap_2_Split_m3256786513(splittableMap, (&____first0_empty), (&____second1_empty), ConstantSplittableMap_2_Split_m3256786513_RuntimeMethod_var);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter '___first0' back from managed representation
	if (____first0_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____first0_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____first0_empty)->identity->QueryInterface(IMapView_2_t190211420::IID, reinterpret_cast<void**>(&*___first0));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___first0 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t190211420>(____first0_empty);
		}
	}
	else
	{
		*___first0 = NULL;
	}

	// Marshaling of parameter '___second1' back from managed representation
	if (____second1_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____second1_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____second1_empty)->identity->QueryInterface(IMapView_2_t190211420::IID, reinterpret_cast<void**>(&*___second1));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___second1 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t190211420>(____second1_empty);
		}
	}
	else
	{
		*___second1 = NULL;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for K Windows.Foundation.Collections.IKeyValuePair`2<System.Object,System.Int32>::get_Key()
il2cpp_hresult_t IKeyValuePair_2_get_Key_m1066766749_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Key_m1066766749_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject * returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Key_m1218836954((KeyValuePair_2_t2401056908*)UnBox(__thisValue, KeyValuePair_2_t2401056908_il2cpp_TypeInfo_var), KeyValuePair_2_get_Key_m1218836954_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppIInspectable* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IKeyValuePair`2<System.Object,System.Int32>::get_Value()
il2cpp_hresult_t IKeyValuePair_2_get_Value_m269040038_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Value_m269040038_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Value_m755756747((KeyValuePair_2_t2401056908*)UnBox(__thisValue, KeyValuePair_2_t2401056908_il2cpp_TypeInfo_var), KeyValuePair_2_get_Value_m755756747_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMap`2<System.Object,System.Int32>::Lookup(K)
il2cpp_hresult_t IMap_2_Lookup_m4271171535_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0, int32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Lookup_m4271171535_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	int32_t returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, RuntimeObject *, int32_t* >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&) */, IDictionary_2_t2762203428_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMap`2<System.Object,System.Int32>::get_Size()
il2cpp_hresult_t IMap_2_get_Size_m672085459_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_get_Size_m672085459_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_Count() */, ICollection_1_t934241846_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.Object,System.Int32>::HasKey(K)
il2cpp_hresult_t IMap_2_HasKey_m377757278_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_HasKey_m377757278_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Int32>::ContainsKey(TKey) */, IDictionary_2_t2762203428_il2cpp_TypeInfo_var, __thisValue, ____key0_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Collections.Generic.IReadOnlyDictionary`2<K,V> Windows.Foundation.Collections.IMap`2<System.Object,System.Int32>::GetView()
il2cpp_hresult_t IMap_2_GetView_m2992416671_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t1752361405** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_GetView_m2992416671_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		RuntimeObject* __thisValue = __this;
		if (IsInst(__thisValue, IReadOnlyDictionary_2_t419354137_il2cpp_TypeInfo_var))
		{
			returnValue = __thisValue;
		}
		else
		{
			ReadOnlyDictionary_2_t3297691764 * readOnlyDictionary = (ReadOnlyDictionary_2_t3297691764*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_t3297691764_il2cpp_TypeInfo_var);
			ReadOnlyDictionary_2__ctor_m965872150(readOnlyDictionary, __thisValue, ReadOnlyDictionary_2__ctor_m965872150_RuntimeMethod_var);
			returnValue = readOnlyDictionary;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IMapView_2_t1752361405* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(IMapView_2_t1752361405::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t1752361405>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.Object,System.Int32>::Insert(K,V)
il2cpp_hresult_t IMap_2_Insert_m3186075525_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0, int32_t ___value1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Insert_m3186075525_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	bool returnValue;
	try
	{
		returnValue = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Int32>::ContainsKey(TKey) */, IDictionary_2_t2762203428_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled);
		InterfaceActionInvoker2< RuntimeObject *, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue) */, IDictionary_2_t2762203428_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, ___value1);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.Object,System.Int32>::Remove(K)
il2cpp_hresult_t IMap_2_Remove_m1560976792_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Remove_m1560976792_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	try
	{
		bool removed = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Int32>::Remove(TKey) */, IDictionary_2_t2762203428_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled);

		if (!removed)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.Object,System.Int32>::Clear()
il2cpp_hresult_t IMap_2_Clear_m1661948797_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Clear_m1661948797_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Clear() */, ICollection_1_t934241846_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMapView`2<System.Object,System.Int32>::Lookup(K)
il2cpp_hresult_t IMapView_2_Lookup_m877167602_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0, int32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Lookup_m877167602_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	int32_t returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, RuntimeObject *, int32_t* >::Invoke(1 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&) */, IReadOnlyDictionary_2_t419354137_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMapView`2<System.Object,System.Int32>::get_Size()
il2cpp_hresult_t IMapView_2_get_Size_m3871500701_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_get_Size_m3871500701_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_Count() */, IReadOnlyCollection_1_t2404172845_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMapView`2<System.Object,System.Int32>::HasKey(K)
il2cpp_hresult_t IMapView_2_HasKey_m1872447125_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_HasKey_m1872447125_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Object,System.Int32>::ContainsKey(TKey) */, IReadOnlyDictionary_2_t419354137_il2cpp_TypeInfo_var, __thisValue, ____key0_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMapView`2<System.Object,System.Int32>::Split(System.Collections.Generic.IReadOnlyDictionary`2<K,V>&,System.Collections.Generic.IReadOnlyDictionary`2<K,V>&)
il2cpp_hresult_t IMapView_2_Split_m4061037733_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t1752361405** ___first0, IMapView_2_t1752361405** ___second1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Split_m4061037733_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___first0' to managed representation
	RuntimeObject* ____first0_empty = NULL;

	// Marshaling of parameter '___second1' to managed representation
	RuntimeObject* ____second1_empty = NULL;

	// Managed method invocation
	try
	{
		int32_t itemsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_Count() */, IReadOnlyCollection_1_t2404172845_il2cpp_TypeInfo_var, __this);
		if (itemsInCollection > 1)
		{
			ConstantSplittableMap_2_t3829211556 * splittableMap = (ConstantSplittableMap_2_t3829211556 *)IsInstSealed(__this, ConstantSplittableMap_2_t3829211556_il2cpp_TypeInfo_var);

			if (splittableMap == NULL)
			{
				splittableMap = (ConstantSplittableMap_2_t3829211556*)il2cpp_codegen_object_new(ConstantSplittableMap_2_t3829211556_il2cpp_TypeInfo_var);
				ConstantSplittableMap_2__ctor_m2528261516(splittableMap, __this, ConstantSplittableMap_2__ctor_m2528261516_RuntimeMethod_var);
			}

			ConstantSplittableMap_2_Split_m1776544164(splittableMap, (&____first0_empty), (&____second1_empty), ConstantSplittableMap_2_Split_m1776544164_RuntimeMethod_var);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter '___first0' back from managed representation
	if (____first0_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____first0_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____first0_empty)->identity->QueryInterface(IMapView_2_t1752361405::IID, reinterpret_cast<void**>(&*___first0));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___first0 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t1752361405>(____first0_empty);
		}
	}
	else
	{
		*___first0 = NULL;
	}

	// Marshaling of parameter '___second1' back from managed representation
	if (____second1_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____second1_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____second1_empty)->identity->QueryInterface(IMapView_2_t1752361405::IID, reinterpret_cast<void**>(&*___second1));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___second1 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t1752361405>(____second1_empty);
		}
	}
	else
	{
		*___second1 = NULL;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for K Windows.Foundation.Collections.IKeyValuePair`2<System.String,System.Int32>::get_Key()
il2cpp_hresult_t IKeyValuePair_2_get_Key_m599934735_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Key_m599934735_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	String_t* returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Key_m3340370308((KeyValuePair_2_t838906923*)UnBox(__thisValue, KeyValuePair_2_t838906923_il2cpp_TypeInfo_var), KeyValuePair_2_get_Key_m3340370308_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppHString _returnValue_marshaled = NULL;
	if (returnValue == NULL)
	{
		IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("returnValue"), NULL, NULL);
	}
	_returnValue_marshaled = il2cpp_codegen_create_hstring(returnValue);

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IKeyValuePair`2<System.String,System.Int32>::get_Value()
il2cpp_hresult_t IKeyValuePair_2_get_Value_m2337749369_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Value_m2337749369_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Value_m692097207((KeyValuePair_2_t838906923*)UnBox(__thisValue, KeyValuePair_2_t838906923_il2cpp_TypeInfo_var), KeyValuePair_2_get_Value_m692097207_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMap`2<System.String,System.Type>::Lookup(K)
il2cpp_hresult_t IMap_2_Lookup_m3058979306_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, Il2CppWindowsRuntimeTypeName* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Lookup_m3058979306_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	Type_t * returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, String_t*, Type_t ** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Type>::TryGetValue(TKey,TValue&) */, IDictionary_2_t733052450_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppWindowsRuntimeTypeName _returnValue_marshaled = Il2CppWindowsRuntimeTypeName();
	il2cpp_codegen_marshal_type_to_native(returnValue, _returnValue_marshaled);

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMap`2<System.String,System.Type>::get_Size()
il2cpp_hresult_t IMap_2_get_Size_m732615070_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_get_Size_m732615070_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Type>>::get_Count() */, ICollection_1_t3200058164_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.String,System.Type>::HasKey(K)
il2cpp_hresult_t IMap_2_HasKey_m3062070663_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_HasKey_m3062070663_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, String_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Type>::ContainsKey(TKey) */, IDictionary_2_t733052450_il2cpp_TypeInfo_var, __thisValue, ____key0_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Collections.Generic.IReadOnlyDictionary`2<K,V> Windows.Foundation.Collections.IMap`2<System.String,System.Type>::GetView()
il2cpp_hresult_t IMap_2_GetView_m160940274_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t4018177723** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_GetView_m160940274_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		RuntimeObject* __thisValue = __this;
		if (IsInst(__thisValue, IReadOnlyDictionary_2_t2685170455_il2cpp_TypeInfo_var))
		{
			returnValue = __thisValue;
		}
		else
		{
			ReadOnlyDictionary_2_t1268540786 * readOnlyDictionary = (ReadOnlyDictionary_2_t1268540786*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_t1268540786_il2cpp_TypeInfo_var);
			ReadOnlyDictionary_2__ctor_m515128087(readOnlyDictionary, __thisValue, ReadOnlyDictionary_2__ctor_m515128087_RuntimeMethod_var);
			returnValue = readOnlyDictionary;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IMapView_2_t4018177723* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(IMapView_2_t4018177723::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t4018177723>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.String,System.Type>::Insert(K,V)
il2cpp_hresult_t IMap_2_Insert_m610774430_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, Il2CppWindowsRuntimeTypeName ___value1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Insert_m610774430_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Marshaling of parameter '___value1' to managed representation
	Type_t * ____value1_unmarshaled = NULL;
	____value1_unmarshaled = il2cpp_codegen_marshal_type_from_native(___value1);

	// Managed method invocation
	bool returnValue;
	try
	{
		returnValue = InterfaceFuncInvoker1< bool, String_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Type>::ContainsKey(TKey) */, IDictionary_2_t733052450_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled);
		InterfaceActionInvoker2< String_t*, Type_t * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Type>::set_Item(TKey,TValue) */, IDictionary_2_t733052450_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, ____value1_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.String,System.Type>::Remove(K)
il2cpp_hresult_t IMap_2_Remove_m3871291260_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Remove_m3871291260_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	try
	{
		bool removed = InterfaceFuncInvoker1< bool, String_t* >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Type>::Remove(TKey) */, IDictionary_2_t733052450_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled);

		if (!removed)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.String,System.Type>::Clear()
il2cpp_hresult_t IMap_2_Clear_m2457687352_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Clear_m2457687352_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Type>>::Clear() */, ICollection_1_t3200058164_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMapView`2<System.String,System.Type>::Lookup(K)
il2cpp_hresult_t IMapView_2_Lookup_m594002932_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, Il2CppWindowsRuntimeTypeName* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Lookup_m594002932_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	Type_t * returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, String_t*, Type_t ** >::Invoke(1 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.Type>::TryGetValue(TKey,TValue&) */, IReadOnlyDictionary_2_t2685170455_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppWindowsRuntimeTypeName _returnValue_marshaled = Il2CppWindowsRuntimeTypeName();
	il2cpp_codegen_marshal_type_to_native(returnValue, _returnValue_marshaled);

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMapView`2<System.String,System.Type>::get_Size()
il2cpp_hresult_t IMapView_2_get_Size_m3065552575_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_get_Size_m3065552575_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Type>>::get_Count() */, IReadOnlyCollection_1_t375021867_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMapView`2<System.String,System.Type>::HasKey(K)
il2cpp_hresult_t IMapView_2_HasKey_m1694676420_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_HasKey_m1694676420_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, String_t* >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.Type>::ContainsKey(TKey) */, IReadOnlyDictionary_2_t2685170455_il2cpp_TypeInfo_var, __thisValue, ____key0_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMapView`2<System.String,System.Type>::Split(System.Collections.Generic.IReadOnlyDictionary`2<K,V>&,System.Collections.Generic.IReadOnlyDictionary`2<K,V>&)
il2cpp_hresult_t IMapView_2_Split_m3605358933_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t4018177723** ___first0, IMapView_2_t4018177723** ___second1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Split_m3605358933_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___first0' to managed representation
	RuntimeObject* ____first0_empty = NULL;

	// Marshaling of parameter '___second1' to managed representation
	RuntimeObject* ____second1_empty = NULL;

	// Managed method invocation
	try
	{
		int32_t itemsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Type>>::get_Count() */, IReadOnlyCollection_1_t375021867_il2cpp_TypeInfo_var, __this);
		if (itemsInCollection > 1)
		{
			ConstantSplittableMap_2_t1800060578 * splittableMap = (ConstantSplittableMap_2_t1800060578 *)IsInstSealed(__this, ConstantSplittableMap_2_t1800060578_il2cpp_TypeInfo_var);

			if (splittableMap == NULL)
			{
				splittableMap = (ConstantSplittableMap_2_t1800060578*)il2cpp_codegen_object_new(ConstantSplittableMap_2_t1800060578_il2cpp_TypeInfo_var);
				ConstantSplittableMap_2__ctor_m137017575(splittableMap, __this, ConstantSplittableMap_2__ctor_m137017575_RuntimeMethod_var);
			}

			ConstantSplittableMap_2_Split_m3390560063(splittableMap, (&____first0_empty), (&____second1_empty), ConstantSplittableMap_2_Split_m3390560063_RuntimeMethod_var);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter '___first0' back from managed representation
	if (____first0_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____first0_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____first0_empty)->identity->QueryInterface(IMapView_2_t4018177723::IID, reinterpret_cast<void**>(&*___first0));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___first0 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t4018177723>(____first0_empty);
		}
	}
	else
	{
		*___first0 = NULL;
	}

	// Marshaling of parameter '___second1' back from managed representation
	if (____second1_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____second1_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____second1_empty)->identity->QueryInterface(IMapView_2_t4018177723::IID, reinterpret_cast<void**>(&*___second1));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___second1 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t4018177723>(____second1_empty);
		}
	}
	else
	{
		*___second1 = NULL;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for K Windows.Foundation.Collections.IKeyValuePair`2<System.String,System.Type>::get_Key()
il2cpp_hresult_t IKeyValuePair_2_get_Key_m2199926285_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Key_m2199926285_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	String_t* returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Key_m2656778124((KeyValuePair_2_t371905930*)UnBox(__thisValue, KeyValuePair_2_t371905930_il2cpp_TypeInfo_var), KeyValuePair_2_get_Key_m2656778124_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppHString _returnValue_marshaled = NULL;
	if (returnValue == NULL)
	{
		IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("returnValue"), NULL, NULL);
	}
	_returnValue_marshaled = il2cpp_codegen_create_hstring(returnValue);

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IKeyValuePair`2<System.String,System.Type>::get_Value()
il2cpp_hresult_t IKeyValuePair_2_get_Value_m1427991677_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Value_m1427991677_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	Type_t * returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Value_m2097707521((KeyValuePair_2_t371905930*)UnBox(__thisValue, KeyValuePair_2_t371905930_il2cpp_TypeInfo_var), KeyValuePair_2_get_Value_m2097707521_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppWindowsRuntimeTypeName _returnValue_marshaled = Il2CppWindowsRuntimeTypeName();
	il2cpp_codegen_marshal_type_to_native(returnValue, _returnValue_marshaled);

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for K Windows.Foundation.Collections.IKeyValuePair`2<System.Int32,System.Int32>::get_Key()
il2cpp_hresult_t IKeyValuePair_2_get_Key_m2344176952_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Key_m2344176952_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Key_m2635782095((KeyValuePair_2_t4237331251*)UnBox(__thisValue, KeyValuePair_2_t4237331251_il2cpp_TypeInfo_var), KeyValuePair_2_get_Key_m2635782095_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IKeyValuePair`2<System.Int32,System.Int32>::get_Value()
il2cpp_hresult_t IKeyValuePair_2_get_Value_m1590219272_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Value_m1590219272_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Value_m1804680087((KeyValuePair_2_t4237331251*)UnBox(__thisValue, KeyValuePair_2_t4237331251_il2cpp_TypeInfo_var), KeyValuePair_2_get_Value_m1804680087_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMap`2<System.String,System.Boolean>::Lookup(K)
il2cpp_hresult_t IMap_2_Lookup_m356884552_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Lookup_m356884552_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	bool returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, String_t*, bool* >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Boolean>::TryGetValue(TKey,TValue&) */, IDictionary_2_t2641362951_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMap`2<System.String,System.Boolean>::get_Size()
il2cpp_hresult_t IMap_2_get_Size_m2116548387_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_get_Size_m2116548387_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::get_Count() */, ICollection_1_t813401369_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.String,System.Boolean>::HasKey(K)
il2cpp_hresult_t IMap_2_HasKey_m650644540_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_HasKey_m650644540_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, String_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Boolean>::ContainsKey(TKey) */, IDictionary_2_t2641362951_il2cpp_TypeInfo_var, __thisValue, ____key0_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Collections.Generic.IReadOnlyDictionary`2<K,V> Windows.Foundation.Collections.IMap`2<System.String,System.Boolean>::GetView()
il2cpp_hresult_t IMap_2_GetView_m1023461368_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t1631520928** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_GetView_m1023461368_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		RuntimeObject* __thisValue = __this;
		if (IsInst(__thisValue, IReadOnlyDictionary_2_t298513660_il2cpp_TypeInfo_var))
		{
			returnValue = __thisValue;
		}
		else
		{
			ReadOnlyDictionary_2_t3176851287 * readOnlyDictionary = (ReadOnlyDictionary_2_t3176851287*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_t3176851287_il2cpp_TypeInfo_var);
			ReadOnlyDictionary_2__ctor_m1629022071(readOnlyDictionary, __thisValue, ReadOnlyDictionary_2__ctor_m1629022071_RuntimeMethod_var);
			returnValue = readOnlyDictionary;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IMapView_2_t1631520928* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(IMapView_2_t1631520928::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t1631520928>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.String,System.Boolean>::Insert(K,V)
il2cpp_hresult_t IMap_2_Insert_m2357915180_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, bool ___value1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Insert_m2357915180_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	bool returnValue;
	try
	{
		returnValue = InterfaceFuncInvoker1< bool, String_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Boolean>::ContainsKey(TKey) */, IDictionary_2_t2641362951_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled);
		InterfaceActionInvoker2< String_t*, bool >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Boolean>::set_Item(TKey,TValue) */, IDictionary_2_t2641362951_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, ___value1);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.String,System.Boolean>::Remove(K)
il2cpp_hresult_t IMap_2_Remove_m2388588850_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Remove_m2388588850_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	try
	{
		bool removed = InterfaceFuncInvoker1< bool, String_t* >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Boolean>::Remove(TKey) */, IDictionary_2_t2641362951_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled);

		if (!removed)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.String,System.Boolean>::Clear()
il2cpp_hresult_t IMap_2_Clear_m3448822397_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Clear_m3448822397_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::Clear() */, ICollection_1_t813401369_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMapView`2<System.String,System.Boolean>::Lookup(K)
il2cpp_hresult_t IMapView_2_Lookup_m818349798_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Lookup_m818349798_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	bool returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, String_t*, bool* >::Invoke(1 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.Boolean>::TryGetValue(TKey,TValue&) */, IReadOnlyDictionary_2_t298513660_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMapView`2<System.String,System.Boolean>::get_Size()
il2cpp_hresult_t IMapView_2_get_Size_m1396842905_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_get_Size_m1396842905_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::get_Count() */, IReadOnlyCollection_1_t2283332368_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMapView`2<System.String,System.Boolean>::HasKey(K)
il2cpp_hresult_t IMapView_2_HasKey_m2200864154_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_HasKey_m2200864154_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, String_t* >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.Boolean>::ContainsKey(TKey) */, IReadOnlyDictionary_2_t298513660_il2cpp_TypeInfo_var, __thisValue, ____key0_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMapView`2<System.String,System.Boolean>::Split(System.Collections.Generic.IReadOnlyDictionary`2<K,V>&,System.Collections.Generic.IReadOnlyDictionary`2<K,V>&)
il2cpp_hresult_t IMapView_2_Split_m22494317_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t1631520928** ___first0, IMapView_2_t1631520928** ___second1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Split_m22494317_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___first0' to managed representation
	RuntimeObject* ____first0_empty = NULL;

	// Marshaling of parameter '___second1' to managed representation
	RuntimeObject* ____second1_empty = NULL;

	// Managed method invocation
	try
	{
		int32_t itemsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::get_Count() */, IReadOnlyCollection_1_t2283332368_il2cpp_TypeInfo_var, __this);
		if (itemsInCollection > 1)
		{
			ConstantSplittableMap_2_t3708371079 * splittableMap = (ConstantSplittableMap_2_t3708371079 *)IsInstSealed(__this, ConstantSplittableMap_2_t3708371079_il2cpp_TypeInfo_var);

			if (splittableMap == NULL)
			{
				splittableMap = (ConstantSplittableMap_2_t3708371079*)il2cpp_codegen_object_new(ConstantSplittableMap_2_t3708371079_il2cpp_TypeInfo_var);
				ConstantSplittableMap_2__ctor_m1702516145(splittableMap, __this, ConstantSplittableMap_2__ctor_m1702516145_RuntimeMethod_var);
			}

			ConstantSplittableMap_2_Split_m3288519233(splittableMap, (&____first0_empty), (&____second1_empty), ConstantSplittableMap_2_Split_m3288519233_RuntimeMethod_var);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter '___first0' back from managed representation
	if (____first0_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____first0_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____first0_empty)->identity->QueryInterface(IMapView_2_t1631520928::IID, reinterpret_cast<void**>(&*___first0));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___first0 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t1631520928>(____first0_empty);
		}
	}
	else
	{
		*___first0 = NULL;
	}

	// Marshaling of parameter '___second1' back from managed representation
	if (____second1_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____second1_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____second1_empty)->identity->QueryInterface(IMapView_2_t1631520928::IID, reinterpret_cast<void**>(&*___second1));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___second1 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t1631520928>(____second1_empty);
		}
	}
	else
	{
		*___second1 = NULL;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for K Windows.Foundation.Collections.IKeyValuePair`2<System.Object,System.Boolean>::get_Key()
il2cpp_hresult_t IKeyValuePair_2_get_Key_m1916408783_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Key_m1916408783_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject * returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Key_m2106922848((KeyValuePair_2_t3842366416*)UnBox(__thisValue, KeyValuePair_2_t3842366416_il2cpp_TypeInfo_var), KeyValuePair_2_get_Key_m2106922848_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppIInspectable* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IKeyValuePair`2<System.Object,System.Boolean>::get_Value()
il2cpp_hresult_t IKeyValuePair_2_get_Value_m3611222262_ComCallableWrapperProjectedMethod(RuntimeObject* __this, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Value_m3611222262_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Value_m1669764045((KeyValuePair_2_t3842366416*)UnBox(__thisValue, KeyValuePair_2_t3842366416_il2cpp_TypeInfo_var), KeyValuePair_2_get_Value_m1669764045_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMap`2<System.Object,System.Boolean>::Lookup(K)
il2cpp_hresult_t IMap_2_Lookup_m2791672174_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Lookup_m2791672174_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	bool returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, RuntimeObject *, bool* >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Boolean>::TryGetValue(TKey,TValue&) */, IDictionary_2_t4203512936_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMap`2<System.Object,System.Boolean>::get_Size()
il2cpp_hresult_t IMap_2_get_Size_m521129328_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_get_Size_m521129328_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::get_Count() */, ICollection_1_t2375551354_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.Object,System.Boolean>::HasKey(K)
il2cpp_hresult_t IMap_2_HasKey_m3863327211_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_HasKey_m3863327211_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Boolean>::ContainsKey(TKey) */, IDictionary_2_t4203512936_il2cpp_TypeInfo_var, __thisValue, ____key0_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Collections.Generic.IReadOnlyDictionary`2<K,V> Windows.Foundation.Collections.IMap`2<System.Object,System.Boolean>::GetView()
il2cpp_hresult_t IMap_2_GetView_m1166070801_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t3193670913** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_GetView_m1166070801_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		RuntimeObject* __thisValue = __this;
		if (IsInst(__thisValue, IReadOnlyDictionary_2_t1860663645_il2cpp_TypeInfo_var))
		{
			returnValue = __thisValue;
		}
		else
		{
			ReadOnlyDictionary_2_t444033976 * readOnlyDictionary = (ReadOnlyDictionary_2_t444033976*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_t444033976_il2cpp_TypeInfo_var);
			ReadOnlyDictionary_2__ctor_m4089905679(readOnlyDictionary, __thisValue, ReadOnlyDictionary_2__ctor_m4089905679_RuntimeMethod_var);
			returnValue = readOnlyDictionary;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IMapView_2_t3193670913* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(IMapView_2_t3193670913::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t3193670913>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.Object,System.Boolean>::Insert(K,V)
il2cpp_hresult_t IMap_2_Insert_m3431746527_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0, bool ___value1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Insert_m3431746527_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	bool returnValue;
	try
	{
		returnValue = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Boolean>::ContainsKey(TKey) */, IDictionary_2_t4203512936_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled);
		InterfaceActionInvoker2< RuntimeObject *, bool >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue) */, IDictionary_2_t4203512936_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, ___value1);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.Object,System.Boolean>::Remove(K)
il2cpp_hresult_t IMap_2_Remove_m1939883922_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Remove_m1939883922_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	try
	{
		bool removed = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Boolean>::Remove(TKey) */, IDictionary_2_t4203512936_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled);

		if (!removed)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.Object,System.Boolean>::Clear()
il2cpp_hresult_t IMap_2_Clear_m403209908_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Clear_m403209908_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::Clear() */, ICollection_1_t2375551354_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMapView`2<System.Object,System.Boolean>::Lookup(K)
il2cpp_hresult_t IMapView_2_Lookup_m4048973909_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Lookup_m4048973909_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	bool returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, RuntimeObject *, bool* >::Invoke(1 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Object,System.Boolean>::TryGetValue(TKey,TValue&) */, IReadOnlyDictionary_2_t1860663645_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMapView`2<System.Object,System.Boolean>::get_Size()
il2cpp_hresult_t IMapView_2_get_Size_m516432122_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_get_Size_m516432122_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::get_Count() */, IReadOnlyCollection_1_t3845482353_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMapView`2<System.Object,System.Boolean>::HasKey(K)
il2cpp_hresult_t IMapView_2_HasKey_m1413942596_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_HasKey_m1413942596_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Object,System.Boolean>::ContainsKey(TKey) */, IReadOnlyDictionary_2_t1860663645_il2cpp_TypeInfo_var, __thisValue, ____key0_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMapView`2<System.Object,System.Boolean>::Split(System.Collections.Generic.IReadOnlyDictionary`2<K,V>&,System.Collections.Generic.IReadOnlyDictionary`2<K,V>&)
il2cpp_hresult_t IMapView_2_Split_m2647546983_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t3193670913** ___first0, IMapView_2_t3193670913** ___second1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Split_m2647546983_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___first0' to managed representation
	RuntimeObject* ____first0_empty = NULL;

	// Marshaling of parameter '___second1' to managed representation
	RuntimeObject* ____second1_empty = NULL;

	// Managed method invocation
	try
	{
		int32_t itemsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::get_Count() */, IReadOnlyCollection_1_t3845482353_il2cpp_TypeInfo_var, __this);
		if (itemsInCollection > 1)
		{
			ConstantSplittableMap_2_t975553768 * splittableMap = (ConstantSplittableMap_2_t975553768 *)IsInstSealed(__this, ConstantSplittableMap_2_t975553768_il2cpp_TypeInfo_var);

			if (splittableMap == NULL)
			{
				splittableMap = (ConstantSplittableMap_2_t975553768*)il2cpp_codegen_object_new(ConstantSplittableMap_2_t975553768_il2cpp_TypeInfo_var);
				ConstantSplittableMap_2__ctor_m1584615223(splittableMap, __this, ConstantSplittableMap_2__ctor_m1584615223_RuntimeMethod_var);
			}

			ConstantSplittableMap_2_Split_m3318364013(splittableMap, (&____first0_empty), (&____second1_empty), ConstantSplittableMap_2_Split_m3318364013_RuntimeMethod_var);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter '___first0' back from managed representation
	if (____first0_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____first0_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____first0_empty)->identity->QueryInterface(IMapView_2_t3193670913::IID, reinterpret_cast<void**>(&*___first0));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___first0 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t3193670913>(____first0_empty);
		}
	}
	else
	{
		*___first0 = NULL;
	}

	// Marshaling of parameter '___second1' back from managed representation
	if (____second1_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____second1_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____second1_empty)->identity->QueryInterface(IMapView_2_t3193670913::IID, reinterpret_cast<void**>(&*___second1));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___second1 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t3193670913>(____second1_empty);
		}
	}
	else
	{
		*___second1 = NULL;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for K Windows.Foundation.Collections.IKeyValuePair`2<System.String,System.Boolean>::get_Key()
il2cpp_hresult_t IKeyValuePair_2_get_Key_m2534079307_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Key_m2534079307_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	String_t* returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Key_m1816659530((KeyValuePair_2_t2280216431*)UnBox(__thisValue, KeyValuePair_2_t2280216431_il2cpp_TypeInfo_var), KeyValuePair_2_get_Key_m1816659530_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppHString _returnValue_marshaled = NULL;
	if (returnValue == NULL)
	{
		IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("returnValue"), NULL, NULL);
	}
	_returnValue_marshaled = il2cpp_codegen_create_hstring(returnValue);

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IKeyValuePair`2<System.String,System.Boolean>::get_Value()
il2cpp_hresult_t IKeyValuePair_2_get_Value_m2353902038_ComCallableWrapperProjectedMethod(RuntimeObject* __this, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Value_m2353902038_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Value_m608750205((KeyValuePair_2_t2280216431*)UnBox(__thisValue, KeyValuePair_2_t2280216431_il2cpp_TypeInfo_var), KeyValuePair_2_get_Value_m608750205_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
