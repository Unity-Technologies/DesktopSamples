#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF;
// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B;
// UnityEngine.Internal.DefaultValueAttribute
struct DefaultValueAttribute_tC16686567591630447D94937AF74EF53DC158122;
// System.Runtime.CompilerServices.InternalsVisibleToAttribute
struct InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C;
// UnityEngine.Bindings.NativeConditionalAttribute
struct NativeConditionalAttribute_t659349956F06958D4D05443BD06FF5CDC767C88B;
// UnityEngine.Bindings.NativeHeaderAttribute
struct NativeHeaderAttribute_t7F0E4B53790AA75CDB4C44E6D644267F8FE3066C;
// UnityEngine.Bindings.NativeTypeAttribute
struct NativeTypeAttribute_t7A71B541B18D0BA1A9889E05D36CAC56CF9F48D9;
// System.ObsoleteAttribute
struct ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671;
// System.ParamArrayAttribute
struct ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F;
// UnityEngine.Scripting.RequiredByNativeCodeAttribute
struct RequiredByNativeCodeAttribute_t855401D3C2EF3B44F4F1C3EE2DCD361CFC358D20;
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80;
// UnityEngine.Bindings.StaticAccessorAttribute
struct StaticAccessorAttribute_t7A16FF0FA31E38510BBC8BCA5AE56C3E67D5A2BA;
// System.String
struct String_t;
// UnityEngine.Bindings.ThreadSafeAttribute
struct ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6;
// UnityEngine.UnityEngineModuleAssembly
struct UnityEngineModuleAssembly_t33CB058FDDDC458E384578147D6027BB1EC86CFF;
// UnityEngine.Scripting.UsedByNativeCodeAttribute
struct UsedByNativeCodeAttribute_t604CF4E57FB3E7BCCCF0871A9B526472B2CDCB92;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
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
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxationsAttribute::m_relaxations
	int32_t ___m_relaxations_0;

public:
	inline static int32_t get_offset_of_m_relaxations_0() { return static_cast<int32_t>(offsetof(CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF, ___m_relaxations_0)); }
	inline int32_t get_m_relaxations_0() const { return ___m_relaxations_0; }
	inline int32_t* get_address_of_m_relaxations_0() { return &___m_relaxations_0; }
	inline void set_m_relaxations_0(int32_t value)
	{
		___m_relaxations_0 = value;
	}
};


// UnityEngine.Internal.DefaultValueAttribute
struct DefaultValueAttribute_tC16686567591630447D94937AF74EF53DC158122  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Object UnityEngine.Internal.DefaultValueAttribute::DefaultValue
	RuntimeObject * ___DefaultValue_0;

public:
	inline static int32_t get_offset_of_DefaultValue_0() { return static_cast<int32_t>(offsetof(DefaultValueAttribute_tC16686567591630447D94937AF74EF53DC158122, ___DefaultValue_0)); }
	inline RuntimeObject * get_DefaultValue_0() const { return ___DefaultValue_0; }
	inline RuntimeObject ** get_address_of_DefaultValue_0() { return &___DefaultValue_0; }
	inline void set_DefaultValue_0(RuntimeObject * value)
	{
		___DefaultValue_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultValue_0), (void*)value);
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Runtime.CompilerServices.InternalsVisibleToAttribute
struct InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Runtime.CompilerServices.InternalsVisibleToAttribute::_assemblyName
	String_t* ____assemblyName_0;
	// System.Boolean System.Runtime.CompilerServices.InternalsVisibleToAttribute::_allInternalsVisible
	bool ____allInternalsVisible_1;

public:
	inline static int32_t get_offset_of__assemblyName_0() { return static_cast<int32_t>(offsetof(InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C, ____assemblyName_0)); }
	inline String_t* get__assemblyName_0() const { return ____assemblyName_0; }
	inline String_t** get_address_of__assemblyName_0() { return &____assemblyName_0; }
	inline void set__assemblyName_0(String_t* value)
	{
		____assemblyName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____assemblyName_0), (void*)value);
	}

	inline static int32_t get_offset_of__allInternalsVisible_1() { return static_cast<int32_t>(offsetof(InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C, ____allInternalsVisible_1)); }
	inline bool get__allInternalsVisible_1() const { return ____allInternalsVisible_1; }
	inline bool* get_address_of__allInternalsVisible_1() { return &____allInternalsVisible_1; }
	inline void set__allInternalsVisible_1(bool value)
	{
		____allInternalsVisible_1 = value;
	}
};


// UnityEngine.Bindings.NativeConditionalAttribute
struct NativeConditionalAttribute_t659349956F06958D4D05443BD06FF5CDC767C88B  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String UnityEngine.Bindings.NativeConditionalAttribute::<Condition>k__BackingField
	String_t* ___U3CConditionU3Ek__BackingField_0;
	// System.Boolean UnityEngine.Bindings.NativeConditionalAttribute::<Enabled>k__BackingField
	bool ___U3CEnabledU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CConditionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(NativeConditionalAttribute_t659349956F06958D4D05443BD06FF5CDC767C88B, ___U3CConditionU3Ek__BackingField_0)); }
	inline String_t* get_U3CConditionU3Ek__BackingField_0() const { return ___U3CConditionU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CConditionU3Ek__BackingField_0() { return &___U3CConditionU3Ek__BackingField_0; }
	inline void set_U3CConditionU3Ek__BackingField_0(String_t* value)
	{
		___U3CConditionU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConditionU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEnabledU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(NativeConditionalAttribute_t659349956F06958D4D05443BD06FF5CDC767C88B, ___U3CEnabledU3Ek__BackingField_1)); }
	inline bool get_U3CEnabledU3Ek__BackingField_1() const { return ___U3CEnabledU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CEnabledU3Ek__BackingField_1() { return &___U3CEnabledU3Ek__BackingField_1; }
	inline void set_U3CEnabledU3Ek__BackingField_1(bool value)
	{
		___U3CEnabledU3Ek__BackingField_1 = value;
	}
};


// UnityEngine.Bindings.NativeHeaderAttribute
struct NativeHeaderAttribute_t7F0E4B53790AA75CDB4C44E6D644267F8FE3066C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String UnityEngine.Bindings.NativeHeaderAttribute::<Header>k__BackingField
	String_t* ___U3CHeaderU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CHeaderU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(NativeHeaderAttribute_t7F0E4B53790AA75CDB4C44E6D644267F8FE3066C, ___U3CHeaderU3Ek__BackingField_0)); }
	inline String_t* get_U3CHeaderU3Ek__BackingField_0() const { return ___U3CHeaderU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CHeaderU3Ek__BackingField_0() { return &___U3CHeaderU3Ek__BackingField_0; }
	inline void set_U3CHeaderU3Ek__BackingField_0(String_t* value)
	{
		___U3CHeaderU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CHeaderU3Ek__BackingField_0), (void*)value);
	}
};


// UnityEngine.Bindings.NativeMethodAttribute
struct NativeMethodAttribute_t57F61ACA17BEC1260A06658ACD971B0009CC1866  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String UnityEngine.Bindings.NativeMethodAttribute::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.Boolean UnityEngine.Bindings.NativeMethodAttribute::<IsThreadSafe>k__BackingField
	bool ___U3CIsThreadSafeU3Ek__BackingField_1;
	// System.Boolean UnityEngine.Bindings.NativeMethodAttribute::<IsFreeFunction>k__BackingField
	bool ___U3CIsFreeFunctionU3Ek__BackingField_2;
	// System.Boolean UnityEngine.Bindings.NativeMethodAttribute::<ThrowsException>k__BackingField
	bool ___U3CThrowsExceptionU3Ek__BackingField_3;
	// System.Boolean UnityEngine.Bindings.NativeMethodAttribute::<HasExplicitThis>k__BackingField
	bool ___U3CHasExplicitThisU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(NativeMethodAttribute_t57F61ACA17BEC1260A06658ACD971B0009CC1866, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsThreadSafeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(NativeMethodAttribute_t57F61ACA17BEC1260A06658ACD971B0009CC1866, ___U3CIsThreadSafeU3Ek__BackingField_1)); }
	inline bool get_U3CIsThreadSafeU3Ek__BackingField_1() const { return ___U3CIsThreadSafeU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CIsThreadSafeU3Ek__BackingField_1() { return &___U3CIsThreadSafeU3Ek__BackingField_1; }
	inline void set_U3CIsThreadSafeU3Ek__BackingField_1(bool value)
	{
		___U3CIsThreadSafeU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CIsFreeFunctionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(NativeMethodAttribute_t57F61ACA17BEC1260A06658ACD971B0009CC1866, ___U3CIsFreeFunctionU3Ek__BackingField_2)); }
	inline bool get_U3CIsFreeFunctionU3Ek__BackingField_2() const { return ___U3CIsFreeFunctionU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CIsFreeFunctionU3Ek__BackingField_2() { return &___U3CIsFreeFunctionU3Ek__BackingField_2; }
	inline void set_U3CIsFreeFunctionU3Ek__BackingField_2(bool value)
	{
		___U3CIsFreeFunctionU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CThrowsExceptionU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(NativeMethodAttribute_t57F61ACA17BEC1260A06658ACD971B0009CC1866, ___U3CThrowsExceptionU3Ek__BackingField_3)); }
	inline bool get_U3CThrowsExceptionU3Ek__BackingField_3() const { return ___U3CThrowsExceptionU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CThrowsExceptionU3Ek__BackingField_3() { return &___U3CThrowsExceptionU3Ek__BackingField_3; }
	inline void set_U3CThrowsExceptionU3Ek__BackingField_3(bool value)
	{
		___U3CThrowsExceptionU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CHasExplicitThisU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(NativeMethodAttribute_t57F61ACA17BEC1260A06658ACD971B0009CC1866, ___U3CHasExplicitThisU3Ek__BackingField_4)); }
	inline bool get_U3CHasExplicitThisU3Ek__BackingField_4() const { return ___U3CHasExplicitThisU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CHasExplicitThisU3Ek__BackingField_4() { return &___U3CHasExplicitThisU3Ek__BackingField_4; }
	inline void set_U3CHasExplicitThisU3Ek__BackingField_4(bool value)
	{
		___U3CHasExplicitThisU3Ek__BackingField_4 = value;
	}
};


