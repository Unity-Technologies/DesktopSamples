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
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct VirtFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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

// I18N.Common.ByteEncoding
struct ByteEncoding_t1371924561;
// I18N.Common.ByteSafeEncoding
struct ByteSafeEncoding_t1616231111;
// I18N.Common.Handlers
struct Handlers_t3611279154;
// I18N.Common.Manager
struct Manager_t131579580;
// I18N.Common.MonoEncoder
struct MonoEncoder_t374802340;
// I18N.Common.MonoEncoding
struct MonoEncoding_t666837952;
// I18N.Common.MonoEncodingDefaultEncoder
struct MonoEncodingDefaultEncoder_t3189165900;
// I18N.Common.MonoSafeEncoder
struct MonoSafeEncoder_t3955416671;
// I18N.Common.MonoSafeEncoding
struct MonoSafeEncoding_t4071300459;
// I18N.Common.ReferenceSourceDefaultEncoder
struct ReferenceSourceDefaultEncoder_t2102071145;
// I18N.Common.Strings
struct Strings_t3742148504;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_t2755812594;
// System.ArgumentException
struct ArgumentException_t132251570;
// System.ArgumentNullException
struct ArgumentNullException_t1615371798;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t777629997;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char
struct Char_t3634460470;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.CaseInsensitiveComparer
struct CaseInsensitiveComparer_t3670035800;
// System.Collections.CaseInsensitiveHashCodeProvider
struct CaseInsensitiveHashCodeProvider_t1962629119;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t885026589;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t1822382459;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t3348751306;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t3046556399;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t3943099367;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t1632706988;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t892470886;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Collections.Hashtable/bucket[]
struct bucketU5BU5D_t876121385;
// System.Collections.ICollection
struct ICollection_t3904884886;
// System.Collections.IComparer
struct IComparer_t1540313114;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t1493878338;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t267601189;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t2317969963;
// System.Func`2<System.Object,System.String>
struct Func_2_t1214474899;
// System.Globalization.Calendar
struct Calendar_t1661121569;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t2285235057;
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
// System.Globalization.TextInfo
struct TextInfo_t3810425522;
// System.IO.Stream
struct Stream_t1273022909;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t156472862;
// System.IO.StreamReader
struct StreamReader_t4009935899;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.NotImplementedException
struct NotImplementedException_t3489357830;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Reflection.Assembly
struct Assembly_t;
// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_t2120639521;
// System.Reflection.AssemblyName
struct AssemblyName_t270931938;
// System.Reflection.Binder
struct Binder_t2999457153;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.StrongNameKeyPair
struct StrongNameKeyPair_t3411219591;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t2171992254;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Security.IPermission
struct IPermission_t4015543450;
// System.Security.PermissionSet
struct PermissionSet_t223948603;
// System.Security.Policy.Evidence
struct Evidence_t2008144148;
// System.String
struct String_t;
// System.StringComparer
struct StringComparer_t3301955079;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Text.Decoder
struct Decoder_t2204182725;
// System.Text.DecoderFallback
struct DecoderFallback_t3123823036;
// System.Text.DecoderReplacementFallback
struct DecoderReplacementFallback_t1462101135;
// System.Text.Encoder
struct Encoder_t2198218980;
// System.Text.EncoderFallback
struct EncoderFallback_t1188251036;
// System.Text.EncoderFallbackBuffer
struct EncoderFallbackBuffer_t3523102303;
// System.Text.EncoderNLS
struct EncoderNLS_t449404832;
// System.Text.Encoding
struct Encoding_t1523322056;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2974092902;
// System.Threading.Tasks.Task
struct Task_t3187275312;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Version
struct Version_t3456873960;
// System.Void
struct Void_t1185182177;

extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentNullException_t1615371798_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var;
extern RuntimeClass* Assembly_t_il2cpp_TypeInfo_var;
extern RuntimeClass* ByteEncoding_t1371924561_il2cpp_TypeInfo_var;
extern RuntimeClass* ByteSafeEncoding_t1616231111_il2cpp_TypeInfo_var;
extern RuntimeClass* ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var;
extern RuntimeClass* CaseInsensitiveHashCodeProvider_t1962629119_il2cpp_TypeInfo_var;
extern RuntimeClass* CharU5BU5D_t3528271667_il2cpp_TypeInfo_var;
extern RuntimeClass* Char_t3634460470_il2cpp_TypeInfo_var;
extern RuntimeClass* CultureInfo_t4157843068_il2cpp_TypeInfo_var;
extern RuntimeClass* DecoderReplacementFallback_t1462101135_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t1632706988_il2cpp_TypeInfo_var;
extern RuntimeClass* Encoding_t1523322056_il2cpp_TypeInfo_var;
extern RuntimeClass* FileLoadException_t549148505_il2cpp_TypeInfo_var;
extern RuntimeClass* Handlers_t3611279154_il2cpp_TypeInfo_var;
extern RuntimeClass* Hashtable_t1853889766_il2cpp_TypeInfo_var;
extern RuntimeClass* Manager_t131579580_il2cpp_TypeInfo_var;
extern RuntimeClass* MissingMethodException_t1274661534_il2cpp_TypeInfo_var;
extern RuntimeClass* MonoEncodingDefaultEncoder_t3189165900_il2cpp_TypeInfo_var;
extern RuntimeClass* NotImplementedException_t3489357830_il2cpp_TypeInfo_var;
extern RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
extern RuntimeClass* SecurityException_t975544473_il2cpp_TypeInfo_var;
extern RuntimeClass* SerializationException_t3941511869_il2cpp_TypeInfo_var;
extern RuntimeClass* StreamReader_t4009935899_il2cpp_TypeInfo_var;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern RuntimeClass* StringComparer_t3301955079_il2cpp_TypeInfo_var;
extern RuntimeClass* StringU5BU5D_t1281789340_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* SystemException_t176217640_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1023991395;
extern String_t* _stringLiteral1037634964;
extern String_t* _stringLiteral1063997394;
extern String_t* _stringLiteral1070535863;
extern String_t* _stringLiteral1070969872;
extern String_t* _stringLiteral1075701578;
extern String_t* _stringLiteral1083798124;
extern String_t* _stringLiteral1109990777;
extern String_t* _stringLiteral1112437429;
extern String_t* _stringLiteral1178550200;
extern String_t* _stringLiteral1179948426;
extern String_t* _stringLiteral1179948427;
extern String_t* _stringLiteral1179948428;
extern String_t* _stringLiteral1179948429;
extern String_t* _stringLiteral1204071984;
extern String_t* _stringLiteral1204758486;
extern String_t* _stringLiteral1205950312;
extern String_t* _stringLiteral1211204669;
extern String_t* _stringLiteral1214933959;
extern String_t* _stringLiteral1276923151;
extern String_t* _stringLiteral128424462;
extern String_t* _stringLiteral128489998;
extern String_t* _stringLiteral130595687;
extern String_t* _stringLiteral1337664793;
extern String_t* _stringLiteral1337730329;
extern String_t* _stringLiteral1338343579;
extern String_t* _stringLiteral1343563529;
extern String_t* _stringLiteral139899516;
extern String_t* _stringLiteral1406328419;
extern String_t* _stringLiteral1421809516;
extern String_t* _stringLiteral143364518;
extern String_t* _stringLiteral1465207424;
extern String_t* _stringLiteral1500048739;
extern String_t* _stringLiteral1515721956;
extern String_t* _stringLiteral1540260593;
extern String_t* _stringLiteral1554002570;
extern String_t* _stringLiteral1556740176;
extern String_t* _stringLiteral1568117349;
extern String_t* _stringLiteral1607356511;
extern String_t* _stringLiteral1653631687;
extern String_t* _stringLiteral1655097180;
extern String_t* _stringLiteral16599866;
extern String_t* _stringLiteral16599869;
extern String_t* _stringLiteral16599870;
extern String_t* _stringLiteral1694639475;
extern String_t* _stringLiteral1720067353;
extern String_t* _stringLiteral1758678393;
extern String_t* _stringLiteral1763639919;
extern String_t* _stringLiteral1783777810;
extern String_t* _stringLiteral1795997045;
extern String_t* _stringLiteral180436431;
extern String_t* _stringLiteral1811884285;
extern String_t* _stringLiteral1841029289;
extern String_t* _stringLiteral1843640691;
extern String_t* _stringLiteral1877104917;
extern String_t* _stringLiteral187918711;
extern String_t* _stringLiteral1879662257;
extern String_t* _stringLiteral1905630254;
extern String_t* _stringLiteral190719257;
extern String_t* _stringLiteral1926268836;
extern String_t* _stringLiteral1933368388;
extern String_t* _stringLiteral1939725380;
extern String_t* _stringLiteral1943545120;
extern String_t* _stringLiteral1951800342;
extern String_t* _stringLiteral1952637542;
extern String_t* _stringLiteral1964505895;
extern String_t* _stringLiteral1964571431;
extern String_t* _stringLiteral1964636967;
extern String_t* _stringLiteral1969432534;
extern String_t* _stringLiteral1973311342;
extern String_t* _stringLiteral1973376878;
extern String_t* _stringLiteral1973507956;
extern String_t* _stringLiteral1973704560;
extern String_t* _stringLiteral1973770095;
extern String_t* _stringLiteral1974228848;
extern String_t* _stringLiteral1974294381;
extern String_t* _stringLiteral1994708472;
extern String_t* _stringLiteral2002595880;
extern String_t* _stringLiteral2015482072;
extern String_t* _stringLiteral2037107499;
extern String_t* _stringLiteral2049512309;
extern String_t* _stringLiteral2086892310;
extern String_t* _stringLiteral2097858466;
extern String_t* _stringLiteral2098720093;
extern String_t* _stringLiteral2103078416;
extern String_t* _stringLiteral2103143952;
extern String_t* _stringLiteral2105284585;
extern String_t* _stringLiteral2105350121;
extern String_t* _stringLiteral2129118387;
extern String_t* _stringLiteral2150382967;
extern String_t* _stringLiteral2162908225;
extern String_t* _stringLiteral217356805;
extern String_t* _stringLiteral2221509713;
extern String_t* _stringLiteral2225386784;
extern String_t* _stringLiteral2227100510;
extern String_t* _stringLiteral2252039157;
extern String_t* _stringLiteral2276348510;
extern String_t* _stringLiteral2301301517;
extern String_t* _stringLiteral2334584931;
extern String_t* _stringLiteral2346764111;
extern String_t* _stringLiteral2351646691;
extern String_t* _stringLiteral2360571624;
extern String_t* _stringLiteral2373172366;
extern String_t* _stringLiteral2373500046;
extern String_t* _stringLiteral2373827726;
extern String_t* _stringLiteral2373893262;
extern String_t* _stringLiteral2391987873;
extern String_t* _stringLiteral2404440926;
extern String_t* _stringLiteral240690733;
extern String_t* _stringLiteral2445362708;
extern String_t* _stringLiteral2448000662;
extern String_t* _stringLiteral2506362943;
extern String_t* _stringLiteral2514341881;
extern String_t* _stringLiteral2514341885;
extern String_t* _stringLiteral2514341886;
extern String_t* _stringLiteral2529371417;
extern String_t* _stringLiteral2556008965;
extern String_t* _stringLiteral2558109886;
extern String_t* _stringLiteral2579572482;
extern String_t* _stringLiteral2597969507;
extern String_t* _stringLiteral2601874168;
extern String_t* _stringLiteral2690942889;
extern String_t* _stringLiteral2698618727;
extern String_t* _stringLiteral2702200763;
extern String_t* _stringLiteral2750048638;
extern String_t* _stringLiteral2750114174;
extern String_t* _stringLiteral2761482764;
extern String_t* _stringLiteral2769207715;
extern String_t* _stringLiteral2842770437;
extern String_t* _stringLiteral2851650852;
extern String_t* _stringLiteral2857438883;
extern String_t* _stringLiteral2858177909;
extern String_t* _stringLiteral2867372978;
extern String_t* _stringLiteral2896678902;
extern String_t* _stringLiteral2896678909;
extern String_t* _stringLiteral2904493050;
extern String_t* _stringLiteral2909918820;
extern String_t* _stringLiteral2910180963;
extern String_t* _stringLiteral2911708441;
extern String_t* _stringLiteral293056212;
extern String_t* _stringLiteral2941213349;
extern String_t* _stringLiteral2961909506;
extern String_t* _stringLiteral2980240995;
extern String_t* _stringLiteral2980306531;
extern String_t* _stringLiteral3002372288;
extern String_t* _stringLiteral300347771;
extern String_t* _stringLiteral3032016714;
extern String_t* _stringLiteral3039904331;
extern String_t* _stringLiteral3052904444;
extern String_t* _stringLiteral3089971713;
extern String_t* _stringLiteral310824368;
extern String_t* _stringLiteral311020976;
extern String_t* _stringLiteral3120086511;
extern String_t* _stringLiteral3151080298;
extern String_t* _stringLiteral3151544739;
extern String_t* _stringLiteral3159777201;
extern String_t* _stringLiteral3173440452;
extern String_t* _stringLiteral3201106496;
extern String_t* _stringLiteral3203142111;
extern String_t* _stringLiteral3234463626;
extern String_t* _stringLiteral3259740370;
extern String_t* _stringLiteral3259805906;
extern String_t* _stringLiteral3260264659;
extern String_t* _stringLiteral3260395732;
extern String_t* _stringLiteral3260723416;
extern String_t* _stringLiteral3275286451;
extern String_t* _stringLiteral3275351987;
extern String_t* _stringLiteral3275810740;
extern String_t* _stringLiteral3275876276;
extern String_t* _stringLiteral3275941811;
extern String_t* _stringLiteral3276007347;
extern String_t* _stringLiteral3276072883;
extern String_t* _stringLiteral3276138419;
extern String_t* _stringLiteral3276203955;
extern String_t* _stringLiteral3276269491;
extern String_t* _stringLiteral3281750936;
extern String_t* _stringLiteral3281750940;
extern String_t* _stringLiteral3294045465;
extern String_t* _stringLiteral3294652811;
extern String_t* _stringLiteral3296381283;
extern String_t* _stringLiteral3296708966;
extern String_t* _stringLiteral3296840036;
extern String_t* _stringLiteral3296971110;
extern String_t* _stringLiteral3313125906;
extern String_t* _stringLiteral331407391;
extern String_t* _stringLiteral3325656300;
extern String_t* _stringLiteral3325721836;
extern String_t* _stringLiteral3325787372;
extern String_t* _stringLiteral3325852908;
extern String_t* _stringLiteral3325918444;
extern String_t* _stringLiteral3325983980;
extern String_t* _stringLiteral3326115052;
extern String_t* _stringLiteral335670123;
extern String_t* _stringLiteral3362643555;
extern String_t* _stringLiteral3378124652;
extern String_t* _stringLiteral3409396950;
extern String_t* _stringLiteral344511078;
extern String_t* _stringLiteral3445932352;
extern String_t* _stringLiteral344986381;
extern String_t* _stringLiteral3451238340;
extern String_t* _stringLiteral3451303876;
extern String_t* _stringLiteral3451369412;
extern String_t* _stringLiteral3451434948;
extern String_t* _stringLiteral3452024772;
extern String_t* _stringLiteral3452614530;
extern String_t* _stringLiteral3452614605;
extern String_t* _stringLiteral3456939997;
extern String_t* _stringLiteral3457857501;
extern String_t* _stringLiteral3497238838;
extern String_t* _stringLiteral34972796;
extern String_t* _stringLiteral3509563525;
extern String_t* _stringLiteral3509694597;
extern String_t* _stringLiteral3510833916;
extern String_t* _stringLiteral3526274078;
extern String_t* _stringLiteral3532175731;
extern String_t* _stringLiteral3552475495;
extern String_t* _stringLiteral3555096935;
extern String_t* _stringLiteral3612847695;
extern String_t* _stringLiteral3629624809;
extern String_t* _stringLiteral3635094829;
extern String_t* _stringLiteral3652976251;
extern String_t* _stringLiteral3663024897;
extern String_t* _stringLiteral3663876871;
extern String_t* _stringLiteral3664007943;
extern String_t* _stringLiteral3669162357;
extern String_t* _stringLiteral3676382489;
extern String_t* _stringLiteral3760461676;
extern String_t* _stringLiteral376476252;
extern String_t* _stringLiteral3779674810;
extern String_t* _stringLiteral3779805882;
extern String_t* _stringLiteral3780264634;
extern String_t* _stringLiteral3781252753;
extern String_t* _stringLiteral378979578;
extern String_t* _stringLiteral3816023882;
extern String_t* _stringLiteral3872753293;
extern String_t* _stringLiteral3895291215;
extern String_t* _stringLiteral3903531480;
extern String_t* _stringLiteral3912520369;
extern String_t* _stringLiteral3912979124;
extern String_t* _stringLiteral3926655565;
extern String_t* _stringLiteral3930346940;
extern String_t* _stringLiteral3954353971;
extern String_t* _stringLiteral3975952174;
extern String_t* _stringLiteral3992283843;
extern String_t* _stringLiteral4033250599;
extern String_t* _stringLiteral4033250601;
extern String_t* _stringLiteral4033250602;
extern String_t* _stringLiteral4033371653;
extern String_t* _stringLiteral4041073501;
extern String_t* _stringLiteral4058719513;
extern String_t* _stringLiteral4102292079;
extern String_t* _stringLiteral4107777865;
extern String_t* _stringLiteral4119629799;
extern String_t* _stringLiteral4154135548;
extern String_t* _stringLiteral4160981599;
extern String_t* _stringLiteral4202376069;
extern String_t* _stringLiteral4244605311;
extern String_t* _stringLiteral4257616653;
extern String_t* _stringLiteral4268750731;
extern String_t* _stringLiteral4269078412;
extern String_t* _stringLiteral4275507964;
extern String_t* _stringLiteral4281876408;
extern String_t* _stringLiteral430555555;
extern String_t* _stringLiteral48987169;
extern String_t* _stringLiteral492297766;
extern String_t* _stringLiteral497456927;
extern String_t* _stringLiteral530922551;
extern String_t* _stringLiteral531577909;
extern String_t* _stringLiteral531708989;
extern String_t* _stringLiteral531840055;
extern String_t* _stringLiteral554161341;
extern String_t* _stringLiteral573056281;
extern String_t* _stringLiteral587631066;
extern String_t* _stringLiteral587631073;
extern String_t* _stringLiteral587631075;
extern String_t* _stringLiteral590611299;
extern String_t* _stringLiteral590611318;
extern String_t* _stringLiteral590807907;
extern String_t* _stringLiteral594084726;
extern String_t* _stringLiteral615962217;
extern String_t* _stringLiteral623257346;
extern String_t* _stringLiteral64066;
extern String_t* _stringLiteral641654371;
extern String_t* _stringLiteral648734538;
extern String_t* _stringLiteral669612446;
extern String_t* _stringLiteral744514839;
extern String_t* _stringLiteral757602046;
extern String_t* _stringLiteral780745706;
extern String_t* _stringLiteral79347;
extern String_t* _stringLiteral797640427;
extern String_t* _stringLiteral810020965;
extern String_t* _stringLiteral813297765;
extern String_t* _stringLiteral819654757;
extern String_t* _stringLiteral828305509;
extern String_t* _stringLiteral886455301;
extern String_t* _stringLiteral903833753;
extern String_t* _stringLiteral903964824;
extern String_t* _stringLiteral920771773;
extern String_t* _stringLiteral934141542;
extern String_t* _stringLiteral934796904;
extern String_t* _stringLiteral935059052;
extern String_t* _stringLiteral940363766;
extern String_t* _stringLiteral940363770;
extern String_t* _stringLiteral940363771;
extern String_t* _stringLiteral955393305;
extern String_t* _stringLiteral958314801;
extern String_t* _stringLiteral989647706;
extern String_t* _stringLiteral996125317;
extern const RuntimeMethod* ByteEncoding_GetByteCount_m931670777_RuntimeMethod_var;
extern const RuntimeMethod* ByteEncoding_GetCharCount_m3223611263_RuntimeMethod_var;
extern const RuntimeMethod* ByteEncoding_GetChars_m2008098161_RuntimeMethod_var;
extern const RuntimeMethod* ByteEncoding_GetMaxByteCount_m1927338293_RuntimeMethod_var;
extern const RuntimeMethod* ByteEncoding_GetMaxCharCount_m1339482954_RuntimeMethod_var;
extern const RuntimeMethod* ByteEncoding_GetString_m1562392462_RuntimeMethod_var;
extern const RuntimeMethod* ByteEncoding_GetString_m2305116373_RuntimeMethod_var;
extern const RuntimeMethod* ByteEncoding_ToBytes_m2318108546_RuntimeMethod_var;
extern const RuntimeMethod* ByteEncoding__ctor_m2650597204_RuntimeMethod_var;
extern const RuntimeMethod* ByteSafeEncoding_GetByteCount_m3995099794_RuntimeMethod_var;
extern const RuntimeMethod* ByteSafeEncoding_GetBytes_m1471504259_RuntimeMethod_var;
extern const RuntimeMethod* ByteSafeEncoding_GetBytes_m2347866660_RuntimeMethod_var;
extern const RuntimeMethod* ByteSafeEncoding_GetBytes_m2807426897_RuntimeMethod_var;
extern const RuntimeMethod* ByteSafeEncoding_GetCharCount_m1472591721_RuntimeMethod_var;
extern const RuntimeMethod* ByteSafeEncoding_GetChars_m4090624767_RuntimeMethod_var;
extern const RuntimeMethod* ByteSafeEncoding_GetMaxByteCount_m1976150099_RuntimeMethod_var;
extern const RuntimeMethod* ByteSafeEncoding_GetMaxCharCount_m992927858_RuntimeMethod_var;
extern const RuntimeMethod* ByteSafeEncoding_GetString_m2830101108_RuntimeMethod_var;
extern const RuntimeMethod* ByteSafeEncoding_GetString_m32620594_RuntimeMethod_var;
extern const RuntimeMethod* ByteSafeEncoding__ctor_m310667786_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m3045345476_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m2620390247_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m944270596_RuntimeMethod_var;
extern const RuntimeMethod* Manager_LoadClassList_m222677215_RuntimeMethod_var;
extern const RuntimeMethod* MonoEncoder_GetByteCount_m1784015248_RuntimeMethod_var;
extern const RuntimeMethod* MonoEncoder_GetBytes_m1347597210_RuntimeMethod_var;
extern const RuntimeMethod* MonoEncodingDefaultEncoder_CheckArguments_m3784884798_RuntimeMethod_var;
extern const RuntimeMethod* MonoEncodingDefaultEncoder_Convert_m1170139118_RuntimeMethod_var;
extern const RuntimeMethod* MonoEncoding_GetByteCount_m3959784025_RuntimeMethod_var;
extern const RuntimeMethod* MonoEncoding_GetBytesInternal_m1958756858_RuntimeMethod_var;
extern const RuntimeMethod* MonoEncoding_GetBytes_m1039747135_RuntimeMethod_var;
extern const RuntimeMethod* MonoEncoding_GetBytes_m2407697046_RuntimeMethod_var;
extern const RuntimeMethod* MonoSafeEncoding_GetBytesInternal_m410175382_RuntimeMethod_var;
extern const RuntimeMethod* ReferenceSourceDefaultEncoder__ctor_m1816492893_RuntimeMethod_var;
extern const RuntimeMethod* Strings_GetString_m904263021_RuntimeMethod_var;
extern const RuntimeType* Char_t3634460470_0_0_0_var;
extern const RuntimeType* Encoding_t1523322056_0_0_0_var;
extern const RuntimeType* Manager_t131579580_0_0_0_var;
extern const uint32_t ByteEncoding_GetByteCount_m931670777_MetadataUsageId;
extern const uint32_t ByteEncoding_GetCharCount_m3223611263_MetadataUsageId;
extern const uint32_t ByteEncoding_GetChars_m2008098161_MetadataUsageId;
extern const uint32_t ByteEncoding_GetMaxByteCount_m1927338293_MetadataUsageId;
extern const uint32_t ByteEncoding_GetMaxCharCount_m1339482954_MetadataUsageId;
extern const uint32_t ByteEncoding_GetString_m1562392462_MetadataUsageId;
extern const uint32_t ByteEncoding_GetString_m2305116373_MetadataUsageId;
extern const uint32_t ByteEncoding_IsAlwaysNormalized_m1614884160_MetadataUsageId;
extern const uint32_t ByteEncoding_ToBytes_m2318108546_MetadataUsageId;
extern const uint32_t ByteEncoding__ctor_m2650597204_MetadataUsageId;
extern const uint32_t ByteSafeEncoding_GetByteCount_m3995099794_MetadataUsageId;
extern const uint32_t ByteSafeEncoding_GetBytes_m1471504259_MetadataUsageId;
extern const uint32_t ByteSafeEncoding_GetBytes_m2347866660_MetadataUsageId;
extern const uint32_t ByteSafeEncoding_GetBytes_m2807426897_MetadataUsageId;
extern const uint32_t ByteSafeEncoding_GetCharCount_m1472591721_MetadataUsageId;
extern const uint32_t ByteSafeEncoding_GetChars_m4090624767_MetadataUsageId;
extern const uint32_t ByteSafeEncoding_GetMaxByteCount_m1976150099_MetadataUsageId;
extern const uint32_t ByteSafeEncoding_GetMaxCharCount_m992927858_MetadataUsageId;
extern const uint32_t ByteSafeEncoding_GetString_m2830101108_MetadataUsageId;
extern const uint32_t ByteSafeEncoding_GetString_m32620594_MetadataUsageId;
extern const uint32_t ByteSafeEncoding_IsAlwaysNormalized_m751427991_MetadataUsageId;
extern const uint32_t ByteSafeEncoding__ctor_m310667786_MetadataUsageId;
extern const uint32_t Handlers_BuildHash_m1626728645_MetadataUsageId;
extern const uint32_t Handlers_GetAlias_m865086395_MetadataUsageId;
extern const uint32_t Handlers__cctor_m2689685323_MetadataUsageId;
extern const uint32_t Manager_GetCulture_m1052639361_MetadataUsageId;
extern const uint32_t Manager_GetCulture_m2085582766_MetadataUsageId;
extern const uint32_t Manager_GetEncoding_m260250766_MetadataUsageId;
extern const uint32_t Manager_GetEncoding_m2821134161_MetadataUsageId;
extern const uint32_t Manager_Instantiate_m1587040048_MetadataUsageId;
extern const uint32_t Manager_LoadClassList_m222677215_MetadataUsageId;
extern const uint32_t Manager_LoadInternalClasses_m2546757475_MetadataUsageId;
extern const uint32_t Manager_Normalize_m384807670_MetadataUsageId;
extern const uint32_t Manager__cctor_m3932043889_MetadataUsageId;
extern const uint32_t Manager__ctor_m2858193152_MetadataUsageId;
extern const uint32_t Manager_get_PrimaryManager_m1696954067_MetadataUsageId;
extern const uint32_t MonoEncoder_GetByteCount_m1784015248_MetadataUsageId;
extern const uint32_t MonoEncoder_GetBytes_m1347597210_MetadataUsageId;
extern const uint32_t MonoEncodingDefaultEncoder_CheckArguments_m3784884798_MetadataUsageId;
extern const uint32_t MonoEncodingDefaultEncoder_Convert_m1170139118_MetadataUsageId;
extern const uint32_t MonoEncoding_GetByteCount_m3959784025_MetadataUsageId;
extern const uint32_t MonoEncoding_GetBytesInternal_m1958756858_MetadataUsageId;
extern const uint32_t MonoEncoding_GetBytes_m1039747135_MetadataUsageId;
extern const uint32_t MonoEncoding_GetBytes_m2407697046_MetadataUsageId;
extern const uint32_t MonoEncoding_GetEncoder_m4164041363_MetadataUsageId;
extern const uint32_t MonoEncoding_HandleFallback_m1353878205_MetadataUsageId;
extern const uint32_t MonoSafeEncoding_GetBytesInternal_m410175382_MetadataUsageId;
extern const uint32_t MonoSafeEncoding_HandleFallback_m3188140471_MetadataUsageId;
extern const uint32_t ReferenceSourceDefaultEncoder__ctor_m1816492893_MetadataUsageId;
extern const uint32_t Strings_GetString_m904263021_MetadataUsageId;
struct CultureData_t1899656083_marshaled_com;
struct CultureData_t1899656083_marshaled_pinvoke;
struct CultureInfo_t4157843068_marshaled_com;
struct CultureInfo_t4157843068_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_t4116647657;
struct CharU5BU5D_t3528271667;
struct StringU5BU5D_t1281789340;


#ifndef U3CMODULEU3E_T692745540_H
#define U3CMODULEU3E_T692745540_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745540 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745540_H
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
#ifndef CONSTS_T1749595333_H
#define CONSTS_T1749595333_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Consts
struct  Consts_t1749595333  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTS_T1749595333_H
#ifndef HANDLERS_T3611279154_H
#define HANDLERS_T3611279154_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Common.Handlers
struct  Handlers_t3611279154  : public RuntimeObject
{
public:

public:
};

struct Handlers_t3611279154_StaticFields
{
public:
	// System.String[] I18N.Common.Handlers::List
	StringU5BU5D_t1281789340* ___List_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> I18N.Common.Handlers::aliases
	Dictionary_2_t1632706988 * ___aliases_1;

public:
	inline static int32_t get_offset_of_List_0() { return static_cast<int32_t>(offsetof(Handlers_t3611279154_StaticFields, ___List_0)); }
	inline StringU5BU5D_t1281789340* get_List_0() const { return ___List_0; }
	inline StringU5BU5D_t1281789340** get_address_of_List_0() { return &___List_0; }
	inline void set_List_0(StringU5BU5D_t1281789340* value)
	{
		___List_0 = value;
		Il2CppCodeGenWriteBarrier((&___List_0), value);
	}

	inline static int32_t get_offset_of_aliases_1() { return static_cast<int32_t>(offsetof(Handlers_t3611279154_StaticFields, ___aliases_1)); }
	inline Dictionary_2_t1632706988 * get_aliases_1() const { return ___aliases_1; }
	inline Dictionary_2_t1632706988 ** get_address_of_aliases_1() { return &___aliases_1; }
	inline void set_aliases_1(Dictionary_2_t1632706988 * value)
	{
		___aliases_1 = value;
		Il2CppCodeGenWriteBarrier((&___aliases_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HANDLERS_T3611279154_H
#ifndef MANAGER_T131579580_H
#define MANAGER_T131579580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Common.Manager
struct  Manager_t131579580  : public RuntimeObject
{
public:
	// System.Collections.Hashtable I18N.Common.Manager::handlers
	Hashtable_t1853889766 * ___handlers_1;
	// System.Collections.Hashtable I18N.Common.Manager::active
	Hashtable_t1853889766 * ___active_2;
	// System.Collections.Hashtable I18N.Common.Manager::assemblies
	Hashtable_t1853889766 * ___assemblies_3;

public:
	inline static int32_t get_offset_of_handlers_1() { return static_cast<int32_t>(offsetof(Manager_t131579580, ___handlers_1)); }
	inline Hashtable_t1853889766 * get_handlers_1() const { return ___handlers_1; }
	inline Hashtable_t1853889766 ** get_address_of_handlers_1() { return &___handlers_1; }
	inline void set_handlers_1(Hashtable_t1853889766 * value)
	{
		___handlers_1 = value;
		Il2CppCodeGenWriteBarrier((&___handlers_1), value);
	}

	inline static int32_t get_offset_of_active_2() { return static_cast<int32_t>(offsetof(Manager_t131579580, ___active_2)); }
	inline Hashtable_t1853889766 * get_active_2() const { return ___active_2; }
	inline Hashtable_t1853889766 ** get_address_of_active_2() { return &___active_2; }
	inline void set_active_2(Hashtable_t1853889766 * value)
	{
		___active_2 = value;
		Il2CppCodeGenWriteBarrier((&___active_2), value);
	}

	inline static int32_t get_offset_of_assemblies_3() { return static_cast<int32_t>(offsetof(Manager_t131579580, ___assemblies_3)); }
	inline Hashtable_t1853889766 * get_assemblies_3() const { return ___assemblies_3; }
	inline Hashtable_t1853889766 ** get_address_of_assemblies_3() { return &___assemblies_3; }
	inline void set_assemblies_3(Hashtable_t1853889766 * value)
	{
		___assemblies_3 = value;
		Il2CppCodeGenWriteBarrier((&___assemblies_3), value);
	}
};

struct Manager_t131579580_StaticFields
{
public:
	// I18N.Common.Manager I18N.Common.Manager::manager
	Manager_t131579580 * ___manager_0;
	// System.Object I18N.Common.Manager::lockobj
	RuntimeObject * ___lockobj_4;

public:
	inline static int32_t get_offset_of_manager_0() { return static_cast<int32_t>(offsetof(Manager_t131579580_StaticFields, ___manager_0)); }
	inline Manager_t131579580 * get_manager_0() const { return ___manager_0; }
	inline Manager_t131579580 ** get_address_of_manager_0() { return &___manager_0; }
	inline void set_manager_0(Manager_t131579580 * value)
	{
		___manager_0 = value;
		Il2CppCodeGenWriteBarrier((&___manager_0), value);
	}

	inline static int32_t get_offset_of_lockobj_4() { return static_cast<int32_t>(offsetof(Manager_t131579580_StaticFields, ___lockobj_4)); }
	inline RuntimeObject * get_lockobj_4() const { return ___lockobj_4; }
	inline RuntimeObject ** get_address_of_lockobj_4() { return &___lockobj_4; }
	inline void set_lockobj_4(RuntimeObject * value)
	{
		___lockobj_4 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MANAGER_T131579580_H
#ifndef STRINGS_T3742148504_H
#define STRINGS_T3742148504_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Common.Strings
struct  Strings_t3742148504  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGS_T3742148504_H
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
#ifndef CASEINSENSITIVECOMPARER_T3670035800_H
#define CASEINSENSITIVECOMPARER_T3670035800_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.CaseInsensitiveComparer
struct  CaseInsensitiveComparer_t3670035800  : public RuntimeObject
{
public:
	// System.Globalization.CompareInfo System.Collections.CaseInsensitiveComparer::m_compareInfo
	CompareInfo_t1092934962 * ___m_compareInfo_0;

public:
	inline static int32_t get_offset_of_m_compareInfo_0() { return static_cast<int32_t>(offsetof(CaseInsensitiveComparer_t3670035800, ___m_compareInfo_0)); }
	inline CompareInfo_t1092934962 * get_m_compareInfo_0() const { return ___m_compareInfo_0; }
	inline CompareInfo_t1092934962 ** get_address_of_m_compareInfo_0() { return &___m_compareInfo_0; }
	inline void set_m_compareInfo_0(CompareInfo_t1092934962 * value)
	{
		___m_compareInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_compareInfo_0), value);
	}
};

struct CaseInsensitiveComparer_t3670035800_StaticFields
{
public:
	// System.Collections.CaseInsensitiveComparer modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.CaseInsensitiveComparer::m_InvariantCaseInsensitiveComparer
	CaseInsensitiveComparer_t3670035800 * ___m_InvariantCaseInsensitiveComparer_1;

public:
	inline static int32_t get_offset_of_m_InvariantCaseInsensitiveComparer_1() { return static_cast<int32_t>(offsetof(CaseInsensitiveComparer_t3670035800_StaticFields, ___m_InvariantCaseInsensitiveComparer_1)); }
	inline CaseInsensitiveComparer_t3670035800 * get_m_InvariantCaseInsensitiveComparer_1() const { return ___m_InvariantCaseInsensitiveComparer_1; }
	inline CaseInsensitiveComparer_t3670035800 ** get_address_of_m_InvariantCaseInsensitiveComparer_1() { return &___m_InvariantCaseInsensitiveComparer_1; }
	inline void set_m_InvariantCaseInsensitiveComparer_1(CaseInsensitiveComparer_t3670035800 * value)
	{
		___m_InvariantCaseInsensitiveComparer_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvariantCaseInsensitiveComparer_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASEINSENSITIVECOMPARER_T3670035800_H
#ifndef CASEINSENSITIVEHASHCODEPROVIDER_T1962629119_H
#define CASEINSENSITIVEHASHCODEPROVIDER_T1962629119_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.CaseInsensitiveHashCodeProvider
struct  CaseInsensitiveHashCodeProvider_t1962629119  : public RuntimeObject
{
public:
	// System.Globalization.TextInfo System.Collections.CaseInsensitiveHashCodeProvider::m_text
	TextInfo_t3810425522 * ___m_text_0;

public:
	inline static int32_t get_offset_of_m_text_0() { return static_cast<int32_t>(offsetof(CaseInsensitiveHashCodeProvider_t1962629119, ___m_text_0)); }
	inline TextInfo_t3810425522 * get_m_text_0() const { return ___m_text_0; }
	inline TextInfo_t3810425522 ** get_address_of_m_text_0() { return &___m_text_0; }
	inline void set_m_text_0(TextInfo_t3810425522 * value)
	{
		___m_text_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_text_0), value);
	}
};

struct CaseInsensitiveHashCodeProvider_t1962629119_StaticFields
{
public:
	// System.Collections.CaseInsensitiveHashCodeProvider modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.CaseInsensitiveHashCodeProvider::m_InvariantCaseInsensitiveHashCodeProvider
	CaseInsensitiveHashCodeProvider_t1962629119 * ___m_InvariantCaseInsensitiveHashCodeProvider_1;

public:
	inline static int32_t get_offset_of_m_InvariantCaseInsensitiveHashCodeProvider_1() { return static_cast<int32_t>(offsetof(CaseInsensitiveHashCodeProvider_t1962629119_StaticFields, ___m_InvariantCaseInsensitiveHashCodeProvider_1)); }
	inline CaseInsensitiveHashCodeProvider_t1962629119 * get_m_InvariantCaseInsensitiveHashCodeProvider_1() const { return ___m_InvariantCaseInsensitiveHashCodeProvider_1; }
	inline CaseInsensitiveHashCodeProvider_t1962629119 ** get_address_of_m_InvariantCaseInsensitiveHashCodeProvider_1() { return &___m_InvariantCaseInsensitiveHashCodeProvider_1; }
	inline void set_m_InvariantCaseInsensitiveHashCodeProvider_1(CaseInsensitiveHashCodeProvider_t1962629119 * value)
	{
		___m_InvariantCaseInsensitiveHashCodeProvider_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvariantCaseInsensitiveHashCodeProvider_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASEINSENSITIVEHASHCODEPROVIDER_T1962629119_H
#ifndef DICTIONARY_2_T1632706988_H
#define DICTIONARY_2_T1632706988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct  Dictionary_2_t1632706988  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t385246372* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t885026589* ___entries_1;
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
	KeyCollection_t1822382459 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t3348751306 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___buckets_0)); }
	inline Int32U5BU5D_t385246372* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t385246372** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t385246372* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___entries_1)); }
	inline EntryU5BU5D_t885026589* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t885026589** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t885026589* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___keys_7)); }
	inline KeyCollection_t1822382459 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t1822382459 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t1822382459 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___values_8)); }
	inline ValueCollection_t3348751306 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t3348751306 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t3348751306 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ____syncRoot_9)); }
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
#endif // DICTIONARY_2_T1632706988_H
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
#ifndef STRINGCOMPARER_T3301955079_H
#define STRINGCOMPARER_T3301955079_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringComparer
struct  StringComparer_t3301955079  : public RuntimeObject
{
public:

public:
};

struct StringComparer_t3301955079_StaticFields
{
public:
	// System.StringComparer System.StringComparer::_invariantCulture
	StringComparer_t3301955079 * ____invariantCulture_0;
	// System.StringComparer System.StringComparer::_invariantCultureIgnoreCase
	StringComparer_t3301955079 * ____invariantCultureIgnoreCase_1;
	// System.StringComparer System.StringComparer::_ordinal
	StringComparer_t3301955079 * ____ordinal_2;
	// System.StringComparer System.StringComparer::_ordinalIgnoreCase
	StringComparer_t3301955079 * ____ordinalIgnoreCase_3;

public:
	inline static int32_t get_offset_of__invariantCulture_0() { return static_cast<int32_t>(offsetof(StringComparer_t3301955079_StaticFields, ____invariantCulture_0)); }
	inline StringComparer_t3301955079 * get__invariantCulture_0() const { return ____invariantCulture_0; }
	inline StringComparer_t3301955079 ** get_address_of__invariantCulture_0() { return &____invariantCulture_0; }
	inline void set__invariantCulture_0(StringComparer_t3301955079 * value)
	{
		____invariantCulture_0 = value;
		Il2CppCodeGenWriteBarrier((&____invariantCulture_0), value);
	}

	inline static int32_t get_offset_of__invariantCultureIgnoreCase_1() { return static_cast<int32_t>(offsetof(StringComparer_t3301955079_StaticFields, ____invariantCultureIgnoreCase_1)); }
	inline StringComparer_t3301955079 * get__invariantCultureIgnoreCase_1() const { return ____invariantCultureIgnoreCase_1; }
	inline StringComparer_t3301955079 ** get_address_of__invariantCultureIgnoreCase_1() { return &____invariantCultureIgnoreCase_1; }
	inline void set__invariantCultureIgnoreCase_1(StringComparer_t3301955079 * value)
	{
		____invariantCultureIgnoreCase_1 = value;
		Il2CppCodeGenWriteBarrier((&____invariantCultureIgnoreCase_1), value);
	}

	inline static int32_t get_offset_of__ordinal_2() { return static_cast<int32_t>(offsetof(StringComparer_t3301955079_StaticFields, ____ordinal_2)); }
	inline StringComparer_t3301955079 * get__ordinal_2() const { return ____ordinal_2; }
	inline StringComparer_t3301955079 ** get_address_of__ordinal_2() { return &____ordinal_2; }
	inline void set__ordinal_2(StringComparer_t3301955079 * value)
	{
		____ordinal_2 = value;
		Il2CppCodeGenWriteBarrier((&____ordinal_2), value);
	}

	inline static int32_t get_offset_of__ordinalIgnoreCase_3() { return static_cast<int32_t>(offsetof(StringComparer_t3301955079_StaticFields, ____ordinalIgnoreCase_3)); }
	inline StringComparer_t3301955079 * get__ordinalIgnoreCase_3() const { return ____ordinalIgnoreCase_3; }
	inline StringComparer_t3301955079 ** get_address_of__ordinalIgnoreCase_3() { return &____ordinalIgnoreCase_3; }
	inline void set__ordinalIgnoreCase_3(StringComparer_t3301955079 * value)
	{
		____ordinalIgnoreCase_3 = value;
		Il2CppCodeGenWriteBarrier((&____ordinalIgnoreCase_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGCOMPARER_T3301955079_H
#ifndef DECODERFALLBACK_T3123823036_H
#define DECODERFALLBACK_T3123823036_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderFallback
struct  DecoderFallback_t3123823036  : public RuntimeObject
{
public:
	// System.Boolean System.Text.DecoderFallback::bIsMicrosoftBestFitFallback
	bool ___bIsMicrosoftBestFitFallback_0;

public:
	inline static int32_t get_offset_of_bIsMicrosoftBestFitFallback_0() { return static_cast<int32_t>(offsetof(DecoderFallback_t3123823036, ___bIsMicrosoftBestFitFallback_0)); }
	inline bool get_bIsMicrosoftBestFitFallback_0() const { return ___bIsMicrosoftBestFitFallback_0; }
	inline bool* get_address_of_bIsMicrosoftBestFitFallback_0() { return &___bIsMicrosoftBestFitFallback_0; }
	inline void set_bIsMicrosoftBestFitFallback_0(bool value)
	{
		___bIsMicrosoftBestFitFallback_0 = value;
	}
};

struct DecoderFallback_t3123823036_StaticFields
{
public:
	// System.Text.DecoderFallback modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.DecoderFallback::replacementFallback
	DecoderFallback_t3123823036 * ___replacementFallback_1;
	// System.Text.DecoderFallback modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.DecoderFallback::exceptionFallback
	DecoderFallback_t3123823036 * ___exceptionFallback_2;
	// System.Object System.Text.DecoderFallback::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_3;

public:
	inline static int32_t get_offset_of_replacementFallback_1() { return static_cast<int32_t>(offsetof(DecoderFallback_t3123823036_StaticFields, ___replacementFallback_1)); }
	inline DecoderFallback_t3123823036 * get_replacementFallback_1() const { return ___replacementFallback_1; }
	inline DecoderFallback_t3123823036 ** get_address_of_replacementFallback_1() { return &___replacementFallback_1; }
	inline void set_replacementFallback_1(DecoderFallback_t3123823036 * value)
	{
		___replacementFallback_1 = value;
		Il2CppCodeGenWriteBarrier((&___replacementFallback_1), value);
	}

	inline static int32_t get_offset_of_exceptionFallback_2() { return static_cast<int32_t>(offsetof(DecoderFallback_t3123823036_StaticFields, ___exceptionFallback_2)); }
	inline DecoderFallback_t3123823036 * get_exceptionFallback_2() const { return ___exceptionFallback_2; }
	inline DecoderFallback_t3123823036 ** get_address_of_exceptionFallback_2() { return &___exceptionFallback_2; }
	inline void set_exceptionFallback_2(DecoderFallback_t3123823036 * value)
	{
		___exceptionFallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___exceptionFallback_2), value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_3() { return static_cast<int32_t>(offsetof(DecoderFallback_t3123823036_StaticFields, ___s_InternalSyncObject_3)); }
	inline RuntimeObject * get_s_InternalSyncObject_3() const { return ___s_InternalSyncObject_3; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_3() { return &___s_InternalSyncObject_3; }
	inline void set_s_InternalSyncObject_3(RuntimeObject * value)
	{
		___s_InternalSyncObject_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_InternalSyncObject_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERFALLBACK_T3123823036_H
#ifndef ENCODER_T2198218980_H
#define ENCODER_T2198218980_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoder
struct  Encoder_t2198218980  : public RuntimeObject
{
public:
	// System.Text.EncoderFallback System.Text.Encoder::m_fallback
	EncoderFallback_t1188251036 * ___m_fallback_0;
	// System.Text.EncoderFallbackBuffer System.Text.Encoder::m_fallbackBuffer
	EncoderFallbackBuffer_t3523102303 * ___m_fallbackBuffer_1;

public:
	inline static int32_t get_offset_of_m_fallback_0() { return static_cast<int32_t>(offsetof(Encoder_t2198218980, ___m_fallback_0)); }
	inline EncoderFallback_t1188251036 * get_m_fallback_0() const { return ___m_fallback_0; }
	inline EncoderFallback_t1188251036 ** get_address_of_m_fallback_0() { return &___m_fallback_0; }
	inline void set_m_fallback_0(EncoderFallback_t1188251036 * value)
	{
		___m_fallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_fallback_0), value);
	}

	inline static int32_t get_offset_of_m_fallbackBuffer_1() { return static_cast<int32_t>(offsetof(Encoder_t2198218980, ___m_fallbackBuffer_1)); }
	inline EncoderFallbackBuffer_t3523102303 * get_m_fallbackBuffer_1() const { return ___m_fallbackBuffer_1; }
	inline EncoderFallbackBuffer_t3523102303 ** get_address_of_m_fallbackBuffer_1() { return &___m_fallbackBuffer_1; }
	inline void set_m_fallbackBuffer_1(EncoderFallbackBuffer_t3523102303 * value)
	{
		___m_fallbackBuffer_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_fallbackBuffer_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODER_T2198218980_H
#ifndef ENCODERFALLBACK_T1188251036_H
#define ENCODERFALLBACK_T1188251036_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderFallback
struct  EncoderFallback_t1188251036  : public RuntimeObject
{
public:
	// System.Boolean System.Text.EncoderFallback::bIsMicrosoftBestFitFallback
	bool ___bIsMicrosoftBestFitFallback_0;

public:
	inline static int32_t get_offset_of_bIsMicrosoftBestFitFallback_0() { return static_cast<int32_t>(offsetof(EncoderFallback_t1188251036, ___bIsMicrosoftBestFitFallback_0)); }
	inline bool get_bIsMicrosoftBestFitFallback_0() const { return ___bIsMicrosoftBestFitFallback_0; }
	inline bool* get_address_of_bIsMicrosoftBestFitFallback_0() { return &___bIsMicrosoftBestFitFallback_0; }
	inline void set_bIsMicrosoftBestFitFallback_0(bool value)
	{
		___bIsMicrosoftBestFitFallback_0 = value;
	}
};

struct EncoderFallback_t1188251036_StaticFields
{
public:
	// System.Text.EncoderFallback modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.EncoderFallback::replacementFallback
	EncoderFallback_t1188251036 * ___replacementFallback_1;
	// System.Text.EncoderFallback modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.EncoderFallback::exceptionFallback
	EncoderFallback_t1188251036 * ___exceptionFallback_2;
	// System.Object System.Text.EncoderFallback::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_3;

public:
	inline static int32_t get_offset_of_replacementFallback_1() { return static_cast<int32_t>(offsetof(EncoderFallback_t1188251036_StaticFields, ___replacementFallback_1)); }
	inline EncoderFallback_t1188251036 * get_replacementFallback_1() const { return ___replacementFallback_1; }
	inline EncoderFallback_t1188251036 ** get_address_of_replacementFallback_1() { return &___replacementFallback_1; }
	inline void set_replacementFallback_1(EncoderFallback_t1188251036 * value)
	{
		___replacementFallback_1 = value;
		Il2CppCodeGenWriteBarrier((&___replacementFallback_1), value);
	}

	inline static int32_t get_offset_of_exceptionFallback_2() { return static_cast<int32_t>(offsetof(EncoderFallback_t1188251036_StaticFields, ___exceptionFallback_2)); }
	inline EncoderFallback_t1188251036 * get_exceptionFallback_2() const { return ___exceptionFallback_2; }
	inline EncoderFallback_t1188251036 ** get_address_of_exceptionFallback_2() { return &___exceptionFallback_2; }
	inline void set_exceptionFallback_2(EncoderFallback_t1188251036 * value)
	{
		___exceptionFallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___exceptionFallback_2), value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_3() { return static_cast<int32_t>(offsetof(EncoderFallback_t1188251036_StaticFields, ___s_InternalSyncObject_3)); }
	inline RuntimeObject * get_s_InternalSyncObject_3() const { return ___s_InternalSyncObject_3; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_3() { return &___s_InternalSyncObject_3; }
	inline void set_s_InternalSyncObject_3(RuntimeObject * value)
	{
		___s_InternalSyncObject_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_InternalSyncObject_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERFALLBACK_T1188251036_H
#ifndef ENCODERFALLBACKBUFFER_T3523102303_H
#define ENCODERFALLBACKBUFFER_T3523102303_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderFallbackBuffer
struct  EncoderFallbackBuffer_t3523102303  : public RuntimeObject
{
public:
	// System.Char* System.Text.EncoderFallbackBuffer::charStart
	Il2CppChar* ___charStart_0;
	// System.Char* System.Text.EncoderFallbackBuffer::charEnd
	Il2CppChar* ___charEnd_1;
	// System.Text.EncoderNLS System.Text.EncoderFallbackBuffer::encoder
	EncoderNLS_t449404832 * ___encoder_2;
	// System.Boolean System.Text.EncoderFallbackBuffer::setEncoder
	bool ___setEncoder_3;
	// System.Boolean System.Text.EncoderFallbackBuffer::bUsedEncoder
	bool ___bUsedEncoder_4;
	// System.Boolean System.Text.EncoderFallbackBuffer::bFallingBack
	bool ___bFallingBack_5;
	// System.Int32 System.Text.EncoderFallbackBuffer::iRecursionCount
	int32_t ___iRecursionCount_6;

public:
	inline static int32_t get_offset_of_charStart_0() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t3523102303, ___charStart_0)); }
	inline Il2CppChar* get_charStart_0() const { return ___charStart_0; }
	inline Il2CppChar** get_address_of_charStart_0() { return &___charStart_0; }
	inline void set_charStart_0(Il2CppChar* value)
	{
		___charStart_0 = value;
	}

	inline static int32_t get_offset_of_charEnd_1() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t3523102303, ___charEnd_1)); }
	inline Il2CppChar* get_charEnd_1() const { return ___charEnd_1; }
	inline Il2CppChar** get_address_of_charEnd_1() { return &___charEnd_1; }
	inline void set_charEnd_1(Il2CppChar* value)
	{
		___charEnd_1 = value;
	}

	inline static int32_t get_offset_of_encoder_2() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t3523102303, ___encoder_2)); }
	inline EncoderNLS_t449404832 * get_encoder_2() const { return ___encoder_2; }
	inline EncoderNLS_t449404832 ** get_address_of_encoder_2() { return &___encoder_2; }
	inline void set_encoder_2(EncoderNLS_t449404832 * value)
	{
		___encoder_2 = value;
		Il2CppCodeGenWriteBarrier((&___encoder_2), value);
	}

	inline static int32_t get_offset_of_setEncoder_3() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t3523102303, ___setEncoder_3)); }
	inline bool get_setEncoder_3() const { return ___setEncoder_3; }
	inline bool* get_address_of_setEncoder_3() { return &___setEncoder_3; }
	inline void set_setEncoder_3(bool value)
	{
		___setEncoder_3 = value;
	}

	inline static int32_t get_offset_of_bUsedEncoder_4() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t3523102303, ___bUsedEncoder_4)); }
	inline bool get_bUsedEncoder_4() const { return ___bUsedEncoder_4; }
	inline bool* get_address_of_bUsedEncoder_4() { return &___bUsedEncoder_4; }
	inline void set_bUsedEncoder_4(bool value)
	{
		___bUsedEncoder_4 = value;
	}

	inline static int32_t get_offset_of_bFallingBack_5() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t3523102303, ___bFallingBack_5)); }
	inline bool get_bFallingBack_5() const { return ___bFallingBack_5; }
	inline bool* get_address_of_bFallingBack_5() { return &___bFallingBack_5; }
	inline void set_bFallingBack_5(bool value)
	{
		___bFallingBack_5 = value;
	}

	inline static int32_t get_offset_of_iRecursionCount_6() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t3523102303, ___iRecursionCount_6)); }
	inline int32_t get_iRecursionCount_6() const { return ___iRecursionCount_6; }
	inline int32_t* get_address_of_iRecursionCount_6() { return &___iRecursionCount_6; }
	inline void set_iRecursionCount_6(int32_t value)
	{
		___iRecursionCount_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERFALLBACKBUFFER_T3523102303_H
#ifndef ENCODING_T1523322056_H
#define ENCODING_T1523322056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding
struct  Encoding_t1523322056  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t2285235057 * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t1188251036 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t3123823036 * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___dataItem_10)); }
	inline CodePageDataItem_t2285235057 * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t2285235057 ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t2285235057 * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((&___dataItem_10), value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___encoderFallback_13)); }
	inline EncoderFallback_t1188251036 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t1188251036 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t1188251036 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((&___encoderFallback_13), value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___decoderFallback_14)); }
	inline DecoderFallback_t3123823036 * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_t3123823036 ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_t3123823036 * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___decoderFallback_14), value);
	}
};

struct Encoding_t1523322056_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t1523322056 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t1523322056 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t1523322056 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t1523322056 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t1523322056 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t1523322056 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t1523322056 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t1523322056 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t1853889766 * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_t1523322056 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_t1523322056 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_t1523322056 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((&___defaultEncoding_0), value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_t1523322056 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_t1523322056 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_t1523322056 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((&___unicodeEncoding_1), value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_t1523322056 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_t1523322056 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_t1523322056 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianUnicode_2), value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_t1523322056 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_t1523322056 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_t1523322056 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((&___utf7Encoding_3), value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_t1523322056 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_t1523322056 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_t1523322056 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((&___utf8Encoding_4), value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_t1523322056 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_t1523322056 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_t1523322056 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((&___utf32Encoding_5), value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_t1523322056 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_t1523322056 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_t1523322056 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((&___asciiEncoding_6), value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_t1523322056 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_t1523322056 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_t1523322056 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((&___latin1Encoding_7), value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___encodings_8)); }
	inline Hashtable_t1853889766 * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t1853889766 ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t1853889766 * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((&___encodings_8), value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_InternalSyncObject_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODING_T1523322056_H
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
#ifndef MONOENCODER_T374802340_H
#define MONOENCODER_T374802340_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Common.MonoEncoder
struct  MonoEncoder_t374802340  : public Encoder_t2198218980
{
public:
	// I18N.Common.MonoEncoding I18N.Common.MonoEncoder::encoding
	MonoEncoding_t666837952 * ___encoding_2;

public:
	inline static int32_t get_offset_of_encoding_2() { return static_cast<int32_t>(offsetof(MonoEncoder_t374802340, ___encoding_2)); }
	inline MonoEncoding_t666837952 * get_encoding_2() const { return ___encoding_2; }
	inline MonoEncoding_t666837952 ** get_address_of_encoding_2() { return &___encoding_2; }
	inline void set_encoding_2(MonoEncoding_t666837952 * value)
	{
		___encoding_2 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOENCODER_T374802340_H
#ifndef MONOENCODING_T666837952_H
#define MONOENCODING_T666837952_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Common.MonoEncoding
struct  MonoEncoding_t666837952  : public Encoding_t1523322056
{
public:
	// System.Int32 I18N.Common.MonoEncoding::win_code_page
	int32_t ___win_code_page_16;

public:
	inline static int32_t get_offset_of_win_code_page_16() { return static_cast<int32_t>(offsetof(MonoEncoding_t666837952, ___win_code_page_16)); }
	inline int32_t get_win_code_page_16() const { return ___win_code_page_16; }
	inline int32_t* get_address_of_win_code_page_16() { return &___win_code_page_16; }
	inline void set_win_code_page_16(int32_t value)
	{
		___win_code_page_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOENCODING_T666837952_H
#ifndef MONOSAFEENCODER_T3955416671_H
#define MONOSAFEENCODER_T3955416671_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Common.MonoSafeEncoder
struct  MonoSafeEncoder_t3955416671  : public Encoder_t2198218980
{
public:
	// I18N.Common.MonoSafeEncoding I18N.Common.MonoSafeEncoder::encoding
	MonoSafeEncoding_t4071300459 * ___encoding_2;

public:
	inline static int32_t get_offset_of_encoding_2() { return static_cast<int32_t>(offsetof(MonoSafeEncoder_t3955416671, ___encoding_2)); }
	inline MonoSafeEncoding_t4071300459 * get_encoding_2() const { return ___encoding_2; }
	inline MonoSafeEncoding_t4071300459 ** get_address_of_encoding_2() { return &___encoding_2; }
	inline void set_encoding_2(MonoSafeEncoding_t4071300459 * value)
	{
		___encoding_2 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOSAFEENCODER_T3955416671_H
#ifndef MONOSAFEENCODING_T4071300459_H
#define MONOSAFEENCODING_T4071300459_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Common.MonoSafeEncoding
struct  MonoSafeEncoding_t4071300459  : public Encoding_t1523322056
{
public:
	// System.Int32 I18N.Common.MonoSafeEncoding::win_code_page
	int32_t ___win_code_page_16;

public:
	inline static int32_t get_offset_of_win_code_page_16() { return static_cast<int32_t>(offsetof(MonoSafeEncoding_t4071300459, ___win_code_page_16)); }
	inline int32_t get_win_code_page_16() const { return ___win_code_page_16; }
	inline int32_t* get_address_of_win_code_page_16() { return &___win_code_page_16; }
	inline void set_win_code_page_16(int32_t value)
	{
		___win_code_page_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOSAFEENCODING_T4071300459_H
#ifndef REFERENCESOURCEDEFAULTENCODER_T2102071145_H
#define REFERENCESOURCEDEFAULTENCODER_T2102071145_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Common.ReferenceSourceDefaultEncoder
struct  ReferenceSourceDefaultEncoder_t2102071145  : public Encoder_t2198218980
{
public:
	// System.Text.Encoding I18N.Common.ReferenceSourceDefaultEncoder::m_encoding
	Encoding_t1523322056 * ___m_encoding_2;
	// System.Boolean I18N.Common.ReferenceSourceDefaultEncoder::m_hasInitializedEncoding
	bool ___m_hasInitializedEncoding_3;
	// System.Char I18N.Common.ReferenceSourceDefaultEncoder::charLeftOver
	Il2CppChar ___charLeftOver_4;

public:
	inline static int32_t get_offset_of_m_encoding_2() { return static_cast<int32_t>(offsetof(ReferenceSourceDefaultEncoder_t2102071145, ___m_encoding_2)); }
	inline Encoding_t1523322056 * get_m_encoding_2() const { return ___m_encoding_2; }
	inline Encoding_t1523322056 ** get_address_of_m_encoding_2() { return &___m_encoding_2; }
	inline void set_m_encoding_2(Encoding_t1523322056 * value)
	{
		___m_encoding_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_encoding_2), value);
	}

	inline static int32_t get_offset_of_m_hasInitializedEncoding_3() { return static_cast<int32_t>(offsetof(ReferenceSourceDefaultEncoder_t2102071145, ___m_hasInitializedEncoding_3)); }
	inline bool get_m_hasInitializedEncoding_3() const { return ___m_hasInitializedEncoding_3; }
	inline bool* get_address_of_m_hasInitializedEncoding_3() { return &___m_hasInitializedEncoding_3; }
	inline void set_m_hasInitializedEncoding_3(bool value)
	{
		___m_hasInitializedEncoding_3 = value;
	}

	inline static int32_t get_offset_of_charLeftOver_4() { return static_cast<int32_t>(offsetof(ReferenceSourceDefaultEncoder_t2102071145, ___charLeftOver_4)); }
	inline Il2CppChar get_charLeftOver_4() const { return ___charLeftOver_4; }
	inline Il2CppChar* get_address_of_charLeftOver_4() { return &___charLeftOver_4; }
	inline void set_charLeftOver_4(Il2CppChar value)
	{
		___charLeftOver_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFERENCESOURCEDEFAULTENCODER_T2102071145_H
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
#ifndef STREAM_T1273022909_H
#define STREAM_T1273022909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Stream
struct  Stream_t1273022909  : public MarshalByRefObject_t2760389100
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t156472862 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t2974092902 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_t1273022909, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_t156472862 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_t156472862 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_t156472862 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((&____activeReadWriteTask_2), value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_t1273022909, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t2974092902 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t2974092902 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t2974092902 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((&____asyncActiveSemaphore_3), value);
	}
};

struct Stream_t1273022909_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t1273022909 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t1273022909_StaticFields, ___Null_1)); }
	inline Stream_t1273022909 * get_Null_1() const { return ___Null_1; }
	inline Stream_t1273022909 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t1273022909 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((&___Null_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAM_T1273022909_H
#ifndef TEXTREADER_T283511965_H
#define TEXTREADER_T283511965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextReader
struct  TextReader_t283511965  : public MarshalByRefObject_t2760389100
{
public:

public:
};

struct TextReader_t283511965_StaticFields
{
public:
	// System.Func`2<System.Object,System.String> System.IO.TextReader::_ReadLineDelegate
	Func_2_t1214474899 * ____ReadLineDelegate_1;
	// System.Func`2<System.Object,System.Int32> System.IO.TextReader::_ReadDelegate
	Func_2_t2317969963 * ____ReadDelegate_2;
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_t283511965 * ___Null_3;

public:
	inline static int32_t get_offset_of__ReadLineDelegate_1() { return static_cast<int32_t>(offsetof(TextReader_t283511965_StaticFields, ____ReadLineDelegate_1)); }
	inline Func_2_t1214474899 * get__ReadLineDelegate_1() const { return ____ReadLineDelegate_1; }
	inline Func_2_t1214474899 ** get_address_of__ReadLineDelegate_1() { return &____ReadLineDelegate_1; }
	inline void set__ReadLineDelegate_1(Func_2_t1214474899 * value)
	{
		____ReadLineDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((&____ReadLineDelegate_1), value);
	}

	inline static int32_t get_offset_of__ReadDelegate_2() { return static_cast<int32_t>(offsetof(TextReader_t283511965_StaticFields, ____ReadDelegate_2)); }
	inline Func_2_t2317969963 * get__ReadDelegate_2() const { return ____ReadDelegate_2; }
	inline Func_2_t2317969963 ** get_address_of__ReadDelegate_2() { return &____ReadDelegate_2; }
	inline void set__ReadDelegate_2(Func_2_t2317969963 * value)
	{
		____ReadDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((&____ReadDelegate_2), value);
	}

	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(TextReader_t283511965_StaticFields, ___Null_3)); }
	inline TextReader_t283511965 * get_Null_3() const { return ___Null_3; }
	inline TextReader_t283511965 ** get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(TextReader_t283511965 * value)
	{
		___Null_3 = value;
		Il2CppCodeGenWriteBarrier((&___Null_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTREADER_T283511965_H
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
#ifndef DECODERREPLACEMENTFALLBACK_T1462101135_H
#define DECODERREPLACEMENTFALLBACK_T1462101135_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderReplacementFallback
struct  DecoderReplacementFallback_t1462101135  : public DecoderFallback_t3123823036
{
public:
	// System.String System.Text.DecoderReplacementFallback::strDefault
	String_t* ___strDefault_4;

public:
	inline static int32_t get_offset_of_strDefault_4() { return static_cast<int32_t>(offsetof(DecoderReplacementFallback_t1462101135, ___strDefault_4)); }
	inline String_t* get_strDefault_4() const { return ___strDefault_4; }
	inline String_t** get_address_of_strDefault_4() { return &___strDefault_4; }
	inline void set_strDefault_4(String_t* value)
	{
		___strDefault_4 = value;
		Il2CppCodeGenWriteBarrier((&___strDefault_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERREPLACEMENTFALLBACK_T1462101135_H
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
#ifndef BYTEENCODING_T1371924561_H
#define BYTEENCODING_T1371924561_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Common.ByteEncoding
struct  ByteEncoding_t1371924561  : public MonoEncoding_t666837952
{
public:
	// System.Char[] I18N.Common.ByteEncoding::toChars
	CharU5BU5D_t3528271667* ___toChars_17;
	// System.String I18N.Common.ByteEncoding::encodingName
	String_t* ___encodingName_18;
	// System.String I18N.Common.ByteEncoding::bodyName
	String_t* ___bodyName_19;
	// System.String I18N.Common.ByteEncoding::headerName
	String_t* ___headerName_20;
	// System.String I18N.Common.ByteEncoding::webName
	String_t* ___webName_21;
	// System.Boolean I18N.Common.ByteEncoding::isBrowserDisplay
	bool ___isBrowserDisplay_22;
	// System.Boolean I18N.Common.ByteEncoding::isBrowserSave
	bool ___isBrowserSave_23;
	// System.Boolean I18N.Common.ByteEncoding::isMailNewsDisplay
	bool ___isMailNewsDisplay_24;
	// System.Boolean I18N.Common.ByteEncoding::isMailNewsSave
	bool ___isMailNewsSave_25;
	// System.Int32 I18N.Common.ByteEncoding::windowsCodePage
	int32_t ___windowsCodePage_26;

public:
	inline static int32_t get_offset_of_toChars_17() { return static_cast<int32_t>(offsetof(ByteEncoding_t1371924561, ___toChars_17)); }
	inline CharU5BU5D_t3528271667* get_toChars_17() const { return ___toChars_17; }
	inline CharU5BU5D_t3528271667** get_address_of_toChars_17() { return &___toChars_17; }
	inline void set_toChars_17(CharU5BU5D_t3528271667* value)
	{
		___toChars_17 = value;
		Il2CppCodeGenWriteBarrier((&___toChars_17), value);
	}

	inline static int32_t get_offset_of_encodingName_18() { return static_cast<int32_t>(offsetof(ByteEncoding_t1371924561, ___encodingName_18)); }
	inline String_t* get_encodingName_18() const { return ___encodingName_18; }
	inline String_t** get_address_of_encodingName_18() { return &___encodingName_18; }
	inline void set_encodingName_18(String_t* value)
	{
		___encodingName_18 = value;
		Il2CppCodeGenWriteBarrier((&___encodingName_18), value);
	}

	inline static int32_t get_offset_of_bodyName_19() { return static_cast<int32_t>(offsetof(ByteEncoding_t1371924561, ___bodyName_19)); }
	inline String_t* get_bodyName_19() const { return ___bodyName_19; }
	inline String_t** get_address_of_bodyName_19() { return &___bodyName_19; }
	inline void set_bodyName_19(String_t* value)
	{
		___bodyName_19 = value;
		Il2CppCodeGenWriteBarrier((&___bodyName_19), value);
	}

	inline static int32_t get_offset_of_headerName_20() { return static_cast<int32_t>(offsetof(ByteEncoding_t1371924561, ___headerName_20)); }
	inline String_t* get_headerName_20() const { return ___headerName_20; }
	inline String_t** get_address_of_headerName_20() { return &___headerName_20; }
	inline void set_headerName_20(String_t* value)
	{
		___headerName_20 = value;
		Il2CppCodeGenWriteBarrier((&___headerName_20), value);
	}

	inline static int32_t get_offset_of_webName_21() { return static_cast<int32_t>(offsetof(ByteEncoding_t1371924561, ___webName_21)); }
	inline String_t* get_webName_21() const { return ___webName_21; }
	inline String_t** get_address_of_webName_21() { return &___webName_21; }
	inline void set_webName_21(String_t* value)
	{
		___webName_21 = value;
		Il2CppCodeGenWriteBarrier((&___webName_21), value);
	}

	inline static int32_t get_offset_of_isBrowserDisplay_22() { return static_cast<int32_t>(offsetof(ByteEncoding_t1371924561, ___isBrowserDisplay_22)); }
	inline bool get_isBrowserDisplay_22() const { return ___isBrowserDisplay_22; }
	inline bool* get_address_of_isBrowserDisplay_22() { return &___isBrowserDisplay_22; }
	inline void set_isBrowserDisplay_22(bool value)
	{
		___isBrowserDisplay_22 = value;
	}

	inline static int32_t get_offset_of_isBrowserSave_23() { return static_cast<int32_t>(offsetof(ByteEncoding_t1371924561, ___isBrowserSave_23)); }
	inline bool get_isBrowserSave_23() const { return ___isBrowserSave_23; }
	inline bool* get_address_of_isBrowserSave_23() { return &___isBrowserSave_23; }
	inline void set_isBrowserSave_23(bool value)
	{
		___isBrowserSave_23 = value;
	}

	inline static int32_t get_offset_of_isMailNewsDisplay_24() { return static_cast<int32_t>(offsetof(ByteEncoding_t1371924561, ___isMailNewsDisplay_24)); }
	inline bool get_isMailNewsDisplay_24() const { return ___isMailNewsDisplay_24; }
	inline bool* get_address_of_isMailNewsDisplay_24() { return &___isMailNewsDisplay_24; }
	inline void set_isMailNewsDisplay_24(bool value)
	{
		___isMailNewsDisplay_24 = value;
	}

	inline static int32_t get_offset_of_isMailNewsSave_25() { return static_cast<int32_t>(offsetof(ByteEncoding_t1371924561, ___isMailNewsSave_25)); }
	inline bool get_isMailNewsSave_25() const { return ___isMailNewsSave_25; }
	inline bool* get_address_of_isMailNewsSave_25() { return &___isMailNewsSave_25; }
	inline void set_isMailNewsSave_25(bool value)
	{
		___isMailNewsSave_25 = value;
	}

	inline static int32_t get_offset_of_windowsCodePage_26() { return static_cast<int32_t>(offsetof(ByteEncoding_t1371924561, ___windowsCodePage_26)); }
	inline int32_t get_windowsCodePage_26() const { return ___windowsCodePage_26; }
	inline int32_t* get_address_of_windowsCodePage_26() { return &___windowsCodePage_26; }
	inline void set_windowsCodePage_26(int32_t value)
	{
		___windowsCodePage_26 = value;
	}
};

struct ByteEncoding_t1371924561_StaticFields
{
public:
	// System.Byte[] I18N.Common.ByteEncoding::isNormalized
	ByteU5BU5D_t4116647657* ___isNormalized_27;
	// System.Byte[] I18N.Common.ByteEncoding::isNormalizedComputed
	ByteU5BU5D_t4116647657* ___isNormalizedComputed_28;
	// System.Byte[] I18N.Common.ByteEncoding::normalization_bytes
	ByteU5BU5D_t4116647657* ___normalization_bytes_29;

public:
	inline static int32_t get_offset_of_isNormalized_27() { return static_cast<int32_t>(offsetof(ByteEncoding_t1371924561_StaticFields, ___isNormalized_27)); }
	inline ByteU5BU5D_t4116647657* get_isNormalized_27() const { return ___isNormalized_27; }
	inline ByteU5BU5D_t4116647657** get_address_of_isNormalized_27() { return &___isNormalized_27; }
	inline void set_isNormalized_27(ByteU5BU5D_t4116647657* value)
	{
		___isNormalized_27 = value;
		Il2CppCodeGenWriteBarrier((&___isNormalized_27), value);
	}

	inline static int32_t get_offset_of_isNormalizedComputed_28() { return static_cast<int32_t>(offsetof(ByteEncoding_t1371924561_StaticFields, ___isNormalizedComputed_28)); }
	inline ByteU5BU5D_t4116647657* get_isNormalizedComputed_28() const { return ___isNormalizedComputed_28; }
	inline ByteU5BU5D_t4116647657** get_address_of_isNormalizedComputed_28() { return &___isNormalizedComputed_28; }
	inline void set_isNormalizedComputed_28(ByteU5BU5D_t4116647657* value)
	{
		___isNormalizedComputed_28 = value;
		Il2CppCodeGenWriteBarrier((&___isNormalizedComputed_28), value);
	}

	inline static int32_t get_offset_of_normalization_bytes_29() { return static_cast<int32_t>(offsetof(ByteEncoding_t1371924561_StaticFields, ___normalization_bytes_29)); }
	inline ByteU5BU5D_t4116647657* get_normalization_bytes_29() const { return ___normalization_bytes_29; }
	inline ByteU5BU5D_t4116647657** get_address_of_normalization_bytes_29() { return &___normalization_bytes_29; }
	inline void set_normalization_bytes_29(ByteU5BU5D_t4116647657* value)
	{
		___normalization_bytes_29 = value;
		Il2CppCodeGenWriteBarrier((&___normalization_bytes_29), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTEENCODING_T1371924561_H
#ifndef BYTESAFEENCODING_T1616231111_H
#define BYTESAFEENCODING_T1616231111_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Common.ByteSafeEncoding
struct  ByteSafeEncoding_t1616231111  : public MonoSafeEncoding_t4071300459
{
public:
	// System.Char[] I18N.Common.ByteSafeEncoding::toChars
	CharU5BU5D_t3528271667* ___toChars_17;
	// System.String I18N.Common.ByteSafeEncoding::encodingName
	String_t* ___encodingName_18;
	// System.String I18N.Common.ByteSafeEncoding::bodyName
	String_t* ___bodyName_19;
	// System.String I18N.Common.ByteSafeEncoding::headerName
	String_t* ___headerName_20;
	// System.String I18N.Common.ByteSafeEncoding::webName
	String_t* ___webName_21;
	// System.Boolean I18N.Common.ByteSafeEncoding::isBrowserDisplay
	bool ___isBrowserDisplay_22;
	// System.Boolean I18N.Common.ByteSafeEncoding::isBrowserSave
	bool ___isBrowserSave_23;
	// System.Boolean I18N.Common.ByteSafeEncoding::isMailNewsDisplay
	bool ___isMailNewsDisplay_24;
	// System.Boolean I18N.Common.ByteSafeEncoding::isMailNewsSave
	bool ___isMailNewsSave_25;
	// System.Int32 I18N.Common.ByteSafeEncoding::windowsCodePage
	int32_t ___windowsCodePage_26;

public:
	inline static int32_t get_offset_of_toChars_17() { return static_cast<int32_t>(offsetof(ByteSafeEncoding_t1616231111, ___toChars_17)); }
	inline CharU5BU5D_t3528271667* get_toChars_17() const { return ___toChars_17; }
	inline CharU5BU5D_t3528271667** get_address_of_toChars_17() { return &___toChars_17; }
	inline void set_toChars_17(CharU5BU5D_t3528271667* value)
	{
		___toChars_17 = value;
		Il2CppCodeGenWriteBarrier((&___toChars_17), value);
	}

	inline static int32_t get_offset_of_encodingName_18() { return static_cast<int32_t>(offsetof(ByteSafeEncoding_t1616231111, ___encodingName_18)); }
	inline String_t* get_encodingName_18() const { return ___encodingName_18; }
	inline String_t** get_address_of_encodingName_18() { return &___encodingName_18; }
	inline void set_encodingName_18(String_t* value)
	{
		___encodingName_18 = value;
		Il2CppCodeGenWriteBarrier((&___encodingName_18), value);
	}

	inline static int32_t get_offset_of_bodyName_19() { return static_cast<int32_t>(offsetof(ByteSafeEncoding_t1616231111, ___bodyName_19)); }
	inline String_t* get_bodyName_19() const { return ___bodyName_19; }
	inline String_t** get_address_of_bodyName_19() { return &___bodyName_19; }
	inline void set_bodyName_19(String_t* value)
	{
		___bodyName_19 = value;
		Il2CppCodeGenWriteBarrier((&___bodyName_19), value);
	}

	inline static int32_t get_offset_of_headerName_20() { return static_cast<int32_t>(offsetof(ByteSafeEncoding_t1616231111, ___headerName_20)); }
	inline String_t* get_headerName_20() const { return ___headerName_20; }
	inline String_t** get_address_of_headerName_20() { return &___headerName_20; }
	inline void set_headerName_20(String_t* value)
	{
		___headerName_20 = value;
		Il2CppCodeGenWriteBarrier((&___headerName_20), value);
	}

	inline static int32_t get_offset_of_webName_21() { return static_cast<int32_t>(offsetof(ByteSafeEncoding_t1616231111, ___webName_21)); }
	inline String_t* get_webName_21() const { return ___webName_21; }
	inline String_t** get_address_of_webName_21() { return &___webName_21; }
	inline void set_webName_21(String_t* value)
	{
		___webName_21 = value;
		Il2CppCodeGenWriteBarrier((&___webName_21), value);
	}

	inline static int32_t get_offset_of_isBrowserDisplay_22() { return static_cast<int32_t>(offsetof(ByteSafeEncoding_t1616231111, ___isBrowserDisplay_22)); }
	inline bool get_isBrowserDisplay_22() const { return ___isBrowserDisplay_22; }
	inline bool* get_address_of_isBrowserDisplay_22() { return &___isBrowserDisplay_22; }
	inline void set_isBrowserDisplay_22(bool value)
	{
		___isBrowserDisplay_22 = value;
	}

	inline static int32_t get_offset_of_isBrowserSave_23() { return static_cast<int32_t>(offsetof(ByteSafeEncoding_t1616231111, ___isBrowserSave_23)); }
	inline bool get_isBrowserSave_23() const { return ___isBrowserSave_23; }
	inline bool* get_address_of_isBrowserSave_23() { return &___isBrowserSave_23; }
	inline void set_isBrowserSave_23(bool value)
	{
		___isBrowserSave_23 = value;
	}

	inline static int32_t get_offset_of_isMailNewsDisplay_24() { return static_cast<int32_t>(offsetof(ByteSafeEncoding_t1616231111, ___isMailNewsDisplay_24)); }
	inline bool get_isMailNewsDisplay_24() const { return ___isMailNewsDisplay_24; }
	inline bool* get_address_of_isMailNewsDisplay_24() { return &___isMailNewsDisplay_24; }
	inline void set_isMailNewsDisplay_24(bool value)
	{
		___isMailNewsDisplay_24 = value;
	}

	inline static int32_t get_offset_of_isMailNewsSave_25() { return static_cast<int32_t>(offsetof(ByteSafeEncoding_t1616231111, ___isMailNewsSave_25)); }
	inline bool get_isMailNewsSave_25() const { return ___isMailNewsSave_25; }
	inline bool* get_address_of_isMailNewsSave_25() { return &___isMailNewsSave_25; }
	inline void set_isMailNewsSave_25(bool value)
	{
		___isMailNewsSave_25 = value;
	}

	inline static int32_t get_offset_of_windowsCodePage_26() { return static_cast<int32_t>(offsetof(ByteSafeEncoding_t1616231111, ___windowsCodePage_26)); }
	inline int32_t get_windowsCodePage_26() const { return ___windowsCodePage_26; }
	inline int32_t* get_address_of_windowsCodePage_26() { return &___windowsCodePage_26; }
	inline void set_windowsCodePage_26(int32_t value)
	{
		___windowsCodePage_26 = value;
	}
};

struct ByteSafeEncoding_t1616231111_StaticFields
{
public:
	// System.Byte[] I18N.Common.ByteSafeEncoding::isNormalized
	ByteU5BU5D_t4116647657* ___isNormalized_27;
	// System.Byte[] I18N.Common.ByteSafeEncoding::isNormalizedComputed
	ByteU5BU5D_t4116647657* ___isNormalizedComputed_28;
	// System.Byte[] I18N.Common.ByteSafeEncoding::normalization_bytes
	ByteU5BU5D_t4116647657* ___normalization_bytes_29;

public:
	inline static int32_t get_offset_of_isNormalized_27() { return static_cast<int32_t>(offsetof(ByteSafeEncoding_t1616231111_StaticFields, ___isNormalized_27)); }
	inline ByteU5BU5D_t4116647657* get_isNormalized_27() const { return ___isNormalized_27; }
	inline ByteU5BU5D_t4116647657** get_address_of_isNormalized_27() { return &___isNormalized_27; }
	inline void set_isNormalized_27(ByteU5BU5D_t4116647657* value)
	{
		___isNormalized_27 = value;
		Il2CppCodeGenWriteBarrier((&___isNormalized_27), value);
	}

	inline static int32_t get_offset_of_isNormalizedComputed_28() { return static_cast<int32_t>(offsetof(ByteSafeEncoding_t1616231111_StaticFields, ___isNormalizedComputed_28)); }
	inline ByteU5BU5D_t4116647657* get_isNormalizedComputed_28() const { return ___isNormalizedComputed_28; }
	inline ByteU5BU5D_t4116647657** get_address_of_isNormalizedComputed_28() { return &___isNormalizedComputed_28; }
	inline void set_isNormalizedComputed_28(ByteU5BU5D_t4116647657* value)
	{
		___isNormalizedComputed_28 = value;
		Il2CppCodeGenWriteBarrier((&___isNormalizedComputed_28), value);
	}

	inline static int32_t get_offset_of_normalization_bytes_29() { return static_cast<int32_t>(offsetof(ByteSafeEncoding_t1616231111_StaticFields, ___normalization_bytes_29)); }
	inline ByteU5BU5D_t4116647657* get_normalization_bytes_29() const { return ___normalization_bytes_29; }
	inline ByteU5BU5D_t4116647657** get_address_of_normalization_bytes_29() { return &___normalization_bytes_29; }
	inline void set_normalization_bytes_29(ByteU5BU5D_t4116647657* value)
	{
		___normalization_bytes_29 = value;
		Il2CppCodeGenWriteBarrier((&___normalization_bytes_29), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTESAFEENCODING_T1616231111_H
#ifndef MONOENCODINGDEFAULTENCODER_T3189165900_H
#define MONOENCODINGDEFAULTENCODER_T3189165900_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Common.MonoEncodingDefaultEncoder
struct  MonoEncodingDefaultEncoder_t3189165900  : public ReferenceSourceDefaultEncoder_t2102071145
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOENCODINGDEFAULTENCODER_T3189165900_H
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
#ifndef HASHTABLE_T1853889766_H
#define HASHTABLE_T1853889766_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable
struct  Hashtable_t1853889766  : public RuntimeObject
{
public:
	// System.Collections.Hashtable/bucket[] System.Collections.Hashtable::buckets
	bucketU5BU5D_t876121385* ___buckets_0;
	// System.Int32 System.Collections.Hashtable::count
	int32_t ___count_1;
	// System.Int32 System.Collections.Hashtable::occupancy
	int32_t ___occupancy_2;
	// System.Int32 System.Collections.Hashtable::loadsize
	int32_t ___loadsize_3;
	// System.Single System.Collections.Hashtable::loadFactor
	float ___loadFactor_4;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::version
	int32_t ___version_5;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::isWriterInProgress
	bool ___isWriterInProgress_6;
	// System.Collections.ICollection System.Collections.Hashtable::keys
	RuntimeObject* ___keys_7;
	// System.Collections.ICollection System.Collections.Hashtable::values
	RuntimeObject* ___values_8;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::_keycomparer
	RuntimeObject* ____keycomparer_9;
	// System.Object System.Collections.Hashtable::_syncRoot
	RuntimeObject * ____syncRoot_10;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___buckets_0)); }
	inline bucketU5BU5D_t876121385* get_buckets_0() const { return ___buckets_0; }
	inline bucketU5BU5D_t876121385** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(bucketU5BU5D_t876121385* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}

	inline static int32_t get_offset_of_occupancy_2() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___occupancy_2)); }
	inline int32_t get_occupancy_2() const { return ___occupancy_2; }
	inline int32_t* get_address_of_occupancy_2() { return &___occupancy_2; }
	inline void set_occupancy_2(int32_t value)
	{
		___occupancy_2 = value;
	}

	inline static int32_t get_offset_of_loadsize_3() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___loadsize_3)); }
	inline int32_t get_loadsize_3() const { return ___loadsize_3; }
	inline int32_t* get_address_of_loadsize_3() { return &___loadsize_3; }
	inline void set_loadsize_3(int32_t value)
	{
		___loadsize_3 = value;
	}

	inline static int32_t get_offset_of_loadFactor_4() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___loadFactor_4)); }
	inline float get_loadFactor_4() const { return ___loadFactor_4; }
	inline float* get_address_of_loadFactor_4() { return &___loadFactor_4; }
	inline void set_loadFactor_4(float value)
	{
		___loadFactor_4 = value;
	}

	inline static int32_t get_offset_of_version_5() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___version_5)); }
	inline int32_t get_version_5() const { return ___version_5; }
	inline int32_t* get_address_of_version_5() { return &___version_5; }
	inline void set_version_5(int32_t value)
	{
		___version_5 = value;
	}

	inline static int32_t get_offset_of_isWriterInProgress_6() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___isWriterInProgress_6)); }
	inline bool get_isWriterInProgress_6() const { return ___isWriterInProgress_6; }
	inline bool* get_address_of_isWriterInProgress_6() { return &___isWriterInProgress_6; }
	inline void set_isWriterInProgress_6(bool value)
	{
		___isWriterInProgress_6 = value;
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___keys_7)); }
	inline RuntimeObject* get_keys_7() const { return ___keys_7; }
	inline RuntimeObject** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(RuntimeObject* value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___values_8)); }
	inline RuntimeObject* get_values_8() const { return ___values_8; }
	inline RuntimeObject** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(RuntimeObject* value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__keycomparer_9() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ____keycomparer_9)); }
	inline RuntimeObject* get__keycomparer_9() const { return ____keycomparer_9; }
	inline RuntimeObject** get_address_of__keycomparer_9() { return &____keycomparer_9; }
	inline void set__keycomparer_9(RuntimeObject* value)
	{
		____keycomparer_9 = value;
		Il2CppCodeGenWriteBarrier((&____keycomparer_9), value);
	}

	inline static int32_t get_offset_of__syncRoot_10() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ____syncRoot_10)); }
	inline RuntimeObject * get__syncRoot_10() const { return ____syncRoot_10; }
	inline RuntimeObject ** get_address_of__syncRoot_10() { return &____syncRoot_10; }
	inline void set__syncRoot_10(RuntimeObject * value)
	{
		____syncRoot_10 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHTABLE_T1853889766_H
#ifndef ASSEMBLYHASHALGORITHM_T1216504064_H
#define ASSEMBLYHASHALGORITHM_T1216504064_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.Assemblies.AssemblyHashAlgorithm
struct  AssemblyHashAlgorithm_t1216504064 
{
public:
	// System.Int32 System.Configuration.Assemblies.AssemblyHashAlgorithm::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AssemblyHashAlgorithm_t1216504064, ___value___2)); }
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
#endif // ASSEMBLYHASHALGORITHM_T1216504064_H
#ifndef ASSEMBLYVERSIONCOMPATIBILITY_T766556580_H
#define ASSEMBLYVERSIONCOMPATIBILITY_T766556580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.Assemblies.AssemblyVersionCompatibility
struct  AssemblyVersionCompatibility_t766556580 
{
public:
	// System.Int32 System.Configuration.Assemblies.AssemblyVersionCompatibility::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AssemblyVersionCompatibility_t766556580, ___value___2)); }
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
#endif // ASSEMBLYVERSIONCOMPATIBILITY_T766556580_H
#ifndef FILEACCESS_T1659085276_H
#define FILEACCESS_T1659085276_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileAccess
struct  FileAccess_t1659085276 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAccess_t1659085276, ___value___2)); }
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
#endif // FILEACCESS_T1659085276_H
#ifndef IOEXCEPTION_T4088381929_H
#define IOEXCEPTION_T4088381929_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.IOException
struct  IOException_t4088381929  : public SystemException_t176217640
{
public:
	// System.String System.IO.IOException::_maybeFullPath
	String_t* ____maybeFullPath_17;

public:
	inline static int32_t get_offset_of__maybeFullPath_17() { return static_cast<int32_t>(offsetof(IOException_t4088381929, ____maybeFullPath_17)); }
	inline String_t* get__maybeFullPath_17() const { return ____maybeFullPath_17; }
	inline String_t** get_address_of__maybeFullPath_17() { return &____maybeFullPath_17; }
	inline void set__maybeFullPath_17(String_t* value)
	{
		____maybeFullPath_17 = value;
		Il2CppCodeGenWriteBarrier((&____maybeFullPath_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IOEXCEPTION_T4088381929_H
#ifndef STREAMREADER_T4009935899_H
#define STREAMREADER_T4009935899_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StreamReader
struct  StreamReader_t4009935899  : public TextReader_t283511965
{
public:
	// System.IO.Stream System.IO.StreamReader::stream
	Stream_t1273022909 * ___stream_5;
	// System.Text.Encoding System.IO.StreamReader::encoding
	Encoding_t1523322056 * ___encoding_6;
	// System.Text.Decoder System.IO.StreamReader::decoder
	Decoder_t2204182725 * ___decoder_7;
	// System.Byte[] System.IO.StreamReader::byteBuffer
	ByteU5BU5D_t4116647657* ___byteBuffer_8;
	// System.Char[] System.IO.StreamReader::charBuffer
	CharU5BU5D_t3528271667* ___charBuffer_9;
	// System.Byte[] System.IO.StreamReader::_preamble
	ByteU5BU5D_t4116647657* ____preamble_10;
	// System.Int32 System.IO.StreamReader::charPos
	int32_t ___charPos_11;
	// System.Int32 System.IO.StreamReader::charLen
	int32_t ___charLen_12;
	// System.Int32 System.IO.StreamReader::byteLen
	int32_t ___byteLen_13;
	// System.Int32 System.IO.StreamReader::bytePos
	int32_t ___bytePos_14;
	// System.Int32 System.IO.StreamReader::_maxCharsPerBuffer
	int32_t ____maxCharsPerBuffer_15;
	// System.Boolean System.IO.StreamReader::_detectEncoding
	bool ____detectEncoding_16;
	// System.Boolean System.IO.StreamReader::_checkPreamble
	bool ____checkPreamble_17;
	// System.Boolean System.IO.StreamReader::_isBlocked
	bool ____isBlocked_18;
	// System.Boolean System.IO.StreamReader::_closable
	bool ____closable_19;
	// System.Threading.Tasks.Task modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamReader::_asyncReadTask
	Task_t3187275312 * ____asyncReadTask_20;

public:
	inline static int32_t get_offset_of_stream_5() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___stream_5)); }
	inline Stream_t1273022909 * get_stream_5() const { return ___stream_5; }
	inline Stream_t1273022909 ** get_address_of_stream_5() { return &___stream_5; }
	inline void set_stream_5(Stream_t1273022909 * value)
	{
		___stream_5 = value;
		Il2CppCodeGenWriteBarrier((&___stream_5), value);
	}

	inline static int32_t get_offset_of_encoding_6() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___encoding_6)); }
	inline Encoding_t1523322056 * get_encoding_6() const { return ___encoding_6; }
	inline Encoding_t1523322056 ** get_address_of_encoding_6() { return &___encoding_6; }
	inline void set_encoding_6(Encoding_t1523322056 * value)
	{
		___encoding_6 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_6), value);
	}

	inline static int32_t get_offset_of_decoder_7() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___decoder_7)); }
	inline Decoder_t2204182725 * get_decoder_7() const { return ___decoder_7; }
	inline Decoder_t2204182725 ** get_address_of_decoder_7() { return &___decoder_7; }
	inline void set_decoder_7(Decoder_t2204182725 * value)
	{
		___decoder_7 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_7), value);
	}

	inline static int32_t get_offset_of_byteBuffer_8() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___byteBuffer_8)); }
	inline ByteU5BU5D_t4116647657* get_byteBuffer_8() const { return ___byteBuffer_8; }
	inline ByteU5BU5D_t4116647657** get_address_of_byteBuffer_8() { return &___byteBuffer_8; }
	inline void set_byteBuffer_8(ByteU5BU5D_t4116647657* value)
	{
		___byteBuffer_8 = value;
		Il2CppCodeGenWriteBarrier((&___byteBuffer_8), value);
	}

	inline static int32_t get_offset_of_charBuffer_9() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___charBuffer_9)); }
	inline CharU5BU5D_t3528271667* get_charBuffer_9() const { return ___charBuffer_9; }
	inline CharU5BU5D_t3528271667** get_address_of_charBuffer_9() { return &___charBuffer_9; }
	inline void set_charBuffer_9(CharU5BU5D_t3528271667* value)
	{
		___charBuffer_9 = value;
		Il2CppCodeGenWriteBarrier((&___charBuffer_9), value);
	}

	inline static int32_t get_offset_of__preamble_10() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ____preamble_10)); }
	inline ByteU5BU5D_t4116647657* get__preamble_10() const { return ____preamble_10; }
	inline ByteU5BU5D_t4116647657** get_address_of__preamble_10() { return &____preamble_10; }
	inline void set__preamble_10(ByteU5BU5D_t4116647657* value)
	{
		____preamble_10 = value;
		Il2CppCodeGenWriteBarrier((&____preamble_10), value);
	}

	inline static int32_t get_offset_of_charPos_11() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___charPos_11)); }
	inline int32_t get_charPos_11() const { return ___charPos_11; }
	inline int32_t* get_address_of_charPos_11() { return &___charPos_11; }
	inline void set_charPos_11(int32_t value)
	{
		___charPos_11 = value;
	}

	inline static int32_t get_offset_of_charLen_12() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___charLen_12)); }
	inline int32_t get_charLen_12() const { return ___charLen_12; }
	inline int32_t* get_address_of_charLen_12() { return &___charLen_12; }
	inline void set_charLen_12(int32_t value)
	{
		___charLen_12 = value;
	}

	inline static int32_t get_offset_of_byteLen_13() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___byteLen_13)); }
	inline int32_t get_byteLen_13() const { return ___byteLen_13; }
	inline int32_t* get_address_of_byteLen_13() { return &___byteLen_13; }
	inline void set_byteLen_13(int32_t value)
	{
		___byteLen_13 = value;
	}

	inline static int32_t get_offset_of_bytePos_14() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___bytePos_14)); }
	inline int32_t get_bytePos_14() const { return ___bytePos_14; }
	inline int32_t* get_address_of_bytePos_14() { return &___bytePos_14; }
	inline void set_bytePos_14(int32_t value)
	{
		___bytePos_14 = value;
	}

	inline static int32_t get_offset_of__maxCharsPerBuffer_15() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ____maxCharsPerBuffer_15)); }
	inline int32_t get__maxCharsPerBuffer_15() const { return ____maxCharsPerBuffer_15; }
	inline int32_t* get_address_of__maxCharsPerBuffer_15() { return &____maxCharsPerBuffer_15; }
	inline void set__maxCharsPerBuffer_15(int32_t value)
	{
		____maxCharsPerBuffer_15 = value;
	}

	inline static int32_t get_offset_of__detectEncoding_16() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ____detectEncoding_16)); }
	inline bool get__detectEncoding_16() const { return ____detectEncoding_16; }
	inline bool* get_address_of__detectEncoding_16() { return &____detectEncoding_16; }
	inline void set__detectEncoding_16(bool value)
	{
		____detectEncoding_16 = value;
	}

	inline static int32_t get_offset_of__checkPreamble_17() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ____checkPreamble_17)); }
	inline bool get__checkPreamble_17() const { return ____checkPreamble_17; }
	inline bool* get_address_of__checkPreamble_17() { return &____checkPreamble_17; }
	inline void set__checkPreamble_17(bool value)
	{
		____checkPreamble_17 = value;
	}

	inline static int32_t get_offset_of__isBlocked_18() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ____isBlocked_18)); }
	inline bool get__isBlocked_18() const { return ____isBlocked_18; }
	inline bool* get_address_of__isBlocked_18() { return &____isBlocked_18; }
	inline void set__isBlocked_18(bool value)
	{
		____isBlocked_18 = value;
	}

	inline static int32_t get_offset_of__closable_19() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ____closable_19)); }
	inline bool get__closable_19() const { return ____closable_19; }
	inline bool* get_address_of__closable_19() { return &____closable_19; }
	inline void set__closable_19(bool value)
	{
		____closable_19 = value;
	}

	inline static int32_t get_offset_of__asyncReadTask_20() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ____asyncReadTask_20)); }
	inline Task_t3187275312 * get__asyncReadTask_20() const { return ____asyncReadTask_20; }
	inline Task_t3187275312 ** get_address_of__asyncReadTask_20() { return &____asyncReadTask_20; }
	inline void set__asyncReadTask_20(Task_t3187275312 * value)
	{
		____asyncReadTask_20 = value;
		Il2CppCodeGenWriteBarrier((&____asyncReadTask_20), value);
	}
};

struct StreamReader_t4009935899_StaticFields
{
public:
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_t4009935899 * ___Null_4;

public:
	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899_StaticFields, ___Null_4)); }
	inline StreamReader_t4009935899 * get_Null_4() const { return ___Null_4; }
	inline StreamReader_t4009935899 ** get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(StreamReader_t4009935899 * value)
	{
		___Null_4 = value;
		Il2CppCodeGenWriteBarrier((&___Null_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMREADER_T4009935899_H
#ifndef MEMBERACCESSEXCEPTION_T1734467078_H
#define MEMBERACCESSEXCEPTION_T1734467078_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MemberAccessException
struct  MemberAccessException_t1734467078  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERACCESSEXCEPTION_T1734467078_H
#ifndef NOTIMPLEMENTEDEXCEPTION_T3489357830_H
#define NOTIMPLEMENTEDEXCEPTION_T3489357830_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotImplementedException
struct  NotImplementedException_t3489357830  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIMPLEMENTEDEXCEPTION_T3489357830_H
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
#ifndef ASSEMBLYCONTENTTYPE_T1652800354_H
#define ASSEMBLYCONTENTTYPE_T1652800354_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyContentType
struct  AssemblyContentType_t1652800354 
{
public:
	// System.Int32 System.Reflection.AssemblyContentType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AssemblyContentType_t1652800354, ___value___2)); }
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
#endif // ASSEMBLYCONTENTTYPE_T1652800354_H
#ifndef ASSEMBLYNAMEFLAGS_T3675421470_H
#define ASSEMBLYNAMEFLAGS_T3675421470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyNameFlags
struct  AssemblyNameFlags_t3675421470 
{
public:
	// System.Int32 System.Reflection.AssemblyNameFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AssemblyNameFlags_t3675421470, ___value___2)); }
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
#endif // ASSEMBLYNAMEFLAGS_T3675421470_H
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
#ifndef PROCESSORARCHITECTURE_T305929193_H
#define PROCESSORARCHITECTURE_T305929193_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ProcessorArchitecture
struct  ProcessorArchitecture_t305929193 
{
public:
	// System.Int32 System.Reflection.ProcessorArchitecture::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ProcessorArchitecture_t305929193, ___value___2)); }
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
#endif // PROCESSORARCHITECTURE_T305929193_H
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
#ifndef SECURITYEXCEPTION_T975544473_H
#define SECURITYEXCEPTION_T975544473_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityException
struct  SecurityException_t975544473  : public SystemException_t176217640
{
public:
	// System.String System.Security.SecurityException::permissionState
	String_t* ___permissionState_17;
	// System.Type System.Security.SecurityException::permissionType
	Type_t * ___permissionType_18;
	// System.String System.Security.SecurityException::_granted
	String_t* ____granted_19;
	// System.String System.Security.SecurityException::_refused
	String_t* ____refused_20;
	// System.Object System.Security.SecurityException::_demanded
	RuntimeObject * ____demanded_21;
	// System.Security.IPermission System.Security.SecurityException::_firstperm
	RuntimeObject* ____firstperm_22;
	// System.Reflection.MethodInfo System.Security.SecurityException::_method
	MethodInfo_t * ____method_23;
	// System.Security.Policy.Evidence System.Security.SecurityException::_evidence
	Evidence_t2008144148 * ____evidence_24;

public:
	inline static int32_t get_offset_of_permissionState_17() { return static_cast<int32_t>(offsetof(SecurityException_t975544473, ___permissionState_17)); }
	inline String_t* get_permissionState_17() const { return ___permissionState_17; }
	inline String_t** get_address_of_permissionState_17() { return &___permissionState_17; }
	inline void set_permissionState_17(String_t* value)
	{
		___permissionState_17 = value;
		Il2CppCodeGenWriteBarrier((&___permissionState_17), value);
	}

	inline static int32_t get_offset_of_permissionType_18() { return static_cast<int32_t>(offsetof(SecurityException_t975544473, ___permissionType_18)); }
	inline Type_t * get_permissionType_18() const { return ___permissionType_18; }
	inline Type_t ** get_address_of_permissionType_18() { return &___permissionType_18; }
	inline void set_permissionType_18(Type_t * value)
	{
		___permissionType_18 = value;
		Il2CppCodeGenWriteBarrier((&___permissionType_18), value);
	}

	inline static int32_t get_offset_of__granted_19() { return static_cast<int32_t>(offsetof(SecurityException_t975544473, ____granted_19)); }
	inline String_t* get__granted_19() const { return ____granted_19; }
	inline String_t** get_address_of__granted_19() { return &____granted_19; }
	inline void set__granted_19(String_t* value)
	{
		____granted_19 = value;
		Il2CppCodeGenWriteBarrier((&____granted_19), value);
	}

	inline static int32_t get_offset_of__refused_20() { return static_cast<int32_t>(offsetof(SecurityException_t975544473, ____refused_20)); }
	inline String_t* get__refused_20() const { return ____refused_20; }
	inline String_t** get_address_of__refused_20() { return &____refused_20; }
	inline void set__refused_20(String_t* value)
	{
		____refused_20 = value;
		Il2CppCodeGenWriteBarrier((&____refused_20), value);
	}

	inline static int32_t get_offset_of__demanded_21() { return static_cast<int32_t>(offsetof(SecurityException_t975544473, ____demanded_21)); }
	inline RuntimeObject * get__demanded_21() const { return ____demanded_21; }
	inline RuntimeObject ** get_address_of__demanded_21() { return &____demanded_21; }
	inline void set__demanded_21(RuntimeObject * value)
	{
		____demanded_21 = value;
		Il2CppCodeGenWriteBarrier((&____demanded_21), value);
	}

	inline static int32_t get_offset_of__firstperm_22() { return static_cast<int32_t>(offsetof(SecurityException_t975544473, ____firstperm_22)); }
	inline RuntimeObject* get__firstperm_22() const { return ____firstperm_22; }
	inline RuntimeObject** get_address_of__firstperm_22() { return &____firstperm_22; }
	inline void set__firstperm_22(RuntimeObject* value)
	{
		____firstperm_22 = value;
		Il2CppCodeGenWriteBarrier((&____firstperm_22), value);
	}

	inline static int32_t get_offset_of__method_23() { return static_cast<int32_t>(offsetof(SecurityException_t975544473, ____method_23)); }
	inline MethodInfo_t * get__method_23() const { return ____method_23; }
	inline MethodInfo_t ** get_address_of__method_23() { return &____method_23; }
	inline void set__method_23(MethodInfo_t * value)
	{
		____method_23 = value;
		Il2CppCodeGenWriteBarrier((&____method_23), value);
	}

	inline static int32_t get_offset_of__evidence_24() { return static_cast<int32_t>(offsetof(SecurityException_t975544473, ____evidence_24)); }
	inline Evidence_t2008144148 * get__evidence_24() const { return ____evidence_24; }
	inline Evidence_t2008144148 ** get_address_of__evidence_24() { return &____evidence_24; }
	inline void set__evidence_24(Evidence_t2008144148 * value)
	{
		____evidence_24 = value;
		Il2CppCodeGenWriteBarrier((&____evidence_24), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYEXCEPTION_T975544473_H
#ifndef NORMALIZATIONFORM_T3110136658_H
#define NORMALIZATIONFORM_T3110136658_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.NormalizationForm
struct  NormalizationForm_t3110136658 
{
public:
	// System.Int32 System.Text.NormalizationForm::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NormalizationForm_t3110136658, ___value___2)); }
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
#endif // NORMALIZATIONFORM_T3110136658_H
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
#ifndef FILELOADEXCEPTION_T549148505_H
#define FILELOADEXCEPTION_T549148505_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileLoadException
struct  FileLoadException_t549148505  : public IOException_t4088381929
{
public:
	// System.String System.IO.FileLoadException::_fileName
	String_t* ____fileName_18;
	// System.String System.IO.FileLoadException::_fusionLog
	String_t* ____fusionLog_19;

public:
	inline static int32_t get_offset_of__fileName_18() { return static_cast<int32_t>(offsetof(FileLoadException_t549148505, ____fileName_18)); }
	inline String_t* get__fileName_18() const { return ____fileName_18; }
	inline String_t** get_address_of__fileName_18() { return &____fileName_18; }
	inline void set__fileName_18(String_t* value)
	{
		____fileName_18 = value;
		Il2CppCodeGenWriteBarrier((&____fileName_18), value);
	}

	inline static int32_t get_offset_of__fusionLog_19() { return static_cast<int32_t>(offsetof(FileLoadException_t549148505, ____fusionLog_19)); }
	inline String_t* get__fusionLog_19() const { return ____fusionLog_19; }
	inline String_t** get_address_of__fusionLog_19() { return &____fusionLog_19; }
	inline void set__fusionLog_19(String_t* value)
	{
		____fusionLog_19 = value;
		Il2CppCodeGenWriteBarrier((&____fusionLog_19), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILELOADEXCEPTION_T549148505_H
#ifndef FILESTREAM_T4292183065_H
#define FILESTREAM_T4292183065_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileStream
struct  FileStream_t4292183065  : public Stream_t1273022909
{
public:
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_t4116647657* ___buf_6;
	// System.String System.IO.FileStream::name
	String_t* ___name_7;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_t2755812594 * ___safeHandle_8;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_9;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_10;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_11;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_12;
	// System.Boolean System.IO.FileStream::async
	bool ___async_13;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_14;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_15;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_16;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_17;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_18;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_19;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_20;

public:
	inline static int32_t get_offset_of_buf_6() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_6)); }
	inline ByteU5BU5D_t4116647657* get_buf_6() const { return ___buf_6; }
	inline ByteU5BU5D_t4116647657** get_address_of_buf_6() { return &___buf_6; }
	inline void set_buf_6(ByteU5BU5D_t4116647657* value)
	{
		___buf_6 = value;
		Il2CppCodeGenWriteBarrier((&___buf_6), value);
	}

	inline static int32_t get_offset_of_name_7() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___name_7)); }
	inline String_t* get_name_7() const { return ___name_7; }
	inline String_t** get_address_of_name_7() { return &___name_7; }
	inline void set_name_7(String_t* value)
	{
		___name_7 = value;
		Il2CppCodeGenWriteBarrier((&___name_7), value);
	}

	inline static int32_t get_offset_of_safeHandle_8() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___safeHandle_8)); }
	inline SafeFileHandle_t2755812594 * get_safeHandle_8() const { return ___safeHandle_8; }
	inline SafeFileHandle_t2755812594 ** get_address_of_safeHandle_8() { return &___safeHandle_8; }
	inline void set_safeHandle_8(SafeFileHandle_t2755812594 * value)
	{
		___safeHandle_8 = value;
		Il2CppCodeGenWriteBarrier((&___safeHandle_8), value);
	}

	inline static int32_t get_offset_of_isExposed_9() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___isExposed_9)); }
	inline bool get_isExposed_9() const { return ___isExposed_9; }
	inline bool* get_address_of_isExposed_9() { return &___isExposed_9; }
	inline void set_isExposed_9(bool value)
	{
		___isExposed_9 = value;
	}

	inline static int32_t get_offset_of_append_startpos_10() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___append_startpos_10)); }
	inline int64_t get_append_startpos_10() const { return ___append_startpos_10; }
	inline int64_t* get_address_of_append_startpos_10() { return &___append_startpos_10; }
	inline void set_append_startpos_10(int64_t value)
	{
		___append_startpos_10 = value;
	}

	inline static int32_t get_offset_of_access_11() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___access_11)); }
	inline int32_t get_access_11() const { return ___access_11; }
	inline int32_t* get_address_of_access_11() { return &___access_11; }
	inline void set_access_11(int32_t value)
	{
		___access_11 = value;
	}

	inline static int32_t get_offset_of_owner_12() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___owner_12)); }
	inline bool get_owner_12() const { return ___owner_12; }
	inline bool* get_address_of_owner_12() { return &___owner_12; }
	inline void set_owner_12(bool value)
	{
		___owner_12 = value;
	}

	inline static int32_t get_offset_of_async_13() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___async_13)); }
	inline bool get_async_13() const { return ___async_13; }
	inline bool* get_address_of_async_13() { return &___async_13; }
	inline void set_async_13(bool value)
	{
		___async_13 = value;
	}

	inline static int32_t get_offset_of_canseek_14() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___canseek_14)); }
	inline bool get_canseek_14() const { return ___canseek_14; }
	inline bool* get_address_of_canseek_14() { return &___canseek_14; }
	inline void set_canseek_14(bool value)
	{
		___canseek_14 = value;
	}

	inline static int32_t get_offset_of_anonymous_15() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___anonymous_15)); }
	inline bool get_anonymous_15() const { return ___anonymous_15; }
	inline bool* get_address_of_anonymous_15() { return &___anonymous_15; }
	inline void set_anonymous_15(bool value)
	{
		___anonymous_15 = value;
	}

	inline static int32_t get_offset_of_buf_dirty_16() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_dirty_16)); }
	inline bool get_buf_dirty_16() const { return ___buf_dirty_16; }
	inline bool* get_address_of_buf_dirty_16() { return &___buf_dirty_16; }
	inline void set_buf_dirty_16(bool value)
	{
		___buf_dirty_16 = value;
	}

	inline static int32_t get_offset_of_buf_size_17() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_size_17)); }
	inline int32_t get_buf_size_17() const { return ___buf_size_17; }
	inline int32_t* get_address_of_buf_size_17() { return &___buf_size_17; }
	inline void set_buf_size_17(int32_t value)
	{
		___buf_size_17 = value;
	}

	inline static int32_t get_offset_of_buf_length_18() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_length_18)); }
	inline int32_t get_buf_length_18() const { return ___buf_length_18; }
	inline int32_t* get_address_of_buf_length_18() { return &___buf_length_18; }
	inline void set_buf_length_18(int32_t value)
	{
		___buf_length_18 = value;
	}

	inline static int32_t get_offset_of_buf_offset_19() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_offset_19)); }
	inline int32_t get_buf_offset_19() const { return ___buf_offset_19; }
	inline int32_t* get_address_of_buf_offset_19() { return &___buf_offset_19; }
	inline void set_buf_offset_19(int32_t value)
	{
		___buf_offset_19 = value;
	}

	inline static int32_t get_offset_of_buf_start_20() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_start_20)); }
	inline int64_t get_buf_start_20() const { return ___buf_start_20; }
	inline int64_t* get_address_of_buf_start_20() { return &___buf_start_20; }
	inline void set_buf_start_20(int64_t value)
	{
		___buf_start_20 = value;
	}
};

struct FileStream_t4292183065_StaticFields
{
public:
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_t4116647657* ___buf_recycle_4;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject * ___buf_recycle_lock_5;

public:
	inline static int32_t get_offset_of_buf_recycle_4() { return static_cast<int32_t>(offsetof(FileStream_t4292183065_StaticFields, ___buf_recycle_4)); }
	inline ByteU5BU5D_t4116647657* get_buf_recycle_4() const { return ___buf_recycle_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_buf_recycle_4() { return &___buf_recycle_4; }
	inline void set_buf_recycle_4(ByteU5BU5D_t4116647657* value)
	{
		___buf_recycle_4 = value;
		Il2CppCodeGenWriteBarrier((&___buf_recycle_4), value);
	}

	inline static int32_t get_offset_of_buf_recycle_lock_5() { return static_cast<int32_t>(offsetof(FileStream_t4292183065_StaticFields, ___buf_recycle_lock_5)); }
	inline RuntimeObject * get_buf_recycle_lock_5() const { return ___buf_recycle_lock_5; }
	inline RuntimeObject ** get_address_of_buf_recycle_lock_5() { return &___buf_recycle_lock_5; }
	inline void set_buf_recycle_lock_5(RuntimeObject * value)
	{
		___buf_recycle_lock_5 = value;
		Il2CppCodeGenWriteBarrier((&___buf_recycle_lock_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILESTREAM_T4292183065_H
#ifndef MISSINGMEMBEREXCEPTION_T1385081665_H
#define MISSINGMEMBEREXCEPTION_T1385081665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MissingMemberException
struct  MissingMemberException_t1385081665  : public MemberAccessException_t1734467078
{
public:
	// System.String System.MissingMemberException::ClassName
	String_t* ___ClassName_17;
	// System.String System.MissingMemberException::MemberName
	String_t* ___MemberName_18;
	// System.Byte[] System.MissingMemberException::Signature
	ByteU5BU5D_t4116647657* ___Signature_19;

public:
	inline static int32_t get_offset_of_ClassName_17() { return static_cast<int32_t>(offsetof(MissingMemberException_t1385081665, ___ClassName_17)); }
	inline String_t* get_ClassName_17() const { return ___ClassName_17; }
	inline String_t** get_address_of_ClassName_17() { return &___ClassName_17; }
	inline void set_ClassName_17(String_t* value)
	{
		___ClassName_17 = value;
		Il2CppCodeGenWriteBarrier((&___ClassName_17), value);
	}

	inline static int32_t get_offset_of_MemberName_18() { return static_cast<int32_t>(offsetof(MissingMemberException_t1385081665, ___MemberName_18)); }
	inline String_t* get_MemberName_18() const { return ___MemberName_18; }
	inline String_t** get_address_of_MemberName_18() { return &___MemberName_18; }
	inline void set_MemberName_18(String_t* value)
	{
		___MemberName_18 = value;
		Il2CppCodeGenWriteBarrier((&___MemberName_18), value);
	}

	inline static int32_t get_offset_of_Signature_19() { return static_cast<int32_t>(offsetof(MissingMemberException_t1385081665, ___Signature_19)); }
	inline ByteU5BU5D_t4116647657* get_Signature_19() const { return ___Signature_19; }
	inline ByteU5BU5D_t4116647657** get_address_of_Signature_19() { return &___Signature_19; }
	inline void set_Signature_19(ByteU5BU5D_t4116647657* value)
	{
		___Signature_19 = value;
		Il2CppCodeGenWriteBarrier((&___Signature_19), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSINGMEMBEREXCEPTION_T1385081665_H
#ifndef ASSEMBLYNAME_T270931938_H
#define ASSEMBLYNAME_T270931938_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyName
struct  AssemblyName_t270931938  : public RuntimeObject
{
public:
	// System.String System.Reflection.AssemblyName::name
	String_t* ___name_0;
	// System.String System.Reflection.AssemblyName::codebase
	String_t* ___codebase_1;
	// System.Int32 System.Reflection.AssemblyName::major
	int32_t ___major_2;
	// System.Int32 System.Reflection.AssemblyName::minor
	int32_t ___minor_3;
	// System.Int32 System.Reflection.AssemblyName::build
	int32_t ___build_4;
	// System.Int32 System.Reflection.AssemblyName::revision
	int32_t ___revision_5;
	// System.Globalization.CultureInfo System.Reflection.AssemblyName::cultureinfo
	CultureInfo_t4157843068 * ___cultureinfo_6;
	// System.Reflection.AssemblyNameFlags System.Reflection.AssemblyName::flags
	int32_t ___flags_7;
	// System.Configuration.Assemblies.AssemblyHashAlgorithm System.Reflection.AssemblyName::hashalg
	int32_t ___hashalg_8;
	// System.Reflection.StrongNameKeyPair System.Reflection.AssemblyName::keypair
	StrongNameKeyPair_t3411219591 * ___keypair_9;
	// System.Byte[] System.Reflection.AssemblyName::publicKey
	ByteU5BU5D_t4116647657* ___publicKey_10;
	// System.Byte[] System.Reflection.AssemblyName::keyToken
	ByteU5BU5D_t4116647657* ___keyToken_11;
	// System.Configuration.Assemblies.AssemblyVersionCompatibility System.Reflection.AssemblyName::versioncompat
	int32_t ___versioncompat_12;
	// System.Version System.Reflection.AssemblyName::version
	Version_t3456873960 * ___version_13;
	// System.Reflection.ProcessorArchitecture System.Reflection.AssemblyName::processor_architecture
	int32_t ___processor_architecture_14;
	// System.Reflection.AssemblyContentType System.Reflection.AssemblyName::contentType
	int32_t ___contentType_15;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_codebase_1() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___codebase_1)); }
	inline String_t* get_codebase_1() const { return ___codebase_1; }
	inline String_t** get_address_of_codebase_1() { return &___codebase_1; }
	inline void set_codebase_1(String_t* value)
	{
		___codebase_1 = value;
		Il2CppCodeGenWriteBarrier((&___codebase_1), value);
	}

	inline static int32_t get_offset_of_major_2() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___major_2)); }
	inline int32_t get_major_2() const { return ___major_2; }
	inline int32_t* get_address_of_major_2() { return &___major_2; }
	inline void set_major_2(int32_t value)
	{
		___major_2 = value;
	}

	inline static int32_t get_offset_of_minor_3() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___minor_3)); }
	inline int32_t get_minor_3() const { return ___minor_3; }
	inline int32_t* get_address_of_minor_3() { return &___minor_3; }
	inline void set_minor_3(int32_t value)
	{
		___minor_3 = value;
	}

	inline static int32_t get_offset_of_build_4() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___build_4)); }
	inline int32_t get_build_4() const { return ___build_4; }
	inline int32_t* get_address_of_build_4() { return &___build_4; }
	inline void set_build_4(int32_t value)
	{
		___build_4 = value;
	}

	inline static int32_t get_offset_of_revision_5() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___revision_5)); }
	inline int32_t get_revision_5() const { return ___revision_5; }
	inline int32_t* get_address_of_revision_5() { return &___revision_5; }
	inline void set_revision_5(int32_t value)
	{
		___revision_5 = value;
	}

	inline static int32_t get_offset_of_cultureinfo_6() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___cultureinfo_6)); }
	inline CultureInfo_t4157843068 * get_cultureinfo_6() const { return ___cultureinfo_6; }
	inline CultureInfo_t4157843068 ** get_address_of_cultureinfo_6() { return &___cultureinfo_6; }
	inline void set_cultureinfo_6(CultureInfo_t4157843068 * value)
	{
		___cultureinfo_6 = value;
		Il2CppCodeGenWriteBarrier((&___cultureinfo_6), value);
	}

	inline static int32_t get_offset_of_flags_7() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___flags_7)); }
	inline int32_t get_flags_7() const { return ___flags_7; }
	inline int32_t* get_address_of_flags_7() { return &___flags_7; }
	inline void set_flags_7(int32_t value)
	{
		___flags_7 = value;
	}

	inline static int32_t get_offset_of_hashalg_8() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___hashalg_8)); }
	inline int32_t get_hashalg_8() const { return ___hashalg_8; }
	inline int32_t* get_address_of_hashalg_8() { return &___hashalg_8; }
	inline void set_hashalg_8(int32_t value)
	{
		___hashalg_8 = value;
	}

	inline static int32_t get_offset_of_keypair_9() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___keypair_9)); }
	inline StrongNameKeyPair_t3411219591 * get_keypair_9() const { return ___keypair_9; }
	inline StrongNameKeyPair_t3411219591 ** get_address_of_keypair_9() { return &___keypair_9; }
	inline void set_keypair_9(StrongNameKeyPair_t3411219591 * value)
	{
		___keypair_9 = value;
		Il2CppCodeGenWriteBarrier((&___keypair_9), value);
	}

	inline static int32_t get_offset_of_publicKey_10() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___publicKey_10)); }
	inline ByteU5BU5D_t4116647657* get_publicKey_10() const { return ___publicKey_10; }
	inline ByteU5BU5D_t4116647657** get_address_of_publicKey_10() { return &___publicKey_10; }
	inline void set_publicKey_10(ByteU5BU5D_t4116647657* value)
	{
		___publicKey_10 = value;
		Il2CppCodeGenWriteBarrier((&___publicKey_10), value);
	}

	inline static int32_t get_offset_of_keyToken_11() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___keyToken_11)); }
	inline ByteU5BU5D_t4116647657* get_keyToken_11() const { return ___keyToken_11; }
	inline ByteU5BU5D_t4116647657** get_address_of_keyToken_11() { return &___keyToken_11; }
	inline void set_keyToken_11(ByteU5BU5D_t4116647657* value)
	{
		___keyToken_11 = value;
		Il2CppCodeGenWriteBarrier((&___keyToken_11), value);
	}

	inline static int32_t get_offset_of_versioncompat_12() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___versioncompat_12)); }
	inline int32_t get_versioncompat_12() const { return ___versioncompat_12; }
	inline int32_t* get_address_of_versioncompat_12() { return &___versioncompat_12; }
	inline void set_versioncompat_12(int32_t value)
	{
		___versioncompat_12 = value;
	}

	inline static int32_t get_offset_of_version_13() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___version_13)); }
	inline Version_t3456873960 * get_version_13() const { return ___version_13; }
	inline Version_t3456873960 ** get_address_of_version_13() { return &___version_13; }
	inline void set_version_13(Version_t3456873960 * value)
	{
		___version_13 = value;
		Il2CppCodeGenWriteBarrier((&___version_13), value);
	}

	inline static int32_t get_offset_of_processor_architecture_14() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___processor_architecture_14)); }
	inline int32_t get_processor_architecture_14() const { return ___processor_architecture_14; }
	inline int32_t* get_address_of_processor_architecture_14() { return &___processor_architecture_14; }
	inline void set_processor_architecture_14(int32_t value)
	{
		___processor_architecture_14 = value;
	}

	inline static int32_t get_offset_of_contentType_15() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___contentType_15)); }
	inline int32_t get_contentType_15() const { return ___contentType_15; }
	inline int32_t* get_address_of_contentType_15() { return &___contentType_15; }
	inline void set_contentType_15(int32_t value)
	{
		___contentType_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.AssemblyName
struct AssemblyName_t270931938_marshaled_pinvoke
{
	char* ___name_0;
	char* ___codebase_1;
	int32_t ___major_2;
	int32_t ___minor_3;
	int32_t ___build_4;
	int32_t ___revision_5;
	CultureInfo_t4157843068_marshaled_pinvoke* ___cultureinfo_6;
	int32_t ___flags_7;
	int32_t ___hashalg_8;
	StrongNameKeyPair_t3411219591 * ___keypair_9;
	uint8_t* ___publicKey_10;
	uint8_t* ___keyToken_11;
	int32_t ___versioncompat_12;
	Version_t3456873960 * ___version_13;
	int32_t ___processor_architecture_14;
	int32_t ___contentType_15;
};
// Native definition for COM marshalling of System.Reflection.AssemblyName
struct AssemblyName_t270931938_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___codebase_1;
	int32_t ___major_2;
	int32_t ___minor_3;
	int32_t ___build_4;
	int32_t ___revision_5;
	CultureInfo_t4157843068_marshaled_com* ___cultureinfo_6;
	int32_t ___flags_7;
	int32_t ___hashalg_8;
	StrongNameKeyPair_t3411219591 * ___keypair_9;
	uint8_t* ___publicKey_10;
	uint8_t* ___keyToken_11;
	int32_t ___versioncompat_12;
	Version_t3456873960 * ___version_13;
	int32_t ___processor_architecture_14;
	int32_t ___contentType_15;
};
#endif // ASSEMBLYNAME_T270931938_H
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
#ifndef MISSINGMETHODEXCEPTION_T1274661534_H
#define MISSINGMETHODEXCEPTION_T1274661534_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MissingMethodException
struct  MissingMethodException_t1274661534  : public MissingMemberException_t1385081665
{
public:
	// System.String System.MissingMethodException::signature
	String_t* ___signature_20;

public:
	inline static int32_t get_offset_of_signature_20() { return static_cast<int32_t>(offsetof(MissingMethodException_t1274661534, ___signature_20)); }
	inline String_t* get_signature_20() const { return ___signature_20; }
	inline String_t** get_address_of_signature_20() { return &___signature_20; }
	inline void set_signature_20(String_t* value)
	{
		___signature_20 = value;
		Il2CppCodeGenWriteBarrier((&___signature_20), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSINGMETHODEXCEPTION_T1274661534_H
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


// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m1996088172_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject ** p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<!0>)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m3991240721_gshared (Dictionary_2_t132545152 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_m3105409630_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);

// System.Void I18N.Common.MonoEncoding::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void MonoEncoding__ctor_m422656136 (MonoEncoding_t666837952 * __this, int32_t ___codePage0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m1312628991 (ArgumentException_t132251570 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
extern "C" IL2CPP_METHOD_ATTR void Monitor_Enter_m984175629 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, bool* p1, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Monitor_Exit_m3585316909 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Text.DecoderReplacementFallback::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void DecoderReplacementFallback__ctor_m2470322217 (DecoderReplacementFallback_t1462101135 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Text.Encoding::set_DecoderFallback(System.Text.DecoderFallback)
extern "C" IL2CPP_METHOD_ATTR void Encoding_set_DecoderFallback_m148532738 (Encoding_t1523322056 * __this, DecoderFallback_t3123823036 * p0, const RuntimeMethod* method);
// System.String System.String::Normalize(System.Text.NormalizationForm)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Normalize_m1410854147 (String_t* __this, int32_t p0, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Inequality_m215368492 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m1170824041 (ArgumentNullException_t1615371798 * __this, String_t* p0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method);
// System.String I18N.Common.Strings::GetString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Strings_GetString_m904263021 (RuntimeObject * __this /* static, unused */, String_t* ___tag0, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m282481429 (ArgumentOutOfRangeException_t777629997 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char,System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_CreateString_m1262864254 (String_t* __this, Il2CppChar ___c0, int32_t ___count1, const RuntimeMethod* method);
// System.Int32 System.Runtime.CompilerServices.RuntimeHelpers::get_OffsetToStringData()
extern "C" IL2CPP_METHOD_ATTR int32_t RuntimeHelpers_get_OffsetToStringData_m2192601476 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void I18N.Common.MonoSafeEncoding::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void MonoSafeEncoding__ctor_m729349758 (MonoSafeEncoding_t4071300459 * __this, int32_t ___codePage0, const RuntimeMethod* method);
// System.Char[] System.String::ToCharArray()
extern "C" IL2CPP_METHOD_ATTR CharU5BU5D_t3528271667* String_ToCharArray_m1492846834 (String_t* __this, const RuntimeMethod* method);
// System.Void I18N.Common.Handlers::BuildHash()
extern "C" IL2CPP_METHOD_ATTR void Handlers_BuildHash_m1626728645 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m2620390247 (Dictionary_2_t1632706988 * __this, String_t* p0, String_t** p1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t1632706988 *, String_t*, String_t**, const RuntimeMethod*))Dictionary_2_TryGetValue_m1996088172_gshared)(__this, p0, p1, method);
}
// System.StringComparer System.StringComparer::get_OrdinalIgnoreCase()
extern "C" IL2CPP_METHOD_ATTR StringComparer_t3301955079 * StringComparer_get_OrdinalIgnoreCase_m2680809380 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor(System.Collections.Generic.IEqualityComparer`1<!0>)
inline void Dictionary_2__ctor_m944270596 (Dictionary_2_t1632706988 * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1632706988 *, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m3991240721_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(!0,!1)
inline void Dictionary_2_Add_m3045345476 (Dictionary_2_t1632706988 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1632706988 *, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_m3105409630_gshared)(__this, p0, p1, method);
}
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Collections.CaseInsensitiveHashCodeProvider System.Collections.CaseInsensitiveHashCodeProvider::get_Default()
extern "C" IL2CPP_METHOD_ATTR CaseInsensitiveHashCodeProvider_t1962629119 * CaseInsensitiveHashCodeProvider_get_Default_m3719687032 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Collections.CaseInsensitiveComparer System.Collections.CaseInsensitiveComparer::get_Default()
extern "C" IL2CPP_METHOD_ATTR CaseInsensitiveComparer_t3670035800 * CaseInsensitiveComparer_get_Default_m3138639762 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Collections.Hashtable::.ctor(System.Collections.IHashCodeProvider,System.Collections.IComparer)
extern "C" IL2CPP_METHOD_ATTR void Hashtable__ctor_m2302711321 (Hashtable_t1853889766 * __this, RuntimeObject* p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.Void System.Collections.Hashtable::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Hashtable__ctor_m1684344284 (Hashtable_t1853889766 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void I18N.Common.Manager::LoadClassList()
extern "C" IL2CPP_METHOD_ATTR void Manager_LoadClassList_m222677215 (Manager_t131579580 * __this, const RuntimeMethod* method);
// System.Void I18N.Common.Manager::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Manager__ctor_m2858193152 (Manager_t131579580 * __this, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
extern "C" IL2CPP_METHOD_ATTR CultureInfo_t4157843068 * CultureInfo_get_InvariantCulture_m3532445182 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String System.String::ToLower(System.Globalization.CultureInfo)
extern "C" IL2CPP_METHOD_ATTR String_t* String_ToLower_m3490221821 (String_t* __this, CultureInfo_t4157843068 * p0, const RuntimeMethod* method);
// System.String System.String::Replace(System.Char,System.Char)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Replace_m3726209165 (String_t* __this, Il2CppChar p0, Il2CppChar p1, const RuntimeMethod* method);
// System.String System.Int32::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Int32_ToString_m141394615 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Object I18N.Common.Manager::Instantiate(System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Manager_Instantiate_m1587040048 (Manager_t131579580 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.String I18N.Common.Manager::Normalize(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Manager_Normalize_m384807670 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method);
// System.String I18N.Common.Handlers::GetAlias(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Handlers_GetAlias_m865086395 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.Char)
extern "C" IL2CPP_METHOD_ATTR int32_t String_IndexOf_m363431711 (String_t* __this, Il2CppChar p0, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
extern "C" IL2CPP_METHOD_ATTR void StringBuilder__ctor_m3121283359 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m2986988803 (String_t* __this, int32_t p0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m2383614642 (StringBuilder_t * __this, Il2CppChar p0, const RuntimeMethod* method);
// System.Boolean System.Reflection.Assembly::op_Equality(System.Reflection.Assembly,System.Reflection.Assembly)
extern "C" IL2CPP_METHOD_ATTR bool Assembly_op_Equality_m3828289814 (RuntimeObject * __this /* static, unused */, Assembly_t * p0, Assembly_t * p1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyName::set_Name(System.String)
extern "C" IL2CPP_METHOD_ATTR void AssemblyName_set_Name_m1981626655 (AssemblyName_t270931938 * __this, String_t* p0, const RuntimeMethod* method);
// System.Reflection.Assembly System.Reflection.Assembly::Load(System.Reflection.AssemblyName)
extern "C" IL2CPP_METHOD_ATTR Assembly_t * Assembly_Load_m2586943103 (RuntimeObject * __this /* static, unused */, AssemblyName_t270931938 * p0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
extern "C" IL2CPP_METHOD_ATTR bool Type_op_Equality_m2683486427 (RuntimeObject * __this /* static, unused */, Type_t * p0, Type_t * p1, const RuntimeMethod* method);
// System.Object System.Activator::CreateInstance(System.Type)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Activator_CreateInstance_m3631483688 (RuntimeObject * __this /* static, unused */, Type_t * p0, const RuntimeMethod* method);
// System.Void I18N.Common.Manager::LoadInternalClasses()
extern "C" IL2CPP_METHOD_ATTR void Manager_LoadInternalClasses_m2546757475 (Manager_t131579580 * __this, const RuntimeMethod* method);
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream)
extern "C" IL2CPP_METHOD_ATTR void StreamReader__ctor_m1047876681 (StreamReader_t4009935899 * __this, Stream_t1273022909 * p0, const RuntimeMethod* method);
// System.Int32 System.String::LastIndexOf(System.Char)
extern "C" IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m3451222878 (String_t* __this, Il2CppChar p0, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Substring_m2848979100 (String_t* __this, int32_t p0, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Substring_m1610150815 (String_t* __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Void System.Text.Encoder::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Encoder__ctor_m36314963 (Encoder_t2198218980 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m1216717135 (ArgumentException_t132251570 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Text.EncoderFallbackBuffer System.Text.Encoder::get_FallbackBuffer()
extern "C" IL2CPP_METHOD_ATTR EncoderFallbackBuffer_t3523102303 * Encoder_get_FallbackBuffer_m1329536258 (Encoder_t2198218980 * __this, const RuntimeMethod* method);
// System.Void I18N.Common.MonoEncoding::HandleFallback(System.Text.EncoderFallbackBuffer&,System.Char*,System.Int32&,System.Int32&,System.Byte*,System.Int32&,System.Int32&,System.Object)
extern "C" IL2CPP_METHOD_ATTR void MonoEncoding_HandleFallback_m1353878205 (MonoEncoding_t666837952 * __this, EncoderFallbackBuffer_t3523102303 ** ___buffer0, Il2CppChar* ___chars1, int32_t* ___charIndex2, int32_t* ___charCount3, uint8_t* ___bytes4, int32_t* ___byteIndex5, int32_t* ___byteCount6, RuntimeObject * ___state7, const RuntimeMethod* method);
// System.Void I18N.Common.MonoEncoding::.ctor(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void MonoEncoding__ctor_m2996623478 (MonoEncoding_t666837952 * __this, int32_t ___codePage0, int32_t ___windowsCodePage1, const RuntimeMethod* method);
// System.Void System.Text.Encoding::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Encoding__ctor_m777655508 (Encoding_t1523322056 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Text.Encoding::get_WindowsCodePage()
extern "C" IL2CPP_METHOD_ATTR int32_t Encoding_get_WindowsCodePage_m2198574355 (Encoding_t1523322056 * __this, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m3095902440 (NotImplementedException_t3489357830 * __this, String_t* p0, const RuntimeMethod* method);
// System.Text.EncoderFallback System.Text.Encoding::get_EncoderFallback()
extern "C" IL2CPP_METHOD_ATTR EncoderFallback_t1188251036 * Encoding_get_EncoderFallback_m4088593971 (Encoding_t1523322056 * __this, const RuntimeMethod* method);
// System.Boolean System.Char::IsSurrogate(System.Char)
extern "C" IL2CPP_METHOD_ATTR bool Char_IsSurrogate_m3686972571 (RuntimeObject * __this /* static, unused */, Il2CppChar p0, const RuntimeMethod* method);
// System.Void I18N.Common.MonoEncodingDefaultEncoder::.ctor(System.Text.Encoding)
extern "C" IL2CPP_METHOD_ATTR void MonoEncodingDefaultEncoder__ctor_m3405161194 (MonoEncodingDefaultEncoder_t3189165900 * __this, Encoding_t1523322056 * ___encoding0, const RuntimeMethod* method);
// System.Void I18N.Common.ReferenceSourceDefaultEncoder::.ctor(System.Text.Encoding)
extern "C" IL2CPP_METHOD_ATTR void ReferenceSourceDefaultEncoder__ctor_m1134574118 (ReferenceSourceDefaultEncoder_t2102071145 * __this, Encoding_t1523322056 * ___encoding0, const RuntimeMethod* method);
// System.Void I18N.Common.MonoEncodingDefaultEncoder::CheckArguments(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void MonoEncodingDefaultEncoder_CheckArguments_m3784884798 (MonoEncodingDefaultEncoder_t3189165900 * __this, Il2CppChar* ___chars0, int32_t ___charCount1, uint8_t* ___bytes2, int32_t ___byteCount3, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m3628145864 (ArgumentOutOfRangeException_t777629997 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void I18N.Common.MonoSafeEncoding::HandleFallback(System.Text.EncoderFallbackBuffer&,System.Char[],System.Int32&,System.Int32&,System.Byte[],System.Int32&,System.Int32&,System.Object)
extern "C" IL2CPP_METHOD_ATTR void MonoSafeEncoding_HandleFallback_m3188140471 (MonoSafeEncoding_t4071300459 * __this, EncoderFallbackBuffer_t3523102303 ** ___buffer0, CharU5BU5D_t3528271667* ___chars1, int32_t* ___charIndex2, int32_t* ___charCount3, ByteU5BU5D_t4116647657* ___bytes4, int32_t* ___byteIndex5, int32_t* ___byteCount6, RuntimeObject * ___state7, const RuntimeMethod* method);
// System.Void I18N.Common.MonoSafeEncoding::.ctor(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void MonoSafeEncoding__ctor_m2010457750 (MonoSafeEncoding_t4071300459 * __this, int32_t ___codePage0, int32_t ___windowsCodePage1, const RuntimeMethod* method);
// System.Object System.Runtime.Serialization.SerializationInfo::GetValue(System.String,System.Type)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * SerializationInfo_GetValue_m42271953 (SerializationInfo_t950877179 * __this, String_t* p0, Type_t * p1, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m2844511972 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method);
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
// System.Void I18N.Common.ByteEncoding::.ctor(System.Int32,System.Char[],System.String,System.String,System.String,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ByteEncoding__ctor_m2650597204 (ByteEncoding_t1371924561 * __this, int32_t ___codePage0, CharU5BU5D_t3528271667* ___toChars1, String_t* ___encodingName2, String_t* ___bodyName3, String_t* ___headerName4, String_t* ___webName5, bool ___isBrowserDisplay6, bool ___isBrowserSave7, bool ___isMailNewsDisplay8, bool ___isMailNewsSave9, int32_t ___windowsCodePage10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ByteEncoding__ctor_m2650597204_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___codePage0;
		MonoEncoding__ctor_m422656136(__this, L_0, /*hidden argument*/NULL);
		CharU5BU5D_t3528271667* L_1 = ___toChars1;
		NullCheck(L_1);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length))))) == ((int32_t)((int32_t)256))))
		{
			goto IL_001c;
		}
	}
	{
		ArgumentException_t132251570 * L_2 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_2, _stringLiteral1795997045, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, ByteEncoding__ctor_m2650597204_RuntimeMethod_var);
	}

IL_001c:
	{
		CharU5BU5D_t3528271667* L_3 = ___toChars1;
		__this->set_toChars_17(L_3);
		String_t* L_4 = ___encodingName2;
		__this->set_encodingName_18(L_4);
		String_t* L_5 = ___bodyName3;
		__this->set_bodyName_19(L_5);
		String_t* L_6 = ___headerName4;
		__this->set_headerName_20(L_6);
		String_t* L_7 = ___webName5;
		__this->set_webName_21(L_7);
		bool L_8 = ___isBrowserDisplay6;
		__this->set_isBrowserDisplay_22(L_8);
		bool L_9 = ___isBrowserSave7;
		__this->set_isBrowserSave_23(L_9);
		bool L_10 = ___isMailNewsDisplay8;
		__this->set_isMailNewsDisplay_24(L_10);
		bool L_11 = ___isMailNewsSave9;
		__this->set_isMailNewsSave_25(L_11);
		int32_t L_12 = ___windowsCodePage10;
		__this->set_windowsCodePage_26(L_12);
		return;
	}
}
// System.Boolean I18N.Common.ByteEncoding::IsAlwaysNormalized(System.Text.NormalizationForm)
extern "C" IL2CPP_METHOD_ATTR bool ByteEncoding_IsAlwaysNormalized_m1614884160 (ByteEncoding_t1371924561 * __this, int32_t ___form0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ByteEncoding_IsAlwaysNormalized_m1614884160_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = ___form0;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)0;
	}

IL_0006:
	{
		ByteU5BU5D_t4116647657* L_1 = ((ByteEncoding_t1371924561_StaticFields*)il2cpp_codegen_static_fields_for(ByteEncoding_t1371924561_il2cpp_TypeInfo_var))->get_isNormalized_27();
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_2 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)8192));
		((ByteEncoding_t1371924561_StaticFields*)il2cpp_codegen_static_fields_for(ByteEncoding_t1371924561_il2cpp_TypeInfo_var))->set_isNormalized_27(L_2);
	}

IL_001c:
	{
		ByteU5BU5D_t4116647657* L_3 = ((ByteEncoding_t1371924561_StaticFields*)il2cpp_codegen_static_fields_for(ByteEncoding_t1371924561_il2cpp_TypeInfo_var))->get_isNormalizedComputed_28();
		if (L_3)
		{
			goto IL_0032;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_4 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)8192));
		((ByteEncoding_t1371924561_StaticFields*)il2cpp_codegen_static_fields_for(ByteEncoding_t1371924561_il2cpp_TypeInfo_var))->set_isNormalizedComputed_28(L_4);
	}

IL_0032:
	{
		ByteU5BU5D_t4116647657* L_5 = ((ByteEncoding_t1371924561_StaticFields*)il2cpp_codegen_static_fields_for(ByteEncoding_t1371924561_il2cpp_TypeInfo_var))->get_normalization_bytes_29();
		if (L_5)
		{
			goto IL_007d;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_6 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		((ByteEncoding_t1371924561_StaticFields*)il2cpp_codegen_static_fields_for(ByteEncoding_t1371924561_il2cpp_TypeInfo_var))->set_normalization_bytes_29(L_6);
		ByteU5BU5D_t4116647657* L_7 = ((ByteEncoding_t1371924561_StaticFields*)il2cpp_codegen_static_fields_for(ByteEncoding_t1371924561_il2cpp_TypeInfo_var))->get_normalization_bytes_29();
		V_1 = L_7;
		V_2 = (bool)0;
	}

IL_0050:
	try
	{ // begin try (depth: 1)
		{
			ByteU5BU5D_t4116647657* L_8 = V_1;
			Monitor_Enter_m984175629(NULL /*static, unused*/, (RuntimeObject *)(RuntimeObject *)L_8, (bool*)(&V_2), /*hidden argument*/NULL);
			V_3 = 0;
			goto IL_0069;
		}

IL_005c:
		{
			ByteU5BU5D_t4116647657* L_9 = ((ByteEncoding_t1371924561_StaticFields*)il2cpp_codegen_static_fields_for(ByteEncoding_t1371924561_il2cpp_TypeInfo_var))->get_normalization_bytes_29();
			int32_t L_10 = V_3;
			int32_t L_11 = V_3;
			NullCheck(L_9);
			(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (uint8_t)(((int32_t)((uint8_t)L_11))));
			int32_t L_12 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
		}

IL_0069:
		{
			int32_t L_13 = V_3;
			if ((((int32_t)L_13) < ((int32_t)((int32_t)256))))
			{
				goto IL_005c;
			}
		}

IL_0071:
		{
			IL2CPP_LEAVE(0x7D, FINALLY_0073);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0073;
	}

FINALLY_0073:
	{ // begin finally (depth: 1)
		{
			bool L_14 = V_2;
			if (!L_14)
			{
				goto IL_007c;
			}
		}

IL_0076:
		{
			ByteU5BU5D_t4116647657* L_15 = V_1;
			Monitor_Exit_m3585316909(NULL /*static, unused*/, (RuntimeObject *)(RuntimeObject *)L_15, /*hidden argument*/NULL);
		}

IL_007c:
		{
			IL2CPP_END_FINALLY(115)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(115)
	{
		IL2CPP_JUMP_TBL(0x7D, IL_007d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_007d:
	{
		int32_t L_16 = VirtFuncInvoker0< int32_t >::Invoke(36 /* System.Int32 System.Text.Encoding::get_CodePage() */, __this);
		V_0 = (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_16%(int32_t)8))&(int32_t)((int32_t)31))))))));
		ByteU5BU5D_t4116647657* L_17 = ((ByteEncoding_t1371924561_StaticFields*)il2cpp_codegen_static_fields_for(ByteEncoding_t1371924561_il2cpp_TypeInfo_var))->get_isNormalizedComputed_28();
		int32_t L_18 = VirtFuncInvoker0< int32_t >::Invoke(36 /* System.Int32 System.Text.Encoding::get_CodePage() */, __this);
		NullCheck(L_17);
		int32_t L_19 = ((int32_t)((int32_t)L_18/(int32_t)8));
		uint8_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		uint8_t L_21 = V_0;
		if (((int32_t)((int32_t)L_20&(int32_t)L_21)))
		{
			goto IL_0101;
		}
	}
	{
		RuntimeObject * L_22 = VirtFuncInvoker0< RuntimeObject * >::Invoke(17 /* System.Object System.Text.Encoding::Clone() */, __this);
		Encoding_t1523322056 * L_23 = ((Encoding_t1523322056 *)IsInstClass((RuntimeObject*)L_22, Encoding_t1523322056_il2cpp_TypeInfo_var));
		DecoderReplacementFallback_t1462101135 * L_24 = (DecoderReplacementFallback_t1462101135 *)il2cpp_codegen_object_new(DecoderReplacementFallback_t1462101135_il2cpp_TypeInfo_var);
		DecoderReplacementFallback__ctor_m2470322217(L_24, _stringLiteral757602046, /*hidden argument*/NULL);
		NullCheck(L_23);
		Encoding_set_DecoderFallback_m148532738(L_23, L_24, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_25 = ((ByteEncoding_t1371924561_StaticFields*)il2cpp_codegen_static_fields_for(ByteEncoding_t1371924561_il2cpp_TypeInfo_var))->get_normalization_bytes_29();
		NullCheck(L_23);
		String_t* L_26 = VirtFuncInvoker1< String_t*, ByteU5BU5D_t4116647657* >::Invoke(42 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_23, L_25);
		String_t* L_27 = L_26;
		int32_t L_28 = ___form0;
		NullCheck(L_27);
		String_t* L_29 = String_Normalize_m1410854147(L_27, L_28, /*hidden argument*/NULL);
		bool L_30 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_27, L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_00e9;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_31 = ((ByteEncoding_t1371924561_StaticFields*)il2cpp_codegen_static_fields_for(ByteEncoding_t1371924561_il2cpp_TypeInfo_var))->get_isNormalized_27();
		int32_t L_32 = VirtFuncInvoker0< int32_t >::Invoke(36 /* System.Int32 System.Text.Encoding::get_CodePage() */, __this);
		NullCheck(L_31);
		uint8_t* L_33 = ((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_32/(int32_t)8)))));
		uint8_t L_34 = V_0;
		*((int8_t*)(L_33)) = (int8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)(*((uint8_t*)L_33))|(int32_t)L_34)))));
	}

IL_00e9:
	{
		ByteU5BU5D_t4116647657* L_35 = ((ByteEncoding_t1371924561_StaticFields*)il2cpp_codegen_static_fields_for(ByteEncoding_t1371924561_il2cpp_TypeInfo_var))->get_isNormalizedComputed_28();
		int32_t L_36 = VirtFuncInvoker0< int32_t >::Invoke(36 /* System.Int32 System.Text.Encoding::get_CodePage() */, __this);
		NullCheck(L_35);
		uint8_t* L_37 = ((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_36/(int32_t)8)))));
		uint8_t L_38 = V_0;
		*((int8_t*)(L_37)) = (int8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)(*((uint8_t*)L_37))|(int32_t)L_38)))));
	}

IL_0101:
	{
		ByteU5BU5D_t4116647657* L_39 = ((ByteEncoding_t1371924561_StaticFields*)il2cpp_codegen_static_fields_for(ByteEncoding_t1371924561_il2cpp_TypeInfo_var))->get_isNormalized_27();
		int32_t L_40 = VirtFuncInvoker0< int32_t >::Invoke(36 /* System.Int32 System.Text.Encoding::get_CodePage() */, __this);
		NullCheck(L_39);
		int32_t L_41 = ((int32_t)((int32_t)L_40/(int32_t)8));
		uint8_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		uint8_t L_43 = V_0;
		return (bool)((((int32_t)((int32_t)((int32_t)L_42&(int32_t)L_43))) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean I18N.Common.ByteEncoding::get_IsSingleByte()
extern "C" IL2CPP_METHOD_ATTR bool ByteEncoding_get_IsSingleByte_m1194288452 (ByteEncoding_t1371924561 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Int32 I18N.Common.ByteEncoding::GetByteCount(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t ByteEncoding_GetByteCount_m931670777 (ByteEncoding_t1371924561 * __this, String_t* ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ByteEncoding_GetByteCount_m931670777_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___s0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3452614605, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, ByteEncoding_GetByteCount_m931670777_RuntimeMethod_var);
	}

IL_000e:
	{
		String_t* L_2 = ___s0;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m3847582255(L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 I18N.Common.ByteEncoding::GetByteCountImpl(System.Char*,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t ByteEncoding_GetByteCountImpl_m969241280 (ByteEncoding_t1371924561 * __this, Il2CppChar* ___chars0, int32_t ___count1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___count1;
		return L_0;
	}
}
// System.Void I18N.Common.ByteEncoding::ToBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ByteEncoding_ToBytes_m2318108546 (ByteEncoding_t1371924561 * __this, CharU5BU5D_t3528271667* ___chars0, int32_t ___charIndex1, int32_t ___charCount2, ByteU5BU5D_t4116647657* ___bytes3, int32_t ___byteIndex4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ByteEncoding_ToBytes_m2318108546_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	CharU5BU5D_t3528271667* V_1 = NULL;
	uint8_t* V_2 = NULL;
	ByteU5BU5D_t4116647657* V_3 = NULL;
	{
		int32_t L_0 = ___charCount2;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_1 = ___bytes3;
		NullCheck(L_1);
		int32_t L_2 = ___byteIndex4;
		if ((!(((uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length))))) == ((uint32_t)L_2))))
		{
			goto IL_000c;
		}
	}

IL_000b:
	{
		return;
	}

IL_000c:
	{
		int32_t L_3 = ___charIndex1;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_4 = ___charIndex1;
		CharU5BU5D_t3528271667* L_5 = ___chars0;
		NullCheck(L_5);
		if ((((int32_t)L_4) <= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_5)->max_length)))))))
		{
			goto IL_002b;
		}
	}

IL_0016:
	{
		String_t* L_6 = Strings_GetString_m904263021(NULL /*static, unused*/, _stringLiteral2941213349, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_7 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_7, _stringLiteral1070969872, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, ByteEncoding_ToBytes_m2318108546_RuntimeMethod_var);
	}

IL_002b:
	{
		int32_t L_8 = ___byteIndex4;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_9 = ___byteIndex4;
		ByteU5BU5D_t4116647657* L_10 = ___bytes3;
		NullCheck(L_10);
		if ((((int32_t)L_9) <= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))))))
		{
			goto IL_004d;
		}
	}

IL_0038:
	{
		String_t* L_11 = Strings_GetString_m904263021(NULL /*static, unused*/, _stringLiteral2941213349, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_12 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_12, _stringLiteral1758678393, L_11, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, NULL, ByteEncoding_ToBytes_m2318108546_RuntimeMethod_var);
	}

IL_004d:
	{
		int32_t L_13 = ___charCount2;
		if ((((int32_t)L_13) < ((int32_t)0)))
		{
			goto IL_0063;
		}
	}
	{
		int32_t L_14 = ___charIndex1;
		int32_t L_15 = ___charCount2;
		CharU5BU5D_t3528271667* L_16 = ___chars0;
		NullCheck(L_16);
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)L_15))) > ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_16)->max_length)))))))
		{
			goto IL_0063;
		}
	}
	{
		int32_t L_17 = ___byteIndex4;
		int32_t L_18 = ___charCount2;
		ByteU5BU5D_t4116647657* L_19 = ___bytes3;
		NullCheck(L_19);
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)L_18))) <= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_19)->max_length)))))))
		{
			goto IL_0078;
		}
	}

IL_0063:
	{
		String_t* L_20 = Strings_GetString_m904263021(NULL /*static, unused*/, _stringLiteral2941213349, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_21 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_21, _stringLiteral4160981599, L_20, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, NULL, ByteEncoding_ToBytes_m2318108546_RuntimeMethod_var);
	}

IL_0078:
	{
		CharU5BU5D_t3528271667* L_22 = ___chars0;
		CharU5BU5D_t3528271667* L_23 = L_22;
		V_1 = L_23;
		if (!L_23)
		{
			goto IL_0082;
		}
	}
	{
		CharU5BU5D_t3528271667* L_24 = V_1;
		NullCheck(L_24);
		if ((((int32_t)((int32_t)(((RuntimeArray *)L_24)->max_length)))))
		{
			goto IL_0087;
		}
	}

IL_0082:
	{
		V_0 = (Il2CppChar*)(((uintptr_t)0));
		goto IL_0090;
	}

IL_0087:
	{
		CharU5BU5D_t3528271667* L_25 = V_1;
		NullCheck(L_25);
		V_0 = (Il2CppChar*)(((uintptr_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))));
	}

IL_0090:
	{
		ByteU5BU5D_t4116647657* L_26 = ___bytes3;
		ByteU5BU5D_t4116647657* L_27 = L_26;
		V_3 = L_27;
		if (!L_27)
		{
			goto IL_009b;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_28 = V_3;
		NullCheck(L_28);
		if ((((int32_t)((int32_t)(((RuntimeArray *)L_28)->max_length)))))
		{
			goto IL_00a0;
		}
	}

IL_009b:
	{
		V_2 = (uint8_t*)(((uintptr_t)0));
		goto IL_00a9;
	}

IL_00a0:
	{
		ByteU5BU5D_t4116647657* L_29 = V_3;
		NullCheck(L_29);
		V_2 = (uint8_t*)(((uintptr_t)((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))));
	}

IL_00a9:
	{
		Il2CppChar* L_30 = V_0;
		int32_t L_31 = ___charIndex1;
		int32_t L_32 = ___charCount2;
		uint8_t* L_33 = V_2;
		int32_t L_34 = ___byteIndex4;
		ByteU5BU5D_t4116647657* L_35 = ___bytes3;
		NullCheck(L_35);
		int32_t L_36 = ___byteIndex4;
		VirtActionInvoker4< Il2CppChar*, int32_t, uint8_t*, int32_t >::Invoke(49 /* System.Void I18N.Common.ByteEncoding::ToBytes(System.Char*,System.Int32,System.Byte*,System.Int32) */, __this, (Il2CppChar*)(Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_30, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)L_31)), (int32_t)2)))), L_32, (uint8_t*)(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_33, (int32_t)L_34)), ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_35)->max_length)))), (int32_t)L_36)));
		V_3 = (ByteU5BU5D_t4116647657*)NULL;
		V_1 = (CharU5BU5D_t3528271667*)NULL;
		return;
	}
}
// System.Int32 I18N.Common.ByteEncoding::GetBytesImpl(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t ByteEncoding_GetBytesImpl_m3845703574 (ByteEncoding_t1371924561 * __this, Il2CppChar* ___chars0, int32_t ___charCount1, uint8_t* ___bytes2, int32_t ___byteCount3, const RuntimeMethod* method)
{
	{
		Il2CppChar* L_0 = ___chars0;
		int32_t L_1 = ___charCount1;
		uint8_t* L_2 = ___bytes2;
		int32_t L_3 = ___byteCount3;
		VirtActionInvoker4< Il2CppChar*, int32_t, uint8_t*, int32_t >::Invoke(49 /* System.Void I18N.Common.ByteEncoding::ToBytes(System.Char*,System.Int32,System.Byte*,System.Int32) */, __this, (Il2CppChar*)(Il2CppChar*)L_0, L_1, (uint8_t*)(uint8_t*)L_2, L_3);
		int32_t L_4 = ___charCount1;
		return L_4;
	}
}
// System.Int32 I18N.Common.ByteEncoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t ByteEncoding_GetCharCount_m3223611263 (ByteEncoding_t1371924561 * __this, ByteU5BU5D_t4116647657* ___bytes0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ByteEncoding_GetCharCount_m3223611263_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_t4116647657* L_0 = ___bytes0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral130595687, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, ByteEncoding_GetCharCount_m3223611263_RuntimeMethod_var);
	}

IL_000e:
	{
		int32_t L_2 = ___index1;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___index1;
		ByteU5BU5D_t4116647657* L_4 = ___bytes0;
		NullCheck(L_4);
		if ((((int32_t)L_3) <= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length)))))))
		{
			goto IL_002d;
		}
	}

IL_0018:
	{
		String_t* L_5 = Strings_GetString_m904263021(NULL /*static, unused*/, _stringLiteral2941213349, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_6 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_6, _stringLiteral797640427, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, ByteEncoding_GetCharCount_m3223611263_RuntimeMethod_var);
	}

IL_002d:
	{
		int32_t L_7 = ___count2;
		if ((((int32_t)L_7) < ((int32_t)0)))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_8 = ___count2;
		ByteU5BU5D_t4116647657* L_9 = ___bytes0;
		NullCheck(L_9);
		int32_t L_10 = ___index1;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))), (int32_t)L_10)))))
		{
			goto IL_004e;
		}
	}

IL_0039:
	{
		String_t* L_11 = Strings_GetString_m904263021(NULL /*static, unused*/, _stringLiteral2941213349, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_12 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_12, _stringLiteral2002595880, L_11, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, NULL, ByteEncoding_GetCharCount_m3223611263_RuntimeMethod_var);
	}

IL_004e:
	{
		int32_t L_13 = ___count2;
		return L_13;
	}
}
// System.Int32 I18N.Common.ByteEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t ByteEncoding_GetChars_m2008098161 (ByteEncoding_t1371924561 * __this, ByteU5BU5D_t4116647657* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t3528271667* ___chars3, int32_t ___charIndex4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ByteEncoding_GetChars_m2008098161_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CharU5BU5D_t3528271667* V_1 = NULL;
	{
		ByteU5BU5D_t4116647657* L_0 = ___bytes0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral130595687, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, ByteEncoding_GetChars_m2008098161_RuntimeMethod_var);
	}

IL_000e:
	{
		CharU5BU5D_t3528271667* L_2 = ___chars3;
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_3 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_3, _stringLiteral2698618727, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, ByteEncoding_GetChars_m2008098161_RuntimeMethod_var);
	}

IL_001d:
	{
		int32_t L_4 = ___byteIndex1;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_5 = ___byteIndex1;
		ByteU5BU5D_t4116647657* L_6 = ___bytes0;
		NullCheck(L_6);
		if ((((int32_t)L_5) <= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_6)->max_length)))))))
		{
			goto IL_003c;
		}
	}

IL_0027:
	{
		String_t* L_7 = Strings_GetString_m904263021(NULL /*static, unused*/, _stringLiteral2941213349, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_8 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_8, _stringLiteral1758678393, L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, NULL, ByteEncoding_GetChars_m2008098161_RuntimeMethod_var);
	}

IL_003c:
	{
		int32_t L_9 = ___byteCount2;
		if ((((int32_t)L_9) < ((int32_t)0)))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_10 = ___byteCount2;
		ByteU5BU5D_t4116647657* L_11 = ___bytes0;
		NullCheck(L_11);
		int32_t L_12 = ___byteIndex1;
		if ((((int32_t)L_10) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length)))), (int32_t)L_12)))))
		{
			goto IL_005d;
		}
	}

IL_0048:
	{
		String_t* L_13 = Strings_GetString_m904263021(NULL /*static, unused*/, _stringLiteral2941213349, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_14 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_14, _stringLiteral669612446, L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, NULL, ByteEncoding_GetChars_m2008098161_RuntimeMethod_var);
	}

IL_005d:
	{
		int32_t L_15 = ___charIndex4;
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_006a;
		}
	}
	{
		int32_t L_16 = ___charIndex4;
		CharU5BU5D_t3528271667* L_17 = ___chars3;
		NullCheck(L_17);
		if ((((int32_t)L_16) <= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_17)->max_length)))))))
		{
			goto IL_007f;
		}
	}

IL_006a:
	{
		String_t* L_18 = Strings_GetString_m904263021(NULL /*static, unused*/, _stringLiteral2941213349, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_19 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_19, _stringLiteral1070969872, L_18, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, NULL, ByteEncoding_GetChars_m2008098161_RuntimeMethod_var);
	}

IL_007f:
	{
		CharU5BU5D_t3528271667* L_20 = ___chars3;
		NullCheck(L_20);
		int32_t L_21 = ___charIndex4;
		int32_t L_22 = ___byteCount2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_20)->max_length)))), (int32_t)L_21))) >= ((int32_t)L_22)))
		{
			goto IL_0099;
		}
	}
	{
		String_t* L_23 = Strings_GetString_m904263021(NULL /*static, unused*/, _stringLiteral3497238838, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_24 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_24, L_23, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, NULL, ByteEncoding_GetChars_m2008098161_RuntimeMethod_var);
	}

IL_0099:
	{
		int32_t L_25 = ___byteCount2;
		V_0 = L_25;
		CharU5BU5D_t3528271667* L_26 = __this->get_toChars_17();
		V_1 = L_26;
		goto IL_00b8;
	}

IL_00a4:
	{
		CharU5BU5D_t3528271667* L_27 = ___chars3;
		int32_t L_28 = ___charIndex4;
		int32_t L_29 = L_28;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
		CharU5BU5D_t3528271667* L_30 = V_1;
		ByteU5BU5D_t4116647657* L_31 = ___bytes0;
		int32_t L_32 = ___byteIndex1;
		int32_t L_33 = L_32;
		___byteIndex1 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
		NullCheck(L_31);
		int32_t L_34 = L_33;
		uint8_t L_35 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_30);
		uint8_t L_36 = L_35;
		uint16_t L_37 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (Il2CppChar)L_37);
	}

IL_00b8:
	{
		int32_t L_38 = V_0;
		int32_t L_39 = L_38;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)1));
		if ((((int32_t)L_39) > ((int32_t)0)))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_40 = ___byteCount2;
		return L_40;
	}
}
// System.Int32 I18N.Common.ByteEncoding::GetMaxByteCount(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t ByteEncoding_GetMaxByteCount_m1927338293 (ByteEncoding_t1371924561 * __this, int32_t ___charCount0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ByteEncoding_GetMaxByteCount_m1927338293_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___charCount0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Strings_GetString_m904263021(NULL /*static, unused*/, _stringLiteral3526274078, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_2, _stringLiteral4160981599, L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, ByteEncoding_GetMaxByteCount_m1927338293_RuntimeMethod_var);
	}

IL_0019:
	{
		int32_t L_3 = ___charCount0;
		return L_3;
	}
}
// System.Int32 I18N.Common.ByteEncoding::GetMaxCharCount(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t ByteEncoding_GetMaxCharCount_m1339482954 (ByteEncoding_t1371924561 * __this, int32_t ___byteCount0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ByteEncoding_GetMaxCharCount_m1339482954_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___byteCount0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Strings_GetString_m904263021(NULL /*static, unused*/, _stringLiteral3526274078, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_2, _stringLiteral669612446, L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, ByteEncoding_GetMaxCharCount_m1339482954_RuntimeMethod_var);
	}

IL_0019:
	{
		int32_t L_3 = ___byteCount0;
		return L_3;
	}
}
// System.String I18N.Common.ByteEncoding::GetString(System.Byte[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* ByteEncoding_GetString_m2305116373 (ByteEncoding_t1371924561 * __this, ByteU5BU5D_t4116647657* ___bytes0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ByteEncoding_GetString_m2305116373_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	ByteU5BU5D_t4116647657* V_2 = NULL;
	Il2CppChar* V_3 = NULL;
	String_t* V_4 = NULL;
	Il2CppChar* V_5 = NULL;
	CharU5BU5D_t3528271667* V_6 = NULL;
	uint8_t* V_7 = NULL;
	Il2CppChar* V_8 = NULL;
	{
		ByteU5BU5D_t4116647657* L_0 = ___bytes0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral130595687, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, ByteEncoding_GetString_m2305116373_RuntimeMethod_var);
	}

IL_000e:
	{
		int32_t L_2 = ___index1;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___index1;
		ByteU5BU5D_t4116647657* L_4 = ___bytes0;
		NullCheck(L_4);
		if ((((int32_t)L_3) <= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length)))))))
		{
			goto IL_002d;
		}
	}

IL_0018:
	{
		String_t* L_5 = Strings_GetString_m904263021(NULL /*static, unused*/, _stringLiteral2941213349, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_6 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_6, _stringLiteral797640427, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, ByteEncoding_GetString_m2305116373_RuntimeMethod_var);
	}

IL_002d:
	{
		int32_t L_7 = ___count2;
		if ((((int32_t)L_7) < ((int32_t)0)))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_8 = ___count2;
		ByteU5BU5D_t4116647657* L_9 = ___bytes0;
		NullCheck(L_9);
		int32_t L_10 = ___index1;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))), (int32_t)L_10)))))
		{
			goto IL_004e;
		}
	}

IL_0039:
	{
		String_t* L_11 = Strings_GetString_m904263021(NULL /*static, unused*/, _stringLiteral2941213349, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_12 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_12, _stringLiteral2002595880, L_11, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, NULL, ByteEncoding_GetString_m2305116373_RuntimeMethod_var);
	}

IL_004e:
	{
		int32_t L_13 = ___count2;
		if (L_13)
		{
			goto IL_0057;
		}
	}
	{
		String_t* L_14 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_14;
	}

IL_0057:
	{
		int32_t L_15 = ___count2;
		String_t* L_16 = String_CreateString_m1262864254(NULL, 0, L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		ByteU5BU5D_t4116647657* L_17 = ___bytes0;
		ByteU5BU5D_t4116647657* L_18 = L_17;
		V_2 = L_18;
		if (!L_18)
		{
			goto IL_0069;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_19 = V_2;
		NullCheck(L_19);
		if ((((int32_t)((int32_t)(((RuntimeArray *)L_19)->max_length)))))
		{
			goto IL_006e;
		}
	}

IL_0069:
	{
		V_1 = (uint8_t*)(((uintptr_t)0));
		goto IL_0077;
	}

IL_006e:
	{
		ByteU5BU5D_t4116647657* L_20 = V_2;
		NullCheck(L_20);
		V_1 = (uint8_t*)(((uintptr_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))));
	}

IL_0077:
	{
		String_t* L_21 = V_0;
		V_4 = L_21;
		String_t* L_22 = V_4;
		V_3 = (Il2CppChar*)(((uintptr_t)L_22));
		Il2CppChar* L_23 = V_3;
		if (!L_23)
		{
			goto IL_0089;
		}
	}
	{
		Il2CppChar* L_24 = V_3;
		int32_t L_25 = RuntimeHelpers_get_OffsetToStringData_m2192601476(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_24, (int32_t)L_25));
	}

IL_0089:
	{
		CharU5BU5D_t3528271667* L_26 = __this->get_toChars_17();
		CharU5BU5D_t3528271667* L_27 = L_26;
		V_6 = L_27;
		if (!L_27)
		{
			goto IL_009a;
		}
	}
	{
		CharU5BU5D_t3528271667* L_28 = V_6;
		NullCheck(L_28);
		if ((((int32_t)((int32_t)(((RuntimeArray *)L_28)->max_length)))))
		{
			goto IL_00a0;
		}
	}

IL_009a:
	{
		V_5 = (Il2CppChar*)(((uintptr_t)0));
		goto IL_00ab;
	}

IL_00a0:
	{
		CharU5BU5D_t3528271667* L_29 = V_6;
		NullCheck(L_29);
		V_5 = (Il2CppChar*)(((uintptr_t)((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))));
	}

IL_00ab:
	{
		uint8_t* L_30 = V_1;
		int32_t L_31 = ___index1;
		V_7 = (uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_30, (int32_t)L_31));
		Il2CppChar* L_32 = V_3;
		V_8 = (Il2CppChar*)L_32;
		goto IL_00cc;
	}

IL_00b5:
	{
		Il2CppChar* L_33 = V_8;
		Il2CppChar* L_34 = (Il2CppChar*)L_33;
		V_8 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_34, (int32_t)2));
		Il2CppChar* L_35 = V_5;
		uint8_t* L_36 = V_7;
		uint8_t* L_37 = (uint8_t*)L_36;
		V_7 = (uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_37, (int32_t)1));
		*((int16_t*)(L_34)) = (int16_t)(*((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_35, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)(*((uint8_t*)L_37)))), (int32_t)2))))));
	}

IL_00cc:
	{
		int32_t L_38 = ___count2;
		int32_t L_39 = L_38;
		___count2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)1));
		if (L_39)
		{
			goto IL_00b5;
		}
	}
	{
		V_6 = (CharU5BU5D_t3528271667*)NULL;
		V_4 = (String_t*)NULL;
		V_2 = (ByteU5BU5D_t4116647657*)NULL;
		String_t* L_40 = V_0;
		return L_40;
	}
}
// System.String I18N.Common.ByteEncoding::GetString(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR String_t* ByteEncoding_GetString_m1562392462 (ByteEncoding_t1371924561 * __this, ByteU5BU5D_t4116647657* ___bytes0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ByteEncoding_GetString_m1562392462_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_t4116647657* L_0 = ___bytes0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral130595687, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, ByteEncoding_GetString_m1562392462_RuntimeMethod_var);
	}

IL_000e:
	{
		ByteU5BU5D_t4116647657* L_2 = ___bytes0;
		ByteU5BU5D_t4116647657* L_3 = ___bytes0;
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker3< String_t*, ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(43 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, __this, L_2, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length)))));
		return L_4;
	}
}
// System.String I18N.Common.ByteEncoding::get_BodyName()
extern "C" IL2CPP_METHOD_ATTR String_t* ByteEncoding_get_BodyName_m4219760292 (ByteEncoding_t1371924561 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_bodyName_19();
		return L_0;
	}
}
// System.String I18N.Common.ByteEncoding::get_EncodingName()
extern "C" IL2CPP_METHOD_ATTR String_t* ByteEncoding_get_EncodingName_m1924564893 (ByteEncoding_t1371924561 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_encodingName_18();
		return L_0;
	}
}
// System.String I18N.Common.ByteEncoding::get_HeaderName()
extern "C" IL2CPP_METHOD_ATTR String_t* ByteEncoding_get_HeaderName_m1805377373 (ByteEncoding_t1371924561 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_headerName_20();
		return L_0;
	}
}
// System.Boolean I18N.Common.ByteEncoding::get_IsBrowserDisplay()
extern "C" IL2CPP_METHOD_ATTR bool ByteEncoding_get_IsBrowserDisplay_m644378544 (ByteEncoding_t1371924561 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isBrowserDisplay_22();
		return L_0;
	}
}
// System.Boolean I18N.Common.ByteEncoding::get_IsBrowserSave()
extern "C" IL2CPP_METHOD_ATTR bool ByteEncoding_get_IsBrowserSave_m1798971630 (ByteEncoding_t1371924561 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isBrowserSave_23();
		return L_0;
	}
}
// System.Boolean I18N.Common.ByteEncoding::get_IsMailNewsDisplay()
extern "C" IL2CPP_METHOD_ATTR bool ByteEncoding_get_IsMailNewsDisplay_m553436455 (ByteEncoding_t1371924561 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isMailNewsDisplay_24();
		return L_0;
	}
}
// System.Boolean I18N.Common.ByteEncoding::get_IsMailNewsSave()
extern "C" IL2CPP_METHOD_ATTR bool ByteEncoding_get_IsMailNewsSave_m228315954 (ByteEncoding_t1371924561 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isMailNewsSave_25();
		return L_0;
	}
}
// System.String I18N.Common.ByteEncoding::get_WebName()
extern "C" IL2CPP_METHOD_ATTR String_t* ByteEncoding_get_WebName_m3280042608 (ByteEncoding_t1371924561 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_webName_21();
		return L_0;
	}
}
// System.Int32 I18N.Common.ByteEncoding::get_WindowsCodePage()
extern "C" IL2CPP_METHOD_ATTR int32_t ByteEncoding_get_WindowsCodePage_m1317949486 (ByteEncoding_t1371924561 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_windowsCodePage_26();
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
// System.Void I18N.Common.ByteSafeEncoding::.ctor(System.Int32,System.Char[],System.String,System.String,System.String,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ByteSafeEncoding__ctor_m310667786 (ByteSafeEncoding_t1616231111 * __this, int32_t ___codePage0, CharU5BU5D_t3528271667* ___toChars1, String_t* ___encodingName2, String_t* ___bodyName3, String_t* ___headerName4, String_t* ___webName5, bool ___isBrowserDisplay6, bool ___isBrowserSave7, bool ___isMailNewsDisplay8, bool ___isMailNewsSave9, int32_t ___windowsCodePage10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ByteSafeEncoding__ctor_m310667786_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___codePage0;
		MonoSafeEncoding__ctor_m729349758(__this, L_0, /*hidden argument*/NULL);
		CharU5BU5D_t3528271667* L_1 = ___toChars1;
		NullCheck(L_1);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length))))) == ((int32_t)((int32_t)256))))
		{
			goto IL_001c;
		}
	}
	{
		ArgumentException_t132251570 * L_2 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_2, _stringLiteral1795997045, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, ByteSafeEncoding__ctor_m310667786_RuntimeMethod_var);
	}

IL_001c:
	{
		CharU5BU5D_t3528271667* L_3 = ___toChars1;
		__this->set_toChars_17(L_3);
		String_t* L_4 = ___encodingName2;
		__this->set_encodingName_18(L_4);
		String_t* L_5 = ___bodyName3;
		__this->set_bodyName_19(L_5);
		String_t* L_6 = ___headerName4;
		__this->set_headerName_20(L_6);
		String_t* L_7 = ___webName5;
		__this->set_webName_21(L_7);
		bool L_8 = ___isBrowserDisplay6;
		__this->set_isBrowserDisplay_22(L_8);
		bool L_9 = ___isBrowserSave7;
		__this->set_isBrowserSave_23(L_9);
		bool L_10 = ___isMailNewsDisplay8;
		__this->set_isMailNewsDisplay_24(L_10);
		bool L_11 = ___isMailNewsSave9;
		__this->set_isMailNewsSave_25(L_11);
		int32_t L_12 = ___windowsCodePage10;
		__this->set_windowsCodePage_26(L_12);
		return;
	}
}
// System.Boolean I18N.Common.ByteSafeEncoding::IsAlwaysNormalized(System.Text.NormalizationForm)
extern "C" IL2CPP_METHOD_ATTR bool ByteSafeEncoding_IsAlwaysNormalized_m751427991 (ByteSafeEncoding_t1616231111 * __this, int32_t ___form0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ByteSafeEncoding_IsAlwaysNormalized_m751427991_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = ___form0;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)0;
	}

IL_0006:
	{
		ByteU5BU5D_t4116647657* L_1 = ((ByteSafeEncoding_t1616231111_StaticFields*)il2cpp_codegen_static_fields_for(ByteSafeEncoding_t1616231111_il2cpp_TypeInfo_var))->get_isNormalized_27();
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_2 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)8192));
		((ByteSafeEncoding_t1616231111_StaticFields*)il2cpp_codegen_static_fields_for(ByteSafeEncoding_t1616231111_il2cpp_TypeInfo_var))->set_isNormalized_27(L_2);
	}

IL_001c:
	{
		ByteU5BU5D_t4116647657* L_3 = ((ByteSafeEncoding_t1616231111_StaticFields*)il2cpp_codegen_static_fields_for(ByteSafeEncoding_t1616231111_il2cpp_TypeInfo_var))->get_isNormalizedComputed_28();
		if (L_3)
		{
			goto IL_0032;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_4 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)8192));
		((ByteSafeEncoding_t1616231111_StaticFields*)il2cpp_codegen_static_fields_for(ByteSafeEncoding_t1616231111_il2cpp_TypeInfo_var))->set_isNormalizedComputed_28(L_4);
	}

IL_0032:
	{
		ByteU5BU5D_t4116647657* L_5 = ((ByteSafeEncoding_t1616231111_StaticFields*)il2cpp_codegen_static_fields_for(ByteSafeEncoding_t1616231111_il2cpp_TypeInfo_var))->get_normalization_bytes_29();
		if (L_5)
		{
			goto IL_007d;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_6 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		((ByteSafeEncoding_t1616231111_StaticFields*)il2cpp_codegen_static_fields_for(ByteSafeEncoding_t1616231111_il2cpp_TypeInfo_var))->set_normalization_bytes_29(L_6);
		ByteU5BU5D_t4116647657* L_7 = ((ByteSafeEncoding_t1616231111_StaticFields*)il2cpp_codegen_static_fields_for(ByteSafeEncoding_t1616231111_il2cpp_TypeInfo_var))->get_normalization_bytes_29();
		V_1 = L_7;
		V_2 = (bool)0;
	}

IL_0050:
	try
	{ // begin try (depth: 1)
		{
			ByteU5BU5D_t4116647657* L_8 = V_1;
			Monitor_Enter_m984175629(NULL /*static, unused*/, (RuntimeObject *)(RuntimeObject *)L_8, (bool*)(&V_2), /*hidden argument*/NULL);
			V_3 = 0;
			goto IL_0069;
		}

IL_005c:
		{
			ByteU5BU5D_t4116647657* L_9 = ((ByteSafeEncoding_t1616231111_StaticFields*)il2cpp_codegen_static_fields_for(ByteSafeEncoding_t1616231111_il2cpp_TypeInfo_var))->get_normalization_bytes_29();
			int32_t L_10 = V_3;
			int32_t L_11 = V_3;
			NullCheck(L_9);
			(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (uint8_t)(((int32_t)((uint8_t)L_11))));
			int32_t L_12 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
		}

IL_0069:
		{
			int32_t L_13 = V_3;
			if ((((int32_t)L_13) < ((int32_t)((int32_t)256))))
			{
				goto IL_005c;
			}
		}

IL_0071:
		{
			IL2CPP_LEAVE(0x7D, FINALLY_0073);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0073;
	}

FINALLY_0073:
	{ // begin finally (depth: 1)
		{
			bool L_14 = V_2;
			if (!L_14)
			{
				goto IL_007c;
			}
		}

IL_0076:
		{
			ByteU5BU5D_t4116647657* L_15 = V_1;
			Monitor_Exit_m3585316909(NULL /*static, unused*/, (RuntimeObject *)(RuntimeObject *)L_15, /*hidden argument*/NULL);
		}

IL_007c:
		{
			IL2CPP_END_FINALLY(115)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(115)
	{
		IL2CPP_JUMP_TBL(0x7D, IL_007d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_007d:
	{
		int32_t L_16 = VirtFuncInvoker0< int32_t >::Invoke(36 /* System.Int32 System.Text.Encoding::get_CodePage() */, __this);
		V_0 = (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_16%(int32_t)8))&(int32_t)((int32_t)31))))))));
		ByteU5BU5D_t4116647657* L_17 = ((ByteSafeEncoding_t1616231111_StaticFields*)il2cpp_codegen_static_fields_for(ByteSafeEncoding_t1616231111_il2cpp_TypeInfo_var))->get_isNormalizedComputed_28();
		int32_t L_18 = VirtFuncInvoker0< int32_t >::Invoke(36 /* System.Int32 System.Text.Encoding::get_CodePage() */, __this);
		NullCheck(L_17);
		int32_t L_19 = ((int32_t)((int32_t)L_18/(int32_t)8));
		uint8_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		uint8_t L_21 = V_0;
		if (((int32_t)((int32_t)L_20&(int32_t)L_21)))
		{
			goto IL_0101;
		}
	}
	{
		RuntimeObject * L_22 = VirtFuncInvoker0< RuntimeObject * >::Invoke(17 /* System.Object System.Text.Encoding::Clone() */, __this);
		Encoding_t1523322056 * L_23 = ((Encoding_t1523322056 *)IsInstClass((RuntimeObject*)L_22, Encoding_t1523322056_il2cpp_TypeInfo_var));
		DecoderReplacementFallback_t1462101135 * L_24 = (DecoderReplacementFallback_t1462101135 *)il2cpp_codegen_object_new(DecoderReplacementFallback_t1462101135_il2cpp_TypeInfo_var);
		DecoderReplacementFallback__ctor_m2470322217(L_24, _stringLiteral757602046, /*hidden argument*/NULL);
		NullCheck(L_23);
		Encoding_set_DecoderFallback_m148532738(L_23, L_24, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_25 = ((ByteSafeEncoding_t1616231111_StaticFields*)il2cpp_codegen_static_fields_for(ByteSafeEncoding_t1616231111_il2cpp_TypeInfo_var))->get_normalization_bytes_29();
		NullCheck(L_23);
		String_t* L_26 = VirtFuncInvoker1< String_t*, ByteU5BU5D_t4116647657* >::Invoke(42 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_23, L_25);
		String_t* L_27 = L_26;
		int32_t L_28 = ___form0;
		NullCheck(L_27);
		String_t* L_29 = String_Normalize_m1410854147(L_27, L_28, /*hidden argument*/NULL);
		bool L_30 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_27, L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_00e9;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_31 = ((ByteSafeEncoding_t1616231111_StaticFields*)il2cpp_codegen_static_fields_for(ByteSafeEncoding_t1616231111_il2cpp_TypeInfo_var))->get_isNormalized_27();
		int32_t L_32 = VirtFuncInvoker0< int32_t >::Invoke(36 /* System.Int32 System.Text.Encoding::get_CodePage() */, __this);
		NullCheck(L_31);
		uint8_t* L_33 = ((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_32/(int32_t)8)))));
		uint8_t L_34 = V_0;
		*((int8_t*)(L_33)) = (int8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)(*((uint8_t*)L_33))|(int32_t)L_34)))));
	}

IL_00e9:
	{
		ByteU5BU5D_t4116647657* L_35 = ((ByteSafeEncoding_t1616231111_StaticFields*)il2cpp_codegen_static_fields_for(ByteSafeEncoding_t1616231111_il2cpp_TypeInfo_var))->get_isNormalizedComputed_28();
		int32_t L_36 = VirtFuncInvoker0< int32_t >::Invoke(36 /* System.Int32 System.Text.Encoding::get_CodePage() */, __this);
		NullCheck(L_35);
		uint8_t* L_37 = ((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_36/(int32_t)8)))));
		uint8_t L_38 = V_0;
		*((int8_t*)(L_37)) = (int8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)(*((uint8_t*)L_37))|(int32_t)L_38)))));
	}

IL_0101:
	{
		ByteU5BU5D_t4116647657* L_39 = ((ByteSafeEncoding_t1616231111_StaticFields*)il2cpp_codegen_static_fields_for(ByteSafeEncoding_t1616231111_il2cpp_TypeInfo_var))->get_isNormalized_27();
		int32_t L_40 = VirtFuncInvoker0< int32_t >::Invoke(36 /* System.Int32 System.Text.Encoding::get_CodePage() */, __this);
		NullCheck(L_39);
		int32_t L_41 = ((int32_t)((int32_t)L_40/(int32_t)8));
		uint8_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		uint8_t L_43 = V_0;
		return (bool)((((int32_t)((int32_t)((int32_t)L_42&(int32_t)L_43))) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean I18N.Common.ByteSafeEncoding::get_IsSingleByte()
extern "C" IL2CPP_METHOD_ATTR bool ByteSafeEncoding_get_IsSingleByte_m3377085704 (ByteSafeEncoding_t1616231111 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Int32 I18N.Common.ByteSafeEncoding::GetByteCount(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t ByteSafeEncoding_GetByteCount_m3995099794 (ByteSafeEncoding_t1616231111 * __this, String_t* ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ByteSafeEncoding_GetByteCount_m3995099794_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___s0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3452614605, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, ByteSafeEncoding_GetByteCount_m3995099794_RuntimeMethod_var);
	}

IL_000e:
	{
		String_t* L_2 = ___s0;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m3847582255(L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 I18N.Common.ByteSafeEncoding::GetByteCount(System.Char[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t ByteSafeEncoding_GetByteCount_m2459685971 (ByteSafeEncoding_t1616231111 * __this, CharU5BU5D_t3528271667* ___chars0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___count2;
		int32_t L_1 = ___index1;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
	}
}
// System.Int32 I18N.Common.ByteSafeEncoding::GetByteCount(System.Char*,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t ByteSafeEncoding_GetByteCount_m1934437875 (ByteSafeEncoding_t1616231111 * __this, Il2CppChar* ___chars0, int32_t ___count1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___count1;
		return L_0;
	}
}
// System.Void I18N.Common.ByteSafeEncoding::ToBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ByteSafeEncoding_ToBytes_m3929674805 (ByteSafeEncoding_t1616231111 * __this, String_t* ___s0, int32_t ___charIndex1, int32_t ___charCount2, ByteU5BU5D_t4116647657* ___bytes3, int32_t ___byteIndex4, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___s0;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m3847582255(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_2 = ___bytes3;
		NullCheck(L_2);
		int32_t L_3 = ___byteIndex4;
		if ((!(((uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length))))) == ((uint32_t)L_3))))
		{
			goto IL_0011;
		}
	}

IL_0010:
	{
		return;
	}

IL_0011:
	{
		String_t* L_4 = ___s0;
		NullCheck(L_4);
		CharU5BU5D_t3528271667* L_5 = String_ToCharArray_m1492846834(L_4, /*hidden argument*/NULL);
		int32_t L_6 = ___charIndex1;
		int32_t L_7 = ___charCount2;
		ByteU5BU5D_t4116647657* L_8 = ___bytes3;
		int32_t L_9 = ___byteIndex4;
		VirtActionInvoker5< CharU5BU5D_t3528271667*, int32_t, int32_t, ByteU5BU5D_t4116647657*, int32_t >::Invoke(47 /* System.Void I18N.Common.ByteSafeEncoding::ToBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32) */, __this, L_5, L_6, L_7, L_8, L_9);
		return;
	}
}
// System.Int32 I18N.Common.ByteSafeEncoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t ByteSafeEncoding_GetBytes_m1471504259 (ByteSafeEncoding_t1616231111 * __this, CharU5BU5D_t3528271667* ___chars0, int32_t ___charIndex1, int32_t ___charCount2, ByteU5BU5D_t4116647657* ___bytes3, int32_t ___byteIndex4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ByteSafeEncoding_GetBytes_m1471504259_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t3528271667* L_0 = ___chars0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral2698618727, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, ByteSafeEncoding_GetBytes_m1471504259_RuntimeMethod_var);
	}

IL_000e:
	{
		ByteU5BU5D_t4116647657* L_2 = ___bytes3;
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_3 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_3, _stringLiteral130595687, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, ByteSafeEncoding_GetBytes_m1471504259_RuntimeMethod_var);
	}

IL_001d:
	{
		int32_t L_4 = ___charIndex1;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_5 = ___charIndex1;
		CharU5BU5D_t3528271667* L_6 = ___chars0;
		NullCheck(L_6);
		if ((((int32_t)L_5) <= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_6)->max_length)))))))
		{
			goto IL_003c;
		}
	}

IL_0027:
	{
		String_t* L_7 = Strings_GetString_m904263021(NULL /*static, unused*/, _stringLiteral2941213349, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_8 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_8, _stringLiteral1070969872, L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, NULL, ByteSafeEncoding_GetBytes_m1471504259_RuntimeMethod_var);
	}

IL_003c:
	{
		int32_t L_9 = ___charCount2;
		if ((((int32_t)L_9) < ((int32_t)0)))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_10 = ___charCount2;
		CharU5BU5D_t3528271667* L_11 = ___chars0;
		NullCheck(L_11);
		int32_t L_12 = ___charIndex1;
		if ((((int32_t)L_10) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length)))), (int32_t)L_12)))))
		{
			goto IL_005d;
		}
	}

IL_0048:
	{
		String_t* L_13 = Strings_GetString_m904263021(NULL /*static, unused*/, _stringLiteral2941213349, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_14 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_14, _stringLiteral4160981599, L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, NULL, ByteSafeEncoding_GetBytes_m1471504259_RuntimeMethod_var);
	}

IL_005d:
	{
		int32_t L_15 = ___byteIndex4;
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_006a;
		}
	}
	{
		int32_t L_16 = ___byteIndex4;
		ByteU5BU5D_t4116647657* L_17 = ___bytes3;
		NullCheck(L_17);
		if ((((int32_t)L_16) <= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_17)->max_length)))))))
		{
			goto IL_007f;
		}
	}

IL_006a:
	{
		String_t* L_18 = Strings_GetString_m904263021(NULL /*static, unused*/, _stringLiteral2941213349, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_19 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_19, _stringLiteral1758678393, L_18, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, NULL, ByteSafeEncoding_GetBytes_m1471504259_RuntimeMethod_var);
	}

IL_007f:
	{
		ByteU5BU5D_t4116647657* L_20 = ___bytes3;
		NullCheck(L_20);
		int32_t L_21 = ___byteIndex4;
		int32_t L_22 = ___charCount2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_20)->max_length)))), (int32_t)L_21))) >= ((int32_t)L_22)))
		{
			goto IL_0099;
		}
	}
	{
		String_t* L_23 = Strings_GetString_m904263021(NULL /*static, unused*/, _stringLiteral3497238838, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_24 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_24, L_23, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, NULL, ByteSafeEncoding_GetBytes_m1471504259_RuntimeMethod_var);
	}

IL_0099:
	{
		CharU5BU5D_t3528271667* L_25 = ___chars0;
		int32_t L_26 = ___charIndex1;
		int32_t L_27 = ___charCount2;
		ByteU5BU5D_t4116647657* L_28 = ___bytes3;
		int32_t L_29 = ___byteIndex4;
		VirtActionInvoker5< CharU5BU5D_t3528271667*, int32_t, int32_t, ByteU5BU5D_t4116647657*, int32_t >::Invoke(47 /* System.Void I18N.Common.ByteSafeEncoding::ToBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32) */, __this, L_25, L_26, L_27, L_28, L_29);
		int32_t L_30 = ___charCount2;
		return L_30;
	}
}
// System.Int32 I18N.Common.ByteSafeEncoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t ByteSafeEncoding_GetBytes_m2807426897 (ByteSafeEncoding_t1616231111 * __this, String_t* ___s0, int32_t ___charIndex1, int32_t ___charCount2, ByteU5BU5D_t4116647657* ___bytes3, int32_t ___byteIndex4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ByteSafeEncoding_GetBytes_m2807426897_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___s0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3452614605, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, ByteSafeEncoding_GetBytes_m2807426897_RuntimeMethod_var);
	}

IL_000e:
	{
		ByteU5BU5D_t4116647657* L_2 = ___bytes3;
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_3 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_3, _stringLiteral130595687, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, ByteSafeEncoding_GetBytes_m2807426897_RuntimeMethod_var);
	}

IL_001d:
	{
		int32_t L_4 = ___charIndex1;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_5 = ___charIndex1;
		String_t* L_6 = ___s0;
		NullCheck(L_6);
		int32_t L_7 = String_get_Length_m3847582255(L_6, /*hidden argument*/NULL);
		if ((((int32_t)L_5) <= ((int32_t)L_7)))
		{
			goto IL_003f;
		}
	}

IL_002a:
	{
		String_t* L_8 = Strings_GetString_m904263021(NULL /*static, unused*/, _stringLiteral3201106496, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_9 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_9, _stringLiteral1070969872, L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, NULL, ByteSafeEncoding_GetBytes_m2807426897_RuntimeMethod_var);
	}

IL_003f:
	{
		int32_t L_10 = ___charCount2;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_11 = ___charCount2;
		String_t* L_12 = ___s0;
		NullCheck(L_12);
		int32_t L_13 = String_get_Length_m3847582255(L_12, /*hidden argument*/NULL);
		int32_t L_14 = ___charIndex1;
		if ((((int32_t)L_11) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)L_14)))))
		{
			goto IL_0063;
		}
	}

IL_004e:
	{
		String_t* L_15 = Strings_GetString_m904263021(NULL /*static, unused*/, _stringLiteral335670123, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_16 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_16, _stringLiteral4160981599, L_15, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, NULL, ByteSafeEncoding_GetBytes_m2807426897_RuntimeMethod_var);
	}

IL_0063:
	{
		int32_t L_17 = ___byteIndex4;
		if ((((int32_t)L_17) < ((int32_t)0)))
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = ___byteIndex4;
		ByteU5BU5D_t4116647657* L_19 = ___bytes3;
		NullCheck(L_19);
		if ((((int32_t)L_18) <= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_19)->max_length)))))))
		{
			goto IL_0085;
		}
	}

IL_0070:
	{
		String_t* L_20 = Strings_GetString_m904263021(NULL /*static, unused*/, _stringLiteral2941213349, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_21 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_21, _stringLiteral1758678393, L_20, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, NULL, ByteSafeEncoding_GetBytes_m2807426897_RuntimeMethod_var);
	}

IL_0085:
	{
		ByteU5BU5D_t4116647657* L_22 = ___bytes3;
		NullCheck(L_22);
		int32_t L_23 = ___byteIndex4;
		int32_t L_24 = ___charCount2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_22)->max_length)))), (int32_t)L_23))) >= ((int32_t)L_24)))
		{
			goto IL_009f;
		}
	}
	{
		String_t* L_25 = Strings_GetString_m904263021(NULL /*static, unused*/, _stringLiteral3497238838, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_26 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_26, L_25, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, NULL, ByteSafeEncoding_GetBytes_m2807426897_RuntimeMethod_var);
	}

IL_009f:
	{
		String_t* L_27 = ___s0;
		int32_t L_28 = ___charIndex1;
		int32_t L_29 = ___charCount2;
		ByteU5BU5D_t4116647657* L_30 = ___bytes3;
		int32_t L_31 = ___byteIndex4;
		VirtActionInvoker5< String_t*, int32_t, int32_t, ByteU5BU5D_t4116647657*, int32_t >::Invoke(48 /* System.Void I18N.Common.ByteSafeEncoding::ToBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32) */, __this, L_27, L_28, L_29, L_30, L_31);
		int32_t L_32 = ___charCount2;
		return L_32;
	}
}
// System.Byte[] I18N.Common.ByteSafeEncoding::GetBytes(System.String)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* ByteSafeEncoding_GetBytes_m2347866660 (ByteSafeEncoding_t1616231111 * __this, String_t* ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ByteSafeEncoding_GetBytes_m2347866660_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t3528271667* V_0 = NULL;
	{
		String_t* L_0 = ___s0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3452614605, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, ByteSafeEncoding_GetBytes_m2347866660_RuntimeMethod_var);
	}

IL_000e:
	{
		String_t* L_2 = ___s0;
		NullCheck(L_2);
		CharU5BU5D_t3528271667* L_3 = String_ToCharArray_m1492846834(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		CharU5BU5D_t3528271667* L_4 = V_0;
		CharU5BU5D_t3528271667* L_5 = V_0;
		NullCheck(L_5);
		ByteU5BU5D_t4116647657* L_6 = VirtFuncInvoker3< ByteU5BU5D_t4116647657*, CharU5BU5D_t3528271667*, int32_t, int32_t >::Invoke(23 /* System.Byte[] System.Text.Encoding::GetBytes(System.Char[],System.Int32,System.Int32) */, __this, L_4, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_5)->max_length)))));
		return L_6;
	}
}
// System.Int32 I18N.Common.ByteSafeEncoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t ByteSafeEncoding_GetCharCount_m1472591721 (ByteSafeEncoding_t1616231111 * __this, ByteU5BU5D_t4116647657* ___bytes0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ByteSafeEncoding_GetCharCount_m1472591721_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_t4116647657* L_0 = ___bytes0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral130595687, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, ByteSafeEncoding_GetCharCount_m1472591721_RuntimeMethod_var);
	}

IL_000e:
	{
		int32_t L_2 = ___index1;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___index1;
		ByteU5BU5D_t4116647657* L_4 = ___bytes0;
		NullCheck(L_4);
		if ((((int32_t)L_3) <= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length)))))))
		{
			goto IL_002d;
		}
	}

IL_0018:
	{
		String_t* L_5 = Strings_GetString_m904263021(NULL /*static, unused*/, _stringLiteral2941213349, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_6 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_6, _stringLiteral797640427, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, ByteSafeEncoding_GetCharCount_m1472591721_RuntimeMethod_var);
	}

IL_002d:
	{
		int32_t L_7 = ___count2;
		if ((((int32_t)L_7) < ((int32_t)0)))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_8 = ___count2;
		ByteU5BU5D_t4116647657* L_9 = ___bytes0;
		NullCheck(L_9);
		int32_t L_10 = ___index1;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))), (int32_t)L_10)))))
		{
			goto IL_004e;
		}
	}

IL_0039:
	{
		String_t* L_11 = Strings_GetString_m904263021(NULL /*static, unused*/, _stringLiteral2941213349, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_12 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_12, _stringLiteral2002595880, L_11, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, NULL, ByteSafeEncoding_GetCharCount_m1472591721_RuntimeMethod_var);
	}

IL_004e:
	{
		int32_t L_13 = ___count2;
		return L_13;
	}
}
// System.Int32 I18N.Common.ByteSafeEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t ByteSafeEncoding_GetChars_m4090624767 (ByteSafeEncoding_t1616231111 * __this, ByteU5BU5D_t4116647657* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t3528271667* ___chars3, int32_t ___charIndex4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ByteSafeEncoding_GetChars_m4090624767_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CharU5BU5D_t3528271667* V_1 = NULL;
	{
		ByteU5BU5D_t4116647657* L_0 = ___bytes0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral130595687, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, ByteSafeEncoding_GetChars_m4090624767_RuntimeMethod_var);
	}

IL_000e:
	{
		CharU5BU5D_t3528271667* L_2 = ___chars3;
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_3 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_3, _stringLiteral2698618727, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, ByteSafeEncoding_GetChars_m4090624767_RuntimeMethod_var);
	}

IL_001d:
	{
		int32_t L_4 = ___byteIndex1;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_5 = ___byteIndex1;
		ByteU5BU5D_t4116647657* L_6 = ___bytes0;
		NullCheck(L_6);
		if ((((int32_t)L_5) <= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_6)->max_length)))))))
		{
			goto IL_003c;
		}
	}

IL_0027:
	{
		String_t* L_7 = Strings_GetString_m904263021(NULL /*static, unused*/, _stringLiteral2941213349, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_8 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_8, _stringLiteral1758678393, L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, NULL, ByteSafeEncoding_GetChars_m4090624767_RuntimeMethod_var);
	}

IL_003c:
	{
		int32_t L_9 = ___byteCount2;
		if ((((int32_t)L_9) < ((int32_t)0)))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_10 = ___byteCount2;
		ByteU5BU5D_t4116647657* L_11 = ___bytes0;
		NullCheck(L_11);
		int32_t L_12 = ___byteIndex1;
		if ((((int32_t)L_10) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length)))), (int32_t)L_12)))))
		{
			goto IL_005d;
		}
	}

IL_0048:
	{
		String_t* L_13 = Strings_GetString_m904263021(NULL /*static, unused*/, _stringLiteral2941213349, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_14 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_14, _stringLiteral669612446, L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, NULL, ByteSafeEncoding_GetChars_m4090624767_RuntimeMethod_var);
	}

IL_005d:
	{
		int32_t L_15 = ___charIndex4;
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_006a;
		}
	}
	{
		int32_t L_16 = ___charIndex4;
		CharU5BU5D_t3528271667* L_17 = ___chars3;
		NullCheck(L_17);
		if ((((int32_t)L_16) <= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_17)->max_length)))))))
		{
			goto IL_007f;
		}
	}

IL_006a:
	{
		String_t* L_18 = Strings_GetString_m904263021(NULL /*static, unused*/, _stringLiteral2941213349, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_19 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_19, _stringLiteral1070969872, L_18, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, NULL, ByteSafeEncoding_GetChars_m4090624767_RuntimeMethod_var);
	}

IL_007f:
	{
		CharU5BU5D_t3528271667* L_20 = ___chars3;
		NullCheck(L_20);
		int32_t L_21 = ___charIndex4;
		int32_t L_22 = ___byteCount2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_20)->max_length)))), (int32_t)L_21))) >= ((int32_t)L_22)))
		{
			goto IL_0099;
		}
	}
	{
		String_t* L_23 = Strings_GetString_m904263021(NULL /*static, unused*/, _stringLiteral3497238838, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_24 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_24, L_23, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, NULL, ByteSafeEncoding_GetChars_m4090624767_RuntimeMethod_var);
	}

IL_0099:
	{
		int32_t L_25 = ___byteCount2;
		V_0 = L_25;
		CharU5BU5D_t3528271667* L_26 = __this->get_toChars_17();
		V_1 = L_26;
		goto IL_00b8;
	}

IL_00a4:
	{
		CharU5BU5D_t3528271667* L_27 = ___chars3;
		int32_t L_28 = ___charIndex4;
		int32_t L_29 = L_28;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
		CharU5BU5D_t3528271667* L_30 = V_1;
		ByteU5BU5D_t4116647657* L_31 = ___bytes0;
		int32_t L_32 = ___byteIndex1;
		int32_t L_33 = L_32;
		___byteIndex1 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
		NullCheck(L_31);
		int32_t L_34 = L_33;
		uint8_t L_35 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_30);
		uint8_t L_36 = L_35;
		uint16_t L_37 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (Il2CppChar)L_37);
	}

IL_00b8:
	{
		int32_t L_38 = V_0;
		int32_t L_39 = L_38;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)1));
		if ((((int32_t)L_39) > ((int32_t)0)))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_40 = ___byteCount2;
		return L_40;
	}
}
// System.Int32 I18N.Common.ByteSafeEncoding::GetMaxByteCount(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t ByteSafeEncoding_GetMaxByteCount_m1976150099 (ByteSafeEncoding_t1616231111 * __this, int32_t ___charCount0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ByteSafeEncoding_GetMaxByteCount_m1976150099_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___charCount0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Strings_GetString_m904263021(NULL /*static, unused*/, _stringLiteral3526274078, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_2, _stringLiteral4160981599, L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, ByteSafeEncoding_GetMaxByteCount_m1976150099_RuntimeMethod_var);
	}

IL_0019:
	{
		int32_t L_3 = ___charCount0;
		return L_3;
	}
}
// System.Int32 I18N.Common.ByteSafeEncoding::GetMaxCharCount(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t ByteSafeEncoding_GetMaxCharCount_m992927858 (ByteSafeEncoding_t1616231111 * __this, int32_t ___byteCount0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ByteSafeEncoding_GetMaxCharCount_m992927858_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___byteCount0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Strings_GetString_m904263021(NULL /*static, unused*/, _stringLiteral3526274078, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_2, _stringLiteral669612446, L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, ByteSafeEncoding_GetMaxCharCount_m992927858_RuntimeMethod_var);
	}

IL_0019:
	{
		int32_t L_3 = ___byteCount0;
		return L_3;
	}
}
// System.String I18N.Common.ByteSafeEncoding::GetString(System.Byte[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* ByteSafeEncoding_GetString_m32620594 (ByteSafeEncoding_t1616231111 * __this, ByteU5BU5D_t4116647657* ___bytes0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ByteSafeEncoding_GetString_m32620594_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	ByteU5BU5D_t4116647657* V_2 = NULL;
	Il2CppChar* V_3 = NULL;
	String_t* V_4 = NULL;
	Il2CppChar* V_5 = NULL;
	CharU5BU5D_t3528271667* V_6 = NULL;
	uint8_t* V_7 = NULL;
	Il2CppChar* V_8 = NULL;
	{
		ByteU5BU5D_t4116647657* L_0 = ___bytes0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral130595687, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, ByteSafeEncoding_GetString_m32620594_RuntimeMethod_var);
	}

IL_000e:
	{
		int32_t L_2 = ___index1;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___index1;
		ByteU5BU5D_t4116647657* L_4 = ___bytes0;
		NullCheck(L_4);
		if ((((int32_t)L_3) <= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length)))))))
		{
			goto IL_002d;
		}
	}

IL_0018:
	{
		String_t* L_5 = Strings_GetString_m904263021(NULL /*static, unused*/, _stringLiteral2941213349, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_6 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_6, _stringLiteral797640427, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, ByteSafeEncoding_GetString_m32620594_RuntimeMethod_var);
	}

IL_002d:
	{
		int32_t L_7 = ___count2;
		if ((((int32_t)L_7) < ((int32_t)0)))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_8 = ___count2;
		ByteU5BU5D_t4116647657* L_9 = ___bytes0;
		NullCheck(L_9);
		int32_t L_10 = ___index1;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))), (int32_t)L_10)))))
		{
			goto IL_004e;
		}
	}

IL_0039:
	{
		String_t* L_11 = Strings_GetString_m904263021(NULL /*static, unused*/, _stringLiteral2941213349, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_12 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_12, _stringLiteral2002595880, L_11, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, NULL, ByteSafeEncoding_GetString_m32620594_RuntimeMethod_var);
	}

IL_004e:
	{
		int32_t L_13 = ___count2;
		if (L_13)
		{
			goto IL_0057;
		}
	}
	{
		String_t* L_14 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_14;
	}

IL_0057:
	{
		int32_t L_15 = ___count2;
		String_t* L_16 = String_CreateString_m1262864254(NULL, 0, L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		ByteU5BU5D_t4116647657* L_17 = ___bytes0;
		ByteU5BU5D_t4116647657* L_18 = L_17;
		V_2 = L_18;
		if (!L_18)
		{
			goto IL_0069;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_19 = V_2;
		NullCheck(L_19);
		if ((((int32_t)((int32_t)(((RuntimeArray *)L_19)->max_length)))))
		{
			goto IL_006e;
		}
	}

IL_0069:
	{
		V_1 = (uint8_t*)(((uintptr_t)0));
		goto IL_0077;
	}

IL_006e:
	{
		ByteU5BU5D_t4116647657* L_20 = V_2;
		NullCheck(L_20);
		V_1 = (uint8_t*)(((uintptr_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))));
	}

IL_0077:
	{
		String_t* L_21 = V_0;
		V_4 = L_21;
		String_t* L_22 = V_4;
		V_3 = (Il2CppChar*)(((uintptr_t)L_22));
		Il2CppChar* L_23 = V_3;
		if (!L_23)
		{
			goto IL_0089;
		}
	}
	{
		Il2CppChar* L_24 = V_3;
		int32_t L_25 = RuntimeHelpers_get_OffsetToStringData_m2192601476(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_24, (int32_t)L_25));
	}

IL_0089:
	{
		CharU5BU5D_t3528271667* L_26 = __this->get_toChars_17();
		CharU5BU5D_t3528271667* L_27 = L_26;
		V_6 = L_27;
		if (!L_27)
		{
			goto IL_009a;
		}
	}
	{
		CharU5BU5D_t3528271667* L_28 = V_6;
		NullCheck(L_28);
		if ((((int32_t)((int32_t)(((RuntimeArray *)L_28)->max_length)))))
		{
			goto IL_00a0;
		}
	}

IL_009a:
	{
		V_5 = (Il2CppChar*)(((uintptr_t)0));
		goto IL_00ab;
	}

IL_00a0:
	{
		CharU5BU5D_t3528271667* L_29 = V_6;
		NullCheck(L_29);
		V_5 = (Il2CppChar*)(((uintptr_t)((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))));
	}

IL_00ab:
	{
		uint8_t* L_30 = V_1;
		int32_t L_31 = ___index1;
		V_7 = (uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_30, (int32_t)L_31));
		Il2CppChar* L_32 = V_3;
		V_8 = (Il2CppChar*)L_32;
		goto IL_00cc;
	}

IL_00b5:
	{
		Il2CppChar* L_33 = V_8;
		Il2CppChar* L_34 = (Il2CppChar*)L_33;
		V_8 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_34, (int32_t)2));
		Il2CppChar* L_35 = V_5;
		uint8_t* L_36 = V_7;
		uint8_t* L_37 = (uint8_t*)L_36;
		V_7 = (uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_37, (int32_t)1));
		*((int16_t*)(L_34)) = (int16_t)(*((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_35, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)(*((uint8_t*)L_37)))), (int32_t)2))))));
	}

IL_00cc:
	{
		int32_t L_38 = ___count2;
		int32_t L_39 = L_38;
		___count2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)1));
		if (L_39)
		{
			goto IL_00b5;
		}
	}
	{
		V_6 = (CharU5BU5D_t3528271667*)NULL;
		V_4 = (String_t*)NULL;
		V_2 = (ByteU5BU5D_t4116647657*)NULL;
		String_t* L_40 = V_0;
		return L_40;
	}
}
// System.String I18N.Common.ByteSafeEncoding::GetString(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR String_t* ByteSafeEncoding_GetString_m2830101108 (ByteSafeEncoding_t1616231111 * __this, ByteU5BU5D_t4116647657* ___bytes0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ByteSafeEncoding_GetString_m2830101108_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_t4116647657* L_0 = ___bytes0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral130595687, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, ByteSafeEncoding_GetString_m2830101108_RuntimeMethod_var);
	}

IL_000e:
	{
		ByteU5BU5D_t4116647657* L_2 = ___bytes0;
		ByteU5BU5D_t4116647657* L_3 = ___bytes0;
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker3< String_t*, ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(43 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, __this, L_2, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length)))));
		return L_4;
	}
}
// System.String I18N.Common.ByteSafeEncoding::get_BodyName()
extern "C" IL2CPP_METHOD_ATTR String_t* ByteSafeEncoding_get_BodyName_m1746911165 (ByteSafeEncoding_t1616231111 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_bodyName_19();
		return L_0;
	}
}
// System.String I18N.Common.ByteSafeEncoding::get_EncodingName()
extern "C" IL2CPP_METHOD_ATTR String_t* ByteSafeEncoding_get_EncodingName_m2099539217 (ByteSafeEncoding_t1616231111 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_encodingName_18();
		return L_0;
	}
}
// System.String I18N.Common.ByteSafeEncoding::get_HeaderName()
extern "C" IL2CPP_METHOD_ATTR String_t* ByteSafeEncoding_get_HeaderName_m2647673328 (ByteSafeEncoding_t1616231111 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_headerName_20();
		return L_0;
	}
}
// System.Boolean I18N.Common.ByteSafeEncoding::get_IsBrowserDisplay()
extern "C" IL2CPP_METHOD_ATTR bool ByteSafeEncoding_get_IsBrowserDisplay_m4290656075 (ByteSafeEncoding_t1616231111 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isBrowserDisplay_22();
		return L_0;
	}
}
// System.Boolean I18N.Common.ByteSafeEncoding::get_IsBrowserSave()
extern "C" IL2CPP_METHOD_ATTR bool ByteSafeEncoding_get_IsBrowserSave_m269703195 (ByteSafeEncoding_t1616231111 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isBrowserSave_23();
		return L_0;
	}
}
// System.Boolean I18N.Common.ByteSafeEncoding::get_IsMailNewsDisplay()
extern "C" IL2CPP_METHOD_ATTR bool ByteSafeEncoding_get_IsMailNewsDisplay_m236281018 (ByteSafeEncoding_t1616231111 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isMailNewsDisplay_24();
		return L_0;
	}
}
// System.Boolean I18N.Common.ByteSafeEncoding::get_IsMailNewsSave()
extern "C" IL2CPP_METHOD_ATTR bool ByteSafeEncoding_get_IsMailNewsSave_m1741292164 (ByteSafeEncoding_t1616231111 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isMailNewsSave_25();
		return L_0;
	}
}
// System.String I18N.Common.ByteSafeEncoding::get_WebName()
extern "C" IL2CPP_METHOD_ATTR String_t* ByteSafeEncoding_get_WebName_m803131444 (ByteSafeEncoding_t1616231111 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_webName_21();
		return L_0;
	}
}
// System.Int32 I18N.Common.ByteSafeEncoding::get_WindowsCodePage()
extern "C" IL2CPP_METHOD_ATTR int32_t ByteSafeEncoding_get_WindowsCodePage_m525713158 (ByteSafeEncoding_t1616231111 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_windowsCodePage_26();
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
// System.String I18N.Common.Handlers::GetAlias(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Handlers_GetAlias_m865086395 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Handlers_GetAlias_m865086395_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Handlers_t3611279154_il2cpp_TypeInfo_var);
		Dictionary_2_t1632706988 * L_0 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Handlers_t3611279154_il2cpp_TypeInfo_var);
		Handlers_BuildHash_m1626728645(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_000c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Handlers_t3611279154_il2cpp_TypeInfo_var);
		Dictionary_2_t1632706988 * L_1 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		String_t* L_2 = ___name0;
		NullCheck(L_1);
		Dictionary_2_TryGetValue_m2620390247(L_1, L_2, (String_t**)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m2620390247_RuntimeMethod_var);
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.Void I18N.Common.Handlers::BuildHash()
extern "C" IL2CPP_METHOD_ATTR void Handlers_BuildHash_m1626728645 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Handlers_BuildHash_m1626728645_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t3301955079_il2cpp_TypeInfo_var);
		StringComparer_t3301955079 * L_0 = StringComparer_get_OrdinalIgnoreCase_m2680809380(NULL /*static, unused*/, /*hidden argument*/NULL);
		Dictionary_2_t1632706988 * L_1 = (Dictionary_2_t1632706988 *)il2cpp_codegen_object_new(Dictionary_2_t1632706988_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m944270596(L_1, L_0, /*hidden argument*/Dictionary_2__ctor_m944270596_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Handlers_t3611279154_il2cpp_TypeInfo_var);
		((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->set_aliases_1(L_1);
		Dictionary_2_t1632706988 * L_2 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_2);
		Dictionary_2_Add_m3045345476(L_2, _stringLiteral3954353971, _stringLiteral3325983980, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_3 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_3);
		Dictionary_2_Add_m3045345476(L_3, _stringLiteral3151080298, _stringLiteral3325983980, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_4 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_4);
		Dictionary_2_Add_m3045345476(L_4, _stringLiteral4275507964, _stringLiteral3325983980, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_5 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_5);
		Dictionary_2_Add_m3045345476(L_5, _stringLiteral1939725380, _stringLiteral3325983980, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_6 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_6);
		Dictionary_2_Add_m3045345476(L_6, _stringLiteral1973311342, _stringLiteral3325983980, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_7 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_7);
		Dictionary_2_Add_m3045345476(L_7, _stringLiteral1211204669, _stringLiteral3151544739, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_8 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_8);
		Dictionary_2_Add_m3045345476(L_8, _stringLiteral3926655565, _stringLiteral3325852908, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_9 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_9);
		Dictionary_2_Add_m3045345476(L_9, _stringLiteral819654757, _stringLiteral3325852908, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_10 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_10);
		Dictionary_2_Add_m3045345476(L_10, _stringLiteral1973770095, _stringLiteral3325852908, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_11 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_11);
		Dictionary_2_Add_m3045345476(L_11, _stringLiteral3451303876, _stringLiteral3325852908, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_12 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_12);
		Dictionary_2_Add_m3045345476(L_12, _stringLiteral2373500046, _stringLiteral3325852908, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_13 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_13);
		Dictionary_2_Add_m3045345476(L_13, _stringLiteral3992283843, _stringLiteral2910180963, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_14 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_14);
		Dictionary_2_Add_m3045345476(L_14, _stringLiteral3120086511, _stringLiteral3325721836, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_15 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_15);
		Dictionary_2_Add_m3045345476(L_15, _stringLiteral2867372978, _stringLiteral3325721836, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_16 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_16);
		Dictionary_2_Add_m3045345476(L_16, _stringLiteral2702200763, _stringLiteral3325721836, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_17 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_17);
		Dictionary_2_Add_m3045345476(L_17, _stringLiteral1973704560, _stringLiteral3325721836, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_18 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_18);
		Dictionary_2_Add_m3045345476(L_18, _stringLiteral3451434948, _stringLiteral3325721836, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_19 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_19);
		Dictionary_2_Add_m3045345476(L_19, _stringLiteral2373893262, _stringLiteral3325721836, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_20 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_20);
		Dictionary_2_Add_m3045345476(L_20, _stringLiteral1763639919, _stringLiteral2769207715, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_21 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_21);
		Dictionary_2_Add_m3045345476(L_21, _stringLiteral2851650852, _stringLiteral1556740176, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_22 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_22);
		Dictionary_2_Add_m3045345476(L_22, _stringLiteral3234463626, _stringLiteral1556740176, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_23 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_23);
		Dictionary_2_Add_m3045345476(L_23, _stringLiteral2037107499, _stringLiteral1556740176, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_24 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_24);
		Dictionary_2_Add_m3045345476(L_24, _stringLiteral2221509713, _stringLiteral1556740176, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_25 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_25);
		Dictionary_2_Add_m3045345476(L_25, _stringLiteral1037634964, _stringLiteral1556740176, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_26 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_26);
		Dictionary_2_Add_m3045345476(L_26, _stringLiteral2150382967, _stringLiteral1556740176, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_27 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_27);
		Dictionary_2_Add_m3045345476(L_27, _stringLiteral344511078, _stringLiteral1556740176, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_28 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_28);
		Dictionary_2_Add_m3045345476(L_28, _stringLiteral1841029289, _stringLiteral1556740176, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_29 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_29);
		Dictionary_2_Add_m3045345476(L_29, _stringLiteral3052904444, _stringLiteral1556740176, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_30 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_30);
		Dictionary_2_Add_m3045345476(L_30, _stringLiteral1205950312, _stringLiteral1556740176, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_31 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_31);
		Dictionary_2_Add_m3045345476(L_31, _stringLiteral4154135548, _stringLiteral996125317, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_32 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_32);
		Dictionary_2_Add_m3045345476(L_32, _stringLiteral1951800342, _stringLiteral996125317, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_33 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_33);
		Dictionary_2_Add_m3045345476(L_33, _stringLiteral3159777201, _stringLiteral996125317, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_34 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_34);
		Dictionary_2_Add_m3045345476(L_34, _stringLiteral1653631687, _stringLiteral2909918820, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_35 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_35);
		Dictionary_2_Add_m3045345476(L_35, _stringLiteral2360571624, _stringLiteral3325787372, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_36 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_36);
		Dictionary_2_Add_m3045345476(L_36, _stringLiteral2098720093, _stringLiteral3325787372, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_37 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_37);
		Dictionary_2_Add_m3045345476(L_37, _stringLiteral2225386784, _stringLiteral3325787372, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_38 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_38);
		Dictionary_2_Add_m3045345476(L_38, _stringLiteral813297765, _stringLiteral3325787372, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_39 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_39);
		Dictionary_2_Add_m3045345476(L_39, _stringLiteral1973507956, _stringLiteral3325787372, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_40 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_40);
		Dictionary_2_Add_m3045345476(L_40, _stringLiteral3451238340, _stringLiteral3325787372, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_41 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_41);
		Dictionary_2_Add_m3045345476(L_41, _stringLiteral2334584931, _stringLiteral590807907, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_42 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_42);
		Dictionary_2_Add_m3045345476(L_42, _stringLiteral3313125906, _stringLiteral590807907, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_43 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_43);
		Dictionary_2_Add_m3045345476(L_43, _stringLiteral1783777810, _stringLiteral590807907, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_44 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_44);
		Dictionary_2_Add_m3045345476(L_44, _stringLiteral594084726, _stringLiteral590807907, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_45 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_45);
		Dictionary_2_Add_m3045345476(L_45, _stringLiteral590611318, _stringLiteral590611299, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_46 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_46);
		Dictionary_2_Add_m3045345476(L_46, _stringLiteral4102292079, _stringLiteral430555555, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_47 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_47);
		Dictionary_2_Add_m3045345476(L_47, _stringLiteral3975952174, _stringLiteral3325918444, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_48 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_48);
		Dictionary_2_Add_m3045345476(L_48, _stringLiteral3510833916, _stringLiteral3325918444, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_49 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_49);
		Dictionary_2_Add_m3045345476(L_49, _stringLiteral1500048739, _stringLiteral3325918444, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_50 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_50);
		Dictionary_2_Add_m3045345476(L_50, _stringLiteral3552475495, _stringLiteral3325918444, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_51 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_51);
		Dictionary_2_Add_m3045345476(L_51, _stringLiteral3555096935, _stringLiteral3325918444, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_52 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_52);
		Dictionary_2_Add_m3045345476(L_52, _stringLiteral1933368388, _stringLiteral3325918444, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_53 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_53);
		Dictionary_2_Add_m3045345476(L_53, _stringLiteral1973376878, _stringLiteral3325918444, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_54 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_54);
		Dictionary_2_Add_m3045345476(L_54, _stringLiteral1063997394, _stringLiteral3326115052, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_55 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_55);
		Dictionary_2_Add_m3045345476(L_55, _stringLiteral1109990777, _stringLiteral3326115052, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_56 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_56);
		Dictionary_2_Add_m3045345476(L_56, _stringLiteral828305509, _stringLiteral3326115052, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_57 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_57);
		Dictionary_2_Add_m3045345476(L_57, _stringLiteral1974294381, _stringLiteral3326115052, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_58 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_58);
		Dictionary_2_Add_m3045345476(L_58, _stringLiteral2276348510, _stringLiteral2227100510, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_59 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_59);
		Dictionary_2_Add_m3045345476(L_59, _stringLiteral293056212, _stringLiteral2227100510, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_60 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_60);
		Dictionary_2_Add_m3045345476(L_60, _stringLiteral2049512309, _stringLiteral2227100510, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_61 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_61);
		Dictionary_2_Add_m3045345476(L_61, _stringLiteral2404440926, _stringLiteral2227100510, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_62 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_62);
		Dictionary_2_Add_m3045345476(L_62, _stringLiteral1214933959, _stringLiteral2227100510, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_63 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_63);
		Dictionary_2_Add_m3045345476(L_63, _stringLiteral1465207424, _stringLiteral2227100510, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_64 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_64);
		Dictionary_2_Add_m3045345476(L_64, _stringLiteral2351646691, _stringLiteral4119629799, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_65 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_65);
		Dictionary_2_Add_m3045345476(L_65, _stringLiteral1554002570, _stringLiteral3325656300, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_66 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_66);
		Dictionary_2_Add_m3045345476(L_66, _stringLiteral810020965, _stringLiteral3325656300, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_67 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_67);
		Dictionary_2_Add_m3045345476(L_67, _stringLiteral1974228848, _stringLiteral3325656300, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_68 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_68);
		Dictionary_2_Add_m3045345476(L_68, _stringLiteral3451369412, _stringLiteral3325656300, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_69 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_69);
		Dictionary_2_Add_m3045345476(L_69, _stringLiteral2373827726, _stringLiteral3325656300, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_70 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_70);
		Dictionary_2_Add_m3045345476(L_70, _stringLiteral34972796, _stringLiteral3781252753, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_71 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_71);
		Dictionary_2_Add_m3045345476(L_71, _stringLiteral3452024772, _stringLiteral3781252753, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_72 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_72);
		Dictionary_2_Add_m3045345476(L_72, _stringLiteral2373172366, _stringLiteral3781252753, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_73 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_73);
		Dictionary_2_Add_m3045345476(L_73, _stringLiteral2761482764, _stringLiteral615962217, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_74 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_74);
		Dictionary_2_Add_m3045345476(L_74, _stringLiteral2858177909, _stringLiteral615962217, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_75 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_75);
		Dictionary_2_Add_m3045345476(L_75, _stringLiteral3612847695, _stringLiteral615962217, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_76 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_76);
		Dictionary_2_Add_m3045345476(L_76, _stringLiteral744514839, _stringLiteral1276923151, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_77 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_77);
		Dictionary_2_Add_m3045345476(L_77, _stringLiteral1811884285, _stringLiteral1276923151, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		Dictionary_2_t1632706988 * L_78 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_aliases_1();
		NullCheck(L_78);
		Dictionary_2_Add_m3045345476(L_78, _stringLiteral3089971713, _stringLiteral1276923151, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		return;
	}
}
// System.Void I18N.Common.Handlers::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Handlers__ctor_m1061709003 (Handlers_t3611279154 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void I18N.Common.Handlers::.cctor()
extern "C" IL2CPP_METHOD_ATTR void Handlers__cctor_m2689685323 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Handlers__cctor_m2689685323_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t1281789340* L_0 = (StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)((int32_t)173));
		StringU5BU5D_t1281789340* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral3296971110);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3296971110);
		StringU5BU5D_t1281789340* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral3296708966);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral3296708966);
		StringU5BU5D_t1281789340* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral3296381283);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3296381283);
		StringU5BU5D_t1281789340* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral3296840036);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral3296840036);
		StringU5BU5D_t1281789340* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral344986381);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral344986381);
		StringU5BU5D_t1281789340* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral2301301517);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral2301301517);
		StringU5BU5D_t1281789340* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral4257616653);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral4257616653);
		StringU5BU5D_t1281789340* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral2690942889);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral2690942889);
		StringU5BU5D_t1281789340* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral3903531480);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral3903531480);
		StringU5BU5D_t1281789340* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral1926268836);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral1926268836);
		StringU5BU5D_t1281789340* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral139899516);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteral139899516);
		StringU5BU5D_t1281789340* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral2252039157);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteral2252039157);
		StringU5BU5D_t1281789340* L_13 = L_12;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral3872753293);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteral3872753293);
		StringU5BU5D_t1281789340* L_14 = L_13;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral3895291215);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)_stringLiteral3895291215);
		StringU5BU5D_t1281789340* L_15 = L_14;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral903833753);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteral903833753);
		StringU5BU5D_t1281789340* L_16 = L_15;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral903964824);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)_stringLiteral903964824);
		StringU5BU5D_t1281789340* L_17 = L_16;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteral331407391);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (String_t*)_stringLiteral331407391);
		StringU5BU5D_t1281789340* L_18 = L_17;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteral2162908225);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (String_t*)_stringLiteral2162908225);
		StringU5BU5D_t1281789340* L_19 = L_18;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteral4244605311);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (String_t*)_stringLiteral4244605311);
		StringU5BU5D_t1281789340* L_20 = L_19;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, _stringLiteral3760461676);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (String_t*)_stringLiteral3760461676);
		StringU5BU5D_t1281789340* L_21 = L_20;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteral1515721956);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)20)), (String_t*)_stringLiteral1515721956);
		StringU5BU5D_t1281789340* L_22 = L_21;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteral1421809516);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)21)), (String_t*)_stringLiteral1421809516);
		StringU5BU5D_t1281789340* L_23 = L_22;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteral1112437429);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)22)), (String_t*)_stringLiteral1112437429);
		StringU5BU5D_t1281789340* L_24 = L_23;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, _stringLiteral3378124652);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)23)), (String_t*)_stringLiteral3378124652);
		StringU5BU5D_t1281789340* L_25 = L_24;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, _stringLiteral648734538);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)24)), (String_t*)_stringLiteral648734538);
		StringU5BU5D_t1281789340* L_26 = L_25;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, _stringLiteral1964636967);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)25)), (String_t*)_stringLiteral1964636967);
		StringU5BU5D_t1281789340* L_27 = L_26;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, _stringLiteral3032016714);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)26)), (String_t*)_stringLiteral3032016714);
		StringU5BU5D_t1281789340* L_28 = L_27;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, _stringLiteral1964505895);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)27)), (String_t*)_stringLiteral1964505895);
		StringU5BU5D_t1281789340* L_29 = L_28;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, _stringLiteral1075701578);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)28)), (String_t*)_stringLiteral1075701578);
		StringU5BU5D_t1281789340* L_30 = L_29;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, _stringLiteral1964571431);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)29)), (String_t*)_stringLiteral1964571431);
		StringU5BU5D_t1281789340* L_31 = L_30;
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, _stringLiteral3816023882);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)30)), (String_t*)_stringLiteral3816023882);
		StringU5BU5D_t1281789340* L_32 = L_31;
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, _stringLiteral1905630254);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)31)), (String_t*)_stringLiteral1905630254);
		StringU5BU5D_t1281789340* L_33 = L_32;
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, _stringLiteral587631075);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)32)), (String_t*)_stringLiteral587631075);
		StringU5BU5D_t1281789340* L_34 = L_33;
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, _stringLiteral3779674810);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)33)), (String_t*)_stringLiteral3779674810);
		StringU5BU5D_t1281789340* L_35 = L_34;
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, _stringLiteral587631073);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)34)), (String_t*)_stringLiteral587631073);
		StringU5BU5D_t1281789340* L_36 = L_35;
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, _stringLiteral3779805882);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)35)), (String_t*)_stringLiteral3779805882);
		StringU5BU5D_t1281789340* L_37 = L_36;
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, _stringLiteral587631066);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)36)), (String_t*)_stringLiteral587631066);
		StringU5BU5D_t1281789340* L_38 = L_37;
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, _stringLiteral3780264634);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)37)), (String_t*)_stringLiteral3780264634);
		StringU5BU5D_t1281789340* L_39 = L_38;
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, _stringLiteral2086892310);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)38)), (String_t*)_stringLiteral2086892310);
		StringU5BU5D_t1281789340* L_40 = L_39;
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, _stringLiteral1178550200);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)39)), (String_t*)_stringLiteral1178550200);
		StringU5BU5D_t1281789340* L_41 = L_40;
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, _stringLiteral3652976251);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)40)), (String_t*)_stringLiteral3652976251);
		StringU5BU5D_t1281789340* L_42 = L_41;
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, _stringLiteral4281876408);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)41)), (String_t*)_stringLiteral4281876408);
		StringU5BU5D_t1281789340* L_43 = L_42;
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, _stringLiteral2105284585);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)42)), (String_t*)_stringLiteral2105284585);
		StringU5BU5D_t1281789340* L_44 = L_43;
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, _stringLiteral2842770437);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)43)), (String_t*)_stringLiteral2842770437);
		StringU5BU5D_t1281789340* L_45 = L_44;
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, _stringLiteral2105350121);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)44)), (String_t*)_stringLiteral2105350121);
		StringU5BU5D_t1281789340* L_46 = L_45;
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, _stringLiteral886455301);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)45)), (String_t*)_stringLiteral886455301);
		StringU5BU5D_t1281789340* L_47 = L_46;
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, _stringLiteral920771773);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)46)), (String_t*)_stringLiteral920771773);
		StringU5BU5D_t1281789340* L_48 = L_47;
		NullCheck(L_48);
		ArrayElementTypeCheck (L_48, _stringLiteral3276007347);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)47)), (String_t*)_stringLiteral3276007347);
		StringU5BU5D_t1281789340* L_49 = L_48;
		NullCheck(L_49);
		ArrayElementTypeCheck (L_49, _stringLiteral3275941811);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)48)), (String_t*)_stringLiteral3275941811);
		StringU5BU5D_t1281789340* L_50 = L_49;
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, _stringLiteral3276138419);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)49)), (String_t*)_stringLiteral3276138419);
		StringU5BU5D_t1281789340* L_51 = L_50;
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, _stringLiteral3276072883);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)50)), (String_t*)_stringLiteral3276072883);
		StringU5BU5D_t1281789340* L_52 = L_51;
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, _stringLiteral3276269491);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)51)), (String_t*)_stringLiteral3276269491);
		StringU5BU5D_t1281789340* L_53 = L_52;
		NullCheck(L_53);
		ArrayElementTypeCheck (L_53, _stringLiteral3276203955);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)52)), (String_t*)_stringLiteral3276203955);
		StringU5BU5D_t1281789340* L_54 = L_53;
		NullCheck(L_54);
		ArrayElementTypeCheck (L_54, _stringLiteral3275351987);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)53)), (String_t*)_stringLiteral3275351987);
		StringU5BU5D_t1281789340* L_55 = L_54;
		NullCheck(L_55);
		ArrayElementTypeCheck (L_55, _stringLiteral3275286451);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)54)), (String_t*)_stringLiteral3275286451);
		StringU5BU5D_t1281789340* L_56 = L_55;
		NullCheck(L_56);
		ArrayElementTypeCheck (L_56, _stringLiteral3275876276);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)55)), (String_t*)_stringLiteral3275876276);
		StringU5BU5D_t1281789340* L_57 = L_56;
		NullCheck(L_57);
		ArrayElementTypeCheck (L_57, _stringLiteral3275810740);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)56)), (String_t*)_stringLiteral3275810740);
		StringU5BU5D_t1281789340* L_58 = L_57;
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, _stringLiteral492297766);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)57)), (String_t*)_stringLiteral492297766);
		StringU5BU5D_t1281789340* L_59 = L_58;
		NullCheck(L_59);
		ArrayElementTypeCheck (L_59, _stringLiteral1655097180);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)58)), (String_t*)_stringLiteral1655097180);
		StringU5BU5D_t1281789340* L_60 = L_59;
		NullCheck(L_60);
		ArrayElementTypeCheck (L_60, _stringLiteral1969432534);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)59)), (String_t*)_stringLiteral1969432534);
		StringU5BU5D_t1281789340* L_61 = L_60;
		NullCheck(L_61);
		ArrayElementTypeCheck (L_61, _stringLiteral1204758486);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)60)), (String_t*)_stringLiteral1204758486);
		StringU5BU5D_t1281789340* L_62 = L_61;
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, _stringLiteral3635094829);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)61)), (String_t*)_stringLiteral3635094829);
		StringU5BU5D_t1281789340* L_63 = L_62;
		NullCheck(L_63);
		ArrayElementTypeCheck (L_63, _stringLiteral2129118387);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)62)), (String_t*)_stringLiteral2129118387);
		StringU5BU5D_t1281789340* L_64 = L_63;
		NullCheck(L_64);
		ArrayElementTypeCheck (L_64, _stringLiteral497456927);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)63)), (String_t*)_stringLiteral497456927);
		StringU5BU5D_t1281789340* L_65 = L_64;
		NullCheck(L_65);
		ArrayElementTypeCheck (L_65, _stringLiteral3629624809);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)64)), (String_t*)_stringLiteral3629624809);
		StringU5BU5D_t1281789340* L_66 = L_65;
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, _stringLiteral3294652811);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)65)), (String_t*)_stringLiteral3294652811);
		StringU5BU5D_t1281789340* L_67 = L_66;
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, _stringLiteral64066);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)66)), (String_t*)_stringLiteral64066);
		StringU5BU5D_t1281789340* L_68 = L_67;
		NullCheck(L_68);
		ArrayElementTypeCheck (L_68, _stringLiteral143364518);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)67)), (String_t*)_stringLiteral143364518);
		StringU5BU5D_t1281789340* L_69 = L_68;
		NullCheck(L_69);
		ArrayElementTypeCheck (L_69, _stringLiteral2601874168);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)68)), (String_t*)_stringLiteral2601874168);
		StringU5BU5D_t1281789340* L_70 = L_69;
		NullCheck(L_70);
		ArrayElementTypeCheck (L_70, _stringLiteral187918711);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)69)), (String_t*)_stringLiteral187918711);
		StringU5BU5D_t1281789340* L_71 = L_70;
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, _stringLiteral217356805);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)70)), (String_t*)_stringLiteral217356805);
		StringU5BU5D_t1281789340* L_72 = L_71;
		NullCheck(L_72);
		ArrayElementTypeCheck (L_72, _stringLiteral1337664793);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)71)), (String_t*)_stringLiteral1337664793);
		StringU5BU5D_t1281789340* L_73 = L_72;
		NullCheck(L_73);
		ArrayElementTypeCheck (L_73, _stringLiteral2980240995);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)72)), (String_t*)_stringLiteral2980240995);
		StringU5BU5D_t1281789340* L_74 = L_73;
		NullCheck(L_74);
		ArrayElementTypeCheck (L_74, _stringLiteral2529371417);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)73)), (String_t*)_stringLiteral2529371417);
		StringU5BU5D_t1281789340* L_75 = L_74;
		NullCheck(L_75);
		ArrayElementTypeCheck (L_75, _stringLiteral1179948428);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)74)), (String_t*)_stringLiteral1179948428);
		StringU5BU5D_t1281789340* L_76 = L_75;
		NullCheck(L_76);
		ArrayElementTypeCheck (L_76, _stringLiteral190719257);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)75)), (String_t*)_stringLiteral190719257);
		StringU5BU5D_t1281789340* L_77 = L_76;
		NullCheck(L_77);
		ArrayElementTypeCheck (L_77, _stringLiteral1179948429);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)76)), (String_t*)_stringLiteral1179948429);
		StringU5BU5D_t1281789340* L_78 = L_77;
		NullCheck(L_78);
		ArrayElementTypeCheck (L_78, _stringLiteral2911708441);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)77)), (String_t*)_stringLiteral2911708441);
		StringU5BU5D_t1281789340* L_79 = L_78;
		NullCheck(L_79);
		ArrayElementTypeCheck (L_79, _stringLiteral1179948426);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)78)), (String_t*)_stringLiteral1179948426);
		StringU5BU5D_t1281789340* L_80 = L_79;
		NullCheck(L_80);
		ArrayElementTypeCheck (L_80, _stringLiteral573056281);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)79)), (String_t*)_stringLiteral573056281);
		StringU5BU5D_t1281789340* L_81 = L_80;
		NullCheck(L_81);
		ArrayElementTypeCheck (L_81, _stringLiteral1179948427);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)80)), (String_t*)_stringLiteral1179948427);
		StringU5BU5D_t1281789340* L_82 = L_81;
		NullCheck(L_82);
		ArrayElementTypeCheck (L_82, _stringLiteral3294045465);
		(L_82)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)81)), (String_t*)_stringLiteral3294045465);
		StringU5BU5D_t1281789340* L_83 = L_82;
		NullCheck(L_83);
		ArrayElementTypeCheck (L_83, _stringLiteral1406328419);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)82)), (String_t*)_stringLiteral1406328419);
		StringU5BU5D_t1281789340* L_84 = L_83;
		NullCheck(L_84);
		ArrayElementTypeCheck (L_84, _stringLiteral955393305);
		(L_84)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)83)), (String_t*)_stringLiteral955393305);
		StringU5BU5D_t1281789340* L_85 = L_84;
		NullCheck(L_85);
		ArrayElementTypeCheck (L_85, _stringLiteral3362643555);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)84)), (String_t*)_stringLiteral3362643555);
		StringU5BU5D_t1281789340* L_86 = L_85;
		NullCheck(L_86);
		ArrayElementTypeCheck (L_86, _stringLiteral3676382489);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)85)), (String_t*)_stringLiteral3676382489);
		StringU5BU5D_t1281789340* L_87 = L_86;
		NullCheck(L_87);
		ArrayElementTypeCheck (L_87, _stringLiteral1023991395);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)86)), (String_t*)_stringLiteral1023991395);
		StringU5BU5D_t1281789340* L_88 = L_87;
		NullCheck(L_88);
		ArrayElementTypeCheck (L_88, _stringLiteral1337730329);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)87)), (String_t*)_stringLiteral1337730329);
		StringU5BU5D_t1281789340* L_89 = L_88;
		NullCheck(L_89);
		ArrayElementTypeCheck (L_89, _stringLiteral2980306531);
		(L_89)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)88)), (String_t*)_stringLiteral2980306531);
		StringU5BU5D_t1281789340* L_90 = L_89;
		NullCheck(L_90);
		ArrayElementTypeCheck (L_90, _stringLiteral4058719513);
		(L_90)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)89)), (String_t*)_stringLiteral4058719513);
		StringU5BU5D_t1281789340* L_91 = L_90;
		NullCheck(L_91);
		ArrayElementTypeCheck (L_91, _stringLiteral641654371);
		(L_91)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)90)), (String_t*)_stringLiteral641654371);
		StringU5BU5D_t1281789340* L_92 = L_91;
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, _stringLiteral1720067353);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)91)), (String_t*)_stringLiteral1720067353);
		StringU5BU5D_t1281789340* L_93 = L_92;
		NullCheck(L_93);
		ArrayElementTypeCheck (L_93, _stringLiteral2597969507);
		(L_93)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)92)), (String_t*)_stringLiteral2597969507);
		StringU5BU5D_t1281789340* L_94 = L_93;
		NullCheck(L_94);
		ArrayElementTypeCheck (L_94, _stringLiteral2514341881);
		(L_94)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)93)), (String_t*)_stringLiteral2514341881);
		StringU5BU5D_t1281789340* L_95 = L_94;
		NullCheck(L_95);
		ArrayElementTypeCheck (L_95, _stringLiteral2857438883);
		(L_95)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)94)), (String_t*)_stringLiteral2857438883);
		StringU5BU5D_t1281789340* L_96 = L_95;
		NullCheck(L_96);
		ArrayElementTypeCheck (L_96, _stringLiteral2514341885);
		(L_96)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)95)), (String_t*)_stringLiteral2514341885);
		StringU5BU5D_t1281789340* L_97 = L_96;
		NullCheck(L_97);
		ArrayElementTypeCheck (L_97, _stringLiteral531840055);
		(L_97)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)96)), (String_t*)_stringLiteral531840055);
		StringU5BU5D_t1281789340* L_98 = L_97;
		NullCheck(L_98);
		ArrayElementTypeCheck (L_98, _stringLiteral2514341886);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)97)), (String_t*)_stringLiteral2514341886);
		StringU5BU5D_t1281789340* L_99 = L_98;
		NullCheck(L_99);
		ArrayElementTypeCheck (L_99, _stringLiteral2904493050);
		(L_99)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)98)), (String_t*)_stringLiteral2904493050);
		StringU5BU5D_t1281789340* L_100 = L_99;
		NullCheck(L_100);
		ArrayElementTypeCheck (L_100, _stringLiteral940363766);
		(L_100)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)99)), (String_t*)_stringLiteral940363766);
		StringU5BU5D_t1281789340* L_101 = L_100;
		NullCheck(L_101);
		ArrayElementTypeCheck (L_101, _stringLiteral3259740370);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)100)), (String_t*)_stringLiteral3259740370);
		StringU5BU5D_t1281789340* L_102 = L_101;
		NullCheck(L_102);
		ArrayElementTypeCheck (L_102, _stringLiteral940363770);
		(L_102)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)101)), (String_t*)_stringLiteral940363770);
		StringU5BU5D_t1281789340* L_103 = L_102;
		NullCheck(L_103);
		ArrayElementTypeCheck (L_103, _stringLiteral934141542);
		(L_103)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)102)), (String_t*)_stringLiteral934141542);
		StringU5BU5D_t1281789340* L_104 = L_103;
		NullCheck(L_104);
		ArrayElementTypeCheck (L_104, _stringLiteral940363771);
		(L_104)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)103)), (String_t*)_stringLiteral940363771);
		StringU5BU5D_t1281789340* L_105 = L_104;
		NullCheck(L_105);
		ArrayElementTypeCheck (L_105, _stringLiteral3663024897);
		(L_105)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)104)), (String_t*)_stringLiteral3663024897);
		StringU5BU5D_t1281789340* L_106 = L_105;
		NullCheck(L_106);
		ArrayElementTypeCheck (L_106, _stringLiteral2896678902);
		(L_106)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)105)), (String_t*)_stringLiteral2896678902);
		StringU5BU5D_t1281789340* L_107 = L_106;
		NullCheck(L_107);
		ArrayElementTypeCheck (L_107, _stringLiteral3259805906);
		(L_107)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)106)), (String_t*)_stringLiteral3259805906);
		StringU5BU5D_t1281789340* L_108 = L_107;
		NullCheck(L_108);
		ArrayElementTypeCheck (L_108, _stringLiteral2896678909);
		(L_108)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)107)), (String_t*)_stringLiteral2896678909);
		StringU5BU5D_t1281789340* L_109 = L_108;
		NullCheck(L_109);
		ArrayElementTypeCheck (L_109, _stringLiteral530922551);
		(L_109)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)108)), (String_t*)_stringLiteral530922551);
		StringU5BU5D_t1281789340* L_110 = L_109;
		NullCheck(L_110);
		ArrayElementTypeCheck (L_110, _stringLiteral3281750936);
		(L_110)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)109)), (String_t*)_stringLiteral3281750936);
		StringU5BU5D_t1281789340* L_111 = L_110;
		NullCheck(L_111);
		ArrayElementTypeCheck (L_111, _stringLiteral3260395732);
		(L_111)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)110)), (String_t*)_stringLiteral3260395732);
		StringU5BU5D_t1281789340* L_112 = L_111;
		NullCheck(L_112);
		ArrayElementTypeCheck (L_112, _stringLiteral3281750940);
		(L_112)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)111)), (String_t*)_stringLiteral3281750940);
		StringU5BU5D_t1281789340* L_113 = L_112;
		NullCheck(L_113);
		ArrayElementTypeCheck (L_113, _stringLiteral934796904);
		(L_113)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)112)), (String_t*)_stringLiteral934796904);
		StringU5BU5D_t1281789340* L_114 = L_113;
		NullCheck(L_114);
		ArrayElementTypeCheck (L_114, _stringLiteral4033371653);
		(L_114)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)113)), (String_t*)_stringLiteral4033371653);
		StringU5BU5D_t1281789340* L_115 = L_114;
		NullCheck(L_115);
		ArrayElementTypeCheck (L_115, _stringLiteral1694639475);
		(L_115)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)114)), (String_t*)_stringLiteral1694639475);
		StringU5BU5D_t1281789340* L_116 = L_115;
		NullCheck(L_116);
		ArrayElementTypeCheck (L_116, _stringLiteral958314801);
		(L_116)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)115)), (String_t*)_stringLiteral958314801);
		StringU5BU5D_t1281789340* L_117 = L_116;
		NullCheck(L_117);
		ArrayElementTypeCheck (L_117, _stringLiteral2556008965);
		(L_117)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)116)), (String_t*)_stringLiteral2556008965);
		StringU5BU5D_t1281789340* L_118 = L_117;
		NullCheck(L_118);
		ArrayElementTypeCheck (L_118, _stringLiteral1994708472);
		(L_118)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)117)), (String_t*)_stringLiteral1994708472);
		StringU5BU5D_t1281789340* L_119 = L_118;
		NullCheck(L_119);
		ArrayElementTypeCheck (L_119, _stringLiteral531577909);
		(L_119)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)118)), (String_t*)_stringLiteral531577909);
		StringU5BU5D_t1281789340* L_120 = L_119;
		NullCheck(L_120);
		ArrayElementTypeCheck (L_120, _stringLiteral3912520369);
		(L_120)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)119)), (String_t*)_stringLiteral3912520369);
		StringU5BU5D_t1281789340* L_121 = L_120;
		NullCheck(L_121);
		ArrayElementTypeCheck (L_121, _stringLiteral3260264659);
		(L_121)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)120)), (String_t*)_stringLiteral3260264659);
		StringU5BU5D_t1281789340* L_122 = L_121;
		NullCheck(L_122);
		ArrayElementTypeCheck (L_122, _stringLiteral4268750731);
		(L_122)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)121)), (String_t*)_stringLiteral4268750731);
		StringU5BU5D_t1281789340* L_123 = L_122;
		NullCheck(L_123);
		ArrayElementTypeCheck (L_123, _stringLiteral2448000662);
		(L_123)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)122)), (String_t*)_stringLiteral2448000662);
		StringU5BU5D_t1281789340* L_124 = L_123;
		NullCheck(L_124);
		ArrayElementTypeCheck (L_124, _stringLiteral2750048638);
		(L_124)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)123)), (String_t*)_stringLiteral2750048638);
		StringU5BU5D_t1281789340* L_125 = L_124;
		NullCheck(L_125);
		ArrayElementTypeCheck (L_125, _stringLiteral128424462);
		(L_125)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)124)), (String_t*)_stringLiteral128424462);
		StringU5BU5D_t1281789340* L_126 = L_125;
		NullCheck(L_126);
		ArrayElementTypeCheck (L_126, _stringLiteral3509563525);
		(L_126)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)125)), (String_t*)_stringLiteral3509563525);
		StringU5BU5D_t1281789340* L_127 = L_126;
		NullCheck(L_127);
		ArrayElementTypeCheck (L_127, _stringLiteral3663876871);
		(L_127)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)126)), (String_t*)_stringLiteral3663876871);
		StringU5BU5D_t1281789340* L_128 = L_127;
		NullCheck(L_128);
		ArrayElementTypeCheck (L_128, _stringLiteral2346764111);
		(L_128)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)127)), (String_t*)_stringLiteral2346764111);
		StringU5BU5D_t1281789340* L_129 = L_128;
		NullCheck(L_129);
		ArrayElementTypeCheck (L_129, _stringLiteral531708989);
		(L_129)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)128)), (String_t*)_stringLiteral531708989);
		StringU5BU5D_t1281789340* L_130 = L_129;
		NullCheck(L_130);
		ArrayElementTypeCheck (L_130, _stringLiteral4269078412);
		(L_130)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)129)), (String_t*)_stringLiteral4269078412);
		StringU5BU5D_t1281789340* L_131 = L_130;
		NullCheck(L_131);
		ArrayElementTypeCheck (L_131, _stringLiteral48987169);
		(L_131)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)130)), (String_t*)_stringLiteral48987169);
		StringU5BU5D_t1281789340* L_132 = L_131;
		NullCheck(L_132);
		ArrayElementTypeCheck (L_132, _stringLiteral2750114174);
		(L_132)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)131)), (String_t*)_stringLiteral2750114174);
		StringU5BU5D_t1281789340* L_133 = L_132;
		NullCheck(L_133);
		ArrayElementTypeCheck (L_133, _stringLiteral128489998);
		(L_133)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)132)), (String_t*)_stringLiteral128489998);
		StringU5BU5D_t1281789340* L_134 = L_133;
		NullCheck(L_134);
		ArrayElementTypeCheck (L_134, _stringLiteral1943545120);
		(L_134)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)133)), (String_t*)_stringLiteral1943545120);
		StringU5BU5D_t1281789340* L_135 = L_134;
		NullCheck(L_135);
		ArrayElementTypeCheck (L_135, _stringLiteral935059052);
		(L_135)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)134)), (String_t*)_stringLiteral935059052);
		StringU5BU5D_t1281789340* L_136 = L_135;
		NullCheck(L_136);
		ArrayElementTypeCheck (L_136, _stringLiteral780745706);
		(L_136)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)135)), (String_t*)_stringLiteral780745706);
		StringU5BU5D_t1281789340* L_137 = L_136;
		NullCheck(L_137);
		ArrayElementTypeCheck (L_137, _stringLiteral2097858466);
		(L_137)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)136)), (String_t*)_stringLiteral2097858466);
		StringU5BU5D_t1281789340* L_138 = L_137;
		NullCheck(L_138);
		ArrayElementTypeCheck (L_138, _stringLiteral1540260593);
		(L_138)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)137)), (String_t*)_stringLiteral1540260593);
		StringU5BU5D_t1281789340* L_139 = L_138;
		NullCheck(L_139);
		ArrayElementTypeCheck (L_139, _stringLiteral1338343579);
		(L_139)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)138)), (String_t*)_stringLiteral1338343579);
		StringU5BU5D_t1281789340* L_140 = L_139;
		NullCheck(L_140);
		ArrayElementTypeCheck (L_140, _stringLiteral3912979124);
		(L_140)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)139)), (String_t*)_stringLiteral3912979124);
		StringU5BU5D_t1281789340* L_141 = L_140;
		NullCheck(L_141);
		ArrayElementTypeCheck (L_141, _stringLiteral3260723416);
		(L_141)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)140)), (String_t*)_stringLiteral3260723416);
		StringU5BU5D_t1281789340* L_142 = L_141;
		NullCheck(L_142);
		ArrayElementTypeCheck (L_142, _stringLiteral3509694597);
		(L_142)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)141)), (String_t*)_stringLiteral3509694597);
		StringU5BU5D_t1281789340* L_143 = L_142;
		NullCheck(L_143);
		ArrayElementTypeCheck (L_143, _stringLiteral3664007943);
		(L_143)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)142)), (String_t*)_stringLiteral3664007943);
		StringU5BU5D_t1281789340* L_144 = L_143;
		NullCheck(L_144);
		ArrayElementTypeCheck (L_144, _stringLiteral1568117349);
		(L_144)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)143)), (String_t*)_stringLiteral1568117349);
		StringU5BU5D_t1281789340* L_145 = L_144;
		NullCheck(L_145);
		ArrayElementTypeCheck (L_145, _stringLiteral1879662257);
		(L_145)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)144)), (String_t*)_stringLiteral1879662257);
		StringU5BU5D_t1281789340* L_146 = L_145;
		NullCheck(L_146);
		ArrayElementTypeCheck (L_146, _stringLiteral376476252);
		(L_146)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)145)), (String_t*)_stringLiteral376476252);
		StringU5BU5D_t1281789340* L_147 = L_146;
		NullCheck(L_147);
		ArrayElementTypeCheck (L_147, _stringLiteral3203142111);
		(L_147)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)146)), (String_t*)_stringLiteral3203142111);
		StringU5BU5D_t1281789340* L_148 = L_147;
		NullCheck(L_148);
		ArrayElementTypeCheck (L_148, _stringLiteral2579572482);
		(L_148)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)147)), (String_t*)_stringLiteral2579572482);
		StringU5BU5D_t1281789340* L_149 = L_148;
		NullCheck(L_149);
		ArrayElementTypeCheck (L_149, _stringLiteral4033250599);
		(L_149)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)148)), (String_t*)_stringLiteral4033250599);
		StringU5BU5D_t1281789340* L_150 = L_149;
		NullCheck(L_150);
		ArrayElementTypeCheck (L_150, _stringLiteral2961909506);
		(L_150)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)149)), (String_t*)_stringLiteral2961909506);
		StringU5BU5D_t1281789340* L_151 = L_150;
		NullCheck(L_151);
		ArrayElementTypeCheck (L_151, _stringLiteral4033250601);
		(L_151)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)150)), (String_t*)_stringLiteral4033250601);
		StringU5BU5D_t1281789340* L_152 = L_151;
		NullCheck(L_152);
		ArrayElementTypeCheck (L_152, _stringLiteral623257346);
		(L_152)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)151)), (String_t*)_stringLiteral623257346);
		StringU5BU5D_t1281789340* L_153 = L_152;
		NullCheck(L_153);
		ArrayElementTypeCheck (L_153, _stringLiteral4033250602);
		(L_153)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)152)), (String_t*)_stringLiteral4033250602);
		StringU5BU5D_t1281789340* L_154 = L_153;
		NullCheck(L_154);
		ArrayElementTypeCheck (L_154, _stringLiteral16599869);
		(L_154)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)153)), (String_t*)_stringLiteral16599869);
		StringU5BU5D_t1281789340* L_155 = L_154;
		NullCheck(L_155);
		ArrayElementTypeCheck (L_155, _stringLiteral1607356511);
		(L_155)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)154)), (String_t*)_stringLiteral1607356511);
		StringU5BU5D_t1281789340* L_156 = L_155;
		NullCheck(L_156);
		ArrayElementTypeCheck (L_156, _stringLiteral16599870);
		(L_156)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)155)), (String_t*)_stringLiteral16599870);
		StringU5BU5D_t1281789340* L_157 = L_156;
		NullCheck(L_157);
		ArrayElementTypeCheck (L_157, _stringLiteral3173440452);
		(L_157)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)156)), (String_t*)_stringLiteral3173440452);
		StringU5BU5D_t1281789340* L_158 = L_157;
		NullCheck(L_158);
		ArrayElementTypeCheck (L_158, _stringLiteral16599866);
		(L_158)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)157)), (String_t*)_stringLiteral16599866);
		StringU5BU5D_t1281789340* L_159 = L_158;
		NullCheck(L_159);
		ArrayElementTypeCheck (L_159, _stringLiteral1204071984);
		(L_159)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)158)), (String_t*)_stringLiteral1204071984);
		StringU5BU5D_t1281789340* L_160 = L_159;
		NullCheck(L_160);
		ArrayElementTypeCheck (L_160, _stringLiteral2391987873);
		(L_160)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)159)), (String_t*)_stringLiteral2391987873);
		StringU5BU5D_t1281789340* L_161 = L_160;
		NullCheck(L_161);
		ArrayElementTypeCheck (L_161, _stringLiteral378979578);
		(L_161)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)160)), (String_t*)_stringLiteral378979578);
		StringU5BU5D_t1281789340* L_162 = L_161;
		NullCheck(L_162);
		ArrayElementTypeCheck (L_162, _stringLiteral180436431);
		(L_162)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)161)), (String_t*)_stringLiteral180436431);
		StringU5BU5D_t1281789340* L_163 = L_162;
		NullCheck(L_163);
		ArrayElementTypeCheck (L_163, _stringLiteral4202376069);
		(L_163)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)162)), (String_t*)_stringLiteral4202376069);
		StringU5BU5D_t1281789340* L_164 = L_163;
		NullCheck(L_164);
		ArrayElementTypeCheck (L_164, _stringLiteral2103143952);
		(L_164)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)163)), (String_t*)_stringLiteral2103143952);
		StringU5BU5D_t1281789340* L_165 = L_164;
		NullCheck(L_165);
		ArrayElementTypeCheck (L_165, _stringLiteral310824368);
		(L_165)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)164)), (String_t*)_stringLiteral310824368);
		StringU5BU5D_t1281789340* L_166 = L_165;
		NullCheck(L_166);
		ArrayElementTypeCheck (L_166, _stringLiteral2103078416);
		(L_166)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)165)), (String_t*)_stringLiteral2103078416);
		StringU5BU5D_t1281789340* L_167 = L_166;
		NullCheck(L_167);
		ArrayElementTypeCheck (L_167, _stringLiteral311020976);
		(L_167)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)166)), (String_t*)_stringLiteral311020976);
		StringU5BU5D_t1281789340* L_168 = L_167;
		NullCheck(L_168);
		ArrayElementTypeCheck (L_168, _stringLiteral3669162357);
		(L_168)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)167)), (String_t*)_stringLiteral3669162357);
		StringU5BU5D_t1281789340* L_169 = L_168;
		NullCheck(L_169);
		ArrayElementTypeCheck (L_169, _stringLiteral3039904331);
		(L_169)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)168)), (String_t*)_stringLiteral3039904331);
		StringU5BU5D_t1281789340* L_170 = L_169;
		NullCheck(L_170);
		ArrayElementTypeCheck (L_170, _stringLiteral2506362943);
		(L_170)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)169)), (String_t*)_stringLiteral2506362943);
		StringU5BU5D_t1281789340* L_171 = L_170;
		NullCheck(L_171);
		ArrayElementTypeCheck (L_171, _stringLiteral1877104917);
		(L_171)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)170)), (String_t*)_stringLiteral1877104917);
		StringU5BU5D_t1281789340* L_172 = L_171;
		NullCheck(L_172);
		ArrayElementTypeCheck (L_172, _stringLiteral1343563529);
		(L_172)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)171)), (String_t*)_stringLiteral1343563529);
		StringU5BU5D_t1281789340* L_173 = L_172;
		NullCheck(L_173);
		ArrayElementTypeCheck (L_173, _stringLiteral1070535863);
		(L_173)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)172)), (String_t*)_stringLiteral1070535863);
		((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->set_List_0(L_173);
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
// System.Void I18N.Common.Manager::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Manager__ctor_m2858193152 (Manager_t131579580 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Manager__ctor_m2858193152_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CaseInsensitiveHashCodeProvider_t1962629119_il2cpp_TypeInfo_var);
		CaseInsensitiveHashCodeProvider_t1962629119 * L_0 = CaseInsensitiveHashCodeProvider_get_Default_m3719687032(NULL /*static, unused*/, /*hidden argument*/NULL);
		CaseInsensitiveComparer_t3670035800 * L_1 = CaseInsensitiveComparer_get_Default_m3138639762(NULL /*static, unused*/, /*hidden argument*/NULL);
		Hashtable_t1853889766 * L_2 = (Hashtable_t1853889766 *)il2cpp_codegen_object_new(Hashtable_t1853889766_il2cpp_TypeInfo_var);
		Hashtable__ctor_m2302711321(L_2, L_0, L_1, /*hidden argument*/NULL);
		__this->set_handlers_1(L_2);
		Hashtable_t1853889766 * L_3 = (Hashtable_t1853889766 *)il2cpp_codegen_object_new(Hashtable_t1853889766_il2cpp_TypeInfo_var);
		Hashtable__ctor_m1684344284(L_3, ((int32_t)16), /*hidden argument*/NULL);
		__this->set_active_2(L_3);
		Hashtable_t1853889766 * L_4 = (Hashtable_t1853889766 *)il2cpp_codegen_object_new(Hashtable_t1853889766_il2cpp_TypeInfo_var);
		Hashtable__ctor_m1684344284(L_4, 8, /*hidden argument*/NULL);
		__this->set_assemblies_3(L_4);
		Manager_LoadClassList_m222677215(__this, /*hidden argument*/NULL);
		return;
	}
}
// I18N.Common.Manager I18N.Common.Manager::get_PrimaryManager()
extern "C" IL2CPP_METHOD_ATTR Manager_t131579580 * Manager_get_PrimaryManager_m1696954067 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Manager_get_PrimaryManager_m1696954067_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Manager_t131579580 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(Manager_t131579580_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((Manager_t131579580_StaticFields*)il2cpp_codegen_static_fields_for(Manager_t131579580_il2cpp_TypeInfo_var))->get_lockobj_4();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject * L_1 = V_0;
			Monitor_Enter_m984175629(NULL /*static, unused*/, L_1, (bool*)(&V_1), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Manager_t131579580_il2cpp_TypeInfo_var);
			Manager_t131579580 * L_2 = ((Manager_t131579580_StaticFields*)il2cpp_codegen_static_fields_for(Manager_t131579580_il2cpp_TypeInfo_var))->get_manager_0();
			if (L_2)
			{
				goto IL_0021;
			}
		}

IL_0017:
		{
			Manager_t131579580 * L_3 = (Manager_t131579580 *)il2cpp_codegen_object_new(Manager_t131579580_il2cpp_TypeInfo_var);
			Manager__ctor_m2858193152(L_3, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Manager_t131579580_il2cpp_TypeInfo_var);
			((Manager_t131579580_StaticFields*)il2cpp_codegen_static_fields_for(Manager_t131579580_il2cpp_TypeInfo_var))->set_manager_0(L_3);
		}

IL_0021:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Manager_t131579580_il2cpp_TypeInfo_var);
			Manager_t131579580 * L_4 = ((Manager_t131579580_StaticFields*)il2cpp_codegen_static_fields_for(Manager_t131579580_il2cpp_TypeInfo_var))->get_manager_0();
			V_2 = L_4;
			IL2CPP_LEAVE(0x33, FINALLY_0029);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0029;
	}

FINALLY_0029:
	{ // begin finally (depth: 1)
		{
			bool L_5 = V_1;
			if (!L_5)
			{
				goto IL_0032;
			}
		}

IL_002c:
		{
			RuntimeObject * L_6 = V_0;
			Monitor_Exit_m3585316909(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		}

IL_0032:
		{
			IL2CPP_END_FINALLY(41)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(41)
	{
		IL2CPP_JUMP_TBL(0x33, IL_0033)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0033:
	{
		Manager_t131579580 * L_7 = V_2;
		return L_7;
	}
}
// System.String I18N.Common.Manager::Normalize(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Manager_Normalize_m384807670 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Manager_Normalize_m384807670_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_1 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_2 = String_ToLower_m3490221821(L_0, L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = String_Replace_m3726209165(L_2, ((int32_t)45), ((int32_t)95), /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Text.Encoding I18N.Common.Manager::GetEncoding(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Encoding_t1523322056 * Manager_GetEncoding_m260250766 (Manager_t131579580 * __this, int32_t ___codePage0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Manager_GetEncoding_m260250766_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = Int32_ToString_m141394615((int32_t*)(&___codePage0), /*hidden argument*/NULL);
		String_t* L_1 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3457857501, L_0, /*hidden argument*/NULL);
		RuntimeObject * L_2 = Manager_Instantiate_m1587040048(__this, L_1, /*hidden argument*/NULL);
		return ((Encoding_t1523322056 *)IsInstClass((RuntimeObject*)L_2, Encoding_t1523322056_il2cpp_TypeInfo_var));
	}
}
// System.Text.Encoding I18N.Common.Manager::GetEncoding(System.String)
extern "C" IL2CPP_METHOD_ATTR Encoding_t1523322056 * Manager_GetEncoding_m2821134161 (Manager_t131579580 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Manager_GetEncoding_m2821134161_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Encoding_t1523322056 * V_1 = NULL;
	String_t* V_2 = NULL;
	{
		String_t* L_0 = ___name0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (Encoding_t1523322056 *)NULL;
	}

IL_0005:
	{
		String_t* L_1 = ___name0;
		V_0 = L_1;
		String_t* L_2 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(Manager_t131579580_il2cpp_TypeInfo_var);
		String_t* L_3 = Manager_Normalize_m384807670(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		___name0 = L_3;
		String_t* L_4 = ___name0;
		String_t* L_5 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3409396950, L_4, /*hidden argument*/NULL);
		RuntimeObject * L_6 = Manager_Instantiate_m1587040048(__this, L_5, /*hidden argument*/NULL);
		V_1 = ((Encoding_t1523322056 *)IsInstClass((RuntimeObject*)L_6, Encoding_t1523322056_il2cpp_TypeInfo_var));
		Encoding_t1523322056 * L_7 = V_1;
		if (L_7)
		{
			goto IL_0036;
		}
	}
	{
		String_t* L_8 = ___name0;
		RuntimeObject * L_9 = Manager_Instantiate_m1587040048(__this, L_8, /*hidden argument*/NULL);
		V_1 = ((Encoding_t1523322056 *)IsInstClass((RuntimeObject*)L_9, Encoding_t1523322056_il2cpp_TypeInfo_var));
	}

IL_0036:
	{
		Encoding_t1523322056 * L_10 = V_1;
		if (L_10)
		{
			goto IL_006a;
		}
	}
	{
		String_t* L_11 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(Handlers_t3611279154_il2cpp_TypeInfo_var);
		String_t* L_12 = Handlers_GetAlias_m865086395(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		V_2 = L_12;
		String_t* L_13 = V_2;
		if (!L_13)
		{
			goto IL_006a;
		}
	}
	{
		String_t* L_14 = V_2;
		String_t* L_15 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3409396950, L_14, /*hidden argument*/NULL);
		RuntimeObject * L_16 = Manager_Instantiate_m1587040048(__this, L_15, /*hidden argument*/NULL);
		V_1 = ((Encoding_t1523322056 *)IsInstClass((RuntimeObject*)L_16, Encoding_t1523322056_il2cpp_TypeInfo_var));
		Encoding_t1523322056 * L_17 = V_1;
		if (L_17)
		{
			goto IL_006a;
		}
	}
	{
		String_t* L_18 = V_2;
		RuntimeObject * L_19 = Manager_Instantiate_m1587040048(__this, L_18, /*hidden argument*/NULL);
		V_1 = ((Encoding_t1523322056 *)IsInstClass((RuntimeObject*)L_19, Encoding_t1523322056_il2cpp_TypeInfo_var));
	}

IL_006a:
	{
		Encoding_t1523322056 * L_20 = V_1;
		if (L_20)
		{
			goto IL_006f;
		}
	}
	{
		return (Encoding_t1523322056 *)NULL;
	}

IL_006f:
	{
		String_t* L_21 = V_0;
		NullCheck(L_21);
		int32_t L_22 = String_IndexOf_m363431711(L_21, ((int32_t)95), /*hidden argument*/NULL);
		if ((((int32_t)L_22) <= ((int32_t)0)))
		{
			goto IL_008c;
		}
	}
	{
		Encoding_t1523322056 * L_23 = V_1;
		NullCheck(L_23);
		String_t* L_24 = VirtFuncInvoker0< String_t* >::Invoke(10 /* System.String System.Text.Encoding::get_WebName() */, L_23);
		NullCheck(L_24);
		int32_t L_25 = String_IndexOf_m363431711(L_24, ((int32_t)45), /*hidden argument*/NULL);
		if ((((int32_t)L_25) <= ((int32_t)0)))
		{
			goto IL_008c;
		}
	}
	{
		return (Encoding_t1523322056 *)NULL;
	}

IL_008c:
	{
		String_t* L_26 = V_0;
		NullCheck(L_26);
		int32_t L_27 = String_IndexOf_m363431711(L_26, ((int32_t)45), /*hidden argument*/NULL);
		if ((((int32_t)L_27) <= ((int32_t)0)))
		{
			goto IL_00a9;
		}
	}
	{
		Encoding_t1523322056 * L_28 = V_1;
		NullCheck(L_28);
		String_t* L_29 = VirtFuncInvoker0< String_t* >::Invoke(10 /* System.String System.Text.Encoding::get_WebName() */, L_28);
		NullCheck(L_29);
		int32_t L_30 = String_IndexOf_m363431711(L_29, ((int32_t)95), /*hidden argument*/NULL);
		if ((((int32_t)L_30) <= ((int32_t)0)))
		{
			goto IL_00a9;
		}
	}
	{
		return (Encoding_t1523322056 *)NULL;
	}

IL_00a9:
	{
		Encoding_t1523322056 * L_31 = V_1;
		return L_31;
	}
}
// System.Globalization.CultureInfo I18N.Common.Manager::GetCulture(System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR CultureInfo_t4157843068 * Manager_GetCulture_m2085582766 (Manager_t131579580 * __this, int32_t ___culture0, bool ___useUserOverride1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Manager_GetCulture_m2085582766_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_0, /*hidden argument*/NULL);
		StringBuilder_t * L_1 = L_0;
		int32_t L_2 = ___culture0;
		NullCheck(_stringLiteral3445932352);
		Il2CppChar L_3 = String_get_Chars_m2986988803(_stringLiteral3445932352, ((int32_t)((int32_t)((int32_t)((int32_t)L_2>>(int32_t)((int32_t)12)))&(int32_t)((int32_t)15))), /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_Append_m2383614642(L_1, L_3, /*hidden argument*/NULL);
		StringBuilder_t * L_4 = L_1;
		int32_t L_5 = ___culture0;
		NullCheck(_stringLiteral3445932352);
		Il2CppChar L_6 = String_get_Chars_m2986988803(_stringLiteral3445932352, ((int32_t)((int32_t)((int32_t)((int32_t)L_5>>(int32_t)8))&(int32_t)((int32_t)15))), /*hidden argument*/NULL);
		NullCheck(L_4);
		StringBuilder_Append_m2383614642(L_4, L_6, /*hidden argument*/NULL);
		StringBuilder_t * L_7 = L_4;
		int32_t L_8 = ___culture0;
		NullCheck(_stringLiteral3445932352);
		Il2CppChar L_9 = String_get_Chars_m2986988803(_stringLiteral3445932352, ((int32_t)((int32_t)((int32_t)((int32_t)L_8>>(int32_t)4))&(int32_t)((int32_t)15))), /*hidden argument*/NULL);
		NullCheck(L_7);
		StringBuilder_Append_m2383614642(L_7, L_9, /*hidden argument*/NULL);
		StringBuilder_t * L_10 = L_7;
		int32_t L_11 = ___culture0;
		NullCheck(_stringLiteral3445932352);
		Il2CppChar L_12 = String_get_Chars_m2986988803(_stringLiteral3445932352, ((int32_t)((int32_t)L_11&(int32_t)((int32_t)15))), /*hidden argument*/NULL);
		NullCheck(L_10);
		StringBuilder_Append_m2383614642(L_10, L_12, /*hidden argument*/NULL);
		NullCheck(L_10);
		String_t* L_13 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_10);
		V_0 = L_13;
		bool L_14 = ___useUserOverride1;
		if (!L_14)
		{
			goto IL_0085;
		}
	}
	{
		String_t* L_15 = V_0;
		String_t* L_16 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3532175731, L_15, /*hidden argument*/NULL);
		RuntimeObject * L_17 = Manager_Instantiate_m1587040048(__this, L_16, /*hidden argument*/NULL);
		V_1 = L_17;
		RuntimeObject * L_18 = V_1;
		if (!L_18)
		{
			goto IL_0085;
		}
	}
	{
		RuntimeObject * L_19 = V_1;
		return ((CultureInfo_t4157843068 *)IsInstClass((RuntimeObject*)L_19, CultureInfo_t4157843068_il2cpp_TypeInfo_var));
	}

IL_0085:
	{
		String_t* L_20 = V_0;
		String_t* L_21 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1843640691, L_20, /*hidden argument*/NULL);
		RuntimeObject * L_22 = Manager_Instantiate_m1587040048(__this, L_21, /*hidden argument*/NULL);
		return ((CultureInfo_t4157843068 *)IsInstClass((RuntimeObject*)L_22, CultureInfo_t4157843068_il2cpp_TypeInfo_var));
	}
}
// System.Globalization.CultureInfo I18N.Common.Manager::GetCulture(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR CultureInfo_t4157843068 * Manager_GetCulture_m1052639361 (Manager_t131579580 * __this, String_t* ___name0, bool ___useUserOverride1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Manager_GetCulture_m1052639361_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		String_t* L_0 = ___name0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (CultureInfo_t4157843068 *)NULL;
	}

IL_0005:
	{
		String_t* L_1 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(Manager_t131579580_il2cpp_TypeInfo_var);
		String_t* L_2 = Manager_Normalize_m384807670(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		___name0 = L_2;
		bool L_3 = ___useUserOverride1;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_4 = ___name0;
		NullCheck(L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		String_t* L_6 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1083798124, L_5, /*hidden argument*/NULL);
		RuntimeObject * L_7 = Manager_Instantiate_m1587040048(__this, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		RuntimeObject * L_8 = V_0;
		if (!L_8)
		{
			goto IL_0031;
		}
	}
	{
		RuntimeObject * L_9 = V_0;
		return ((CultureInfo_t4157843068 *)IsInstClass((RuntimeObject*)L_9, CultureInfo_t4157843068_il2cpp_TypeInfo_var));
	}

IL_0031:
	{
		String_t* L_10 = ___name0;
		NullCheck(L_10);
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_10);
		String_t* L_12 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3456939997, L_11, /*hidden argument*/NULL);
		RuntimeObject * L_13 = Manager_Instantiate_m1587040048(__this, L_12, /*hidden argument*/NULL);
		return ((CultureInfo_t4157843068 *)IsInstClass((RuntimeObject*)L_13, CultureInfo_t4157843068_il2cpp_TypeInfo_var));
	}
}
// System.Object I18N.Common.Manager::Instantiate(System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Manager_Instantiate_m1587040048 (Manager_t131579580 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Manager_Instantiate_m1587040048_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	String_t* V_1 = NULL;
	Assembly_t * V_2 = NULL;
	Type_t * V_3 = NULL;
	Manager_t131579580 * V_4 = NULL;
	bool V_5 = false;
	RuntimeObject * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_4 = __this;
		V_5 = (bool)0;
	}

IL_0006:
	try
	{ // begin try (depth: 1)
		{
			Manager_t131579580 * L_0 = V_4;
			Monitor_Enter_m984175629(NULL /*static, unused*/, L_0, (bool*)(&V_5), /*hidden argument*/NULL);
			Hashtable_t1853889766 * L_1 = __this->get_active_2();
			String_t* L_2 = ___name0;
			NullCheck(L_1);
			RuntimeObject * L_3 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(26 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_1, L_2);
			V_0 = L_3;
			RuntimeObject * L_4 = V_0;
			if (!L_4)
			{
				goto IL_0027;
			}
		}

IL_001f:
		{
			RuntimeObject * L_5 = V_0;
			V_6 = L_5;
			IL2CPP_LEAVE(0xF9, FINALLY_00ed);
		}

IL_0027:
		{
			Hashtable_t1853889766 * L_6 = __this->get_handlers_1();
			String_t* L_7 = ___name0;
			NullCheck(L_6);
			RuntimeObject * L_8 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(26 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_6, L_7);
			V_1 = ((String_t*)CastclassSealed((RuntimeObject*)L_8, String_t_il2cpp_TypeInfo_var));
			String_t* L_9 = V_1;
			if (L_9)
			{
				goto IL_0044;
			}
		}

IL_003c:
		{
			V_6 = NULL;
			IL2CPP_LEAVE(0xF9, FINALLY_00ed);
		}

IL_0044:
		{
			Hashtable_t1853889766 * L_10 = __this->get_assemblies_3();
			String_t* L_11 = V_1;
			NullCheck(L_10);
			RuntimeObject * L_12 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(26 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_10, L_11);
			V_2 = ((Assembly_t *)CastclassClass((RuntimeObject*)L_12, Assembly_t_il2cpp_TypeInfo_var));
			Assembly_t * L_13 = V_2;
			bool L_14 = Assembly_op_Equality_m3828289814(NULL /*static, unused*/, L_13, (Assembly_t *)NULL, /*hidden argument*/NULL);
			if (!L_14)
			{
				goto IL_00a2;
			}
		}

IL_005f:
		try
		{ // begin try (depth: 2)
			RuntimeTypeHandle_t3027515415  L_15 = { reinterpret_cast<intptr_t> (Manager_t131579580_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_16 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
			NullCheck(L_16);
			Assembly_t * L_17 = VirtFuncInvoker0< Assembly_t * >::Invoke(24 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_16);
			NullCheck(L_17);
			AssemblyName_t270931938 * L_18 = VirtFuncInvoker0< AssemblyName_t270931938 * >::Invoke(22 /* System.Reflection.AssemblyName System.Reflection.Assembly::GetName() */, L_17);
			AssemblyName_t270931938 * L_19 = L_18;
			String_t* L_20 = V_1;
			NullCheck(L_19);
			AssemblyName_set_Name_m1981626655(L_19, L_20, /*hidden argument*/NULL);
			Assembly_t * L_21 = Assembly_Load_m2586943103(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
			V_2 = L_21;
			goto IL_0087;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (SystemException_t176217640_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_0082;
			throw e;
		}

CATCH_0082:
		{ // begin catch(System.SystemException)
			V_2 = (Assembly_t *)NULL;
			goto IL_0087;
		} // end catch (depth: 2)

IL_0087:
		{
			Assembly_t * L_22 = V_2;
			bool L_23 = Assembly_op_Equality_m3828289814(NULL /*static, unused*/, L_22, (Assembly_t *)NULL, /*hidden argument*/NULL);
			if (!L_23)
			{
				goto IL_0095;
			}
		}

IL_0090:
		{
			V_6 = NULL;
			IL2CPP_LEAVE(0xF9, FINALLY_00ed);
		}

IL_0095:
		{
			Hashtable_t1853889766 * L_24 = __this->get_assemblies_3();
			String_t* L_25 = V_1;
			Assembly_t * L_26 = V_2;
			NullCheck(L_24);
			VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(27 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_24, L_25, L_26);
		}

IL_00a2:
		{
			Assembly_t * L_27 = V_2;
			String_t* L_28 = V_1;
			String_t* L_29 = ___name0;
			String_t* L_30 = String_Concat_m3755062657(NULL /*static, unused*/, L_28, _stringLiteral3452614530, L_29, /*hidden argument*/NULL);
			NullCheck(L_27);
			Type_t * L_31 = VirtFuncInvoker3< Type_t *, String_t*, bool, bool >::Invoke(26 /* System.Type System.Reflection.Assembly::GetType(System.String,System.Boolean,System.Boolean) */, L_27, L_30, (bool)0, (bool)1);
			V_3 = L_31;
			Type_t * L_32 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			bool L_33 = Type_op_Equality_m2683486427(NULL /*static, unused*/, L_32, (Type_t *)NULL, /*hidden argument*/NULL);
			if (!L_33)
			{
				goto IL_00c5;
			}
		}

IL_00c0:
		{
			V_6 = NULL;
			IL2CPP_LEAVE(0xF9, FINALLY_00ed);
		}

IL_00c5:
		{
		}

IL_00c6:
		try
		{ // begin try (depth: 2)
			Type_t * L_34 = V_3;
			RuntimeObject * L_35 = Activator_CreateInstance_m3631483688(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
			V_0 = L_35;
			goto IL_00db;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (MissingMethodException_t1274661534_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_00cf;
			if(il2cpp_codegen_class_is_assignable_from (SecurityException_t975544473_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_00d5;
			throw e;
		}

CATCH_00cf:
		{ // begin catch(System.MissingMethodException)
			V_6 = NULL;
			IL2CPP_LEAVE(0xF9, FINALLY_00ed);
		} // end catch (depth: 2)

CATCH_00d5:
		{ // begin catch(System.Security.SecurityException)
			V_6 = NULL;
			IL2CPP_LEAVE(0xF9, FINALLY_00ed);
		} // end catch (depth: 2)

IL_00db:
		{
			Hashtable_t1853889766 * L_36 = __this->get_active_2();
			String_t* L_37 = ___name0;
			RuntimeObject * L_38 = V_0;
			NullCheck(L_36);
			VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(20 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_36, L_37, L_38);
			RuntimeObject * L_39 = V_0;
			V_6 = L_39;
			IL2CPP_LEAVE(0xF9, FINALLY_00ed);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00ed;
	}

FINALLY_00ed:
	{ // begin finally (depth: 1)
		{
			bool L_40 = V_5;
			if (!L_40)
			{
				goto IL_00f8;
			}
		}

IL_00f1:
		{
			Manager_t131579580 * L_41 = V_4;
			Monitor_Exit_m3585316909(NULL /*static, unused*/, L_41, /*hidden argument*/NULL);
		}

IL_00f8:
		{
			IL2CPP_END_FINALLY(237)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(237)
	{
		IL2CPP_JUMP_TBL(0xF9, IL_00f9)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00f9:
	{
		RuntimeObject * L_42 = V_6;
		return L_42;
	}
}
// System.Void I18N.Common.Manager::LoadClassList()
extern "C" IL2CPP_METHOD_ATTR void Manager_LoadClassList_m222677215 (Manager_t131579580 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Manager_LoadClassList_m222677215_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	FileStream_t4292183065 * V_0 = NULL;
	StreamReader_t4009935899 * V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
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
			Assembly_t * L_0 = il2cpp_codegen_get_executing_assembly(Manager_LoadClassList_m222677215_RuntimeMethod_var);
			NullCheck(L_0);
			FileStream_t4292183065 * L_1 = VirtFuncInvoker1< FileStream_t4292183065 *, String_t* >::Invoke(15 /* System.IO.FileStream System.Reflection.Assembly::GetFile(System.String) */, L_0, _stringLiteral2015482072);
			V_0 = L_1;
			FileStream_t4292183065 * L_2 = V_0;
			if (L_2)
			{
				goto IL_001b;
			}
		}

IL_0013:
		{
			Manager_LoadInternalClasses_m2546757475(__this, /*hidden argument*/NULL);
			goto IL_008e;
		}

IL_001b:
		{
			goto IL_0026;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (FileLoadException_t549148505_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_001d;
		throw e;
	}

CATCH_001d:
	{ // begin catch(System.IO.FileLoadException)
		Manager_LoadInternalClasses_m2546757475(__this, /*hidden argument*/NULL);
		goto IL_008e;
	} // end catch (depth: 1)

IL_0026:
	{
		FileStream_t4292183065 * L_3 = V_0;
		StreamReader_t4009935899 * L_4 = (StreamReader_t4009935899 *)il2cpp_codegen_object_new(StreamReader_t4009935899_il2cpp_TypeInfo_var);
		StreamReader__ctor_m1047876681(L_4, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_007e;
	}

IL_002f:
	{
		String_t* L_5 = V_2;
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m3847582255(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_007e;
		}
	}
	{
		String_t* L_7 = V_2;
		NullCheck(L_7);
		Il2CppChar L_8 = String_get_Chars_m2986988803(L_7, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_8) == ((int32_t)((int32_t)35))))
		{
			goto IL_007e;
		}
	}
	{
		String_t* L_9 = V_2;
		NullCheck(L_9);
		int32_t L_10 = String_LastIndexOf_m3451222878(L_9, ((int32_t)46), /*hidden argument*/NULL);
		V_3 = L_10;
		int32_t L_11 = V_3;
		if ((((int32_t)L_11) == ((int32_t)(-1))))
		{
			goto IL_007e;
		}
	}
	{
		String_t* L_12 = V_2;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		String_t* L_14 = String_Substring_m2848979100(L_12, ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)), /*hidden argument*/NULL);
		V_4 = L_14;
		Hashtable_t1853889766 * L_15 = __this->get_handlers_1();
		String_t* L_16 = V_4;
		NullCheck(L_15);
		bool L_17 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(23 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_15, L_16);
		if (L_17)
		{
			goto IL_007e;
		}
	}
	{
		Hashtable_t1853889766 * L_18 = __this->get_handlers_1();
		String_t* L_19 = V_4;
		String_t* L_20 = V_2;
		int32_t L_21 = V_3;
		NullCheck(L_20);
		String_t* L_22 = String_Substring_m1610150815(L_20, 0, L_21, /*hidden argument*/NULL);
		NullCheck(L_18);
		VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(20 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_18, L_19, L_22);
	}

IL_007e:
	{
		StreamReader_t4009935899 * L_23 = V_1;
		NullCheck(L_23);
		String_t* L_24 = VirtFuncInvoker0< String_t* >::Invoke(13 /* System.String System.IO.TextReader::ReadLine() */, L_23);
		String_t* L_25 = L_24;
		V_2 = L_25;
		if (L_25)
		{
			goto IL_002f;
		}
	}
	{
		StreamReader_t4009935899 * L_26 = V_1;
		NullCheck(L_26);
		VirtActionInvoker0::Invoke(7 /* System.Void System.IO.TextReader::Close() */, L_26);
	}

IL_008e:
	{
		return;
	}
}
// System.Void I18N.Common.Manager::LoadInternalClasses()
extern "C" IL2CPP_METHOD_ATTR void Manager_LoadInternalClasses_m2546757475 (Manager_t131579580 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Manager_LoadInternalClasses_m2546757475_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StringU5BU5D_t1281789340* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Handlers_t3611279154_il2cpp_TypeInfo_var);
		StringU5BU5D_t1281789340* L_0 = ((Handlers_t3611279154_StaticFields*)il2cpp_codegen_static_fields_for(Handlers_t3611279154_il2cpp_TypeInfo_var))->get_List_0();
		V_1 = L_0;
		V_2 = 0;
		goto IL_004e;
	}

IL_000a:
	{
		StringU5BU5D_t1281789340* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		String_t* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_3 = L_4;
		String_t* L_5 = V_3;
		NullCheck(L_5);
		int32_t L_6 = String_LastIndexOf_m3451222878(L_5, ((int32_t)46), /*hidden argument*/NULL);
		V_0 = L_6;
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)(-1))))
		{
			goto IL_004a;
		}
	}
	{
		String_t* L_8 = V_3;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		String_t* L_10 = String_Substring_m2848979100(L_8, ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1)), /*hidden argument*/NULL);
		V_4 = L_10;
		Hashtable_t1853889766 * L_11 = __this->get_handlers_1();
		String_t* L_12 = V_4;
		NullCheck(L_11);
		bool L_13 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(23 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_11, L_12);
		if (L_13)
		{
			goto IL_004a;
		}
	}
	{
		Hashtable_t1853889766 * L_14 = __this->get_handlers_1();
		String_t* L_15 = V_4;
		String_t* L_16 = V_3;
		int32_t L_17 = V_0;
		NullCheck(L_16);
		String_t* L_18 = String_Substring_m1610150815(L_16, 0, L_17, /*hidden argument*/NULL);
		NullCheck(L_14);
		VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(20 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_14, L_15, L_18);
	}

IL_004a:
	{
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_004e:
	{
		int32_t L_20 = V_2;
		StringU5BU5D_t1281789340* L_21 = V_1;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_21)->max_length)))))))
		{
			goto IL_000a;
		}
	}
	{
		return;
	}
}
// System.Void I18N.Common.Manager::.cctor()
extern "C" IL2CPP_METHOD_ATTR void Manager__cctor_m3932043889 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Manager__cctor_m3932043889_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m297566312(L_0, /*hidden argument*/NULL);
		((Manager_t131579580_StaticFields*)il2cpp_codegen_static_fields_for(Manager_t131579580_il2cpp_TypeInfo_var))->set_lockobj_4(L_0);
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
// System.Void I18N.Common.MonoEncoder::.ctor(I18N.Common.MonoEncoding)
extern "C" IL2CPP_METHOD_ATTR void MonoEncoder__ctor_m4237943987 (MonoEncoder_t374802340 * __this, MonoEncoding_t666837952 * ___encoding0, const RuntimeMethod* method)
{
	{
		Encoder__ctor_m36314963(__this, /*hidden argument*/NULL);
		MonoEncoding_t666837952 * L_0 = ___encoding0;
		__this->set_encoding_2(L_0);
		return;
	}
}
// System.Int32 I18N.Common.MonoEncoder::GetByteCount(System.Char[],System.Int32,System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR int32_t MonoEncoder_GetByteCount_m1784015248 (MonoEncoder_t374802340 * __this, CharU5BU5D_t3528271667* ___chars0, int32_t ___index1, int32_t ___count2, bool ___refresh3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonoEncoder_GetByteCount_m1784015248_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	CharU5BU5D_t3528271667* V_1 = NULL;
	{
		CharU5BU5D_t3528271667* L_0 = ___chars0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral2698618727, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, MonoEncoder_GetByteCount_m1784015248_RuntimeMethod_var);
	}

IL_000e:
	{
		int32_t L_2 = ___index1;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___index1;
		CharU5BU5D_t3528271667* L_4 = ___chars0;
		NullCheck(L_4);
		if ((((int32_t)L_3) <= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length)))))))
		{
			goto IL_002d;
		}
	}

IL_0018:
	{
		String_t* L_5 = Strings_GetString_m904263021(NULL /*static, unused*/, _stringLiteral2941213349, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_6 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_6, _stringLiteral797640427, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, MonoEncoder_GetByteCount_m1784015248_RuntimeMethod_var);
	}

IL_002d:
	{
		int32_t L_7 = ___count2;
		if ((((int32_t)L_7) < ((int32_t)0)))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_8 = ___count2;
		CharU5BU5D_t3528271667* L_9 = ___chars0;
		NullCheck(L_9);
		int32_t L_10 = ___index1;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))), (int32_t)L_10)))))
		{
			goto IL_004e;
		}
	}

IL_0039:
	{
		String_t* L_11 = Strings_GetString_m904263021(NULL /*static, unused*/, _stringLiteral2941213349, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_12 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_12, _stringLiteral2002595880, L_11, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, NULL, MonoEncoder_GetByteCount_m1784015248_RuntimeMethod_var);
	}

IL_004e:
	{
		int32_t L_13 = ___count2;
		if (L_13)
		{
			goto IL_0053;
		}
	}
	{
		return 0;
	}

IL_0053:
	{
		CharU5BU5D_t3528271667* L_14 = ___chars0;
		CharU5BU5D_t3528271667* L_15 = L_14;
		V_1 = L_15;
		if (!L_15)
		{
			goto IL_005d;
		}
	}
	{
		CharU5BU5D_t3528271667* L_16 = V_1;
		NullCheck(L_16);
		if ((((int32_t)((int32_t)(((RuntimeArray *)L_16)->max_length)))))
		{
			goto IL_0062;
		}
	}

IL_005d:
	{
		V_0 = (Il2CppChar*)(((uintptr_t)0));
		goto IL_006b;
	}

IL_0062:
	{
		CharU5BU5D_t3528271667* L_17 = V_1;
		NullCheck(L_17);
		V_0 = (Il2CppChar*)(((uintptr_t)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))));
	}

IL_006b:
	{
		Il2CppChar* L_18 = V_0;
		int32_t L_19 = ___index1;
		int32_t L_20 = ___count2;
		bool L_21 = ___refresh3;
		int32_t L_22 = VirtFuncInvoker3< int32_t, Il2CppChar*, int32_t, bool >::Invoke(11 /* System.Int32 I18N.Common.MonoEncoder::GetByteCountImpl(System.Char*,System.Int32,System.Boolean) */, __this, (Il2CppChar*)(Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_18, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)L_19)), (int32_t)2)))), L_20, L_21);
		return L_22;
	}
}
// System.Int32 I18N.Common.MonoEncoder::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR int32_t MonoEncoder_GetBytes_m1347597210 (MonoEncoder_t374802340 * __this, CharU5BU5D_t3528271667* ___chars0, int32_t ___charIndex1, int32_t ___charCount2, ByteU5BU5D_t4116647657* ___bytes3, int32_t ___byteIndex4, bool ___flush5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonoEncoder_GetBytes_m1347597210_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	CharU5BU5D_t3528271667* V_1 = NULL;
	uint8_t* V_2 = NULL;
	ByteU5BU5D_t4116647657* V_3 = NULL;
	{
		CharU5BU5D_t3528271667* L_0 = ___chars0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral2698618727, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, MonoEncoder_GetBytes_m1347597210_RuntimeMethod_var);
	}

IL_000e:
	{
		ByteU5BU5D_t4116647657* L_2 = ___bytes3;
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_3 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_3, _stringLiteral130595687, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, MonoEncoder_GetBytes_m1347597210_RuntimeMethod_var);
	}

IL_001d:
	{
		int32_t L_4 = ___charIndex1;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_5 = ___charIndex1;
		CharU5BU5D_t3528271667* L_6 = ___chars0;
		NullCheck(L_6);
		if ((((int32_t)L_5) <= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_6)->max_length)))))))
		{
			goto IL_003c;
		}
	}

IL_0027:
	{
		String_t* L_7 = Strings_GetString_m904263021(NULL /*static, unused*/, _stringLiteral2941213349, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_8 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_8, _stringLiteral1070969872, L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, NULL, MonoEncoder_GetBytes_m1347597210_RuntimeMethod_var);
	}

IL_003c:
	{
		int32_t L_9 = ___charCount2;
		if ((((int32_t)L_9) < ((int32_t)0)))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_10 = ___charCount2;
		CharU5BU5D_t3528271667* L_11 = ___chars0;
		NullCheck(L_11);
		int32_t L_12 = ___charIndex1;
		if ((((int32_t)L_10) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length)))), (int32_t)L_12)))))
		{
			goto IL_005d;
		}
	}

IL_0048:
	{
		String_t* L_13 = Strings_GetString_m904263021(NULL /*static, unused*/, _stringLiteral2941213349, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_14 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_14, _stringLiteral4160981599, L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, NULL, MonoEncoder_GetBytes_m1347597210_RuntimeMethod_var);
	}

IL_005d:
	{
		int32_t L_15 = ___byteIndex4;
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_006a;
		}
	}
	{
		int32_t L_16 = ___byteIndex4;
		ByteU5BU5D_t4116647657* L_17 = ___bytes3;
		NullCheck(L_17);
		if ((((int32_t)L_16) <= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_17)->max_length)))))))
		{
			goto IL_007f;
		}
	}

IL_006a:
	{
		String_t* L_18 = Strings_GetString_m904263021(NULL /*static, unused*/, _stringLiteral2941213349, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_19 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_19, _stringLiteral1758678393, L_18, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, NULL, MonoEncoder_GetBytes_m1347597210_RuntimeMethod_var);
	}

IL_007f:
	{
		ByteU5BU5D_t4116647657* L_20 = ___bytes3;
		NullCheck(L_20);
		int32_t L_21 = ___byteIndex4;
		int32_t L_22 = ___charCount2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_20)->max_length)))), (int32_t)L_21))) >= ((int32_t)L_22)))
		{
			goto IL_009e;
		}
	}
	{
		String_t* L_23 = Strings_GetString_m904263021(NULL /*static, unused*/, _stringLiteral3497238838, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_24 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_24, L_23, _stringLiteral130595687, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, NULL, MonoEncoder_GetBytes_m1347597210_RuntimeMethod_var);
	}

IL_009e:
	{
		int32_t L_25 = ___charCount2;
		if (L_25)
		{
			goto IL_00a3;
		}
	}
	{
		return 0;
	}

IL_00a3:
	{
		CharU5BU5D_t3528271667* L_26 = ___chars0;
		CharU5BU5D_t3528271667* L_27 = L_26;
		V_1 = L_27;
		if (!L_27)
		{
			goto IL_00ad;
		}
	}
	{
		CharU5BU5D_t3528271667* L_28 = V_1;
		NullCheck(L_28);
		if ((((int32_t)((int32_t)(((RuntimeArray *)L_28)->max_length)))))
		{
			goto IL_00b2;
		}
	}

IL_00ad:
	{
		V_0 = (Il2CppChar*)(((uintptr_t)0));
		goto IL_00bb;
	}

IL_00b2:
	{
		CharU5BU5D_t3528271667* L_29 = V_1;
		NullCheck(L_29);
		V_0 = (Il2CppChar*)(((uintptr_t)((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))));
	}

IL_00bb:
	{
		ByteU5BU5D_t4116647657* L_30 = ___bytes3;
		ByteU5BU5D_t4116647657* L_31 = L_30;
		V_3 = L_31;
		if (!L_31)
		{
			goto IL_00c6;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_32 = V_3;
		NullCheck(L_32);
		if ((((int32_t)((int32_t)(((RuntimeArray *)L_32)->max_length)))))
		{
			goto IL_00cb;
		}
	}

IL_00c6:
	{
		V_2 = (uint8_t*)(((uintptr_t)0));
		goto IL_00d4;
	}

IL_00cb:
	{
		ByteU5BU5D_t4116647657* L_33 = V_3;
		NullCheck(L_33);
		V_2 = (uint8_t*)(((uintptr_t)((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))));
	}

IL_00d4:
	{
		Il2CppChar* L_34 = V_0;
		int32_t L_35 = ___charIndex1;
		int32_t L_36 = ___charCount2;
		uint8_t* L_37 = V_2;
		int32_t L_38 = ___byteIndex4;
		ByteU5BU5D_t4116647657* L_39 = ___bytes3;
		NullCheck(L_39);
		int32_t L_40 = ___byteIndex4;
		bool L_41 = ___flush5;
		int32_t L_42 = VirtFuncInvoker5< int32_t, Il2CppChar*, int32_t, uint8_t*, int32_t, bool >::Invoke(12 /* System.Int32 I18N.Common.MonoEncoder::GetBytesImpl(System.Char*,System.Int32,System.Byte*,System.Int32,System.Boolean) */, __this, (Il2CppChar*)(Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_34, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)L_35)), (int32_t)2)))), L_36, (uint8_t*)(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_37, (int32_t)L_38)), ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_39)->max_length)))), (int32_t)L_40)), L_41);
		return L_42;
	}
}
// System.Int32 I18N.Common.MonoEncoder::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR int32_t MonoEncoder_GetBytes_m1617566338 (MonoEncoder_t374802340 * __this, Il2CppChar* ___chars0, int32_t ___charCount1, uint8_t* ___bytes2, int32_t ___byteCount3, bool ___flush4, const RuntimeMethod* method)
{
	{
		Il2CppChar* L_0 = ___chars0;
		int32_t L_1 = ___charCount1;
		uint8_t* L_2 = ___bytes2;
		int32_t L_3 = ___byteCount3;
		bool L_4 = ___flush4;
		int32_t L_5 = VirtFuncInvoker5< int32_t, Il2CppChar*, int32_t, uint8_t*, int32_t, bool >::Invoke(12 /* System.Int32 I18N.Common.MonoEncoder::GetBytesImpl(System.Char*,System.Int32,System.Byte*,System.Int32,System.Boolean) */, __this, (Il2CppChar*)(Il2CppChar*)L_0, L_1, (uint8_t*)(uint8_t*)L_2, L_3, L_4);
		return L_5;
	}
}
// System.Void I18N.Common.MonoEncoder::HandleFallback(System.Char*,System.Int32&,System.Int32&,System.Byte*,System.Int32&,System.Int32&,System.Object)
extern "C" IL2CPP_METHOD_ATTR void MonoEncoder_HandleFallback_m960162082 (MonoEncoder_t374802340 * __this, Il2CppChar* ___chars0, int32_t* ___charIndex1, int32_t* ___charCount2, uint8_t* ___bytes3, int32_t* ___byteIndex4, int32_t* ___byteCount5, RuntimeObject * ___state6, const RuntimeMethod* method)
{
	EncoderFallbackBuffer_t3523102303 * V_0 = NULL;
	{
		EncoderFallbackBuffer_t3523102303 * L_0 = Encoder_get_FallbackBuffer_m1329536258(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		MonoEncoding_t666837952 * L_1 = __this->get_encoding_2();
		Il2CppChar* L_2 = ___chars0;
		int32_t* L_3 = ___charIndex1;
		int32_t* L_4 = ___charCount2;
		uint8_t* L_5 = ___bytes3;
		int32_t* L_6 = ___byteIndex4;
		int32_t* L_7 = ___byteCount5;
		RuntimeObject * L_8 = ___state6;
		NullCheck(L_1);
		MonoEncoding_HandleFallback_m1353878205(L_1, (EncoderFallbackBuffer_t3523102303 **)(&V_0), (Il2CppChar*)(Il2CppChar*)L_2, (int32_t*)L_3, (int32_t*)L_4, (uint8_t*)(uint8_t*)L_5, (int32_t*)L_6, (int32_t*)L_7, L_8, /*hidden argument*/NULL);
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
// System.Void I18N.Common.MonoEncoding::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void MonoEncoding__ctor_m422656136 (MonoEncoding_t666837952 * __this, int32_t ___codePage0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___codePage0;
		MonoEncoding__ctor_m2996623478(__this, L_0, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void I18N.Common.MonoEncoding::.ctor(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void MonoEncoding__ctor_m2996623478 (MonoEncoding_t666837952 * __this, int32_t ___codePage0, int32_t ___windowsCodePage1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___codePage0;
		Encoding__ctor_m777655508(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___windowsCodePage1;
		__this->set_win_code_page_16(L_1);
		return;
	}
}
// System.Int32 I18N.Common.MonoEncoding::get_WindowsCodePage()
extern "C" IL2CPP_METHOD_ATTR int32_t MonoEncoding_get_WindowsCodePage_m270380816 (MonoEncoding_t666837952 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_win_code_page_16();
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = Encoding_get_WindowsCodePage_m2198574355(__this, /*hidden argument*/NULL);
		return L_1;
	}

IL_000f:
	{
		int32_t L_2 = __this->get_win_code_page_16();
		return L_2;
	}
}
// System.Int32 I18N.Common.MonoEncoding::GetBytesInternal(System.Char*,System.Int32,System.Byte*,System.Int32,System.Boolean,System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t MonoEncoding_GetBytesInternal_m1958756858 (MonoEncoding_t666837952 * __this, Il2CppChar* ___chars0, int32_t ___charCount1, uint8_t* ___bytes2, int32_t ___byteCount3, bool ___flush4, RuntimeObject * ___state5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonoEncoding_GetBytesInternal_m1958756858_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t3489357830 * L_0 = (NotImplementedException_t3489357830 *)il2cpp_codegen_object_new(NotImplementedException_t3489357830_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m3095902440(L_0, _stringLiteral2445362708, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, MonoEncoding_GetBytesInternal_m1958756858_RuntimeMethod_var);
	}
}
// System.Void I18N.Common.MonoEncoding::HandleFallback(System.Text.EncoderFallbackBuffer&,System.Char*,System.Int32&,System.Int32&,System.Byte*,System.Int32&,System.Int32&,System.Object)
extern "C" IL2CPP_METHOD_ATTR void MonoEncoding_HandleFallback_m1353878205 (MonoEncoding_t666837952 * __this, EncoderFallbackBuffer_t3523102303 ** ___buffer0, Il2CppChar* ___chars1, int32_t* ___charIndex2, int32_t* ___charCount3, uint8_t* ___bytes4, int32_t* ___byteIndex5, int32_t* ___byteCount6, RuntimeObject * ___state7, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonoEncoding_HandleFallback_m1353878205_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t3528271667* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar* V_2 = NULL;
	CharU5BU5D_t3528271667* V_3 = NULL;
	uint8_t* V_4 = NULL;
	int32_t V_5 = 0;
	uintptr_t G_B17_0 = 0;
	int32_t G_B20_0 = 0;
	{
		EncoderFallbackBuffer_t3523102303 ** L_0 = ___buffer0;
		EncoderFallbackBuffer_t3523102303 * L_1 = *((EncoderFallbackBuffer_t3523102303 **)L_0);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		EncoderFallbackBuffer_t3523102303 ** L_2 = ___buffer0;
		EncoderFallback_t1188251036 * L_3 = Encoding_get_EncoderFallback_m4088593971(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		EncoderFallbackBuffer_t3523102303 * L_4 = VirtFuncInvoker0< EncoderFallbackBuffer_t3523102303 * >::Invoke(4 /* System.Text.EncoderFallbackBuffer System.Text.EncoderFallback::CreateFallbackBuffer() */, L_3);
		*((RuntimeObject **)(L_2)) = (RuntimeObject *)L_4;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_2), (RuntimeObject *)L_4);
	}

IL_0011:
	{
		int32_t* L_5 = ___charCount3;
		if ((((int32_t)(*((int32_t*)L_5))) <= ((int32_t)1)))
		{
			goto IL_0063;
		}
	}
	{
		Il2CppChar* L_6 = ___chars1;
		int32_t* L_7 = ___charIndex2;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_8 = Char_IsSurrogate_m3686972571(NULL /*static, unused*/, (*((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_6, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)(*((int32_t*)L_7)))), (int32_t)2)))))), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0063;
		}
	}
	{
		Il2CppChar* L_9 = ___chars1;
		int32_t* L_10 = ___charIndex2;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_11 = Char_IsSurrogate_m3686972571(NULL /*static, unused*/, (*((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_9, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_10)), (int32_t)1)))), (int32_t)2)))))), /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0063;
		}
	}
	{
		EncoderFallbackBuffer_t3523102303 ** L_12 = ___buffer0;
		EncoderFallbackBuffer_t3523102303 * L_13 = *((EncoderFallbackBuffer_t3523102303 **)L_12);
		Il2CppChar* L_14 = ___chars1;
		int32_t* L_15 = ___charIndex2;
		Il2CppChar* L_16 = ___chars1;
		int32_t* L_17 = ___charIndex2;
		int32_t* L_18 = ___charIndex2;
		NullCheck(L_13);
		VirtFuncInvoker3< bool, Il2CppChar, Il2CppChar, int32_t >::Invoke(5 /* System.Boolean System.Text.EncoderFallbackBuffer::Fallback(System.Char,System.Char,System.Int32) */, L_13, (*((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_14, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)(*((int32_t*)L_15)))), (int32_t)2)))))), (*((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_16, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_17)), (int32_t)1)))), (int32_t)2)))))), (*((int32_t*)L_18)));
		int32_t* L_19 = ___charIndex2;
		int32_t* L_20 = ___charIndex2;
		*((int32_t*)(L_19)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_20)), (int32_t)1));
		int32_t* L_21 = ___charCount3;
		int32_t* L_22 = ___charCount3;
		*((int32_t*)(L_21)) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(*((int32_t*)L_22)), (int32_t)1));
		goto IL_0075;
	}

IL_0063:
	{
		EncoderFallbackBuffer_t3523102303 ** L_23 = ___buffer0;
		EncoderFallbackBuffer_t3523102303 * L_24 = *((EncoderFallbackBuffer_t3523102303 **)L_23);
		Il2CppChar* L_25 = ___chars1;
		int32_t* L_26 = ___charIndex2;
		int32_t* L_27 = ___charIndex2;
		NullCheck(L_24);
		VirtFuncInvoker2< bool, Il2CppChar, int32_t >::Invoke(4 /* System.Boolean System.Text.EncoderFallbackBuffer::Fallback(System.Char,System.Int32) */, L_24, (*((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_25, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)(*((int32_t*)L_26)))), (int32_t)2)))))), (*((int32_t*)L_27)));
	}

IL_0075:
	{
		EncoderFallbackBuffer_t3523102303 ** L_28 = ___buffer0;
		EncoderFallbackBuffer_t3523102303 * L_29 = *((EncoderFallbackBuffer_t3523102303 **)L_28);
		NullCheck(L_29);
		int32_t L_30 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Text.EncoderFallbackBuffer::get_Remaining() */, L_29);
		CharU5BU5D_t3528271667* L_31 = (CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)L_30);
		V_0 = L_31;
		V_1 = 0;
		goto IL_0094;
	}

IL_0086:
	{
		CharU5BU5D_t3528271667* L_32 = V_0;
		int32_t L_33 = V_1;
		int32_t L_34 = L_33;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
		EncoderFallbackBuffer_t3523102303 ** L_35 = ___buffer0;
		EncoderFallbackBuffer_t3523102303 * L_36 = *((EncoderFallbackBuffer_t3523102303 **)L_35);
		NullCheck(L_36);
		Il2CppChar L_37 = VirtFuncInvoker0< Il2CppChar >::Invoke(6 /* System.Char System.Text.EncoderFallbackBuffer::GetNextChar() */, L_36);
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(L_34), (Il2CppChar)L_37);
	}

IL_0094:
	{
		EncoderFallbackBuffer_t3523102303 ** L_38 = ___buffer0;
		EncoderFallbackBuffer_t3523102303 * L_39 = *((EncoderFallbackBuffer_t3523102303 **)L_38);
		NullCheck(L_39);
		int32_t L_40 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Text.EncoderFallbackBuffer::get_Remaining() */, L_39);
		if ((((int32_t)L_40) > ((int32_t)0)))
		{
			goto IL_0086;
		}
	}
	{
		CharU5BU5D_t3528271667* L_41 = V_0;
		CharU5BU5D_t3528271667* L_42 = L_41;
		V_3 = L_42;
		if (!L_42)
		{
			goto IL_00a8;
		}
	}
	{
		CharU5BU5D_t3528271667* L_43 = V_3;
		NullCheck(L_43);
		if ((((int32_t)((int32_t)(((RuntimeArray *)L_43)->max_length)))))
		{
			goto IL_00ad;
		}
	}

IL_00a8:
	{
		V_2 = (Il2CppChar*)(((uintptr_t)0));
		goto IL_00b6;
	}

IL_00ad:
	{
		CharU5BU5D_t3528271667* L_44 = V_3;
		NullCheck(L_44);
		V_2 = (Il2CppChar*)(((uintptr_t)((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))));
	}

IL_00b6:
	{
		uint8_t* L_45 = ___bytes4;
		if ((((intptr_t)L_45) == ((intptr_t)(((uintptr_t)0)))))
		{
			goto IL_00c4;
		}
	}
	{
		uint8_t* L_46 = ___bytes4;
		int32_t* L_47 = ___byteIndex5;
		G_B17_0 = ((uintptr_t)(intptr_t)(((uint8_t*)il2cpp_codegen_add((intptr_t)L_46, (int32_t)(*((int32_t*)L_47))))));
		goto IL_00c6;
	}

IL_00c4:
	{
		G_B17_0 = (((uintptr_t)0));
	}

IL_00c6:
	{
		V_4 = (uint8_t*)G_B17_0;
		RuntimeObject * L_48 = ___state7;
		if (!L_48)
		{
			goto IL_00e0;
		}
	}
	{
		Il2CppChar* L_49 = V_2;
		CharU5BU5D_t3528271667* L_50 = V_0;
		NullCheck(L_50);
		uint8_t* L_51 = V_4;
		int32_t* L_52 = ___byteCount6;
		RuntimeObject * L_53 = ___state7;
		int32_t L_54 = VirtFuncInvoker6< int32_t, Il2CppChar*, int32_t, uint8_t*, int32_t, bool, RuntimeObject * >::Invoke(46 /* System.Int32 I18N.Common.MonoEncoding::GetBytesInternal(System.Char*,System.Int32,System.Byte*,System.Int32,System.Boolean,System.Object) */, __this, (Il2CppChar*)(Il2CppChar*)L_49, (((int32_t)((int32_t)(((RuntimeArray *)L_50)->max_length)))), (uint8_t*)(uint8_t*)L_51, (*((int32_t*)L_52)), (bool)1, L_53);
		G_B20_0 = L_54;
		goto IL_00ef;
	}

IL_00e0:
	{
		Il2CppChar* L_55 = V_2;
		CharU5BU5D_t3528271667* L_56 = V_0;
		NullCheck(L_56);
		uint8_t* L_57 = V_4;
		int32_t* L_58 = ___byteCount6;
		int32_t L_59 = VirtFuncInvoker4< int32_t, Il2CppChar*, int32_t, uint8_t*, int32_t >::Invoke(28 /* System.Int32 System.Text.Encoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32) */, __this, (Il2CppChar*)(Il2CppChar*)L_55, (((int32_t)((int32_t)(((RuntimeArray *)L_56)->max_length)))), (uint8_t*)(uint8_t*)L_57, (*((int32_t*)L_58)));
		G_B20_0 = L_59;
	}

IL_00ef:
	{
		V_5 = G_B20_0;
		int32_t* L_60 = ___byteIndex5;
		int32_t* L_61 = ___byteIndex5;
		int32_t L_62 = V_5;
		*((int32_t*)(L_60)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_61)), (int32_t)L_62));
		int32_t* L_63 = ___byteCount6;
		int32_t* L_64 = ___byteCount6;
		int32_t L_65 = V_5;
		*((int32_t*)(L_63)) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(*((int32_t*)L_64)), (int32_t)L_65));
		V_3 = (CharU5BU5D_t3528271667*)NULL;
		return;
	}
}
// System.Void I18N.Common.MonoEncoding::HandleFallback(System.Text.EncoderFallbackBuffer&,System.Char*,System.Int32&,System.Int32&,System.Byte*,System.Int32&,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR void MonoEncoding_HandleFallback_m37600073 (MonoEncoding_t666837952 * __this, EncoderFallbackBuffer_t3523102303 ** ___buffer0, Il2CppChar* ___chars1, int32_t* ___charIndex2, int32_t* ___charCount3, uint8_t* ___bytes4, int32_t* ___byteIndex5, int32_t* ___byteCount6, const RuntimeMethod* method)
{
	{
		EncoderFallbackBuffer_t3523102303 ** L_0 = ___buffer0;
		Il2CppChar* L_1 = ___chars1;
		int32_t* L_2 = ___charIndex2;
		int32_t* L_3 = ___charCount3;
		uint8_t* L_4 = ___bytes4;
		int32_t* L_5 = ___byteIndex5;
		int32_t* L_6 = ___byteCount6;
		MonoEncoding_HandleFallback_m1353878205(__this, (EncoderFallbackBuffer_t3523102303 **)L_0, (Il2CppChar*)(Il2CppChar*)L_1, (int32_t*)L_2, (int32_t*)L_3, (uint8_t*)(uint8_t*)L_4, (int32_t*)L_5, (int32_t*)L_6, NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 I18N.Common.MonoEncoding::GetByteCount(System.Char[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t MonoEncoding_GetByteCount_m3959784025 (MonoEncoding_t666837952 * __this, CharU5BU5D_t3528271667* ___chars0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonoEncoding_GetByteCount_m3959784025_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	CharU5BU5D_t3528271667* V_1 = NULL;
	{
		CharU5BU5D_t3528271667* L_0 = ___chars0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral2698618727, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, MonoEncoding_GetByteCount_m3959784025_RuntimeMethod_var);
	}

IL_000e:
	{
		int32_t L_2 = ___index1;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___index1;
		CharU5BU5D_t3528271667* L_4 = ___chars0;
		NullCheck(L_4);
		if ((((int32_t)L_3) <= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length)))))))
		{
			goto IL_002d;
		}
	}

IL_0018:
	{
		String_t* L_5 = Strings_GetString_m904263021(NULL /*static, unused*/, _stringLiteral2941213349, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_6 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_6, _stringLiteral797640427, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, MonoEncoding_GetByteCount_m3959784025_RuntimeMethod_var);
	}

IL_002d:
	{
		int32_t L_7 = ___count2;
		if ((((int32_t)L_7) < ((int32_t)0)))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_8 = ___count2;
		CharU5BU5D_t3528271667* L_9 = ___chars0;
		NullCheck(L_9);
		int32_t L_10 = ___index1;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))), (int32_t)L_10)))))
		{
			goto IL_004e;
		}
	}

IL_0039:
	{
		String_t* L_11 = Strings_GetString_m904263021(NULL /*static, unused*/, _stringLiteral2941213349, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_12 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_12, _stringLiteral2002595880, L_11, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, NULL, MonoEncoding_GetByteCount_m3959784025_RuntimeMethod_var);
	}

IL_004e:
	{
		int32_t L_13 = ___count2;
		if (L_13)
		{
			goto IL_0053;
		}
	}
	{
		return 0;
	}

IL_0053:
	{
		CharU5BU5D_t3528271667* L_14 = ___chars0;
		CharU5BU5D_t3528271667* L_15 = L_14;
		V_1 = L_15;
		if (!L_15)
		{
			goto IL_005d;
		}
	}
	{
		CharU5BU5D_t3528271667* L_16 = V_1;
		NullCheck(L_16);
		if ((((int32_t)((int32_t)(((RuntimeArray *)L_16)->max_length)))))
		{
			goto IL_0062;
		}
	}

IL_005d:
	{
		V_0 = (Il2CppChar*)(((uintptr_t)0));
		goto IL_006b;
	}

IL_0062:
	{
		CharU5BU5D_t3528271667* L_17 = V_1;
		NullCheck(L_17);
		V_0 = (Il2CppChar*)(((uintptr_t)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))));
	}

IL_006b:
	{
		Il2CppChar* L_18 = V_0;
		int32_t L_19 = ___index1;
		int32_t L_20 = ___count2;
		int32_t L_21 = VirtFuncInvoker2< int32_t, Il2CppChar*, int32_t >::Invoke(47 /* System.Int32 I18N.Common.MonoEncoding::GetByteCountImpl(System.Char*,System.Int32) */, __this, (Il2CppChar*)(Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_18, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)L_19)), (int32_t)2)))), L_20);
		return L_21;
	}
}
// System.Int32 I18N.Common.MonoEncoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t MonoEncoding_GetBytes_m2407697046 (MonoEncoding_t666837952 * __this, CharU5BU5D_t3528271667* ___chars0, int32_t ___charIndex1, int32_t ___charCount2, ByteU5BU5D_t4116647657* ___bytes3, int32_t ___byteIndex4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonoEncoding_GetBytes_m2407697046_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	CharU5BU5D_t3528271667* V_1 = NULL;
	uint8_t* V_2 = NULL;
	ByteU5BU5D_t4116647657* V_3 = NULL;
	{
		CharU5BU5D_t3528271667* L_0 = ___chars0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral2698618727, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, MonoEncoding_GetBytes_m2407697046_RuntimeMethod_var);
	}

IL_000e:
	{
		ByteU5BU5D_t4116647657* L_2 = ___bytes3;
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_3 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_3, _stringLiteral130595687, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, MonoEncoding_GetBytes_m2407697046_RuntimeMethod_var);
	}

IL_001d:
	{
		int32_t L_4 = ___charIndex1;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_5 = ___charIndex1;
		CharU5BU5D_t3528271667* L_6 = ___chars0;
		NullCheck(L_6);
		if ((((int32_t)L_5) <= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_6)->max_length)))))))
		{
			goto IL_003c;
		}
	}

IL_0027:
	{
		String_t* L_7 = Strings_GetString_m904263021(NULL /*static, unused*/, _stringLiteral2941213349, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_8 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_8, _stringLiteral1070969872, L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, NULL, MonoEncoding_GetBytes_m2407697046_RuntimeMethod_var);
	}

IL_003c:
	{
		int32_t L_9 = ___charCount2;
		if ((((int32_t)L_9) < ((int32_t)0)))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_10 = ___charCount2;
		CharU5BU5D_t3528271667* L_11 = ___chars0;
		NullCheck(L_11);
		int32_t L_12 = ___charIndex1;
		if ((((int32_t)L_10) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length)))), (int32_t)L_12)))))
		{
			goto IL_005d;
		}
	}

IL_0048:
	{
		String_t* L_13 = Strings_GetString_m904263021(NULL /*static, unused*/, _stringLiteral2941213349, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_14 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_14, _stringLiteral4160981599, L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, NULL, MonoEncoding_GetBytes_m2407697046_RuntimeMethod_var);
	}

IL_005d:
	{
		int32_t L_15 = ___byteIndex4;
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_006a;
		}
	}
	{
		int32_t L_16 = ___byteIndex4;
		ByteU5BU5D_t4116647657* L_17 = ___bytes3;
		NullCheck(L_17);
		if ((((int32_t)L_16) <= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_17)->max_length)))))))
		{
			goto IL_007f;
		}
	}

IL_006a:
	{
		String_t* L_18 = Strings_GetString_m904263021(NULL /*static, unused*/, _stringLiteral2941213349, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_19 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_19, _stringLiteral1758678393, L_18, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, NULL, MonoEncoding_GetBytes_m2407697046_RuntimeMethod_var);
	}

IL_007f:
	{
		ByteU5BU5D_t4116647657* L_20 = ___bytes3;
		NullCheck(L_20);
		int32_t L_21 = ___byteIndex4;
		int32_t L_22 = ___charCount2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_20)->max_length)))), (int32_t)L_21))) >= ((int32_t)L_22)))
		{
			goto IL_009e;
		}
	}
	{
		String_t* L_23 = Strings_GetString_m904263021(NULL /*static, unused*/, _stringLiteral3497238838, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_24 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_24, L_23, _stringLiteral130595687, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, NULL, MonoEncoding_GetBytes_m2407697046_RuntimeMethod_var);
	}

IL_009e:
	{
		int32_t L_25 = ___charCount2;
		if (L_25)
		{
			goto IL_00a3;
		}
	}
	{
		return 0;
	}

IL_00a3:
	{
		CharU5BU5D_t3528271667* L_26 = ___chars0;
		CharU5BU5D_t3528271667* L_27 = L_26;
		V_1 = L_27;
		if (!L_27)
		{
			goto IL_00ad;
		}
	}
	{
		CharU5BU5D_t3528271667* L_28 = V_1;
		NullCheck(L_28);
		if ((((int32_t)((int32_t)(((RuntimeArray *)L_28)->max_length)))))
		{
			goto IL_00b2;
		}
	}

IL_00ad:
	{
		V_0 = (Il2CppChar*)(((uintptr_t)0));
		goto IL_00bb;
	}

IL_00b2:
	{
		CharU5BU5D_t3528271667* L_29 = V_1;
		NullCheck(L_29);
		V_0 = (Il2CppChar*)(((uintptr_t)((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))));
	}

IL_00bb:
	{
		ByteU5BU5D_t4116647657* L_30 = ___bytes3;
		ByteU5BU5D_t4116647657* L_31 = L_30;
		V_3 = L_31;
		if (!L_31)
		{
			goto IL_00c6;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_32 = V_3;
		NullCheck(L_32);
		if ((((int32_t)((int32_t)(((RuntimeArray *)L_32)->max_length)))))
		{
			goto IL_00cb;
		}
	}

IL_00c6:
	{
		V_2 = (uint8_t*)(((uintptr_t)0));
		goto IL_00d4;
	}

IL_00cb:
	{
		ByteU5BU5D_t4116647657* L_33 = V_3;
		NullCheck(L_33);
		V_2 = (uint8_t*)(((uintptr_t)((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))));
	}

IL_00d4:
	{
		Il2CppChar* L_34 = V_0;
		int32_t L_35 = ___charIndex1;
		int32_t L_36 = ___charCount2;
		uint8_t* L_37 = V_2;
		int32_t L_38 = ___byteIndex4;
		ByteU5BU5D_t4116647657* L_39 = ___bytes3;
		NullCheck(L_39);
		int32_t L_40 = ___byteIndex4;
		int32_t L_41 = VirtFuncInvoker4< int32_t, Il2CppChar*, int32_t, uint8_t*, int32_t >::Invoke(48 /* System.Int32 I18N.Common.MonoEncoding::GetBytesImpl(System.Char*,System.Int32,System.Byte*,System.Int32) */, __this, (Il2CppChar*)(Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_34, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)L_35)), (int32_t)2)))), L_36, (uint8_t*)(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_37, (int32_t)L_38)), ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_39)->max_length)))), (int32_t)L_40)));
		return L_41;
	}
}
// System.Int32 I18N.Common.MonoEncoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t MonoEncoding_GetBytes_m1039747135 (MonoEncoding_t666837952 * __this, String_t* ___s0, int32_t ___charIndex1, int32_t ___charCount2, ByteU5BU5D_t4116647657* ___bytes3, int32_t ___byteIndex4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonoEncoding_GetBytes_m1039747135_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	String_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	ByteU5BU5D_t4116647657* V_3 = NULL;
	{
		String_t* L_0 = ___s0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3452614605, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, MonoEncoding_GetBytes_m1039747135_RuntimeMethod_var);
	}

IL_000e:
	{
		ByteU5BU5D_t4116647657* L_2 = ___bytes3;
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_3 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_3, _stringLiteral130595687, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, MonoEncoding_GetBytes_m1039747135_RuntimeMethod_var);
	}

IL_001d:
	{
		int32_t L_4 = ___charIndex1;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_5 = ___charIndex1;
		String_t* L_6 = ___s0;
		NullCheck(L_6);
		int32_t L_7 = String_get_Length_m3847582255(L_6, /*hidden argument*/NULL);
		if ((((int32_t)L_5) <= ((int32_t)L_7)))
		{
			goto IL_003f;
		}
	}

IL_002a:
	{
		String_t* L_8 = Strings_GetString_m904263021(NULL /*static, unused*/, _stringLiteral3201106496, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_9 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_9, _stringLiteral1070969872, L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, NULL, MonoEncoding_GetBytes_m1039747135_RuntimeMethod_var);
	}

IL_003f:
	{
		int32_t L_10 = ___charCount2;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_11 = ___charCount2;
		String_t* L_12 = ___s0;
		NullCheck(L_12);
		int32_t L_13 = String_get_Length_m3847582255(L_12, /*hidden argument*/NULL);
		int32_t L_14 = ___charIndex1;
		if ((((int32_t)L_11) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)L_14)))))
		{
			goto IL_0063;
		}
	}

IL_004e:
	{
		String_t* L_15 = Strings_GetString_m904263021(NULL /*static, unused*/, _stringLiteral335670123, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_16 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_16, _stringLiteral4160981599, L_15, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, NULL, MonoEncoding_GetBytes_m1039747135_RuntimeMethod_var);
	}

IL_0063:
	{
		int32_t L_17 = ___byteIndex4;
		if ((((int32_t)L_17) < ((int32_t)0)))
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = ___byteIndex4;
		ByteU5BU5D_t4116647657* L_19 = ___bytes3;
		NullCheck(L_19);
		if ((((int32_t)L_18) <= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_19)->max_length)))))))
		{
			goto IL_0085;
		}
	}

IL_0070:
	{
		String_t* L_20 = Strings_GetString_m904263021(NULL /*static, unused*/, _stringLiteral2941213349, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_21 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_21, _stringLiteral1758678393, L_20, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, NULL, MonoEncoding_GetBytes_m1039747135_RuntimeMethod_var);
	}

IL_0085:
	{
		ByteU5BU5D_t4116647657* L_22 = ___bytes3;
		NullCheck(L_22);
		int32_t L_23 = ___byteIndex4;
		int32_t L_24 = ___charCount2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_22)->max_length)))), (int32_t)L_23))) >= ((int32_t)L_24)))
		{
			goto IL_00a4;
		}
	}
	{
		String_t* L_25 = Strings_GetString_m904263021(NULL /*static, unused*/, _stringLiteral3497238838, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_26 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_26, L_25, _stringLiteral130595687, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, NULL, MonoEncoding_GetBytes_m1039747135_RuntimeMethod_var);
	}

IL_00a4:
	{
		int32_t L_27 = ___charCount2;
		if (!L_27)
		{
			goto IL_00af;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_28 = ___bytes3;
		NullCheck(L_28);
		int32_t L_29 = ___byteIndex4;
		if ((!(((uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_28)->max_length))))) == ((uint32_t)L_29))))
		{
			goto IL_00b1;
		}
	}

IL_00af:
	{
		return 0;
	}

IL_00b1:
	{
		String_t* L_30 = ___s0;
		V_1 = L_30;
		String_t* L_31 = V_1;
		V_0 = (Il2CppChar*)(((uintptr_t)L_31));
		Il2CppChar* L_32 = V_0;
		if (!L_32)
		{
			goto IL_00c1;
		}
	}
	{
		Il2CppChar* L_33 = V_0;
		int32_t L_34 = RuntimeHelpers_get_OffsetToStringData_m2192601476(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_33, (int32_t)L_34));
	}

IL_00c1:
	{
		ByteU5BU5D_t4116647657* L_35 = ___bytes3;
		ByteU5BU5D_t4116647657* L_36 = L_35;
		V_3 = L_36;
		if (!L_36)
		{
			goto IL_00cc;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_37 = V_3;
		NullCheck(L_37);
		if ((((int32_t)((int32_t)(((RuntimeArray *)L_37)->max_length)))))
		{
			goto IL_00d1;
		}
	}

IL_00cc:
	{
		V_2 = (uint8_t*)(((uintptr_t)0));
		goto IL_00da;
	}

IL_00d1:
	{
		ByteU5BU5D_t4116647657* L_38 = V_3;
		NullCheck(L_38);
		V_2 = (uint8_t*)(((uintptr_t)((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))));
	}

IL_00da:
	{
		Il2CppChar* L_39 = V_0;
		int32_t L_40 = ___charIndex1;
		int32_t L_41 = ___charCount2;
		uint8_t* L_42 = V_2;
		int32_t L_43 = ___byteIndex4;
		ByteU5BU5D_t4116647657* L_44 = ___bytes3;
		NullCheck(L_44);
		int32_t L_45 = ___byteIndex4;
		int32_t L_46 = VirtFuncInvoker4< int32_t, Il2CppChar*, int32_t, uint8_t*, int32_t >::Invoke(48 /* System.Int32 I18N.Common.MonoEncoding::GetBytesImpl(System.Char*,System.Int32,System.Byte*,System.Int32) */, __this, (Il2CppChar*)(Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_39, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)L_40)), (int32_t)2)))), L_41, (uint8_t*)(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_42, (int32_t)L_43)), ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_44)->max_length)))), (int32_t)L_45)));
		return L_46;
	}
}
// System.Int32 I18N.Common.MonoEncoding::GetByteCount(System.Char*,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t MonoEncoding_GetByteCount_m9795752 (MonoEncoding_t666837952 * __this, Il2CppChar* ___chars0, int32_t ___count1, const RuntimeMethod* method)
{
	{
		Il2CppChar* L_0 = ___chars0;
		int32_t L_1 = ___count1;
		int32_t L_2 = VirtFuncInvoker2< int32_t, Il2CppChar*, int32_t >::Invoke(47 /* System.Int32 I18N.Common.MonoEncoding::GetByteCountImpl(System.Char*,System.Int32) */, __this, (Il2CppChar*)(Il2CppChar*)L_0, L_1);
		return L_2;
	}
}
// System.Int32 I18N.Common.MonoEncoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t MonoEncoding_GetBytes_m1331685725 (MonoEncoding_t666837952 * __this, Il2CppChar* ___chars0, int32_t ___charCount1, uint8_t* ___bytes2, int32_t ___byteCount3, const RuntimeMethod* method)
{
	{
		Il2CppChar* L_0 = ___chars0;
		int32_t L_1 = ___charCount1;
		uint8_t* L_2 = ___bytes2;
		int32_t L_3 = ___byteCount3;
		int32_t L_4 = VirtFuncInvoker4< int32_t, Il2CppChar*, int32_t, uint8_t*, int32_t >::Invoke(48 /* System.Int32 I18N.Common.MonoEncoding::GetBytesImpl(System.Char*,System.Int32,System.Byte*,System.Int32) */, __this, (Il2CppChar*)(Il2CppChar*)L_0, L_1, (uint8_t*)(uint8_t*)L_2, L_3);
		return L_4;
	}
}
// System.Text.Encoder I18N.Common.MonoEncoding::GetEncoder()
extern "C" IL2CPP_METHOD_ATTR Encoder_t2198218980 * MonoEncoding_GetEncoder_m4164041363 (MonoEncoding_t666837952 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonoEncoding_GetEncoder_m4164041363_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonoEncodingDefaultEncoder_t3189165900 * L_0 = (MonoEncodingDefaultEncoder_t3189165900 *)il2cpp_codegen_object_new(MonoEncodingDefaultEncoder_t3189165900_il2cpp_TypeInfo_var);
		MonoEncodingDefaultEncoder__ctor_m3405161194(L_0, __this, /*hidden argument*/NULL);
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
// System.Void I18N.Common.MonoEncodingDefaultEncoder::.ctor(System.Text.Encoding)
extern "C" IL2CPP_METHOD_ATTR void MonoEncodingDefaultEncoder__ctor_m3405161194 (MonoEncodingDefaultEncoder_t3189165900 * __this, Encoding_t1523322056 * ___encoding0, const RuntimeMethod* method)
{
	{
		Encoding_t1523322056 * L_0 = ___encoding0;
		ReferenceSourceDefaultEncoder__ctor_m1134574118(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void I18N.Common.MonoEncodingDefaultEncoder::Convert(System.Char*,System.Int32,System.Byte*,System.Int32,System.Boolean,System.Int32&,System.Int32&,System.Boolean&)
extern "C" IL2CPP_METHOD_ATTR void MonoEncodingDefaultEncoder_Convert_m4280291917 (MonoEncodingDefaultEncoder_t3189165900 * __this, Il2CppChar* ___chars0, int32_t ___charCount1, uint8_t* ___bytes2, int32_t ___byteCount3, bool ___flush4, int32_t* ___charsUsed5, int32_t* ___bytesUsed6, bool* ___completed7, const RuntimeMethod* method)
{
	{
		Il2CppChar* L_0 = ___chars0;
		int32_t L_1 = ___charCount1;
		uint8_t* L_2 = ___bytes2;
		int32_t L_3 = ___byteCount3;
		MonoEncodingDefaultEncoder_CheckArguments_m3784884798(__this, (Il2CppChar*)(Il2CppChar*)L_0, L_1, (uint8_t*)(uint8_t*)L_2, L_3, /*hidden argument*/NULL);
		int32_t* L_4 = ___charsUsed5;
		int32_t L_5 = ___charCount1;
		*((int32_t*)(L_4)) = (int32_t)L_5;
	}

IL_000f:
	{
		int32_t* L_6 = ___bytesUsed6;
		Il2CppChar* L_7 = ___chars0;
		int32_t* L_8 = ___charsUsed5;
		bool L_9 = ___flush4;
		int32_t L_10 = VirtFuncInvoker3< int32_t, Il2CppChar*, int32_t, bool >::Invoke(6 /* System.Int32 System.Text.Encoder::GetByteCount(System.Char*,System.Int32,System.Boolean) */, __this, (Il2CppChar*)(Il2CppChar*)L_7, (*((int32_t*)L_8)), L_9);
		*((int32_t*)(L_6)) = (int32_t)L_10;
		int32_t* L_11 = ___bytesUsed6;
		int32_t L_12 = ___byteCount3;
		if ((((int32_t)(*((int32_t*)L_11))) <= ((int32_t)L_12)))
		{
			goto IL_0032;
		}
	}
	{
		___flush4 = (bool)0;
		int32_t* L_13 = ___charsUsed5;
		int32_t* L_14 = ___charsUsed5;
		*((int32_t*)(L_13)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_14))>>(int32_t)1));
		goto IL_000f;
	}

IL_0032:
	{
		bool* L_15 = ___completed7;
		int32_t* L_16 = ___charsUsed5;
		int32_t L_17 = ___charCount1;
		*((int8_t*)(L_15)) = (int8_t)((((int32_t)(*((int32_t*)L_16))) == ((int32_t)L_17))? 1 : 0);
		int32_t* L_18 = ___bytesUsed6;
		Il2CppChar* L_19 = ___chars0;
		int32_t* L_20 = ___charsUsed5;
		uint8_t* L_21 = ___bytes2;
		int32_t L_22 = ___byteCount3;
		bool L_23 = ___flush4;
		int32_t L_24 = VirtFuncInvoker5< int32_t, Il2CppChar*, int32_t, uint8_t*, int32_t, bool >::Invoke(8 /* System.Int32 System.Text.Encoder::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32,System.Boolean) */, __this, (Il2CppChar*)(Il2CppChar*)L_19, (*((int32_t*)L_20)), (uint8_t*)(uint8_t*)L_21, L_22, L_23);
		*((int32_t*)(L_18)) = (int32_t)L_24;
		return;
	}
}
// System.Void I18N.Common.MonoEncodingDefaultEncoder::Convert(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Int32,System.Boolean,System.Int32&,System.Int32&,System.Boolean&)
extern "C" IL2CPP_METHOD_ATTR void MonoEncodingDefaultEncoder_Convert_m1170139118 (MonoEncodingDefaultEncoder_t3189165900 * __this, CharU5BU5D_t3528271667* ___chars0, int32_t ___charIndex1, int32_t ___charCount2, ByteU5BU5D_t4116647657* ___bytes3, int32_t ___byteIndex4, int32_t ___byteCount5, bool ___flush6, int32_t* ___charsUsed7, int32_t* ___bytesUsed8, bool* ___completed9, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonoEncodingDefaultEncoder_Convert_m1170139118_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t3528271667* L_0 = ___chars0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral2698618727, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, MonoEncodingDefaultEncoder_Convert_m1170139118_RuntimeMethod_var);
	}

IL_000e:
	{
		ByteU5BU5D_t4116647657* L_2 = ___bytes3;
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_3 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_3, _stringLiteral130595687, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, MonoEncodingDefaultEncoder_Convert_m1170139118_RuntimeMethod_var);
	}

IL_001d:
	{
		int32_t L_4 = ___charIndex1;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_5 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_5, _stringLiteral1070969872, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, MonoEncodingDefaultEncoder_Convert_m1170139118_RuntimeMethod_var);
	}

IL_002c:
	{
		int32_t L_6 = ___charCount2;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		CharU5BU5D_t3528271667* L_7 = ___chars0;
		NullCheck(L_7);
		int32_t L_8 = ___charIndex1;
		int32_t L_9 = ___charCount2;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_7)->max_length))))) >= ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_9)))))
		{
			goto IL_0043;
		}
	}

IL_0038:
	{
		ArgumentOutOfRangeException_t777629997 * L_10 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_10, _stringLiteral4160981599, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, NULL, MonoEncodingDefaultEncoder_Convert_m1170139118_RuntimeMethod_var);
	}

IL_0043:
	{
		int32_t L_11 = ___byteIndex4;
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0053;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_12 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_12, _stringLiteral1758678393, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, NULL, MonoEncodingDefaultEncoder_Convert_m1170139118_RuntimeMethod_var);
	}

IL_0053:
	{
		int32_t L_13 = ___byteCount5;
		if ((((int32_t)L_13) < ((int32_t)0)))
		{
			goto IL_0063;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_14 = ___bytes3;
		NullCheck(L_14);
		int32_t L_15 = ___byteIndex4;
		int32_t L_16 = ___byteCount5;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_14)->max_length))))) >= ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)L_16)))))
		{
			goto IL_006e;
		}
	}

IL_0063:
	{
		ArgumentOutOfRangeException_t777629997 * L_17 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_17, _stringLiteral669612446, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, NULL, MonoEncodingDefaultEncoder_Convert_m1170139118_RuntimeMethod_var);
	}

IL_006e:
	{
		int32_t* L_18 = ___charsUsed7;
		int32_t L_19 = ___charCount2;
		*((int32_t*)(L_18)) = (int32_t)L_19;
	}

IL_0072:
	{
		int32_t* L_20 = ___bytesUsed8;
		CharU5BU5D_t3528271667* L_21 = ___chars0;
		int32_t L_22 = ___charIndex1;
		int32_t* L_23 = ___charsUsed7;
		bool L_24 = ___flush6;
		int32_t L_25 = VirtFuncInvoker4< int32_t, CharU5BU5D_t3528271667*, int32_t, int32_t, bool >::Invoke(5 /* System.Int32 System.Text.Encoder::GetByteCount(System.Char[],System.Int32,System.Int32,System.Boolean) */, __this, L_21, L_22, (*((int32_t*)L_23)), L_24);
		*((int32_t*)(L_20)) = (int32_t)L_25;
		int32_t* L_26 = ___bytesUsed8;
		int32_t L_27 = ___byteCount5;
		if ((((int32_t)(*((int32_t*)L_26))) <= ((int32_t)L_27)))
		{
			goto IL_0096;
		}
	}
	{
		___flush6 = (bool)0;
		int32_t* L_28 = ___charsUsed7;
		int32_t* L_29 = ___charsUsed7;
		*((int32_t*)(L_28)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_29))>>(int32_t)1));
		goto IL_0072;
	}

IL_0096:
	{
		bool* L_30 = ___completed9;
		int32_t* L_31 = ___charsUsed7;
		int32_t L_32 = ___charCount2;
		*((int8_t*)(L_30)) = (int8_t)((((int32_t)(*((int32_t*)L_31))) == ((int32_t)L_32))? 1 : 0);
		int32_t* L_33 = ___bytesUsed8;
		CharU5BU5D_t3528271667* L_34 = ___chars0;
		int32_t L_35 = ___charIndex1;
		int32_t* L_36 = ___charsUsed7;
		ByteU5BU5D_t4116647657* L_37 = ___bytes3;
		int32_t L_38 = ___byteIndex4;
		bool L_39 = ___flush6;
		int32_t L_40 = VirtFuncInvoker6< int32_t, CharU5BU5D_t3528271667*, int32_t, int32_t, ByteU5BU5D_t4116647657*, int32_t, bool >::Invoke(7 /* System.Int32 System.Text.Encoder::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Boolean) */, __this, L_34, L_35, (*((int32_t*)L_36)), L_37, L_38, L_39);
		*((int32_t*)(L_33)) = (int32_t)L_40;
		return;
	}
}
// System.Void I18N.Common.MonoEncodingDefaultEncoder::CheckArguments(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void MonoEncodingDefaultEncoder_CheckArguments_m3784884798 (MonoEncodingDefaultEncoder_t3189165900 * __this, Il2CppChar* ___chars0, int32_t ___charCount1, uint8_t* ___bytes2, int32_t ___byteCount3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonoEncodingDefaultEncoder_CheckArguments_m3784884798_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar* L_0 = ___chars0;
		if ((!(((uintptr_t)L_0) == ((uintptr_t)(((uintptr_t)0))))))
		{
			goto IL_0010;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral2698618727, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, MonoEncodingDefaultEncoder_CheckArguments_m3784884798_RuntimeMethod_var);
	}

IL_0010:
	{
		uint8_t* L_2 = ___bytes2;
		if ((!(((uintptr_t)L_2) == ((uintptr_t)(((uintptr_t)0))))))
		{
			goto IL_0020;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_3 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_3, _stringLiteral130595687, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, MonoEncodingDefaultEncoder_CheckArguments_m3784884798_RuntimeMethod_var);
	}

IL_0020:
	{
		int32_t L_4 = ___charCount1;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_5 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_5, _stringLiteral4160981599, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, MonoEncodingDefaultEncoder_CheckArguments_m3784884798_RuntimeMethod_var);
	}

IL_002f:
	{
		int32_t L_6 = ___byteCount3;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_003f;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_7 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_7, _stringLiteral669612446, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, MonoEncodingDefaultEncoder_CheckArguments_m3784884798_RuntimeMethod_var);
	}

IL_003f:
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
// System.Void I18N.Common.MonoSafeEncoder::.ctor(I18N.Common.MonoSafeEncoding)
extern "C" IL2CPP_METHOD_ATTR void MonoSafeEncoder__ctor_m2468034557 (MonoSafeEncoder_t3955416671 * __this, MonoSafeEncoding_t4071300459 * ___encoding0, const RuntimeMethod* method)
{
	{
		Encoder__ctor_m36314963(__this, /*hidden argument*/NULL);
		MonoSafeEncoding_t4071300459 * L_0 = ___encoding0;
		__this->set_encoding_2(L_0);
		return;
	}
}
// System.Void I18N.Common.MonoSafeEncoder::HandleFallback(System.Char[],System.Int32&,System.Int32&,System.Byte[],System.Int32&,System.Int32&,System.Object)
extern "C" IL2CPP_METHOD_ATTR void MonoSafeEncoder_HandleFallback_m2188456439 (MonoSafeEncoder_t3955416671 * __this, CharU5BU5D_t3528271667* ___chars0, int32_t* ___charIndex1, int32_t* ___charCount2, ByteU5BU5D_t4116647657* ___bytes3, int32_t* ___byteIndex4, int32_t* ___byteCount5, RuntimeObject * ___state6, const RuntimeMethod* method)
{
	EncoderFallbackBuffer_t3523102303 * V_0 = NULL;
	{
		EncoderFallbackBuffer_t3523102303 * L_0 = Encoder_get_FallbackBuffer_m1329536258(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		MonoSafeEncoding_t4071300459 * L_1 = __this->get_encoding_2();
		CharU5BU5D_t3528271667* L_2 = ___chars0;
		int32_t* L_3 = ___charIndex1;
		int32_t* L_4 = ___charCount2;
		ByteU5BU5D_t4116647657* L_5 = ___bytes3;
		int32_t* L_6 = ___byteIndex4;
		int32_t* L_7 = ___byteCount5;
		RuntimeObject * L_8 = ___state6;
		NullCheck(L_1);
		MonoSafeEncoding_HandleFallback_m3188140471(L_1, (EncoderFallbackBuffer_t3523102303 **)(&V_0), L_2, (int32_t*)L_3, (int32_t*)L_4, L_5, (int32_t*)L_6, (int32_t*)L_7, L_8, /*hidden argument*/NULL);
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
// System.Void I18N.Common.MonoSafeEncoding::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void MonoSafeEncoding__ctor_m729349758 (MonoSafeEncoding_t4071300459 * __this, int32_t ___codePage0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___codePage0;
		MonoSafeEncoding__ctor_m2010457750(__this, L_0, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void I18N.Common.MonoSafeEncoding::.ctor(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void MonoSafeEncoding__ctor_m2010457750 (MonoSafeEncoding_t4071300459 * __this, int32_t ___codePage0, int32_t ___windowsCodePage1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___codePage0;
		Encoding__ctor_m777655508(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___windowsCodePage1;
		__this->set_win_code_page_16(L_1);
		return;
	}
}
// System.Int32 I18N.Common.MonoSafeEncoding::get_WindowsCodePage()
extern "C" IL2CPP_METHOD_ATTR int32_t MonoSafeEncoding_get_WindowsCodePage_m92461845 (MonoSafeEncoding_t4071300459 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_win_code_page_16();
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = Encoding_get_WindowsCodePage_m2198574355(__this, /*hidden argument*/NULL);
		return L_1;
	}

IL_000f:
	{
		int32_t L_2 = __this->get_win_code_page_16();
		return L_2;
	}
}
// System.Int32 I18N.Common.MonoSafeEncoding::GetBytesInternal(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Boolean,System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t MonoSafeEncoding_GetBytesInternal_m410175382 (MonoSafeEncoding_t4071300459 * __this, CharU5BU5D_t3528271667* ___chars0, int32_t ___charIndex1, int32_t ___charCount2, ByteU5BU5D_t4116647657* ___bytes3, int32_t ___byteIndex4, bool ___flush5, RuntimeObject * ___state6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonoSafeEncoding_GetBytesInternal_m410175382_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t3489357830 * L_0 = (NotImplementedException_t3489357830 *)il2cpp_codegen_object_new(NotImplementedException_t3489357830_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m3095902440(L_0, _stringLiteral2445362708, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, MonoSafeEncoding_GetBytesInternal_m410175382_RuntimeMethod_var);
	}
}
// System.Void I18N.Common.MonoSafeEncoding::HandleFallback(System.Text.EncoderFallbackBuffer&,System.Char[],System.Int32&,System.Int32&,System.Byte[],System.Int32&,System.Int32&,System.Object)
extern "C" IL2CPP_METHOD_ATTR void MonoSafeEncoding_HandleFallback_m3188140471 (MonoSafeEncoding_t4071300459 * __this, EncoderFallbackBuffer_t3523102303 ** ___buffer0, CharU5BU5D_t3528271667* ___chars1, int32_t* ___charIndex2, int32_t* ___charCount3, ByteU5BU5D_t4116647657* ___bytes4, int32_t* ___byteIndex5, int32_t* ___byteCount6, RuntimeObject * ___state7, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonoSafeEncoding_HandleFallback_m3188140471_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t3528271667* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t G_B13_0 = 0;
	{
		EncoderFallbackBuffer_t3523102303 ** L_0 = ___buffer0;
		EncoderFallbackBuffer_t3523102303 * L_1 = *((EncoderFallbackBuffer_t3523102303 **)L_0);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		EncoderFallbackBuffer_t3523102303 ** L_2 = ___buffer0;
		EncoderFallback_t1188251036 * L_3 = Encoding_get_EncoderFallback_m4088593971(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		EncoderFallbackBuffer_t3523102303 * L_4 = VirtFuncInvoker0< EncoderFallbackBuffer_t3523102303 * >::Invoke(4 /* System.Text.EncoderFallbackBuffer System.Text.EncoderFallback::CreateFallbackBuffer() */, L_3);
		*((RuntimeObject **)(L_2)) = (RuntimeObject *)L_4;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_2), (RuntimeObject *)L_4);
	}

IL_0011:
	{
		int32_t* L_5 = ___charCount3;
		if ((((int32_t)(*((int32_t*)L_5))) <= ((int32_t)1)))
		{
			goto IL_0053;
		}
	}
	{
		CharU5BU5D_t3528271667* L_6 = ___chars1;
		int32_t* L_7 = ___charIndex2;
		NullCheck(L_6);
		int32_t L_8 = (*((int32_t*)L_7));
		uint16_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_10 = Char_IsSurrogate_m3686972571(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0053;
		}
	}
	{
		CharU5BU5D_t3528271667* L_11 = ___chars1;
		int32_t* L_12 = ___charIndex2;
		NullCheck(L_11);
		int32_t L_13 = ((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_12)), (int32_t)1));
		uint16_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_15 = Char_IsSurrogate_m3686972571(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0053;
		}
	}
	{
		EncoderFallbackBuffer_t3523102303 ** L_16 = ___buffer0;
		EncoderFallbackBuffer_t3523102303 * L_17 = *((EncoderFallbackBuffer_t3523102303 **)L_16);
		CharU5BU5D_t3528271667* L_18 = ___chars1;
		int32_t* L_19 = ___charIndex2;
		NullCheck(L_18);
		int32_t L_20 = (*((int32_t*)L_19));
		uint16_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		CharU5BU5D_t3528271667* L_22 = ___chars1;
		int32_t* L_23 = ___charIndex2;
		NullCheck(L_22);
		int32_t L_24 = ((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_23)), (int32_t)1));
		uint16_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		int32_t* L_26 = ___charIndex2;
		NullCheck(L_17);
		VirtFuncInvoker3< bool, Il2CppChar, Il2CppChar, int32_t >::Invoke(5 /* System.Boolean System.Text.EncoderFallbackBuffer::Fallback(System.Char,System.Char,System.Int32) */, L_17, L_21, L_25, (*((int32_t*)L_26)));
		int32_t* L_27 = ___charIndex2;
		int32_t* L_28 = ___charIndex2;
		*((int32_t*)(L_27)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_28)), (int32_t)1));
		int32_t* L_29 = ___charCount3;
		int32_t* L_30 = ___charCount3;
		*((int32_t*)(L_29)) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(*((int32_t*)L_30)), (int32_t)1));
		goto IL_0061;
	}

IL_0053:
	{
		EncoderFallbackBuffer_t3523102303 ** L_31 = ___buffer0;
		EncoderFallbackBuffer_t3523102303 * L_32 = *((EncoderFallbackBuffer_t3523102303 **)L_31);
		CharU5BU5D_t3528271667* L_33 = ___chars1;
		int32_t* L_34 = ___charIndex2;
		NullCheck(L_33);
		int32_t L_35 = (*((int32_t*)L_34));
		uint16_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		int32_t* L_37 = ___charIndex2;
		NullCheck(L_32);
		VirtFuncInvoker2< bool, Il2CppChar, int32_t >::Invoke(4 /* System.Boolean System.Text.EncoderFallbackBuffer::Fallback(System.Char,System.Int32) */, L_32, L_36, (*((int32_t*)L_37)));
	}

IL_0061:
	{
		EncoderFallbackBuffer_t3523102303 ** L_38 = ___buffer0;
		EncoderFallbackBuffer_t3523102303 * L_39 = *((EncoderFallbackBuffer_t3523102303 **)L_38);
		NullCheck(L_39);
		int32_t L_40 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Text.EncoderFallbackBuffer::get_Remaining() */, L_39);
		CharU5BU5D_t3528271667* L_41 = (CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)L_40);
		V_0 = L_41;
		V_1 = 0;
		goto IL_0080;
	}

IL_0072:
	{
		CharU5BU5D_t3528271667* L_42 = V_0;
		int32_t L_43 = V_1;
		int32_t L_44 = L_43;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
		EncoderFallbackBuffer_t3523102303 ** L_45 = ___buffer0;
		EncoderFallbackBuffer_t3523102303 * L_46 = *((EncoderFallbackBuffer_t3523102303 **)L_45);
		NullCheck(L_46);
		Il2CppChar L_47 = VirtFuncInvoker0< Il2CppChar >::Invoke(6 /* System.Char System.Text.EncoderFallbackBuffer::GetNextChar() */, L_46);
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(L_44), (Il2CppChar)L_47);
	}

IL_0080:
	{
		EncoderFallbackBuffer_t3523102303 ** L_48 = ___buffer0;
		EncoderFallbackBuffer_t3523102303 * L_49 = *((EncoderFallbackBuffer_t3523102303 **)L_48);
		NullCheck(L_49);
		int32_t L_50 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Text.EncoderFallbackBuffer::get_Remaining() */, L_49);
		if ((((int32_t)L_50) > ((int32_t)0)))
		{
			goto IL_0072;
		}
	}
	{
		RuntimeObject * L_51 = ___state7;
		if (!L_51)
		{
			goto IL_00a3;
		}
	}
	{
		CharU5BU5D_t3528271667* L_52 = V_0;
		CharU5BU5D_t3528271667* L_53 = V_0;
		NullCheck(L_53);
		ByteU5BU5D_t4116647657* L_54 = ___bytes4;
		int32_t* L_55 = ___byteIndex5;
		RuntimeObject * L_56 = ___state7;
		int32_t L_57 = VirtFuncInvoker7< int32_t, CharU5BU5D_t3528271667*, int32_t, int32_t, ByteU5BU5D_t4116647657*, int32_t, bool, RuntimeObject * >::Invoke(46 /* System.Int32 I18N.Common.MonoSafeEncoding::GetBytesInternal(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Boolean,System.Object) */, __this, L_52, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_53)->max_length)))), L_54, (*((int32_t*)L_55)), (bool)1, L_56);
		G_B13_0 = L_57;
		goto IL_00b3;
	}

IL_00a3:
	{
		CharU5BU5D_t3528271667* L_58 = V_0;
		CharU5BU5D_t3528271667* L_59 = V_0;
		NullCheck(L_59);
		ByteU5BU5D_t4116647657* L_60 = ___bytes4;
		int32_t* L_61 = ___byteIndex5;
		int32_t L_62 = VirtFuncInvoker5< int32_t, CharU5BU5D_t3528271667*, int32_t, int32_t, ByteU5BU5D_t4116647657*, int32_t >::Invoke(24 /* System.Int32 System.Text.Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32) */, __this, L_58, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_59)->max_length)))), L_60, (*((int32_t*)L_61)));
		G_B13_0 = L_62;
	}

IL_00b3:
	{
		V_2 = G_B13_0;
		int32_t* L_63 = ___byteIndex5;
		int32_t* L_64 = ___byteIndex5;
		int32_t L_65 = V_2;
		*((int32_t*)(L_63)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_64)), (int32_t)L_65));
		int32_t* L_66 = ___byteCount6;
		int32_t* L_67 = ___byteCount6;
		int32_t L_68 = V_2;
		*((int32_t*)(L_66)) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(*((int32_t*)L_67)), (int32_t)L_68));
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
// System.Void I18N.Common.ReferenceSourceDefaultEncoder::.ctor(System.Text.Encoding)
extern "C" IL2CPP_METHOD_ATTR void ReferenceSourceDefaultEncoder__ctor_m1134574118 (ReferenceSourceDefaultEncoder_t2102071145 * __this, Encoding_t1523322056 * ___encoding0, const RuntimeMethod* method)
{
	{
		Encoder__ctor_m36314963(__this, /*hidden argument*/NULL);
		Encoding_t1523322056 * L_0 = ___encoding0;
		__this->set_m_encoding_2(L_0);
		__this->set_m_hasInitializedEncoding_3((bool)1);
		return;
	}
}
// System.Void I18N.Common.ReferenceSourceDefaultEncoder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void ReferenceSourceDefaultEncoder__ctor_m1816492893 (ReferenceSourceDefaultEncoder_t2102071145 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReferenceSourceDefaultEncoder__ctor_m1816492893_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		Encoder__ctor_m36314963(__this, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral79347, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, ReferenceSourceDefaultEncoder__ctor_m1816492893_RuntimeMethod_var);
	}

IL_0014:
	{
		SerializationInfo_t950877179 * L_2 = ___info0;
		RuntimeTypeHandle_t3027515415  L_3 = { reinterpret_cast<intptr_t> (Encoding_t1523322056_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		RuntimeObject * L_5 = SerializationInfo_GetValue_m42271953(L_2, _stringLiteral3002372288, L_4, /*hidden argument*/NULL);
		__this->set_m_encoding_2(((Encoding_t1523322056 *)CastclassClass((RuntimeObject*)L_5, Encoding_t1523322056_il2cpp_TypeInfo_var)));
	}

IL_0034:
	try
	{ // begin try (depth: 1)
		SerializationInfo_t950877179 * L_6 = ___info0;
		RuntimeTypeHandle_t3027515415  L_7 = { reinterpret_cast<intptr_t> (Char_t3634460470_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		RuntimeObject * L_9 = SerializationInfo_GetValue_m42271953(L_6, _stringLiteral240690733, L_8, /*hidden argument*/NULL);
		__this->set_charLeftOver_4(((*(Il2CppChar*)((Il2CppChar*)UnBox(L_9, Char_t3634460470_il2cpp_TypeInfo_var)))));
		goto IL_0059;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (SerializationException_t3941511869_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0056;
		throw e;
	}

CATCH_0056:
	{ // begin catch(System.Runtime.Serialization.SerializationException)
		goto IL_0059;
	} // end catch (depth: 1)

IL_0059:
	{
		return;
	}
}
// System.Object I18N.Common.ReferenceSourceDefaultEncoder::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ReferenceSourceDefaultEncoder_GetRealObject_m979844503 (ReferenceSourceDefaultEncoder_t2102071145 * __this, StreamingContext_t3711869237  ___context0, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_m_hasInitializedEncoding_3();
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return __this;
	}

IL_000a:
	{
		Encoding_t1523322056 * L_1 = __this->get_m_encoding_2();
		NullCheck(L_1);
		Encoder_t2198218980 * L_2 = VirtFuncInvoker0< Encoder_t2198218980 * >::Invoke(39 /* System.Text.Encoder System.Text.Encoding::GetEncoder() */, L_1);
		return L_2;
	}
}
// System.Int32 I18N.Common.ReferenceSourceDefaultEncoder::GetByteCount(System.Char[],System.Int32,System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR int32_t ReferenceSourceDefaultEncoder_GetByteCount_m2444427135 (ReferenceSourceDefaultEncoder_t2102071145 * __this, CharU5BU5D_t3528271667* ___chars0, int32_t ___index1, int32_t ___count2, bool ___flush3, const RuntimeMethod* method)
{
	{
		Encoding_t1523322056 * L_0 = __this->get_m_encoding_2();
		CharU5BU5D_t3528271667* L_1 = ___chars0;
		int32_t L_2 = ___index1;
		int32_t L_3 = ___count2;
		NullCheck(L_0);
		int32_t L_4 = VirtFuncInvoker3< int32_t, CharU5BU5D_t3528271667*, int32_t, int32_t >::Invoke(19 /* System.Int32 System.Text.Encoding::GetByteCount(System.Char[],System.Int32,System.Int32) */, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// System.Int32 I18N.Common.ReferenceSourceDefaultEncoder::GetByteCount(System.Char*,System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR int32_t ReferenceSourceDefaultEncoder_GetByteCount_m1567272543 (ReferenceSourceDefaultEncoder_t2102071145 * __this, Il2CppChar* ___chars0, int32_t ___count1, bool ___flush2, const RuntimeMethod* method)
{
	{
		Encoding_t1523322056 * L_0 = __this->get_m_encoding_2();
		Il2CppChar* L_1 = ___chars0;
		int32_t L_2 = ___count1;
		NullCheck(L_0);
		int32_t L_3 = VirtFuncInvoker2< int32_t, Il2CppChar*, int32_t >::Invoke(20 /* System.Int32 System.Text.Encoding::GetByteCount(System.Char*,System.Int32) */, L_0, (Il2CppChar*)(Il2CppChar*)L_1, L_2);
		return L_3;
	}
}
// System.Int32 I18N.Common.ReferenceSourceDefaultEncoder::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR int32_t ReferenceSourceDefaultEncoder_GetBytes_m1093439251 (ReferenceSourceDefaultEncoder_t2102071145 * __this, CharU5BU5D_t3528271667* ___chars0, int32_t ___charIndex1, int32_t ___charCount2, ByteU5BU5D_t4116647657* ___bytes3, int32_t ___byteIndex4, bool ___flush5, const RuntimeMethod* method)
{
	{
		Encoding_t1523322056 * L_0 = __this->get_m_encoding_2();
		CharU5BU5D_t3528271667* L_1 = ___chars0;
		int32_t L_2 = ___charIndex1;
		int32_t L_3 = ___charCount2;
		ByteU5BU5D_t4116647657* L_4 = ___bytes3;
		int32_t L_5 = ___byteIndex4;
		NullCheck(L_0);
		int32_t L_6 = VirtFuncInvoker5< int32_t, CharU5BU5D_t3528271667*, int32_t, int32_t, ByteU5BU5D_t4116647657*, int32_t >::Invoke(24 /* System.Int32 System.Text.Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32) */, L_0, L_1, L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Int32 I18N.Common.ReferenceSourceDefaultEncoder::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR int32_t ReferenceSourceDefaultEncoder_GetBytes_m273775069 (ReferenceSourceDefaultEncoder_t2102071145 * __this, Il2CppChar* ___chars0, int32_t ___charCount1, uint8_t* ___bytes2, int32_t ___byteCount3, bool ___flush4, const RuntimeMethod* method)
{
	{
		Encoding_t1523322056 * L_0 = __this->get_m_encoding_2();
		Il2CppChar* L_1 = ___chars0;
		int32_t L_2 = ___charCount1;
		uint8_t* L_3 = ___bytes2;
		int32_t L_4 = ___byteCount3;
		NullCheck(L_0);
		int32_t L_5 = VirtFuncInvoker4< int32_t, Il2CppChar*, int32_t, uint8_t*, int32_t >::Invoke(28 /* System.Int32 System.Text.Encoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32) */, L_0, (Il2CppChar*)(Il2CppChar*)L_1, L_2, (uint8_t*)(uint8_t*)L_3, L_4);
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
// System.String I18N.Common.Strings::GetString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Strings_GetString_m904263021 (RuntimeObject * __this /* static, unused */, String_t* ___tag0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Strings_GetString_m904263021_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___tag0;
		bool L_1 = String_op_Equality_m920492651(NULL /*static, unused*/, L_0, _stringLiteral2941213349, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0050;
		}
	}
	{
		String_t* L_2 = ___tag0;
		bool L_3 = String_op_Equality_m920492651(NULL /*static, unused*/, L_2, _stringLiteral3497238838, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0056;
		}
	}
	{
		String_t* L_4 = ___tag0;
		bool L_5 = String_op_Equality_m920492651(NULL /*static, unused*/, L_4, _stringLiteral3526274078, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_005c;
		}
	}
	{
		String_t* L_6 = ___tag0;
		bool L_7 = String_op_Equality_m920492651(NULL /*static, unused*/, L_6, _stringLiteral3930346940, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0062;
		}
	}
	{
		String_t* L_8 = ___tag0;
		bool L_9 = String_op_Equality_m920492651(NULL /*static, unused*/, L_8, _stringLiteral3201106496, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0068;
		}
	}
	{
		String_t* L_10 = ___tag0;
		bool L_11 = String_op_Equality_m920492651(NULL /*static, unused*/, L_10, _stringLiteral335670123, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_006e;
		}
	}
	{
		goto IL_0074;
	}

IL_0050:
	{
		return _stringLiteral1952637542;
	}

IL_0056:
	{
		return _stringLiteral4107777865;
	}

IL_005c:
	{
		return _stringLiteral4041073501;
	}

IL_0062:
	{
		return _stringLiteral300347771;
	}

IL_0068:
	{
		return _stringLiteral2558109886;
	}

IL_006e:
	{
		return _stringLiteral554161341;
	}

IL_0074:
	{
		String_t* L_12 = ___tag0;
		String_t* L_13 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral989647706, L_12, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_14 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_14, L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, NULL, Strings_GetString_m904263021_RuntimeMethod_var);
	}
}
// System.Void I18N.Common.Strings::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Strings__ctor_m225068937 (Strings_t3742148504 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
