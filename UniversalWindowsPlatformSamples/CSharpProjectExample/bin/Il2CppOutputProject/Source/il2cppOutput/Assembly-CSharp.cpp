#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
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

// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.WSA.AppCallbackItem
struct AppCallbackItem_t64C87B105C09D7D56E812214436AF86CEEBFE29C;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Windows.ApplicationModel.Activation.IActivatedEventArgs
struct IActivatedEventArgs_t38AF6D7CFB3114924504794FB3AC557096CCFC2B;
// Windows.Foundation.IAsyncAction
struct IAsyncAction_tA69CE29E39880E68BF0456395F3B1462DC29BA06;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// PrintActivationArguments
struct PrintActivationArguments_tD9E232A07D03D3DB0FA54CBC7679AA493D508CF4;
// Windows.ApplicationModel.Activation.ProtocolActivatedEventArgs
struct ProtocolActivatedEventArgs_t1D25CC5DB2B6309C43F18910B0C8797629A8D222;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.UriParser
struct UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// PrintActivationArguments/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t228C5781F8DF8E9064089914A970DD4B2729D4AA;
// PrintActivationArguments/AppActivatedDelegate
struct AppActivatedDelegate_tE6FA6C0A4F2EDBDD284C93F8A6DA1829019C88DB;
// System.Uri/UriInfo
struct UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45;

IL2CPP_EXTERN_C RuntimeClass* ActivationKind_tCFB0134DEF648CFCE2C91099FF61EE8530B07B91_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppActivatedDelegate_tE6FA6C0A4F2EDBDD284C93F8A6DA1829019C88DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppCallbackItem_t64C87B105C09D7D56E812214436AF86CEEBFE29C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApplicationExecutionState_t14DAD2AA7DE075D70902C59831172EB328057C81_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IActivatedEventArgs_t38AF6D7CFB3114924504794FB3AC557096CCFC2B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProtocolActivatedEventArgs_t1D25CC5DB2B6309C43F18910B0C8797629A8D222_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass1_0_t228C5781F8DF8E9064089914A970DD4B2729D4AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0C2DBEC5648802A73ABF137E8B4088441C2DA60B;
IL2CPP_EXTERN_C String_t* _stringLiteral1B8E60787FB648366AA762BCC7EDB1683656BD12;
IL2CPP_EXTERN_C String_t* _stringLiteral80712C8A498EFFEFAB532C226168443F41A4917A;
IL2CPP_EXTERN_C String_t* _stringLiteralCB6915100CE5199BC0331B4F3E79A362DBDCCA88;
IL2CPP_EXTERN_C const RuntimeMethod* PrintActivationArguments_OnAppActivated_m8B4ECEEEA267D11709289CFA8C1DDDB3EDF2193B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass1_0_U3COnAppActivatedU3Eb__0_m5B5FD60AC76C6517D500FE1F22EB575697CC330E_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct IAsyncAction_tA69CE29E39880E68BF0456395F3B1462DC29BA06;
struct IProtocolActivatedEventArgs_t1EC1DFFB94676AFE06C9DC5E1B7D73D348468AD8;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};

// Windows.Foundation.IAsyncAction
struct NOVTABLE IAsyncAction_tA69CE29E39880E68BF0456395F3B1462DC29BA06 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncAction_U24__Stripped0_put_Completed_mAA8D77A742162EB3E18E284187718D00406C5AEC() = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncAction_U24__Stripped1_get_Completed_m94DE6D3F11AF402417B40D3767305A981D8E9D63() = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncAction_U24__Stripped2_GetResults_m569EFBFE73D08CDACED05E3741966276468AB06F() = 0;
};

// System.Object

struct Il2CppArrayBounds;

// System.Array


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


// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
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
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
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

// System.__Il2CppComObject


// PrintActivationArguments/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t228C5781F8DF8E9064089914A970DD4B2729D4AA  : public RuntimeObject
{
public:
	// Windows.ApplicationModel.Activation.IActivatedEventArgs PrintActivationArguments/<>c__DisplayClass1_0::activatedArgs
	RuntimeObject* ___activatedArgs_0;

public:
	inline static int32_t get_offset_of_activatedArgs_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_t228C5781F8DF8E9064089914A970DD4B2729D4AA, ___activatedArgs_0)); }
	inline RuntimeObject* get_activatedArgs_0() const { return ___activatedArgs_0; }
	inline RuntimeObject** get_address_of_activatedArgs_0() { return &___activatedArgs_0; }
	inline void set_activatedArgs_0(RuntimeObject* value)
	{
		___activatedArgs_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activatedArgs_0), (void*)value);
	}
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

// System.IntPtr
struct IntPtr_t 
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


