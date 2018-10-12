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

// System.ArgumentException
struct ArgumentException_t132251570;
// System.ArgumentNullException
struct ArgumentNullException_t1615371798;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t777629997;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.UriParser>[]
struct EntryU5BU5D_t2006152578;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.UriParser>
struct KeyCollection_t3865082170;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.UriParser>
struct ValueCollection_t1096483721;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t3046556399;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t3943099367;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Collections.Generic.Dictionary`2<System.String,System.UriParser>
struct Dictionary_2_t3675406699;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Collections.ICollection
struct ICollection_t3904884886;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.ComponentModel.Design.Serialization.InstanceDescriptor
struct InstanceDescriptor_t657473484;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t2998566513;
// System.ComponentModel.TypeConverter
struct TypeConverter_t2249118273;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.Exception
struct Exception_t;
// System.FormatException
struct FormatException_t154580423;
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
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.InvalidOperationException
struct InvalidOperationException_t56020091;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Reflection.Binder
struct Binder_t2999457153;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t5769829;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t2171992254;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Text.DecoderFallback
struct DecoderFallback_t3123823036;
// System.Text.DecoderReplacementFallback
struct DecoderReplacementFallback_t1462101135;
// System.Text.EncoderFallback
struct EncoderFallback_t1188251036;
// System.Text.EncoderReplacementFallback
struct EncoderReplacementFallback_t1623206753;
// System.Text.Encoding
struct Encoding_t1523322056;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Uri
struct Uri_t100236324;
// System.Uri/MoreInfo
struct MoreInfo_t2349391856;
// System.Uri/UriInfo
struct UriInfo_t1092684687;
// System.UriBuilder
struct UriBuilder_t579353065;
// System.UriFormatException
struct UriFormatException_t953270471;
// System.UriParser
struct UriParser_t3890150400;
// System.UriParser/BuiltInUriParser
struct BuiltInUriParser_t2965675049;
// System.UriTypeConverter
struct UriTypeConverter_t3695916615;
// System.Void
struct Void_t1185182177;

extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentNullException_t1615371798_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var;
extern RuntimeClass* BuiltInUriParser_t2965675049_il2cpp_TypeInfo_var;
extern RuntimeClass* ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var;
extern RuntimeClass* CharU5BU5D_t3528271667_il2cpp_TypeInfo_var;
extern RuntimeClass* Char_t3634460470_il2cpp_TypeInfo_var;
extern RuntimeClass* DecoderReplacementFallback_t1462101135_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t3675406699_il2cpp_TypeInfo_var;
extern RuntimeClass* EncoderReplacementFallback_t1623206753_il2cpp_TypeInfo_var;
extern RuntimeClass* Encoding_t1523322056_il2cpp_TypeInfo_var;
extern RuntimeClass* InstanceDescriptor_t657473484_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidOperationException_t56020091_il2cpp_TypeInfo_var;
extern RuntimeClass* Math_t1671470975_il2cpp_TypeInfo_var;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* StringU5BU5D_t1281789340_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* TypeConverter_t2249118273_il2cpp_TypeInfo_var;
extern RuntimeClass* TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* UriComponents_t814099658_il2cpp_TypeInfo_var;
extern RuntimeClass* UriFormatException_t953270471_il2cpp_TypeInfo_var;
extern RuntimeClass* UriHelper_t3559114794_il2cpp_TypeInfo_var;
extern RuntimeClass* UriKind_t3816567336_il2cpp_TypeInfo_var;
extern RuntimeClass* UriParser_t3890150400_il2cpp_TypeInfo_var;
extern RuntimeClass* Uri_t100236324_il2cpp_TypeInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255363____59F5BD34B6C013DEACC784F69C67E95150033A84_5_FieldInfo_var;
extern String_t* _stringLiteral1067913530;
extern String_t* _stringLiteral1272228687;
extern String_t* _stringLiteral1305937687;
extern String_t* _stringLiteral1333536866;
extern String_t* _stringLiteral15098073;
extern String_t* _stringLiteral1623832636;
extern String_t* _stringLiteral1629333464;
extern String_t* _stringLiteral1761547464;
extern String_t* _stringLiteral1814670653;
extern String_t* _stringLiteral1835507732;
extern String_t* _stringLiteral1973861653;
extern String_t* _stringLiteral2193443264;
extern String_t* _stringLiteral228733076;
extern String_t* _stringLiteral2299570518;
extern String_t* _stringLiteral2386815142;
extern String_t* _stringLiteral259003225;
extern String_t* _stringLiteral2864093058;
extern String_t* _stringLiteral2916056989;
extern String_t* _stringLiteral3034786082;
extern String_t* _stringLiteral3041793228;
extern String_t* _stringLiteral3139830536;
extern String_t* _stringLiteral3140485902;
extern String_t* _stringLiteral3205640774;
extern String_t* _stringLiteral3313977880;
extern String_t* _stringLiteral3425436495;
extern String_t* _stringLiteral3452614529;
extern String_t* _stringLiteral3452614550;
extern String_t* _stringLiteral3452614624;
extern String_t* _stringLiteral3452614643;
extern String_t* _stringLiteral3452614645;
extern String_t* _stringLiteral3455563721;
extern String_t* _stringLiteral3493618073;
extern String_t* _stringLiteral3917439587;
extern String_t* _stringLiteral4120481396;
extern String_t* _stringLiteral416809914;
extern String_t* _stringLiteral4255182569;
extern String_t* _stringLiteral441545435;
extern String_t* _stringLiteral446157247;
extern String_t* _stringLiteral652524914;
extern String_t* _stringLiteral757602046;
extern String_t* _stringLiteral76565016;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m2122824571_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m4151158592_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Count_m2482485624_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m2546549516_RuntimeMethod_var;
extern const RuntimeMethod* UriBuilder_ToString_m1259521445_RuntimeMethod_var;
extern const RuntimeMethod* UriBuilder__ctor_m377291920_RuntimeMethod_var;
extern const RuntimeMethod* UriBuilder_set_Scheme_m1372973315_RuntimeMethod_var;
extern const RuntimeMethod* UriHelper_EscapeString_m4264421271_RuntimeMethod_var;
extern const RuntimeMethod* UriHelper_UnescapeString_m2854369216_RuntimeMethod_var;
extern const RuntimeMethod* UriParser_GetComponents_m2774442831_RuntimeMethod_var;
extern const RuntimeMethod* UriParser_Resolve_m2644385416_RuntimeMethod_var;
extern const RuntimeMethod* UriTypeConverter_CanConvertFrom_m3865653726_RuntimeMethod_var;
extern const RuntimeMethod* UriTypeConverter_ConvertFrom_m3320288643_RuntimeMethod_var;
extern const RuntimeMethod* UriTypeConverter_ConvertTo_m3611054432_RuntimeMethod_var;
extern const RuntimeType* InstanceDescriptor_t657473484_0_0_0_var;
extern const RuntimeType* String_t_0_0_0_var;
extern const RuntimeType* UriKind_t3816567336_0_0_0_var;
extern const RuntimeType* Uri_t100236324_0_0_0_var;
extern const uint32_t BuiltInUriParser__ctor_m4154603378_MetadataUsageId;
extern const uint32_t UriBuilder_Init_m1237871254_MetadataUsageId;
extern const uint32_t UriBuilder_SetFieldsFromUri_m237881163_MetadataUsageId;
extern const uint32_t UriBuilder_ToString_m1259521445_MetadataUsageId;
extern const uint32_t UriBuilder__ctor_m2700491786_MetadataUsageId;
extern const uint32_t UriBuilder__ctor_m377291920_MetadataUsageId;
extern const uint32_t UriBuilder_get_Uri_m3514502640_MetadataUsageId;
extern const uint32_t UriBuilder_set_Host_m2493895927_MetadataUsageId;
extern const uint32_t UriBuilder_set_Path_m3892261086_MetadataUsageId;
extern const uint32_t UriBuilder_set_Scheme_m1372973315_MetadataUsageId;
extern const uint32_t UriHelper_EnsureDestinationSize_m2437550458_MetadataUsageId;
extern const uint32_t UriHelper_EscapeAsciiChar_m1759665887_MetadataUsageId;
extern const uint32_t UriHelper_EscapeString_m4264421271_MetadataUsageId;
extern const uint32_t UriHelper_Is3986Unreserved_m2430471531_MetadataUsageId;
extern const uint32_t UriHelper_IsReservedUnreservedOrHash_m1469489854_MetadataUsageId;
extern const uint32_t UriHelper_IsUnreserved_m2975029334_MetadataUsageId;
extern const uint32_t UriHelper_MatchUTF8Sequence_m1799602598_MetadataUsageId;
extern const uint32_t UriHelper_UnescapeString_m2854369216_MetadataUsageId;
extern const uint32_t UriHelper_UnescapeString_m3609332223_MetadataUsageId;
extern const uint32_t UriHelper__cctor_m3942811244_MetadataUsageId;
extern const uint32_t UriParser_FindOrFetchAsUnknownV1Syntax_m82912732_MetadataUsageId;
extern const uint32_t UriParser_GetComponents_m2774442831_MetadataUsageId;
extern const uint32_t UriParser_GetSyntax_m811769415_MetadataUsageId;
extern const uint32_t UriParser_Resolve_m2644385416_MetadataUsageId;
extern const uint32_t UriParser__cctor_m3655686731_MetadataUsageId;
extern const uint32_t UriParser__ctor_m1924902178_MetadataUsageId;
extern const uint32_t UriParser_get_ShouldUseLegacyV2Quirks_m1976807573_MetadataUsageId;
extern const uint32_t UriTypeConverter_CanConvertFrom_m3865653726_MetadataUsageId;
extern const uint32_t UriTypeConverter_CanConvertTo_m3367801835_MetadataUsageId;
extern const uint32_t UriTypeConverter_CanConvert_m4004296934_MetadataUsageId;
extern const uint32_t UriTypeConverter_ConvertFrom_m3320288643_MetadataUsageId;
extern const uint32_t UriTypeConverter_ConvertTo_m3611054432_MetadataUsageId;
extern const uint32_t UriTypeConverter__ctor_m148525934_MetadataUsageId;
struct CultureData_t1899656083_marshaled_com;
struct CultureData_t1899656083_marshaled_pinvoke;
struct CultureInfo_t4157843068_marshaled_com;
struct CultureInfo_t4157843068_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_t4116647657;
struct CharU5BU5D_t3528271667;
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
#ifndef DICTIONARY_2_T3675406699_H
#define DICTIONARY_2_T3675406699_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.UriParser>
struct  Dictionary_2_t3675406699  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t385246372* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t2006152578* ___entries_1;
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
	KeyCollection_t3865082170 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t1096483721 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t3675406699, ___buckets_0)); }
	inline Int32U5BU5D_t385246372* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t385246372** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t385246372* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t3675406699, ___entries_1)); }
	inline EntryU5BU5D_t2006152578* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t2006152578** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t2006152578* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t3675406699, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t3675406699, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3675406699, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3675406699, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3675406699, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3675406699, ___keys_7)); }
	inline KeyCollection_t3865082170 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t3865082170 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t3865082170 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3675406699, ___values_8)); }
	inline ValueCollection_t1096483721 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t1096483721 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t1096483721 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3675406699, ____syncRoot_9)); }
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
#endif // DICTIONARY_2_T3675406699_H
#ifndef INSTANCEDESCRIPTOR_T657473484_H
#define INSTANCEDESCRIPTOR_T657473484_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Design.Serialization.InstanceDescriptor
struct  InstanceDescriptor_t657473484  : public RuntimeObject
{
public:
	// System.Reflection.MemberInfo System.ComponentModel.Design.Serialization.InstanceDescriptor::member
	MemberInfo_t * ___member_0;
	// System.Collections.ICollection System.ComponentModel.Design.Serialization.InstanceDescriptor::arguments
	RuntimeObject* ___arguments_1;
	// System.Boolean System.ComponentModel.Design.Serialization.InstanceDescriptor::isComplete
	bool ___isComplete_2;

public:
	inline static int32_t get_offset_of_member_0() { return static_cast<int32_t>(offsetof(InstanceDescriptor_t657473484, ___member_0)); }
	inline MemberInfo_t * get_member_0() const { return ___member_0; }
	inline MemberInfo_t ** get_address_of_member_0() { return &___member_0; }
	inline void set_member_0(MemberInfo_t * value)
	{
		___member_0 = value;
		Il2CppCodeGenWriteBarrier((&___member_0), value);
	}

	inline static int32_t get_offset_of_arguments_1() { return static_cast<int32_t>(offsetof(InstanceDescriptor_t657473484, ___arguments_1)); }
	inline RuntimeObject* get_arguments_1() const { return ___arguments_1; }
	inline RuntimeObject** get_address_of_arguments_1() { return &___arguments_1; }
	inline void set_arguments_1(RuntimeObject* value)
	{
		___arguments_1 = value;
		Il2CppCodeGenWriteBarrier((&___arguments_1), value);
	}

	inline static int32_t get_offset_of_isComplete_2() { return static_cast<int32_t>(offsetof(InstanceDescriptor_t657473484, ___isComplete_2)); }
	inline bool get_isComplete_2() const { return ___isComplete_2; }
	inline bool* get_address_of_isComplete_2() { return &___isComplete_2; }
	inline void set_isComplete_2(bool value)
	{
		___isComplete_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INSTANCEDESCRIPTOR_T657473484_H
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
#ifndef MOREINFO_T2349391856_H
#define MOREINFO_T2349391856_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Uri/MoreInfo
struct  MoreInfo_t2349391856  : public RuntimeObject
{
public:
	// System.String System.Uri/MoreInfo::Path
	String_t* ___Path_0;
	// System.String System.Uri/MoreInfo::Query
	String_t* ___Query_1;
	// System.String System.Uri/MoreInfo::Fragment
	String_t* ___Fragment_2;
	// System.String System.Uri/MoreInfo::AbsoluteUri
	String_t* ___AbsoluteUri_3;
	// System.Int32 System.Uri/MoreInfo::Hash
	int32_t ___Hash_4;
	// System.String System.Uri/MoreInfo::RemoteUrl
	String_t* ___RemoteUrl_5;

public:
	inline static int32_t get_offset_of_Path_0() { return static_cast<int32_t>(offsetof(MoreInfo_t2349391856, ___Path_0)); }
	inline String_t* get_Path_0() const { return ___Path_0; }
	inline String_t** get_address_of_Path_0() { return &___Path_0; }
	inline void set_Path_0(String_t* value)
	{
		___Path_0 = value;
		Il2CppCodeGenWriteBarrier((&___Path_0), value);
	}

	inline static int32_t get_offset_of_Query_1() { return static_cast<int32_t>(offsetof(MoreInfo_t2349391856, ___Query_1)); }
	inline String_t* get_Query_1() const { return ___Query_1; }
	inline String_t** get_address_of_Query_1() { return &___Query_1; }
	inline void set_Query_1(String_t* value)
	{
		___Query_1 = value;
		Il2CppCodeGenWriteBarrier((&___Query_1), value);
	}

	inline static int32_t get_offset_of_Fragment_2() { return static_cast<int32_t>(offsetof(MoreInfo_t2349391856, ___Fragment_2)); }
	inline String_t* get_Fragment_2() const { return ___Fragment_2; }
	inline String_t** get_address_of_Fragment_2() { return &___Fragment_2; }
	inline void set_Fragment_2(String_t* value)
	{
		___Fragment_2 = value;
		Il2CppCodeGenWriteBarrier((&___Fragment_2), value);
	}

	inline static int32_t get_offset_of_AbsoluteUri_3() { return static_cast<int32_t>(offsetof(MoreInfo_t2349391856, ___AbsoluteUri_3)); }
	inline String_t* get_AbsoluteUri_3() const { return ___AbsoluteUri_3; }
	inline String_t** get_address_of_AbsoluteUri_3() { return &___AbsoluteUri_3; }
	inline void set_AbsoluteUri_3(String_t* value)
	{
		___AbsoluteUri_3 = value;
		Il2CppCodeGenWriteBarrier((&___AbsoluteUri_3), value);
	}

	inline static int32_t get_offset_of_Hash_4() { return static_cast<int32_t>(offsetof(MoreInfo_t2349391856, ___Hash_4)); }
	inline int32_t get_Hash_4() const { return ___Hash_4; }
	inline int32_t* get_address_of_Hash_4() { return &___Hash_4; }
	inline void set_Hash_4(int32_t value)
	{
		___Hash_4 = value;
	}

	inline static int32_t get_offset_of_RemoteUrl_5() { return static_cast<int32_t>(offsetof(MoreInfo_t2349391856, ___RemoteUrl_5)); }
	inline String_t* get_RemoteUrl_5() const { return ___RemoteUrl_5; }
	inline String_t** get_address_of_RemoteUrl_5() { return &___RemoteUrl_5; }
	inline void set_RemoteUrl_5(String_t* value)
	{
		___RemoteUrl_5 = value;
		Il2CppCodeGenWriteBarrier((&___RemoteUrl_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOREINFO_T2349391856_H
#ifndef URIBUILDER_T579353065_H
#define URIBUILDER_T579353065_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriBuilder
struct  UriBuilder_t579353065  : public RuntimeObject
{
public:
	// System.Boolean System.UriBuilder::_changed
	bool ____changed_0;
	// System.String System.UriBuilder::_fragment
	String_t* ____fragment_1;
	// System.String System.UriBuilder::_host
	String_t* ____host_2;
	// System.String System.UriBuilder::_password
	String_t* ____password_3;
	// System.String System.UriBuilder::_path
	String_t* ____path_4;
	// System.Int32 System.UriBuilder::_port
	int32_t ____port_5;
	// System.String System.UriBuilder::_query
	String_t* ____query_6;
	// System.String System.UriBuilder::_scheme
	String_t* ____scheme_7;
	// System.String System.UriBuilder::_schemeDelimiter
	String_t* ____schemeDelimiter_8;
	// System.Uri System.UriBuilder::_uri
	Uri_t100236324 * ____uri_9;
	// System.String System.UriBuilder::_username
	String_t* ____username_10;

public:
	inline static int32_t get_offset_of__changed_0() { return static_cast<int32_t>(offsetof(UriBuilder_t579353065, ____changed_0)); }
	inline bool get__changed_0() const { return ____changed_0; }
	inline bool* get_address_of__changed_0() { return &____changed_0; }
	inline void set__changed_0(bool value)
	{
		____changed_0 = value;
	}

	inline static int32_t get_offset_of__fragment_1() { return static_cast<int32_t>(offsetof(UriBuilder_t579353065, ____fragment_1)); }
	inline String_t* get__fragment_1() const { return ____fragment_1; }
	inline String_t** get_address_of__fragment_1() { return &____fragment_1; }
	inline void set__fragment_1(String_t* value)
	{
		____fragment_1 = value;
		Il2CppCodeGenWriteBarrier((&____fragment_1), value);
	}

	inline static int32_t get_offset_of__host_2() { return static_cast<int32_t>(offsetof(UriBuilder_t579353065, ____host_2)); }
	inline String_t* get__host_2() const { return ____host_2; }
	inline String_t** get_address_of__host_2() { return &____host_2; }
	inline void set__host_2(String_t* value)
	{
		____host_2 = value;
		Il2CppCodeGenWriteBarrier((&____host_2), value);
	}

	inline static int32_t get_offset_of__password_3() { return static_cast<int32_t>(offsetof(UriBuilder_t579353065, ____password_3)); }
	inline String_t* get__password_3() const { return ____password_3; }
	inline String_t** get_address_of__password_3() { return &____password_3; }
	inline void set__password_3(String_t* value)
	{
		____password_3 = value;
		Il2CppCodeGenWriteBarrier((&____password_3), value);
	}

	inline static int32_t get_offset_of__path_4() { return static_cast<int32_t>(offsetof(UriBuilder_t579353065, ____path_4)); }
	inline String_t* get__path_4() const { return ____path_4; }
	inline String_t** get_address_of__path_4() { return &____path_4; }
	inline void set__path_4(String_t* value)
	{
		____path_4 = value;
		Il2CppCodeGenWriteBarrier((&____path_4), value);
	}

	inline static int32_t get_offset_of__port_5() { return static_cast<int32_t>(offsetof(UriBuilder_t579353065, ____port_5)); }
	inline int32_t get__port_5() const { return ____port_5; }
	inline int32_t* get_address_of__port_5() { return &____port_5; }
	inline void set__port_5(int32_t value)
	{
		____port_5 = value;
	}

	inline static int32_t get_offset_of__query_6() { return static_cast<int32_t>(offsetof(UriBuilder_t579353065, ____query_6)); }
	inline String_t* get__query_6() const { return ____query_6; }
	inline String_t** get_address_of__query_6() { return &____query_6; }
	inline void set__query_6(String_t* value)
	{
		____query_6 = value;
		Il2CppCodeGenWriteBarrier((&____query_6), value);
	}

	inline static int32_t get_offset_of__scheme_7() { return static_cast<int32_t>(offsetof(UriBuilder_t579353065, ____scheme_7)); }
	inline String_t* get__scheme_7() const { return ____scheme_7; }
	inline String_t** get_address_of__scheme_7() { return &____scheme_7; }
	inline void set__scheme_7(String_t* value)
	{
		____scheme_7 = value;
		Il2CppCodeGenWriteBarrier((&____scheme_7), value);
	}

	inline static int32_t get_offset_of__schemeDelimiter_8() { return static_cast<int32_t>(offsetof(UriBuilder_t579353065, ____schemeDelimiter_8)); }
	inline String_t* get__schemeDelimiter_8() const { return ____schemeDelimiter_8; }
	inline String_t** get_address_of__schemeDelimiter_8() { return &____schemeDelimiter_8; }
	inline void set__schemeDelimiter_8(String_t* value)
	{
		____schemeDelimiter_8 = value;
		Il2CppCodeGenWriteBarrier((&____schemeDelimiter_8), value);
	}

	inline static int32_t get_offset_of__uri_9() { return static_cast<int32_t>(offsetof(UriBuilder_t579353065, ____uri_9)); }
	inline Uri_t100236324 * get__uri_9() const { return ____uri_9; }
	inline Uri_t100236324 ** get_address_of__uri_9() { return &____uri_9; }
	inline void set__uri_9(Uri_t100236324 * value)
	{
		____uri_9 = value;
		Il2CppCodeGenWriteBarrier((&____uri_9), value);
	}

	inline static int32_t get_offset_of__username_10() { return static_cast<int32_t>(offsetof(UriBuilder_t579353065, ____username_10)); }
	inline String_t* get__username_10() const { return ____username_10; }
	inline String_t** get_address_of__username_10() { return &____username_10; }
	inline void set__username_10(String_t* value)
	{
		____username_10 = value;
		Il2CppCodeGenWriteBarrier((&____username_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URIBUILDER_T579353065_H
#ifndef URIHELPER_T3559114794_H
#define URIHELPER_T3559114794_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriHelper
struct  UriHelper_t3559114794  : public RuntimeObject
{
public:

public:
};

struct UriHelper_t3559114794_StaticFields
{
public:
	// System.Char[] System.UriHelper::HexUpperChars
	CharU5BU5D_t3528271667* ___HexUpperChars_0;

public:
	inline static int32_t get_offset_of_HexUpperChars_0() { return static_cast<int32_t>(offsetof(UriHelper_t3559114794_StaticFields, ___HexUpperChars_0)); }
	inline CharU5BU5D_t3528271667* get_HexUpperChars_0() const { return ___HexUpperChars_0; }
	inline CharU5BU5D_t3528271667** get_address_of_HexUpperChars_0() { return &___HexUpperChars_0; }
	inline void set_HexUpperChars_0(CharU5BU5D_t3528271667* value)
	{
		___HexUpperChars_0 = value;
		Il2CppCodeGenWriteBarrier((&___HexUpperChars_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URIHELPER_T3559114794_H
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
#ifndef __STATICARRAYINITTYPESIZEU3D12_T2710994319_H
#define __STATICARRAYINITTYPESIZEU3D12_T2710994319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
struct  __StaticArrayInitTypeSizeU3D12_t2710994319 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_t2710994319__padding[12];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D12_T2710994319_H
#ifndef __STATICARRAYINITTYPESIZEU3D128_T531529102_H
#define __STATICARRAYINITTYPESIZEU3D128_T531529102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128
struct  __StaticArrayInitTypeSizeU3D128_t531529102 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D128_t531529102__padding[128];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D128_T531529102_H
#ifndef __STATICARRAYINITTYPESIZEU3D14_T3517563372_H
#define __STATICARRAYINITTYPESIZEU3D14_T3517563372_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=14
struct  __StaticArrayInitTypeSizeU3D14_t3517563372 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D14_t3517563372__padding[14];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D14_T3517563372_H
#ifndef __STATICARRAYINITTYPESIZEU3D256_T1757367633_H
#define __STATICARRAYINITTYPESIZEU3D256_T1757367633_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256
struct  __StaticArrayInitTypeSizeU3D256_t1757367633 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D256_t1757367633__padding[256];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D256_T1757367633_H
#ifndef __STATICARRAYINITTYPESIZEU3D3_T3217885683_H
#define __STATICARRAYINITTYPESIZEU3D3_T3217885683_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3
struct  __StaticArrayInitTypeSizeU3D3_t3217885683 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D3_t3217885683__padding[3];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D3_T3217885683_H
#ifndef __STATICARRAYINITTYPESIZEU3D32_T2711125391_H
#define __STATICARRAYINITTYPESIZEU3D32_T2711125391_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct  __StaticArrayInitTypeSizeU3D32_t2711125391 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_t2711125391__padding[32];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D32_T2711125391_H
#ifndef __STATICARRAYINITTYPESIZEU3D44_T3517366765_H
#define __STATICARRAYINITTYPESIZEU3D44_T3517366765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44
struct  __StaticArrayInitTypeSizeU3D44_t3517366765 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D44_t3517366765__padding[44];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D44_T3517366765_H
#ifndef __STATICARRAYINITTYPESIZEU3D6_T3217689076_H
#define __STATICARRAYINITTYPESIZEU3D6_T3217689076_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6
struct  __StaticArrayInitTypeSizeU3D6_t3217689076 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D6_t3217689076__padding[6];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D6_T3217689076_H
#ifndef __STATICARRAYINITTYPESIZEU3D9_T3218278899_H
#define __STATICARRAYINITTYPESIZEU3D9_T3218278899_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9
struct  __StaticArrayInitTypeSizeU3D9_t3218278899 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D9_t3218278899__padding[9];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D9_T3218278899_H
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
#ifndef ENCODERREPLACEMENTFALLBACK_T1623206753_H
#define ENCODERREPLACEMENTFALLBACK_T1623206753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderReplacementFallback
struct  EncoderReplacementFallback_t1623206753  : public EncoderFallback_t1188251036
{
public:
	// System.String System.Text.EncoderReplacementFallback::strDefault
	String_t* ___strDefault_4;

public:
	inline static int32_t get_offset_of_strDefault_4() { return static_cast<int32_t>(offsetof(EncoderReplacementFallback_t1623206753, ___strDefault_4)); }
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
#endif // ENCODERREPLACEMENTFALLBACK_T1623206753_H
#ifndef OFFSET_T4247613535_H
#define OFFSET_T4247613535_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Uri/Offset
#pragma pack(push, tp, 1)
struct  Offset_t4247613535 
{
public:
	// System.UInt16 System.Uri/Offset::Scheme
	uint16_t ___Scheme_0;
	// System.UInt16 System.Uri/Offset::User
	uint16_t ___User_1;
	// System.UInt16 System.Uri/Offset::Host
	uint16_t ___Host_2;
	// System.UInt16 System.Uri/Offset::PortValue
	uint16_t ___PortValue_3;
	// System.UInt16 System.Uri/Offset::Path
	uint16_t ___Path_4;
	// System.UInt16 System.Uri/Offset::Query
	uint16_t ___Query_5;
	// System.UInt16 System.Uri/Offset::Fragment
	uint16_t ___Fragment_6;
	// System.UInt16 System.Uri/Offset::End
	uint16_t ___End_7;

public:
	inline static int32_t get_offset_of_Scheme_0() { return static_cast<int32_t>(offsetof(Offset_t4247613535, ___Scheme_0)); }
	inline uint16_t get_Scheme_0() const { return ___Scheme_0; }
	inline uint16_t* get_address_of_Scheme_0() { return &___Scheme_0; }
	inline void set_Scheme_0(uint16_t value)
	{
		___Scheme_0 = value;
	}

	inline static int32_t get_offset_of_User_1() { return static_cast<int32_t>(offsetof(Offset_t4247613535, ___User_1)); }
	inline uint16_t get_User_1() const { return ___User_1; }
	inline uint16_t* get_address_of_User_1() { return &___User_1; }
	inline void set_User_1(uint16_t value)
	{
		___User_1 = value;
	}

	inline static int32_t get_offset_of_Host_2() { return static_cast<int32_t>(offsetof(Offset_t4247613535, ___Host_2)); }
	inline uint16_t get_Host_2() const { return ___Host_2; }
	inline uint16_t* get_address_of_Host_2() { return &___Host_2; }
	inline void set_Host_2(uint16_t value)
	{
		___Host_2 = value;
	}

	inline static int32_t get_offset_of_PortValue_3() { return static_cast<int32_t>(offsetof(Offset_t4247613535, ___PortValue_3)); }
	inline uint16_t get_PortValue_3() const { return ___PortValue_3; }
	inline uint16_t* get_address_of_PortValue_3() { return &___PortValue_3; }
	inline void set_PortValue_3(uint16_t value)
	{
		___PortValue_3 = value;
	}

	inline static int32_t get_offset_of_Path_4() { return static_cast<int32_t>(offsetof(Offset_t4247613535, ___Path_4)); }
	inline uint16_t get_Path_4() const { return ___Path_4; }
	inline uint16_t* get_address_of_Path_4() { return &___Path_4; }
	inline void set_Path_4(uint16_t value)
	{
		___Path_4 = value;
	}

	inline static int32_t get_offset_of_Query_5() { return static_cast<int32_t>(offsetof(Offset_t4247613535, ___Query_5)); }
	inline uint16_t get_Query_5() const { return ___Query_5; }
	inline uint16_t* get_address_of_Query_5() { return &___Query_5; }
	inline void set_Query_5(uint16_t value)
	{
		___Query_5 = value;
	}

	inline static int32_t get_offset_of_Fragment_6() { return static_cast<int32_t>(offsetof(Offset_t4247613535, ___Fragment_6)); }
	inline uint16_t get_Fragment_6() const { return ___Fragment_6; }
	inline uint16_t* get_address_of_Fragment_6() { return &___Fragment_6; }
	inline void set_Fragment_6(uint16_t value)
	{
		___Fragment_6 = value;
	}

	inline static int32_t get_offset_of_End_7() { return static_cast<int32_t>(offsetof(Offset_t4247613535, ___End_7)); }
	inline uint16_t get_End_7() const { return ___End_7; }
	inline uint16_t* get_address_of_End_7() { return &___End_7; }
	inline void set_End_7(uint16_t value)
	{
		___End_7 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OFFSET_T4247613535_H
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
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255363_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3057255363  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3057255363_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=14 <PrivateImplementationDetails>::0283A6AF88802AB45989B29549915BEA0F6CD515
	__StaticArrayInitTypeSizeU3D14_t3517563372  ___0283A6AF88802AB45989B29549915BEA0F6CD515_0;
	// System.Int64 <PrivateImplementationDetails>::03F4297FCC30D0FD5E420E5D26E7FA711167C7EF
	int64_t ___03F4297FCC30D0FD5E420E5D26E7FA711167C7EF_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9 <PrivateImplementationDetails>::1A39764B112685485A5BA7B2880D878B858C1A7A
	__StaticArrayInitTypeSizeU3D9_t3218278899  ___1A39764B112685485A5BA7B2880D878B858C1A7A_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::1A84029C80CB5518379F199F53FF08A7B764F8FD
	__StaticArrayInitTypeSizeU3D3_t3217885683  ___1A84029C80CB5518379F199F53FF08A7B764F8FD_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::3BE77BF818331C2D8400FFFFF9FADD3F16AD89AC
	__StaticArrayInitTypeSizeU3D12_t2710994319  ___3BE77BF818331C2D8400FFFFF9FADD3F16AD89AC_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::59F5BD34B6C013DEACC784F69C67E95150033A84
	__StaticArrayInitTypeSizeU3D32_t2711125391  ___59F5BD34B6C013DEACC784F69C67E95150033A84_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6 <PrivateImplementationDetails>::5BC3486B05BA8CF4689C7BDB198B3F477BB4E20C
	__StaticArrayInitTypeSizeU3D6_t3217689076  ___5BC3486B05BA8CF4689C7BDB198B3F477BB4E20C_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9 <PrivateImplementationDetails>::6D49C9D487D7AD3491ECE08732D68A593CC2038D
	__StaticArrayInitTypeSizeU3D9_t3218278899  ___6D49C9D487D7AD3491ECE08732D68A593CC2038D_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::6F3AD3DC3AF8047587C4C9D696EB68A01FEF796E
	__StaticArrayInitTypeSizeU3D128_t531529102  ___6F3AD3DC3AF8047587C4C9D696EB68A01FEF796E_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44 <PrivateImplementationDetails>::8E0EF3D67A3EB1863224EE3CACB424BC2F8CFBA3
	__StaticArrayInitTypeSizeU3D44_t3517366765  ___8E0EF3D67A3EB1863224EE3CACB424BC2F8CFBA3_9;
	// System.Int64 <PrivateImplementationDetails>::98A44A6F8606AE6F23FE230286C1D6FBCC407226
	int64_t ___98A44A6F8606AE6F23FE230286C1D6FBCC407226_10;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::ADDB8526F472C1C6D36DBD5A6E509D973CC34C92
	__StaticArrayInitTypeSizeU3D12_t2710994319  ___ADDB8526F472C1C6D36DBD5A6E509D973CC34C92_11;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536
	__StaticArrayInitTypeSizeU3D32_t2711125391  ___C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_12;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::CCEEADA43268372341F81AE0C9208C6856441C04
	__StaticArrayInitTypeSizeU3D128_t531529102  ___CCEEADA43268372341F81AE0C9208C6856441C04_13;
	// System.Int64 <PrivateImplementationDetails>::E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78
	int64_t ___E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_14;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::EC5842B3154E1AF94500B57220EB9F684BCCC42A
	__StaticArrayInitTypeSizeU3D32_t2711125391  ___EC5842B3154E1AF94500B57220EB9F684BCCC42A_15;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::EEAFE8C6E1AB017237567305EE925C976CDB6458
	__StaticArrayInitTypeSizeU3D256_t1757367633  ___EEAFE8C6E1AB017237567305EE925C976CDB6458_16;

public:
	inline static int32_t get_offset_of_U30283A6AF88802AB45989B29549915BEA0F6CD515_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255363_StaticFields, ___0283A6AF88802AB45989B29549915BEA0F6CD515_0)); }
	inline __StaticArrayInitTypeSizeU3D14_t3517563372  get_U30283A6AF88802AB45989B29549915BEA0F6CD515_0() const { return ___0283A6AF88802AB45989B29549915BEA0F6CD515_0; }
	inline __StaticArrayInitTypeSizeU3D14_t3517563372 * get_address_of_U30283A6AF88802AB45989B29549915BEA0F6CD515_0() { return &___0283A6AF88802AB45989B29549915BEA0F6CD515_0; }
	inline void set_U30283A6AF88802AB45989B29549915BEA0F6CD515_0(__StaticArrayInitTypeSizeU3D14_t3517563372  value)
	{
		___0283A6AF88802AB45989B29549915BEA0F6CD515_0 = value;
	}

	inline static int32_t get_offset_of_U303F4297FCC30D0FD5E420E5D26E7FA711167C7EF_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255363_StaticFields, ___03F4297FCC30D0FD5E420E5D26E7FA711167C7EF_1)); }
	inline int64_t get_U303F4297FCC30D0FD5E420E5D26E7FA711167C7EF_1() const { return ___03F4297FCC30D0FD5E420E5D26E7FA711167C7EF_1; }
	inline int64_t* get_address_of_U303F4297FCC30D0FD5E420E5D26E7FA711167C7EF_1() { return &___03F4297FCC30D0FD5E420E5D26E7FA711167C7EF_1; }
	inline void set_U303F4297FCC30D0FD5E420E5D26E7FA711167C7EF_1(int64_t value)
	{
		___03F4297FCC30D0FD5E420E5D26E7FA711167C7EF_1 = value;
	}

	inline static int32_t get_offset_of_U31A39764B112685485A5BA7B2880D878B858C1A7A_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255363_StaticFields, ___1A39764B112685485A5BA7B2880D878B858C1A7A_2)); }
	inline __StaticArrayInitTypeSizeU3D9_t3218278899  get_U31A39764B112685485A5BA7B2880D878B858C1A7A_2() const { return ___1A39764B112685485A5BA7B2880D878B858C1A7A_2; }
	inline __StaticArrayInitTypeSizeU3D9_t3218278899 * get_address_of_U31A39764B112685485A5BA7B2880D878B858C1A7A_2() { return &___1A39764B112685485A5BA7B2880D878B858C1A7A_2; }
	inline void set_U31A39764B112685485A5BA7B2880D878B858C1A7A_2(__StaticArrayInitTypeSizeU3D9_t3218278899  value)
	{
		___1A39764B112685485A5BA7B2880D878B858C1A7A_2 = value;
	}

	inline static int32_t get_offset_of_U31A84029C80CB5518379F199F53FF08A7B764F8FD_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255363_StaticFields, ___1A84029C80CB5518379F199F53FF08A7B764F8FD_3)); }
	inline __StaticArrayInitTypeSizeU3D3_t3217885683  get_U31A84029C80CB5518379F199F53FF08A7B764F8FD_3() const { return ___1A84029C80CB5518379F199F53FF08A7B764F8FD_3; }
	inline __StaticArrayInitTypeSizeU3D3_t3217885683 * get_address_of_U31A84029C80CB5518379F199F53FF08A7B764F8FD_3() { return &___1A84029C80CB5518379F199F53FF08A7B764F8FD_3; }
	inline void set_U31A84029C80CB5518379F199F53FF08A7B764F8FD_3(__StaticArrayInitTypeSizeU3D3_t3217885683  value)
	{
		___1A84029C80CB5518379F199F53FF08A7B764F8FD_3 = value;
	}

	inline static int32_t get_offset_of_U33BE77BF818331C2D8400FFFFF9FADD3F16AD89AC_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255363_StaticFields, ___3BE77BF818331C2D8400FFFFF9FADD3F16AD89AC_4)); }
	inline __StaticArrayInitTypeSizeU3D12_t2710994319  get_U33BE77BF818331C2D8400FFFFF9FADD3F16AD89AC_4() const { return ___3BE77BF818331C2D8400FFFFF9FADD3F16AD89AC_4; }
	inline __StaticArrayInitTypeSizeU3D12_t2710994319 * get_address_of_U33BE77BF818331C2D8400FFFFF9FADD3F16AD89AC_4() { return &___3BE77BF818331C2D8400FFFFF9FADD3F16AD89AC_4; }
	inline void set_U33BE77BF818331C2D8400FFFFF9FADD3F16AD89AC_4(__StaticArrayInitTypeSizeU3D12_t2710994319  value)
	{
		___3BE77BF818331C2D8400FFFFF9FADD3F16AD89AC_4 = value;
	}

	inline static int32_t get_offset_of_U359F5BD34B6C013DEACC784F69C67E95150033A84_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255363_StaticFields, ___59F5BD34B6C013DEACC784F69C67E95150033A84_5)); }
	inline __StaticArrayInitTypeSizeU3D32_t2711125391  get_U359F5BD34B6C013DEACC784F69C67E95150033A84_5() const { return ___59F5BD34B6C013DEACC784F69C67E95150033A84_5; }
	inline __StaticArrayInitTypeSizeU3D32_t2711125391 * get_address_of_U359F5BD34B6C013DEACC784F69C67E95150033A84_5() { return &___59F5BD34B6C013DEACC784F69C67E95150033A84_5; }
	inline void set_U359F5BD34B6C013DEACC784F69C67E95150033A84_5(__StaticArrayInitTypeSizeU3D32_t2711125391  value)
	{
		___59F5BD34B6C013DEACC784F69C67E95150033A84_5 = value;
	}

	inline static int32_t get_offset_of_U35BC3486B05BA8CF4689C7BDB198B3F477BB4E20C_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255363_StaticFields, ___5BC3486B05BA8CF4689C7BDB198B3F477BB4E20C_6)); }
	inline __StaticArrayInitTypeSizeU3D6_t3217689076  get_U35BC3486B05BA8CF4689C7BDB198B3F477BB4E20C_6() const { return ___5BC3486B05BA8CF4689C7BDB198B3F477BB4E20C_6; }
	inline __StaticArrayInitTypeSizeU3D6_t3217689076 * get_address_of_U35BC3486B05BA8CF4689C7BDB198B3F477BB4E20C_6() { return &___5BC3486B05BA8CF4689C7BDB198B3F477BB4E20C_6; }
	inline void set_U35BC3486B05BA8CF4689C7BDB198B3F477BB4E20C_6(__StaticArrayInitTypeSizeU3D6_t3217689076  value)
	{
		___5BC3486B05BA8CF4689C7BDB198B3F477BB4E20C_6 = value;
	}

	inline static int32_t get_offset_of_U36D49C9D487D7AD3491ECE08732D68A593CC2038D_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255363_StaticFields, ___6D49C9D487D7AD3491ECE08732D68A593CC2038D_7)); }
	inline __StaticArrayInitTypeSizeU3D9_t3218278899  get_U36D49C9D487D7AD3491ECE08732D68A593CC2038D_7() const { return ___6D49C9D487D7AD3491ECE08732D68A593CC2038D_7; }
	inline __StaticArrayInitTypeSizeU3D9_t3218278899 * get_address_of_U36D49C9D487D7AD3491ECE08732D68A593CC2038D_7() { return &___6D49C9D487D7AD3491ECE08732D68A593CC2038D_7; }
	inline void set_U36D49C9D487D7AD3491ECE08732D68A593CC2038D_7(__StaticArrayInitTypeSizeU3D9_t3218278899  value)
	{
		___6D49C9D487D7AD3491ECE08732D68A593CC2038D_7 = value;
	}

	inline static int32_t get_offset_of_U36F3AD3DC3AF8047587C4C9D696EB68A01FEF796E_8() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255363_StaticFields, ___6F3AD3DC3AF8047587C4C9D696EB68A01FEF796E_8)); }
	inline __StaticArrayInitTypeSizeU3D128_t531529102  get_U36F3AD3DC3AF8047587C4C9D696EB68A01FEF796E_8() const { return ___6F3AD3DC3AF8047587C4C9D696EB68A01FEF796E_8; }
	inline __StaticArrayInitTypeSizeU3D128_t531529102 * get_address_of_U36F3AD3DC3AF8047587C4C9D696EB68A01FEF796E_8() { return &___6F3AD3DC3AF8047587C4C9D696EB68A01FEF796E_8; }
	inline void set_U36F3AD3DC3AF8047587C4C9D696EB68A01FEF796E_8(__StaticArrayInitTypeSizeU3D128_t531529102  value)
	{
		___6F3AD3DC3AF8047587C4C9D696EB68A01FEF796E_8 = value;
	}

	inline static int32_t get_offset_of_U38E0EF3D67A3EB1863224EE3CACB424BC2F8CFBA3_9() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255363_StaticFields, ___8E0EF3D67A3EB1863224EE3CACB424BC2F8CFBA3_9)); }
	inline __StaticArrayInitTypeSizeU3D44_t3517366765  get_U38E0EF3D67A3EB1863224EE3CACB424BC2F8CFBA3_9() const { return ___8E0EF3D67A3EB1863224EE3CACB424BC2F8CFBA3_9; }
	inline __StaticArrayInitTypeSizeU3D44_t3517366765 * get_address_of_U38E0EF3D67A3EB1863224EE3CACB424BC2F8CFBA3_9() { return &___8E0EF3D67A3EB1863224EE3CACB424BC2F8CFBA3_9; }
	inline void set_U38E0EF3D67A3EB1863224EE3CACB424BC2F8CFBA3_9(__StaticArrayInitTypeSizeU3D44_t3517366765  value)
	{
		___8E0EF3D67A3EB1863224EE3CACB424BC2F8CFBA3_9 = value;
	}

	inline static int32_t get_offset_of_U398A44A6F8606AE6F23FE230286C1D6FBCC407226_10() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255363_StaticFields, ___98A44A6F8606AE6F23FE230286C1D6FBCC407226_10)); }
	inline int64_t get_U398A44A6F8606AE6F23FE230286C1D6FBCC407226_10() const { return ___98A44A6F8606AE6F23FE230286C1D6FBCC407226_10; }
	inline int64_t* get_address_of_U398A44A6F8606AE6F23FE230286C1D6FBCC407226_10() { return &___98A44A6F8606AE6F23FE230286C1D6FBCC407226_10; }
	inline void set_U398A44A6F8606AE6F23FE230286C1D6FBCC407226_10(int64_t value)
	{
		___98A44A6F8606AE6F23FE230286C1D6FBCC407226_10 = value;
	}

	inline static int32_t get_offset_of_ADDB8526F472C1C6D36DBD5A6E509D973CC34C92_11() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255363_StaticFields, ___ADDB8526F472C1C6D36DBD5A6E509D973CC34C92_11)); }
	inline __StaticArrayInitTypeSizeU3D12_t2710994319  get_ADDB8526F472C1C6D36DBD5A6E509D973CC34C92_11() const { return ___ADDB8526F472C1C6D36DBD5A6E509D973CC34C92_11; }
	inline __StaticArrayInitTypeSizeU3D12_t2710994319 * get_address_of_ADDB8526F472C1C6D36DBD5A6E509D973CC34C92_11() { return &___ADDB8526F472C1C6D36DBD5A6E509D973CC34C92_11; }
	inline void set_ADDB8526F472C1C6D36DBD5A6E509D973CC34C92_11(__StaticArrayInitTypeSizeU3D12_t2710994319  value)
	{
		___ADDB8526F472C1C6D36DBD5A6E509D973CC34C92_11 = value;
	}

	inline static int32_t get_offset_of_C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_12() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255363_StaticFields, ___C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_12)); }
	inline __StaticArrayInitTypeSizeU3D32_t2711125391  get_C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_12() const { return ___C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_12; }
	inline __StaticArrayInitTypeSizeU3D32_t2711125391 * get_address_of_C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_12() { return &___C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_12; }
	inline void set_C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_12(__StaticArrayInitTypeSizeU3D32_t2711125391  value)
	{
		___C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_12 = value;
	}

	inline static int32_t get_offset_of_CCEEADA43268372341F81AE0C9208C6856441C04_13() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255363_StaticFields, ___CCEEADA43268372341F81AE0C9208C6856441C04_13)); }
	inline __StaticArrayInitTypeSizeU3D128_t531529102  get_CCEEADA43268372341F81AE0C9208C6856441C04_13() const { return ___CCEEADA43268372341F81AE0C9208C6856441C04_13; }
	inline __StaticArrayInitTypeSizeU3D128_t531529102 * get_address_of_CCEEADA43268372341F81AE0C9208C6856441C04_13() { return &___CCEEADA43268372341F81AE0C9208C6856441C04_13; }
	inline void set_CCEEADA43268372341F81AE0C9208C6856441C04_13(__StaticArrayInitTypeSizeU3D128_t531529102  value)
	{
		___CCEEADA43268372341F81AE0C9208C6856441C04_13 = value;
	}

	inline static int32_t get_offset_of_E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_14() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255363_StaticFields, ___E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_14)); }
	inline int64_t get_E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_14() const { return ___E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_14; }
	inline int64_t* get_address_of_E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_14() { return &___E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_14; }
	inline void set_E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_14(int64_t value)
	{
		___E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_14 = value;
	}

	inline static int32_t get_offset_of_EC5842B3154E1AF94500B57220EB9F684BCCC42A_15() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255363_StaticFields, ___EC5842B3154E1AF94500B57220EB9F684BCCC42A_15)); }
	inline __StaticArrayInitTypeSizeU3D32_t2711125391  get_EC5842B3154E1AF94500B57220EB9F684BCCC42A_15() const { return ___EC5842B3154E1AF94500B57220EB9F684BCCC42A_15; }
	inline __StaticArrayInitTypeSizeU3D32_t2711125391 * get_address_of_EC5842B3154E1AF94500B57220EB9F684BCCC42A_15() { return &___EC5842B3154E1AF94500B57220EB9F684BCCC42A_15; }
	inline void set_EC5842B3154E1AF94500B57220EB9F684BCCC42A_15(__StaticArrayInitTypeSizeU3D32_t2711125391  value)
	{
		___EC5842B3154E1AF94500B57220EB9F684BCCC42A_15 = value;
	}

	inline static int32_t get_offset_of_EEAFE8C6E1AB017237567305EE925C976CDB6458_16() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255363_StaticFields, ___EEAFE8C6E1AB017237567305EE925C976CDB6458_16)); }
	inline __StaticArrayInitTypeSizeU3D256_t1757367633  get_EEAFE8C6E1AB017237567305EE925C976CDB6458_16() const { return ___EEAFE8C6E1AB017237567305EE925C976CDB6458_16; }
	inline __StaticArrayInitTypeSizeU3D256_t1757367633 * get_address_of_EEAFE8C6E1AB017237567305EE925C976CDB6458_16() { return &___EEAFE8C6E1AB017237567305EE925C976CDB6458_16; }
	inline void set_EEAFE8C6E1AB017237567305EE925C976CDB6458_16(__StaticArrayInitTypeSizeU3D256_t1757367633  value)
	{
		___EEAFE8C6E1AB017237567305EE925C976CDB6458_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255363_H
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
#ifndef TYPECONVERTER_T2249118273_H
#define TYPECONVERTER_T2249118273_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverter
struct  TypeConverter_t2249118273  : public RuntimeObject
{
public:

public:
};

struct TypeConverter_t2249118273_StaticFields
{
public:
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.TypeConverter::useCompatibleTypeConversion
	bool ___useCompatibleTypeConversion_1;

public:
	inline static int32_t get_offset_of_useCompatibleTypeConversion_1() { return static_cast<int32_t>(offsetof(TypeConverter_t2249118273_StaticFields, ___useCompatibleTypeConversion_1)); }
	inline bool get_useCompatibleTypeConversion_1() const { return ___useCompatibleTypeConversion_1; }
	inline bool* get_address_of_useCompatibleTypeConversion_1() { return &___useCompatibleTypeConversion_1; }
	inline void set_useCompatibleTypeConversion_1(bool value)
	{
		___useCompatibleTypeConversion_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECONVERTER_T2249118273_H
#ifndef FORMATEXCEPTION_T154580423_H
#define FORMATEXCEPTION_T154580423_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.FormatException
struct  FormatException_t154580423  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATEXCEPTION_T154580423_H
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
#ifndef RUNTIMEFIELDHANDLE_T1871169219_H
#define RUNTIMEFIELDHANDLE_T1871169219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t1871169219 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t1871169219, ___value_0)); }
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
#endif // RUNTIMEFIELDHANDLE_T1871169219_H
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
#ifndef UNESCAPEMODE_T3819662027_H
#define UNESCAPEMODE_T3819662027_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnescapeMode
struct  UnescapeMode_t3819662027 
{
public:
	// System.Int32 System.UnescapeMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UnescapeMode_t3819662027, ___value___2)); }
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
#endif // UNESCAPEMODE_T3819662027_H
#ifndef CHECK_T1263065566_H
#define CHECK_T1263065566_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Uri/Check
struct  Check_t1263065566 
{
public:
	// System.Int32 System.Uri/Check::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Check_t1263065566, ___value___2)); }
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
#endif // CHECK_T1263065566_H
#ifndef FLAGS_T2372798318_H
#define FLAGS_T2372798318_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Uri/Flags
struct  Flags_t2372798318 
{
public:
	// System.UInt64 System.Uri/Flags::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t2372798318, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FLAGS_T2372798318_H
#ifndef URIINFO_T1092684687_H
#define URIINFO_T1092684687_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Uri/UriInfo
struct  UriInfo_t1092684687  : public RuntimeObject
{
public:
	// System.String System.Uri/UriInfo::Host
	String_t* ___Host_0;
	// System.String System.Uri/UriInfo::ScopeId
	String_t* ___ScopeId_1;
	// System.String System.Uri/UriInfo::String
	String_t* ___String_2;
	// System.Uri/Offset System.Uri/UriInfo::Offset
	Offset_t4247613535  ___Offset_3;
	// System.String System.Uri/UriInfo::DnsSafeHost
	String_t* ___DnsSafeHost_4;
	// System.Uri/MoreInfo System.Uri/UriInfo::MoreInfo
	MoreInfo_t2349391856 * ___MoreInfo_5;

public:
	inline static int32_t get_offset_of_Host_0() { return static_cast<int32_t>(offsetof(UriInfo_t1092684687, ___Host_0)); }
	inline String_t* get_Host_0() const { return ___Host_0; }
	inline String_t** get_address_of_Host_0() { return &___Host_0; }
	inline void set_Host_0(String_t* value)
	{
		___Host_0 = value;
		Il2CppCodeGenWriteBarrier((&___Host_0), value);
	}

	inline static int32_t get_offset_of_ScopeId_1() { return static_cast<int32_t>(offsetof(UriInfo_t1092684687, ___ScopeId_1)); }
	inline String_t* get_ScopeId_1() const { return ___ScopeId_1; }
	inline String_t** get_address_of_ScopeId_1() { return &___ScopeId_1; }
	inline void set_ScopeId_1(String_t* value)
	{
		___ScopeId_1 = value;
		Il2CppCodeGenWriteBarrier((&___ScopeId_1), value);
	}

	inline static int32_t get_offset_of_String_2() { return static_cast<int32_t>(offsetof(UriInfo_t1092684687, ___String_2)); }
	inline String_t* get_String_2() const { return ___String_2; }
	inline String_t** get_address_of_String_2() { return &___String_2; }
	inline void set_String_2(String_t* value)
	{
		___String_2 = value;
		Il2CppCodeGenWriteBarrier((&___String_2), value);
	}

	inline static int32_t get_offset_of_Offset_3() { return static_cast<int32_t>(offsetof(UriInfo_t1092684687, ___Offset_3)); }
	inline Offset_t4247613535  get_Offset_3() const { return ___Offset_3; }
	inline Offset_t4247613535 * get_address_of_Offset_3() { return &___Offset_3; }
	inline void set_Offset_3(Offset_t4247613535  value)
	{
		___Offset_3 = value;
	}

	inline static int32_t get_offset_of_DnsSafeHost_4() { return static_cast<int32_t>(offsetof(UriInfo_t1092684687, ___DnsSafeHost_4)); }
	inline String_t* get_DnsSafeHost_4() const { return ___DnsSafeHost_4; }
	inline String_t** get_address_of_DnsSafeHost_4() { return &___DnsSafeHost_4; }
	inline void set_DnsSafeHost_4(String_t* value)
	{
		___DnsSafeHost_4 = value;
		Il2CppCodeGenWriteBarrier((&___DnsSafeHost_4), value);
	}

	inline static int32_t get_offset_of_MoreInfo_5() { return static_cast<int32_t>(offsetof(UriInfo_t1092684687, ___MoreInfo_5)); }
	inline MoreInfo_t2349391856 * get_MoreInfo_5() const { return ___MoreInfo_5; }
	inline MoreInfo_t2349391856 ** get_address_of_MoreInfo_5() { return &___MoreInfo_5; }
	inline void set_MoreInfo_5(MoreInfo_t2349391856 * value)
	{
		___MoreInfo_5 = value;
		Il2CppCodeGenWriteBarrier((&___MoreInfo_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URIINFO_T1092684687_H
#ifndef URICOMPONENTS_T814099658_H
#define URICOMPONENTS_T814099658_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriComponents
struct  UriComponents_t814099658 
{
public:
	// System.Int32 System.UriComponents::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriComponents_t814099658, ___value___2)); }
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
#endif // URICOMPONENTS_T814099658_H
#ifndef URIFORMAT_T2031163398_H
#define URIFORMAT_T2031163398_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriFormat
struct  UriFormat_t2031163398 
{
public:
	// System.Int32 System.UriFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriFormat_t2031163398, ___value___2)); }
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
#endif // URIFORMAT_T2031163398_H
#ifndef URIHOSTNAMETYPE_T881866241_H
#define URIHOSTNAMETYPE_T881866241_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriHostNameType
struct  UriHostNameType_t881866241 
{
public:
	// System.Int32 System.UriHostNameType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriHostNameType_t881866241, ___value___2)); }
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
#endif // URIHOSTNAMETYPE_T881866241_H
#ifndef URIIDNSCOPE_T1847433844_H
#define URIIDNSCOPE_T1847433844_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriIdnScope
struct  UriIdnScope_t1847433844 
{
public:
	// System.Int32 System.UriIdnScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriIdnScope_t1847433844, ___value___2)); }
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
#endif // URIIDNSCOPE_T1847433844_H
#ifndef URIKIND_T3816567336_H
#define URIKIND_T3816567336_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriKind
struct  UriKind_t3816567336 
{
public:
	// System.Int32 System.UriKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriKind_t3816567336, ___value___2)); }
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
#endif // URIKIND_T3816567336_H
#ifndef URIQUIRKSVERSION_T2829553638_H
#define URIQUIRKSVERSION_T2829553638_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriParser/UriQuirksVersion
struct  UriQuirksVersion_t2829553638 
{
public:
	// System.Int32 System.UriParser/UriQuirksVersion::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriQuirksVersion_t2829553638, ___value___2)); }
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
#endif // URIQUIRKSVERSION_T2829553638_H
#ifndef URISYNTAXFLAGS_T3715012245_H
#define URISYNTAXFLAGS_T3715012245_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriSyntaxFlags
struct  UriSyntaxFlags_t3715012245 
{
public:
	// System.Int32 System.UriSyntaxFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriSyntaxFlags_t3715012245, ___value___2)); }
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
#endif // URISYNTAXFLAGS_T3715012245_H
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
#ifndef URI_T100236324_H
#define URI_T100236324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Uri
struct  Uri_t100236324  : public RuntimeObject
{
public:
	// System.String System.Uri::m_String
	String_t* ___m_String_13;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_14;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t3890150400 * ___m_Syntax_15;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_16;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_17;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_t1092684687 * ___m_Info_18;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_19;

public:
	inline static int32_t get_offset_of_m_String_13() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___m_String_13)); }
	inline String_t* get_m_String_13() const { return ___m_String_13; }
	inline String_t** get_address_of_m_String_13() { return &___m_String_13; }
	inline void set_m_String_13(String_t* value)
	{
		___m_String_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_String_13), value);
	}

	inline static int32_t get_offset_of_m_originalUnicodeString_14() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___m_originalUnicodeString_14)); }
	inline String_t* get_m_originalUnicodeString_14() const { return ___m_originalUnicodeString_14; }
	inline String_t** get_address_of_m_originalUnicodeString_14() { return &___m_originalUnicodeString_14; }
	inline void set_m_originalUnicodeString_14(String_t* value)
	{
		___m_originalUnicodeString_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_originalUnicodeString_14), value);
	}

	inline static int32_t get_offset_of_m_Syntax_15() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___m_Syntax_15)); }
	inline UriParser_t3890150400 * get_m_Syntax_15() const { return ___m_Syntax_15; }
	inline UriParser_t3890150400 ** get_address_of_m_Syntax_15() { return &___m_Syntax_15; }
	inline void set_m_Syntax_15(UriParser_t3890150400 * value)
	{
		___m_Syntax_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_Syntax_15), value);
	}

	inline static int32_t get_offset_of_m_DnsSafeHost_16() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___m_DnsSafeHost_16)); }
	inline String_t* get_m_DnsSafeHost_16() const { return ___m_DnsSafeHost_16; }
	inline String_t** get_address_of_m_DnsSafeHost_16() { return &___m_DnsSafeHost_16; }
	inline void set_m_DnsSafeHost_16(String_t* value)
	{
		___m_DnsSafeHost_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_DnsSafeHost_16), value);
	}

	inline static int32_t get_offset_of_m_Flags_17() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___m_Flags_17)); }
	inline uint64_t get_m_Flags_17() const { return ___m_Flags_17; }
	inline uint64_t* get_address_of_m_Flags_17() { return &___m_Flags_17; }
	inline void set_m_Flags_17(uint64_t value)
	{
		___m_Flags_17 = value;
	}

	inline static int32_t get_offset_of_m_Info_18() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___m_Info_18)); }
	inline UriInfo_t1092684687 * get_m_Info_18() const { return ___m_Info_18; }
	inline UriInfo_t1092684687 ** get_address_of_m_Info_18() { return &___m_Info_18; }
	inline void set_m_Info_18(UriInfo_t1092684687 * value)
	{
		___m_Info_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_Info_18), value);
	}

	inline static int32_t get_offset_of_m_iriParsing_19() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___m_iriParsing_19)); }
	inline bool get_m_iriParsing_19() const { return ___m_iriParsing_19; }
	inline bool* get_address_of_m_iriParsing_19() { return &___m_iriParsing_19; }
	inline void set_m_iriParsing_19(bool value)
	{
		___m_iriParsing_19 = value;
	}
};

struct Uri_t100236324_StaticFields
{
public:
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_20;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_21;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_22;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_23;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_24;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_25;
	// System.Object System.Uri::s_initLock
	RuntimeObject * ___s_initLock_26;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t3528271667* ___HexLowerChars_27;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t3528271667* ____WSchars_28;

public:
	inline static int32_t get_offset_of_UriSchemeFile_0() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeFile_0)); }
	inline String_t* get_UriSchemeFile_0() const { return ___UriSchemeFile_0; }
	inline String_t** get_address_of_UriSchemeFile_0() { return &___UriSchemeFile_0; }
	inline void set_UriSchemeFile_0(String_t* value)
	{
		___UriSchemeFile_0 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFile_0), value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_1() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeFtp_1)); }
	inline String_t* get_UriSchemeFtp_1() const { return ___UriSchemeFtp_1; }
	inline String_t** get_address_of_UriSchemeFtp_1() { return &___UriSchemeFtp_1; }
	inline void set_UriSchemeFtp_1(String_t* value)
	{
		___UriSchemeFtp_1 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFtp_1), value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_2() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeGopher_2)); }
	inline String_t* get_UriSchemeGopher_2() const { return ___UriSchemeGopher_2; }
	inline String_t** get_address_of_UriSchemeGopher_2() { return &___UriSchemeGopher_2; }
	inline void set_UriSchemeGopher_2(String_t* value)
	{
		___UriSchemeGopher_2 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeGopher_2), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_3() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeHttp_3)); }
	inline String_t* get_UriSchemeHttp_3() const { return ___UriSchemeHttp_3; }
	inline String_t** get_address_of_UriSchemeHttp_3() { return &___UriSchemeHttp_3; }
	inline void set_UriSchemeHttp_3(String_t* value)
	{
		___UriSchemeHttp_3 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttp_3), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_4() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeHttps_4)); }
	inline String_t* get_UriSchemeHttps_4() const { return ___UriSchemeHttps_4; }
	inline String_t** get_address_of_UriSchemeHttps_4() { return &___UriSchemeHttps_4; }
	inline void set_UriSchemeHttps_4(String_t* value)
	{
		___UriSchemeHttps_4 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttps_4), value);
	}

	inline static int32_t get_offset_of_UriSchemeWs_5() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeWs_5)); }
	inline String_t* get_UriSchemeWs_5() const { return ___UriSchemeWs_5; }
	inline String_t** get_address_of_UriSchemeWs_5() { return &___UriSchemeWs_5; }
	inline void set_UriSchemeWs_5(String_t* value)
	{
		___UriSchemeWs_5 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeWs_5), value);
	}

	inline static int32_t get_offset_of_UriSchemeWss_6() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeWss_6)); }
	inline String_t* get_UriSchemeWss_6() const { return ___UriSchemeWss_6; }
	inline String_t** get_address_of_UriSchemeWss_6() { return &___UriSchemeWss_6; }
	inline void set_UriSchemeWss_6(String_t* value)
	{
		___UriSchemeWss_6 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeWss_6), value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_7() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeMailto_7)); }
	inline String_t* get_UriSchemeMailto_7() const { return ___UriSchemeMailto_7; }
	inline String_t** get_address_of_UriSchemeMailto_7() { return &___UriSchemeMailto_7; }
	inline void set_UriSchemeMailto_7(String_t* value)
	{
		___UriSchemeMailto_7 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeMailto_7), value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_8() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNews_8)); }
	inline String_t* get_UriSchemeNews_8() const { return ___UriSchemeNews_8; }
	inline String_t** get_address_of_UriSchemeNews_8() { return &___UriSchemeNews_8; }
	inline void set_UriSchemeNews_8(String_t* value)
	{
		___UriSchemeNews_8 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNews_8), value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_9() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNntp_9)); }
	inline String_t* get_UriSchemeNntp_9() const { return ___UriSchemeNntp_9; }
	inline String_t** get_address_of_UriSchemeNntp_9() { return &___UriSchemeNntp_9; }
	inline void set_UriSchemeNntp_9(String_t* value)
	{
		___UriSchemeNntp_9 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNntp_9), value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_10() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNetTcp_10)); }
	inline String_t* get_UriSchemeNetTcp_10() const { return ___UriSchemeNetTcp_10; }
	inline String_t** get_address_of_UriSchemeNetTcp_10() { return &___UriSchemeNetTcp_10; }
	inline void set_UriSchemeNetTcp_10(String_t* value)
	{
		___UriSchemeNetTcp_10 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNetTcp_10), value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_11() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNetPipe_11)); }
	inline String_t* get_UriSchemeNetPipe_11() const { return ___UriSchemeNetPipe_11; }
	inline String_t** get_address_of_UriSchemeNetPipe_11() { return &___UriSchemeNetPipe_11; }
	inline void set_UriSchemeNetPipe_11(String_t* value)
	{
		___UriSchemeNetPipe_11 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNetPipe_11), value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_12() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___SchemeDelimiter_12)); }
	inline String_t* get_SchemeDelimiter_12() const { return ___SchemeDelimiter_12; }
	inline String_t** get_address_of_SchemeDelimiter_12() { return &___SchemeDelimiter_12; }
	inline void set_SchemeDelimiter_12(String_t* value)
	{
		___SchemeDelimiter_12 = value;
		Il2CppCodeGenWriteBarrier((&___SchemeDelimiter_12), value);
	}

	inline static int32_t get_offset_of_s_ConfigInitialized_20() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___s_ConfigInitialized_20)); }
	inline bool get_s_ConfigInitialized_20() const { return ___s_ConfigInitialized_20; }
	inline bool* get_address_of_s_ConfigInitialized_20() { return &___s_ConfigInitialized_20; }
	inline void set_s_ConfigInitialized_20(bool value)
	{
		___s_ConfigInitialized_20 = value;
	}

	inline static int32_t get_offset_of_s_ConfigInitializing_21() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___s_ConfigInitializing_21)); }
	inline bool get_s_ConfigInitializing_21() const { return ___s_ConfigInitializing_21; }
	inline bool* get_address_of_s_ConfigInitializing_21() { return &___s_ConfigInitializing_21; }
	inline void set_s_ConfigInitializing_21(bool value)
	{
		___s_ConfigInitializing_21 = value;
	}

	inline static int32_t get_offset_of_s_IdnScope_22() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___s_IdnScope_22)); }
	inline int32_t get_s_IdnScope_22() const { return ___s_IdnScope_22; }
	inline int32_t* get_address_of_s_IdnScope_22() { return &___s_IdnScope_22; }
	inline void set_s_IdnScope_22(int32_t value)
	{
		___s_IdnScope_22 = value;
	}

	inline static int32_t get_offset_of_s_IriParsing_23() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___s_IriParsing_23)); }
	inline bool get_s_IriParsing_23() const { return ___s_IriParsing_23; }
	inline bool* get_address_of_s_IriParsing_23() { return &___s_IriParsing_23; }
	inline void set_s_IriParsing_23(bool value)
	{
		___s_IriParsing_23 = value;
	}

	inline static int32_t get_offset_of_useDotNetRelativeOrAbsolute_24() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___useDotNetRelativeOrAbsolute_24)); }
	inline bool get_useDotNetRelativeOrAbsolute_24() const { return ___useDotNetRelativeOrAbsolute_24; }
	inline bool* get_address_of_useDotNetRelativeOrAbsolute_24() { return &___useDotNetRelativeOrAbsolute_24; }
	inline void set_useDotNetRelativeOrAbsolute_24(bool value)
	{
		___useDotNetRelativeOrAbsolute_24 = value;
	}

	inline static int32_t get_offset_of_IsWindowsFileSystem_25() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___IsWindowsFileSystem_25)); }
	inline bool get_IsWindowsFileSystem_25() const { return ___IsWindowsFileSystem_25; }
	inline bool* get_address_of_IsWindowsFileSystem_25() { return &___IsWindowsFileSystem_25; }
	inline void set_IsWindowsFileSystem_25(bool value)
	{
		___IsWindowsFileSystem_25 = value;
	}

	inline static int32_t get_offset_of_s_initLock_26() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___s_initLock_26)); }
	inline RuntimeObject * get_s_initLock_26() const { return ___s_initLock_26; }
	inline RuntimeObject ** get_address_of_s_initLock_26() { return &___s_initLock_26; }
	inline void set_s_initLock_26(RuntimeObject * value)
	{
		___s_initLock_26 = value;
		Il2CppCodeGenWriteBarrier((&___s_initLock_26), value);
	}

	inline static int32_t get_offset_of_HexLowerChars_27() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___HexLowerChars_27)); }
	inline CharU5BU5D_t3528271667* get_HexLowerChars_27() const { return ___HexLowerChars_27; }
	inline CharU5BU5D_t3528271667** get_address_of_HexLowerChars_27() { return &___HexLowerChars_27; }
	inline void set_HexLowerChars_27(CharU5BU5D_t3528271667* value)
	{
		___HexLowerChars_27 = value;
		Il2CppCodeGenWriteBarrier((&___HexLowerChars_27), value);
	}

	inline static int32_t get_offset_of__WSchars_28() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ____WSchars_28)); }
	inline CharU5BU5D_t3528271667* get__WSchars_28() const { return ____WSchars_28; }
	inline CharU5BU5D_t3528271667** get_address_of__WSchars_28() { return &____WSchars_28; }
	inline void set__WSchars_28(CharU5BU5D_t3528271667* value)
	{
		____WSchars_28 = value;
		Il2CppCodeGenWriteBarrier((&____WSchars_28), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URI_T100236324_H
#ifndef URIFORMATEXCEPTION_T953270471_H
#define URIFORMATEXCEPTION_T953270471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriFormatException
struct  UriFormatException_t953270471  : public FormatException_t154580423
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URIFORMATEXCEPTION_T953270471_H
#ifndef URIPARSER_T3890150400_H
#define URIPARSER_T3890150400_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriParser
struct  UriParser_t3890150400  : public RuntimeObject
{
public:
	// System.UriSyntaxFlags System.UriParser::m_Flags
	int32_t ___m_Flags_2;
	// System.UriSyntaxFlags modreq(System.Runtime.CompilerServices.IsVolatile) System.UriParser::m_UpdatableFlags
	int32_t ___m_UpdatableFlags_3;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.UriParser::m_UpdatableFlagsUsed
	bool ___m_UpdatableFlagsUsed_4;
	// System.Int32 System.UriParser::m_Port
	int32_t ___m_Port_5;
	// System.String System.UriParser::m_Scheme
	String_t* ___m_Scheme_6;

public:
	inline static int32_t get_offset_of_m_Flags_2() { return static_cast<int32_t>(offsetof(UriParser_t3890150400, ___m_Flags_2)); }
	inline int32_t get_m_Flags_2() const { return ___m_Flags_2; }
	inline int32_t* get_address_of_m_Flags_2() { return &___m_Flags_2; }
	inline void set_m_Flags_2(int32_t value)
	{
		___m_Flags_2 = value;
	}

	inline static int32_t get_offset_of_m_UpdatableFlags_3() { return static_cast<int32_t>(offsetof(UriParser_t3890150400, ___m_UpdatableFlags_3)); }
	inline int32_t get_m_UpdatableFlags_3() const { return ___m_UpdatableFlags_3; }
	inline int32_t* get_address_of_m_UpdatableFlags_3() { return &___m_UpdatableFlags_3; }
	inline void set_m_UpdatableFlags_3(int32_t value)
	{
		___m_UpdatableFlags_3 = value;
	}

	inline static int32_t get_offset_of_m_UpdatableFlagsUsed_4() { return static_cast<int32_t>(offsetof(UriParser_t3890150400, ___m_UpdatableFlagsUsed_4)); }
	inline bool get_m_UpdatableFlagsUsed_4() const { return ___m_UpdatableFlagsUsed_4; }
	inline bool* get_address_of_m_UpdatableFlagsUsed_4() { return &___m_UpdatableFlagsUsed_4; }
	inline void set_m_UpdatableFlagsUsed_4(bool value)
	{
		___m_UpdatableFlagsUsed_4 = value;
	}

	inline static int32_t get_offset_of_m_Port_5() { return static_cast<int32_t>(offsetof(UriParser_t3890150400, ___m_Port_5)); }
	inline int32_t get_m_Port_5() const { return ___m_Port_5; }
	inline int32_t* get_address_of_m_Port_5() { return &___m_Port_5; }
	inline void set_m_Port_5(int32_t value)
	{
		___m_Port_5 = value;
	}

	inline static int32_t get_offset_of_m_Scheme_6() { return static_cast<int32_t>(offsetof(UriParser_t3890150400, ___m_Scheme_6)); }
	inline String_t* get_m_Scheme_6() const { return ___m_Scheme_6; }
	inline String_t** get_address_of_m_Scheme_6() { return &___m_Scheme_6; }
	inline void set_m_Scheme_6(String_t* value)
	{
		___m_Scheme_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Scheme_6), value);
	}
};

struct UriParser_t3890150400_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.UriParser> System.UriParser::m_Table
	Dictionary_2_t3675406699 * ___m_Table_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.UriParser> System.UriParser::m_TempTable
	Dictionary_2_t3675406699 * ___m_TempTable_1;
	// System.UriParser System.UriParser::HttpUri
	UriParser_t3890150400 * ___HttpUri_7;
	// System.UriParser System.UriParser::HttpsUri
	UriParser_t3890150400 * ___HttpsUri_8;
	// System.UriParser System.UriParser::WsUri
	UriParser_t3890150400 * ___WsUri_9;
	// System.UriParser System.UriParser::WssUri
	UriParser_t3890150400 * ___WssUri_10;
	// System.UriParser System.UriParser::FtpUri
	UriParser_t3890150400 * ___FtpUri_11;
	// System.UriParser System.UriParser::FileUri
	UriParser_t3890150400 * ___FileUri_12;
	// System.UriParser System.UriParser::GopherUri
	UriParser_t3890150400 * ___GopherUri_13;
	// System.UriParser System.UriParser::NntpUri
	UriParser_t3890150400 * ___NntpUri_14;
	// System.UriParser System.UriParser::NewsUri
	UriParser_t3890150400 * ___NewsUri_15;
	// System.UriParser System.UriParser::MailToUri
	UriParser_t3890150400 * ___MailToUri_16;
	// System.UriParser System.UriParser::UuidUri
	UriParser_t3890150400 * ___UuidUri_17;
	// System.UriParser System.UriParser::TelnetUri
	UriParser_t3890150400 * ___TelnetUri_18;
	// System.UriParser System.UriParser::LdapUri
	UriParser_t3890150400 * ___LdapUri_19;
	// System.UriParser System.UriParser::NetTcpUri
	UriParser_t3890150400 * ___NetTcpUri_20;
	// System.UriParser System.UriParser::NetPipeUri
	UriParser_t3890150400 * ___NetPipeUri_21;
	// System.UriParser System.UriParser::VsMacrosUri
	UriParser_t3890150400 * ___VsMacrosUri_22;
	// System.UriParser/UriQuirksVersion System.UriParser::s_QuirksVersion
	int32_t ___s_QuirksVersion_23;
	// System.UriSyntaxFlags System.UriParser::HttpSyntaxFlags
	int32_t ___HttpSyntaxFlags_24;
	// System.UriSyntaxFlags System.UriParser::FileSyntaxFlags
	int32_t ___FileSyntaxFlags_25;

public:
	inline static int32_t get_offset_of_m_Table_0() { return static_cast<int32_t>(offsetof(UriParser_t3890150400_StaticFields, ___m_Table_0)); }
	inline Dictionary_2_t3675406699 * get_m_Table_0() const { return ___m_Table_0; }
	inline Dictionary_2_t3675406699 ** get_address_of_m_Table_0() { return &___m_Table_0; }
	inline void set_m_Table_0(Dictionary_2_t3675406699 * value)
	{
		___m_Table_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Table_0), value);
	}

	inline static int32_t get_offset_of_m_TempTable_1() { return static_cast<int32_t>(offsetof(UriParser_t3890150400_StaticFields, ___m_TempTable_1)); }
	inline Dictionary_2_t3675406699 * get_m_TempTable_1() const { return ___m_TempTable_1; }
	inline Dictionary_2_t3675406699 ** get_address_of_m_TempTable_1() { return &___m_TempTable_1; }
	inline void set_m_TempTable_1(Dictionary_2_t3675406699 * value)
	{
		___m_TempTable_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_TempTable_1), value);
	}

	inline static int32_t get_offset_of_HttpUri_7() { return static_cast<int32_t>(offsetof(UriParser_t3890150400_StaticFields, ___HttpUri_7)); }
	inline UriParser_t3890150400 * get_HttpUri_7() const { return ___HttpUri_7; }
	inline UriParser_t3890150400 ** get_address_of_HttpUri_7() { return &___HttpUri_7; }
	inline void set_HttpUri_7(UriParser_t3890150400 * value)
	{
		___HttpUri_7 = value;
		Il2CppCodeGenWriteBarrier((&___HttpUri_7), value);
	}

	inline static int32_t get_offset_of_HttpsUri_8() { return static_cast<int32_t>(offsetof(UriParser_t3890150400_StaticFields, ___HttpsUri_8)); }
	inline UriParser_t3890150400 * get_HttpsUri_8() const { return ___HttpsUri_8; }
	inline UriParser_t3890150400 ** get_address_of_HttpsUri_8() { return &___HttpsUri_8; }
	inline void set_HttpsUri_8(UriParser_t3890150400 * value)
	{
		___HttpsUri_8 = value;
		Il2CppCodeGenWriteBarrier((&___HttpsUri_8), value);
	}

	inline static int32_t get_offset_of_WsUri_9() { return static_cast<int32_t>(offsetof(UriParser_t3890150400_StaticFields, ___WsUri_9)); }
	inline UriParser_t3890150400 * get_WsUri_9() const { return ___WsUri_9; }
	inline UriParser_t3890150400 ** get_address_of_WsUri_9() { return &___WsUri_9; }
	inline void set_WsUri_9(UriParser_t3890150400 * value)
	{
		___WsUri_9 = value;
		Il2CppCodeGenWriteBarrier((&___WsUri_9), value);
	}

	inline static int32_t get_offset_of_WssUri_10() { return static_cast<int32_t>(offsetof(UriParser_t3890150400_StaticFields, ___WssUri_10)); }
	inline UriParser_t3890150400 * get_WssUri_10() const { return ___WssUri_10; }
	inline UriParser_t3890150400 ** get_address_of_WssUri_10() { return &___WssUri_10; }
	inline void set_WssUri_10(UriParser_t3890150400 * value)
	{
		___WssUri_10 = value;
		Il2CppCodeGenWriteBarrier((&___WssUri_10), value);
	}

	inline static int32_t get_offset_of_FtpUri_11() { return static_cast<int32_t>(offsetof(UriParser_t3890150400_StaticFields, ___FtpUri_11)); }
	inline UriParser_t3890150400 * get_FtpUri_11() const { return ___FtpUri_11; }
	inline UriParser_t3890150400 ** get_address_of_FtpUri_11() { return &___FtpUri_11; }
	inline void set_FtpUri_11(UriParser_t3890150400 * value)
	{
		___FtpUri_11 = value;
		Il2CppCodeGenWriteBarrier((&___FtpUri_11), value);
	}

	inline static int32_t get_offset_of_FileUri_12() { return static_cast<int32_t>(offsetof(UriParser_t3890150400_StaticFields, ___FileUri_12)); }
	inline UriParser_t3890150400 * get_FileUri_12() const { return ___FileUri_12; }
	inline UriParser_t3890150400 ** get_address_of_FileUri_12() { return &___FileUri_12; }
	inline void set_FileUri_12(UriParser_t3890150400 * value)
	{
		___FileUri_12 = value;
		Il2CppCodeGenWriteBarrier((&___FileUri_12), value);
	}

	inline static int32_t get_offset_of_GopherUri_13() { return static_cast<int32_t>(offsetof(UriParser_t3890150400_StaticFields, ___GopherUri_13)); }
	inline UriParser_t3890150400 * get_GopherUri_13() const { return ___GopherUri_13; }
	inline UriParser_t3890150400 ** get_address_of_GopherUri_13() { return &___GopherUri_13; }
	inline void set_GopherUri_13(UriParser_t3890150400 * value)
	{
		___GopherUri_13 = value;
		Il2CppCodeGenWriteBarrier((&___GopherUri_13), value);
	}

	inline static int32_t get_offset_of_NntpUri_14() { return static_cast<int32_t>(offsetof(UriParser_t3890150400_StaticFields, ___NntpUri_14)); }
	inline UriParser_t3890150400 * get_NntpUri_14() const { return ___NntpUri_14; }
	inline UriParser_t3890150400 ** get_address_of_NntpUri_14() { return &___NntpUri_14; }
	inline void set_NntpUri_14(UriParser_t3890150400 * value)
	{
		___NntpUri_14 = value;
		Il2CppCodeGenWriteBarrier((&___NntpUri_14), value);
	}

	inline static int32_t get_offset_of_NewsUri_15() { return static_cast<int32_t>(offsetof(UriParser_t3890150400_StaticFields, ___NewsUri_15)); }
	inline UriParser_t3890150400 * get_NewsUri_15() const { return ___NewsUri_15; }
	inline UriParser_t3890150400 ** get_address_of_NewsUri_15() { return &___NewsUri_15; }
	inline void set_NewsUri_15(UriParser_t3890150400 * value)
	{
		___NewsUri_15 = value;
		Il2CppCodeGenWriteBarrier((&___NewsUri_15), value);
	}

	inline static int32_t get_offset_of_MailToUri_16() { return static_cast<int32_t>(offsetof(UriParser_t3890150400_StaticFields, ___MailToUri_16)); }
	inline UriParser_t3890150400 * get_MailToUri_16() const { return ___MailToUri_16; }
	inline UriParser_t3890150400 ** get_address_of_MailToUri_16() { return &___MailToUri_16; }
	inline void set_MailToUri_16(UriParser_t3890150400 * value)
	{
		___MailToUri_16 = value;
		Il2CppCodeGenWriteBarrier((&___MailToUri_16), value);
	}

	inline static int32_t get_offset_of_UuidUri_17() { return static_cast<int32_t>(offsetof(UriParser_t3890150400_StaticFields, ___UuidUri_17)); }
	inline UriParser_t3890150400 * get_UuidUri_17() const { return ___UuidUri_17; }
	inline UriParser_t3890150400 ** get_address_of_UuidUri_17() { return &___UuidUri_17; }
	inline void set_UuidUri_17(UriParser_t3890150400 * value)
	{
		___UuidUri_17 = value;
		Il2CppCodeGenWriteBarrier((&___UuidUri_17), value);
	}

	inline static int32_t get_offset_of_TelnetUri_18() { return static_cast<int32_t>(offsetof(UriParser_t3890150400_StaticFields, ___TelnetUri_18)); }
	inline UriParser_t3890150400 * get_TelnetUri_18() const { return ___TelnetUri_18; }
	inline UriParser_t3890150400 ** get_address_of_TelnetUri_18() { return &___TelnetUri_18; }
	inline void set_TelnetUri_18(UriParser_t3890150400 * value)
	{
		___TelnetUri_18 = value;
		Il2CppCodeGenWriteBarrier((&___TelnetUri_18), value);
	}

	inline static int32_t get_offset_of_LdapUri_19() { return static_cast<int32_t>(offsetof(UriParser_t3890150400_StaticFields, ___LdapUri_19)); }
	inline UriParser_t3890150400 * get_LdapUri_19() const { return ___LdapUri_19; }
	inline UriParser_t3890150400 ** get_address_of_LdapUri_19() { return &___LdapUri_19; }
	inline void set_LdapUri_19(UriParser_t3890150400 * value)
	{
		___LdapUri_19 = value;
		Il2CppCodeGenWriteBarrier((&___LdapUri_19), value);
	}

	inline static int32_t get_offset_of_NetTcpUri_20() { return static_cast<int32_t>(offsetof(UriParser_t3890150400_StaticFields, ___NetTcpUri_20)); }
	inline UriParser_t3890150400 * get_NetTcpUri_20() const { return ___NetTcpUri_20; }
	inline UriParser_t3890150400 ** get_address_of_NetTcpUri_20() { return &___NetTcpUri_20; }
	inline void set_NetTcpUri_20(UriParser_t3890150400 * value)
	{
		___NetTcpUri_20 = value;
		Il2CppCodeGenWriteBarrier((&___NetTcpUri_20), value);
	}

	inline static int32_t get_offset_of_NetPipeUri_21() { return static_cast<int32_t>(offsetof(UriParser_t3890150400_StaticFields, ___NetPipeUri_21)); }
	inline UriParser_t3890150400 * get_NetPipeUri_21() const { return ___NetPipeUri_21; }
	inline UriParser_t3890150400 ** get_address_of_NetPipeUri_21() { return &___NetPipeUri_21; }
	inline void set_NetPipeUri_21(UriParser_t3890150400 * value)
	{
		___NetPipeUri_21 = value;
		Il2CppCodeGenWriteBarrier((&___NetPipeUri_21), value);
	}

	inline static int32_t get_offset_of_VsMacrosUri_22() { return static_cast<int32_t>(offsetof(UriParser_t3890150400_StaticFields, ___VsMacrosUri_22)); }
	inline UriParser_t3890150400 * get_VsMacrosUri_22() const { return ___VsMacrosUri_22; }
	inline UriParser_t3890150400 ** get_address_of_VsMacrosUri_22() { return &___VsMacrosUri_22; }
	inline void set_VsMacrosUri_22(UriParser_t3890150400 * value)
	{
		___VsMacrosUri_22 = value;
		Il2CppCodeGenWriteBarrier((&___VsMacrosUri_22), value);
	}

	inline static int32_t get_offset_of_s_QuirksVersion_23() { return static_cast<int32_t>(offsetof(UriParser_t3890150400_StaticFields, ___s_QuirksVersion_23)); }
	inline int32_t get_s_QuirksVersion_23() const { return ___s_QuirksVersion_23; }
	inline int32_t* get_address_of_s_QuirksVersion_23() { return &___s_QuirksVersion_23; }
	inline void set_s_QuirksVersion_23(int32_t value)
	{
		___s_QuirksVersion_23 = value;
	}

	inline static int32_t get_offset_of_HttpSyntaxFlags_24() { return static_cast<int32_t>(offsetof(UriParser_t3890150400_StaticFields, ___HttpSyntaxFlags_24)); }
	inline int32_t get_HttpSyntaxFlags_24() const { return ___HttpSyntaxFlags_24; }
	inline int32_t* get_address_of_HttpSyntaxFlags_24() { return &___HttpSyntaxFlags_24; }
	inline void set_HttpSyntaxFlags_24(int32_t value)
	{
		___HttpSyntaxFlags_24 = value;
	}

	inline static int32_t get_offset_of_FileSyntaxFlags_25() { return static_cast<int32_t>(offsetof(UriParser_t3890150400_StaticFields, ___FileSyntaxFlags_25)); }
	inline int32_t get_FileSyntaxFlags_25() const { return ___FileSyntaxFlags_25; }
	inline int32_t* get_address_of_FileSyntaxFlags_25() { return &___FileSyntaxFlags_25; }
	inline void set_FileSyntaxFlags_25(int32_t value)
	{
		___FileSyntaxFlags_25 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URIPARSER_T3890150400_H
#ifndef URITYPECONVERTER_T3695916615_H
#define URITYPECONVERTER_T3695916615_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriTypeConverter
struct  UriTypeConverter_t3695916615  : public TypeConverter_t2249118273
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URITYPECONVERTER_T3695916615_H
#ifndef BUILTINURIPARSER_T2965675049_H
#define BUILTINURIPARSER_T2965675049_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriParser/BuiltInUriParser
struct  BuiltInUriParser_t2965675049  : public UriParser_t3890150400
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUILTINURIPARSER_T2965675049_H
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


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2687535023_gshared (Dictionary_2_t132545152 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m258553009_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m1996088172_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject ** p1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m3919933788_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m1170824041 (ArgumentNullException_t1615371798 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.UriBuilder::Init(System.Uri)
extern "C" IL2CPP_METHOD_ATTR void UriBuilder_Init_m1237871254 (UriBuilder_t579353065 * __this, Uri_t100236324 * ___uri0, const RuntimeMethod* method);
// System.String System.Uri::get_Fragment()
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_get_Fragment_m575158891 (Uri_t100236324 * __this, const RuntimeMethod* method);
// System.String System.Uri::get_Query()
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_get_Query_m2772518875 (Uri_t100236324 * __this, const RuntimeMethod* method);
// System.String System.Uri::get_Host()
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_get_Host_m2602053458 (Uri_t100236324 * __this, const RuntimeMethod* method);
// System.String System.Uri::get_AbsolutePath()
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_get_AbsolutePath_m590948575 (Uri_t100236324 * __this, const RuntimeMethod* method);
// System.Int32 System.Uri::get_Port()
extern "C" IL2CPP_METHOD_ATTR int32_t Uri_get_Port_m184067428 (Uri_t100236324 * __this, const RuntimeMethod* method);
// System.String System.Uri::get_Scheme()
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_get_Scheme_m1686732325 (Uri_t100236324 * __this, const RuntimeMethod* method);
// System.Boolean System.Uri::get_HasAuthority()
extern "C" IL2CPP_METHOD_ATTR bool Uri_get_HasAuthority_m495367953 (Uri_t100236324 * __this, const RuntimeMethod* method);
// System.String System.Uri::get_UserInfo()
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_get_UserInfo_m1985954539 (Uri_t100236324 * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m2969720369 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.Char)
extern "C" IL2CPP_METHOD_ATTR int32_t String_IndexOf_m363431711 (String_t* __this, Il2CppChar p0, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Substring_m2848979100 (String_t* __this, int32_t p0, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Substring_m1610150815 (String_t* __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Void System.UriBuilder::SetFieldsFromUri(System.Uri)
extern "C" IL2CPP_METHOD_ATTR void UriBuilder_SetFieldsFromUri_m237881163 (UriBuilder_t579353065 * __this, Uri_t100236324 * ___uri0, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m2986988803 (String_t* __this, int32_t p0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method);
// System.String System.String::Replace(System.Char,System.Char)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Replace_m3726209165 (String_t* __this, Il2CppChar p0, Il2CppChar p1, const RuntimeMethod* method);
// System.String System.Uri::InternalEscapeString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_InternalEscapeString_m537903901 (RuntimeObject * __this /* static, unused */, String_t* ___rawString0, const RuntimeMethod* method);
// System.Boolean System.Uri::CheckSchemeName(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Uri_CheckSchemeName_m108657675 (RuntimeObject * __this /* static, unused */, String_t* ___schemeName0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m1216717135 (ArgumentException_t132251570 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.String System.String::ToLowerInvariant()
extern "C" IL2CPP_METHOD_ATTR String_t* String_ToLowerInvariant_m110751226 (String_t* __this, const RuntimeMethod* method);
// System.Void System.Uri::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Uri__ctor_m1474792120 (Uri_t100236324 * __this, String_t* ___uriString0, const RuntimeMethod* method);
// System.Uri System.UriBuilder::get_Uri()
extern "C" IL2CPP_METHOD_ATTR Uri_t100236324 * UriBuilder_get_Uri_m3514502640 (UriBuilder_t579353065 * __this, const RuntimeMethod* method);
// System.Void System.UriFormatException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void UriFormatException__ctor_m3083316541 (UriFormatException_t953270471 * __this, String_t* ___textString0, const RuntimeMethod* method);
// System.UriParser System.UriParser::GetSyntax(System.String)
extern "C" IL2CPP_METHOD_ATTR UriParser_t3890150400 * UriParser_GetSyntax_m811769415 (RuntimeObject * __this /* static, unused */, String_t* ___lwrCaseScheme0, const RuntimeMethod* method);
// System.Boolean System.UriParser::InFact(System.UriSyntaxFlags)
extern "C" IL2CPP_METHOD_ATTR bool UriParser_InFact_m1142757999 (UriParser_t3890150400 * __this, int32_t ___flags0, const RuntimeMethod* method);
// System.Boolean System.UriParser::NotAny(System.UriSyntaxFlags)
extern "C" IL2CPP_METHOD_ATTR bool UriParser_NotAny_m2044708837 (UriParser_t3890150400 * __this, int32_t ___flags0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.String System.Int32::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Int32_ToString_m141394615 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m1809518182 (RuntimeObject * __this /* static, unused */, StringU5BU5D_t1281789340* p0, const RuntimeMethod* method);
// System.Void System.FormatException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void FormatException__ctor_m1479314061 (FormatException_t154580423 * __this, const RuntimeMethod* method);
// System.Void System.FormatException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void FormatException__ctor_m4049685996 (FormatException_t154580423 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.FormatException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void FormatException__ctor_m3747066592 (FormatException_t154580423 * __this, SerializationInfo_t950877179 * p0, StreamingContext_t3711869237  p1, const RuntimeMethod* method);
// System.Void System.Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void Exception_GetObjectData_m1103241326 (Exception_t * __this, SerializationInfo_t950877179 * p0, StreamingContext_t3711869237  p1, const RuntimeMethod* method);
// System.String SR::GetString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* SR_GetString_m1137630943 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method);
// System.Int32 System.Runtime.CompilerServices.RuntimeHelpers::get_OffsetToStringData()
extern "C" IL2CPP_METHOD_ATTR int32_t RuntimeHelpers_get_OffsetToStringData_m2192601476 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 System.Math::Min(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Math_Min_m3468062251 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Char[] System.UriHelper::EnsureDestinationSize(System.Char*,System.Char[],System.Int32,System.Int16,System.Int16,System.Int32&,System.Int32)
extern "C" IL2CPP_METHOD_ATTR CharU5BU5D_t3528271667* UriHelper_EnsureDestinationSize_m2437550458 (RuntimeObject * __this /* static, unused */, Il2CppChar* ___pStr0, CharU5BU5D_t3528271667* ___dest1, int32_t ___currentInputPos2, int16_t ___charsToAdd3, int16_t ___minReallocateChars4, int32_t* ___destPos5, int32_t ___prevInputPos6, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
extern "C" IL2CPP_METHOD_ATTR Encoding_t1523322056 * Encoding_get_UTF8_m1008486739 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.UriHelper::EscapeAsciiChar(System.Char,System.Char[],System.Int32&)
extern "C" IL2CPP_METHOD_ATTR void UriHelper_EscapeAsciiChar_m1759665887 (RuntimeObject * __this /* static, unused */, Il2CppChar ___ch0, CharU5BU5D_t3528271667* ___to1, int32_t* ___pos2, const RuntimeMethod* method);
// System.Char System.UriHelper::EscapedAscii(System.Char,System.Char)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar UriHelper_EscapedAscii_m4111282795 (RuntimeObject * __this /* static, unused */, Il2CppChar ___digit0, Il2CppChar ___next1, const RuntimeMethod* method);
// System.Boolean System.UriHelper::IsUnreserved(System.Char)
extern "C" IL2CPP_METHOD_ATTR bool UriHelper_IsUnreserved_m2975029334 (RuntimeObject * __this /* static, unused */, Il2CppChar ___c0, const RuntimeMethod* method);
// System.Boolean System.UriHelper::IsReservedUnreservedOrHash(System.Char)
extern "C" IL2CPP_METHOD_ATTR bool UriHelper_IsReservedUnreservedOrHash_m1469489854 (RuntimeObject * __this /* static, unused */, Il2CppChar ___c0, const RuntimeMethod* method);
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m2884209081 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, int32_t p1, RuntimeArray * p2, int32_t p3, int32_t p4, const RuntimeMethod* method);
// System.Char[] System.UriHelper::UnescapeString(System.Char*,System.Int32,System.Int32,System.Char[],System.Int32&,System.Char,System.Char,System.Char,System.UnescapeMode,System.UriParser,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR CharU5BU5D_t3528271667* UriHelper_UnescapeString_m2854369216 (RuntimeObject * __this /* static, unused */, Il2CppChar* ___pStr0, int32_t ___start1, int32_t ___end2, CharU5BU5D_t3528271667* ___dest3, int32_t* ___destPosition4, Il2CppChar ___rsvd15, Il2CppChar ___rsvd26, Il2CppChar ___rsvd37, int32_t ___unescapeMode8, UriParser_t3890150400 * ___syntax9, bool ___isQuery10, const RuntimeMethod* method);
// System.Boolean System.Uri::IriParsingStatic(System.UriParser)
extern "C" IL2CPP_METHOD_ATTR bool Uri_IriParsingStatic_m3844828870 (RuntimeObject * __this /* static, unused */, UriParser_t3890150400 * ___syntax0, const RuntimeMethod* method);
// System.Boolean System.UriHelper::IsNotSafeForUnescape(System.Char)
extern "C" IL2CPP_METHOD_ATTR bool UriHelper_IsNotSafeForUnescape_m1772803964 (RuntimeObject * __this /* static, unused */, Il2CppChar ___ch0, const RuntimeMethod* method);
// System.Boolean System.IriHelper::CheckIriUnicodeRange(System.Char,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool IriHelper_CheckIriUnicodeRange_m2504575242 (RuntimeObject * __this /* static, unused */, Il2CppChar ___unicode0, bool ___isQuery1, const RuntimeMethod* method);
// System.Void System.Text.EncoderReplacementFallback::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void EncoderReplacementFallback__ctor_m1483565116 (EncoderReplacementFallback_t1623206753 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Text.Encoding::set_EncoderFallback(System.Text.EncoderFallback)
extern "C" IL2CPP_METHOD_ATTR void Encoding_set_EncoderFallback_m1965676933 (Encoding_t1523322056 * __this, EncoderFallback_t1188251036 * p0, const RuntimeMethod* method);
// System.Void System.Text.DecoderReplacementFallback::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void DecoderReplacementFallback__ctor_m2470322217 (DecoderReplacementFallback_t1462101135 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Text.Encoding::set_DecoderFallback(System.Text.DecoderFallback)
extern "C" IL2CPP_METHOD_ATTR void Encoding_set_DecoderFallback_m148532738 (Encoding_t1523322056 * __this, DecoderFallback_t3123823036 * p0, const RuntimeMethod* method);
// System.Void System.UriHelper::MatchUTF8Sequence(System.Char*,System.Char[],System.Int32&,System.Char[],System.Int32,System.Byte[],System.Int32,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UriHelper_MatchUTF8Sequence_m1799602598 (RuntimeObject * __this /* static, unused */, Il2CppChar* ___pDest0, CharU5BU5D_t3528271667* ___dest1, int32_t* ___destOffset2, CharU5BU5D_t3528271667* ___unescapedChars3, int32_t ___charCount4, ByteU5BU5D_t4116647657* ___bytes5, int32_t ___byteCount6, bool ___isQuery7, bool ___iriParsing8, const RuntimeMethod* method);
// System.Boolean System.Char::IsHighSurrogate(System.Char)
extern "C" IL2CPP_METHOD_ATTR bool Char_IsHighSurrogate_m2151882768 (RuntimeObject * __this /* static, unused */, Il2CppChar p0, const RuntimeMethod* method);
// System.Boolean System.IriHelper::CheckIriUnicodeRange(System.Char,System.Char,System.Boolean&,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool IriHelper_CheckIriUnicodeRange_m272609807 (RuntimeObject * __this /* static, unused */, Il2CppChar ___highSurr0, Il2CppChar ___lowSurr1, bool* ___surrogatePair2, bool ___isQuery3, const RuntimeMethod* method);
// System.Boolean System.Uri::IsBidiControlCharacter(System.Char)
extern "C" IL2CPP_METHOD_ATTR bool Uri_IsBidiControlCharacter_m3225227293 (RuntimeObject * __this /* static, unused */, Il2CppChar ___ch0, const RuntimeMethod* method);
// System.Boolean System.UriParser::get_ShouldUseLegacyV2Quirks()
extern "C" IL2CPP_METHOD_ATTR bool UriParser_get_ShouldUseLegacyV2Quirks_m1976807573 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean System.Uri::IsAsciiLetterOrDigit(System.Char)
extern "C" IL2CPP_METHOD_ATTR bool Uri_IsAsciiLetterOrDigit_m2810128337 (RuntimeObject * __this /* static, unused */, Il2CppChar ___character0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
extern "C" IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m3117905507 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, RuntimeFieldHandle_t1871169219  p1, const RuntimeMethod* method);
// System.UriFormatException System.Uri::ParseMinimal()
extern "C" IL2CPP_METHOD_ATTR UriFormatException_t953270471 * Uri_ParseMinimal_m443648661 (Uri_t100236324 * __this, const RuntimeMethod* method);
// System.Boolean System.Uri::get_UserDrivenParsing()
extern "C" IL2CPP_METHOD_ATTR bool Uri_get_UserDrivenParsing_m2668439512 (Uri_t100236324 * __this, const RuntimeMethod* method);
// System.Type System.Object::GetType()
extern "C" IL2CPP_METHOD_ATTR Type_t * Object_GetType_m88164663 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String SR::GetString(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* SR_GetString_m2133537544 (RuntimeObject * __this /* static, unused */, String_t* ___name0, ObjectU5BU5D_t2843939325* ___args1, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m237278729 (InvalidOperationException_t56020091 * __this, String_t* p0, const RuntimeMethod* method);
// System.Boolean System.Uri::get_IsAbsoluteUri()
extern "C" IL2CPP_METHOD_ATTR bool Uri_get_IsAbsoluteUri_m3834080655 (Uri_t100236324 * __this, const RuntimeMethod* method);
// System.Uri System.Uri::ResolveHelper(System.Uri,System.Uri,System.String&,System.Boolean&,System.UriFormatException&)
extern "C" IL2CPP_METHOD_ATTR Uri_t100236324 * Uri_ResolveHelper_m3305423888 (RuntimeObject * __this /* static, unused */, Uri_t100236324 * ___baseUri0, Uri_t100236324 * ___relativeUri1, String_t** ___newUriString2, bool* ___userEscaped3, UriFormatException_t953270471 ** ___e4, const RuntimeMethod* method);
// System.Boolean System.Uri::op_Inequality(System.Uri,System.Uri)
extern "C" IL2CPP_METHOD_ATTR bool Uri_op_Inequality_m3504002810 (RuntimeObject * __this /* static, unused */, Uri_t100236324 * ___uri10, Uri_t100236324 * ___uri21, const RuntimeMethod* method);
// System.String System.Uri::get_OriginalString()
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_get_OriginalString_m2551181575 (Uri_t100236324 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.Object,System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m4164965325 (ArgumentOutOfRangeException_t777629997 * __this, String_t* p0, RuntimeObject * p1, String_t* p2, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m3628145864 (ArgumentOutOfRangeException_t777629997 * __this, String_t* p0, const RuntimeMethod* method);
// System.String System.Uri::GetComponentsHelper(System.UriComponents,System.UriFormat)
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_GetComponentsHelper_m4097442089 (Uri_t100236324 * __this, int32_t ___uriComponents0, int32_t ___uriFormat1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.UriParser>::.ctor(System.Int32)
inline void Dictionary_2__ctor_m4151158592 (Dictionary_2_t3675406699 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3675406699 *, int32_t, const RuntimeMethod*))Dictionary_2__ctor_m2687535023_gshared)(__this, p0, method);
}
// System.Void System.UriParser/BuiltInUriParser::.ctor(System.String,System.Int32,System.UriSyntaxFlags)
extern "C" IL2CPP_METHOD_ATTR void BuiltInUriParser__ctor_m4154603378 (BuiltInUriParser_t2965675049 * __this, String_t* ___lwrCaseScheme0, int32_t ___defaultPort1, int32_t ___syntaxFlags2, const RuntimeMethod* method);
// System.String System.UriParser::get_SchemeName()
extern "C" IL2CPP_METHOD_ATTR String_t* UriParser_get_SchemeName_m3679786971 (UriParser_t3890150400 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.UriParser>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m2546549516 (Dictionary_2_t3675406699 * __this, String_t* p0, UriParser_t3890150400 * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3675406699 *, String_t*, UriParser_t3890150400 *, const RuntimeMethod*))Dictionary_2_set_Item_m258553009_gshared)(__this, p0, p1, method);
}
// System.Boolean System.UriParser::IsFullMatch(System.UriSyntaxFlags,System.UriSyntaxFlags)
extern "C" IL2CPP_METHOD_ATTR bool UriParser_IsFullMatch_m528315200 (UriParser_t3890150400 * __this, int32_t ___flags0, int32_t ___expected1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.UriParser>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m2122824571 (Dictionary_2_t3675406699 * __this, String_t* p0, UriParser_t3890150400 ** p1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3675406699 *, String_t*, UriParser_t3890150400 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m1996088172_gshared)(__this, p0, p1, method);
}
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
extern "C" IL2CPP_METHOD_ATTR void Monitor_Enter_m984175629 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, bool* p1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.UriParser>::get_Count()
inline int32_t Dictionary_2_get_Count_m2482485624 (Dictionary_2_t3675406699 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t3675406699 *, const RuntimeMethod*))Dictionary_2_get_Count_m3919933788_gshared)(__this, method);
}
// System.Void System.Threading.Monitor::Exit(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Monitor_Exit_m3585316909 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.UriParser::.ctor(System.UriSyntaxFlags)
extern "C" IL2CPP_METHOD_ATTR void UriParser__ctor_m1924902178 (UriParser_t3890150400 * __this, int32_t ___flags0, const RuntimeMethod* method);
// System.Void System.ComponentModel.TypeConverter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TypeConverter__ctor_m2146026630 (TypeConverter_t2249118273 * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
extern "C" IL2CPP_METHOD_ATTR bool Type_op_Equality_m2683486427 (RuntimeObject * __this /* static, unused */, Type_t * p0, Type_t * p1, const RuntimeMethod* method);
// System.Boolean System.UriTypeConverter::CanConvert(System.Type)
extern "C" IL2CPP_METHOD_ATTR bool UriTypeConverter_CanConvert_m4004296934 (UriTypeConverter_t3695916615 * __this, Type_t * ___type0, const RuntimeMethod* method);
// System.String Locale::GetText(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Locale_GetText_m3374010885 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m2494070935 (NotSupportedException_t1314879016 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Uri::.ctor(System.String,System.UriKind)
extern "C" IL2CPP_METHOD_ATTR void Uri__ctor_m391584135 (Uri_t100236324 * __this, String_t* ___uriString0, int32_t ___uriKind1, const RuntimeMethod* method);
// System.Object System.ComponentModel.Design.Serialization.InstanceDescriptor::Invoke()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * InstanceDescriptor_Invoke_m2192227030 (InstanceDescriptor_t657473484 * __this, const RuntimeMethod* method);
// System.Object System.ComponentModel.TypeConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * TypeConverter_ConvertFrom_m1024238132 (TypeConverter_t2249118273 * __this, RuntimeObject* ___context0, CultureInfo_t4157843068 * ___culture1, RuntimeObject * ___value2, const RuntimeMethod* method);
// System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Type[])
extern "C" IL2CPP_METHOD_ATTR ConstructorInfo_t5769829 * Type_GetConstructor_m2219014380 (Type_t * __this, TypeU5BU5D_t3940880105* p0, const RuntimeMethod* method);
// System.Void System.ComponentModel.Design.Serialization.InstanceDescriptor::.ctor(System.Reflection.MemberInfo,System.Collections.ICollection)
extern "C" IL2CPP_METHOD_ATTR void InstanceDescriptor__ctor_m1302935062 (InstanceDescriptor_t657473484 * __this, MemberInfo_t * ___member0, RuntimeObject* ___arguments1, const RuntimeMethod* method);
// System.Object System.ComponentModel.TypeConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * TypeConverter_ConvertTo_m3165899902 (TypeConverter_t2249118273 * __this, RuntimeObject* ___context0, CultureInfo_t4157843068 * ___culture1, RuntimeObject * ___value2, Type_t * ___destinationType3, const RuntimeMethod* method);
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
// System.Void System.Uri/MoreInfo::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MoreInfo__ctor_m3639489874 (MoreInfo_t2349391856 * __this, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Uri/UriInfo::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UriInfo__ctor_m556353075 (UriInfo_t1092684687 * __this, const RuntimeMethod* method)
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
// System.Void System.UriBuilder::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UriBuilder__ctor_m2700491786 (UriBuilder_t579353065 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UriBuilder__ctor_m2700491786_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set__changed_0((bool)1);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set__fragment_1(L_0);
		__this->set__host_2(_stringLiteral1305937687);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set__password_3(L_1);
		__this->set__path_4(_stringLiteral3452614529);
		__this->set__port_5((-1));
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set__query_6(L_2);
		__this->set__scheme_7(_stringLiteral3140485902);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t100236324_il2cpp_TypeInfo_var);
		String_t* L_3 = ((Uri_t100236324_StaticFields*)il2cpp_codegen_static_fields_for(Uri_t100236324_il2cpp_TypeInfo_var))->get_SchemeDelimiter_12();
		__this->set__schemeDelimiter_8(L_3);
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set__username_10(L_4);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UriBuilder::.ctor(System.Uri)
extern "C" IL2CPP_METHOD_ATTR void UriBuilder__ctor_m377291920 (UriBuilder_t579353065 * __this, Uri_t100236324 * ___uri0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UriBuilder__ctor_m377291920_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set__changed_0((bool)1);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set__fragment_1(L_0);
		__this->set__host_2(_stringLiteral1305937687);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set__password_3(L_1);
		__this->set__path_4(_stringLiteral3452614529);
		__this->set__port_5((-1));
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set__query_6(L_2);
		__this->set__scheme_7(_stringLiteral3140485902);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t100236324_il2cpp_TypeInfo_var);
		String_t* L_3 = ((Uri_t100236324_StaticFields*)il2cpp_codegen_static_fields_for(Uri_t100236324_il2cpp_TypeInfo_var))->get_SchemeDelimiter_12();
		__this->set__schemeDelimiter_8(L_3);
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set__username_10(L_4);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		Uri_t100236324 * L_5 = ___uri0;
		if (L_5)
		{
			goto IL_007a;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_6 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_6, _stringLiteral3313977880, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, UriBuilder__ctor_m377291920_RuntimeMethod_var);
	}

IL_007a:
	{
		Uri_t100236324 * L_7 = ___uri0;
		UriBuilder_Init_m1237871254(__this, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UriBuilder::Init(System.Uri)
extern "C" IL2CPP_METHOD_ATTR void UriBuilder_Init_m1237871254 (UriBuilder_t579353065 * __this, Uri_t100236324 * ___uri0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UriBuilder_Init_m1237871254_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	UriBuilder_t579353065 * G_B2_0 = NULL;
	UriBuilder_t579353065 * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	UriBuilder_t579353065 * G_B3_1 = NULL;
	{
		Uri_t100236324 * L_0 = ___uri0;
		NullCheck(L_0);
		String_t* L_1 = Uri_get_Fragment_m575158891(L_0, /*hidden argument*/NULL);
		__this->set__fragment_1(L_1);
		Uri_t100236324 * L_2 = ___uri0;
		NullCheck(L_2);
		String_t* L_3 = Uri_get_Query_m2772518875(L_2, /*hidden argument*/NULL);
		__this->set__query_6(L_3);
		Uri_t100236324 * L_4 = ___uri0;
		NullCheck(L_4);
		String_t* L_5 = Uri_get_Host_m2602053458(L_4, /*hidden argument*/NULL);
		__this->set__host_2(L_5);
		Uri_t100236324 * L_6 = ___uri0;
		NullCheck(L_6);
		String_t* L_7 = Uri_get_AbsolutePath_m590948575(L_6, /*hidden argument*/NULL);
		__this->set__path_4(L_7);
		Uri_t100236324 * L_8 = ___uri0;
		NullCheck(L_8);
		int32_t L_9 = Uri_get_Port_m184067428(L_8, /*hidden argument*/NULL);
		__this->set__port_5(L_9);
		Uri_t100236324 * L_10 = ___uri0;
		NullCheck(L_10);
		String_t* L_11 = Uri_get_Scheme_m1686732325(L_10, /*hidden argument*/NULL);
		__this->set__scheme_7(L_11);
		Uri_t100236324 * L_12 = ___uri0;
		NullCheck(L_12);
		bool L_13 = Uri_get_HasAuthority_m495367953(L_12, /*hidden argument*/NULL);
		G_B1_0 = __this;
		if (L_13)
		{
			G_B2_0 = __this;
			goto IL_0058;
		}
	}
	{
		G_B3_0 = _stringLiteral3452614550;
		G_B3_1 = G_B1_0;
		goto IL_005d;
	}

IL_0058:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t100236324_il2cpp_TypeInfo_var);
		String_t* L_14 = ((Uri_t100236324_StaticFields*)il2cpp_codegen_static_fields_for(Uri_t100236324_il2cpp_TypeInfo_var))->get_SchemeDelimiter_12();
		G_B3_0 = L_14;
		G_B3_1 = G_B2_0;
	}

IL_005d:
	{
		NullCheck(G_B3_1);
		G_B3_1->set__schemeDelimiter_8(G_B3_0);
		Uri_t100236324 * L_15 = ___uri0;
		NullCheck(L_15);
		String_t* L_16 = Uri_get_UserInfo_m1985954539(L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		String_t* L_17 = V_0;
		bool L_18 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_00a4;
		}
	}
	{
		String_t* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20 = String_IndexOf_m363431711(L_19, ((int32_t)58), /*hidden argument*/NULL);
		V_1 = L_20;
		int32_t L_21 = V_1;
		if ((((int32_t)L_21) == ((int32_t)(-1))))
		{
			goto IL_009d;
		}
	}
	{
		String_t* L_22 = V_0;
		int32_t L_23 = V_1;
		NullCheck(L_22);
		String_t* L_24 = String_Substring_m2848979100(L_22, ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1)), /*hidden argument*/NULL);
		__this->set__password_3(L_24);
		String_t* L_25 = V_0;
		int32_t L_26 = V_1;
		NullCheck(L_25);
		String_t* L_27 = String_Substring_m1610150815(L_25, 0, L_26, /*hidden argument*/NULL);
		__this->set__username_10(L_27);
		goto IL_00a4;
	}

IL_009d:
	{
		String_t* L_28 = V_0;
		__this->set__username_10(L_28);
	}

IL_00a4:
	{
		Uri_t100236324 * L_29 = ___uri0;
		UriBuilder_SetFieldsFromUri_m237881163(__this, L_29, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UriBuilder::set_Host(System.String)
extern "C" IL2CPP_METHOD_ATTR void UriBuilder_set_Host_m2493895927 (UriBuilder_t579353065 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UriBuilder_set_Host_m2493895927_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		___value0 = L_1;
	}

IL_000a:
	{
		String_t* L_2 = ___value0;
		__this->set__host_2(L_2);
		String_t* L_3 = __this->get__host_2();
		NullCheck(L_3);
		int32_t L_4 = String_IndexOf_m363431711(L_3, ((int32_t)58), /*hidden argument*/NULL);
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		String_t* L_5 = __this->get__host_2();
		NullCheck(L_5);
		Il2CppChar L_6 = String_get_Chars_m2986988803(L_5, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_6) == ((int32_t)((int32_t)91))))
		{
			goto IL_004c;
		}
	}
	{
		String_t* L_7 = __this->get__host_2();
		String_t* L_8 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral3452614645, L_7, _stringLiteral3452614643, /*hidden argument*/NULL);
		__this->set__host_2(L_8);
	}

IL_004c:
	{
		__this->set__changed_0((bool)1);
		return;
	}
}
// System.Void System.UriBuilder::set_Path(System.String)
extern "C" IL2CPP_METHOD_ATTR void UriBuilder_set_Path_m3892261086 (UriBuilder_t579353065 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UriBuilder_set_Path_m3892261086_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		String_t* L_1 = ___value0;
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m3847582255(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0012;
		}
	}

IL_000b:
	{
		___value0 = _stringLiteral3452614529;
	}

IL_0012:
	{
		String_t* L_3 = ___value0;
		NullCheck(L_3);
		String_t* L_4 = String_Replace_m3726209165(L_3, ((int32_t)92), ((int32_t)47), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t100236324_il2cpp_TypeInfo_var);
		String_t* L_5 = Uri_InternalEscapeString_m537903901(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		__this->set__path_4(L_5);
		__this->set__changed_0((bool)1);
		return;
	}
}
// System.Void System.UriBuilder::set_Scheme(System.String)
extern "C" IL2CPP_METHOD_ATTR void UriBuilder_set_Scheme_m1372973315 (UriBuilder_t579353065 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UriBuilder_set_Scheme_m1372973315_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___value0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		___value0 = L_1;
	}

IL_000a:
	{
		String_t* L_2 = ___value0;
		NullCheck(L_2);
		int32_t L_3 = String_IndexOf_m363431711(L_2, ((int32_t)58), /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_5 = ___value0;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		String_t* L_7 = String_Substring_m1610150815(L_5, 0, L_6, /*hidden argument*/NULL);
		___value0 = L_7;
	}

IL_0021:
	{
		String_t* L_8 = ___value0;
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_m3847582255(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0049;
		}
	}
	{
		String_t* L_10 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t100236324_il2cpp_TypeInfo_var);
		bool L_11 = Uri_CheckSchemeName_m108657675(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0041;
		}
	}
	{
		ArgumentException_t132251570 * L_12 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_12, _stringLiteral3034786082, _stringLiteral3493618073, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, NULL, UriBuilder_set_Scheme_m1372973315_RuntimeMethod_var);
	}

IL_0041:
	{
		String_t* L_13 = ___value0;
		NullCheck(L_13);
		String_t* L_14 = String_ToLowerInvariant_m110751226(L_13, /*hidden argument*/NULL);
		___value0 = L_14;
	}

IL_0049:
	{
		String_t* L_15 = ___value0;
		__this->set__scheme_7(L_15);
		__this->set__changed_0((bool)1);
		return;
	}
}
// System.Uri System.UriBuilder::get_Uri()
extern "C" IL2CPP_METHOD_ATTR Uri_t100236324 * UriBuilder_get_Uri_m3514502640 (UriBuilder_t579353065 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UriBuilder_get_Uri_m3514502640_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get__changed_0();
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		Uri_t100236324 * L_2 = (Uri_t100236324 *)il2cpp_codegen_object_new(Uri_t100236324_il2cpp_TypeInfo_var);
		Uri__ctor_m1474792120(L_2, L_1, /*hidden argument*/NULL);
		__this->set__uri_9(L_2);
		Uri_t100236324 * L_3 = __this->get__uri_9();
		UriBuilder_SetFieldsFromUri_m237881163(__this, L_3, /*hidden argument*/NULL);
		__this->set__changed_0((bool)0);
	}

IL_002c:
	{
		Uri_t100236324 * L_4 = __this->get__uri_9();
		return L_4;
	}
}
// System.Boolean System.UriBuilder::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool UriBuilder_Equals_m3500940484 (UriBuilder_t579353065 * __this, RuntimeObject * ___rparam0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___rparam0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		Uri_t100236324 * L_1 = UriBuilder_get_Uri_m3514502640(__this, /*hidden argument*/NULL);
		RuntimeObject * L_2 = ___rparam0;
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		NullCheck(L_1);
		bool L_4 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_1, L_3);
		return L_4;
	}
}
// System.Int32 System.UriBuilder::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t UriBuilder_GetHashCode_m2450580240 (UriBuilder_t579353065 * __this, const RuntimeMethod* method)
{
	{
		Uri_t100236324 * L_0 = UriBuilder_get_Uri_m3514502640(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.Void System.UriBuilder::SetFieldsFromUri(System.Uri)
extern "C" IL2CPP_METHOD_ATTR void UriBuilder_SetFieldsFromUri_m237881163 (UriBuilder_t579353065 * __this, Uri_t100236324 * ___uri0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UriBuilder_SetFieldsFromUri_m237881163_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	UriBuilder_t579353065 * G_B2_0 = NULL;
	UriBuilder_t579353065 * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	UriBuilder_t579353065 * G_B3_1 = NULL;
	{
		Uri_t100236324 * L_0 = ___uri0;
		NullCheck(L_0);
		String_t* L_1 = Uri_get_Fragment_m575158891(L_0, /*hidden argument*/NULL);
		__this->set__fragment_1(L_1);
		Uri_t100236324 * L_2 = ___uri0;
		NullCheck(L_2);
		String_t* L_3 = Uri_get_Query_m2772518875(L_2, /*hidden argument*/NULL);
		__this->set__query_6(L_3);
		Uri_t100236324 * L_4 = ___uri0;
		NullCheck(L_4);
		String_t* L_5 = Uri_get_Host_m2602053458(L_4, /*hidden argument*/NULL);
		__this->set__host_2(L_5);
		Uri_t100236324 * L_6 = ___uri0;
		NullCheck(L_6);
		String_t* L_7 = Uri_get_AbsolutePath_m590948575(L_6, /*hidden argument*/NULL);
		__this->set__path_4(L_7);
		Uri_t100236324 * L_8 = ___uri0;
		NullCheck(L_8);
		int32_t L_9 = Uri_get_Port_m184067428(L_8, /*hidden argument*/NULL);
		__this->set__port_5(L_9);
		Uri_t100236324 * L_10 = ___uri0;
		NullCheck(L_10);
		String_t* L_11 = Uri_get_Scheme_m1686732325(L_10, /*hidden argument*/NULL);
		__this->set__scheme_7(L_11);
		Uri_t100236324 * L_12 = ___uri0;
		NullCheck(L_12);
		bool L_13 = Uri_get_HasAuthority_m495367953(L_12, /*hidden argument*/NULL);
		G_B1_0 = __this;
		if (L_13)
		{
			G_B2_0 = __this;
			goto IL_0058;
		}
	}
	{
		G_B3_0 = _stringLiteral3452614550;
		G_B3_1 = G_B1_0;
		goto IL_005d;
	}

IL_0058:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t100236324_il2cpp_TypeInfo_var);
		String_t* L_14 = ((Uri_t100236324_StaticFields*)il2cpp_codegen_static_fields_for(Uri_t100236324_il2cpp_TypeInfo_var))->get_SchemeDelimiter_12();
		G_B3_0 = L_14;
		G_B3_1 = G_B2_0;
	}

IL_005d:
	{
		NullCheck(G_B3_1);
		G_B3_1->set__schemeDelimiter_8(G_B3_0);
		Uri_t100236324 * L_15 = ___uri0;
		NullCheck(L_15);
		String_t* L_16 = Uri_get_UserInfo_m1985954539(L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		String_t* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18 = String_get_Length_m3847582255(L_17, /*hidden argument*/NULL);
		if ((((int32_t)L_18) <= ((int32_t)0)))
		{
			goto IL_00a4;
		}
	}
	{
		String_t* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20 = String_IndexOf_m363431711(L_19, ((int32_t)58), /*hidden argument*/NULL);
		V_1 = L_20;
		int32_t L_21 = V_1;
		if ((((int32_t)L_21) == ((int32_t)(-1))))
		{
			goto IL_009d;
		}
	}
	{
		String_t* L_22 = V_0;
		int32_t L_23 = V_1;
		NullCheck(L_22);
		String_t* L_24 = String_Substring_m2848979100(L_22, ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1)), /*hidden argument*/NULL);
		__this->set__password_3(L_24);
		String_t* L_25 = V_0;
		int32_t L_26 = V_1;
		NullCheck(L_25);
		String_t* L_27 = String_Substring_m1610150815(L_25, 0, L_26, /*hidden argument*/NULL);
		__this->set__username_10(L_27);
		return;
	}

IL_009d:
	{
		String_t* L_28 = V_0;
		__this->set__username_10(L_28);
	}

IL_00a4:
	{
		return;
	}
}
// System.String System.UriBuilder::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* UriBuilder_ToString_m1259521445 (UriBuilder_t579353065 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UriBuilder_ToString_m1259521445_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	UriParser_t3890150400 * V_1 = NULL;
	UriBuilder_t579353065 * G_B10_0 = NULL;
	UriBuilder_t579353065 * G_B6_0 = NULL;
	UriBuilder_t579353065 * G_B9_0 = NULL;
	UriBuilder_t579353065 * G_B7_0 = NULL;
	UriBuilder_t579353065 * G_B8_0 = NULL;
	String_t* G_B11_0 = NULL;
	UriBuilder_t579353065 * G_B11_1 = NULL;
	UriBuilder_t579353065 * G_B14_0 = NULL;
	UriBuilder_t579353065 * G_B13_0 = NULL;
	String_t* G_B15_0 = NULL;
	UriBuilder_t579353065 * G_B15_1 = NULL;
	String_t* G_B19_0 = NULL;
	int32_t G_B21_0 = 0;
	StringU5BU5D_t1281789340* G_B21_1 = NULL;
	StringU5BU5D_t1281789340* G_B21_2 = NULL;
	int32_t G_B20_0 = 0;
	StringU5BU5D_t1281789340* G_B20_1 = NULL;
	StringU5BU5D_t1281789340* G_B20_2 = NULL;
	String_t* G_B22_0 = NULL;
	int32_t G_B22_1 = 0;
	StringU5BU5D_t1281789340* G_B22_2 = NULL;
	StringU5BU5D_t1281789340* G_B22_3 = NULL;
	int32_t G_B24_0 = 0;
	StringU5BU5D_t1281789340* G_B24_1 = NULL;
	StringU5BU5D_t1281789340* G_B24_2 = NULL;
	int32_t G_B23_0 = 0;
	StringU5BU5D_t1281789340* G_B23_1 = NULL;
	StringU5BU5D_t1281789340* G_B23_2 = NULL;
	String_t* G_B25_0 = NULL;
	int32_t G_B25_1 = 0;
	StringU5BU5D_t1281789340* G_B25_2 = NULL;
	StringU5BU5D_t1281789340* G_B25_3 = NULL;
	int32_t G_B27_0 = 0;
	StringU5BU5D_t1281789340* G_B27_1 = NULL;
	StringU5BU5D_t1281789340* G_B27_2 = NULL;
	int32_t G_B26_0 = 0;
	StringU5BU5D_t1281789340* G_B26_1 = NULL;
	StringU5BU5D_t1281789340* G_B26_2 = NULL;
	int32_t G_B28_0 = 0;
	StringU5BU5D_t1281789340* G_B28_1 = NULL;
	StringU5BU5D_t1281789340* G_B28_2 = NULL;
	String_t* G_B29_0 = NULL;
	int32_t G_B29_1 = 0;
	StringU5BU5D_t1281789340* G_B29_2 = NULL;
	StringU5BU5D_t1281789340* G_B29_3 = NULL;
	int32_t G_B32_0 = 0;
	StringU5BU5D_t1281789340* G_B32_1 = NULL;
	StringU5BU5D_t1281789340* G_B32_2 = NULL;
	int32_t G_B30_0 = 0;
	StringU5BU5D_t1281789340* G_B30_1 = NULL;
	StringU5BU5D_t1281789340* G_B30_2 = NULL;
	int32_t G_B31_0 = 0;
	StringU5BU5D_t1281789340* G_B31_1 = NULL;
	StringU5BU5D_t1281789340* G_B31_2 = NULL;
	int32_t G_B33_0 = 0;
	StringU5BU5D_t1281789340* G_B33_1 = NULL;
	StringU5BU5D_t1281789340* G_B33_2 = NULL;
	String_t* G_B34_0 = NULL;
	int32_t G_B34_1 = 0;
	StringU5BU5D_t1281789340* G_B34_2 = NULL;
	StringU5BU5D_t1281789340* G_B34_3 = NULL;
	{
		String_t* L_0 = __this->get__username_10();
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m3847582255(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0026;
		}
	}
	{
		String_t* L_2 = __this->get__password_3();
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m3847582255(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		UriFormatException_t953270471 * L_4 = (UriFormatException_t953270471 *)il2cpp_codegen_object_new(UriFormatException_t953270471_il2cpp_TypeInfo_var);
		UriFormatException__ctor_m3083316541(L_4, _stringLiteral2864093058, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, UriBuilder_ToString_m1259521445_RuntimeMethod_var);
	}

IL_0026:
	{
		String_t* L_5 = __this->get__scheme_7();
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m3847582255(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_00a1;
		}
	}
	{
		String_t* L_7 = __this->get__scheme_7();
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t3890150400_il2cpp_TypeInfo_var);
		UriParser_t3890150400 * L_8 = UriParser_GetSyntax_m811769415(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		UriParser_t3890150400 * L_9 = V_1;
		if (!L_9)
		{
			goto IL_0082;
		}
	}
	{
		UriParser_t3890150400 * L_10 = V_1;
		NullCheck(L_10);
		bool L_11 = UriParser_InFact_m1142757999(L_10, 1, /*hidden argument*/NULL);
		G_B6_0 = __this;
		if (L_11)
		{
			G_B10_0 = __this;
			goto IL_0076;
		}
	}
	{
		String_t* L_12 = __this->get__host_2();
		NullCheck(L_12);
		int32_t L_13 = String_get_Length_m3847582255(L_12, /*hidden argument*/NULL);
		G_B7_0 = G_B6_0;
		if (!L_13)
		{
			G_B9_0 = G_B6_0;
			goto IL_006f;
		}
	}
	{
		UriParser_t3890150400 * L_14 = V_1;
		NullCheck(L_14);
		bool L_15 = UriParser_NotAny_m2044708837(L_14, ((int32_t)16384), /*hidden argument*/NULL);
		G_B8_0 = G_B7_0;
		if (!L_15)
		{
			G_B9_0 = G_B7_0;
			goto IL_006f;
		}
	}
	{
		UriParser_t3890150400 * L_16 = V_1;
		NullCheck(L_16);
		bool L_17 = UriParser_InFact_m1142757999(L_16, 2, /*hidden argument*/NULL);
		G_B9_0 = G_B8_0;
		if (L_17)
		{
			G_B10_0 = G_B8_0;
			goto IL_0076;
		}
	}

IL_006f:
	{
		G_B11_0 = _stringLiteral3452614550;
		G_B11_1 = G_B9_0;
		goto IL_007b;
	}

IL_0076:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t100236324_il2cpp_TypeInfo_var);
		String_t* L_18 = ((Uri_t100236324_StaticFields*)il2cpp_codegen_static_fields_for(Uri_t100236324_il2cpp_TypeInfo_var))->get_SchemeDelimiter_12();
		G_B11_0 = L_18;
		G_B11_1 = G_B10_0;
	}

IL_007b:
	{
		NullCheck(G_B11_1);
		G_B11_1->set__schemeDelimiter_8(G_B11_0);
		goto IL_00a1;
	}

IL_0082:
	{
		String_t* L_19 = __this->get__host_2();
		NullCheck(L_19);
		int32_t L_20 = String_get_Length_m3847582255(L_19, /*hidden argument*/NULL);
		G_B13_0 = __this;
		if (L_20)
		{
			G_B14_0 = __this;
			goto IL_0097;
		}
	}
	{
		G_B15_0 = _stringLiteral3452614550;
		G_B15_1 = G_B13_0;
		goto IL_009c;
	}

IL_0097:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t100236324_il2cpp_TypeInfo_var);
		String_t* L_21 = ((Uri_t100236324_StaticFields*)il2cpp_codegen_static_fields_for(Uri_t100236324_il2cpp_TypeInfo_var))->get_SchemeDelimiter_12();
		G_B15_0 = L_21;
		G_B15_1 = G_B14_0;
	}

IL_009c:
	{
		NullCheck(G_B15_1);
		G_B15_1->set__schemeDelimiter_8(G_B15_0);
	}

IL_00a1:
	{
		String_t* L_22 = __this->get__scheme_7();
		NullCheck(L_22);
		int32_t L_23 = String_get_Length_m3847582255(L_22, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_00b5;
		}
	}
	{
		String_t* L_24 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B19_0 = L_24;
		goto IL_00c6;
	}

IL_00b5:
	{
		String_t* L_25 = __this->get__scheme_7();
		String_t* L_26 = __this->get__schemeDelimiter_8();
		String_t* L_27 = String_Concat_m3937257545(NULL /*static, unused*/, L_25, L_26, /*hidden argument*/NULL);
		G_B19_0 = L_27;
	}

IL_00c6:
	{
		V_0 = G_B19_0;
		StringU5BU5D_t1281789340* L_28 = (StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		StringU5BU5D_t1281789340* L_29 = L_28;
		String_t* L_30 = V_0;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_30);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_30);
		StringU5BU5D_t1281789340* L_31 = L_29;
		String_t* L_32 = __this->get__username_10();
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_32);
		StringU5BU5D_t1281789340* L_33 = L_31;
		String_t* L_34 = __this->get__password_3();
		NullCheck(L_34);
		int32_t L_35 = String_get_Length_m3847582255(L_34, /*hidden argument*/NULL);
		G_B20_0 = 2;
		G_B20_1 = L_33;
		G_B20_2 = L_33;
		if ((((int32_t)L_35) > ((int32_t)0)))
		{
			G_B21_0 = 2;
			G_B21_1 = L_33;
			G_B21_2 = L_33;
			goto IL_00f2;
		}
	}
	{
		String_t* L_36 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B22_0 = L_36;
		G_B22_1 = G_B20_0;
		G_B22_2 = G_B20_1;
		G_B22_3 = G_B20_2;
		goto IL_0102;
	}

IL_00f2:
	{
		String_t* L_37 = __this->get__password_3();
		String_t* L_38 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3452614550, L_37, /*hidden argument*/NULL);
		G_B22_0 = L_38;
		G_B22_1 = G_B21_0;
		G_B22_2 = G_B21_1;
		G_B22_3 = G_B21_2;
	}

IL_0102:
	{
		NullCheck(G_B22_2);
		ArrayElementTypeCheck (G_B22_2, G_B22_0);
		(G_B22_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B22_1), (String_t*)G_B22_0);
		StringU5BU5D_t1281789340* L_39 = G_B22_3;
		String_t* L_40 = __this->get__username_10();
		NullCheck(L_40);
		int32_t L_41 = String_get_Length_m3847582255(L_40, /*hidden argument*/NULL);
		G_B23_0 = 3;
		G_B23_1 = L_39;
		G_B23_2 = L_39;
		if ((((int32_t)L_41) > ((int32_t)0)))
		{
			G_B24_0 = 3;
			G_B24_1 = L_39;
			G_B24_2 = L_39;
			goto IL_011a;
		}
	}
	{
		String_t* L_42 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B25_0 = L_42;
		G_B25_1 = G_B23_0;
		G_B25_2 = G_B23_1;
		G_B25_3 = G_B23_2;
		goto IL_011f;
	}

IL_011a:
	{
		G_B25_0 = _stringLiteral3452614624;
		G_B25_1 = G_B24_0;
		G_B25_2 = G_B24_1;
		G_B25_3 = G_B24_2;
	}

IL_011f:
	{
		NullCheck(G_B25_2);
		ArrayElementTypeCheck (G_B25_2, G_B25_0);
		(G_B25_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B25_1), (String_t*)G_B25_0);
		StringU5BU5D_t1281789340* L_43 = G_B25_3;
		String_t* L_44 = __this->get__host_2();
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_44);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_44);
		StringU5BU5D_t1281789340* L_45 = L_43;
		int32_t L_46 = __this->get__port_5();
		G_B26_0 = 5;
		G_B26_1 = L_45;
		G_B26_2 = L_45;
		if ((((int32_t)L_46) == ((int32_t)(-1))))
		{
			G_B27_0 = 5;
			G_B27_1 = L_45;
			G_B27_2 = L_45;
			goto IL_0142;
		}
	}
	{
		String_t* L_47 = __this->get__host_2();
		NullCheck(L_47);
		int32_t L_48 = String_get_Length_m3847582255(L_47, /*hidden argument*/NULL);
		G_B27_0 = G_B26_0;
		G_B27_1 = G_B26_1;
		G_B27_2 = G_B26_2;
		if ((((int32_t)L_48) > ((int32_t)0)))
		{
			G_B28_0 = G_B26_0;
			G_B28_1 = G_B26_1;
			G_B28_2 = G_B26_2;
			goto IL_0149;
		}
	}

IL_0142:
	{
		String_t* L_49 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B29_0 = L_49;
		G_B29_1 = G_B27_0;
		G_B29_2 = G_B27_1;
		G_B29_3 = G_B27_2;
		goto IL_015e;
	}

IL_0149:
	{
		int32_t* L_50 = __this->get_address_of__port_5();
		String_t* L_51 = Int32_ToString_m141394615((int32_t*)L_50, /*hidden argument*/NULL);
		String_t* L_52 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3452614550, L_51, /*hidden argument*/NULL);
		G_B29_0 = L_52;
		G_B29_1 = G_B28_0;
		G_B29_2 = G_B28_1;
		G_B29_3 = G_B28_2;
	}

IL_015e:
	{
		NullCheck(G_B29_2);
		ArrayElementTypeCheck (G_B29_2, G_B29_0);
		(G_B29_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B29_1), (String_t*)G_B29_0);
		StringU5BU5D_t1281789340* L_53 = G_B29_3;
		String_t* L_54 = __this->get__host_2();
		NullCheck(L_54);
		int32_t L_55 = String_get_Length_m3847582255(L_54, /*hidden argument*/NULL);
		G_B30_0 = 6;
		G_B30_1 = L_53;
		G_B30_2 = L_53;
		if ((((int32_t)L_55) <= ((int32_t)0)))
		{
			G_B32_0 = 6;
			G_B32_1 = L_53;
			G_B32_2 = L_53;
			goto IL_018c;
		}
	}
	{
		String_t* L_56 = __this->get__path_4();
		NullCheck(L_56);
		int32_t L_57 = String_get_Length_m3847582255(L_56, /*hidden argument*/NULL);
		G_B31_0 = G_B30_0;
		G_B31_1 = G_B30_1;
		G_B31_2 = G_B30_2;
		if (!L_57)
		{
			G_B32_0 = G_B30_0;
			G_B32_1 = G_B30_1;
			G_B32_2 = G_B30_2;
			goto IL_018c;
		}
	}
	{
		String_t* L_58 = __this->get__path_4();
		NullCheck(L_58);
		Il2CppChar L_59 = String_get_Chars_m2986988803(L_58, 0, /*hidden argument*/NULL);
		G_B32_0 = G_B31_0;
		G_B32_1 = G_B31_1;
		G_B32_2 = G_B31_2;
		if ((!(((uint32_t)L_59) == ((uint32_t)((int32_t)47)))))
		{
			G_B33_0 = G_B31_0;
			G_B33_1 = G_B31_1;
			G_B33_2 = G_B31_2;
			goto IL_0193;
		}
	}

IL_018c:
	{
		String_t* L_60 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B34_0 = L_60;
		G_B34_1 = G_B32_0;
		G_B34_2 = G_B32_1;
		G_B34_3 = G_B32_2;
		goto IL_0198;
	}

IL_0193:
	{
		G_B34_0 = _stringLiteral3452614529;
		G_B34_1 = G_B33_0;
		G_B34_2 = G_B33_1;
		G_B34_3 = G_B33_2;
	}

IL_0198:
	{
		NullCheck(G_B34_2);
		ArrayElementTypeCheck (G_B34_2, G_B34_0);
		(G_B34_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B34_1), (String_t*)G_B34_0);
		StringU5BU5D_t1281789340* L_61 = G_B34_3;
		String_t* L_62 = __this->get__path_4();
		NullCheck(L_61);
		ArrayElementTypeCheck (L_61, L_62);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_62);
		StringU5BU5D_t1281789340* L_63 = L_61;
		String_t* L_64 = __this->get__query_6();
		NullCheck(L_63);
		ArrayElementTypeCheck (L_63, L_64);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)L_64);
		StringU5BU5D_t1281789340* L_65 = L_63;
		String_t* L_66 = __this->get__fragment_1();
		NullCheck(L_65);
		ArrayElementTypeCheck (L_65, L_66);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)L_66);
		String_t* L_67 = String_Concat_m1809518182(NULL /*static, unused*/, L_65, /*hidden argument*/NULL);
		return L_67;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.UriFormatException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UriFormatException__ctor_m1115096473 (UriFormatException_t953270471 * __this, const RuntimeMethod* method)
{
	{
		FormatException__ctor_m1479314061(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UriFormatException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void UriFormatException__ctor_m3083316541 (UriFormatException_t953270471 * __this, String_t* ___textString0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___textString0;
		FormatException__ctor_m4049685996(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UriFormatException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void UriFormatException__ctor_m3466512970 (UriFormatException_t953270471 * __this, SerializationInfo_t950877179 * ___serializationInfo0, StreamingContext_t3711869237  ___streamingContext1, const RuntimeMethod* method)
{
	{
		SerializationInfo_t950877179 * L_0 = ___serializationInfo0;
		StreamingContext_t3711869237  L_1 = ___streamingContext1;
		FormatException__ctor_m3747066592(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UriFormatException::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void UriFormatException_System_Runtime_Serialization_ISerializable_GetObjectData_m3030326401 (UriFormatException_t953270471 * __this, SerializationInfo_t950877179 * ___serializationInfo0, StreamingContext_t3711869237  ___streamingContext1, const RuntimeMethod* method)
{
	{
		SerializationInfo_t950877179 * L_0 = ___serializationInfo0;
		StreamingContext_t3711869237  L_1 = ___streamingContext1;
		Exception_GetObjectData_m1103241326(__this, L_0, L_1, /*hidden argument*/NULL);
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
// System.Char[] System.UriHelper::EscapeString(System.String,System.Int32,System.Int32,System.Char[],System.Int32&,System.Boolean,System.Char,System.Char,System.Char)
extern "C" IL2CPP_METHOD_ATTR CharU5BU5D_t3528271667* UriHelper_EscapeString_m4264421271 (RuntimeObject * __this /* static, unused */, String_t* ___input0, int32_t ___start1, int32_t ___end2, CharU5BU5D_t3528271667* ___dest3, int32_t* ___destPos4, bool ___isUriString5, Il2CppChar ___force16, Il2CppChar ___force27, Il2CppChar ___rsvd8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UriHelper_EscapeString_m4264421271_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t* V_2 = NULL;
	Il2CppChar* V_3 = NULL;
	String_t* V_4 = NULL;
	Il2CppChar V_5 = 0x0;
	int16_t V_6 = 0;
	int16_t V_7 = 0;
	int16_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t G_B35_0 = 0;
	{
		int32_t L_0 = ___end2;
		int32_t L_1 = ___start1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1))) < ((int32_t)((int32_t)65520))))
		{
			goto IL_001a;
		}
	}
	{
		String_t* L_2 = SR_GetString_m1137630943(NULL /*static, unused*/, _stringLiteral1067913530, /*hidden argument*/NULL);
		UriFormatException_t953270471 * L_3 = (UriFormatException_t953270471 *)il2cpp_codegen_object_new(UriFormatException_t953270471_il2cpp_TypeInfo_var);
		UriFormatException__ctor_m3083316541(L_3, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, UriHelper_EscapeString_m4264421271_RuntimeMethod_var);
	}

IL_001a:
	{
		int32_t L_4 = ___start1;
		V_0 = L_4;
		int32_t L_5 = ___start1;
		V_1 = L_5;
		int8_t* L_6 = (int8_t*) alloca((((uintptr_t)((int32_t)160))));
		memset(L_6,0,(((uintptr_t)((int32_t)160))));
		V_2 = (uint8_t*)(L_6);
		String_t* L_7 = ___input0;
		V_4 = L_7;
		String_t* L_8 = V_4;
		V_3 = (Il2CppChar*)(((uintptr_t)L_8));
		Il2CppChar* L_9 = V_3;
		if (!L_9)
		{
			goto IL_0250;
		}
	}
	{
		Il2CppChar* L_10 = V_3;
		int32_t L_11 = RuntimeHelpers_get_OffsetToStringData_m2192601476(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_10, (int32_t)L_11));
		goto IL_0250;
	}

IL_0041:
	{
		Il2CppChar* L_12 = V_3;
		int32_t L_13 = V_0;
		V_5 = (*((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_12, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)L_13)), (int32_t)2))))));
		Il2CppChar L_14 = V_5;
		if ((((int32_t)L_14) <= ((int32_t)((int32_t)127))))
		{
			goto IL_0140;
		}
	}
	{
		int32_t L_15 = ___end2;
		int32_t L_16 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Math_t1671470975_il2cpp_TypeInfo_var);
		int32_t L_17 = Math_Min_m3468062251(NULL /*static, unused*/, ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)L_16)), ((int32_t)39), /*hidden argument*/NULL);
		V_6 = (((int16_t)((int16_t)L_17)));
		V_7 = (int16_t)1;
		goto IL_006c;
	}

IL_0065:
	{
		int16_t L_18 = V_7;
		V_7 = (((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1)))));
	}

IL_006c:
	{
		int16_t L_19 = V_7;
		int16_t L_20 = V_6;
		if ((((int32_t)L_19) >= ((int32_t)L_20)))
		{
			goto IL_0080;
		}
	}
	{
		Il2CppChar* L_21 = V_3;
		int32_t L_22 = V_0;
		int16_t L_23 = V_7;
		if ((((int32_t)(*((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_21, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)L_23)))), (int32_t)2))))))) > ((int32_t)((int32_t)127))))
		{
			goto IL_0065;
		}
	}

IL_0080:
	{
		Il2CppChar* L_24 = V_3;
		int32_t L_25 = V_0;
		int16_t L_26 = V_7;
		if ((((int32_t)(*((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_24, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)L_26)), (int32_t)1)))), (int32_t)2))))))) < ((int32_t)((int32_t)55296))))
		{
			goto IL_00c9;
		}
	}
	{
		Il2CppChar* L_27 = V_3;
		int32_t L_28 = V_0;
		int16_t L_29 = V_7;
		if ((((int32_t)(*((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_27, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)L_29)), (int32_t)1)))), (int32_t)2))))))) > ((int32_t)((int32_t)56319))))
		{
			goto IL_00c9;
		}
	}
	{
		int16_t L_30 = V_7;
		if ((((int32_t)L_30) == ((int32_t)1)))
		{
			goto IL_00b2;
		}
	}
	{
		int16_t L_31 = V_7;
		int32_t L_32 = ___end2;
		int32_t L_33 = V_0;
		if ((!(((uint32_t)L_31) == ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_32, (int32_t)L_33))))))
		{
			goto IL_00c2;
		}
	}

IL_00b2:
	{
		String_t* L_34 = SR_GetString_m1137630943(NULL /*static, unused*/, _stringLiteral441545435, /*hidden argument*/NULL);
		UriFormatException_t953270471 * L_35 = (UriFormatException_t953270471 *)il2cpp_codegen_object_new(UriFormatException_t953270471_il2cpp_TypeInfo_var);
		UriFormatException__ctor_m3083316541(L_35, L_34, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, NULL, UriHelper_EscapeString_m4264421271_RuntimeMethod_var);
	}

IL_00c2:
	{
		int16_t L_36 = V_7;
		V_7 = (((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1)))));
	}

IL_00c9:
	{
		Il2CppChar* L_37 = V_3;
		CharU5BU5D_t3528271667* L_38 = ___dest3;
		int32_t L_39 = V_0;
		int16_t L_40 = V_7;
		int32_t* L_41 = ___destPos4;
		int32_t L_42 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_t3559114794_il2cpp_TypeInfo_var);
		CharU5BU5D_t3528271667* L_43 = UriHelper_EnsureDestinationSize_m2437550458(NULL /*static, unused*/, (Il2CppChar*)(Il2CppChar*)L_37, L_38, L_39, (((int16_t)((int16_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_40, (int32_t)4)), (int32_t)3))))), (int16_t)((int32_t)480), (int32_t*)L_41, L_42, /*hidden argument*/NULL);
		___dest3 = L_43;
		Encoding_t1523322056 * L_44 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		Il2CppChar* L_45 = V_3;
		int32_t L_46 = V_0;
		int16_t L_47 = V_7;
		uint8_t* L_48 = V_2;
		NullCheck(L_44);
		int32_t L_49 = VirtFuncInvoker4< int32_t, Il2CppChar*, int32_t, uint8_t*, int32_t >::Invoke(28 /* System.Int32 System.Text.Encoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32) */, L_44, (Il2CppChar*)(Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_45, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)L_46)), (int32_t)2)))), L_47, (uint8_t*)(uint8_t*)L_48, ((int32_t)160));
		V_8 = (((int16_t)((int16_t)L_49)));
		int16_t L_50 = V_8;
		if (L_50)
		{
			goto IL_0111;
		}
	}
	{
		String_t* L_51 = SR_GetString_m1137630943(NULL /*static, unused*/, _stringLiteral441545435, /*hidden argument*/NULL);
		UriFormatException_t953270471 * L_52 = (UriFormatException_t953270471 *)il2cpp_codegen_object_new(UriFormatException_t953270471_il2cpp_TypeInfo_var);
		UriFormatException__ctor_m3083316541(L_52, L_51, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_52, NULL, UriHelper_EscapeString_m4264421271_RuntimeMethod_var);
	}

IL_0111:
	{
		int32_t L_53 = V_0;
		int16_t L_54 = V_7;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_54, (int32_t)1))));
		V_7 = (int16_t)0;
		goto IL_0131;
	}

IL_011d:
	{
		uint8_t* L_55 = V_2;
		int16_t L_56 = V_7;
		CharU5BU5D_t3528271667* L_57 = ___dest3;
		int32_t* L_58 = ___destPos4;
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_t3559114794_il2cpp_TypeInfo_var);
		UriHelper_EscapeAsciiChar_m1759665887(NULL /*static, unused*/, (*((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_55, (int32_t)L_56)))), L_57, (int32_t*)L_58, /*hidden argument*/NULL);
		int16_t L_59 = V_7;
		V_7 = (((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)1)))));
	}

IL_0131:
	{
		int16_t L_60 = V_7;
		int16_t L_61 = V_8;
		if ((((int32_t)L_60) < ((int32_t)L_61)))
		{
			goto IL_011d;
		}
	}
	{
		int32_t L_62 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)1));
		goto IL_024c;
	}

IL_0140:
	{
		Il2CppChar L_63 = V_5;
		if ((!(((uint32_t)L_63) == ((uint32_t)((int32_t)37)))))
		{
			goto IL_01e0;
		}
	}
	{
		Il2CppChar L_64 = ___rsvd8;
		if ((!(((uint32_t)L_64) == ((uint32_t)((int32_t)37)))))
		{
			goto IL_01e0;
		}
	}
	{
		Il2CppChar* L_65 = V_3;
		CharU5BU5D_t3528271667* L_66 = ___dest3;
		int32_t L_67 = V_0;
		int32_t* L_68 = ___destPos4;
		int32_t L_69 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_t3559114794_il2cpp_TypeInfo_var);
		CharU5BU5D_t3528271667* L_70 = UriHelper_EnsureDestinationSize_m2437550458(NULL /*static, unused*/, (Il2CppChar*)(Il2CppChar*)L_65, L_66, L_67, (int16_t)3, (int16_t)((int32_t)120), (int32_t*)L_68, L_69, /*hidden argument*/NULL);
		___dest3 = L_70;
		int32_t L_71 = V_0;
		int32_t L_72 = ___end2;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_71, (int32_t)2))) >= ((int32_t)L_72)))
		{
			goto IL_01d0;
		}
	}
	{
		Il2CppChar* L_73 = V_3;
		int32_t L_74 = V_0;
		Il2CppChar* L_75 = V_3;
		int32_t L_76 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_t3559114794_il2cpp_TypeInfo_var);
		Il2CppChar L_77 = UriHelper_EscapedAscii_m4111282795(NULL /*static, unused*/, (*((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_73, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_74, (int32_t)1)))), (int32_t)2)))))), (*((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_75, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)2)))), (int32_t)2)))))), /*hidden argument*/NULL);
		if ((((int32_t)L_77) == ((int32_t)((int32_t)65535))))
		{
			goto IL_01d0;
		}
	}
	{
		CharU5BU5D_t3528271667* L_78 = ___dest3;
		int32_t* L_79 = ___destPos4;
		int32_t* L_80 = ___destPos4;
		V_9 = (*((int32_t*)L_80));
		int32_t L_81 = V_9;
		*((int32_t*)(L_79)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_81, (int32_t)1));
		int32_t L_82 = V_9;
		NullCheck(L_78);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(L_82), (Il2CppChar)((int32_t)37));
		CharU5BU5D_t3528271667* L_83 = ___dest3;
		int32_t* L_84 = ___destPos4;
		int32_t* L_85 = ___destPos4;
		V_9 = (*((int32_t*)L_85));
		int32_t L_86 = V_9;
		*((int32_t*)(L_84)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_86, (int32_t)1));
		int32_t L_87 = V_9;
		Il2CppChar* L_88 = V_3;
		int32_t L_89 = V_0;
		NullCheck(L_83);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(L_87), (Il2CppChar)(*((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_88, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_89, (int32_t)1)))), (int32_t)2)))))));
		CharU5BU5D_t3528271667* L_90 = ___dest3;
		int32_t* L_91 = ___destPos4;
		int32_t* L_92 = ___destPos4;
		V_9 = (*((int32_t*)L_92));
		int32_t L_93 = V_9;
		*((int32_t*)(L_91)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_93, (int32_t)1));
		int32_t L_94 = V_9;
		Il2CppChar* L_95 = V_3;
		int32_t L_96 = V_0;
		NullCheck(L_90);
		(L_90)->SetAt(static_cast<il2cpp_array_size_t>(L_94), (Il2CppChar)(*((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_95, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_96, (int32_t)2)))), (int32_t)2)))))));
		int32_t L_97 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_97, (int32_t)2));
		goto IL_01da;
	}

IL_01d0:
	{
		CharU5BU5D_t3528271667* L_98 = ___dest3;
		int32_t* L_99 = ___destPos4;
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_t3559114794_il2cpp_TypeInfo_var);
		UriHelper_EscapeAsciiChar_m1759665887(NULL /*static, unused*/, ((int32_t)37), L_98, (int32_t*)L_99, /*hidden argument*/NULL);
	}

IL_01da:
	{
		int32_t L_100 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_100, (int32_t)1));
		goto IL_024c;
	}

IL_01e0:
	{
		Il2CppChar L_101 = V_5;
		Il2CppChar L_102 = ___force16;
		if ((((int32_t)L_101) == ((int32_t)L_102)))
		{
			goto IL_01ec;
		}
	}
	{
		Il2CppChar L_103 = V_5;
		Il2CppChar L_104 = ___force27;
		if ((!(((uint32_t)L_103) == ((uint32_t)L_104))))
		{
			goto IL_020c;
		}
	}

IL_01ec:
	{
		Il2CppChar* L_105 = V_3;
		CharU5BU5D_t3528271667* L_106 = ___dest3;
		int32_t L_107 = V_0;
		int32_t* L_108 = ___destPos4;
		int32_t L_109 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_t3559114794_il2cpp_TypeInfo_var);
		CharU5BU5D_t3528271667* L_110 = UriHelper_EnsureDestinationSize_m2437550458(NULL /*static, unused*/, (Il2CppChar*)(Il2CppChar*)L_105, L_106, L_107, (int16_t)3, (int16_t)((int32_t)120), (int32_t*)L_108, L_109, /*hidden argument*/NULL);
		___dest3 = L_110;
		Il2CppChar L_111 = V_5;
		CharU5BU5D_t3528271667* L_112 = ___dest3;
		int32_t* L_113 = ___destPos4;
		UriHelper_EscapeAsciiChar_m1759665887(NULL /*static, unused*/, L_111, L_112, (int32_t*)L_113, /*hidden argument*/NULL);
		int32_t L_114 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_114, (int32_t)1));
		goto IL_024c;
	}

IL_020c:
	{
		Il2CppChar L_115 = V_5;
		Il2CppChar L_116 = ___rsvd8;
		if ((((int32_t)L_115) == ((int32_t)L_116)))
		{
			goto IL_024c;
		}
	}
	{
		bool L_117 = ___isUriString5;
		if (L_117)
		{
			goto IL_0222;
		}
	}
	{
		Il2CppChar L_118 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_t3559114794_il2cpp_TypeInfo_var);
		bool L_119 = UriHelper_IsUnreserved_m2975029334(NULL /*static, unused*/, L_118, /*hidden argument*/NULL);
		G_B35_0 = ((((int32_t)L_119) == ((int32_t)0))? 1 : 0);
		goto IL_022c;
	}

IL_0222:
	{
		Il2CppChar L_120 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_t3559114794_il2cpp_TypeInfo_var);
		bool L_121 = UriHelper_IsReservedUnreservedOrHash_m1469489854(NULL /*static, unused*/, L_120, /*hidden argument*/NULL);
		G_B35_0 = ((((int32_t)L_121) == ((int32_t)0))? 1 : 0);
	}

IL_022c:
	{
		if (!G_B35_0)
		{
			goto IL_024c;
		}
	}
	{
		Il2CppChar* L_122 = V_3;
		CharU5BU5D_t3528271667* L_123 = ___dest3;
		int32_t L_124 = V_0;
		int32_t* L_125 = ___destPos4;
		int32_t L_126 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_t3559114794_il2cpp_TypeInfo_var);
		CharU5BU5D_t3528271667* L_127 = UriHelper_EnsureDestinationSize_m2437550458(NULL /*static, unused*/, (Il2CppChar*)(Il2CppChar*)L_122, L_123, L_124, (int16_t)3, (int16_t)((int32_t)120), (int32_t*)L_125, L_126, /*hidden argument*/NULL);
		___dest3 = L_127;
		Il2CppChar L_128 = V_5;
		CharU5BU5D_t3528271667* L_129 = ___dest3;
		int32_t* L_130 = ___destPos4;
		UriHelper_EscapeAsciiChar_m1759665887(NULL /*static, unused*/, L_128, L_129, (int32_t*)L_130, /*hidden argument*/NULL);
		int32_t L_131 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_131, (int32_t)1));
	}

IL_024c:
	{
		int32_t L_132 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_132, (int32_t)1));
	}

IL_0250:
	{
		int32_t L_133 = V_0;
		int32_t L_134 = ___end2;
		if ((((int32_t)L_133) < ((int32_t)L_134)))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_135 = V_1;
		int32_t L_136 = V_0;
		if ((((int32_t)L_135) == ((int32_t)L_136)))
		{
			goto IL_0271;
		}
	}
	{
		int32_t L_137 = V_1;
		int32_t L_138 = ___start1;
		if ((!(((uint32_t)L_137) == ((uint32_t)L_138))))
		{
			goto IL_0262;
		}
	}
	{
		CharU5BU5D_t3528271667* L_139 = ___dest3;
		if (!L_139)
		{
			goto IL_0271;
		}
	}

IL_0262:
	{
		Il2CppChar* L_140 = V_3;
		CharU5BU5D_t3528271667* L_141 = ___dest3;
		int32_t L_142 = V_0;
		int32_t* L_143 = ___destPos4;
		int32_t L_144 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_t3559114794_il2cpp_TypeInfo_var);
		CharU5BU5D_t3528271667* L_145 = UriHelper_EnsureDestinationSize_m2437550458(NULL /*static, unused*/, (Il2CppChar*)(Il2CppChar*)L_140, L_141, L_142, (int16_t)0, (int16_t)0, (int32_t*)L_143, L_144, /*hidden argument*/NULL);
		___dest3 = L_145;
	}

IL_0271:
	{
		V_4 = (String_t*)NULL;
		CharU5BU5D_t3528271667* L_146 = ___dest3;
		return L_146;
	}
}
// System.Char[] System.UriHelper::EnsureDestinationSize(System.Char*,System.Char[],System.Int32,System.Int16,System.Int16,System.Int32&,System.Int32)
extern "C" IL2CPP_METHOD_ATTR CharU5BU5D_t3528271667* UriHelper_EnsureDestinationSize_m2437550458 (RuntimeObject * __this /* static, unused */, Il2CppChar* ___pStr0, CharU5BU5D_t3528271667* ___dest1, int32_t ___currentInputPos2, int16_t ___charsToAdd3, int16_t ___minReallocateChars4, int32_t* ___destPos5, int32_t ___prevInputPos6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UriHelper_EnsureDestinationSize_m2437550458_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t3528271667* V_0 = NULL;
	int32_t V_1 = 0;
	{
		CharU5BU5D_t3528271667* L_0 = ___dest1;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		CharU5BU5D_t3528271667* L_1 = ___dest1;
		NullCheck(L_1);
		int32_t* L_2 = ___destPos5;
		int32_t L_3 = ___currentInputPos2;
		int32_t L_4 = ___prevInputPos6;
		int16_t L_5 = ___charsToAdd3;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length))))) >= ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_2)), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)L_4)))), (int32_t)L_5)))))
		{
			goto IL_0058;
		}
	}

IL_0012:
	{
		int32_t* L_6 = ___destPos5;
		int32_t L_7 = ___currentInputPos2;
		int32_t L_8 = ___prevInputPos6;
		int16_t L_9 = ___minReallocateChars4;
		CharU5BU5D_t3528271667* L_10 = (CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_6)), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)L_8)))), (int32_t)L_9)));
		V_0 = L_10;
		CharU5BU5D_t3528271667* L_11 = ___dest1;
		if (!L_11)
		{
			goto IL_0039;
		}
	}
	{
		int32_t* L_12 = ___destPos5;
		if (!(*((int32_t*)L_12)))
		{
			goto IL_0039;
		}
	}
	{
		CharU5BU5D_t3528271667* L_13 = ___dest1;
		CharU5BU5D_t3528271667* L_14 = V_0;
		int32_t* L_15 = ___destPos5;
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_13, 0, (RuntimeArray *)(RuntimeArray *)L_14, 0, ((int32_t)((int32_t)(*((int32_t*)L_15))<<(int32_t)1)), /*hidden argument*/NULL);
	}

IL_0039:
	{
		CharU5BU5D_t3528271667* L_16 = V_0;
		___dest1 = L_16;
		goto IL_0058;
	}

IL_003e:
	{
		CharU5BU5D_t3528271667* L_17 = ___dest1;
		int32_t* L_18 = ___destPos5;
		int32_t* L_19 = ___destPos5;
		V_1 = (*((int32_t*)L_19));
		int32_t L_20 = V_1;
		*((int32_t*)(L_18)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
		int32_t L_21 = V_1;
		Il2CppChar* L_22 = ___pStr0;
		int32_t L_23 = ___prevInputPos6;
		int32_t L_24 = L_23;
		___prevInputPos6 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (Il2CppChar)(*((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_22, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)L_24)), (int32_t)2)))))));
	}

IL_0058:
	{
		int32_t L_25 = ___prevInputPos6;
		int32_t L_26 = ___currentInputPos2;
		if ((!(((uint32_t)L_25) == ((uint32_t)L_26))))
		{
			goto IL_003e;
		}
	}
	{
		CharU5BU5D_t3528271667* L_27 = ___dest1;
		return L_27;
	}
}
// System.Char[] System.UriHelper::UnescapeString(System.String,System.Int32,System.Int32,System.Char[],System.Int32&,System.Char,System.Char,System.Char,System.UnescapeMode,System.UriParser,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR CharU5BU5D_t3528271667* UriHelper_UnescapeString_m3609332223 (RuntimeObject * __this /* static, unused */, String_t* ___input0, int32_t ___start1, int32_t ___end2, CharU5BU5D_t3528271667* ___dest3, int32_t* ___destPosition4, Il2CppChar ___rsvd15, Il2CppChar ___rsvd26, Il2CppChar ___rsvd37, int32_t ___unescapeMode8, UriParser_t3890150400 * ___syntax9, bool ___isQuery10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UriHelper_UnescapeString_m3609332223_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		String_t* L_0 = ___input0;
		V_1 = L_0;
		String_t* L_1 = V_1;
		V_0 = (Il2CppChar*)(((uintptr_t)L_1));
		Il2CppChar* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		Il2CppChar* L_3 = V_0;
		int32_t L_4 = RuntimeHelpers_get_OffsetToStringData_m2192601476(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_3, (int32_t)L_4));
	}

IL_0010:
	{
		Il2CppChar* L_5 = V_0;
		int32_t L_6 = ___start1;
		int32_t L_7 = ___end2;
		CharU5BU5D_t3528271667* L_8 = ___dest3;
		int32_t* L_9 = ___destPosition4;
		Il2CppChar L_10 = ___rsvd15;
		Il2CppChar L_11 = ___rsvd26;
		Il2CppChar L_12 = ___rsvd37;
		int32_t L_13 = ___unescapeMode8;
		UriParser_t3890150400 * L_14 = ___syntax9;
		bool L_15 = ___isQuery10;
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_t3559114794_il2cpp_TypeInfo_var);
		CharU5BU5D_t3528271667* L_16 = UriHelper_UnescapeString_m2854369216(NULL /*static, unused*/, (Il2CppChar*)(Il2CppChar*)L_5, L_6, L_7, L_8, (int32_t*)L_9, L_10, L_11, L_12, L_13, L_14, L_15, /*hidden argument*/NULL);
		return L_16;
	}
}
// System.Char[] System.UriHelper::UnescapeString(System.Char*,System.Int32,System.Int32,System.Char[],System.Int32&,System.Char,System.Char,System.Char,System.UnescapeMode,System.UriParser,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR CharU5BU5D_t3528271667* UriHelper_UnescapeString_m2854369216 (RuntimeObject * __this /* static, unused */, Il2CppChar* ___pStr0, int32_t ___start1, int32_t ___end2, CharU5BU5D_t3528271667* ___dest3, int32_t* ___destPosition4, Il2CppChar ___rsvd15, Il2CppChar ___rsvd26, Il2CppChar ___rsvd37, int32_t ___unescapeMode8, UriParser_t3890150400 * ___syntax9, bool ___isQuery10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UriHelper_UnescapeString_m2854369216_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	uint8_t V_1 = 0x0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	Il2CppChar* V_5 = NULL;
	CharU5BU5D_t3528271667* V_6 = NULL;
	int32_t V_7 = 0;
	CharU5BU5D_t3528271667* V_8 = NULL;
	Il2CppChar V_9 = 0x0;
	int32_t V_10 = 0;
	CharU5BU5D_t3528271667* V_11 = NULL;
	int32_t V_12 = 0;
	CharU5BU5D_t3528271667* V_13 = NULL;
	Il2CppChar* V_14 = NULL;
	CharU5BU5D_t3528271667* V_15 = NULL;
	int32_t V_16 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B3_0 = 0;
	{
		V_0 = (ByteU5BU5D_t4116647657*)NULL;
		V_1 = (uint8_t)0;
		V_2 = (bool)0;
		int32_t L_0 = ___start1;
		V_3 = L_0;
		UriParser_t3890150400 * L_1 = ___syntax9;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t100236324_il2cpp_TypeInfo_var);
		bool L_2 = Uri_IriParsingStatic_m3844828870(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = ___unescapeMode8;
		G_B3_0 = ((((int32_t)((int32_t)((int32_t)L_3&(int32_t)3))) == ((int32_t)3))? 1 : 0);
		goto IL_001b;
	}

IL_001a:
	{
		G_B3_0 = 0;
	}

IL_001b:
	{
		V_4 = (bool)G_B3_0;
	}

IL_001d:
	{
	}

IL_001e:
	try
	{ // begin try (depth: 1)
		{
			CharU5BU5D_t3528271667* L_4 = ___dest3;
			CharU5BU5D_t3528271667* L_5 = L_4;
			V_6 = L_5;
			if (!L_5)
			{
				goto IL_002a;
			}
		}

IL_0024:
		{
			CharU5BU5D_t3528271667* L_6 = V_6;
			NullCheck(L_6);
			if ((((int32_t)((int32_t)(((RuntimeArray *)L_6)->max_length)))))
			{
				goto IL_0030;
			}
		}

IL_002a:
		{
			V_5 = (Il2CppChar*)(((uintptr_t)0));
			goto IL_003b;
		}

IL_0030:
		{
			CharU5BU5D_t3528271667* L_7 = V_6;
			NullCheck(L_7);
			V_5 = (Il2CppChar*)(((uintptr_t)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))));
		}

IL_003b:
		{
			int32_t L_8 = ___unescapeMode8;
			if (((int32_t)((int32_t)L_8&(int32_t)3)))
			{
				goto IL_0070;
			}
		}

IL_0041:
		{
			goto IL_0064;
		}

IL_0043:
		{
			Il2CppChar* L_9 = V_5;
			int32_t* L_10 = ___destPosition4;
			int32_t* L_11 = ___destPosition4;
			V_7 = (*((int32_t*)L_11));
			int32_t L_12 = V_7;
			*((int32_t*)(L_10)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
			int32_t L_13 = V_7;
			Il2CppChar* L_14 = ___pStr0;
			int32_t L_15 = ___start1;
			int32_t L_16 = L_15;
			___start1 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
			*((int16_t*)(((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_9, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)L_13)), (int32_t)2)))))) = (int16_t)(*((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_14, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)L_16)), (int32_t)2))))));
		}

IL_0064:
		{
			int32_t L_17 = ___start1;
			int32_t L_18 = ___end2;
			if ((((int32_t)L_17) < ((int32_t)L_18)))
			{
				goto IL_0043;
			}
		}

IL_0068:
		{
			CharU5BU5D_t3528271667* L_19 = ___dest3;
			V_8 = L_19;
			IL2CPP_LEAVE(0x39C, FINALLY_0396);
		}

IL_0070:
		{
			V_9 = 0;
			goto IL_01dd;
		}

IL_0078:
		{
			Il2CppChar* L_20 = ___pStr0;
			int32_t L_21 = V_3;
			int32_t L_22 = (*((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_20, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)L_21)), (int32_t)2))))));
			V_9 = L_22;
			if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)37)))))
			{
				goto IL_0195;
			}
		}

IL_0089:
		{
			int32_t L_23 = ___unescapeMode8;
			if (((int32_t)((int32_t)L_23&(int32_t)2)))
			{
				goto IL_0096;
			}
		}

IL_008f:
		{
			V_2 = (bool)1;
			goto IL_0207;
		}

IL_0096:
		{
			int32_t L_24 = V_3;
			int32_t L_25 = ___end2;
			if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)2))) >= ((int32_t)L_25)))
			{
				goto IL_0176;
			}
		}

IL_009f:
		{
			Il2CppChar* L_26 = ___pStr0;
			int32_t L_27 = V_3;
			Il2CppChar* L_28 = ___pStr0;
			int32_t L_29 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(UriHelper_t3559114794_il2cpp_TypeInfo_var);
			Il2CppChar L_30 = UriHelper_EscapedAscii_m4111282795(NULL /*static, unused*/, (*((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_26, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1)))), (int32_t)2)))))), (*((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_28, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)2)))), (int32_t)2)))))), /*hidden argument*/NULL);
			V_9 = L_30;
			int32_t L_31 = ___unescapeMode8;
			if ((((int32_t)L_31) < ((int32_t)8)))
			{
				goto IL_00e2;
			}
		}

IL_00bd:
		{
			Il2CppChar L_32 = V_9;
			if ((!(((uint32_t)L_32) == ((uint32_t)((int32_t)65535)))))
			{
				goto IL_0207;
			}
		}

IL_00c9:
		{
			int32_t L_33 = ___unescapeMode8;
			if ((((int32_t)L_33) < ((int32_t)((int32_t)24))))
			{
				goto IL_01d9;
			}
		}

IL_00d2:
		{
			String_t* L_34 = SR_GetString_m1137630943(NULL /*static, unused*/, _stringLiteral441545435, /*hidden argument*/NULL);
			UriFormatException_t953270471 * L_35 = (UriFormatException_t953270471 *)il2cpp_codegen_object_new(UriFormatException_t953270471_il2cpp_TypeInfo_var);
			UriFormatException__ctor_m3083316541(L_35, L_34, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, NULL, UriHelper_UnescapeString_m2854369216_RuntimeMethod_var);
		}

IL_00e2:
		{
			Il2CppChar L_36 = V_9;
			if ((!(((uint32_t)L_36) == ((uint32_t)((int32_t)65535)))))
			{
				goto IL_00fb;
			}
		}

IL_00eb:
		{
			int32_t L_37 = ___unescapeMode8;
			if (!((int32_t)((int32_t)L_37&(int32_t)1)))
			{
				goto IL_01d9;
			}
		}

IL_00f4:
		{
			V_2 = (bool)1;
			goto IL_0207;
		}

IL_00fb:
		{
			Il2CppChar L_38 = V_9;
			if ((!(((uint32_t)L_38) == ((uint32_t)((int32_t)37)))))
			{
				goto IL_010a;
			}
		}

IL_0101:
		{
			int32_t L_39 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)2));
			goto IL_01d9;
		}

IL_010a:
		{
			Il2CppChar L_40 = V_9;
			Il2CppChar L_41 = ___rsvd15;
			if ((((int32_t)L_40) == ((int32_t)L_41)))
			{
				goto IL_011c;
			}
		}

IL_0110:
		{
			Il2CppChar L_42 = V_9;
			Il2CppChar L_43 = ___rsvd26;
			if ((((int32_t)L_42) == ((int32_t)L_43)))
			{
				goto IL_011c;
			}
		}

IL_0116:
		{
			Il2CppChar L_44 = V_9;
			Il2CppChar L_45 = ___rsvd37;
			if ((!(((uint32_t)L_44) == ((uint32_t)L_45))))
			{
				goto IL_0125;
			}
		}

IL_011c:
		{
			int32_t L_46 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)2));
			goto IL_01d9;
		}

IL_0125:
		{
			int32_t L_47 = ___unescapeMode8;
			if (((int32_t)((int32_t)L_47&(int32_t)4)))
			{
				goto IL_013d;
			}
		}

IL_012b:
		{
			Il2CppChar L_48 = V_9;
			IL2CPP_RUNTIME_CLASS_INIT(UriHelper_t3559114794_il2cpp_TypeInfo_var);
			bool L_49 = UriHelper_IsNotSafeForUnescape_m1772803964(NULL /*static, unused*/, L_48, /*hidden argument*/NULL);
			if (!L_49)
			{
				goto IL_013d;
			}
		}

IL_0134:
		{
			int32_t L_50 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)2));
			goto IL_01d9;
		}

IL_013d:
		{
			bool L_51 = V_4;
			if (!L_51)
			{
				goto IL_0207;
			}
		}

IL_0144:
		{
			Il2CppChar L_52 = V_9;
			if ((((int32_t)L_52) > ((int32_t)((int32_t)159))))
			{
				goto IL_0156;
			}
		}

IL_014d:
		{
			Il2CppChar L_53 = V_9;
			IL2CPP_RUNTIME_CLASS_INIT(UriHelper_t3559114794_il2cpp_TypeInfo_var);
			bool L_54 = UriHelper_IsNotSafeForUnescape_m1772803964(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
			if (L_54)
			{
				goto IL_0170;
			}
		}

IL_0156:
		{
			Il2CppChar L_55 = V_9;
			if ((((int32_t)L_55) <= ((int32_t)((int32_t)159))))
			{
				goto IL_0207;
			}
		}

IL_0162:
		{
			Il2CppChar L_56 = V_9;
			bool L_57 = ___isQuery10;
			bool L_58 = IriHelper_CheckIriUnicodeRange_m2504575242(NULL /*static, unused*/, L_56, L_57, /*hidden argument*/NULL);
			if (L_58)
			{
				goto IL_0207;
			}
		}

IL_0170:
		{
			int32_t L_59 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)2));
			goto IL_01d9;
		}

IL_0176:
		{
			int32_t L_60 = ___unescapeMode8;
			if ((((int32_t)L_60) < ((int32_t)8)))
			{
				goto IL_0191;
			}
		}

IL_017b:
		{
			int32_t L_61 = ___unescapeMode8;
			if ((((int32_t)L_61) < ((int32_t)((int32_t)24))))
			{
				goto IL_01d9;
			}
		}

IL_0181:
		{
			String_t* L_62 = SR_GetString_m1137630943(NULL /*static, unused*/, _stringLiteral441545435, /*hidden argument*/NULL);
			UriFormatException_t953270471 * L_63 = (UriFormatException_t953270471 *)il2cpp_codegen_object_new(UriFormatException_t953270471_il2cpp_TypeInfo_var);
			UriFormatException__ctor_m3083316541(L_63, L_62, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_63, NULL, UriHelper_UnescapeString_m2854369216_RuntimeMethod_var);
		}

IL_0191:
		{
			V_2 = (bool)1;
			goto IL_0207;
		}

IL_0195:
		{
			int32_t L_64 = ___unescapeMode8;
			if ((((int32_t)((int32_t)((int32_t)L_64&(int32_t)((int32_t)10)))) == ((int32_t)((int32_t)10))))
			{
				goto IL_01d9;
			}
		}

IL_019e:
		{
			int32_t L_65 = ___unescapeMode8;
			if (!((int32_t)((int32_t)L_65&(int32_t)1)))
			{
				goto IL_01d9;
			}
		}

IL_01a4:
		{
			Il2CppChar L_66 = V_9;
			Il2CppChar L_67 = ___rsvd15;
			if ((((int32_t)L_66) == ((int32_t)L_67)))
			{
				goto IL_01b6;
			}
		}

IL_01aa:
		{
			Il2CppChar L_68 = V_9;
			Il2CppChar L_69 = ___rsvd26;
			if ((((int32_t)L_68) == ((int32_t)L_69)))
			{
				goto IL_01b6;
			}
		}

IL_01b0:
		{
			Il2CppChar L_70 = V_9;
			Il2CppChar L_71 = ___rsvd37;
			if ((!(((uint32_t)L_70) == ((uint32_t)L_71))))
			{
				goto IL_01ba;
			}
		}

IL_01b6:
		{
			V_2 = (bool)1;
			goto IL_0207;
		}

IL_01ba:
		{
			int32_t L_72 = ___unescapeMode8;
			if (((int32_t)((int32_t)L_72&(int32_t)4)))
			{
				goto IL_01d9;
			}
		}

IL_01c0:
		{
			Il2CppChar L_73 = V_9;
			if ((((int32_t)L_73) <= ((int32_t)((int32_t)31))))
			{
				goto IL_01d5;
			}
		}

IL_01c6:
		{
			Il2CppChar L_74 = V_9;
			if ((((int32_t)L_74) < ((int32_t)((int32_t)127))))
			{
				goto IL_01d9;
			}
		}

IL_01cc:
		{
			Il2CppChar L_75 = V_9;
			if ((((int32_t)L_75) > ((int32_t)((int32_t)159))))
			{
				goto IL_01d9;
			}
		}

IL_01d5:
		{
			V_2 = (bool)1;
			goto IL_0207;
		}

IL_01d9:
		{
			int32_t L_76 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
		}

IL_01dd:
		{
			int32_t L_77 = V_3;
			int32_t L_78 = ___end2;
			if ((((int32_t)L_77) < ((int32_t)L_78)))
			{
				goto IL_0078;
			}
		}

IL_01e4:
		{
			goto IL_0207;
		}

IL_01e6:
		{
			Il2CppChar* L_79 = V_5;
			int32_t* L_80 = ___destPosition4;
			int32_t* L_81 = ___destPosition4;
			V_7 = (*((int32_t*)L_81));
			int32_t L_82 = V_7;
			*((int32_t*)(L_80)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_82, (int32_t)1));
			int32_t L_83 = V_7;
			Il2CppChar* L_84 = ___pStr0;
			int32_t L_85 = ___start1;
			int32_t L_86 = L_85;
			___start1 = ((int32_t)il2cpp_codegen_add((int32_t)L_86, (int32_t)1));
			*((int16_t*)(((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_79, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)L_83)), (int32_t)2)))))) = (int16_t)(*((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_84, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)L_86)), (int32_t)2))))));
		}

IL_0207:
		{
			int32_t L_87 = ___start1;
			int32_t L_88 = V_3;
			if ((((int32_t)L_87) < ((int32_t)L_88)))
			{
				goto IL_01e6;
			}
		}

IL_020b:
		{
			int32_t L_89 = V_3;
			int32_t L_90 = ___end2;
			if ((((int32_t)L_89) == ((int32_t)L_90)))
			{
				goto IL_038d;
			}
		}

IL_0212:
		{
			bool L_91 = V_2;
			if (!L_91)
			{
				goto IL_029c;
			}
		}

IL_0218:
		{
			uint8_t L_92 = V_1;
			if (L_92)
			{
				goto IL_027a;
			}
		}

IL_021b:
		{
			V_1 = (uint8_t)((int32_t)30);
			CharU5BU5D_t3528271667* L_93 = ___dest3;
			NullCheck(L_93);
			uint8_t L_94 = V_1;
			CharU5BU5D_t3528271667* L_95 = (CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_93)->max_length)))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_94, (int32_t)3)))));
			V_13 = L_95;
			CharU5BU5D_t3528271667* L_96 = V_13;
			CharU5BU5D_t3528271667* L_97 = L_96;
			V_15 = L_97;
			if (!L_97)
			{
				goto IL_0239;
			}
		}

IL_0233:
		{
			CharU5BU5D_t3528271667* L_98 = V_15;
			NullCheck(L_98);
			if ((((int32_t)((int32_t)(((RuntimeArray *)L_98)->max_length)))))
			{
				goto IL_023f;
			}
		}

IL_0239:
		{
			V_14 = (Il2CppChar*)(((uintptr_t)0));
			goto IL_024a;
		}

IL_023f:
		{
			CharU5BU5D_t3528271667* L_99 = V_15;
			NullCheck(L_99);
			V_14 = (Il2CppChar*)(((uintptr_t)((L_99)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))));
		}

IL_024a:
		{
			V_16 = 0;
			goto IL_0267;
		}

IL_024f:
		{
			Il2CppChar* L_100 = V_14;
			int32_t L_101 = V_16;
			Il2CppChar* L_102 = V_5;
			int32_t L_103 = V_16;
			*((int16_t*)(((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_100, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)L_101)), (int32_t)2)))))) = (int16_t)(*((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_102, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)L_103)), (int32_t)2))))));
			int32_t L_104 = V_16;
			V_16 = ((int32_t)il2cpp_codegen_add((int32_t)L_104, (int32_t)1));
		}

IL_0267:
		{
			int32_t L_105 = V_16;
			int32_t* L_106 = ___destPosition4;
			if ((((int32_t)L_105) < ((int32_t)(*((int32_t*)L_106)))))
			{
				goto IL_024f;
			}
		}

IL_026e:
		{
			V_15 = (CharU5BU5D_t3528271667*)NULL;
			CharU5BU5D_t3528271667* L_107 = V_13;
			___dest3 = L_107;
			IL2CPP_LEAVE(0x1D, FINALLY_0396);
		}

IL_027a:
		{
			uint8_t L_108 = V_1;
			V_1 = (uint8_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_108, (int32_t)1)))));
			Il2CppChar* L_109 = ___pStr0;
			int32_t L_110 = V_3;
			CharU5BU5D_t3528271667* L_111 = ___dest3;
			int32_t* L_112 = ___destPosition4;
			IL2CPP_RUNTIME_CLASS_INIT(UriHelper_t3559114794_il2cpp_TypeInfo_var);
			UriHelper_EscapeAsciiChar_m1759665887(NULL /*static, unused*/, (*((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_109, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)L_110)), (int32_t)2)))))), L_111, (int32_t*)L_112, /*hidden argument*/NULL);
			V_2 = (bool)0;
			int32_t L_113 = V_3;
			int32_t L_114 = ((int32_t)il2cpp_codegen_add((int32_t)L_113, (int32_t)1));
			V_3 = L_114;
			___start1 = L_114;
			goto IL_0070;
		}

IL_029c:
		{
			Il2CppChar L_115 = V_9;
			if ((((int32_t)L_115) > ((int32_t)((int32_t)127))))
			{
				goto IL_02c0;
			}
		}

IL_02a2:
		{
			CharU5BU5D_t3528271667* L_116 = ___dest3;
			int32_t* L_117 = ___destPosition4;
			int32_t* L_118 = ___destPosition4;
			V_7 = (*((int32_t*)L_118));
			int32_t L_119 = V_7;
			*((int32_t*)(L_117)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_119, (int32_t)1));
			int32_t L_120 = V_7;
			Il2CppChar L_121 = V_9;
			NullCheck(L_116);
			(L_116)->SetAt(static_cast<il2cpp_array_size_t>(L_120), (Il2CppChar)L_121);
			int32_t L_122 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_122, (int32_t)3));
			int32_t L_123 = V_3;
			___start1 = L_123;
			goto IL_0070;
		}

IL_02c0:
		{
			V_10 = 1;
			ByteU5BU5D_t4116647657* L_124 = V_0;
			if (L_124)
			{
				goto IL_02cf;
			}
		}

IL_02c6:
		{
			int32_t L_125 = ___end2;
			int32_t L_126 = V_3;
			ByteU5BU5D_t4116647657* L_127 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_125, (int32_t)L_126)));
			V_0 = L_127;
		}

IL_02cf:
		{
			ByteU5BU5D_t4116647657* L_128 = V_0;
			Il2CppChar L_129 = V_9;
			NullCheck(L_128);
			(L_128)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)(((int32_t)((uint8_t)L_129))));
			int32_t L_130 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_130, (int32_t)3));
			goto IL_032a;
		}

IL_02db:
		{
			Il2CppChar* L_131 = ___pStr0;
			int32_t L_132 = V_3;
			int32_t L_133 = (*((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_131, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)L_132)), (int32_t)2))))));
			V_9 = L_133;
			if ((!(((uint32_t)L_133) == ((uint32_t)((int32_t)37)))))
			{
				goto IL_032e;
			}
		}

IL_02e9:
		{
			int32_t L_134 = V_3;
			int32_t L_135 = ___end2;
			if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_134, (int32_t)2))) >= ((int32_t)L_135)))
			{
				goto IL_032e;
			}
		}

IL_02ef:
		{
			Il2CppChar* L_136 = ___pStr0;
			int32_t L_137 = V_3;
			Il2CppChar* L_138 = ___pStr0;
			int32_t L_139 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(UriHelper_t3559114794_il2cpp_TypeInfo_var);
			Il2CppChar L_140 = UriHelper_EscapedAscii_m4111282795(NULL /*static, unused*/, (*((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_136, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_137, (int32_t)1)))), (int32_t)2)))))), (*((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_138, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_139, (int32_t)2)))), (int32_t)2)))))), /*hidden argument*/NULL);
			V_9 = L_140;
			Il2CppChar L_141 = V_9;
			if ((((int32_t)L_141) == ((int32_t)((int32_t)65535))))
			{
				goto IL_032e;
			}
		}

IL_0311:
		{
			Il2CppChar L_142 = V_9;
			if ((((int32_t)L_142) < ((int32_t)((int32_t)128))))
			{
				goto IL_032e;
			}
		}

IL_031a:
		{
			ByteU5BU5D_t4116647657* L_143 = V_0;
			int32_t L_144 = V_10;
			int32_t L_145 = L_144;
			V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_145, (int32_t)1));
			Il2CppChar L_146 = V_9;
			NullCheck(L_143);
			(L_143)->SetAt(static_cast<il2cpp_array_size_t>(L_145), (uint8_t)(((int32_t)((uint8_t)L_146))));
			int32_t L_147 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_147, (int32_t)3));
		}

IL_032a:
		{
			int32_t L_148 = V_3;
			int32_t L_149 = ___end2;
			if ((((int32_t)L_148) < ((int32_t)L_149)))
			{
				goto IL_02db;
			}
		}

IL_032e:
		{
			Encoding_t1523322056 * L_150 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
			NullCheck(L_150);
			RuntimeObject * L_151 = VirtFuncInvoker0< RuntimeObject * >::Invoke(17 /* System.Object System.Text.Encoding::Clone() */, L_150);
			Encoding_t1523322056 * L_152 = ((Encoding_t1523322056 *)CastclassClass((RuntimeObject*)L_151, Encoding_t1523322056_il2cpp_TypeInfo_var));
			EncoderReplacementFallback_t1623206753 * L_153 = (EncoderReplacementFallback_t1623206753 *)il2cpp_codegen_object_new(EncoderReplacementFallback_t1623206753_il2cpp_TypeInfo_var);
			EncoderReplacementFallback__ctor_m1483565116(L_153, _stringLiteral757602046, /*hidden argument*/NULL);
			NullCheck(L_152);
			Encoding_set_EncoderFallback_m1965676933(L_152, L_153, /*hidden argument*/NULL);
			Encoding_t1523322056 * L_154 = L_152;
			DecoderReplacementFallback_t1462101135 * L_155 = (DecoderReplacementFallback_t1462101135 *)il2cpp_codegen_object_new(DecoderReplacementFallback_t1462101135_il2cpp_TypeInfo_var);
			DecoderReplacementFallback__ctor_m2470322217(L_155, _stringLiteral757602046, /*hidden argument*/NULL);
			NullCheck(L_154);
			Encoding_set_DecoderFallback_m148532738(L_154, L_155, /*hidden argument*/NULL);
			ByteU5BU5D_t4116647657* L_156 = V_0;
			NullCheck(L_156);
			CharU5BU5D_t3528271667* L_157 = (CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_156)->max_length)))));
			V_11 = L_157;
			ByteU5BU5D_t4116647657* L_158 = V_0;
			int32_t L_159 = V_10;
			CharU5BU5D_t3528271667* L_160 = V_11;
			NullCheck(L_154);
			int32_t L_161 = VirtFuncInvoker5< int32_t, ByteU5BU5D_t4116647657*, int32_t, int32_t, CharU5BU5D_t3528271667*, int32_t >::Invoke(33 /* System.Int32 System.Text.Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32) */, L_154, L_158, 0, L_159, L_160, 0);
			V_12 = L_161;
			int32_t L_162 = V_3;
			___start1 = L_162;
			Il2CppChar* L_163 = V_5;
			CharU5BU5D_t3528271667* L_164 = ___dest3;
			int32_t* L_165 = ___destPosition4;
			CharU5BU5D_t3528271667* L_166 = V_11;
			int32_t L_167 = V_12;
			ByteU5BU5D_t4116647657* L_168 = V_0;
			int32_t L_169 = V_10;
			bool L_170 = ___isQuery10;
			bool L_171 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(UriHelper_t3559114794_il2cpp_TypeInfo_var);
			UriHelper_MatchUTF8Sequence_m1799602598(NULL /*static, unused*/, (Il2CppChar*)(Il2CppChar*)L_163, L_164, (int32_t*)L_165, L_166, L_167, L_168, L_169, L_170, L_171, /*hidden argument*/NULL);
		}

IL_038d:
		{
			int32_t L_172 = V_3;
			int32_t L_173 = ___end2;
			if ((!(((uint32_t)L_172) == ((uint32_t)L_173))))
			{
				goto IL_0070;
			}
		}

IL_0394:
		{
			IL2CPP_LEAVE(0x39A, FINALLY_0396);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0396;
	}

FINALLY_0396:
	{ // begin finally (depth: 1)
		V_6 = (CharU5BU5D_t3528271667*)NULL;
		IL2CPP_END_FINALLY(918)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(918)
	{
		IL2CPP_JUMP_TBL(0x39C, IL_039c)
		IL2CPP_JUMP_TBL(0x1D, IL_001d)
		IL2CPP_JUMP_TBL(0x39A, IL_039a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_039a:
	{
		CharU5BU5D_t3528271667* L_174 = ___dest3;
		return L_174;
	}

IL_039c:
	{
		CharU5BU5D_t3528271667* L_175 = V_8;
		return L_175;
	}
}
// System.Void System.UriHelper::MatchUTF8Sequence(System.Char*,System.Char[],System.Int32&,System.Char[],System.Int32,System.Byte[],System.Int32,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UriHelper_MatchUTF8Sequence_m1799602598 (RuntimeObject * __this /* static, unused */, Il2CppChar* ___pDest0, CharU5BU5D_t3528271667* ___dest1, int32_t* ___destOffset2, CharU5BU5D_t3528271667* ___unescapedChars3, int32_t ___charCount4, ByteU5BU5D_t4116647657* ___bytes5, int32_t ___byteCount6, bool ___isQuery7, bool ___iriParsing8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UriHelper_MatchUTF8Sequence_m1799602598_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Il2CppChar* V_1 = NULL;
	CharU5BU5D_t3528271667* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	ByteU5BU5D_t4116647657* V_5 = NULL;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	CharU5BU5D_t3528271667* G_B7_1 = NULL;
	Encoding_t1523322056 * G_B7_2 = NULL;
	int32_t G_B6_0 = 0;
	CharU5BU5D_t3528271667* G_B6_1 = NULL;
	Encoding_t1523322056 * G_B6_2 = NULL;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	CharU5BU5D_t3528271667* G_B8_2 = NULL;
	Encoding_t1523322056 * G_B8_3 = NULL;
	{
		V_0 = 0;
		CharU5BU5D_t3528271667* L_0 = ___unescapedChars3;
		CharU5BU5D_t3528271667* L_1 = L_0;
		V_2 = L_1;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		CharU5BU5D_t3528271667* L_2 = V_2;
		NullCheck(L_2);
		if ((((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length)))))
		{
			goto IL_0011;
		}
	}

IL_000c:
	{
		V_1 = (Il2CppChar*)(((uintptr_t)0));
		goto IL_001a;
	}

IL_0011:
	{
		CharU5BU5D_t3528271667* L_3 = V_2;
		NullCheck(L_3);
		V_1 = (Il2CppChar*)(((uintptr_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))));
	}

IL_001a:
	{
		V_3 = 0;
		goto IL_01aa;
	}

IL_0021:
	{
		Il2CppChar* L_4 = V_1;
		int32_t L_5 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_6 = Char_IsHighSurrogate_m2151882768(NULL /*static, unused*/, (*((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_4, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)L_5)), (int32_t)2)))))), /*hidden argument*/NULL);
		V_4 = L_6;
		Encoding_t1523322056 * L_7 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		CharU5BU5D_t3528271667* L_8 = ___unescapedChars3;
		int32_t L_9 = V_3;
		bool L_10 = V_4;
		G_B6_0 = L_9;
		G_B6_1 = L_8;
		G_B6_2 = L_7;
		if (L_10)
		{
			G_B7_0 = L_9;
			G_B7_1 = L_8;
			G_B7_2 = L_7;
			goto IL_003d;
		}
	}
	{
		G_B8_0 = 1;
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		G_B8_3 = G_B6_2;
		goto IL_003e;
	}

IL_003d:
	{
		G_B8_0 = 2;
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
		G_B8_3 = G_B7_2;
	}

IL_003e:
	{
		NullCheck(G_B8_3);
		ByteU5BU5D_t4116647657* L_11 = VirtFuncInvoker3< ByteU5BU5D_t4116647657*, CharU5BU5D_t3528271667*, int32_t, int32_t >::Invoke(23 /* System.Byte[] System.Text.Encoding::GetBytes(System.Char[],System.Int32,System.Int32) */, G_B8_3, G_B8_2, G_B8_1, G_B8_0);
		V_5 = L_11;
		ByteU5BU5D_t4116647657* L_12 = V_5;
		NullCheck(L_12);
		V_6 = (((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length))));
		V_7 = (bool)0;
		bool L_13 = ___iriParsing8;
		if (!L_13)
		{
			goto IL_008b;
		}
	}
	{
		bool L_14 = V_4;
		if (L_14)
		{
			goto IL_0064;
		}
	}
	{
		CharU5BU5D_t3528271667* L_15 = ___unescapedChars3;
		int32_t L_16 = V_3;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		uint16_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		bool L_19 = ___isQuery7;
		bool L_20 = IriHelper_CheckIriUnicodeRange_m2504575242(NULL /*static, unused*/, L_18, L_19, /*hidden argument*/NULL);
		V_7 = L_20;
		goto IL_008b;
	}

IL_0064:
	{
		V_8 = (bool)0;
		CharU5BU5D_t3528271667* L_21 = ___unescapedChars3;
		int32_t L_22 = V_3;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		uint16_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		CharU5BU5D_t3528271667* L_25 = ___unescapedChars3;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		int32_t L_27 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
		uint16_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		bool L_29 = ___isQuery7;
		bool L_30 = IriHelper_CheckIriUnicodeRange_m272609807(NULL /*static, unused*/, L_24, L_28, (bool*)(&V_8), L_29, /*hidden argument*/NULL);
		V_7 = L_30;
		goto IL_008b;
	}

IL_007c:
	{
		ByteU5BU5D_t4116647657* L_31 = ___bytes5;
		int32_t L_32 = V_0;
		int32_t L_33 = L_32;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
		NullCheck(L_31);
		int32_t L_34 = L_33;
		uint8_t L_35 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		CharU5BU5D_t3528271667* L_36 = ___dest1;
		int32_t* L_37 = ___destOffset2;
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_t3559114794_il2cpp_TypeInfo_var);
		UriHelper_EscapeAsciiChar_m1759665887(NULL /*static, unused*/, L_35, L_36, (int32_t*)L_37, /*hidden argument*/NULL);
	}

IL_008b:
	{
		ByteU5BU5D_t4116647657* L_38 = ___bytes5;
		int32_t L_39 = V_0;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		uint8_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		ByteU5BU5D_t4116647657* L_42 = V_5;
		NullCheck(L_42);
		int32_t L_43 = 0;
		uint8_t L_44 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		if ((!(((uint32_t)L_41) == ((uint32_t)L_44))))
		{
			goto IL_007c;
		}
	}
	{
		V_9 = (bool)1;
		V_10 = 0;
		goto IL_00b6;
	}

IL_009d:
	{
		ByteU5BU5D_t4116647657* L_45 = ___bytes5;
		int32_t L_46 = V_0;
		int32_t L_47 = V_10;
		NullCheck(L_45);
		int32_t L_48 = ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)L_47));
		uint8_t L_49 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		ByteU5BU5D_t4116647657* L_50 = V_5;
		int32_t L_51 = V_10;
		NullCheck(L_50);
		int32_t L_52 = L_51;
		uint8_t L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		if ((((int32_t)L_49) == ((int32_t)L_53)))
		{
			goto IL_00b0;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_00bc;
	}

IL_00b0:
	{
		int32_t L_54 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)1));
	}

IL_00b6:
	{
		int32_t L_55 = V_10;
		int32_t L_56 = V_6;
		if ((((int32_t)L_55) < ((int32_t)L_56)))
		{
			goto IL_009d;
		}
	}

IL_00bc:
	{
		bool L_57 = V_9;
		if (!L_57)
		{
			goto IL_0179;
		}
	}
	{
		int32_t L_58 = V_0;
		int32_t L_59 = V_6;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)L_59));
		bool L_60 = ___iriParsing8;
		if (!L_60)
		{
			goto IL_013f;
		}
	}
	{
		bool L_61 = V_7;
		if (L_61)
		{
			goto IL_00f4;
		}
	}
	{
		V_11 = 0;
		goto IL_00e7;
	}

IL_00d5:
	{
		ByteU5BU5D_t4116647657* L_62 = V_5;
		int32_t L_63 = V_11;
		NullCheck(L_62);
		int32_t L_64 = L_63;
		uint8_t L_65 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		CharU5BU5D_t3528271667* L_66 = ___dest1;
		int32_t* L_67 = ___destOffset2;
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_t3559114794_il2cpp_TypeInfo_var);
		UriHelper_EscapeAsciiChar_m1759665887(NULL /*static, unused*/, L_65, L_66, (int32_t*)L_67, /*hidden argument*/NULL);
		int32_t L_68 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_68, (int32_t)1));
	}

IL_00e7:
	{
		int32_t L_69 = V_11;
		ByteU5BU5D_t4116647657* L_70 = V_5;
		NullCheck(L_70);
		if ((((int32_t)L_69) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_70)->max_length)))))))
		{
			goto IL_00d5;
		}
	}
	{
		goto IL_019e;
	}

IL_00f4:
	{
		Il2CppChar* L_71 = V_1;
		int32_t L_72 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t100236324_il2cpp_TypeInfo_var);
		bool L_73 = Uri_IsBidiControlCharacter_m3225227293(NULL /*static, unused*/, (*((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_71, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)L_72)), (int32_t)2)))))), /*hidden argument*/NULL);
		if (L_73)
		{
			goto IL_019e;
		}
	}
	{
		Il2CppChar* L_74 = ___pDest0;
		int32_t* L_75 = ___destOffset2;
		int32_t* L_76 = ___destOffset2;
		V_12 = (*((int32_t*)L_76));
		int32_t L_77 = V_12;
		*((int32_t*)(L_75)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_77, (int32_t)1));
		int32_t L_78 = V_12;
		Il2CppChar* L_79 = V_1;
		int32_t L_80 = V_3;
		*((int16_t*)(((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_74, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)L_78)), (int32_t)2)))))) = (int16_t)(*((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_79, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)L_80)), (int32_t)2))))));
		bool L_81 = V_4;
		if (!L_81)
		{
			goto IL_019e;
		}
	}
	{
		Il2CppChar* L_82 = ___pDest0;
		int32_t* L_83 = ___destOffset2;
		int32_t* L_84 = ___destOffset2;
		V_12 = (*((int32_t*)L_84));
		int32_t L_85 = V_12;
		*((int32_t*)(L_83)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_85, (int32_t)1));
		int32_t L_86 = V_12;
		Il2CppChar* L_87 = V_1;
		int32_t L_88 = V_3;
		*((int16_t*)(((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_82, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)L_86)), (int32_t)2)))))) = (int16_t)(*((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_87, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_88, (int32_t)1)))), (int32_t)2))))));
		goto IL_019e;
	}

IL_013f:
	{
		Il2CppChar* L_89 = ___pDest0;
		int32_t* L_90 = ___destOffset2;
		int32_t* L_91 = ___destOffset2;
		V_12 = (*((int32_t*)L_91));
		int32_t L_92 = V_12;
		*((int32_t*)(L_90)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_92, (int32_t)1));
		int32_t L_93 = V_12;
		Il2CppChar* L_94 = V_1;
		int32_t L_95 = V_3;
		*((int16_t*)(((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_89, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)L_93)), (int32_t)2)))))) = (int16_t)(*((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_94, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)L_95)), (int32_t)2))))));
		bool L_96 = V_4;
		if (!L_96)
		{
			goto IL_019e;
		}
	}
	{
		Il2CppChar* L_97 = ___pDest0;
		int32_t* L_98 = ___destOffset2;
		int32_t* L_99 = ___destOffset2;
		V_12 = (*((int32_t*)L_99));
		int32_t L_100 = V_12;
		*((int32_t*)(L_98)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_100, (int32_t)1));
		int32_t L_101 = V_12;
		Il2CppChar* L_102 = V_1;
		int32_t L_103 = V_3;
		*((int16_t*)(((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_97, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)L_101)), (int32_t)2)))))) = (int16_t)(*((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_102, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_103, (int32_t)1)))), (int32_t)2))))));
		goto IL_019e;
	}

IL_0179:
	{
		V_13 = 0;
		goto IL_0193;
	}

IL_017e:
	{
		ByteU5BU5D_t4116647657* L_104 = ___bytes5;
		int32_t L_105 = V_0;
		int32_t L_106 = L_105;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_106, (int32_t)1));
		NullCheck(L_104);
		int32_t L_107 = L_106;
		uint8_t L_108 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		CharU5BU5D_t3528271667* L_109 = ___dest1;
		int32_t* L_110 = ___destOffset2;
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_t3559114794_il2cpp_TypeInfo_var);
		UriHelper_EscapeAsciiChar_m1759665887(NULL /*static, unused*/, L_108, L_109, (int32_t*)L_110, /*hidden argument*/NULL);
		int32_t L_111 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_111, (int32_t)1));
	}

IL_0193:
	{
		int32_t L_112 = V_13;
		int32_t L_113 = V_10;
		if ((((int32_t)L_112) < ((int32_t)L_113)))
		{
			goto IL_017e;
		}
	}
	{
		goto IL_008b;
	}

IL_019e:
	{
		bool L_114 = V_4;
		if (!L_114)
		{
			goto IL_01a6;
		}
	}
	{
		int32_t L_115 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_115, (int32_t)1));
	}

IL_01a6:
	{
		int32_t L_116 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_116, (int32_t)1));
	}

IL_01aa:
	{
		int32_t L_117 = V_3;
		int32_t L_118 = ___charCount4;
		if ((((int32_t)L_117) < ((int32_t)L_118)))
		{
			goto IL_0021;
		}
	}
	{
		V_2 = (CharU5BU5D_t3528271667*)NULL;
		goto IL_01c5;
	}

IL_01b6:
	{
		ByteU5BU5D_t4116647657* L_119 = ___bytes5;
		int32_t L_120 = V_0;
		int32_t L_121 = L_120;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_121, (int32_t)1));
		NullCheck(L_119);
		int32_t L_122 = L_121;
		uint8_t L_123 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		CharU5BU5D_t3528271667* L_124 = ___dest1;
		int32_t* L_125 = ___destOffset2;
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_t3559114794_il2cpp_TypeInfo_var);
		UriHelper_EscapeAsciiChar_m1759665887(NULL /*static, unused*/, L_123, L_124, (int32_t*)L_125, /*hidden argument*/NULL);
	}

IL_01c5:
	{
		int32_t L_126 = V_0;
		int32_t L_127 = ___byteCount6;
		if ((((int32_t)L_126) < ((int32_t)L_127)))
		{
			goto IL_01b6;
		}
	}
	{
		return;
	}
}
// System.Void System.UriHelper::EscapeAsciiChar(System.Char,System.Char[],System.Int32&)
extern "C" IL2CPP_METHOD_ATTR void UriHelper_EscapeAsciiChar_m1759665887 (RuntimeObject * __this /* static, unused */, Il2CppChar ___ch0, CharU5BU5D_t3528271667* ___to1, int32_t* ___pos2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UriHelper_EscapeAsciiChar_m1759665887_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		CharU5BU5D_t3528271667* L_0 = ___to1;
		int32_t* L_1 = ___pos2;
		int32_t* L_2 = ___pos2;
		V_0 = (*((int32_t*)L_2));
		int32_t L_3 = V_0;
		*((int32_t*)(L_1)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
		int32_t L_4 = V_0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (Il2CppChar)((int32_t)37));
		CharU5BU5D_t3528271667* L_5 = ___to1;
		int32_t* L_6 = ___pos2;
		int32_t* L_7 = ___pos2;
		V_0 = (*((int32_t*)L_7));
		int32_t L_8 = V_0;
		*((int32_t*)(L_6)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
		int32_t L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_t3559114794_il2cpp_TypeInfo_var);
		CharU5BU5D_t3528271667* L_10 = ((UriHelper_t3559114794_StaticFields*)il2cpp_codegen_static_fields_for(UriHelper_t3559114794_il2cpp_TypeInfo_var))->get_HexUpperChars_0();
		Il2CppChar L_11 = ___ch0;
		NullCheck(L_10);
		int32_t L_12 = ((int32_t)((int32_t)((int32_t)((int32_t)L_11&(int32_t)((int32_t)240)))>>(int32_t)4));
		uint16_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (Il2CppChar)L_13);
		CharU5BU5D_t3528271667* L_14 = ___to1;
		int32_t* L_15 = ___pos2;
		int32_t* L_16 = ___pos2;
		V_0 = (*((int32_t*)L_16));
		int32_t L_17 = V_0;
		*((int32_t*)(L_15)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		int32_t L_18 = V_0;
		CharU5BU5D_t3528271667* L_19 = ((UriHelper_t3559114794_StaticFields*)il2cpp_codegen_static_fields_for(UriHelper_t3559114794_il2cpp_TypeInfo_var))->get_HexUpperChars_0();
		Il2CppChar L_20 = ___ch0;
		NullCheck(L_19);
		int32_t L_21 = ((int32_t)((int32_t)L_20&(int32_t)((int32_t)15)));
		uint16_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (Il2CppChar)L_22);
		return;
	}
}
// System.Char System.UriHelper::EscapedAscii(System.Char,System.Char)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar UriHelper_EscapedAscii_m4111282795 (RuntimeObject * __this /* static, unused */, Il2CppChar ___digit0, Il2CppChar ___next1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B25_0 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B23_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B24_0 = 0;
	int32_t G_B24_1 = 0;
	int32_t G_B26_0 = 0;
	int32_t G_B26_1 = 0;
	{
		Il2CppChar L_0 = ___digit0;
		if ((((int32_t)L_0) < ((int32_t)((int32_t)48))))
		{
			goto IL_000a;
		}
	}
	{
		Il2CppChar L_1 = ___digit0;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)57))))
		{
			goto IL_0024;
		}
	}

IL_000a:
	{
		Il2CppChar L_2 = ___digit0;
		if ((((int32_t)L_2) < ((int32_t)((int32_t)65))))
		{
			goto IL_0014;
		}
	}
	{
		Il2CppChar L_3 = ___digit0;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)70))))
		{
			goto IL_0024;
		}
	}

IL_0014:
	{
		Il2CppChar L_4 = ___digit0;
		if ((((int32_t)L_4) < ((int32_t)((int32_t)97))))
		{
			goto IL_001e;
		}
	}
	{
		Il2CppChar L_5 = ___digit0;
		if ((((int32_t)L_5) <= ((int32_t)((int32_t)102))))
		{
			goto IL_0024;
		}
	}

IL_001e:
	{
		return ((int32_t)65535);
	}

IL_0024:
	{
		Il2CppChar L_6 = ___digit0;
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)57))))
		{
			goto IL_003d;
		}
	}
	{
		Il2CppChar L_7 = ___digit0;
		if ((((int32_t)L_7) <= ((int32_t)((int32_t)70))))
		{
			goto IL_0034;
		}
	}
	{
		Il2CppChar L_8 = ___digit0;
		G_B11_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)((int32_t)97)));
		goto IL_0038;
	}

IL_0034:
	{
		Il2CppChar L_9 = ___digit0;
		G_B11_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)((int32_t)65)));
	}

IL_0038:
	{
		G_B13_0 = ((int32_t)il2cpp_codegen_add((int32_t)G_B11_0, (int32_t)((int32_t)10)));
		goto IL_0041;
	}

IL_003d:
	{
		Il2CppChar L_10 = ___digit0;
		G_B13_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)((int32_t)48)));
	}

IL_0041:
	{
		V_0 = G_B13_0;
		Il2CppChar L_11 = ___next1;
		if ((((int32_t)L_11) < ((int32_t)((int32_t)48))))
		{
			goto IL_004c;
		}
	}
	{
		Il2CppChar L_12 = ___next1;
		if ((((int32_t)L_12) <= ((int32_t)((int32_t)57))))
		{
			goto IL_0066;
		}
	}

IL_004c:
	{
		Il2CppChar L_13 = ___next1;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)65))))
		{
			goto IL_0056;
		}
	}
	{
		Il2CppChar L_14 = ___next1;
		if ((((int32_t)L_14) <= ((int32_t)((int32_t)70))))
		{
			goto IL_0066;
		}
	}

IL_0056:
	{
		Il2CppChar L_15 = ___next1;
		if ((((int32_t)L_15) < ((int32_t)((int32_t)97))))
		{
			goto IL_0060;
		}
	}
	{
		Il2CppChar L_16 = ___next1;
		if ((((int32_t)L_16) <= ((int32_t)((int32_t)102))))
		{
			goto IL_0066;
		}
	}

IL_0060:
	{
		return ((int32_t)65535);
	}

IL_0066:
	{
		int32_t L_17 = V_0;
		Il2CppChar L_18 = ___next1;
		G_B21_0 = ((int32_t)((int32_t)L_17<<(int32_t)4));
		if ((((int32_t)L_18) <= ((int32_t)((int32_t)57))))
		{
			G_B25_0 = ((int32_t)((int32_t)L_17<<(int32_t)4));
			goto IL_0082;
		}
	}
	{
		Il2CppChar L_19 = ___next1;
		G_B22_0 = G_B21_0;
		if ((((int32_t)L_19) <= ((int32_t)((int32_t)70))))
		{
			G_B23_0 = G_B21_0;
			goto IL_0079;
		}
	}
	{
		Il2CppChar L_20 = ___next1;
		G_B24_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)((int32_t)97)));
		G_B24_1 = G_B22_0;
		goto IL_007d;
	}

IL_0079:
	{
		Il2CppChar L_21 = ___next1;
		G_B24_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)((int32_t)65)));
		G_B24_1 = G_B23_0;
	}

IL_007d:
	{
		G_B26_0 = ((int32_t)il2cpp_codegen_add((int32_t)G_B24_0, (int32_t)((int32_t)10)));
		G_B26_1 = G_B24_1;
		goto IL_0086;
	}

IL_0082:
	{
		Il2CppChar L_22 = ___next1;
		G_B26_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)((int32_t)48)));
		G_B26_1 = G_B25_0;
	}

IL_0086:
	{
		return (((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)G_B26_1, (int32_t)G_B26_0)))));
	}
}
// System.Boolean System.UriHelper::IsNotSafeForUnescape(System.Char)
extern "C" IL2CPP_METHOD_ATTR bool UriHelper_IsNotSafeForUnescape_m1772803964 (RuntimeObject * __this /* static, unused */, Il2CppChar ___ch0, const RuntimeMethod* method)
{
	{
		Il2CppChar L_0 = ___ch0;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)31))))
		{
			goto IL_0012;
		}
	}
	{
		Il2CppChar L_1 = ___ch0;
		if ((((int32_t)L_1) < ((int32_t)((int32_t)127))))
		{
			goto IL_0014;
		}
	}
	{
		Il2CppChar L_2 = ___ch0;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)159))))
		{
			goto IL_0014;
		}
	}

IL_0012:
	{
		return (bool)1;
	}

IL_0014:
	{
		Il2CppChar L_3 = ___ch0;
		if ((((int32_t)L_3) < ((int32_t)((int32_t)59))))
		{
			goto IL_0025;
		}
	}
	{
		Il2CppChar L_4 = ___ch0;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)64))))
		{
			goto IL_0025;
		}
	}
	{
		Il2CppChar L_5 = ___ch0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_5|(int32_t)2))) == ((uint32_t)((int32_t)62)))))
		{
			goto IL_0043;
		}
	}

IL_0025:
	{
		Il2CppChar L_6 = ___ch0;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)35))))
		{
			goto IL_002f;
		}
	}
	{
		Il2CppChar L_7 = ___ch0;
		if ((((int32_t)L_7) <= ((int32_t)((int32_t)38))))
		{
			goto IL_0043;
		}
	}

IL_002f:
	{
		Il2CppChar L_8 = ___ch0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)43))))
		{
			goto IL_0043;
		}
	}
	{
		Il2CppChar L_9 = ___ch0;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)44))))
		{
			goto IL_0043;
		}
	}
	{
		Il2CppChar L_10 = ___ch0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)47))))
		{
			goto IL_0043;
		}
	}
	{
		Il2CppChar L_11 = ___ch0;
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0045;
		}
	}

IL_0043:
	{
		return (bool)1;
	}

IL_0045:
	{
		return (bool)0;
	}
}
// System.Boolean System.UriHelper::IsReservedUnreservedOrHash(System.Char)
extern "C" IL2CPP_METHOD_ATTR bool UriHelper_IsReservedUnreservedOrHash_m1469489854 (RuntimeObject * __this /* static, unused */, Il2CppChar ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UriHelper_IsReservedUnreservedOrHash_m1469489854_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar L_0 = ___c0;
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_t3559114794_il2cpp_TypeInfo_var);
		bool L_1 = UriHelper_IsUnreserved_m2975029334(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t3890150400_il2cpp_TypeInfo_var);
		bool L_2 = UriParser_get_ShouldUseLegacyV2Quirks_m1976807573(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		Il2CppChar L_3 = ___c0;
		NullCheck(_stringLiteral259003225);
		int32_t L_4 = String_IndexOf_m363431711(_stringLiteral259003225, L_3, /*hidden argument*/NULL);
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		Il2CppChar L_5 = ___c0;
		return (bool)((((int32_t)L_5) == ((int32_t)((int32_t)35)))? 1 : 0);
	}

IL_0025:
	{
		return (bool)1;
	}

IL_0027:
	{
		Il2CppChar L_6 = ___c0;
		NullCheck(_stringLiteral3205640774);
		int32_t L_7 = String_IndexOf_m363431711(_stringLiteral3205640774, L_6, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.UriHelper::IsUnreserved(System.Char)
extern "C" IL2CPP_METHOD_ATTR bool UriHelper_IsUnreserved_m2975029334 (RuntimeObject * __this /* static, unused */, Il2CppChar ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UriHelper_IsUnreserved_m2975029334_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar L_0 = ___c0;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t100236324_il2cpp_TypeInfo_var);
		bool L_1 = Uri_IsAsciiLetterOrDigit_m2810128337(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t3890150400_il2cpp_TypeInfo_var);
		bool L_2 = UriParser_get_ShouldUseLegacyV2Quirks_m1976807573(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		Il2CppChar L_3 = ___c0;
		NullCheck(_stringLiteral1814670653);
		int32_t L_4 = String_IndexOf_m363431711(_stringLiteral1814670653, L_3, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_4) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0023:
	{
		Il2CppChar L_5 = ___c0;
		NullCheck(_stringLiteral1333536866);
		int32_t L_6 = String_IndexOf_m363431711(_stringLiteral1333536866, L_5, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_6) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.UriHelper::Is3986Unreserved(System.Char)
extern "C" IL2CPP_METHOD_ATTR bool UriHelper_Is3986Unreserved_m2430471531 (RuntimeObject * __this /* static, unused */, Il2CppChar ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UriHelper_Is3986Unreserved_m2430471531_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar L_0 = ___c0;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t100236324_il2cpp_TypeInfo_var);
		bool L_1 = Uri_IsAsciiLetterOrDigit_m2810128337(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		Il2CppChar L_2 = ___c0;
		NullCheck(_stringLiteral1333536866);
		int32_t L_3 = String_IndexOf_m363431711(_stringLiteral1333536866, L_2, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.UriHelper::.cctor()
extern "C" IL2CPP_METHOD_ATTR void UriHelper__cctor_m3942811244 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UriHelper__cctor_m3942811244_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t3528271667* L_0 = (CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		CharU5BU5D_t3528271667* L_1 = L_0;
		RuntimeFieldHandle_t1871169219  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255363____59F5BD34B6C013DEACC784F69C67E95150033A84_5_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((UriHelper_t3559114794_StaticFields*)il2cpp_codegen_static_fields_for(UriHelper_t3559114794_il2cpp_TypeInfo_var))->set_HexUpperChars_0(L_1);
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
// System.String System.UriParser::get_SchemeName()
extern "C" IL2CPP_METHOD_ATTR String_t* UriParser_get_SchemeName_m3679786971 (UriParser_t3890150400 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_m_Scheme_6();
		return L_0;
	}
}
// System.Int32 System.UriParser::get_DefaultPort()
extern "C" IL2CPP_METHOD_ATTR int32_t UriParser_get_DefaultPort_m2544851211 (UriParser_t3890150400 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_Port_5();
		return L_0;
	}
}
// System.UriParser System.UriParser::OnNewUri()
extern "C" IL2CPP_METHOD_ATTR UriParser_t3890150400 * UriParser_OnNewUri_m1388610744 (UriParser_t3890150400 * __this, const RuntimeMethod* method)
{
	{
		return __this;
	}
}
// System.Void System.UriParser::InitializeAndValidate(System.Uri,System.UriFormatException&)
extern "C" IL2CPP_METHOD_ATTR void UriParser_InitializeAndValidate_m2008117311 (UriParser_t3890150400 * __this, Uri_t100236324 * ___uri0, UriFormatException_t953270471 ** ___parsingError1, const RuntimeMethod* method)
{
	{
		UriFormatException_t953270471 ** L_0 = ___parsingError1;
		Uri_t100236324 * L_1 = ___uri0;
		NullCheck(L_1);
		UriFormatException_t953270471 * L_2 = Uri_ParseMinimal_m443648661(L_1, /*hidden argument*/NULL);
		*((RuntimeObject **)(L_0)) = (RuntimeObject *)L_2;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_0), (RuntimeObject *)L_2);
		return;
	}
}
// System.String System.UriParser::Resolve(System.Uri,System.Uri,System.UriFormatException&)
extern "C" IL2CPP_METHOD_ATTR String_t* UriParser_Resolve_m2644385416 (UriParser_t3890150400 * __this, Uri_t100236324 * ___baseUri0, Uri_t100236324 * ___relativeUri1, UriFormatException_t953270471 ** ___parsingError2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UriParser_Resolve_m2644385416_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	Uri_t100236324 * V_2 = NULL;
	{
		Uri_t100236324 * L_0 = ___baseUri0;
		NullCheck(L_0);
		bool L_1 = Uri_get_UserDrivenParsing_m2668439512(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_2 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_3 = L_2;
		Type_t * L_4 = Object_GetType_m88164663(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Type::get_FullName() */, L_4);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		String_t* L_6 = SR_GetString_m2133537544(NULL /*static, unused*/, _stringLiteral2916056989, L_3, /*hidden argument*/NULL);
		InvalidOperationException_t56020091 * L_7 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_7, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, UriParser_Resolve_m2644385416_RuntimeMethod_var);
	}

IL_002c:
	{
		Uri_t100236324 * L_8 = ___baseUri0;
		NullCheck(L_8);
		bool L_9 = Uri_get_IsAbsoluteUri_m3834080655(L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0044;
		}
	}
	{
		String_t* L_10 = SR_GetString_m1137630943(NULL /*static, unused*/, _stringLiteral2193443264, /*hidden argument*/NULL);
		InvalidOperationException_t56020091 * L_11 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_11, L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, NULL, UriParser_Resolve_m2644385416_RuntimeMethod_var);
	}

IL_0044:
	{
		V_0 = (String_t*)NULL;
		V_1 = (bool)0;
		Uri_t100236324 * L_12 = ___baseUri0;
		Uri_t100236324 * L_13 = ___relativeUri1;
		UriFormatException_t953270471 ** L_14 = ___parsingError2;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t100236324_il2cpp_TypeInfo_var);
		Uri_t100236324 * L_15 = Uri_ResolveHelper_m3305423888(NULL /*static, unused*/, L_12, L_13, (String_t**)(&V_0), (bool*)(&V_1), (UriFormatException_t953270471 **)L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		UriFormatException_t953270471 ** L_16 = ___parsingError2;
		UriFormatException_t953270471 * L_17 = *((UriFormatException_t953270471 **)L_16);
		if (!L_17)
		{
			goto IL_005b;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_005b:
	{
		Uri_t100236324 * L_18 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t100236324_il2cpp_TypeInfo_var);
		bool L_19 = Uri_op_Inequality_m3504002810(NULL /*static, unused*/, L_18, (Uri_t100236324 *)NULL, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_006b;
		}
	}
	{
		Uri_t100236324 * L_20 = V_2;
		NullCheck(L_20);
		String_t* L_21 = Uri_get_OriginalString_m2551181575(L_20, /*hidden argument*/NULL);
		return L_21;
	}

IL_006b:
	{
		String_t* L_22 = V_0;
		return L_22;
	}
}
// System.String System.UriParser::GetComponents(System.Uri,System.UriComponents,System.UriFormat)
extern "C" IL2CPP_METHOD_ATTR String_t* UriParser_GetComponents_m2774442831 (UriParser_t3890150400 * __this, Uri_t100236324 * ___uri0, int32_t ___components1, int32_t ___format2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UriParser_GetComponents_m2774442831_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___components1;
		if (!((int32_t)((int32_t)L_0&(int32_t)((int32_t)-2147483648LL))))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_1 = ___components1;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-2147483648LL))))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_2 = ___components1;
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(UriComponents_t814099658_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5 = SR_GetString_m1137630943(NULL /*static, unused*/, _stringLiteral1623832636, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_6 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m4164965325(L_6, _stringLiteral3425436495, L_4, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, UriParser_GetComponents_m2774442831_RuntimeMethod_var);
	}

IL_002c:
	{
		int32_t L_7 = ___format2;
		if (!((int32_t)((int32_t)L_7&(int32_t)((int32_t)-4))))
		{
			goto IL_003d;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_8 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_8, _stringLiteral446157247, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, NULL, UriParser_GetComponents_m2774442831_RuntimeMethod_var);
	}

IL_003d:
	{
		Uri_t100236324 * L_9 = ___uri0;
		NullCheck(L_9);
		bool L_10 = Uri_get_UserDrivenParsing_m2668439512(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0069;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_11 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_12 = L_11;
		Type_t * L_13 = Object_GetType_m88164663(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		String_t* L_14 = VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Type::get_FullName() */, L_13);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_14);
		String_t* L_15 = SR_GetString_m2133537544(NULL /*static, unused*/, _stringLiteral2916056989, L_12, /*hidden argument*/NULL);
		InvalidOperationException_t56020091 * L_16 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_16, L_15, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, NULL, UriParser_GetComponents_m2774442831_RuntimeMethod_var);
	}

IL_0069:
	{
		Uri_t100236324 * L_17 = ___uri0;
		NullCheck(L_17);
		bool L_18 = Uri_get_IsAbsoluteUri_m3834080655(L_17, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_0081;
		}
	}
	{
		String_t* L_19 = SR_GetString_m1137630943(NULL /*static, unused*/, _stringLiteral2193443264, /*hidden argument*/NULL);
		InvalidOperationException_t56020091 * L_20 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_20, L_19, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, NULL, UriParser_GetComponents_m2774442831_RuntimeMethod_var);
	}

IL_0081:
	{
		Uri_t100236324 * L_21 = ___uri0;
		int32_t L_22 = ___components1;
		int32_t L_23 = ___format2;
		NullCheck(L_21);
		String_t* L_24 = Uri_GetComponentsHelper_m4097442089(L_21, L_22, L_23, /*hidden argument*/NULL);
		return L_24;
	}
}
// System.Boolean System.UriParser::get_ShouldUseLegacyV2Quirks()
extern "C" IL2CPP_METHOD_ATTR bool UriParser_get_ShouldUseLegacyV2Quirks_m1976807573 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UriParser_get_ShouldUseLegacyV2Quirks_m1976807573_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t3890150400_il2cpp_TypeInfo_var);
		int32_t L_0 = ((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->get_s_QuirksVersion_23();
		return (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.UriParser::.cctor()
extern "C" IL2CPP_METHOD_ATTR void UriParser__cctor_m3655686731 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UriParser__cctor_m3655686731_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	{
		((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->set_s_QuirksVersion_23(3);
		bool L_0 = UriParser_get_ShouldUseLegacyV2Quirks_m1976807573(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B1_0 = ((int32_t)31461245);
		if (L_0)
		{
			G_B2_0 = ((int32_t)31461245);
			goto IL_0015;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_001a;
	}

IL_0015:
	{
		G_B3_0 = ((int32_t)33554432);
		G_B3_1 = G_B2_0;
	}

IL_001a:
	{
		((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->set_HttpSyntaxFlags_24(((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)G_B3_1|(int32_t)G_B3_0))|(int32_t)((int32_t)67108864)))|(int32_t)((int32_t)268435456))));
		bool L_1 = UriParser_get_ShouldUseLegacyV2Quirks_m1976807573(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)4049);
		if (L_1)
		{
			G_B5_0 = ((int32_t)4049);
			goto IL_003c;
		}
	}
	{
		G_B6_0 = ((int32_t)32);
		G_B6_1 = G_B4_0;
		goto IL_003d;
	}

IL_003c:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
	}

IL_003d:
	{
		((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->set_FileSyntaxFlags_25(((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)G_B6_1|(int32_t)G_B6_0))|(int32_t)((int32_t)8192)))|(int32_t)((int32_t)2097152)))|(int32_t)((int32_t)1048576)))|(int32_t)((int32_t)4194304)))|(int32_t)((int32_t)8388608)))|(int32_t)((int32_t)16777216)))|(int32_t)((int32_t)33554432)))|(int32_t)((int32_t)67108864)))|(int32_t)((int32_t)268435456))));
		Dictionary_2_t3675406699 * L_2 = (Dictionary_2_t3675406699 *)il2cpp_codegen_object_new(Dictionary_2_t3675406699_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4151158592(L_2, ((int32_t)25), /*hidden argument*/Dictionary_2__ctor_m4151158592_RuntimeMethod_var);
		((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->set_m_Table_0(L_2);
		Dictionary_2_t3675406699 * L_3 = (Dictionary_2_t3675406699 *)il2cpp_codegen_object_new(Dictionary_2_t3675406699_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4151158592(L_3, ((int32_t)25), /*hidden argument*/Dictionary_2__ctor_m4151158592_RuntimeMethod_var);
		((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->set_m_TempTable_1(L_3);
		int32_t L_4 = ((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->get_HttpSyntaxFlags_24();
		BuiltInUriParser_t2965675049 * L_5 = (BuiltInUriParser_t2965675049 *)il2cpp_codegen_object_new(BuiltInUriParser_t2965675049_il2cpp_TypeInfo_var);
		BuiltInUriParser__ctor_m4154603378(L_5, _stringLiteral3140485902, ((int32_t)80), L_4, /*hidden argument*/NULL);
		((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->set_HttpUri_7(L_5);
		Dictionary_2_t3675406699 * L_6 = ((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->get_m_Table_0();
		UriParser_t3890150400 * L_7 = ((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->get_HttpUri_7();
		NullCheck(L_7);
		String_t* L_8 = UriParser_get_SchemeName_m3679786971(L_7, /*hidden argument*/NULL);
		UriParser_t3890150400 * L_9 = ((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->get_HttpUri_7();
		NullCheck(L_6);
		Dictionary_2_set_Item_m2546549516(L_6, L_8, L_9, /*hidden argument*/Dictionary_2_set_Item_m2546549516_RuntimeMethod_var);
		UriParser_t3890150400 * L_10 = ((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->get_HttpUri_7();
		NullCheck(L_10);
		int32_t L_11 = L_10->get_m_Flags_2();
		BuiltInUriParser_t2965675049 * L_12 = (BuiltInUriParser_t2965675049 *)il2cpp_codegen_object_new(BuiltInUriParser_t2965675049_il2cpp_TypeInfo_var);
		BuiltInUriParser__ctor_m4154603378(L_12, _stringLiteral1973861653, ((int32_t)443), L_11, /*hidden argument*/NULL);
		((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->set_HttpsUri_8(L_12);
		Dictionary_2_t3675406699 * L_13 = ((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->get_m_Table_0();
		UriParser_t3890150400 * L_14 = ((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->get_HttpsUri_8();
		NullCheck(L_14);
		String_t* L_15 = UriParser_get_SchemeName_m3679786971(L_14, /*hidden argument*/NULL);
		UriParser_t3890150400 * L_16 = ((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->get_HttpsUri_8();
		NullCheck(L_13);
		Dictionary_2_set_Item_m2546549516(L_13, L_15, L_16, /*hidden argument*/Dictionary_2_set_Item_m2546549516_RuntimeMethod_var);
		int32_t L_17 = ((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->get_HttpSyntaxFlags_24();
		BuiltInUriParser_t2965675049 * L_18 = (BuiltInUriParser_t2965675049 *)il2cpp_codegen_object_new(BuiltInUriParser_t2965675049_il2cpp_TypeInfo_var);
		BuiltInUriParser__ctor_m4154603378(L_18, _stringLiteral3455563721, ((int32_t)80), L_17, /*hidden argument*/NULL);
		((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->set_WsUri_9(L_18);
		Dictionary_2_t3675406699 * L_19 = ((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->get_m_Table_0();
		UriParser_t3890150400 * L_20 = ((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->get_WsUri_9();
		NullCheck(L_20);
		String_t* L_21 = UriParser_get_SchemeName_m3679786971(L_20, /*hidden argument*/NULL);
		UriParser_t3890150400 * L_22 = ((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->get_WsUri_9();
		NullCheck(L_19);
		Dictionary_2_set_Item_m2546549516(L_19, L_21, L_22, /*hidden argument*/Dictionary_2_set_Item_m2546549516_RuntimeMethod_var);
		int32_t L_23 = ((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->get_HttpSyntaxFlags_24();
		BuiltInUriParser_t2965675049 * L_24 = (BuiltInUriParser_t2965675049 *)il2cpp_codegen_object_new(BuiltInUriParser_t2965675049_il2cpp_TypeInfo_var);
		BuiltInUriParser__ctor_m4154603378(L_24, _stringLiteral4120481396, ((int32_t)443), L_23, /*hidden argument*/NULL);
		((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->set_WssUri_10(L_24);
		Dictionary_2_t3675406699 * L_25 = ((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->get_m_Table_0();
		UriParser_t3890150400 * L_26 = ((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->get_WssUri_10();
		NullCheck(L_26);
		String_t* L_27 = UriParser_get_SchemeName_m3679786971(L_26, /*hidden argument*/NULL);
		UriParser_t3890150400 * L_28 = ((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->get_WssUri_10();
		NullCheck(L_25);
		Dictionary_2_set_Item_m2546549516(L_25, L_27, L_28, /*hidden argument*/Dictionary_2_set_Item_m2546549516_RuntimeMethod_var);
		BuiltInUriParser_t2965675049 * L_29 = (BuiltInUriParser_t2965675049 *)il2cpp_codegen_object_new(BuiltInUriParser_t2965675049_il2cpp_TypeInfo_var);
		BuiltInUriParser__ctor_m4154603378(L_29, _stringLiteral228733076, ((int32_t)21), ((int32_t)367005533), /*hidden argument*/NULL);
		((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->set_FtpUri_11(L_29);
		Dictionary_2_t3675406699 * L_30 = ((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->get_m_Table_0();
		UriParser_t3890150400 * L_31 = ((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->get_FtpUri_11();
		NullCheck(L_31);
		String_t* L_32 = UriParser_get_SchemeName_m3679786971(L_31, /*hidden argument*/NULL);
		UriParser_t3890150400 * L_33 = ((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->get_FtpUri_11();
		NullCheck(L_30);
		Dictionary_2_set_Item_m2546549516(L_30, L_32, L_33, /*hidden argument*/Dictionary_2_set_Item_m2546549516_RuntimeMethod_var);
		int32_t L_34 = ((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->get_FileSyntaxFlags_25();
		BuiltInUriParser_t2965675049 * L_35 = (BuiltInUriParser_t2965675049 *)il2cpp_codegen_object_new(BuiltInUriParser_t2965675049_il2cpp_TypeInfo_var);
		BuiltInUriParser__ctor_m4154603378(L_35, _stringLiteral1629333464, (-1), L_34, /*hidden argument*/NULL);
		((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->set_FileUri_12(L_35);
		Dictionary_2_t3675406699 * L_36 = ((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->get_m_Table_0();
		UriParser_t3890150400 * L_37 = ((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->get_FileUri_12();
		NullCheck(L_37);
		String_t* L_38 = UriParser_get_SchemeName_m3679786971(L_37, /*hidden argument*/NULL);
		UriParser_t3890150400 * L_39 = ((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->get_FileUri_12();
		NullCheck(L_36);
		Dictionary_2_set_Item_m2546549516(L_36, L_38, L_39, /*hidden argument*/Dictionary_2_set_Item_m2546549516_RuntimeMethod_var);
		BuiltInUriParser_t2965675049 * L_40 = (BuiltInUriParser_t2965675049 *)il2cpp_codegen_object_new(BuiltInUriParser_t2965675049_il2cpp_TypeInfo_var);
		BuiltInUriParser__ctor_m4154603378(L_40, _stringLiteral2386815142, ((int32_t)70), ((int32_t)337645405), /*hidden argument*/NULL);
		((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->set_GopherUri_13(L_40);
		Dictionary_2_t3675406699 * L_41 = ((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->get_m_Table_0();
		UriParser_t3890150400 * L_42 = ((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->get_GopherUri_13();
		NullCheck(L_42);
		String_t* L_43 = UriParser_get_SchemeName_m3679786971(L_42, /*hidden argument*/NULL);
		UriParser_t3890150400 * L_44 = ((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->get_GopherUri_13();
		NullCheck(L_41);
		Dictionary_2_set_Item_m2546549516(L_41, L_43, L_44, /*hidden argument*/Dictionary_2_set_Item_m2546549516_RuntimeMethod_var);
		BuiltInUriParser_t2965675049 * L_45 = (BuiltInUriParser_t2965675049 *)il2cpp_codegen_object_new(BuiltInUriParser_t2965675049_il2cpp_TypeInfo_var);
		BuiltInUriParser__ctor_m4154603378(L_45, _stringLiteral3139830536, ((int32_t)119), ((int32_t)337645405), /*hidden argument*/NULL);
		((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->set_NntpUri_14(L_45);
		Dictionary_2_t3675406699 * L_46 = ((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->get_m_Table_0();
		UriParser_t3890150400 * L_47 = ((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->get_NntpUri_14();
		NullCheck(L_47);
		String_t* L_48 = UriParser_get_SchemeName_m3679786971(L_47, /*hidden argument*/NULL);
		UriParser_t3890150400 * L_49 = ((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->get_NntpUri_14();
		NullCheck(L_46);
		Dictionary_2_set_Item_m2546549516(L_46, L_48, L_49, /*hidden argument*/Dictionary_2_set_Item_m2546549516_RuntimeMethod_var);
		BuiltInUriParser_t2965675049 * L_50 = (BuiltInUriParser_t2965675049 *)il2cpp_codegen_object_new(BuiltInUriParser_t2965675049_il2cpp_TypeInfo_var);
		BuiltInUriParser__ctor_m4154603378(L_50, _stringLiteral15098073, (-1), ((int32_t)268435536), /*hidden argument*/NULL);
		((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->set_NewsUri_15(L_50);
		Dictionary_2_t3675406699 * L_51 = ((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->get_m_Table_0();
		UriParser_t3890150400 * L_52 = ((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->get_NewsUri_15();
		NullCheck(L_52);
		String_t* L_53 = UriParser_get_SchemeName_m3679786971(L_52, /*hidden argument*/NULL);
		UriParser_t3890150400 * L_54 = ((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->get_NewsUri_15();
		NullCheck(L_51);
		Dictionary_2_set_Item_m2546549516(L_51, L_53, L_54, /*hidden argument*/Dictionary_2_set_Item_m2546549516_RuntimeMethod_var);
		BuiltInUriParser_t2965675049 * L_55 = (BuiltInUriParser_t2965675049 *)il2cpp_codegen_object_new(BuiltInUriParser_t2965675049_il2cpp_TypeInfo_var);
		BuiltInUriParser__ctor_m4154603378(L_55, _stringLiteral416809914, ((int32_t)25), ((int32_t)335564796), /*hidden argument*/NULL);
		((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->set_MailToUri_16(L_55);
		Dictionary_2_t3675406699 * L_56 = ((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->get_m_Table_0();
		UriParser_t3890150400 * L_57 = ((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->get_MailToUri_16();
		NullCheck(L_57);
		String_t* L_58 = UriParser_get_SchemeName_m3679786971(L_57, /*hidden argument*/NULL);
		UriParser_t3890150400 * L_59 = ((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->get_MailToUri_16();
		NullCheck(L_56);
		Dictionary_2_set_Item_m2546549516(L_56, L_58, L_59, /*hidden argument*/Dictionary_2_set_Item_m2546549516_RuntimeMethod_var);
		UriParser_t3890150400 * L_60 = ((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->get_NewsUri_15();
		NullCheck(L_60);
		int32_t L_61 = L_60->get_m_Flags_2();
		BuiltInUriParser_t2965675049 * L_62 = (BuiltInUriParser_t2965675049 *)il2cpp_codegen_object_new(BuiltInUriParser_t2965675049_il2cpp_TypeInfo_var);
		BuiltInUriParser__ctor_m4154603378(L_62, _stringLiteral76565016, (-1), L_61, /*hidden argument*/NULL);
		((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->set_UuidUri_17(L_62);
		Dictionary_2_t3675406699 * L_63 = ((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->get_m_Table_0();
		UriParser_t3890150400 * L_64 = ((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->get_UuidUri_17();
		NullCheck(L_64);
		String_t* L_65 = UriParser_get_SchemeName_m3679786971(L_64, /*hidden argument*/NULL);
		UriParser_t3890150400 * L_66 = ((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->get_UuidUri_17();
		NullCheck(L_63);
		Dictionary_2_set_Item_m2546549516(L_63, L_65, L_66, /*hidden argument*/Dictionary_2_set_Item_m2546549516_RuntimeMethod_var);
		BuiltInUriParser_t2965675049 * L_67 = (BuiltInUriParser_t2965675049 *)il2cpp_codegen_object_new(BuiltInUriParser_t2965675049_il2cpp_TypeInfo_var);
		BuiltInUriParser__ctor_m4154603378(L_67, _stringLiteral3917439587, ((int32_t)23), ((int32_t)337645405), /*hidden argument*/NULL);
		((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->set_TelnetUri_18(L_67);
		Dictionary_2_t3675406699 * L_68 = ((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->get_m_Table_0();
		UriParser_t3890150400 * L_69 = ((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->get_TelnetUri_18();
		NullCheck(L_69);
		String_t* L_70 = UriParser_get_SchemeName_m3679786971(L_69, /*hidden argument*/NULL);
		UriParser_t3890150400 * L_71 = ((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->get_TelnetUri_18();
		NullCheck(L_68);
		Dictionary_2_set_Item_m2546549516(L_68, L_70, L_71, /*hidden argument*/Dictionary_2_set_Item_m2546549516_RuntimeMethod_var);
		BuiltInUriParser_t2965675049 * L_72 = (BuiltInUriParser_t2965675049 *)il2cpp_codegen_object_new(BuiltInUriParser_t2965675049_il2cpp_TypeInfo_var);
		BuiltInUriParser__ctor_m4154603378(L_72, _stringLiteral4255182569, ((int32_t)389), ((int32_t)337645565), /*hidden argument*/NULL);
		((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->set_LdapUri_19(L_72);
		Dictionary_2_t3675406699 * L_73 = ((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->get_m_Table_0();
		UriParser_t3890150400 * L_74 = ((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->get_LdapUri_19();
		NullCheck(L_74);
		String_t* L_75 = UriParser_get_SchemeName_m3679786971(L_74, /*hidden argument*/NULL);
		UriParser_t3890150400 * L_76 = ((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->get_LdapUri_19();
		NullCheck(L_73);
		Dictionary_2_set_Item_m2546549516(L_73, L_75, L_76, /*hidden argument*/Dictionary_2_set_Item_m2546549516_RuntimeMethod_var);
		BuiltInUriParser_t2965675049 * L_77 = (BuiltInUriParser_t2965675049 *)il2cpp_codegen_object_new(BuiltInUriParser_t2965675049_il2cpp_TypeInfo_var);
		BuiltInUriParser__ctor_m4154603378(L_77, _stringLiteral1761547464, ((int32_t)808), ((int32_t)400559737), /*hidden argument*/NULL);
		((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->set_NetTcpUri_20(L_77);
		Dictionary_2_t3675406699 * L_78 = ((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->get_m_Table_0();
		UriParser_t3890150400 * L_79 = ((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->get_NetTcpUri_20();
		NullCheck(L_79);
		String_t* L_80 = UriParser_get_SchemeName_m3679786971(L_79, /*hidden argument*/NULL);
		UriParser_t3890150400 * L_81 = ((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->get_NetTcpUri_20();
		NullCheck(L_78);
		Dictionary_2_set_Item_m2546549516(L_78, L_80, L_81, /*hidden argument*/Dictionary_2_set_Item_m2546549516_RuntimeMethod_var);
		BuiltInUriParser_t2965675049 * L_82 = (BuiltInUriParser_t2965675049 *)il2cpp_codegen_object_new(BuiltInUriParser_t2965675049_il2cpp_TypeInfo_var);
		BuiltInUriParser__ctor_m4154603378(L_82, _stringLiteral3041793228, (-1), ((int32_t)400559729), /*hidden argument*/NULL);
		((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->set_NetPipeUri_21(L_82);
		Dictionary_2_t3675406699 * L_83 = ((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->get_m_Table_0();
		UriParser_t3890150400 * L_84 = ((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->get_NetPipeUri_21();
		NullCheck(L_84);
		String_t* L_85 = UriParser_get_SchemeName_m3679786971(L_84, /*hidden argument*/NULL);
		UriParser_t3890150400 * L_86 = ((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->get_NetPipeUri_21();
		NullCheck(L_83);
		Dictionary_2_set_Item_m2546549516(L_83, L_85, L_86, /*hidden argument*/Dictionary_2_set_Item_m2546549516_RuntimeMethod_var);
		BuiltInUriParser_t2965675049 * L_87 = (BuiltInUriParser_t2965675049 *)il2cpp_codegen_object_new(BuiltInUriParser_t2965675049_il2cpp_TypeInfo_var);
		BuiltInUriParser__ctor_m4154603378(L_87, _stringLiteral1272228687, (-1), ((int32_t)399519697), /*hidden argument*/NULL);
		((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->set_VsMacrosUri_22(L_87);
		Dictionary_2_t3675406699 * L_88 = ((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->get_m_Table_0();
		UriParser_t3890150400 * L_89 = ((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->get_VsMacrosUri_22();
		NullCheck(L_89);
		String_t* L_90 = UriParser_get_SchemeName_m3679786971(L_89, /*hidden argument*/NULL);
		UriParser_t3890150400 * L_91 = ((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->get_VsMacrosUri_22();
		NullCheck(L_88);
		Dictionary_2_set_Item_m2546549516(L_88, L_90, L_91, /*hidden argument*/Dictionary_2_set_Item_m2546549516_RuntimeMethod_var);
		return;
	}
}
// System.UriSyntaxFlags System.UriParser::get_Flags()
extern "C" IL2CPP_METHOD_ATTR int32_t UriParser_get_Flags_m1339933774 (UriParser_t3890150400 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_Flags_2();
		return L_0;
	}
}
// System.Boolean System.UriParser::NotAny(System.UriSyntaxFlags)
extern "C" IL2CPP_METHOD_ATTR bool UriParser_NotAny_m2044708837 (UriParser_t3890150400 * __this, int32_t ___flags0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___flags0;
		bool L_1 = UriParser_IsFullMatch_m528315200(__this, L_0, 0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.UriParser::InFact(System.UriSyntaxFlags)
extern "C" IL2CPP_METHOD_ATTR bool UriParser_InFact_m1142757999 (UriParser_t3890150400 * __this, int32_t ___flags0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___flags0;
		bool L_1 = UriParser_IsFullMatch_m528315200(__this, L_0, 0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.UriParser::IsAllSet(System.UriSyntaxFlags)
extern "C" IL2CPP_METHOD_ATTR bool UriParser_IsAllSet_m1848423201 (UriParser_t3890150400 * __this, int32_t ___flags0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___flags0;
		int32_t L_1 = ___flags0;
		bool L_2 = UriParser_IsFullMatch_m528315200(__this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.UriParser::IsFullMatch(System.UriSyntaxFlags,System.UriSyntaxFlags)
extern "C" IL2CPP_METHOD_ATTR bool UriParser_IsFullMatch_m528315200 (UriParser_t3890150400 * __this, int32_t ___flags0, int32_t ___expected1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___flags0;
		if (!((int32_t)((int32_t)L_0&(int32_t)((int32_t)33554432))))
		{
			goto IL_0013;
		}
	}
	{
		bool L_1 = __this->get_m_UpdatableFlagsUsed_4();
		il2cpp_codegen_memory_barrier();
		if (L_1)
		{
			goto IL_001c;
		}
	}

IL_0013:
	{
		int32_t L_2 = __this->get_m_Flags_2();
		V_0 = L_2;
		goto IL_0032;
	}

IL_001c:
	{
		int32_t L_3 = __this->get_m_Flags_2();
		int32_t L_4 = __this->get_m_UpdatableFlags_3();
		il2cpp_codegen_memory_barrier();
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)-33554433)))|(int32_t)L_4));
	}

IL_0032:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = ___flags0;
		int32_t L_7 = ___expected1;
		return (bool)((((int32_t)((int32_t)((int32_t)L_5&(int32_t)L_6))) == ((int32_t)L_7))? 1 : 0);
	}
}
// System.Void System.UriParser::.ctor(System.UriSyntaxFlags)
extern "C" IL2CPP_METHOD_ATTR void UriParser__ctor_m1924902178 (UriParser_t3890150400 * __this, int32_t ___flags0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UriParser__ctor_m1924902178_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___flags0;
		__this->set_m_Flags_2(L_0);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_m_Scheme_6(L_1);
		return;
	}
}
// System.UriParser System.UriParser::FindOrFetchAsUnknownV1Syntax(System.String)
extern "C" IL2CPP_METHOD_ATTR UriParser_t3890150400 * UriParser_FindOrFetchAsUnknownV1Syntax_m82912732 (RuntimeObject * __this /* static, unused */, String_t* ___lwrCaseScheme0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UriParser_FindOrFetchAsUnknownV1Syntax_m82912732_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UriParser_t3890150400 * V_0 = NULL;
	Dictionary_2_t3675406699 * V_1 = NULL;
	bool V_2 = false;
	UriParser_t3890150400 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (UriParser_t3890150400 *)NULL;
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t3890150400_il2cpp_TypeInfo_var);
		Dictionary_2_t3675406699 * L_0 = ((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->get_m_Table_0();
		String_t* L_1 = ___lwrCaseScheme0;
		NullCheck(L_0);
		Dictionary_2_TryGetValue_m2122824571(L_0, L_1, (UriParser_t3890150400 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m2122824571_RuntimeMethod_var);
		UriParser_t3890150400 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		UriParser_t3890150400 * L_3 = V_0;
		return L_3;
	}

IL_0015:
	{
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t3890150400_il2cpp_TypeInfo_var);
		Dictionary_2_t3675406699 * L_4 = ((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->get_m_TempTable_1();
		String_t* L_5 = ___lwrCaseScheme0;
		NullCheck(L_4);
		Dictionary_2_TryGetValue_m2122824571(L_4, L_5, (UriParser_t3890150400 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m2122824571_RuntimeMethod_var);
		UriParser_t3890150400 * L_6 = V_0;
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		UriParser_t3890150400 * L_7 = V_0;
		return L_7;
	}

IL_0028:
	{
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t3890150400_il2cpp_TypeInfo_var);
		Dictionary_2_t3675406699 * L_8 = ((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->get_m_Table_0();
		V_1 = L_8;
		V_2 = (bool)0;
	}

IL_0030:
	try
	{ // begin try (depth: 1)
		{
			Dictionary_2_t3675406699 * L_9 = V_1;
			Monitor_Enter_m984175629(NULL /*static, unused*/, L_9, (bool*)(&V_2), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(UriParser_t3890150400_il2cpp_TypeInfo_var);
			Dictionary_2_t3675406699 * L_10 = ((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->get_m_TempTable_1();
			NullCheck(L_10);
			int32_t L_11 = Dictionary_2_get_Count_m2482485624(L_10, /*hidden argument*/Dictionary_2_get_Count_m2482485624_RuntimeMethod_var);
			if ((((int32_t)L_11) < ((int32_t)((int32_t)512))))
			{
				goto IL_0055;
			}
		}

IL_0049:
		{
			Dictionary_2_t3675406699 * L_12 = (Dictionary_2_t3675406699 *)il2cpp_codegen_object_new(Dictionary_2_t3675406699_il2cpp_TypeInfo_var);
			Dictionary_2__ctor_m4151158592(L_12, ((int32_t)25), /*hidden argument*/Dictionary_2__ctor_m4151158592_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(UriParser_t3890150400_il2cpp_TypeInfo_var);
			((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->set_m_TempTable_1(L_12);
		}

IL_0055:
		{
			String_t* L_13 = ___lwrCaseScheme0;
			BuiltInUriParser_t2965675049 * L_14 = (BuiltInUriParser_t2965675049 *)il2cpp_codegen_object_new(BuiltInUriParser_t2965675049_il2cpp_TypeInfo_var);
			BuiltInUriParser__ctor_m4154603378(L_14, L_13, (-1), ((int32_t)351342590), /*hidden argument*/NULL);
			V_0 = L_14;
			IL2CPP_RUNTIME_CLASS_INIT(UriParser_t3890150400_il2cpp_TypeInfo_var);
			Dictionary_2_t3675406699 * L_15 = ((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->get_m_TempTable_1();
			String_t* L_16 = ___lwrCaseScheme0;
			UriParser_t3890150400 * L_17 = V_0;
			NullCheck(L_15);
			Dictionary_2_set_Item_m2546549516(L_15, L_16, L_17, /*hidden argument*/Dictionary_2_set_Item_m2546549516_RuntimeMethod_var);
			UriParser_t3890150400 * L_18 = V_0;
			V_3 = L_18;
			IL2CPP_LEAVE(0x7C, FINALLY_0072);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0072;
	}

FINALLY_0072:
	{ // begin finally (depth: 1)
		{
			bool L_19 = V_2;
			if (!L_19)
			{
				goto IL_007b;
			}
		}

IL_0075:
		{
			Dictionary_2_t3675406699 * L_20 = V_1;
			Monitor_Exit_m3585316909(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		}

IL_007b:
		{
			IL2CPP_END_FINALLY(114)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(114)
	{
		IL2CPP_JUMP_TBL(0x7C, IL_007c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_007c:
	{
		UriParser_t3890150400 * L_21 = V_3;
		return L_21;
	}
}
// System.UriParser System.UriParser::GetSyntax(System.String)
extern "C" IL2CPP_METHOD_ATTR UriParser_t3890150400 * UriParser_GetSyntax_m811769415 (RuntimeObject * __this /* static, unused */, String_t* ___lwrCaseScheme0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UriParser_GetSyntax_m811769415_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UriParser_t3890150400 * V_0 = NULL;
	{
		V_0 = (UriParser_t3890150400 *)NULL;
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t3890150400_il2cpp_TypeInfo_var);
		Dictionary_2_t3675406699 * L_0 = ((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->get_m_Table_0();
		String_t* L_1 = ___lwrCaseScheme0;
		NullCheck(L_0);
		Dictionary_2_TryGetValue_m2122824571(L_0, L_1, (UriParser_t3890150400 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m2122824571_RuntimeMethod_var);
		UriParser_t3890150400 * L_2 = V_0;
		if (L_2)
		{
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t3890150400_il2cpp_TypeInfo_var);
		Dictionary_2_t3675406699 * L_3 = ((UriParser_t3890150400_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t3890150400_il2cpp_TypeInfo_var))->get_m_TempTable_1();
		String_t* L_4 = ___lwrCaseScheme0;
		NullCheck(L_3);
		Dictionary_2_TryGetValue_m2122824571(L_3, L_4, (UriParser_t3890150400 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m2122824571_RuntimeMethod_var);
	}

IL_0021:
	{
		UriParser_t3890150400 * L_5 = V_0;
		return L_5;
	}
}
// System.Boolean System.UriParser::get_IsSimple()
extern "C" IL2CPP_METHOD_ATTR bool UriParser_get_IsSimple_m3157087347 (UriParser_t3890150400 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = UriParser_InFact_m1142757999(__this, ((int32_t)131072), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.UriParser System.UriParser::InternalOnNewUri()
extern "C" IL2CPP_METHOD_ATTR UriParser_t3890150400 * UriParser_InternalOnNewUri_m4146786771 (UriParser_t3890150400 * __this, const RuntimeMethod* method)
{
	UriParser_t3890150400 * V_0 = NULL;
	{
		UriParser_t3890150400 * L_0 = VirtFuncInvoker0< UriParser_t3890150400 * >::Invoke(4 /* System.UriParser System.UriParser::OnNewUri() */, __this);
		V_0 = L_0;
		UriParser_t3890150400 * L_1 = V_0;
		if ((((RuntimeObject*)(UriParser_t3890150400 *)__this) == ((RuntimeObject*)(UriParser_t3890150400 *)L_1)))
		{
			goto IL_002f;
		}
	}
	{
		UriParser_t3890150400 * L_2 = V_0;
		String_t* L_3 = __this->get_m_Scheme_6();
		NullCheck(L_2);
		L_2->set_m_Scheme_6(L_3);
		UriParser_t3890150400 * L_4 = V_0;
		int32_t L_5 = __this->get_m_Port_5();
		NullCheck(L_4);
		L_4->set_m_Port_5(L_5);
		UriParser_t3890150400 * L_6 = V_0;
		int32_t L_7 = __this->get_m_Flags_2();
		NullCheck(L_6);
		L_6->set_m_Flags_2(L_7);
	}

IL_002f:
	{
		UriParser_t3890150400 * L_8 = V_0;
		return L_8;
	}
}
// System.Void System.UriParser::InternalValidate(System.Uri,System.UriFormatException&)
extern "C" IL2CPP_METHOD_ATTR void UriParser_InternalValidate_m3709279262 (UriParser_t3890150400 * __this, Uri_t100236324 * ___thisUri0, UriFormatException_t953270471 ** ___parsingError1, const RuntimeMethod* method)
{
	{
		Uri_t100236324 * L_0 = ___thisUri0;
		UriFormatException_t953270471 ** L_1 = ___parsingError1;
		VirtActionInvoker2< Uri_t100236324 *, UriFormatException_t953270471 ** >::Invoke(5 /* System.Void System.UriParser::InitializeAndValidate(System.Uri,System.UriFormatException&) */, __this, L_0, (UriFormatException_t953270471 **)L_1);
		return;
	}
}
// System.String System.UriParser::InternalResolve(System.Uri,System.Uri,System.UriFormatException&)
extern "C" IL2CPP_METHOD_ATTR String_t* UriParser_InternalResolve_m3957604214 (UriParser_t3890150400 * __this, Uri_t100236324 * ___thisBaseUri0, Uri_t100236324 * ___uriLink1, UriFormatException_t953270471 ** ___parsingError2, const RuntimeMethod* method)
{
	{
		Uri_t100236324 * L_0 = ___thisBaseUri0;
		Uri_t100236324 * L_1 = ___uriLink1;
		UriFormatException_t953270471 ** L_2 = ___parsingError2;
		String_t* L_3 = VirtFuncInvoker3< String_t*, Uri_t100236324 *, Uri_t100236324 *, UriFormatException_t953270471 ** >::Invoke(6 /* System.String System.UriParser::Resolve(System.Uri,System.Uri,System.UriFormatException&) */, __this, L_0, L_1, (UriFormatException_t953270471 **)L_2);
		return L_3;
	}
}
// System.String System.UriParser::InternalGetComponents(System.Uri,System.UriComponents,System.UriFormat)
extern "C" IL2CPP_METHOD_ATTR String_t* UriParser_InternalGetComponents_m1544498498 (UriParser_t3890150400 * __this, Uri_t100236324 * ___thisUri0, int32_t ___uriComponents1, int32_t ___uriFormat2, const RuntimeMethod* method)
{
	{
		Uri_t100236324 * L_0 = ___thisUri0;
		int32_t L_1 = ___uriComponents1;
		int32_t L_2 = ___uriFormat2;
		String_t* L_3 = VirtFuncInvoker3< String_t*, Uri_t100236324 *, int32_t, int32_t >::Invoke(7 /* System.String System.UriParser::GetComponents(System.Uri,System.UriComponents,System.UriFormat) */, __this, L_0, L_1, L_2);
		return L_3;
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
// System.Void System.UriParser/BuiltInUriParser::.ctor(System.String,System.Int32,System.UriSyntaxFlags)
extern "C" IL2CPP_METHOD_ATTR void BuiltInUriParser__ctor_m4154603378 (BuiltInUriParser_t2965675049 * __this, String_t* ___lwrCaseScheme0, int32_t ___defaultPort1, int32_t ___syntaxFlags2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BuiltInUriParser__ctor_m4154603378_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___syntaxFlags2;
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t3890150400_il2cpp_TypeInfo_var);
		UriParser__ctor_m1924902178(__this, ((int32_t)((int32_t)((int32_t)((int32_t)L_0|(int32_t)((int32_t)131072)))|(int32_t)((int32_t)262144))), /*hidden argument*/NULL);
		String_t* L_1 = ___lwrCaseScheme0;
		((UriParser_t3890150400 *)__this)->set_m_Scheme_6(L_1);
		int32_t L_2 = ___defaultPort1;
		((UriParser_t3890150400 *)__this)->set_m_Port_5(L_2);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.UriTypeConverter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UriTypeConverter__ctor_m148525934 (UriTypeConverter_t3695916615 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UriTypeConverter__ctor_m148525934_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TypeConverter_t2249118273_il2cpp_TypeInfo_var);
		TypeConverter__ctor_m2146026630(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.UriTypeConverter::CanConvert(System.Type)
extern "C" IL2CPP_METHOD_ATTR bool UriTypeConverter_CanConvert_m4004296934 (UriTypeConverter_t3695916615 * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UriTypeConverter_CanConvert_m4004296934_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___type0;
		RuntimeTypeHandle_t3027515415  L_1 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		bool L_3 = Type_op_Equality_m2683486427(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		return (bool)1;
	}

IL_0014:
	{
		Type_t * L_4 = ___type0;
		RuntimeTypeHandle_t3027515415  L_5 = { reinterpret_cast<intptr_t> (Uri_t100236324_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		bool L_7 = Type_op_Equality_m2683486427(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		Type_t * L_8 = ___type0;
		RuntimeTypeHandle_t3027515415  L_9 = { reinterpret_cast<intptr_t> (InstanceDescriptor_t657473484_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		bool L_11 = Type_op_Equality_m2683486427(NULL /*static, unused*/, L_8, L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.Boolean System.UriTypeConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C" IL2CPP_METHOD_ATTR bool UriTypeConverter_CanConvertFrom_m3865653726 (UriTypeConverter_t3695916615 * __this, RuntimeObject* ___context0, Type_t * ___sourceType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UriTypeConverter_CanConvertFrom_m3865653726_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___sourceType1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_1 = Type_op_Equality_m2683486427(NULL /*static, unused*/, L_0, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_2 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_2, _stringLiteral652524914, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, UriTypeConverter_CanConvertFrom_m3865653726_RuntimeMethod_var);
	}

IL_0014:
	{
		Type_t * L_3 = ___sourceType1;
		bool L_4 = UriTypeConverter_CanConvert_m4004296934(__this, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean System.UriTypeConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C" IL2CPP_METHOD_ATTR bool UriTypeConverter_CanConvertTo_m3367801835 (UriTypeConverter_t3695916615 * __this, RuntimeObject* ___context0, Type_t * ___destinationType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UriTypeConverter_CanConvertTo_m3367801835_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___destinationType1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_1 = Type_op_Equality_m2683486427(NULL /*static, unused*/, L_0, (Type_t *)NULL, /*hidden argument*/NULL);
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
		Type_t * L_2 = ___destinationType1;
		bool L_3 = UriTypeConverter_CanConvert_m4004296934(__this, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Object System.UriTypeConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * UriTypeConverter_ConvertFrom_m3320288643 (UriTypeConverter_t3695916615 * __this, RuntimeObject* ___context0, CultureInfo_t4157843068 * ___culture1, RuntimeObject * ___value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UriTypeConverter_ConvertFrom_m3320288643_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	InstanceDescriptor_t657473484 * V_1 = NULL;
	{
		RuntimeObject * L_0 = ___value2;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3493618073, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, UriTypeConverter_ConvertFrom_m3320288643_RuntimeMethod_var);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___context0;
		RuntimeObject * L_3 = ___value2;
		NullCheck(L_3);
		Type_t * L_4 = Object_GetType_m88164663(L_3, /*hidden argument*/NULL);
		bool L_5 = VirtFuncInvoker2< bool, RuntimeObject*, Type_t * >::Invoke(4 /* System.Boolean System.ComponentModel.TypeConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type) */, __this, L_2, L_4);
		if (L_5)
		{
			goto IL_002d;
		}
	}
	{
		String_t* L_6 = Locale_GetText_m3374010885(NULL /*static, unused*/, _stringLiteral2299570518, /*hidden argument*/NULL);
		NotSupportedException_t1314879016 * L_7 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2494070935(L_7, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, UriTypeConverter_ConvertFrom_m3320288643_RuntimeMethod_var);
	}

IL_002d:
	{
		RuntimeObject * L_8 = ___value2;
		if (!((Uri_t100236324 *)IsInstClass((RuntimeObject*)L_8, Uri_t100236324_il2cpp_TypeInfo_var)))
		{
			goto IL_0037;
		}
	}
	{
		RuntimeObject * L_9 = ___value2;
		return L_9;
	}

IL_0037:
	{
		RuntimeObject * L_10 = ___value2;
		V_0 = ((String_t*)IsInstSealed((RuntimeObject*)L_10, String_t_il2cpp_TypeInfo_var));
		String_t* L_11 = V_0;
		if (!L_11)
		{
			goto IL_0049;
		}
	}
	{
		String_t* L_12 = V_0;
		Uri_t100236324 * L_13 = (Uri_t100236324 *)il2cpp_codegen_object_new(Uri_t100236324_il2cpp_TypeInfo_var);
		Uri__ctor_m391584135(L_13, L_12, 0, /*hidden argument*/NULL);
		return L_13;
	}

IL_0049:
	{
		RuntimeObject * L_14 = ___value2;
		V_1 = ((InstanceDescriptor_t657473484 *)IsInstSealed((RuntimeObject*)L_14, InstanceDescriptor_t657473484_il2cpp_TypeInfo_var));
		InstanceDescriptor_t657473484 * L_15 = V_1;
		if (!L_15)
		{
			goto IL_005a;
		}
	}
	{
		InstanceDescriptor_t657473484 * L_16 = V_1;
		NullCheck(L_16);
		RuntimeObject * L_17 = InstanceDescriptor_Invoke_m2192227030(L_16, /*hidden argument*/NULL);
		return L_17;
	}

IL_005a:
	{
		RuntimeObject* L_18 = ___context0;
		CultureInfo_t4157843068 * L_19 = ___culture1;
		RuntimeObject * L_20 = ___value2;
		RuntimeObject * L_21 = TypeConverter_ConvertFrom_m1024238132(__this, L_18, L_19, L_20, /*hidden argument*/NULL);
		return L_21;
	}
}
// System.Object System.UriTypeConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * UriTypeConverter_ConvertTo_m3611054432 (UriTypeConverter_t3695916615 * __this, RuntimeObject* ___context0, CultureInfo_t4157843068 * ___culture1, RuntimeObject * ___value2, Type_t * ___destinationType3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UriTypeConverter_ConvertTo_m3611054432_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Uri_t100236324 * V_0 = NULL;
	int32_t G_B10_0 = 0;
	ObjectU5BU5D_t2843939325* G_B10_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B10_2 = NULL;
	ConstructorInfo_t5769829 * G_B10_3 = NULL;
	int32_t G_B9_0 = 0;
	ObjectU5BU5D_t2843939325* G_B9_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B9_2 = NULL;
	ConstructorInfo_t5769829 * G_B9_3 = NULL;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	ObjectU5BU5D_t2843939325* G_B11_2 = NULL;
	ObjectU5BU5D_t2843939325* G_B11_3 = NULL;
	ConstructorInfo_t5769829 * G_B11_4 = NULL;
	{
		RuntimeObject* L_0 = ___context0;
		Type_t * L_1 = ___destinationType3;
		bool L_2 = VirtFuncInvoker2< bool, RuntimeObject*, Type_t * >::Invoke(5 /* System.Boolean System.ComponentModel.TypeConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type) */, __this, L_0, L_1);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_3 = Locale_GetText_m3374010885(NULL /*static, unused*/, _stringLiteral1835507732, /*hidden argument*/NULL);
		NotSupportedException_t1314879016 * L_4 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2494070935(L_4, L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, UriTypeConverter_ConvertTo_m3611054432_RuntimeMethod_var);
	}

IL_001b:
	{
		RuntimeObject * L_5 = ___value2;
		V_0 = ((Uri_t100236324 *)IsInstClass((RuntimeObject*)L_5, Uri_t100236324_il2cpp_TypeInfo_var));
		Uri_t100236324 * L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t100236324_il2cpp_TypeInfo_var);
		bool L_7 = Uri_op_Inequality_m3504002810(NULL /*static, unused*/, L_6, (Uri_t100236324 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_00c8;
		}
	}
	{
		Type_t * L_8 = ___destinationType3;
		RuntimeTypeHandle_t3027515415  L_9 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		bool L_11 = Type_op_Equality_m2683486427(NULL /*static, unused*/, L_8, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0048;
		}
	}
	{
		Uri_t100236324 * L_12 = V_0;
		NullCheck(L_12);
		String_t* L_13 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_12);
		return L_13;
	}

IL_0048:
	{
		Type_t * L_14 = ___destinationType3;
		RuntimeTypeHandle_t3027515415  L_15 = { reinterpret_cast<intptr_t> (Uri_t100236324_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_16 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		bool L_17 = Type_op_Equality_m2683486427(NULL /*static, unused*/, L_14, L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_005d;
		}
	}
	{
		Uri_t100236324 * L_18 = V_0;
		return L_18;
	}

IL_005d:
	{
		Type_t * L_19 = ___destinationType3;
		RuntimeTypeHandle_t3027515415  L_20 = { reinterpret_cast<intptr_t> (InstanceDescriptor_t657473484_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_21 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		bool L_22 = Type_op_Equality_m2683486427(NULL /*static, unused*/, L_19, L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00c8;
		}
	}
	{
		RuntimeTypeHandle_t3027515415  L_23 = { reinterpret_cast<intptr_t> (Uri_t100236324_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_24 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		TypeU5BU5D_t3940880105* L_25 = (TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t3940880105* L_26 = L_25;
		RuntimeTypeHandle_t3027515415  L_27 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t * L_28 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_28);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_28);
		TypeU5BU5D_t3940880105* L_29 = L_26;
		RuntimeTypeHandle_t3027515415  L_30 = { reinterpret_cast<intptr_t> (UriKind_t3816567336_0_0_0_var) };
		Type_t * L_31 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_31);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_31);
		NullCheck(L_24);
		ConstructorInfo_t5769829 * L_32 = Type_GetConstructor_m2219014380(L_24, L_29, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_33 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t2843939325* L_34 = L_33;
		Uri_t100236324 * L_35 = V_0;
		NullCheck(L_35);
		String_t* L_36 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_35);
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_36);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_36);
		ObjectU5BU5D_t2843939325* L_37 = L_34;
		Uri_t100236324 * L_38 = V_0;
		NullCheck(L_38);
		bool L_39 = Uri_get_IsAbsoluteUri_m3834080655(L_38, /*hidden argument*/NULL);
		G_B9_0 = 1;
		G_B9_1 = L_37;
		G_B9_2 = L_37;
		G_B9_3 = L_32;
		if (L_39)
		{
			G_B10_0 = 1;
			G_B10_1 = L_37;
			G_B10_2 = L_37;
			G_B10_3 = L_32;
			goto IL_00bb;
		}
	}
	{
		G_B11_0 = 2;
		G_B11_1 = G_B9_0;
		G_B11_2 = G_B9_1;
		G_B11_3 = G_B9_2;
		G_B11_4 = G_B9_3;
		goto IL_00bc;
	}

IL_00bb:
	{
		G_B11_0 = 1;
		G_B11_1 = G_B10_0;
		G_B11_2 = G_B10_1;
		G_B11_3 = G_B10_2;
		G_B11_4 = G_B10_3;
	}

IL_00bc:
	{
		int32_t L_40 = ((int32_t)G_B11_0);
		RuntimeObject * L_41 = Box(UriKind_t3816567336_il2cpp_TypeInfo_var, &L_40);
		NullCheck(G_B11_2);
		ArrayElementTypeCheck (G_B11_2, L_41);
		(G_B11_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B11_1), (RuntimeObject *)L_41);
		InstanceDescriptor_t657473484 * L_42 = (InstanceDescriptor_t657473484 *)il2cpp_codegen_object_new(InstanceDescriptor_t657473484_il2cpp_TypeInfo_var);
		InstanceDescriptor__ctor_m1302935062(L_42, G_B11_4, (RuntimeObject*)(RuntimeObject*)G_B11_3, /*hidden argument*/NULL);
		return L_42;
	}

IL_00c8:
	{
		RuntimeObject* L_43 = ___context0;
		CultureInfo_t4157843068 * L_44 = ___culture1;
		RuntimeObject * L_45 = ___value2;
		Type_t * L_46 = ___destinationType3;
		RuntimeObject * L_47 = TypeConverter_ConvertTo_m3165899902(__this, L_43, L_44, L_45, L_46, /*hidden argument*/NULL);
		return L_47;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