// System.ObsoleteAttribute
struct ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.ObsoleteAttribute::_message
	String_t* ____message_0;
	// System.Boolean System.ObsoleteAttribute::_error
	bool ____error_1;

public:
	inline static int32_t get_offset_of__message_0() { return static_cast<int32_t>(offsetof(ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671, ____message_0)); }
	inline String_t* get__message_0() const { return ____message_0; }
	inline String_t** get_address_of__message_0() { return &____message_0; }
	inline void set__message_0(String_t* value)
	{
		____message_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_0), (void*)value);
	}

	inline static int32_t get_offset_of__error_1() { return static_cast<int32_t>(offsetof(ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671, ____error_1)); }
	inline bool get__error_1() const { return ____error_1; }
	inline bool* get_address_of__error_1() { return &____error_1; }
	inline void set__error_1(bool value)
	{
		____error_1 = value;
	}
};


// System.ParamArrayAttribute
struct ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// UnityEngine.Scripting.RequiredByNativeCodeAttribute
struct RequiredByNativeCodeAttribute_t855401D3C2EF3B44F4F1C3EE2DCD361CFC358D20  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String UnityEngine.Scripting.RequiredByNativeCodeAttribute::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.Boolean UnityEngine.Scripting.RequiredByNativeCodeAttribute::<Optional>k__BackingField
	bool ___U3COptionalU3Ek__BackingField_1;
	// System.Boolean UnityEngine.Scripting.RequiredByNativeCodeAttribute::<GenerateProxy>k__BackingField
	bool ___U3CGenerateProxyU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RequiredByNativeCodeAttribute_t855401D3C2EF3B44F4F1C3EE2DCD361CFC358D20, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3COptionalU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RequiredByNativeCodeAttribute_t855401D3C2EF3B44F4F1C3EE2DCD361CFC358D20, ___U3COptionalU3Ek__BackingField_1)); }
	inline bool get_U3COptionalU3Ek__BackingField_1() const { return ___U3COptionalU3Ek__BackingField_1; }
	inline bool* get_address_of_U3COptionalU3Ek__BackingField_1() { return &___U3COptionalU3Ek__BackingField_1; }
	inline void set_U3COptionalU3Ek__BackingField_1(bool value)
	{
		___U3COptionalU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CGenerateProxyU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RequiredByNativeCodeAttribute_t855401D3C2EF3B44F4F1C3EE2DCD361CFC358D20, ___U3CGenerateProxyU3Ek__BackingField_2)); }
	inline bool get_U3CGenerateProxyU3Ek__BackingField_2() const { return ___U3CGenerateProxyU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CGenerateProxyU3Ek__BackingField_2() { return &___U3CGenerateProxyU3Ek__BackingField_2; }
	inline void set_U3CGenerateProxyU3Ek__BackingField_2(bool value)
	{
		___U3CGenerateProxyU3Ek__BackingField_2 = value;
	}
};


// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::m_wrapNonExceptionThrows
	bool ___m_wrapNonExceptionThrows_0;

public:
	inline static int32_t get_offset_of_m_wrapNonExceptionThrows_0() { return static_cast<int32_t>(offsetof(RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80, ___m_wrapNonExceptionThrows_0)); }
	inline bool get_m_wrapNonExceptionThrows_0() const { return ___m_wrapNonExceptionThrows_0; }
	inline bool* get_address_of_m_wrapNonExceptionThrows_0() { return &___m_wrapNonExceptionThrows_0; }
	inline void set_m_wrapNonExceptionThrows_0(bool value)
	{
		___m_wrapNonExceptionThrows_0 = value;
	}
};