// Windows.ApplicationModel.Activation.ProtocolActivatedEventArgs
struct ProtocolActivatedEventArgs_t1D25CC5DB2B6309C43F18910B0C8797629A8D222  : public Il2CppComObject
{
public:

public:
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


// WindowsRuntimeWorkaround
struct WindowsRuntimeWorkaround_tB590469FF4F574B7EA501C643372176169E74A5F 
{
public:
	// Windows.Foundation.IAsyncAction WindowsRuntimeWorkaround::_workaroundAction
	RuntimeObject* ____workaroundAction_0;

public:
	inline static int32_t get_offset_of__workaroundAction_0() { return static_cast<int32_t>(offsetof(WindowsRuntimeWorkaround_tB590469FF4F574B7EA501C643372176169E74A5F, ____workaroundAction_0)); }
	inline RuntimeObject* get__workaroundAction_0() const { return ____workaroundAction_0; }
	inline RuntimeObject** get_address_of__workaroundAction_0() { return &____workaroundAction_0; }
	inline void set__workaroundAction_0(RuntimeObject* value)
	{
		____workaroundAction_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____workaroundAction_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of WindowsRuntimeWorkaround
struct WindowsRuntimeWorkaround_tB590469FF4F574B7EA501C643372176169E74A5F_marshaled_pinvoke
{
	IAsyncAction_tA69CE29E39880E68BF0456395F3B1462DC29BA06* ____workaroundAction_0;
};
// Native definition for COM marshalling of WindowsRuntimeWorkaround
struct WindowsRuntimeWorkaround_tB590469FF4F574B7EA501C643372176169E74A5F_marshaled_com
{
	IAsyncAction_tA69CE29E39880E68BF0456395F3B1462DC29BA06* ____workaroundAction_0;
};

// Windows.ApplicationModel.Activation.ActivationKind
struct ActivationKind_tCFB0134DEF648CFCE2C91099FF61EE8530B07B91 
{
public:
	// System.Int32 Windows.ApplicationModel.Activation.ActivationKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ActivationKind_tCFB0134DEF648CFCE2C91099FF61EE8530B07B91, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Windows.ApplicationModel.Activation.ApplicationExecutionState
struct ApplicationExecutionState_t14DAD2AA7DE075D70902C59831172EB328057C81 
{
public:
	// System.Int32 Windows.ApplicationModel.Activation.ApplicationExecutionState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ApplicationExecutionState_t14DAD2AA7DE075D70902C59831172EB328057C81, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.UriIdnScope
struct UriIdnScope_tBA22B992BA582F68F2B98CDEBCB24299F249DE4D 
{
public:
	// System.Int32 System.UriIdnScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriIdnScope_tBA22B992BA582F68F2B98CDEBCB24299F249DE4D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Uri/Flags
struct Flags_t72C622DF5C3ED762F55AB36EC2CCDDF3AF56B8D4 
{
public:
	// System.UInt64 System.Uri/Flags::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t72C622DF5C3ED762F55AB36EC2CCDDF3AF56B8D4, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Windows.ApplicationModel.Activation.IActivatedEventArgs
struct NOVTABLE IActivatedEventArgs_t38AF6D7CFB3114924504794FB3AC557096CCFC2B : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IActivatedEventArgs_get_Kind_m73BC5142E2C7ACF55FF10C526DFBF0FD838D64DB(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IActivatedEventArgs_get_PreviousExecutionState_m82E28EFF709D256E076C432EC6778A070BC2E1D1(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IActivatedEventArgs_U24__Stripped0_get_SplashScreen_m895704FA2E0BEB0C697BFB5F62DC5E485E8C29F1() = 0;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612  : public RuntimeObject
{
public:
	// System.String System.Uri::m_String
	String_t* ___m_String_13;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_14;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___m_Syntax_15;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_16;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_17;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * ___m_Info_18;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_19;

public:
	inline static int32_t get_offset_of_m_String_13() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_String_13)); }
	inline String_t* get_m_String_13() const { return ___m_String_13; }
	inline String_t** get_address_of_m_String_13() { return &___m_String_13; }
	inline void set_m_String_13(String_t* value)
	{
		___m_String_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_String_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_originalUnicodeString_14() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_originalUnicodeString_14)); }
	inline String_t* get_m_originalUnicodeString_14() const { return ___m_originalUnicodeString_14; }
	inline String_t** get_address_of_m_originalUnicodeString_14() { return &___m_originalUnicodeString_14; }
	inline void set_m_originalUnicodeString_14(String_t* value)
	{
		___m_originalUnicodeString_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_originalUnicodeString_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_Syntax_15() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Syntax_15)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_m_Syntax_15() const { return ___m_Syntax_15; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_m_Syntax_15() { return &___m_Syntax_15; }
	inline void set_m_Syntax_15(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___m_Syntax_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Syntax_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_DnsSafeHost_16() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_DnsSafeHost_16)); }
	inline String_t* get_m_DnsSafeHost_16() const { return ___m_DnsSafeHost_16; }
	inline String_t** get_address_of_m_DnsSafeHost_16() { return &___m_DnsSafeHost_16; }
	inline void set_m_DnsSafeHost_16(String_t* value)
	{
		___m_DnsSafeHost_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DnsSafeHost_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_17() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Flags_17)); }
	inline uint64_t get_m_Flags_17() const { return ___m_Flags_17; }
	inline uint64_t* get_address_of_m_Flags_17() { return &___m_Flags_17; }
	inline void set_m_Flags_17(uint64_t value)
	{
		___m_Flags_17 = value;
	}

	inline static int32_t get_offset_of_m_Info_18() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Info_18)); }
	inline UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * get_m_Info_18() const { return ___m_Info_18; }
	inline UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 ** get_address_of_m_Info_18() { return &___m_Info_18; }
	inline void set_m_Info_18(UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * value)
	{
		___m_Info_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Info_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_iriParsing_19() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_iriParsing_19)); }
	inline bool get_m_iriParsing_19() const { return ___m_iriParsing_19; }
	inline bool* get_address_of_m_iriParsing_19() { return &___m_iriParsing_19; }
	inline void set_m_iriParsing_19(bool value)
	{
		___m_iriParsing_19 = value;
	}
};

struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields
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
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___HexLowerChars_27;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ____WSchars_28;

public:
	inline static int32_t get_offset_of_UriSchemeFile_0() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeFile_0)); }
	inline String_t* get_UriSchemeFile_0() const { return ___UriSchemeFile_0; }
	inline String_t** get_address_of_UriSchemeFile_0() { return &___UriSchemeFile_0; }
	inline void set_UriSchemeFile_0(String_t* value)
	{
		___UriSchemeFile_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFile_0), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_1() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeFtp_1)); }
	inline String_t* get_UriSchemeFtp_1() const { return ___UriSchemeFtp_1; }
	inline String_t** get_address_of_UriSchemeFtp_1() { return &___UriSchemeFtp_1; }
	inline void set_UriSchemeFtp_1(String_t* value)
	{
		___UriSchemeFtp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFtp_1), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_2() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeGopher_2)); }
	inline String_t* get_UriSchemeGopher_2() const { return ___UriSchemeGopher_2; }
	inline String_t** get_address_of_UriSchemeGopher_2() { return &___UriSchemeGopher_2; }
	inline void set_UriSchemeGopher_2(String_t* value)
	{
		___UriSchemeGopher_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeGopher_2), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_3() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeHttp_3)); }
	inline String_t* get_UriSchemeHttp_3() const { return ___UriSchemeHttp_3; }
	inline String_t** get_address_of_UriSchemeHttp_3() { return &___UriSchemeHttp_3; }
	inline void set_UriSchemeHttp_3(String_t* value)
	{
		___UriSchemeHttp_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttp_3), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_4() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeHttps_4)); }
	inline String_t* get_UriSchemeHttps_4() const { return ___UriSchemeHttps_4; }
	inline String_t** get_address_of_UriSchemeHttps_4() { return &___UriSchemeHttps_4; }
	inline void set_UriSchemeHttps_4(String_t* value)
	{
		___UriSchemeHttps_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttps_4), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWs_5() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeWs_5)); }
	inline String_t* get_UriSchemeWs_5() const { return ___UriSchemeWs_5; }
	inline String_t** get_address_of_UriSchemeWs_5() { return &___UriSchemeWs_5; }
	inline void set_UriSchemeWs_5(String_t* value)
	{
		___UriSchemeWs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWs_5), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWss_6() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeWss_6)); }
	inline String_t* get_UriSchemeWss_6() const { return ___UriSchemeWss_6; }
	inline String_t** get_address_of_UriSchemeWss_6() { return &___UriSchemeWss_6; }
	inline void set_UriSchemeWss_6(String_t* value)
	{
		___UriSchemeWss_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWss_6), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_7() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeMailto_7)); }
	inline String_t* get_UriSchemeMailto_7() const { return ___UriSchemeMailto_7; }
	inline String_t** get_address_of_UriSchemeMailto_7() { return &___UriSchemeMailto_7; }
	inline void set_UriSchemeMailto_7(String_t* value)
	{
		___UriSchemeMailto_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeMailto_7), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_8() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNews_8)); }
	inline String_t* get_UriSchemeNews_8() const { return ___UriSchemeNews_8; }
	inline String_t** get_address_of_UriSchemeNews_8() { return &___UriSchemeNews_8; }
	inline void set_UriSchemeNews_8(String_t* value)
	{
		___UriSchemeNews_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNews_8), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_9() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNntp_9)); }
	inline String_t* get_UriSchemeNntp_9() const { return ___UriSchemeNntp_9; }
	inline String_t** get_address_of_UriSchemeNntp_9() { return &___UriSchemeNntp_9; }
	inline void set_UriSchemeNntp_9(String_t* value)
	{
		___UriSchemeNntp_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNntp_9), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_10() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNetTcp_10)); }
	inline String_t* get_UriSchemeNetTcp_10() const { return ___UriSchemeNetTcp_10; }
	inline String_t** get_address_of_UriSchemeNetTcp_10() { return &___UriSchemeNetTcp_10; }
	inline void set_UriSchemeNetTcp_10(String_t* value)
	{
		___UriSchemeNetTcp_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetTcp_10), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_11() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNetPipe_11)); }
	inline String_t* get_UriSchemeNetPipe_11() const { return ___UriSchemeNetPipe_11; }
	inline String_t** get_address_of_UriSchemeNetPipe_11() { return &___UriSchemeNetPipe_11; }
	inline void set_UriSchemeNetPipe_11(String_t* value)
	{
		___UriSchemeNetPipe_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetPipe_11), (void*)value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_12() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___SchemeDelimiter_12)); }
	inline String_t* get_SchemeDelimiter_12() const { return ___SchemeDelimiter_12; }
	inline String_t** get_address_of_SchemeDelimiter_12() { return &___SchemeDelimiter_12; }
	inline void set_SchemeDelimiter_12(String_t* value)
	{
		___SchemeDelimiter_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SchemeDelimiter_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_ConfigInitialized_20() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_ConfigInitialized_20)); }
	inline bool get_s_ConfigInitialized_20() const { return ___s_ConfigInitialized_20; }
	inline bool* get_address_of_s_ConfigInitialized_20() { return &___s_ConfigInitialized_20; }
	inline void set_s_ConfigInitialized_20(bool value)
	{
		___s_ConfigInitialized_20 = value;
	}

	inline static int32_t get_offset_of_s_ConfigInitializing_21() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_ConfigInitializing_21)); }
	inline bool get_s_ConfigInitializing_21() const { return ___s_ConfigInitializing_21; }
	inline bool* get_address_of_s_ConfigInitializing_21() { return &___s_ConfigInitializing_21; }
	inline void set_s_ConfigInitializing_21(bool value)
	{
		___s_ConfigInitializing_21 = value;
	}

	inline static int32_t get_offset_of_s_IdnScope_22() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_IdnScope_22)); }
	inline int32_t get_s_IdnScope_22() const { return ___s_IdnScope_22; }
	inline int32_t* get_address_of_s_IdnScope_22() { return &___s_IdnScope_22; }
	inline void set_s_IdnScope_22(int32_t value)
	{
		___s_IdnScope_22 = value;
	}

	inline static int32_t get_offset_of_s_IriParsing_23() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_IriParsing_23)); }
	inline bool get_s_IriParsing_23() const { return ___s_IriParsing_23; }
	inline bool* get_address_of_s_IriParsing_23() { return &___s_IriParsing_23; }
	inline void set_s_IriParsing_23(bool value)
	{
		___s_IriParsing_23 = value;
	}

	inline static int32_t get_offset_of_useDotNetRelativeOrAbsolute_24() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___useDotNetRelativeOrAbsolute_24)); }
	inline bool get_useDotNetRelativeOrAbsolute_24() const { return ___useDotNetRelativeOrAbsolute_24; }
	inline bool* get_address_of_useDotNetRelativeOrAbsolute_24() { return &___useDotNetRelativeOrAbsolute_24; }
	inline void set_useDotNetRelativeOrAbsolute_24(bool value)
	{
		___useDotNetRelativeOrAbsolute_24 = value;
	}

	inline static int32_t get_offset_of_IsWindowsFileSystem_25() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___IsWindowsFileSystem_25)); }
	inline bool get_IsWindowsFileSystem_25() const { return ___IsWindowsFileSystem_25; }
	inline bool* get_address_of_IsWindowsFileSystem_25() { return &___IsWindowsFileSystem_25; }
	inline void set_IsWindowsFileSystem_25(bool value)
	{
		___IsWindowsFileSystem_25 = value;
	}

	inline static int32_t get_offset_of_s_initLock_26() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_initLock_26)); }
	inline RuntimeObject * get_s_initLock_26() const { return ___s_initLock_26; }
	inline RuntimeObject ** get_address_of_s_initLock_26() { return &___s_initLock_26; }
	inline void set_s_initLock_26(RuntimeObject * value)
	{
		___s_initLock_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_initLock_26), (void*)value);
	}

	inline static int32_t get_offset_of_HexLowerChars_27() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___HexLowerChars_27)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_HexLowerChars_27() const { return ___HexLowerChars_27; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_HexLowerChars_27() { return &___HexLowerChars_27; }
	inline void set_HexLowerChars_27(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___HexLowerChars_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HexLowerChars_27), (void*)value);
	}

	inline static int32_t get_offset_of__WSchars_28() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ____WSchars_28)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get__WSchars_28() const { return ____WSchars_28; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of__WSchars_28() { return &____WSchars_28; }
	inline void set__WSchars_28(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		____WSchars_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WSchars_28), (void*)value);
	}
};