// UnityEngine.UnityEngineModuleAssembly
struct UnityEngineModuleAssembly_t33CB058FDDDC458E384578147D6027BB1EC86CFF  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// UnityEngine.Scripting.UsedByNativeCodeAttribute
struct UsedByNativeCodeAttribute_t604CF4E57FB3E7BCCCF0871A9B526472B2CDCB92  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String UnityEngine.Scripting.UsedByNativeCodeAttribute::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(UsedByNativeCodeAttribute_t604CF4E57FB3E7BCCCF0871A9B526472B2CDCB92, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_0), (void*)value);
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.Bindings.CodegenOptions
struct CodegenOptions_t2D0BDBDCEFA8EC8B714E6F9E84A55557343398FA 
{
public:
	// System.Int32 UnityEngine.Bindings.CodegenOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CodegenOptions_t2D0BDBDCEFA8EC8B714E6F9E84A55557343398FA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Bindings.StaticAccessorType
struct StaticAccessorType_tFA86A321ADAC16A48DF7FC82F8FBBE5F71D2DC4C 
{
public:
	// System.Int32 UnityEngine.Bindings.StaticAccessorType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StaticAccessorType_tFA86A321ADAC16A48DF7FC82F8FBBE5F71D2DC4C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Bindings.ThreadSafeAttribute
struct ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6  : public NativeMethodAttribute_t57F61ACA17BEC1260A06658ACD971B0009CC1866
{
public:

public:
};


// System.Diagnostics.DebuggableAttribute/DebuggingModes
struct DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8 
{
public:
	// System.Int32 System.Diagnostics.DebuggableAttribute/DebuggingModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Diagnostics.DebuggableAttribute/DebuggingModes System.Diagnostics.DebuggableAttribute::m_debuggingModes
	int32_t ___m_debuggingModes_0;

public:
	inline static int32_t get_offset_of_m_debuggingModes_0() { return static_cast<int32_t>(offsetof(DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B, ___m_debuggingModes_0)); }
	inline int32_t get_m_debuggingModes_0() const { return ___m_debuggingModes_0; }
	inline int32_t* get_address_of_m_debuggingModes_0() { return &___m_debuggingModes_0; }
	inline void set_m_debuggingModes_0(int32_t value)
	{
		___m_debuggingModes_0 = value;
	}
};


// UnityEngine.Bindings.NativeTypeAttribute
struct NativeTypeAttribute_t7A71B541B18D0BA1A9889E05D36CAC56CF9F48D9  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String UnityEngine.Bindings.NativeTypeAttribute::<Header>k__BackingField
	String_t* ___U3CHeaderU3Ek__BackingField_0;
	// System.String UnityEngine.Bindings.NativeTypeAttribute::<IntermediateScriptingStructName>k__BackingField
	String_t* ___U3CIntermediateScriptingStructNameU3Ek__BackingField_1;
	// UnityEngine.Bindings.CodegenOptions UnityEngine.Bindings.NativeTypeAttribute::<CodegenOptions>k__BackingField
	int32_t ___U3CCodegenOptionsU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CHeaderU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(NativeTypeAttribute_t7A71B541B18D0BA1A9889E05D36CAC56CF9F48D9, ___U3CHeaderU3Ek__BackingField_0)); }
	inline String_t* get_U3CHeaderU3Ek__BackingField_0() const { return ___U3CHeaderU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CHeaderU3Ek__BackingField_0() { return &___U3CHeaderU3Ek__BackingField_0; }
	inline void set_U3CHeaderU3Ek__BackingField_0(String_t* value)
	{
		___U3CHeaderU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CHeaderU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIntermediateScriptingStructNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(NativeTypeAttribute_t7A71B541B18D0BA1A9889E05D36CAC56CF9F48D9, ___U3CIntermediateScriptingStructNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CIntermediateScriptingStructNameU3Ek__BackingField_1() const { return ___U3CIntermediateScriptingStructNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CIntermediateScriptingStructNameU3Ek__BackingField_1() { return &___U3CIntermediateScriptingStructNameU3Ek__BackingField_1; }
	inline void set_U3CIntermediateScriptingStructNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CIntermediateScriptingStructNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIntermediateScriptingStructNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCodegenOptionsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(NativeTypeAttribute_t7A71B541B18D0BA1A9889E05D36CAC56CF9F48D9, ___U3CCodegenOptionsU3Ek__BackingField_2)); }
	inline int32_t get_U3CCodegenOptionsU3Ek__BackingField_2() const { return ___U3CCodegenOptionsU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CCodegenOptionsU3Ek__BackingField_2() { return &___U3CCodegenOptionsU3Ek__BackingField_2; }
	inline void set_U3CCodegenOptionsU3Ek__BackingField_2(int32_t value)
	{
		___U3CCodegenOptionsU3Ek__BackingField_2 = value;
	}
};


// UnityEngine.Bindings.StaticAccessorAttribute
struct StaticAccessorAttribute_t7A16FF0FA31E38510BBC8BCA5AE56C3E67D5A2BA  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String UnityEngine.Bindings.StaticAccessorAttribute::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// UnityEngine.Bindings.StaticAccessorType UnityEngine.Bindings.StaticAccessorAttribute::<Type>k__BackingField
	int32_t ___U3CTypeU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(StaticAccessorAttribute_t7A16FF0FA31E38510BBC8BCA5AE56C3E67D5A2BA, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(StaticAccessorAttribute_t7A16FF0FA31E38510BBC8BCA5AE56C3E67D5A2BA, ___U3CTypeU3Ek__BackingField_1)); }
	inline int32_t get_U3CTypeU3Ek__BackingField_1() const { return ___U3CTypeU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CTypeU3Ek__BackingField_1() { return &___U3CTypeU3Ek__BackingField_1; }
	inline void set_U3CTypeU3Ek__BackingField_1(int32_t value)
	{
		___U3CTypeU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Runtime.CompilerServices.InternalsVisibleToAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9 (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * __this, String_t* ___assemblyName0, const RuntimeMethod* method);
// System.Void System.Diagnostics.DebuggableAttribute::.ctor(System.Diagnostics.DebuggableAttribute/DebuggingModes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550 (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * __this, int32_t ___modes0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::set_WrapNonExceptionThrows(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.CompilationRelaxationsAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * __this, int32_t ___relaxations0, const RuntimeMethod* method);
// System.Void UnityEngine.UnityEngineModuleAssembly::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEngineModuleAssembly__ctor_m76C129AC6AA438BE601F5279EE9EB599BEF90AF9 (UnityEngineModuleAssembly_t33CB058FDDDC458E384578147D6027BB1EC86CFF * __this, const RuntimeMethod* method);
// System.Void System.ParamArrayAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParamArrayAttribute__ctor_mCC72AFF718185BA7B87FD8D9471F1274400C5719 (ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Scripting.UsedByNativeCodeAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UsedByNativeCodeAttribute__ctor_mA8236FADF130BCDD86C6017039295F9D521EECB8 (UsedByNativeCodeAttribute_t604CF4E57FB3E7BCCCF0871A9B526472B2CDCB92 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Scripting.RequiredByNativeCodeAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequiredByNativeCodeAttribute__ctor_m97C095D1EE6AAB2894AE7E8B2F07D9B47CB8F8B5 (RequiredByNativeCodeAttribute_t855401D3C2EF3B44F4F1C3EE2DCD361CFC358D20 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Bindings.NativeTypeAttribute::.ctor(UnityEngine.Bindings.CodegenOptions,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeTypeAttribute__ctor_m0914A881DE5A0E58B381CDE59CB821D6DBA4B711 (NativeTypeAttribute_t7A71B541B18D0BA1A9889E05D36CAC56CF9F48D9 * __this, int32_t ___codegenOptions0, String_t* ___intermediateStructName1, const RuntimeMethod* method);
// System.Void UnityEngine.Bindings.StaticAccessorAttribute::.ctor(System.String,UnityEngine.Bindings.StaticAccessorType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StaticAccessorAttribute__ctor_m0C3215256AEFAEFDDCBCD2BA9AA579CDBB230706 (StaticAccessorAttribute_t7A16FF0FA31E38510BBC8BCA5AE56C3E67D5A2BA * __this, String_t* ___name0, int32_t ___type1, const RuntimeMethod* method);
// System.Void UnityEngine.Bindings.NativeHeaderAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeHeaderAttribute__ctor_m0E83F29C5939F185D6E90541591802EB2845FD76 (NativeHeaderAttribute_t7F0E4B53790AA75CDB4C44E6D644267F8FE3066C * __this, String_t* ___header0, const RuntimeMethod* method);
// System.Void UnityEngine.Bindings.NativeConditionalAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeConditionalAttribute__ctor_m2D44C123AE8913373A143BBE663F4DEF8D21DEF9 (NativeConditionalAttribute_t659349956F06958D4D05443BD06FF5CDC767C88B * __this, String_t* ___condition0, const RuntimeMethod* method);
// System.Void UnityEngine.Internal.DefaultValueAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultValueAttribute__ctor_m7A9877491C22E8CDCFDAD240D04156D4FAE7D6C6 (DefaultValueAttribute_tC16686567591630447D94937AF74EF53DC158122 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Bindings.ThreadSafeAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadSafeAttribute__ctor_m6FFAB202BA1302071542A4242796CC44C1782240 (ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 * __this, const RuntimeMethod* method);
// System.Void System.ObsoleteAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868 (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * __this, String_t* ___message0, const RuntimeMethod* method);
static void UnityEngine_AndroidJNIModule_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[0];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x55\x6E\x69\x74\x79\x57\x65\x62\x52\x65\x71\x75\x65\x73\x74\x57\x57\x57\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[1];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x53\x74\x72\x65\x61\x6D\x69\x6E\x67\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[2];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x53\x70\x72\x69\x74\x65\x53\x68\x61\x70\x65\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[3];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x43\x6C\x6F\x75\x64"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[4];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x53\x70\x72\x69\x74\x65\x4D\x61\x73\x6B\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[5];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x52\x75\x6E\x74\x69\x6D\x65\x49\x6E\x69\x74\x69\x61\x6C\x69\x7A\x65\x4F\x6E\x4C\x6F\x61\x64\x4D\x61\x6E\x61\x67\x65\x72\x49\x6E\x69\x74\x69\x61\x6C\x69\x7A\x65\x72\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[6];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x50\x72\x6F\x66\x69\x6C\x65\x72\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[7];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x50\x68\x79\x73\x69\x63\x73\x32\x44\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[8];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x50\x68\x79\x73\x69\x63\x73\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[9];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x50\x61\x72\x74\x69\x63\x6C\x65\x53\x79\x73\x74\x65\x6D\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[10];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x4C\x6F\x63\x61\x6C\x69\x7A\x61\x74\x69\x6F\x6E\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[11];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x4A\x53\x4F\x4E\x53\x65\x72\x69\x61\x6C\x69\x7A\x65\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[12];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x53\x75\x62\x73\x74\x61\x6E\x63\x65\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[13];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x53\x63\x72\x65\x65\x6E\x43\x61\x70\x74\x75\x72\x65\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[14];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x4E\x65\x74\x77\x6F\x72\x6B\x69\x6E\x67"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[15];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x41\x6E\x61\x6C\x79\x74\x69\x63\x73"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[16];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x31\x32"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[17];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x31\x31"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[18];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x31\x30"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[19];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x30\x39"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[20];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x30\x38"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[21];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x30\x37"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[22];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x31\x33"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[23];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x30\x36"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[24];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x30\x34"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[25];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x43\x6C\x6F\x75\x64\x2E\x53\x65\x72\x76\x69\x63\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[26];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x30\x33"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[27];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x53\x75\x62\x73\x79\x73\x74\x65\x6D\x73\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[28];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x54\x65\x72\x72\x61\x69\x6E\x50\x68\x79\x73\x69\x63\x73\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[29];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x55\x49\x45\x6C\x65\x6D\x65\x6E\x74\x73\x4E\x61\x74\x69\x76\x65\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[30];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x55\x49\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[31];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x54\x4C\x53\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[32];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x54\x69\x6C\x65\x6D\x61\x70\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[33];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x47\x49\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[34];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x44\x53\x50\x47\x72\x61\x70\x68\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[35];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x44\x69\x72\x65\x63\x74\x6F\x72\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[36];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x41\x75\x64\x69\x6F\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[37];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x41\x6E\x69\x6D\x61\x74\x69\x6F\x6E\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[38];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x41\x6E\x64\x72\x6F\x69\x64\x4A\x4E\x49\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[39];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x41\x49\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[40];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x54\x65\x72\x72\x61\x69\x6E\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[41];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x41\x63\x63\x65\x73\x73\x69\x62\x69\x6C\x69\x74\x79\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[42];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x53\x68\x61\x72\x65\x64\x49\x6E\x74\x65\x72\x6E\x61\x6C\x73\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[43];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65"), NULL);
	}
	{
		DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * tmp = (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B *)cache->attributes[44];
		DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550(tmp, 263LL, NULL);
	}
	{
		RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * tmp = (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 *)cache->attributes[45];
		RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline(tmp, true, NULL);
	}
	{
		CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * tmp = (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF *)cache->attributes[46];
		CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B(tmp, 8LL, NULL);
	}
	{
		UnityEngineModuleAssembly_t33CB058FDDDC458E384578147D6027BB1EC86CFF * tmp = (UnityEngineModuleAssembly_t33CB058FDDDC458E384578147D6027BB1EC86CFF *)cache->attributes[47];
		UnityEngineModuleAssembly__ctor_m76C129AC6AA438BE601F5279EE9EB599BEF90AF9(tmp, NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[48];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x47\x72\x69\x64\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[49];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x48\x6F\x74\x52\x65\x6C\x6F\x61\x64\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[50];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x49\x6D\x61\x67\x65\x43\x6F\x6E\x76\x65\x72\x73\x69\x6F\x6E\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[51];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x49\x6E\x70\x75\x74\x4C\x65\x67\x61\x63\x79\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[52];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x54\x65\x78\x74\x52\x65\x6E\x64\x65\x72\x69\x6E\x67\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[53];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x43\x6F\x72\x65\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[54];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x41\x6E\x61\x6C\x79\x74\x69\x63\x73"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[55];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x30\x31"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[56];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x43\x6F\x72\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[57];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x50\x65\x72\x66\x6F\x72\x6D\x61\x6E\x63\x65\x54\x65\x73\x74\x73\x2E\x52\x75\x6E\x74\x69\x6D\x65\x54\x65\x73\x74\x52\x75\x6E\x6E\x65\x72\x2E\x54\x65\x73\x74\x73"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[58];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x67\x72\x61\x74\x69\x6F\x6E\x54\x65\x73\x74\x73"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[59];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x42\x75\x72\x73\x74\x2E\x45\x64\x69\x74\x6F\x72"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[60];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x42\x75\x72\x73\x74"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[61];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x41\x75\x74\x6F\x6D\x61\x74\x69\x6F\x6E"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[62];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x54\x65\x73\x74\x52\x75\x6E\x6E\x65\x72"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[63];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x50\x75\x72\x63\x68\x61\x73\x69\x6E\x67"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[64];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x41\x64\x76\x65\x72\x74\x69\x73\x65\x6D\x65\x6E\x74\x73"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[65];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x44\x65\x70\x6C\x6F\x79\x6D\x65\x6E\x74\x54\x65\x73\x74\x73\x2E\x53\x65\x72\x76\x69\x63\x65\x73"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[66];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x52\x75\x6E\x74\x69\x6D\x65\x54\x65\x73\x74\x73\x2E\x41\x6C\x6C\x49\x6E\x31\x52\x75\x6E\x6E\x65\x72"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[67];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x52\x75\x6E\x74\x69\x6D\x65\x54\x65\x73\x74\x73\x2E\x46\x72\x61\x6D\x65\x77\x6F\x72\x6B\x2E\x54\x65\x73\x74\x73"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[68];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x67\x72\x61\x74\x69\x6F\x6E\x54\x65\x73\x74\x73\x2E\x55\x6E\x69\x74\x79\x41\x6E\x61\x6C\x79\x74\x69\x63\x73"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[69];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x55\x49\x2E\x42\x75\x69\x6C\x64\x65\x72\x2E\x45\x64\x69\x74\x6F\x72"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[70];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x55\x49\x45\x6C\x65\x6D\x65\x6E\x74\x73\x47\x61\x6D\x65\x4F\x62\x6A\x65\x63\x74\x73\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[71];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x32\x44\x2E\x53\x70\x72\x69\x74\x65\x2E\x45\x64\x69\x74\x6F\x72\x54\x65\x73\x74\x73"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[72];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x32\x44\x2E\x53\x70\x72\x69\x74\x65\x2E\x45\x64\x69\x74\x6F\x72"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[73];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x55\x49\x2E\x42\x75\x69\x6C\x64\x65\x72\x2E\x45\x64\x69\x74\x6F\x72\x54\x65\x73\x74\x73"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[74];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x47\x6F\x6F\x67\x6C\x65\x41\x52\x2E\x55\x6E\x69\x74\x79\x4E\x61\x74\x69\x76\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[75];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x57\x69\x6E\x64\x6F\x77\x73\x4D\x52\x41\x75\x74\x6F\x6D\x61\x74\x69\x6F\x6E"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[76];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x41\x73\x73\x65\x6D\x62\x6C\x79\x2D\x43\x53\x68\x61\x72\x70\x2D\x66\x69\x72\x73\x74\x70\x61\x73\x73\x2D\x74\x65\x73\x74\x61\x62\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[77];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x41\x73\x73\x65\x6D\x62\x6C\x79\x2D\x43\x53\x68\x61\x72\x70\x2D\x74\x65\x73\x74\x61\x62\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[78];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x54\x69\x6D\x65\x6C\x69\x6E\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[79];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x55\x49\x45\x6C\x65\x6D\x65\x6E\x74\x73\x2E\x45\x64\x69\x74\x6F\x72"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[80];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x55\x49\x45\x6C\x65\x6D\x65\x6E\x74\x73\x2E\x45\x64\x69\x74\x6F\x72\x54\x65\x73\x74\x73"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[81];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x64\x69\x74\x6F\x72\x2E\x55\x49\x42\x75\x69\x6C\x64\x65\x72\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[82];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x67\x72\x61\x74\x69\x6F\x6E\x54\x65\x73\x74\x73\x2E\x54\x69\x6D\x65\x6C\x69\x6E\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[83];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x67\x72\x61\x74\x69\x6F\x6E\x54\x65\x73\x74\x73\x2E\x46\x72\x61\x6D\x65\x77\x6F\x72\x6B"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[84];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x52\x75\x6E\x74\x69\x6D\x65\x54\x65\x73\x74\x73"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[85];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x4C\x6F\x67\x67\x69\x6E\x67"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[86];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x30\x35"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[87];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x43\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[88];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x31\x34"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[89];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x31\x36"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[90];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x53\x75\x62\x73\x79\x73\x74\x65\x6D\x2E\x52\x65\x67\x69\x73\x74\x72\x61\x74\x69\x6F\x6E"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[91];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x44\x65\x76\x2E\x30\x30\x35"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[92];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x44\x65\x76\x2E\x30\x30\x34"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[93];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x44\x65\x76\x2E\x30\x30\x33"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[94];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x44\x65\x76\x2E\x30\x30\x32"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[95];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x44\x65\x76\x2E\x30\x30\x31"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[96];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x31\x35"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[97];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x32\x34"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[98];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x32\x32"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[99];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x32\x31"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[100];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x32\x30"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[101];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x31\x39"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[102];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x31\x38"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[103];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x31\x37"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[104];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x32\x33"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[105];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x45\x6E\x74\x69\x74\x69\x65\x73"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[106];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x30\x32"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[107];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x4E\x65\x74\x77\x6F\x72\x6B\x69\x6E\x67\x2E\x54\x72\x61\x6E\x73\x70\x6F\x72\x74"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[108];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x75\x63\x67\x2E\x51\x6F\x53"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[109];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x52\x75\x6E\x74\x69\x6D\x65\x54\x65\x73\x74\x73\x2E\x46\x72\x61\x6D\x65\x77\x6F\x72\x6B"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[110];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x55\x6E\x69\x74\x79\x41\x6E\x61\x6C\x79\x74\x69\x63\x73\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[111];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x55\x6E\x69\x74\x79\x57\x65\x62\x52\x65\x71\x75\x65\x73\x74\x41\x73\x73\x65\x74\x42\x75\x6E\x64\x6C\x65\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[112];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x55\x49\x45\x6C\x65\x6D\x65\x6E\x74\x73"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[113];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x58\x52\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[114];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x49\x4D\x47\x55\x49\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[115];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x47\x61\x6D\x65\x43\x65\x6E\x74\x65\x72\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[116];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x43\x6C\x6F\x74\x68\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[117];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x41\x73\x73\x65\x74\x42\x75\x6E\x64\x6C\x65\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[118];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x57\x69\x6E\x64\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[119];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x56\x69\x72\x74\x75\x61\x6C\x54\x65\x78\x74\x75\x72\x69\x6E\x67\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[120];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x56\x69\x64\x65\x6F\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[121];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x56\x46\x58\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[122];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x56\x65\x68\x69\x63\x6C\x65\x73\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[123];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x55\x6E\x69\x74\x79\x57\x65\x62\x52\x65\x71\x75\x65\x73\x74\x54\x65\x78\x74\x75\x72\x65\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[124];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x55\x6E\x69\x74\x79\x57\x65\x62\x52\x65\x71\x75\x65\x73\x74\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[125];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x55\x6E\x69\x74\x79\x54\x65\x73\x74\x50\x72\x6F\x74\x6F\x63\x6F\x6C\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[126];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x55\x6E\x69\x74\x79\x43\x75\x72\x6C\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[127];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x55\x6E\x69\x74\x79\x43\x6F\x6E\x6E\x65\x63\x74\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[128];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x55\x6E\x69\x74\x79\x57\x65\x62\x52\x65\x71\x75\x65\x73\x74\x41\x75\x64\x69\x6F\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[129];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x55\x6D\x62\x72\x61\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[130];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x41\x52\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[131];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x43\x72\x61\x73\x68\x52\x65\x70\x6F\x72\x74\x69\x6E\x67\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[132];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x49\x6E\x70\x75\x74\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[133];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x55\x49\x45\x6C\x65\x6D\x65\x6E\x74\x73\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[134];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x56\x52\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[135];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x53\x77\x69\x74\x63\x68\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[136];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x58\x62\x6F\x78\x4F\x6E\x65\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[137];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x50\x65\x72\x66\x6F\x72\x6D\x61\x6E\x63\x65\x52\x65\x70\x6F\x72\x74\x69\x6E\x67\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[138];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x50\x53\x34\x56\x52\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[139];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x50\x53\x35\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[140];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x50\x53\x35\x56\x52\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[141];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x55\x4E\x45\x54\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[142];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x54\x65\x78\x74\x43\x6F\x72\x65\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[143];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x50\x53\x34\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[144];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x53\x70\x61\x74\x69\x61\x6C\x54\x72\x61\x63\x6B\x69\x6E\x67"), NULL);
	}
}
static void AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_CustomAttributesCacheGenerator_AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001____args1(CustomAttributesCache* cache)
{
	{
		ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F * tmp = (ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F *)cache->attributes[0];
		ParamArrayAttribute__ctor_mCC72AFF718185BA7B87FD8D9471F1274400C5719(tmp, NULL);
	}
}
static void AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_CustomAttributesCacheGenerator_AndroidJavaObject_Call_mFA1562981E41B1D9501C1640256B9BB13401A524____args1(CustomAttributesCache* cache)
{
	{
		ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F * tmp = (ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F *)cache->attributes[0];
		ParamArrayAttribute__ctor_mCC72AFF718185BA7B87FD8D9471F1274400C5719(tmp, NULL);
	}
}
static void AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_CustomAttributesCacheGenerator_AndroidJavaObject_CallStatic_m5CFD33D8B772A5B3323496FAB39C21BC1EC1C2B8____args1(CustomAttributesCache* cache)
{
	{
		ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F * tmp = (ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F *)cache->attributes[0];
		ParamArrayAttribute__ctor_mCC72AFF718185BA7B87FD8D9471F1274400C5719(tmp, NULL);
	}
}
static void AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_CustomAttributesCacheGenerator_AndroidJavaObject__AndroidJavaObject_m54584F0F147ECA1A0B7DEB875742B3331CC1666A____args1(CustomAttributesCache* cache)
{
	{
		ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F * tmp = (ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F *)cache->attributes[0];
		ParamArrayAttribute__ctor_mCC72AFF718185BA7B87FD8D9471F1274400C5719(tmp, NULL);
	}
}
static void AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_CustomAttributesCacheGenerator_AndroidJavaObject__Call_m342FD7C4618B91E0D2146976AA3135E29174E4B8____args1(CustomAttributesCache* cache)
{
	{
		ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F * tmp = (ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F *)cache->attributes[0];
		ParamArrayAttribute__ctor_mCC72AFF718185BA7B87FD8D9471F1274400C5719(tmp, NULL);
	}
}
static void AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_CustomAttributesCacheGenerator_AndroidJavaObject__CallStatic_m0557CC9C6939F188F37BD0FCAB75AF241AB795F8____args1(CustomAttributesCache* cache)
{
	{
		ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F * tmp = (ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F *)cache->attributes[0];
		ParamArrayAttribute__ctor_mCC72AFF718185BA7B87FD8D9471F1274400C5719(tmp, NULL);
	}
}
static void _AndroidJNIHelper_t664F535B46589884A627F66F98A451D1CD48F76B_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		UsedByNativeCodeAttribute_t604CF4E57FB3E7BCCCF0871A9B526472B2CDCB92 * tmp = (UsedByNativeCodeAttribute_t604CF4E57FB3E7BCCCF0871A9B526472B2CDCB92 *)cache->attributes[0];
		UsedByNativeCodeAttribute__ctor_mA8236FADF130BCDD86C6017039295F9D521EECB8(tmp, NULL);
	}
}
static void _AndroidJNIHelper_t664F535B46589884A627F66F98A451D1CD48F76B_CustomAttributesCacheGenerator__AndroidJNIHelper_InvokeJavaProxyMethod_mEDA5EBF45CEDDBB775BD601270633625DE31CC25(CustomAttributesCache* cache)
{
	{
		RequiredByNativeCodeAttribute_t855401D3C2EF3B44F4F1C3EE2DCD361CFC358D20 * tmp = (RequiredByNativeCodeAttribute_t855401D3C2EF3B44F4F1C3EE2DCD361CFC358D20 *)cache->attributes[0];
		RequiredByNativeCodeAttribute__ctor_m97C095D1EE6AAB2894AE7E8B2F07D9B47CB8F8B5(tmp, NULL);
	}
}
static void jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		NativeTypeAttribute_t7A71B541B18D0BA1A9889E05D36CAC56CF9F48D9 * tmp = (NativeTypeAttribute_t7A71B541B18D0BA1A9889E05D36CAC56CF9F48D9 *)cache->attributes[0];
		NativeTypeAttribute__ctor_m0914A881DE5A0E58B381CDE59CB821D6DBA4B711(tmp, 1LL, il2cpp_codegen_string_new_wrapper("\x53\x63\x72\x69\x70\x74\x69\x6E\x67\x4A\x76\x61\x6C\x75\x65"), NULL);
	}
}
static void AndroidJNIHelper_t42BC87A499D1F8E320AC8D663692540AA0DE2847_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		StaticAccessorAttribute_t7A16FF0FA31E38510BBC8BCA5AE56C3E67D5A2BA * tmp = (StaticAccessorAttribute_t7A16FF0FA31E38510BBC8BCA5AE56C3E67D5A2BA *)cache->attributes[0];
		StaticAccessorAttribute__ctor_m0C3215256AEFAEFDDCBCD2BA9AA579CDBB230706(tmp, il2cpp_codegen_string_new_wrapper("\x41\x6E\x64\x72\x6F\x69\x64\x4A\x4E\x49\x42\x69\x6E\x64\x69\x6E\x67\x73\x48\x65\x6C\x70\x65\x72\x73"), 2LL, NULL);
	}
	{
		NativeHeaderAttribute_t7F0E4B53790AA75CDB4C44E6D644267F8FE3066C * tmp = (NativeHeaderAttribute_t7F0E4B53790AA75CDB4C44E6D644267F8FE3066C *)cache->attributes[1];
		NativeHeaderAttribute__ctor_m0E83F29C5939F185D6E90541591802EB2845FD76(tmp, il2cpp_codegen_string_new_wrapper("\x4D\x6F\x64\x75\x6C\x65\x73\x2F\x41\x6E\x64\x72\x6F\x69\x64\x4A\x4E\x49\x2F\x50\x75\x62\x6C\x69\x63\x2F\x41\x6E\x64\x72\x6F\x69\x64\x4A\x4E\x49\x42\x69\x6E\x64\x69\x6E\x67\x73\x48\x65\x6C\x70\x65\x72\x73\x2E\x68"), NULL);
	}
	{
		NativeConditionalAttribute_t659349956F06958D4D05443BD06FF5CDC767C88B * tmp = (NativeConditionalAttribute_t659349956F06958D4D05443BD06FF5CDC767C88B *)cache->attributes[2];
		NativeConditionalAttribute__ctor_m2D44C123AE8913373A143BBE663F4DEF8D21DEF9(tmp, il2cpp_codegen_string_new_wrapper("\x50\x4C\x41\x54\x46\x4F\x52\x4D\x5F\x41\x4E\x44\x52\x4F\x49\x44"), NULL);
	}
	{
		UsedByNativeCodeAttribute_t604CF4E57FB3E7BCCCF0871A9B526472B2CDCB92 * tmp = (UsedByNativeCodeAttribute_t604CF4E57FB3E7BCCCF0871A9B526472B2CDCB92 *)cache->attributes[3];
		UsedByNativeCodeAttribute__ctor_mA8236FADF130BCDD86C6017039295F9D521EECB8(tmp, NULL);
	}
}
static void AndroidJNIHelper_t42BC87A499D1F8E320AC8D663692540AA0DE2847_CustomAttributesCacheGenerator_AndroidJNIHelper_GetConstructorID_m22710C39375F8A965C70F995413D4B3C62E85E30____signature1(CustomAttributesCache* cache)
{
	{
		DefaultValueAttribute_tC16686567591630447D94937AF74EF53DC158122 * tmp = (DefaultValueAttribute_tC16686567591630447D94937AF74EF53DC158122 *)cache->attributes[0];
		DefaultValueAttribute__ctor_m7A9877491C22E8CDCFDAD240D04156D4FAE7D6C6(tmp, il2cpp_codegen_string_new_wrapper(""), NULL);
	}
}
static void AndroidJNIHelper_t42BC87A499D1F8E320AC8D663692540AA0DE2847_CustomAttributesCacheGenerator_AndroidJNIHelper_GetMethodID_m2B5E7C9B05905F6C6B60A735B8A6E97BBA468535____signature2(CustomAttributesCache* cache)
{
	{
		DefaultValueAttribute_tC16686567591630447D94937AF74EF53DC158122 * tmp = (DefaultValueAttribute_tC16686567591630447D94937AF74EF53DC158122 *)cache->attributes[0];
		DefaultValueAttribute__ctor_m7A9877491C22E8CDCFDAD240D04156D4FAE7D6C6(tmp, il2cpp_codegen_string_new_wrapper(""), NULL);
	}
}
static void AndroidJNIHelper_t42BC87A499D1F8E320AC8D663692540AA0DE2847_CustomAttributesCacheGenerator_AndroidJNIHelper_GetMethodID_m2B5E7C9B05905F6C6B60A735B8A6E97BBA468535____isStatic3(CustomAttributesCache* cache)
{
	{
		DefaultValueAttribute_tC16686567591630447D94937AF74EF53DC158122 * tmp = (DefaultValueAttribute_tC16686567591630447D94937AF74EF53DC158122 *)cache->attributes[0];
		DefaultValueAttribute__ctor_m7A9877491C22E8CDCFDAD240D04156D4FAE7D6C6(tmp, il2cpp_codegen_string_new_wrapper("\x66\x61\x6C\x73\x65"), NULL);
	}
}
static void AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		NativeHeaderAttribute_t7F0E4B53790AA75CDB4C44E6D644267F8FE3066C * tmp = (NativeHeaderAttribute_t7F0E4B53790AA75CDB4C44E6D644267F8FE3066C *)cache->attributes[0];
		NativeHeaderAttribute__ctor_m0E83F29C5939F185D6E90541591802EB2845FD76(tmp, il2cpp_codegen_string_new_wrapper("\x4D\x6F\x64\x75\x6C\x65\x73\x2F\x41\x6E\x64\x72\x6F\x69\x64\x4A\x4E\x49\x2F\x50\x75\x62\x6C\x69\x63\x2F\x41\x6E\x64\x72\x6F\x69\x64\x4A\x4E\x49\x42\x69\x6E\x64\x69\x6E\x67\x73\x48\x65\x6C\x70\x65\x72\x73\x2E\x68"), NULL);
	}
	{
		NativeConditionalAttribute_t659349956F06958D4D05443BD06FF5CDC767C88B * tmp = (NativeConditionalAttribute_t659349956F06958D4D05443BD06FF5CDC767C88B *)cache->attributes[1];
		NativeConditionalAttribute__ctor_m2D44C123AE8913373A143BBE663F4DEF8D21DEF9(tmp, il2cpp_codegen_string_new_wrapper("\x50\x4C\x41\x54\x46\x4F\x52\x4D\x5F\x41\x4E\x44\x52\x4F\x49\x44"), NULL);
	}
	{
		StaticAccessorAttribute_t7A16FF0FA31E38510BBC8BCA5AE56C3E67D5A2BA * tmp = (StaticAccessorAttribute_t7A16FF0FA31E38510BBC8BCA5AE56C3E67D5A2BA *)cache->attributes[2];
		StaticAccessorAttribute__ctor_m0C3215256AEFAEFDDCBCD2BA9AA579CDBB230706(tmp, il2cpp_codegen_string_new_wrapper("\x41\x6E\x64\x72\x6F\x69\x64\x4A\x4E\x49\x42\x69\x6E\x64\x69\x6E\x67\x73\x48\x65\x6C\x70\x65\x72\x73"), 2LL, NULL);
	}
}
static void AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_FindClass_m9271648050957874E8489952E493156991C511F5(CustomAttributesCache* cache)
{
	{
		ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 * tmp = (ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 *)cache->attributes[0];
		ThreadSafeAttribute__ctor_m6FFAB202BA1302071542A4242796CC44C1782240(tmp, NULL);
	}
}
static void AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_FromReflectedMethod_mBF204982142E2EA82F66F562F5661F2A459F34F5(CustomAttributesCache* cache)
{
	{
		ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 * tmp = (ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 *)cache->attributes[0];
		ThreadSafeAttribute__ctor_m6FFAB202BA1302071542A4242796CC44C1782240(tmp, NULL);
	}
}
static void AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_ExceptionOccurred_m347473FDF70118E17D092961232E7EAF0BCF2991(CustomAttributesCache* cache)
{
	{
		ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 * tmp = (ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 *)cache->attributes[0];
		ThreadSafeAttribute__ctor_m6FFAB202BA1302071542A4242796CC44C1782240(tmp, NULL);
	}
}
static void AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_ExceptionClear_mE1961C9BD4984AF52712BFF181B6B95F435531B7(CustomAttributesCache* cache)
{
	{
		ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 * tmp = (ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 *)cache->attributes[0];
		ThreadSafeAttribute__ctor_m6FFAB202BA1302071542A4242796CC44C1782240(tmp, NULL);
	}
}
static void AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_NewGlobalRef_m34740B5AECF82CE97986D6E67F5E1D8CBF7DB837(CustomAttributesCache* cache)
{
	{
		ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 * tmp = (ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 *)cache->attributes[0];
		ThreadSafeAttribute__ctor_m6FFAB202BA1302071542A4242796CC44C1782240(tmp, NULL);
	}
}
static void AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_DeleteGlobalRef_m0B4945EEFFCA6F7CC0808310DD6FA8BFB58A4F53(CustomAttributesCache* cache)
{
	{
		ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 * tmp = (ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 *)cache->attributes[0];
		ThreadSafeAttribute__ctor_m6FFAB202BA1302071542A4242796CC44C1782240(tmp, NULL);
	}
}
static void AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_NewWeakGlobalRef_mB62AFFE361315D8C045F6EF4D961C5501839E295(CustomAttributesCache* cache)
{
	{
		ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 * tmp = (ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 *)cache->attributes[0];
		ThreadSafeAttribute__ctor_m6FFAB202BA1302071542A4242796CC44C1782240(tmp, NULL);
	}
}
static void AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_DeleteWeakGlobalRef_m972079D94C174FA5F427AC16C92B2B3179175F46(CustomAttributesCache* cache)
{
	{
		ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 * tmp = (ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 *)cache->attributes[0];
		ThreadSafeAttribute__ctor_m6FFAB202BA1302071542A4242796CC44C1782240(tmp, NULL);
	}
}
static void AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_NewLocalRef_m9309F714C7C9C3C47EA48218FB6B0BE810E42EAE(CustomAttributesCache* cache)
{
	{
		ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 * tmp = (ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 *)cache->attributes[0];
		ThreadSafeAttribute__ctor_m6FFAB202BA1302071542A4242796CC44C1782240(tmp, NULL);
	}
}
static void AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_DeleteLocalRef_m5EEFE4C0CA9F65208C117ECE9D893A993A477DB4(CustomAttributesCache* cache)
{
	{
		ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 * tmp = (ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 *)cache->attributes[0];
		ThreadSafeAttribute__ctor_m6FFAB202BA1302071542A4242796CC44C1782240(tmp, NULL);
	}
}
static void AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_NewObject_m8D445E11DAFC786997C16BF296C0BB844F6E7D60(CustomAttributesCache* cache)
{
	{
		ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 * tmp = (ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 *)cache->attributes[0];
		ThreadSafeAttribute__ctor_m6FFAB202BA1302071542A4242796CC44C1782240(tmp, NULL);
	}
}
static void AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_GetObjectClass_m38B1858A3F6F7336FBEC67F36E998D61DE93988A(CustomAttributesCache* cache)
{
	{
		ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 * tmp = (ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 *)cache->attributes[0];
		ThreadSafeAttribute__ctor_m6FFAB202BA1302071542A4242796CC44C1782240(tmp, NULL);
	}
}
static void AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_GetMethodID_m4A0DBC91C300B8F342333561BA237258E12D0A3B(CustomAttributesCache* cache)
{
	{
		ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 * tmp = (ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 *)cache->attributes[0];
		ThreadSafeAttribute__ctor_m6FFAB202BA1302071542A4242796CC44C1782240(tmp, NULL);
	}
}
static void AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_GetStaticMethodID_mB2C04328A527EB6EAC74F048CC10DEB3099C4826(CustomAttributesCache* cache)
{
	{
		ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 * tmp = (ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 *)cache->attributes[0];
		ThreadSafeAttribute__ctor_m6FFAB202BA1302071542A4242796CC44C1782240(tmp, NULL);
	}
}
static void AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_NewStringFromStr_m2FA0D93FE6ABFD5D1B3546B797EDE6ABB37208CC(CustomAttributesCache* cache)
{
	{
		ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 * tmp = (ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 *)cache->attributes[0];
		ThreadSafeAttribute__ctor_m6FFAB202BA1302071542A4242796CC44C1782240(tmp, NULL);
	}
}
static void AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_GetStringChars_m95FBBCDB48D425FBDC19710D92C7D6D175041778(CustomAttributesCache* cache)
{
	{
		ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 * tmp = (ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 *)cache->attributes[0];
		ThreadSafeAttribute__ctor_m6FFAB202BA1302071542A4242796CC44C1782240(tmp, NULL);
	}
}
static void AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_CallStringMethod_m8D44F815C76333C22FF73753CF8289089E633261(CustomAttributesCache* cache)
{
	{
		ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 * tmp = (ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 *)cache->attributes[0];
		ThreadSafeAttribute__ctor_m6FFAB202BA1302071542A4242796CC44C1782240(tmp, NULL);
	}
}
static void AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_CallObjectMethod_m29CAA840E7ECD2A6B835EAF9E119F8E3E5B99495(CustomAttributesCache* cache)
{
	{
		ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 * tmp = (ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 *)cache->attributes[0];
		ThreadSafeAttribute__ctor_m6FFAB202BA1302071542A4242796CC44C1782240(tmp, NULL);
	}
}
static void AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_CallIntMethod_m3A49D0808C1D0C3EAF25B3F2DC7890B483B00CDF(CustomAttributesCache* cache)
{
	{
		ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 * tmp = (ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 *)cache->attributes[0];
		ThreadSafeAttribute__ctor_m6FFAB202BA1302071542A4242796CC44C1782240(tmp, NULL);
	}
}
static void AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_CallBooleanMethod_mCC2BF562D42946CC90BB9E5489C9311DB38A6F8A(CustomAttributesCache* cache)
{
	{
		ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 * tmp = (ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 *)cache->attributes[0];
		ThreadSafeAttribute__ctor_m6FFAB202BA1302071542A4242796CC44C1782240(tmp, NULL);
	}
}
static void AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_CallShortMethod_m719565EF3E0DB80078F924283F72E3492BCED486(CustomAttributesCache* cache)
{
	{
		ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 * tmp = (ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 *)cache->attributes[0];
		ThreadSafeAttribute__ctor_m6FFAB202BA1302071542A4242796CC44C1782240(tmp, NULL);
	}
}
static void AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_CallSByteMethod_mD99C2871A4ED3D2228B6F9EA97484D71E529C5EA(CustomAttributesCache* cache)
{
	{
		ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 * tmp = (ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 *)cache->attributes[0];
		ThreadSafeAttribute__ctor_m6FFAB202BA1302071542A4242796CC44C1782240(tmp, NULL);
	}
}
static void AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_CallCharMethod_m6D9AB75BB4E6E6F40C12654EADB9CB3AC441F257(CustomAttributesCache* cache)
{
	{
		ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 * tmp = (ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 *)cache->attributes[0];
		ThreadSafeAttribute__ctor_m6FFAB202BA1302071542A4242796CC44C1782240(tmp, NULL);
	}
}
static void AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_CallFloatMethod_mB40ADB8EFB34D674AF586B65E3B443AF51B62CD9(CustomAttributesCache* cache)
{
	{
		ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 * tmp = (ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 *)cache->attributes[0];
		ThreadSafeAttribute__ctor_m6FFAB202BA1302071542A4242796CC44C1782240(tmp, NULL);
	}
}
static void AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_CallDoubleMethod_mC6B84A261650B29C19C304F07D1080B38ABC7186(CustomAttributesCache* cache)
{
	{
		ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 * tmp = (ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 *)cache->attributes[0];
		ThreadSafeAttribute__ctor_m6FFAB202BA1302071542A4242796CC44C1782240(tmp, NULL);
	}
}
static void AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_CallLongMethod_m566FBCF6E3D1B11ECBA4DBB51E3712F2EE9A7FE9(CustomAttributesCache* cache)
{
	{
		ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 * tmp = (ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 *)cache->attributes[0];
		ThreadSafeAttribute__ctor_m6FFAB202BA1302071542A4242796CC44C1782240(tmp, NULL);
	}
}
static void AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_CallStaticStringMethod_m4089540DF5B52F735C6C70988D73FE69463B7B44(CustomAttributesCache* cache)
{
	{
		ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 * tmp = (ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 *)cache->attributes[0];
		ThreadSafeAttribute__ctor_m6FFAB202BA1302071542A4242796CC44C1782240(tmp, NULL);
	}
}
static void AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_CallStaticObjectMethod_m41962AB7EBBC53ACB5ACD5D7CC175EC8CFF22B13(CustomAttributesCache* cache)
{
	{
		ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 * tmp = (ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 *)cache->attributes[0];
		ThreadSafeAttribute__ctor_m6FFAB202BA1302071542A4242796CC44C1782240(tmp, NULL);
	}
}
static void AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_CallStaticIntMethod_mE05BBCE19901EED01DB88DCE7775D2EC75266F6F(CustomAttributesCache* cache)
{
	{
		ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 * tmp = (ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 *)cache->attributes[0];
		ThreadSafeAttribute__ctor_m6FFAB202BA1302071542A4242796CC44C1782240(tmp, NULL);
	}
}
static void AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_CallStaticBooleanMethod_mA658B97E472490DCEF41A9C9BE9E2808FD4D8649(CustomAttributesCache* cache)
{
	{
		ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 * tmp = (ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 *)cache->attributes[0];
		ThreadSafeAttribute__ctor_m6FFAB202BA1302071542A4242796CC44C1782240(tmp, NULL);
	}
}
static void AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_CallStaticShortMethod_m06B921F4634800E6E42691920E9DD1697491061A(CustomAttributesCache* cache)
{
	{
		ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 * tmp = (ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 *)cache->attributes[0];
		ThreadSafeAttribute__ctor_m6FFAB202BA1302071542A4242796CC44C1782240(tmp, NULL);
	}
}
static void AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_CallStaticSByteMethod_m5E1FBD3B228299120E15BC39A97BB98BFD8CEA68(CustomAttributesCache* cache)
{
	{
		ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 * tmp = (ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 *)cache->attributes[0];
		ThreadSafeAttribute__ctor_m6FFAB202BA1302071542A4242796CC44C1782240(tmp, NULL);
	}
}
static void AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_CallStaticCharMethod_mA3E1C0CA79C37C0E8CA480305C0195D87C4EBBF7(CustomAttributesCache* cache)
{
	{
		ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 * tmp = (ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 *)cache->attributes[0];
		ThreadSafeAttribute__ctor_m6FFAB202BA1302071542A4242796CC44C1782240(tmp, NULL);
	}
}
static void AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_CallStaticFloatMethod_m0DA71B5E200550A66C4880BFF404225B063ACDFE(CustomAttributesCache* cache)
{
	{
		ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 * tmp = (ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 *)cache->attributes[0];
		ThreadSafeAttribute__ctor_m6FFAB202BA1302071542A4242796CC44C1782240(tmp, NULL);
	}
}
static void AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_CallStaticDoubleMethod_m705917C9F0238B4C0E040C9156424FB1BD2FC4DA(CustomAttributesCache* cache)
{
	{
		ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 * tmp = (ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 *)cache->attributes[0];
		ThreadSafeAttribute__ctor_m6FFAB202BA1302071542A4242796CC44C1782240(tmp, NULL);
	}
}
static void AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_CallStaticLongMethod_mA9AAA7D40F0F6D5BB9EB183ED5E9ADD05714648B(CustomAttributesCache* cache)
{
	{
		ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 * tmp = (ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 *)cache->attributes[0];
		ThreadSafeAttribute__ctor_m6FFAB202BA1302071542A4242796CC44C1782240(tmp, NULL);
	}
}
static void AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_CallStaticVoidMethod_mE35981047575D7C0028FC4EF205B05909911F0E3(CustomAttributesCache* cache)
{
	{
		ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 * tmp = (ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 *)cache->attributes[0];
		ThreadSafeAttribute__ctor_m6FFAB202BA1302071542A4242796CC44C1782240(tmp, NULL);
	}
}
static void AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_ToBooleanArray_m105D3745D21CE3B0780C3861BB455A9E29B0B9F6(CustomAttributesCache* cache)
{
	{
		ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 * tmp = (ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 *)cache->attributes[0];
		ThreadSafeAttribute__ctor_m6FFAB202BA1302071542A4242796CC44C1782240(tmp, NULL);
	}
}
static void AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_ToByteArray_m099C6F143979F050C4A6AECF70854153CE8B58CC(CustomAttributesCache* cache)
{
	{
		ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 * tmp = (ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 *)cache->attributes[0];
		ThreadSafeAttribute__ctor_m6FFAB202BA1302071542A4242796CC44C1782240(tmp, NULL);
	}
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[1];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x41\x6E\x64\x72\x6F\x69\x64\x4A\x4E\x49\x2E\x54\x6F\x42\x79\x74\x65\x41\x72\x72\x61\x79\x20\x69\x73\x20\x6F\x62\x73\x6F\x6C\x65\x74\x65\x2E\x20\x55\x73\x65\x20\x41\x6E\x64\x72\x6F\x69\x64\x4A\x4E\x49\x2E\x54\x6F\x53\x42\x79\x74\x65\x41\x72\x72\x61\x79\x20\x6D\x65\x74\x68\x6F\x64\x20\x69\x6E\x73\x74\x65\x61\x64"), NULL);
	}
}
static void AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_ToSByteArray_m91EBEA7CBDBCCDF759D77AB5BD1AE8BF00030B5F(CustomAttributesCache* cache)
{
	{
		ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 * tmp = (ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 *)cache->attributes[0];
		ThreadSafeAttribute__ctor_m6FFAB202BA1302071542A4242796CC44C1782240(tmp, NULL);
	}
}
static void AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_ToCharArray_mC48F010177FFBC2F0CCAAE1B675B6C4882EBA257(CustomAttributesCache* cache)
{
	{
		ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 * tmp = (ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 *)cache->attributes[0];
		ThreadSafeAttribute__ctor_m6FFAB202BA1302071542A4242796CC44C1782240(tmp, NULL);
	}
}
static void AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_ToShortArray_m37FFD5AD4C5CC07127F2E64598FCD5A0924B246F(CustomAttributesCache* cache)
{
	{
		ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 * tmp = (ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 *)cache->attributes[0];
		ThreadSafeAttribute__ctor_m6FFAB202BA1302071542A4242796CC44C1782240(tmp, NULL);
	}
}
static void AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_ToIntArray_mB2B766977213FA271EE9044B5B781112CA274317(CustomAttributesCache* cache)
{
	{
		ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 * tmp = (ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 *)cache->attributes[0];
		ThreadSafeAttribute__ctor_m6FFAB202BA1302071542A4242796CC44C1782240(tmp, NULL);
	}
}
static void AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_ToLongArray_m784C3156DDD9D0D74E21F394CDFEB3C87538355F(CustomAttributesCache* cache)
{
	{
		ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 * tmp = (ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 *)cache->attributes[0];
		ThreadSafeAttribute__ctor_m6FFAB202BA1302071542A4242796CC44C1782240(tmp, NULL);
	}
}
static void AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_ToFloatArray_m197E51BD1D14272F35DA0FF57B9C158E3DC5DA8D(CustomAttributesCache* cache)
{
	{
		ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 * tmp = (ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 *)cache->attributes[0];
		ThreadSafeAttribute__ctor_m6FFAB202BA1302071542A4242796CC44C1782240(tmp, NULL);
	}
}
static void AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_ToDoubleArray_m00242343670C4CC0103A07CB766D80F53E36130D(CustomAttributesCache* cache)
{
	{
		ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 * tmp = (ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 *)cache->attributes[0];
		ThreadSafeAttribute__ctor_m6FFAB202BA1302071542A4242796CC44C1782240(tmp, NULL);
	}
}
static void AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_ToObjectArray_m1C7B8259B04AC6D68F56BF5F108026882B039F24(CustomAttributesCache* cache)
{
	{
		ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 * tmp = (ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 *)cache->attributes[0];
		ThreadSafeAttribute__ctor_m6FFAB202BA1302071542A4242796CC44C1782240(tmp, NULL);
	}
}
static void AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_FromBooleanArray_m082FF870EE916B9603686E35776D5369B95D207E(CustomAttributesCache* cache)
{
	{
		ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 * tmp = (ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 *)cache->attributes[0];
		ThreadSafeAttribute__ctor_m6FFAB202BA1302071542A4242796CC44C1782240(tmp, NULL);
	}
}
static void AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_FromByteArray_m8EC58D6AE31ADD634490F84A4F4E36831DB2EC87(CustomAttributesCache* cache)
{
	{
		ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 * tmp = (ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 *)cache->attributes[0];
		ThreadSafeAttribute__ctor_m6FFAB202BA1302071542A4242796CC44C1782240(tmp, NULL);
	}
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[1];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x41\x6E\x64\x72\x6F\x69\x64\x4A\x4E\x49\x2E\x46\x72\x6F\x6D\x42\x79\x74\x65\x41\x72\x72\x61\x79\x20\x69\x73\x20\x6F\x62\x73\x6F\x6C\x65\x74\x65\x2E\x20\x55\x73\x65\x20\x41\x6E\x64\x72\x6F\x69\x64\x4A\x4E\x49\x2E\x46\x72\x6F\x6D\x53\x42\x79\x74\x65\x41\x72\x72\x61\x79\x20\x6D\x65\x74\x68\x6F\x64\x20\x69\x6E\x73\x74\x65\x61\x64"), NULL);
	}
}
static void AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_FromSByteArray_m5372FB70B8027721C47BE0359F538A90128288CD(CustomAttributesCache* cache)
{
	{
		ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 * tmp = (ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 *)cache->attributes[0];
		ThreadSafeAttribute__ctor_m6FFAB202BA1302071542A4242796CC44C1782240(tmp, NULL);
	}
}
static void AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_FromCharArray_mCDE27061131471E18F064241982F7C58921B4BCE(CustomAttributesCache* cache)
{
	{
		ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 * tmp = (ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 *)cache->attributes[0];
		ThreadSafeAttribute__ctor_m6FFAB202BA1302071542A4242796CC44C1782240(tmp, NULL);
	}
}
static void AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_FromShortArray_mAD7FEF4EEAEC6A3DEF148C02EF4E00002A70542E(CustomAttributesCache* cache)
{
	{
		ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 * tmp = (ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 *)cache->attributes[0];
		ThreadSafeAttribute__ctor_m6FFAB202BA1302071542A4242796CC44C1782240(tmp, NULL);
	}
}
static void AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_FromIntArray_mA60A708BA57B6F520260D4DC6B10E07C54E29C1F(CustomAttributesCache* cache)
{
	{
		ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 * tmp = (ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 *)cache->attributes[0];
		ThreadSafeAttribute__ctor_m6FFAB202BA1302071542A4242796CC44C1782240(tmp, NULL);
	}
}
static void AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_FromLongArray_m62518A89509FAD6404628618EA05A63911DB0941(CustomAttributesCache* cache)
{
	{
		ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 * tmp = (ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 *)cache->attributes[0];
		ThreadSafeAttribute__ctor_m6FFAB202BA1302071542A4242796CC44C1782240(tmp, NULL);
	}
}
static void AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_FromFloatArray_m01E10AC1773DE0878B8875994E74B205E42EE2E4(CustomAttributesCache* cache)
{
	{
		ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 * tmp = (ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 *)cache->attributes[0];
		ThreadSafeAttribute__ctor_m6FFAB202BA1302071542A4242796CC44C1782240(tmp, NULL);
	}
}
static void AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_FromDoubleArray_mB8DA303F2DC6FB96E45D6C2DEC2B1C7AF9A7D9BE(CustomAttributesCache* cache)
{
	{
		ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 * tmp = (ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 *)cache->attributes[0];
		ThreadSafeAttribute__ctor_m6FFAB202BA1302071542A4242796CC44C1782240(tmp, NULL);
	}
}
static void AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_GetArrayLength_m48A34992E6BF0EF5510037EA38EB2D348634C9DE(CustomAttributesCache* cache)
{
	{
		ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 * tmp = (ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 *)cache->attributes[0];
		ThreadSafeAttribute__ctor_m6FFAB202BA1302071542A4242796CC44C1782240(tmp, NULL);
	}
}
static void AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_NewObjectArray_m40592BC65B199B1AAE32F2682D8E9236E07929EE(CustomAttributesCache* cache)
{
	{
		ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 * tmp = (ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 *)cache->attributes[0];
		ThreadSafeAttribute__ctor_m6FFAB202BA1302071542A4242796CC44C1782240(tmp, NULL);
	}
}
static void AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18(CustomAttributesCache* cache)
{
	{
		ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 * tmp = (ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 *)cache->attributes[0];
		ThreadSafeAttribute__ctor_m6FFAB202BA1302071542A4242796CC44C1782240(tmp, NULL);
	}
}
static void AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_SetObjectArrayElement_m1C6E498550EF9FCA24DBD3E6D4F2BF6764FB315D(CustomAttributesCache* cache)
{
	{
		ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 * tmp = (ThreadSafeAttribute_t19BB6779619E58C8E3DF5198224E2BCB9E3D84B6 *)cache->attributes[0];
		ThreadSafeAttribute__ctor_m6FFAB202BA1302071542A4242796CC44C1782240(tmp, NULL);
	}
}
IL2CPP_EXTERN_C const CustomAttributesCacheGenerator g_UnityEngine_AndroidJNIModule_AttributeGenerators[];
const CustomAttributesCacheGenerator g_UnityEngine_AndroidJNIModule_AttributeGenerators[75] = 
{
	_AndroidJNIHelper_t664F535B46589884A627F66F98A451D1CD48F76B_CustomAttributesCacheGenerator,
	jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587_CustomAttributesCacheGenerator,
	AndroidJNIHelper_t42BC87A499D1F8E320AC8D663692540AA0DE2847_CustomAttributesCacheGenerator,
	AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator,
	_AndroidJNIHelper_t664F535B46589884A627F66F98A451D1CD48F76B_CustomAttributesCacheGenerator__AndroidJNIHelper_InvokeJavaProxyMethod_mEDA5EBF45CEDDBB775BD601270633625DE31CC25,
	AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_FindClass_m9271648050957874E8489952E493156991C511F5,
	AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_FromReflectedMethod_mBF204982142E2EA82F66F562F5661F2A459F34F5,
	AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_ExceptionOccurred_m347473FDF70118E17D092961232E7EAF0BCF2991,
	AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_ExceptionClear_mE1961C9BD4984AF52712BFF181B6B95F435531B7,
	AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_NewGlobalRef_m34740B5AECF82CE97986D6E67F5E1D8CBF7DB837,
	AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_DeleteGlobalRef_m0B4945EEFFCA6F7CC0808310DD6FA8BFB58A4F53,
	AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_NewWeakGlobalRef_mB62AFFE361315D8C045F6EF4D961C5501839E295,
	AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_DeleteWeakGlobalRef_m972079D94C174FA5F427AC16C92B2B3179175F46,
	AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_NewLocalRef_m9309F714C7C9C3C47EA48218FB6B0BE810E42EAE,
	AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_DeleteLocalRef_m5EEFE4C0CA9F65208C117ECE9D893A993A477DB4,
	AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_NewObject_m8D445E11DAFC786997C16BF296C0BB844F6E7D60,
	AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_GetObjectClass_m38B1858A3F6F7336FBEC67F36E998D61DE93988A,
	AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_GetMethodID_m4A0DBC91C300B8F342333561BA237258E12D0A3B,
	AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_GetStaticMethodID_mB2C04328A527EB6EAC74F048CC10DEB3099C4826,
	AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_NewStringFromStr_m2FA0D93FE6ABFD5D1B3546B797EDE6ABB37208CC,
	AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_GetStringChars_m95FBBCDB48D425FBDC19710D92C7D6D175041778,
	AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_CallStringMethod_m8D44F815C76333C22FF73753CF8289089E633261,
	AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_CallObjectMethod_m29CAA840E7ECD2A6B835EAF9E119F8E3E5B99495,
	AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_CallIntMethod_m3A49D0808C1D0C3EAF25B3F2DC7890B483B00CDF,
	AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_CallBooleanMethod_mCC2BF562D42946CC90BB9E5489C9311DB38A6F8A,
	AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_CallShortMethod_m719565EF3E0DB80078F924283F72E3492BCED486,
	AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_CallSByteMethod_mD99C2871A4ED3D2228B6F9EA97484D71E529C5EA,
	AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_CallCharMethod_m6D9AB75BB4E6E6F40C12654EADB9CB3AC441F257,
	AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_CallFloatMethod_mB40ADB8EFB34D674AF586B65E3B443AF51B62CD9,
	AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_CallDoubleMethod_mC6B84A261650B29C19C304F07D1080B38ABC7186,
	AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_CallLongMethod_m566FBCF6E3D1B11ECBA4DBB51E3712F2EE9A7FE9,
	AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_CallStaticStringMethod_m4089540DF5B52F735C6C70988D73FE69463B7B44,
	AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_CallStaticObjectMethod_m41962AB7EBBC53ACB5ACD5D7CC175EC8CFF22B13,
	AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_CallStaticIntMethod_mE05BBCE19901EED01DB88DCE7775D2EC75266F6F,
	AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_CallStaticBooleanMethod_mA658B97E472490DCEF41A9C9BE9E2808FD4D8649,
	AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_CallStaticShortMethod_m06B921F4634800E6E42691920E9DD1697491061A,
	AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_CallStaticSByteMethod_m5E1FBD3B228299120E15BC39A97BB98BFD8CEA68,
	AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_CallStaticCharMethod_mA3E1C0CA79C37C0E8CA480305C0195D87C4EBBF7,
	AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_CallStaticFloatMethod_m0DA71B5E200550A66C4880BFF404225B063ACDFE,
	AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_CallStaticDoubleMethod_m705917C9F0238B4C0E040C9156424FB1BD2FC4DA,
	AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_CallStaticLongMethod_mA9AAA7D40F0F6D5BB9EB183ED5E9ADD05714648B,
	AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_CallStaticVoidMethod_mE35981047575D7C0028FC4EF205B05909911F0E3,
	AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_ToBooleanArray_m105D3745D21CE3B0780C3861BB455A9E29B0B9F6,
	AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_ToByteArray_m099C6F143979F050C4A6AECF70854153CE8B58CC,
	AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_ToSByteArray_m91EBEA7CBDBCCDF759D77AB5BD1AE8BF00030B5F,
	AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_ToCharArray_mC48F010177FFBC2F0CCAAE1B675B6C4882EBA257,
	AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_ToShortArray_m37FFD5AD4C5CC07127F2E64598FCD5A0924B246F,
	AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_ToIntArray_mB2B766977213FA271EE9044B5B781112CA274317,
	AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_ToLongArray_m784C3156DDD9D0D74E21F394CDFEB3C87538355F,
	AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_ToFloatArray_m197E51BD1D14272F35DA0FF57B9C158E3DC5DA8D,
	AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_ToDoubleArray_m00242343670C4CC0103A07CB766D80F53E36130D,
	AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_ToObjectArray_m1C7B8259B04AC6D68F56BF5F108026882B039F24,
	AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_FromBooleanArray_m082FF870EE916B9603686E35776D5369B95D207E,
	AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_FromByteArray_m8EC58D6AE31ADD634490F84A4F4E36831DB2EC87,
	AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_FromSByteArray_m5372FB70B8027721C47BE0359F538A90128288CD,
	AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_FromCharArray_mCDE27061131471E18F064241982F7C58921B4BCE,
	AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_FromShortArray_mAD7FEF4EEAEC6A3DEF148C02EF4E00002A70542E,
	AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_FromIntArray_mA60A708BA57B6F520260D4DC6B10E07C54E29C1F,
	AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_FromLongArray_m62518A89509FAD6404628618EA05A63911DB0941,
	AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_FromFloatArray_m01E10AC1773DE0878B8875994E74B205E42EE2E4,
	AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_FromDoubleArray_mB8DA303F2DC6FB96E45D6C2DEC2B1C7AF9A7D9BE,
	AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_GetArrayLength_m48A34992E6BF0EF5510037EA38EB2D348634C9DE,
	AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_NewObjectArray_m40592BC65B199B1AAE32F2682D8E9236E07929EE,
	AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18,
	AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85_CustomAttributesCacheGenerator_AndroidJNI_SetObjectArrayElement_m1C6E498550EF9FCA24DBD3E6D4F2BF6764FB315D,
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_CustomAttributesCacheGenerator_AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001____args1,
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_CustomAttributesCacheGenerator_AndroidJavaObject_Call_mFA1562981E41B1D9501C1640256B9BB13401A524____args1,
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_CustomAttributesCacheGenerator_AndroidJavaObject_CallStatic_m5CFD33D8B772A5B3323496FAB39C21BC1EC1C2B8____args1,
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_CustomAttributesCacheGenerator_AndroidJavaObject__AndroidJavaObject_m54584F0F147ECA1A0B7DEB875742B3331CC1666A____args1,
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_CustomAttributesCacheGenerator_AndroidJavaObject__Call_m342FD7C4618B91E0D2146976AA3135E29174E4B8____args1,
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_CustomAttributesCacheGenerator_AndroidJavaObject__CallStatic_m0557CC9C6939F188F37BD0FCAB75AF241AB795F8____args1,
	AndroidJNIHelper_t42BC87A499D1F8E320AC8D663692540AA0DE2847_CustomAttributesCacheGenerator_AndroidJNIHelper_GetConstructorID_m22710C39375F8A965C70F995413D4B3C62E85E30____signature1,
	AndroidJNIHelper_t42BC87A499D1F8E320AC8D663692540AA0DE2847_CustomAttributesCacheGenerator_AndroidJNIHelper_GetMethodID_m2B5E7C9B05905F6C6B60A735B8A6E97BBA468535____signature2,
	AndroidJNIHelper_t42BC87A499D1F8E320AC8D663692540AA0DE2847_CustomAttributesCacheGenerator_AndroidJNIHelper_GetMethodID_m2B5E7C9B05905F6C6B60A735B8A6E97BBA468535____isStatic3,
	UnityEngine_AndroidJNIModule_CustomAttributesCacheGenerator,
};
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_wrapNonExceptionThrows_0(L_0);
		return;
	}
}