// UnityEngine.WSA.AppCallbackItem
struct AppCallbackItem_t64C87B105C09D7D56E812214436AF86CEEBFE29C  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// PrintActivationArguments/AppActivatedDelegate
struct AppActivatedDelegate_tE6FA6C0A4F2EDBDD284C93F8A6DA1829019C88DB  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// PrintActivationArguments
struct PrintActivationArguments_tD9E232A07D03D3DB0FA54CBC7679AA493D508CF4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};



// System.Void PrintActivationArguments::OnAppActivated(Windows.ApplicationModel.Activation.IActivatedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrintActivationArguments_OnAppActivated_m8B4ECEEEA267D11709289CFA8C1DDDB3EDF2193B (RuntimeObject* ___activatedArgs0, const RuntimeMethod* method);
// System.Void PrintActivationArguments/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_mCE409AE75A70187CCED8A30FD5E725A024AA3B8E (U3CU3Ec__DisplayClass1_0_t228C5781F8DF8E9064089914A970DD4B2729D4AA * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.WSA.Application::RunningOnAppThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_RunningOnAppThread_m2012A938DA2480E62F7FB5C4A42BB66F4F2F37E3 (const RuntimeMethod* method);
// System.Void PrintActivationArguments::LogAppActivated(Windows.ApplicationModel.Activation.IActivatedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrintActivationArguments_LogAppActivated_mD817D699A54E5690610F395240B939B68C165AAA (RuntimeObject* ___activatedArgs0, const RuntimeMethod* method);
// System.Void UnityEngine.WSA.AppCallbackItem::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCallbackItem__ctor_m87EC22B203716A10F85F21E155D3CE3745F49FF4 (AppCallbackItem_t64C87B105C09D7D56E812214436AF86CEEBFE29C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.WSA.Application::InvokeOnAppThread(UnityEngine.WSA.AppCallbackItem,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_InvokeOnAppThread_m2CCF5404E2DB2740277299D0DB455C895AF0053B (AppCallbackItem_t64C87B105C09D7D56E812214436AF86CEEBFE29C * ___item0, bool ___waitUntilDone1, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendLine_m4FBF9761747825683B04B18842DF906473EEF7C8 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Uri Windows.ApplicationModel.Activation.ProtocolActivatedEventArgs::get_Uri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ProtocolActivatedEventArgs_get_Uri_m5A17C77CB881E850E73CE949ABFEE9A149800041 (ProtocolActivatedEventArgs_t1D25CC5DB2B6309C43F18910B0C8797629A8D222 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void PrintActivationArguments/AppActivatedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppActivatedDelegate__ctor_m7C13A50614D0392AF187D6FC7039F515AA961BB1 (AppActivatedDelegate_tE6FA6C0A4F2EDBDD284C93F8A6DA1829019C88DB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void PrintActivationArguments::SetupActivatedEventCallback(PrintActivationArguments/AppActivatedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrintActivationArguments_SetupActivatedEventCallback_m191E0F18626447C16D82107E38A156A95E28BD03 (AppActivatedDelegate_tE6FA6C0A4F2EDBDD284C93F8A6DA1829019C88DB * ___callback0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
IL2CPP_EXTERN_C void DEFAULT_CALL SetupActivatedEventCallback(Il2CppMethodPointer);
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_PrintActivationArguments_OnAppActivated_m8B4ECEEEA267D11709289CFA8C1DDDB3EDF2193B(IActivatedEventArgs_t38AF6D7CFB3114924504794FB3AC557096CCFC2B* ___activatedArgs0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___activatedArgs0' to managed representation
	RuntimeObject* ____activatedArgs0_unmarshaled = NULL;
	if (___activatedArgs0 != NULL)
	{
		____activatedArgs0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___activatedArgs0, Il2CppComObject_il2cpp_TypeInfo_var);

		if (il2cpp_codegen_is_import_or_windows_runtime(____activatedArgs0_unmarshaled))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____activatedArgs0_unmarshaled), IActivatedEventArgs_t38AF6D7CFB3114924504794FB3AC557096CCFC2B::IID, ___activatedArgs0);
		}
	}
	else
	{
		____activatedArgs0_unmarshaled = NULL;
	}

	// Managed method invocation
	PrintActivationArguments_OnAppActivated_m8B4ECEEEA267D11709289CFA8C1DDDB3EDF2193B(____activatedArgs0_unmarshaled, NULL);

}
// System.Void PrintActivationArguments::OnAppActivated(Windows.ApplicationModel.Activation.IActivatedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrintActivationArguments_OnAppActivated_m8B4ECEEEA267D11709289CFA8C1DDDB3EDF2193B (RuntimeObject* ___activatedArgs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCallbackItem_t64C87B105C09D7D56E812214436AF86CEEBFE29C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_U3COnAppActivatedU3Eb__0_m5B5FD60AC76C6517D500FE1F22EB575697CC330E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_t228C5781F8DF8E9064089914A970DD4B2729D4AA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass1_0_t228C5781F8DF8E9064089914A970DD4B2729D4AA * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass1_0_t228C5781F8DF8E9064089914A970DD4B2729D4AA * L_0 = (U3CU3Ec__DisplayClass1_0_t228C5781F8DF8E9064089914A970DD4B2729D4AA *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass1_0_t228C5781F8DF8E9064089914A970DD4B2729D4AA_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass1_0__ctor_mCE409AE75A70187CCED8A30FD5E725A024AA3B8E(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass1_0_t228C5781F8DF8E9064089914A970DD4B2729D4AA * L_1 = V_0;
		RuntimeObject* L_2 = ___activatedArgs0;
		NullCheck(L_1);
		L_1->set_activatedArgs_0(L_2);
		// if (UnityEngine.WSA.Application.RunningOnAppThread())
		bool L_3;
		L_3 = Application_RunningOnAppThread_m2012A938DA2480E62F7FB5C4A42BB66F4F2F37E3(/*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		// LogAppActivated(activatedArgs);
		U3CU3Ec__DisplayClass1_0_t228C5781F8DF8E9064089914A970DD4B2729D4AA * L_4 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->get_activatedArgs_0();
		PrintActivationArguments_LogAppActivated_mD817D699A54E5690610F395240B939B68C165AAA(L_5, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0020:
	{
		// UnityEngine.WSA.Application.InvokeOnAppThread(() =>
		// {
		//     LogAppActivated(activatedArgs);
		// }, false);
		U3CU3Ec__DisplayClass1_0_t228C5781F8DF8E9064089914A970DD4B2729D4AA * L_6 = V_0;
		AppCallbackItem_t64C87B105C09D7D56E812214436AF86CEEBFE29C * L_7 = (AppCallbackItem_t64C87B105C09D7D56E812214436AF86CEEBFE29C *)il2cpp_codegen_object_new(AppCallbackItem_t64C87B105C09D7D56E812214436AF86CEEBFE29C_il2cpp_TypeInfo_var);
		AppCallbackItem__ctor_m87EC22B203716A10F85F21E155D3CE3745F49FF4(L_7, L_6, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass1_0_U3COnAppActivatedU3Eb__0_m5B5FD60AC76C6517D500FE1F22EB575697CC330E_RuntimeMethod_var), /*hidden argument*/NULL);
		Application_InvokeOnAppThread_m2CCF5404E2DB2740277299D0DB455C895AF0053B(L_7, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PrintActivationArguments::LogAppActivated(Windows.ApplicationModel.Activation.IActivatedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrintActivationArguments_LogAppActivated_mD817D699A54E5690610F395240B939B68C165AAA (RuntimeObject* ___activatedArgs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActivationKind_tCFB0134DEF648CFCE2C91099FF61EE8530B07B91_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationExecutionState_t14DAD2AA7DE075D70902C59831172EB328057C81_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IActivatedEventArgs_t38AF6D7CFB3114924504794FB3AC557096CCFC2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtocolActivatedEventArgs_t1D25CC5DB2B6309C43F18910B0C8797629A8D222_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C2DBEC5648802A73ABF137E8B4088441C2DA60B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B8E60787FB648366AA762BCC7EDB1683656BD12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80712C8A498EFFEFAB532C226168443F41A4917A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB6915100CE5199BC0331B4F3E79A362DBDCCA88);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ProtocolActivatedEventArgs_t1D25CC5DB2B6309C43F18910B0C8797629A8D222 * V_3 = NULL;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	StringBuilder_t * G_B3_2 = NULL;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	StringBuilder_t * G_B2_2 = NULL;
	String_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	StringBuilder_t * G_B4_2 = NULL;
	{
		// var activatedArgsMessage = new StringBuilder();
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// activatedArgsMessage.AppendLine("ActivatedEventArgs:");
		StringBuilder_t * L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_AppendLine_m4FBF9761747825683B04B18842DF906473EEF7C8(L_1, _stringLiteral80712C8A498EFFEFAB532C226168443F41A4917A, /*hidden argument*/NULL);
		// activatedArgsMessage.AppendLine("    Kind: ActivationKind." + activatedArgs.Kind);
		StringBuilder_t * L_3 = V_0;
		RuntimeObject* L_4 = ___activatedArgs0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* Windows.ApplicationModel.Activation.ActivationKind Windows.ApplicationModel.Activation.IActivatedEventArgs::get_Kind() */, IActivatedEventArgs_t38AF6D7CFB3114924504794FB3AC557096CCFC2B_il2cpp_TypeInfo_var, L_4);
		V_1 = L_5;
		RuntimeObject * L_6 = Box(ActivationKind_tCFB0134DEF648CFCE2C91099FF61EE8530B07B91_il2cpp_TypeInfo_var, (&V_1));
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		V_1 = *(int32_t*)UnBox(L_6);
		String_t* L_8;
		L_8 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral1B8E60787FB648366AA762BCC7EDB1683656BD12, L_7, /*hidden argument*/NULL);
		NullCheck(L_3);
		StringBuilder_t * L_9;
		L_9 = StringBuilder_AppendLine_m4FBF9761747825683B04B18842DF906473EEF7C8(L_3, L_8, /*hidden argument*/NULL);
		// activatedArgsMessage.AppendLine("    PreviousExecutionState: ApplicationExecutionState." + activatedArgs.PreviousExecutionState);
		StringBuilder_t * L_10 = V_0;
		RuntimeObject* L_11 = ___activatedArgs0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* Windows.ApplicationModel.Activation.ApplicationExecutionState Windows.ApplicationModel.Activation.IActivatedEventArgs::get_PreviousExecutionState() */, IActivatedEventArgs_t38AF6D7CFB3114924504794FB3AC557096CCFC2B_il2cpp_TypeInfo_var, L_11);
		V_2 = L_12;
		RuntimeObject * L_13 = Box(ApplicationExecutionState_t14DAD2AA7DE075D70902C59831172EB328057C81_il2cpp_TypeInfo_var, (&V_2));
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_13);
		V_2 = *(int32_t*)UnBox(L_13);
		String_t* L_15;
		L_15 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralCB6915100CE5199BC0331B4F3E79A362DBDCCA88, L_14, /*hidden argument*/NULL);
		NullCheck(L_10);
		StringBuilder_t * L_16;
		L_16 = StringBuilder_AppendLine_m4FBF9761747825683B04B18842DF906473EEF7C8(L_10, L_15, /*hidden argument*/NULL);
		// if (activatedArgs.Kind == ActivationKind.Protocol)
		RuntimeObject* L_17 = ___activatedArgs0;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* Windows.ApplicationModel.Activation.ActivationKind Windows.ApplicationModel.Activation.IActivatedEventArgs::get_Kind() */, IActivatedEventArgs_t38AF6D7CFB3114924504794FB3AC557096CCFC2B_il2cpp_TypeInfo_var, L_17);
		if ((!(((uint32_t)L_18) == ((uint32_t)4))))
		{
			goto IL_008f;
		}
	}
	{
		// var protocolArgs = (ProtocolActivatedEventArgs)activatedArgs;
		RuntimeObject* L_19 = ___activatedArgs0;
		V_3 = ((ProtocolActivatedEventArgs_t1D25CC5DB2B6309C43F18910B0C8797629A8D222 *)CastclassSealed((RuntimeObject*)L_19, ProtocolActivatedEventArgs_t1D25CC5DB2B6309C43F18910B0C8797629A8D222_il2cpp_TypeInfo_var));
		// activatedArgsMessage.AppendLine("    ProtocolActivatedEventArgs.Uri: " + protocolArgs.Uri);
		StringBuilder_t * L_20 = V_0;
		ProtocolActivatedEventArgs_t1D25CC5DB2B6309C43F18910B0C8797629A8D222 * L_21 = V_3;
		NullCheck(L_21);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_22;
		L_22 = ProtocolActivatedEventArgs_get_Uri_m5A17C77CB881E850E73CE949ABFEE9A149800041(L_21, /*hidden argument*/NULL);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_23 = L_22;
		G_B2_0 = L_23;
		G_B2_1 = _stringLiteral0C2DBEC5648802A73ABF137E8B4088441C2DA60B;
		G_B2_2 = L_20;
		if (L_23)
		{
			G_B3_0 = L_23;
			G_B3_1 = _stringLiteral0C2DBEC5648802A73ABF137E8B4088441C2DA60B;
			G_B3_2 = L_20;
			goto IL_007f;
		}
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		G_B4_1 = G_B2_1;
		G_B4_2 = G_B2_2;
		goto IL_0084;
	}

IL_007f:
	{
		NullCheck(G_B3_0);
		String_t* L_24;
		L_24 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B3_0);
		G_B4_0 = L_24;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_0084:
	{
		String_t* L_25;
		L_25 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(G_B4_1, G_B4_0, /*hidden argument*/NULL);
		NullCheck(G_B4_2);
		StringBuilder_t * L_26;
		L_26 = StringBuilder_AppendLine_m4FBF9761747825683B04B18842DF906473EEF7C8(G_B4_2, L_25, /*hidden argument*/NULL);
	}

IL_008f:
	{
		// Debug.Log(activatedArgsMessage.ToString());
		StringBuilder_t * L_27 = V_0;
		NullCheck(L_27);
		String_t* L_28;
		L_28 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_27);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_28, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PrintActivationArguments::SetupActivatedEventCallback(PrintActivationArguments/AppActivatedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrintActivationArguments_SetupActivatedEventCallback_m191E0F18626447C16D82107E38A156A95E28BD03 (AppActivatedDelegate_tE6FA6C0A4F2EDBDD284C93F8A6DA1829019C88DB * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SetupActivatedEventCallback)(____callback0_marshaled);

}
// System.Void PrintActivationArguments::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrintActivationArguments_Awake_mAAA5845C76B3A799E6C88295E642879F59563436 (PrintActivationArguments_tD9E232A07D03D3DB0FA54CBC7679AA493D508CF4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppActivatedDelegate_tE6FA6C0A4F2EDBDD284C93F8A6DA1829019C88DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrintActivationArguments_OnAppActivated_m8B4ECEEEA267D11709289CFA8C1DDDB3EDF2193B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SetupActivatedEventCallback(OnAppActivated);
		AppActivatedDelegate_tE6FA6C0A4F2EDBDD284C93F8A6DA1829019C88DB * L_0 = (AppActivatedDelegate_tE6FA6C0A4F2EDBDD284C93F8A6DA1829019C88DB *)il2cpp_codegen_object_new(AppActivatedDelegate_tE6FA6C0A4F2EDBDD284C93F8A6DA1829019C88DB_il2cpp_TypeInfo_var);
		AppActivatedDelegate__ctor_m7C13A50614D0392AF187D6FC7039F515AA961BB1(L_0, NULL, (intptr_t)((intptr_t)PrintActivationArguments_OnAppActivated_m8B4ECEEEA267D11709289CFA8C1DDDB3EDF2193B_RuntimeMethod_var), /*hidden argument*/NULL);
		PrintActivationArguments_SetupActivatedEventCallback_m191E0F18626447C16D82107E38A156A95E28BD03(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PrintActivationArguments::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrintActivationArguments__ctor_m66ECDF09C4A647E7E8957D6E122F6FA9B801EACE (PrintActivationArguments_tD9E232A07D03D3DB0FA54CBC7679AA493D508CF4 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: WindowsRuntimeWorkaround
IL2CPP_EXTERN_C void WindowsRuntimeWorkaround_tB590469FF4F574B7EA501C643372176169E74A5F_marshal_pinvoke(const WindowsRuntimeWorkaround_tB590469FF4F574B7EA501C643372176169E74A5F& unmarshaled, WindowsRuntimeWorkaround_tB590469FF4F574B7EA501C643372176169E74A5F_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.get__workaroundAction_0() != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get__workaroundAction_0()))
		{
			marshaled.____workaroundAction_0 = il2cpp_codegen_com_query_interface<IAsyncAction_tA69CE29E39880E68BF0456395F3B1462DC29BA06>(static_cast<Il2CppComObject*>(unmarshaled.get__workaroundAction_0()));
			(marshaled.____workaroundAction_0)->AddRef();
		}
		else
		{
			marshaled.____workaroundAction_0 = il2cpp_codegen_com_get_or_create_ccw<IAsyncAction_tA69CE29E39880E68BF0456395F3B1462DC29BA06>(unmarshaled.get__workaroundAction_0());
		}
	}
	else
	{
		marshaled.____workaroundAction_0 = NULL;
	}
}
IL2CPP_EXTERN_C void WindowsRuntimeWorkaround_tB590469FF4F574B7EA501C643372176169E74A5F_marshal_pinvoke_back(const WindowsRuntimeWorkaround_tB590469FF4F574B7EA501C643372176169E74A5F_marshaled_pinvoke& marshaled, WindowsRuntimeWorkaround_tB590469FF4F574B7EA501C643372176169E74A5F& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.____workaroundAction_0 != NULL)
	{
		unmarshaled.set__workaroundAction_0(il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(marshaled.____workaroundAction_0, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get__workaroundAction_0()))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.get__workaroundAction_0()), IAsyncAction_tA69CE29E39880E68BF0456395F3B1462DC29BA06::IID, marshaled.____workaroundAction_0);
		}
	}
	else
	{
		unmarshaled.set__workaroundAction_0(NULL);
	}
}
// Conversion method for clean up from marshalling of: WindowsRuntimeWorkaround
IL2CPP_EXTERN_C void WindowsRuntimeWorkaround_tB590469FF4F574B7EA501C643372176169E74A5F_marshal_pinvoke_cleanup(WindowsRuntimeWorkaround_tB590469FF4F574B7EA501C643372176169E74A5F_marshaled_pinvoke& marshaled)
{
	if (marshaled.____workaroundAction_0 != NULL)
	{
		(marshaled.____workaroundAction_0)->Release();
		marshaled.____workaroundAction_0 = NULL;
	}
}
// Conversion methods for marshalling of: WindowsRuntimeWorkaround
IL2CPP_EXTERN_C void WindowsRuntimeWorkaround_tB590469FF4F574B7EA501C643372176169E74A5F_marshal_com(const WindowsRuntimeWorkaround_tB590469FF4F574B7EA501C643372176169E74A5F& unmarshaled, WindowsRuntimeWorkaround_tB590469FF4F574B7EA501C643372176169E74A5F_marshaled_com& marshaled)
{
	if (unmarshaled.get__workaroundAction_0() != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get__workaroundAction_0()))
		{
			marshaled.____workaroundAction_0 = il2cpp_codegen_com_query_interface<IAsyncAction_tA69CE29E39880E68BF0456395F3B1462DC29BA06>(static_cast<Il2CppComObject*>(unmarshaled.get__workaroundAction_0()));
			(marshaled.____workaroundAction_0)->AddRef();
		}
		else
		{
			marshaled.____workaroundAction_0 = il2cpp_codegen_com_get_or_create_ccw<IAsyncAction_tA69CE29E39880E68BF0456395F3B1462DC29BA06>(unmarshaled.get__workaroundAction_0());
		}
	}
	else
	{
		marshaled.____workaroundAction_0 = NULL;
	}
}
IL2CPP_EXTERN_C void WindowsRuntimeWorkaround_tB590469FF4F574B7EA501C643372176169E74A5F_marshal_com_back(const WindowsRuntimeWorkaround_tB590469FF4F574B7EA501C643372176169E74A5F_marshaled_com& marshaled, WindowsRuntimeWorkaround_tB590469FF4F574B7EA501C643372176169E74A5F& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.____workaroundAction_0 != NULL)
	{
		unmarshaled.set__workaroundAction_0(il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(marshaled.____workaroundAction_0, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get__workaroundAction_0()))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.get__workaroundAction_0()), IAsyncAction_tA69CE29E39880E68BF0456395F3B1462DC29BA06::IID, marshaled.____workaroundAction_0);
		}
	}
	else
	{
		unmarshaled.set__workaroundAction_0(NULL);
	}
}
// Conversion method for clean up from marshalling of: WindowsRuntimeWorkaround
IL2CPP_EXTERN_C void WindowsRuntimeWorkaround_tB590469FF4F574B7EA501C643372176169E74A5F_marshal_com_cleanup(WindowsRuntimeWorkaround_tB590469FF4F574B7EA501C643372176169E74A5F_marshaled_com& marshaled)
{
	if (marshaled.____workaroundAction_0 != NULL)
	{
		(marshaled.____workaroundAction_0)->Release();
		marshaled.____workaroundAction_0 = NULL;
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
// System.Void PrintActivationArguments/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_mCE409AE75A70187CCED8A30FD5E725A024AA3B8E (U3CU3Ec__DisplayClass1_0_t228C5781F8DF8E9064089914A970DD4B2729D4AA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PrintActivationArguments/<>c__DisplayClass1_0::<OnAppActivated>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0_U3COnAppActivatedU3Eb__0_m5B5FD60AC76C6517D500FE1F22EB575697CC330E (U3CU3Ec__DisplayClass1_0_t228C5781F8DF8E9064089914A970DD4B2729D4AA * __this, const RuntimeMethod* method)
{
	{
		// LogAppActivated(activatedArgs);
		RuntimeObject* L_0 = __this->get_activatedArgs_0();
		PrintActivationArguments_LogAppActivated_mD817D699A54E5690610F395240B939B68C165AAA(L_0, /*hidden argument*/NULL);
		// }, false);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_AppActivatedDelegate_tE6FA6C0A4F2EDBDD284C93F8A6DA1829019C88DB (AppActivatedDelegate_tE6FA6C0A4F2EDBDD284C93F8A6DA1829019C88DB * __this, RuntimeObject* ___activatedArgs0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(IActivatedEventArgs_t38AF6D7CFB3114924504794FB3AC557096CCFC2B*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___activatedArgs0' to native representation
	IActivatedEventArgs_t38AF6D7CFB3114924504794FB3AC557096CCFC2B* ____activatedArgs0_marshaled = NULL;
	if (___activatedArgs0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___activatedArgs0))
		{
			____activatedArgs0_marshaled = il2cpp_codegen_com_query_interface<IActivatedEventArgs_t38AF6D7CFB3114924504794FB3AC557096CCFC2B>(static_cast<Il2CppComObject*>(___activatedArgs0));
			(____activatedArgs0_marshaled)->AddRef();
		}
		else
		{
			____activatedArgs0_marshaled = il2cpp_codegen_com_get_or_create_ccw<IActivatedEventArgs_t38AF6D7CFB3114924504794FB3AC557096CCFC2B>(___activatedArgs0);
		}
	}
	else
	{
		____activatedArgs0_marshaled = NULL;
	}

	// Native function invocation
	il2cppPInvokeFunc(____activatedArgs0_marshaled);

	// Marshaling cleanup of parameter '___activatedArgs0' native representation
	if (____activatedArgs0_marshaled != NULL)
	{
		(____activatedArgs0_marshaled)->Release();
		____activatedArgs0_marshaled = NULL;
	}

}
// System.Void PrintActivationArguments/AppActivatedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppActivatedDelegate__ctor_m7C13A50614D0392AF187D6FC7039F515AA961BB1 (AppActivatedDelegate_tE6FA6C0A4F2EDBDD284C93F8A6DA1829019C88DB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void PrintActivationArguments/AppActivatedDelegate::Invoke(Windows.ApplicationModel.Activation.IActivatedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppActivatedDelegate_Invoke_mD73134E058C7C5569174A87F7DD06EF7B79501E3 (AppActivatedDelegate_tE6FA6C0A4F2EDBDD284C93F8A6DA1829019C88DB * __this, RuntimeObject* ___activatedArgs0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___activatedArgs0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___activatedArgs0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___activatedArgs0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___activatedArgs0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___activatedArgs0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___activatedArgs0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___activatedArgs0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< RuntimeObject* >::Invoke(targetMethod, targetThis, ___activatedArgs0);
					else
						GenericVirtActionInvoker1< RuntimeObject* >::Invoke(targetMethod, targetThis, ___activatedArgs0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___activatedArgs0);
					else
						VirtActionInvoker1< RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___activatedArgs0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___activatedArgs0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___activatedArgs0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult PrintActivationArguments/AppActivatedDelegate::BeginInvoke(Windows.ApplicationModel.Activation.IActivatedEventArgs,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AppActivatedDelegate_BeginInvoke_m57521DFBDBDAF7E2690B596F97AB3F2067BC4330 (AppActivatedDelegate_tE6FA6C0A4F2EDBDD284C93F8A6DA1829019C88DB * __this, RuntimeObject* ___activatedArgs0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___activatedArgs0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void PrintActivationArguments/AppActivatedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppActivatedDelegate_EndInvoke_m3E9D8EE14482E9E381890D8117B59B2277E8FE77 (AppActivatedDelegate_tE6FA6C0A4F2EDBDD284C93F8A6DA1829019C88DB * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
