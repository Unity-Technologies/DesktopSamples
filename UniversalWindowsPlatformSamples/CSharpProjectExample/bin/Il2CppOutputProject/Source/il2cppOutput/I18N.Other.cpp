#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// I18N.Common.ByteEncoding
struct ByteEncoding_t3A5A29C82549567239B7A342CC91EC5297A00412;
// I18N.Other.CP1251
struct CP1251_t67A880F7D677377EB305EC157DA9B70CFE33875C;
// I18N.Other.CP1257
struct CP1257_t1AC1809FEC3703F4088D0A44FACBAEAE9FC46B31;
// I18N.Other.CP1258
struct CP1258_t93AD832AF1FFE06D53F4258384FB82C6D423CAD9;
// I18N.Other.CP20866
struct CP20866_tB32F65B3151CE320A085A67533B92BA74BB716A5;
// I18N.Other.CP21866
struct CP21866_t3C1E45BEF3F191BEF75E920F10395570AD55077C;
// I18N.Other.CP28594
struct CP28594_t150821C2495D3DE51FFD20C2EA36430429F32FC0;
// I18N.Other.CP28595
struct CP28595_tD90E4A4C7815C4413B05E145B01A4C021194C83E;
// I18N.Other.CP57002
struct CP57002_tB89DB24B3DEE8A9C1F5A680E5D93F73C7D18311E;
// I18N.Other.CP57003
struct CP57003_t8E07EDBCBB10982CD462645CD671C39C2DEA8B6A;
// I18N.Other.CP57004
struct CP57004_t5F950E54FE304C528491A0AF293C4BC1276225F3;
// I18N.Other.CP57005
struct CP57005_tB28BDBF5B09DF78382DC11B2923F8D5CE9AB947B;
// I18N.Other.CP57006
struct CP57006_tEFF51C94DEE95B3405D7D465DCCB9148792CE420;
// I18N.Other.CP57007
struct CP57007_t9639DF280CFC1244C6397DE41C1902772633D135;
// I18N.Other.CP57008
struct CP57008_t37F92F2B79A45E25F73C2814AC5DA8655A061CC7;
// I18N.Other.CP57009
struct CP57009_t90A7DBEF0693CF1D60DE8A6A12DAE11C86BEDCC6;
// I18N.Other.CP57010
struct CP57010_t8D1B9539938953F8CE274962782579923B6331DE;
// I18N.Other.CP57011
struct CP57011_t63699D0C1E030F8F9D031688391CD10EF60C5246;
// I18N.Other.CP874
struct CP874_tEBC07123D6653EC1BB8C68CC127EB4858A473E75;
// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// I18N.Other.ENCiso_8859_4
struct ENCiso_8859_4_t559BC040CC738EF8FF65C3C4B556C44CF051B16B;
// I18N.Other.ENCiso_8859_5
struct ENCiso_8859_5_tD09756D4E7144182DD53126624D463E1BBD64831;
// I18N.Other.ENCkoi8_r
struct ENCkoi8_r_tBEEB1D5914A3E48147D18D5AE9EB51B006FA19F5;
// I18N.Other.ENCkoi8_u
struct ENCkoi8_u_tEA78593A5219A7ACC190218670EBF895B59AE065;
// I18N.Other.ENCwindows_1251
struct ENCwindows_1251_tEF42F70A0E661A6186652A3530D58B4CBEEEC135;
// I18N.Other.ENCwindows_1257
struct ENCwindows_1257_t1BA41538D487610EF5E83FB6AB4723E58D9FCE4A;
// I18N.Other.ENCwindows_1258
struct ENCwindows_1258_tBFC531C5824E753DEC64C8FE7041A1D818C4EE13;
// I18N.Other.ENCwindows_874
struct ENCwindows_874_tA9FD4615FFB031ECD38ABB8E4C2BB92E9B3AFFBB;
// I18N.Other.ENCx_iscii_as
struct ENCx_iscii_as_t93958FB92B274E760D0F7D98582E730B93E81829;
// I18N.Other.ENCx_iscii_be
struct ENCx_iscii_be_t29B88C89439CEEB90989C85D39B98A222C704153;
// I18N.Other.ENCx_iscii_de
struct ENCx_iscii_de_t48D57AA289C9B2D591B82A5A5D750EE1D18D64A2;
// I18N.Other.ENCx_iscii_gu
struct ENCx_iscii_gu_t705C3E5067C72B47482FC1C483F23786B788C1CA;
// I18N.Other.ENCx_iscii_ka
struct ENCx_iscii_ka_tC09693F79B977597ED98A18CE627B68B1D36D650;
// I18N.Other.ENCx_iscii_ma
struct ENCx_iscii_ma_t62A8777E5F6518E8D877C10934E9F9A736CB88D7;
// I18N.Other.ENCx_iscii_or
struct ENCx_iscii_or_t043A951D05D2FE0714F2EB113F5606707E2194A0;
// I18N.Other.ENCx_iscii_pa
struct ENCx_iscii_pa_tEC0DADBF7B1316C4C64B3D4762E753406020D9C0;
// I18N.Other.ENCx_iscii_ta
struct ENCx_iscii_ta_t57FBB98D2E7E96219A53799D450B1135002FFE5F;
// I18N.Other.ENCx_iscii_te
struct ENCx_iscii_te_tB281DFCCF3DB63F017287D9B496C50545610EEB7;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.EncoderFallbackBuffer
struct EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0;
// System.Text.EncoderNLS
struct EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// I18N.Other.ISCIIEncoding
struct ISCIIEncoding_tA7FBF65EC6D9E96A9961353706EC809D0C008469;
// I18N.Common.MonoEncoding
struct MonoEncoding_tBF18AF9FA55C6A273B8B39F51D28ADE272E1B5FA;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CP1251_t67A880F7D677377EB305EC157DA9B70CFE33875C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CP1257_t1AC1809FEC3703F4088D0A44FACBAEAE9FC46B31_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CP1258_t93AD832AF1FFE06D53F4258384FB82C6D423CAD9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CP20866_tB32F65B3151CE320A085A67533B92BA74BB716A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CP21866_t3C1E45BEF3F191BEF75E920F10395570AD55077C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CP28594_t150821C2495D3DE51FFD20C2EA36430429F32FC0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CP28595_tD90E4A4C7815C4413B05E145B01A4C021194C83E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CP874_tEBC07123D6653EC1BB8C68CC127EB4858A473E75_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t5BF9241693AE1DE48403915AA18F028381B734C1____017235096A41990D9488223C8E0D56E35B569736_0_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t5BF9241693AE1DE48403915AA18F028381B734C1____31D76B23EDF9CE1BF17651DAC05E3D98BBEA1FC8_1_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t5BF9241693AE1DE48403915AA18F028381B734C1____33D1AC98C31DCCB9238C374D4D1386DB68A6A595_2_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t5BF9241693AE1DE48403915AA18F028381B734C1____3D24D1DCE9501F8E7DFB95BC7CA7EACB21704404_3_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t5BF9241693AE1DE48403915AA18F028381B734C1____C029709D232902A6A3808A15B7622DC2AEF16A24_4_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t5BF9241693AE1DE48403915AA18F028381B734C1____E720E24EA0E8EA5F028BE4B37A7E456DB5E6AE41_5_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t5BF9241693AE1DE48403915AA18F028381B734C1____FDC523733500E24FB60E5223DD9E396992267CD9_6_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t5BF9241693AE1DE48403915AA18F028381B734C1____FF5AEABB91E1A5AEC6185ADD0BCFDE4B5A440680_7_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0314EB59D5D7DB264D8BF1BA5003FDE6A8492D32;
IL2CPP_EXTERN_C String_t* _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626;
IL2CPP_EXTERN_C String_t* _stringLiteral0ADD278CB8B06A24D3EAEA172F92564CC0F1B40D;
IL2CPP_EXTERN_C String_t* _stringLiteral0BEE3D4B4D12655FC98F599F7E19DB43920215C2;
IL2CPP_EXTERN_C String_t* _stringLiteral0EC60200EB2C4FB310B6D03C59FD2BF24E512835;
IL2CPP_EXTERN_C String_t* _stringLiteral10562201C2A7AB420A8DECFE1373D48FBF48A6AE;
IL2CPP_EXTERN_C String_t* _stringLiteral135BCD65E52CDAFB4FCF5E6C49A413A0CB794D3B;
IL2CPP_EXTERN_C String_t* _stringLiteral17BDEE3E69374D0D685D20729FFD47D97EF76EC2;
IL2CPP_EXTERN_C String_t* _stringLiteral20C842E641052B872F3B22C88AF1FADB0944B2E0;
IL2CPP_EXTERN_C String_t* _stringLiteral23E50B556D87C26CCBF71558CB31C3F5631FCB81;
IL2CPP_EXTERN_C String_t* _stringLiteral2A2086AE6565AD627CF8A222FE831AB6F72ECCFF;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral33C9FF0807BC1E3E3D6A7232D713F83ADBCD1771;
IL2CPP_EXTERN_C String_t* _stringLiteral387D24B2AD38BFAD75F491F2B52DFEB0C68E9EC4;
IL2CPP_EXTERN_C String_t* _stringLiteral3A124EA7895BEAD831D7736F0F9801D732E7AA82;
IL2CPP_EXTERN_C String_t* _stringLiteral4BB074BECCF288E8CC240DC6E68E1BABA3463B0C;
IL2CPP_EXTERN_C String_t* _stringLiteral4CC31B6C5B4E5A17444259FC957FB77C0C70FECE;
IL2CPP_EXTERN_C String_t* _stringLiteral4F04E415359BAAEA12C3DA482EAACC98D2F7EDC8;
IL2CPP_EXTERN_C String_t* _stringLiteral4F50A394ED8E898CD0E517570D7F4D5EA6869111;
IL2CPP_EXTERN_C String_t* _stringLiteral6F5F7456652F53E64BFBA7704FE540D3396B0392;
IL2CPP_EXTERN_C String_t* _stringLiteral77B615B8ED1ABB8FC1395D85A5AE524A9789D947;
IL2CPP_EXTERN_C String_t* _stringLiteral78513BBBB0FB5253CDEF0562580140D291508DCD;
IL2CPP_EXTERN_C String_t* _stringLiteral7A3E505F1C9FA677DAF2F9EC8B62A5FE9DBC4F08;
IL2CPP_EXTERN_C String_t* _stringLiteral7CCE6BC74994FAB071ED85694270733E616889B5;
IL2CPP_EXTERN_C String_t* _stringLiteral82E29A7C0D56F06827DBCB1FCE7898B84F83CCC9;
IL2CPP_EXTERN_C String_t* _stringLiteral8AE156A07BD53166C43D7130252A6777DEECD332;
IL2CPP_EXTERN_C String_t* _stringLiteral97C50A822609770F742DFE272A1D8C89500BDDE6;
IL2CPP_EXTERN_C String_t* _stringLiteral9AA99C92BB9065939AEAB82DCEAAB6CEE49FA2FB;
IL2CPP_EXTERN_C String_t* _stringLiteral9F00789D228BB70AE838D627802B9AE3C2B1D2D0;
IL2CPP_EXTERN_C String_t* _stringLiteralA0AF7A09CFE38BC158E3C381B6514A2EB4D66CC3;
IL2CPP_EXTERN_C String_t* _stringLiteralA3DB38E03A729B3BC5A40FAA29A3F584655D68B8;
IL2CPP_EXTERN_C String_t* _stringLiteralA799DF7DC0A354D065D9FB73E14AA266E8D8C652;
IL2CPP_EXTERN_C String_t* _stringLiteralAAD91FE754F32DC76537C154682A89C05C27E0F3;
IL2CPP_EXTERN_C String_t* _stringLiteralAE9899A9F1F60437FF6150902FD4A4BEBC71495E;
IL2CPP_EXTERN_C String_t* _stringLiteralB98DAE2991114034644106FD92748D78DBB56702;
IL2CPP_EXTERN_C String_t* _stringLiteralC0306DF7DBF1214D04F8B833441A25DD021E470F;
IL2CPP_EXTERN_C String_t* _stringLiteralC0F002EC5D33324D93372573BC03DAC58718DA12;
IL2CPP_EXTERN_C String_t* _stringLiteralC216EE9D2A1CBAD9FE964194A2BD558FCAB16BFD;
IL2CPP_EXTERN_C String_t* _stringLiteralC7AE3626E857A47172A716EF331B27CA2491BD61;
IL2CPP_EXTERN_C String_t* _stringLiteralC7EEC09E9F635B74E44F1AB4B338250973A4449F;
IL2CPP_EXTERN_C String_t* _stringLiteralD2239FB6D311A5FA76B445987450592CBD6B477A;
IL2CPP_EXTERN_C String_t* _stringLiteralDAE3AD67659BA087374738C2A2EAA2D0B80B2DA7;
IL2CPP_EXTERN_C String_t* _stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465;
IL2CPP_EXTERN_C String_t* _stringLiteralDF4377CD7CCFF97F2BEFB64D8161CF37BB55D134;
IL2CPP_EXTERN_C String_t* _stringLiteralE846812E6D771EF69EB2839DD01F821B22484DD3;
IL2CPP_EXTERN_C String_t* _stringLiteralEA91A6F78B958DA5FF4B61532CF56E4AEBBF872C;
IL2CPP_EXTERN_C String_t* _stringLiteralEB7EF1973CDC295B7B08FE6D82B9ECDAD1106AF2;
IL2CPP_EXTERN_C String_t* _stringLiteralFE457BA8DD408FCE78E75D3A930CB1ABB2955CC0;
IL2CPP_EXTERN_C const RuntimeMethod* CP1251_ToBytes_mC0ED6C83CC79C36FEE2783B98A6AE87CE40AA871_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CP1257_ToBytes_mE0A467551D18BFFCF9D15FCDE2FC56A34A842F2C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CP1258_ToBytes_m0ED98FCED68EFB644905ADACA690893585A445A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CP20866_ToBytes_m9DFE5A1B4C29E0D3553A88899AAE8ADAD047A27B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CP21866_ToBytes_m9A64D5B840AB8F0A0280272D6B60BDD035D612F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CP28594_ToBytes_m0C6E7CE55459F64757B53E8C341B8E616C011360_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CP28595_ToBytes_m46D538C825148FEBA161229AE81AB8CE46BD0C58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CP874_ToBytes_m31FB5F29F917BB11E4E2605FBCFB2A4A2264C9A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ISCIIEncoding_GetByteCount_m4C6DEF1837BB4CEB87C6508414E8DAB666268ED5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ISCIIEncoding_GetByteCount_mEC9FEC43485C9773EA2A5CEE3D7C8533C51BC070_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ISCIIEncoding_GetBytesImpl_mC8A885EFB1D79934E28ACB8EF94D0E3F236F0942_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ISCIIEncoding_GetCharCount_m7FDB44DC99C1704322863A0C001A2300295AAE7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ISCIIEncoding_GetChars_mFB48DF9E59D616AD8896625E28D7C2E4DA0E9E13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ISCIIEncoding_GetMaxByteCount_m4AF583169B060407AF51AC8DB34E6055D30E7572_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ISCIIEncoding_GetMaxCharCount_m2AFB3D60E0B84B3D365896767BAC1272BA9C255A_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t5B921235577E5F99D69C1EFD0CF05F992F4BCB1E 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// Consts
struct Consts_t64AC1D4A620F6886EB7DD213C0A7F4A55A227474  : public RuntimeObject
{
public:

public:
};


// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4  : public RuntimeObject
{
public:
	// System.Boolean System.Text.EncoderFallback::bIsMicrosoftBestFitFallback
	bool ___bIsMicrosoftBestFitFallback_0;

public:
	inline static int32_t get_offset_of_bIsMicrosoftBestFitFallback_0() { return static_cast<int32_t>(offsetof(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4, ___bIsMicrosoftBestFitFallback_0)); }
	inline bool get_bIsMicrosoftBestFitFallback_0() const { return ___bIsMicrosoftBestFitFallback_0; }
	inline bool* get_address_of_bIsMicrosoftBestFitFallback_0() { return &___bIsMicrosoftBestFitFallback_0; }
	inline void set_bIsMicrosoftBestFitFallback_0(bool value)
	{
		___bIsMicrosoftBestFitFallback_0 = value;
	}
};

struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4_StaticFields
{
public:
	// System.Text.EncoderFallback modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.EncoderFallback::replacementFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___replacementFallback_1;
	// System.Text.EncoderFallback modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.EncoderFallback::exceptionFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___exceptionFallback_2;
	// System.Object System.Text.EncoderFallback::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_3;

public:
	inline static int32_t get_offset_of_replacementFallback_1() { return static_cast<int32_t>(offsetof(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4_StaticFields, ___replacementFallback_1)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_replacementFallback_1() const { return ___replacementFallback_1; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_replacementFallback_1() { return &___replacementFallback_1; }
	inline void set_replacementFallback_1(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___replacementFallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___replacementFallback_1), (void*)value);
	}

	inline static int32_t get_offset_of_exceptionFallback_2() { return static_cast<int32_t>(offsetof(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4_StaticFields, ___exceptionFallback_2)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_exceptionFallback_2() const { return ___exceptionFallback_2; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_exceptionFallback_2() { return &___exceptionFallback_2; }
	inline void set_exceptionFallback_2(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___exceptionFallback_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___exceptionFallback_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_3() { return static_cast<int32_t>(offsetof(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4_StaticFields, ___s_InternalSyncObject_3)); }
	inline RuntimeObject * get_s_InternalSyncObject_3() const { return ___s_InternalSyncObject_3; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_3() { return &___s_InternalSyncObject_3; }
	inline void set_s_InternalSyncObject_3(RuntimeObject * value)
	{
		___s_InternalSyncObject_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_3), (void*)value);
	}
};


// System.Text.EncoderFallbackBuffer
struct EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0  : public RuntimeObject
{
public:
	// System.Char* System.Text.EncoderFallbackBuffer::charStart
	Il2CppChar* ___charStart_0;
	// System.Char* System.Text.EncoderFallbackBuffer::charEnd
	Il2CppChar* ___charEnd_1;
	// System.Text.EncoderNLS System.Text.EncoderFallbackBuffer::encoder
	EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712 * ___encoder_2;
	// System.Boolean System.Text.EncoderFallbackBuffer::setEncoder
	bool ___setEncoder_3;
	// System.Boolean System.Text.EncoderFallbackBuffer::bUsedEncoder
	bool ___bUsedEncoder_4;
	// System.Boolean System.Text.EncoderFallbackBuffer::bFallingBack
	bool ___bFallingBack_5;
	// System.Int32 System.Text.EncoderFallbackBuffer::iRecursionCount
	int32_t ___iRecursionCount_6;

public:
	inline static int32_t get_offset_of_charStart_0() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0, ___charStart_0)); }
	inline Il2CppChar* get_charStart_0() const { return ___charStart_0; }
	inline Il2CppChar** get_address_of_charStart_0() { return &___charStart_0; }
	inline void set_charStart_0(Il2CppChar* value)
	{
		___charStart_0 = value;
	}

	inline static int32_t get_offset_of_charEnd_1() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0, ___charEnd_1)); }
	inline Il2CppChar* get_charEnd_1() const { return ___charEnd_1; }
	inline Il2CppChar** get_address_of_charEnd_1() { return &___charEnd_1; }
	inline void set_charEnd_1(Il2CppChar* value)
	{
		___charEnd_1 = value;
	}

	inline static int32_t get_offset_of_encoder_2() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0, ___encoder_2)); }
	inline EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712 * get_encoder_2() const { return ___encoder_2; }
	inline EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712 ** get_address_of_encoder_2() { return &___encoder_2; }
	inline void set_encoder_2(EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712 * value)
	{
		___encoder_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoder_2), (void*)value);
	}

	inline static int32_t get_offset_of_setEncoder_3() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0, ___setEncoder_3)); }
	inline bool get_setEncoder_3() const { return ___setEncoder_3; }
	inline bool* get_address_of_setEncoder_3() { return &___setEncoder_3; }
	inline void set_setEncoder_3(bool value)
	{
		___setEncoder_3 = value;
	}

	inline static int32_t get_offset_of_bUsedEncoder_4() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0, ___bUsedEncoder_4)); }
	inline bool get_bUsedEncoder_4() const { return ___bUsedEncoder_4; }
	inline bool* get_address_of_bUsedEncoder_4() { return &___bUsedEncoder_4; }
	inline void set_bUsedEncoder_4(bool value)
	{
		___bUsedEncoder_4 = value;
	}

	inline static int32_t get_offset_of_bFallingBack_5() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0, ___bFallingBack_5)); }
	inline bool get_bFallingBack_5() const { return ___bFallingBack_5; }
	inline bool* get_address_of_bFallingBack_5() { return &___bFallingBack_5; }
	inline void set_bFallingBack_5(bool value)
	{
		___bFallingBack_5 = value;
	}

	inline static int32_t get_offset_of_iRecursionCount_6() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0, ___iRecursionCount_6)); }
	inline int32_t get_iRecursionCount_6() const { return ___iRecursionCount_6; }
	inline int32_t* get_address_of_iRecursionCount_6() { return &___iRecursionCount_6; }
	inline void set_iRecursionCount_6(int32_t value)
	{
		___iRecursionCount_6 = value;
	}
};


// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_10)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_13)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_14)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
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


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
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


// I18N.Common.MonoEncoding
struct MonoEncoding_tBF18AF9FA55C6A273B8B39F51D28ADE272E1B5FA  : public Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827
{
public:
	// System.Int32 I18N.Common.MonoEncoding::win_code_page
	int32_t ___win_code_page_16;

public:
	inline static int32_t get_offset_of_win_code_page_16() { return static_cast<int32_t>(offsetof(MonoEncoding_tBF18AF9FA55C6A273B8B39F51D28ADE272E1B5FA, ___win_code_page_16)); }
	inline int32_t get_win_code_page_16() const { return ___win_code_page_16; }
	inline int32_t* get_address_of_win_code_page_16() { return &___win_code_page_16; }
	inline void set_win_code_page_16(int32_t value)
	{
		___win_code_page_16 = value;
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


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512
struct __StaticArrayInitTypeSizeU3D512_tE97B4503915D4358E4B587A73FFBCC9180C44312 
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
		uint8_t __StaticArrayInitTypeSizeU3D512_tE97B4503915D4358E4B587A73FFBCC9180C44312__padding[512];
	};

public:
};


// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t5BF9241693AE1DE48403915AA18F028381B734C1  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t5BF9241693AE1DE48403915AA18F028381B734C1_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::017235096A41990D9488223C8E0D56E35B569736
	__StaticArrayInitTypeSizeU3D512_tE97B4503915D4358E4B587A73FFBCC9180C44312  ___017235096A41990D9488223C8E0D56E35B569736_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::31D76B23EDF9CE1BF17651DAC05E3D98BBEA1FC8
	__StaticArrayInitTypeSizeU3D512_tE97B4503915D4358E4B587A73FFBCC9180C44312  ___31D76B23EDF9CE1BF17651DAC05E3D98BBEA1FC8_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::33D1AC98C31DCCB9238C374D4D1386DB68A6A595
	__StaticArrayInitTypeSizeU3D512_tE97B4503915D4358E4B587A73FFBCC9180C44312  ___33D1AC98C31DCCB9238C374D4D1386DB68A6A595_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::3D24D1DCE9501F8E7DFB95BC7CA7EACB21704404
	__StaticArrayInitTypeSizeU3D512_tE97B4503915D4358E4B587A73FFBCC9180C44312  ___3D24D1DCE9501F8E7DFB95BC7CA7EACB21704404_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::C029709D232902A6A3808A15B7622DC2AEF16A24
	__StaticArrayInitTypeSizeU3D512_tE97B4503915D4358E4B587A73FFBCC9180C44312  ___C029709D232902A6A3808A15B7622DC2AEF16A24_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::E720E24EA0E8EA5F028BE4B37A7E456DB5E6AE41
	__StaticArrayInitTypeSizeU3D512_tE97B4503915D4358E4B587A73FFBCC9180C44312  ___E720E24EA0E8EA5F028BE4B37A7E456DB5E6AE41_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::FDC523733500E24FB60E5223DD9E396992267CD9
	__StaticArrayInitTypeSizeU3D512_tE97B4503915D4358E4B587A73FFBCC9180C44312  ___FDC523733500E24FB60E5223DD9E396992267CD9_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::FF5AEABB91E1A5AEC6185ADD0BCFDE4B5A440680
	__StaticArrayInitTypeSizeU3D512_tE97B4503915D4358E4B587A73FFBCC9180C44312  ___FF5AEABB91E1A5AEC6185ADD0BCFDE4B5A440680_7;

public:
	inline static int32_t get_offset_of_U3017235096A41990D9488223C8E0D56E35B569736_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t5BF9241693AE1DE48403915AA18F028381B734C1_StaticFields, ___017235096A41990D9488223C8E0D56E35B569736_0)); }
	inline __StaticArrayInitTypeSizeU3D512_tE97B4503915D4358E4B587A73FFBCC9180C44312  get_U3017235096A41990D9488223C8E0D56E35B569736_0() const { return ___017235096A41990D9488223C8E0D56E35B569736_0; }
	inline __StaticArrayInitTypeSizeU3D512_tE97B4503915D4358E4B587A73FFBCC9180C44312 * get_address_of_U3017235096A41990D9488223C8E0D56E35B569736_0() { return &___017235096A41990D9488223C8E0D56E35B569736_0; }
	inline void set_U3017235096A41990D9488223C8E0D56E35B569736_0(__StaticArrayInitTypeSizeU3D512_tE97B4503915D4358E4B587A73FFBCC9180C44312  value)
	{
		___017235096A41990D9488223C8E0D56E35B569736_0 = value;
	}

	inline static int32_t get_offset_of_U331D76B23EDF9CE1BF17651DAC05E3D98BBEA1FC8_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t5BF9241693AE1DE48403915AA18F028381B734C1_StaticFields, ___31D76B23EDF9CE1BF17651DAC05E3D98BBEA1FC8_1)); }
	inline __StaticArrayInitTypeSizeU3D512_tE97B4503915D4358E4B587A73FFBCC9180C44312  get_U331D76B23EDF9CE1BF17651DAC05E3D98BBEA1FC8_1() const { return ___31D76B23EDF9CE1BF17651DAC05E3D98BBEA1FC8_1; }
	inline __StaticArrayInitTypeSizeU3D512_tE97B4503915D4358E4B587A73FFBCC9180C44312 * get_address_of_U331D76B23EDF9CE1BF17651DAC05E3D98BBEA1FC8_1() { return &___31D76B23EDF9CE1BF17651DAC05E3D98BBEA1FC8_1; }
	inline void set_U331D76B23EDF9CE1BF17651DAC05E3D98BBEA1FC8_1(__StaticArrayInitTypeSizeU3D512_tE97B4503915D4358E4B587A73FFBCC9180C44312  value)
	{
		___31D76B23EDF9CE1BF17651DAC05E3D98BBEA1FC8_1 = value;
	}

	inline static int32_t get_offset_of_U333D1AC98C31DCCB9238C374D4D1386DB68A6A595_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t5BF9241693AE1DE48403915AA18F028381B734C1_StaticFields, ___33D1AC98C31DCCB9238C374D4D1386DB68A6A595_2)); }
	inline __StaticArrayInitTypeSizeU3D512_tE97B4503915D4358E4B587A73FFBCC9180C44312  get_U333D1AC98C31DCCB9238C374D4D1386DB68A6A595_2() const { return ___33D1AC98C31DCCB9238C374D4D1386DB68A6A595_2; }
	inline __StaticArrayInitTypeSizeU3D512_tE97B4503915D4358E4B587A73FFBCC9180C44312 * get_address_of_U333D1AC98C31DCCB9238C374D4D1386DB68A6A595_2() { return &___33D1AC98C31DCCB9238C374D4D1386DB68A6A595_2; }
	inline void set_U333D1AC98C31DCCB9238C374D4D1386DB68A6A595_2(__StaticArrayInitTypeSizeU3D512_tE97B4503915D4358E4B587A73FFBCC9180C44312  value)
	{
		___33D1AC98C31DCCB9238C374D4D1386DB68A6A595_2 = value;
	}

	inline static int32_t get_offset_of_U33D24D1DCE9501F8E7DFB95BC7CA7EACB21704404_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t5BF9241693AE1DE48403915AA18F028381B734C1_StaticFields, ___3D24D1DCE9501F8E7DFB95BC7CA7EACB21704404_3)); }
	inline __StaticArrayInitTypeSizeU3D512_tE97B4503915D4358E4B587A73FFBCC9180C44312  get_U33D24D1DCE9501F8E7DFB95BC7CA7EACB21704404_3() const { return ___3D24D1DCE9501F8E7DFB95BC7CA7EACB21704404_3; }
	inline __StaticArrayInitTypeSizeU3D512_tE97B4503915D4358E4B587A73FFBCC9180C44312 * get_address_of_U33D24D1DCE9501F8E7DFB95BC7CA7EACB21704404_3() { return &___3D24D1DCE9501F8E7DFB95BC7CA7EACB21704404_3; }
	inline void set_U33D24D1DCE9501F8E7DFB95BC7CA7EACB21704404_3(__StaticArrayInitTypeSizeU3D512_tE97B4503915D4358E4B587A73FFBCC9180C44312  value)
	{
		___3D24D1DCE9501F8E7DFB95BC7CA7EACB21704404_3 = value;
	}

	inline static int32_t get_offset_of_C029709D232902A6A3808A15B7622DC2AEF16A24_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t5BF9241693AE1DE48403915AA18F028381B734C1_StaticFields, ___C029709D232902A6A3808A15B7622DC2AEF16A24_4)); }
	inline __StaticArrayInitTypeSizeU3D512_tE97B4503915D4358E4B587A73FFBCC9180C44312  get_C029709D232902A6A3808A15B7622DC2AEF16A24_4() const { return ___C029709D232902A6A3808A15B7622DC2AEF16A24_4; }
	inline __StaticArrayInitTypeSizeU3D512_tE97B4503915D4358E4B587A73FFBCC9180C44312 * get_address_of_C029709D232902A6A3808A15B7622DC2AEF16A24_4() { return &___C029709D232902A6A3808A15B7622DC2AEF16A24_4; }
	inline void set_C029709D232902A6A3808A15B7622DC2AEF16A24_4(__StaticArrayInitTypeSizeU3D512_tE97B4503915D4358E4B587A73FFBCC9180C44312  value)
	{
		___C029709D232902A6A3808A15B7622DC2AEF16A24_4 = value;
	}

	inline static int32_t get_offset_of_E720E24EA0E8EA5F028BE4B37A7E456DB5E6AE41_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t5BF9241693AE1DE48403915AA18F028381B734C1_StaticFields, ___E720E24EA0E8EA5F028BE4B37A7E456DB5E6AE41_5)); }
	inline __StaticArrayInitTypeSizeU3D512_tE97B4503915D4358E4B587A73FFBCC9180C44312  get_E720E24EA0E8EA5F028BE4B37A7E456DB5E6AE41_5() const { return ___E720E24EA0E8EA5F028BE4B37A7E456DB5E6AE41_5; }
	inline __StaticArrayInitTypeSizeU3D512_tE97B4503915D4358E4B587A73FFBCC9180C44312 * get_address_of_E720E24EA0E8EA5F028BE4B37A7E456DB5E6AE41_5() { return &___E720E24EA0E8EA5F028BE4B37A7E456DB5E6AE41_5; }
	inline void set_E720E24EA0E8EA5F028BE4B37A7E456DB5E6AE41_5(__StaticArrayInitTypeSizeU3D512_tE97B4503915D4358E4B587A73FFBCC9180C44312  value)
	{
		___E720E24EA0E8EA5F028BE4B37A7E456DB5E6AE41_5 = value;
	}

	inline static int32_t get_offset_of_FDC523733500E24FB60E5223DD9E396992267CD9_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t5BF9241693AE1DE48403915AA18F028381B734C1_StaticFields, ___FDC523733500E24FB60E5223DD9E396992267CD9_6)); }
	inline __StaticArrayInitTypeSizeU3D512_tE97B4503915D4358E4B587A73FFBCC9180C44312  get_FDC523733500E24FB60E5223DD9E396992267CD9_6() const { return ___FDC523733500E24FB60E5223DD9E396992267CD9_6; }
	inline __StaticArrayInitTypeSizeU3D512_tE97B4503915D4358E4B587A73FFBCC9180C44312 * get_address_of_FDC523733500E24FB60E5223DD9E396992267CD9_6() { return &___FDC523733500E24FB60E5223DD9E396992267CD9_6; }
	inline void set_FDC523733500E24FB60E5223DD9E396992267CD9_6(__StaticArrayInitTypeSizeU3D512_tE97B4503915D4358E4B587A73FFBCC9180C44312  value)
	{
		___FDC523733500E24FB60E5223DD9E396992267CD9_6 = value;
	}

	inline static int32_t get_offset_of_FF5AEABB91E1A5AEC6185ADD0BCFDE4B5A440680_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t5BF9241693AE1DE48403915AA18F028381B734C1_StaticFields, ___FF5AEABB91E1A5AEC6185ADD0BCFDE4B5A440680_7)); }
	inline __StaticArrayInitTypeSizeU3D512_tE97B4503915D4358E4B587A73FFBCC9180C44312  get_FF5AEABB91E1A5AEC6185ADD0BCFDE4B5A440680_7() const { return ___FF5AEABB91E1A5AEC6185ADD0BCFDE4B5A440680_7; }
	inline __StaticArrayInitTypeSizeU3D512_tE97B4503915D4358E4B587A73FFBCC9180C44312 * get_address_of_FF5AEABB91E1A5AEC6185ADD0BCFDE4B5A440680_7() { return &___FF5AEABB91E1A5AEC6185ADD0BCFDE4B5A440680_7; }
	inline void set_FF5AEABB91E1A5AEC6185ADD0BCFDE4B5A440680_7(__StaticArrayInitTypeSizeU3D512_tE97B4503915D4358E4B587A73FFBCC9180C44312  value)
	{
		___FF5AEABB91E1A5AEC6185ADD0BCFDE4B5A440680_7 = value;
	}
};


// I18N.Common.ByteEncoding
struct ByteEncoding_t3A5A29C82549567239B7A342CC91EC5297A00412  : public MonoEncoding_tBF18AF9FA55C6A273B8B39F51D28ADE272E1B5FA
{
public:
	// System.Char[] I18N.Common.ByteEncoding::toChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___toChars_17;
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
	inline static int32_t get_offset_of_toChars_17() { return static_cast<int32_t>(offsetof(ByteEncoding_t3A5A29C82549567239B7A342CC91EC5297A00412, ___toChars_17)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_toChars_17() const { return ___toChars_17; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_toChars_17() { return &___toChars_17; }
	inline void set_toChars_17(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___toChars_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___toChars_17), (void*)value);
	}

	inline static int32_t get_offset_of_encodingName_18() { return static_cast<int32_t>(offsetof(ByteEncoding_t3A5A29C82549567239B7A342CC91EC5297A00412, ___encodingName_18)); }
	inline String_t* get_encodingName_18() const { return ___encodingName_18; }
	inline String_t** get_address_of_encodingName_18() { return &___encodingName_18; }
	inline void set_encodingName_18(String_t* value)
	{
		___encodingName_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodingName_18), (void*)value);
	}

	inline static int32_t get_offset_of_bodyName_19() { return static_cast<int32_t>(offsetof(ByteEncoding_t3A5A29C82549567239B7A342CC91EC5297A00412, ___bodyName_19)); }
	inline String_t* get_bodyName_19() const { return ___bodyName_19; }
	inline String_t** get_address_of_bodyName_19() { return &___bodyName_19; }
	inline void set_bodyName_19(String_t* value)
	{
		___bodyName_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bodyName_19), (void*)value);
	}

	inline static int32_t get_offset_of_headerName_20() { return static_cast<int32_t>(offsetof(ByteEncoding_t3A5A29C82549567239B7A342CC91EC5297A00412, ___headerName_20)); }
	inline String_t* get_headerName_20() const { return ___headerName_20; }
	inline String_t** get_address_of_headerName_20() { return &___headerName_20; }
	inline void set_headerName_20(String_t* value)
	{
		___headerName_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___headerName_20), (void*)value);
	}

	inline static int32_t get_offset_of_webName_21() { return static_cast<int32_t>(offsetof(ByteEncoding_t3A5A29C82549567239B7A342CC91EC5297A00412, ___webName_21)); }
	inline String_t* get_webName_21() const { return ___webName_21; }
	inline String_t** get_address_of_webName_21() { return &___webName_21; }
	inline void set_webName_21(String_t* value)
	{
		___webName_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___webName_21), (void*)value);
	}

	inline static int32_t get_offset_of_isBrowserDisplay_22() { return static_cast<int32_t>(offsetof(ByteEncoding_t3A5A29C82549567239B7A342CC91EC5297A00412, ___isBrowserDisplay_22)); }
	inline bool get_isBrowserDisplay_22() const { return ___isBrowserDisplay_22; }
	inline bool* get_address_of_isBrowserDisplay_22() { return &___isBrowserDisplay_22; }
	inline void set_isBrowserDisplay_22(bool value)
	{
		___isBrowserDisplay_22 = value;
	}

	inline static int32_t get_offset_of_isBrowserSave_23() { return static_cast<int32_t>(offsetof(ByteEncoding_t3A5A29C82549567239B7A342CC91EC5297A00412, ___isBrowserSave_23)); }
	inline bool get_isBrowserSave_23() const { return ___isBrowserSave_23; }
	inline bool* get_address_of_isBrowserSave_23() { return &___isBrowserSave_23; }
	inline void set_isBrowserSave_23(bool value)
	{
		___isBrowserSave_23 = value;
	}

	inline static int32_t get_offset_of_isMailNewsDisplay_24() { return static_cast<int32_t>(offsetof(ByteEncoding_t3A5A29C82549567239B7A342CC91EC5297A00412, ___isMailNewsDisplay_24)); }
	inline bool get_isMailNewsDisplay_24() const { return ___isMailNewsDisplay_24; }
	inline bool* get_address_of_isMailNewsDisplay_24() { return &___isMailNewsDisplay_24; }
	inline void set_isMailNewsDisplay_24(bool value)
	{
		___isMailNewsDisplay_24 = value;
	}

	inline static int32_t get_offset_of_isMailNewsSave_25() { return static_cast<int32_t>(offsetof(ByteEncoding_t3A5A29C82549567239B7A342CC91EC5297A00412, ___isMailNewsSave_25)); }
	inline bool get_isMailNewsSave_25() const { return ___isMailNewsSave_25; }
	inline bool* get_address_of_isMailNewsSave_25() { return &___isMailNewsSave_25; }
	inline void set_isMailNewsSave_25(bool value)
	{
		___isMailNewsSave_25 = value;
	}

	inline static int32_t get_offset_of_windowsCodePage_26() { return static_cast<int32_t>(offsetof(ByteEncoding_t3A5A29C82549567239B7A342CC91EC5297A00412, ___windowsCodePage_26)); }
	inline int32_t get_windowsCodePage_26() const { return ___windowsCodePage_26; }
	inline int32_t* get_address_of_windowsCodePage_26() { return &___windowsCodePage_26; }
	inline void set_windowsCodePage_26(int32_t value)
	{
		___windowsCodePage_26 = value;
	}
};

struct ByteEncoding_t3A5A29C82549567239B7A342CC91EC5297A00412_StaticFields
{
public:
	// System.Byte[] I18N.Common.ByteEncoding::isNormalized
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___isNormalized_27;
	// System.Byte[] I18N.Common.ByteEncoding::isNormalizedComputed
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___isNormalizedComputed_28;
	// System.Byte[] I18N.Common.ByteEncoding::normalization_bytes
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___normalization_bytes_29;

public:
	inline static int32_t get_offset_of_isNormalized_27() { return static_cast<int32_t>(offsetof(ByteEncoding_t3A5A29C82549567239B7A342CC91EC5297A00412_StaticFields, ___isNormalized_27)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_isNormalized_27() const { return ___isNormalized_27; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_isNormalized_27() { return &___isNormalized_27; }
	inline void set_isNormalized_27(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___isNormalized_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___isNormalized_27), (void*)value);
	}

	inline static int32_t get_offset_of_isNormalizedComputed_28() { return static_cast<int32_t>(offsetof(ByteEncoding_t3A5A29C82549567239B7A342CC91EC5297A00412_StaticFields, ___isNormalizedComputed_28)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_isNormalizedComputed_28() const { return ___isNormalizedComputed_28; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_isNormalizedComputed_28() { return &___isNormalizedComputed_28; }
	inline void set_isNormalizedComputed_28(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___isNormalizedComputed_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___isNormalizedComputed_28), (void*)value);
	}

	inline static int32_t get_offset_of_normalization_bytes_29() { return static_cast<int32_t>(offsetof(ByteEncoding_t3A5A29C82549567239B7A342CC91EC5297A00412_StaticFields, ___normalization_bytes_29)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_normalization_bytes_29() const { return ___normalization_bytes_29; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_normalization_bytes_29() { return &___normalization_bytes_29; }
	inline void set_normalization_bytes_29(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___normalization_bytes_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___normalization_bytes_29), (void*)value);
	}
};


// System.Exception
struct Exception_t  : public RuntimeObject
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// I18N.Other.ISCIIEncoding
struct ISCIIEncoding_tA7FBF65EC6D9E96A9961353706EC809D0C008469  : public MonoEncoding_tBF18AF9FA55C6A273B8B39F51D28ADE272E1B5FA
{
public:
	// System.Int32 I18N.Other.ISCIIEncoding::shift
	int32_t ___shift_17;
	// System.String I18N.Other.ISCIIEncoding::encodingName
	String_t* ___encodingName_18;
	// System.String I18N.Other.ISCIIEncoding::webName
	String_t* ___webName_19;

public:
	inline static int32_t get_offset_of_shift_17() { return static_cast<int32_t>(offsetof(ISCIIEncoding_tA7FBF65EC6D9E96A9961353706EC809D0C008469, ___shift_17)); }
	inline int32_t get_shift_17() const { return ___shift_17; }
	inline int32_t* get_address_of_shift_17() { return &___shift_17; }
	inline void set_shift_17(int32_t value)
	{
		___shift_17 = value;
	}

	inline static int32_t get_offset_of_encodingName_18() { return static_cast<int32_t>(offsetof(ISCIIEncoding_tA7FBF65EC6D9E96A9961353706EC809D0C008469, ___encodingName_18)); }
	inline String_t* get_encodingName_18() const { return ___encodingName_18; }
	inline String_t** get_address_of_encodingName_18() { return &___encodingName_18; }
	inline void set_encodingName_18(String_t* value)
	{
		___encodingName_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodingName_18), (void*)value);
	}

	inline static int32_t get_offset_of_webName_19() { return static_cast<int32_t>(offsetof(ISCIIEncoding_tA7FBF65EC6D9E96A9961353706EC809D0C008469, ___webName_19)); }
	inline String_t* get_webName_19() const { return ___webName_19; }
	inline String_t** get_address_of_webName_19() { return &___webName_19; }
	inline void set_webName_19(String_t* value)
	{
		___webName_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___webName_19), (void*)value);
	}
};


// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// I18N.Other.CP1251
struct CP1251_t67A880F7D677377EB305EC157DA9B70CFE33875C  : public ByteEncoding_t3A5A29C82549567239B7A342CC91EC5297A00412
{
public:

public:
};

struct CP1251_t67A880F7D677377EB305EC157DA9B70CFE33875C_StaticFields
{
public:
	// System.Char[] I18N.Other.CP1251::ToChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP1251_t67A880F7D677377EB305EC157DA9B70CFE33875C_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ToChars_30), (void*)value);
	}
};


// I18N.Other.CP1257
struct CP1257_t1AC1809FEC3703F4088D0A44FACBAEAE9FC46B31  : public ByteEncoding_t3A5A29C82549567239B7A342CC91EC5297A00412
{
public:

public:
};

struct CP1257_t1AC1809FEC3703F4088D0A44FACBAEAE9FC46B31_StaticFields
{
public:
	// System.Char[] I18N.Other.CP1257::ToChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP1257_t1AC1809FEC3703F4088D0A44FACBAEAE9FC46B31_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ToChars_30), (void*)value);
	}
};


// I18N.Other.CP1258
struct CP1258_t93AD832AF1FFE06D53F4258384FB82C6D423CAD9  : public ByteEncoding_t3A5A29C82549567239B7A342CC91EC5297A00412
{
public:

public:
};

struct CP1258_t93AD832AF1FFE06D53F4258384FB82C6D423CAD9_StaticFields
{
public:
	// System.Char[] I18N.Other.CP1258::ToChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP1258_t93AD832AF1FFE06D53F4258384FB82C6D423CAD9_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ToChars_30), (void*)value);
	}
};


// I18N.Other.CP20866
struct CP20866_tB32F65B3151CE320A085A67533B92BA74BB716A5  : public ByteEncoding_t3A5A29C82549567239B7A342CC91EC5297A00412
{
public:

public:
};

struct CP20866_tB32F65B3151CE320A085A67533B92BA74BB716A5_StaticFields
{
public:
	// System.Char[] I18N.Other.CP20866::ToChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP20866_tB32F65B3151CE320A085A67533B92BA74BB716A5_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ToChars_30), (void*)value);
	}
};


// I18N.Other.CP21866
struct CP21866_t3C1E45BEF3F191BEF75E920F10395570AD55077C  : public ByteEncoding_t3A5A29C82549567239B7A342CC91EC5297A00412
{
public:

public:
};

struct CP21866_t3C1E45BEF3F191BEF75E920F10395570AD55077C_StaticFields
{
public:
	// System.Char[] I18N.Other.CP21866::ToChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP21866_t3C1E45BEF3F191BEF75E920F10395570AD55077C_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ToChars_30), (void*)value);
	}
};


// I18N.Other.CP28594
struct CP28594_t150821C2495D3DE51FFD20C2EA36430429F32FC0  : public ByteEncoding_t3A5A29C82549567239B7A342CC91EC5297A00412
{
public:

public:
};

struct CP28594_t150821C2495D3DE51FFD20C2EA36430429F32FC0_StaticFields
{
public:
	// System.Char[] I18N.Other.CP28594::ToChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP28594_t150821C2495D3DE51FFD20C2EA36430429F32FC0_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ToChars_30), (void*)value);
	}
};


// I18N.Other.CP28595
struct CP28595_tD90E4A4C7815C4413B05E145B01A4C021194C83E  : public ByteEncoding_t3A5A29C82549567239B7A342CC91EC5297A00412
{
public:

public:
};

struct CP28595_tD90E4A4C7815C4413B05E145B01A4C021194C83E_StaticFields
{
public:
	// System.Char[] I18N.Other.CP28595::ToChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP28595_tD90E4A4C7815C4413B05E145B01A4C021194C83E_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ToChars_30), (void*)value);
	}
};


// I18N.Other.CP57002
struct CP57002_tB89DB24B3DEE8A9C1F5A680E5D93F73C7D18311E  : public ISCIIEncoding_tA7FBF65EC6D9E96A9961353706EC809D0C008469
{
public:

public:
};


// I18N.Other.CP57003
struct CP57003_t8E07EDBCBB10982CD462645CD671C39C2DEA8B6A  : public ISCIIEncoding_tA7FBF65EC6D9E96A9961353706EC809D0C008469
{
public:

public:
};


// I18N.Other.CP57004
struct CP57004_t5F950E54FE304C528491A0AF293C4BC1276225F3  : public ISCIIEncoding_tA7FBF65EC6D9E96A9961353706EC809D0C008469
{
public:

public:
};


// I18N.Other.CP57005
struct CP57005_tB28BDBF5B09DF78382DC11B2923F8D5CE9AB947B  : public ISCIIEncoding_tA7FBF65EC6D9E96A9961353706EC809D0C008469
{
public:

public:
};


// I18N.Other.CP57006
struct CP57006_tEFF51C94DEE95B3405D7D465DCCB9148792CE420  : public ISCIIEncoding_tA7FBF65EC6D9E96A9961353706EC809D0C008469
{
public:

public:
};


// I18N.Other.CP57007
struct CP57007_t9639DF280CFC1244C6397DE41C1902772633D135  : public ISCIIEncoding_tA7FBF65EC6D9E96A9961353706EC809D0C008469
{
public:

public:
};


// I18N.Other.CP57008
struct CP57008_t37F92F2B79A45E25F73C2814AC5DA8655A061CC7  : public ISCIIEncoding_tA7FBF65EC6D9E96A9961353706EC809D0C008469
{
public:

public:
};


// I18N.Other.CP57009
struct CP57009_t90A7DBEF0693CF1D60DE8A6A12DAE11C86BEDCC6  : public ISCIIEncoding_tA7FBF65EC6D9E96A9961353706EC809D0C008469
{
public:

public:
};


// I18N.Other.CP57010
struct CP57010_t8D1B9539938953F8CE274962782579923B6331DE  : public ISCIIEncoding_tA7FBF65EC6D9E96A9961353706EC809D0C008469
{
public:

public:
};


// I18N.Other.CP57011
struct CP57011_t63699D0C1E030F8F9D031688391CD10EF60C5246  : public ISCIIEncoding_tA7FBF65EC6D9E96A9961353706EC809D0C008469
{
public:

public:
};


// I18N.Other.CP874
struct CP874_tEBC07123D6653EC1BB8C68CC127EB4858A473E75  : public ByteEncoding_t3A5A29C82549567239B7A342CC91EC5297A00412
{
public:

public:
};

struct CP874_tEBC07123D6653EC1BB8C68CC127EB4858A473E75_StaticFields
{
public:
	// System.Char[] I18N.Other.CP874::ToChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP874_tEBC07123D6653EC1BB8C68CC127EB4858A473E75_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ToChars_30), (void*)value);
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// I18N.Other.ENCiso_8859_4
struct ENCiso_8859_4_t559BC040CC738EF8FF65C3C4B556C44CF051B16B  : public CP28594_t150821C2495D3DE51FFD20C2EA36430429F32FC0
{
public:

public:
};


// I18N.Other.ENCiso_8859_5
struct ENCiso_8859_5_tD09756D4E7144182DD53126624D463E1BBD64831  : public CP28595_tD90E4A4C7815C4413B05E145B01A4C021194C83E
{
public:

public:
};


// I18N.Other.ENCkoi8_r
struct ENCkoi8_r_tBEEB1D5914A3E48147D18D5AE9EB51B006FA19F5  : public CP20866_tB32F65B3151CE320A085A67533B92BA74BB716A5
{
public:

public:
};


// I18N.Other.ENCkoi8_u
struct ENCkoi8_u_tEA78593A5219A7ACC190218670EBF895B59AE065  : public CP21866_t3C1E45BEF3F191BEF75E920F10395570AD55077C
{
public:

public:
};


// I18N.Other.ENCwindows_1251
struct ENCwindows_1251_tEF42F70A0E661A6186652A3530D58B4CBEEEC135  : public CP1251_t67A880F7D677377EB305EC157DA9B70CFE33875C
{
public:

public:
};


// I18N.Other.ENCwindows_1257
struct ENCwindows_1257_t1BA41538D487610EF5E83FB6AB4723E58D9FCE4A  : public CP1257_t1AC1809FEC3703F4088D0A44FACBAEAE9FC46B31
{
public:

public:
};


// I18N.Other.ENCwindows_1258
struct ENCwindows_1258_tBFC531C5824E753DEC64C8FE7041A1D818C4EE13  : public CP1258_t93AD832AF1FFE06D53F4258384FB82C6D423CAD9
{
public:

public:
};


// I18N.Other.ENCwindows_874
struct ENCwindows_874_tA9FD4615FFB031ECD38ABB8E4C2BB92E9B3AFFBB  : public CP874_tEBC07123D6653EC1BB8C68CC127EB4858A473E75
{
public:

public:
};


// I18N.Other.ENCx_iscii_as
struct ENCx_iscii_as_t93958FB92B274E760D0F7D98582E730B93E81829  : public CP57006_tEFF51C94DEE95B3405D7D465DCCB9148792CE420
{
public:

public:
};


// I18N.Other.ENCx_iscii_be
struct ENCx_iscii_be_t29B88C89439CEEB90989C85D39B98A222C704153  : public CP57003_t8E07EDBCBB10982CD462645CD671C39C2DEA8B6A
{
public:

public:
};


// I18N.Other.ENCx_iscii_de
struct ENCx_iscii_de_t48D57AA289C9B2D591B82A5A5D750EE1D18D64A2  : public CP57002_tB89DB24B3DEE8A9C1F5A680E5D93F73C7D18311E
{
public:

public:
};


// I18N.Other.ENCx_iscii_gu
struct ENCx_iscii_gu_t705C3E5067C72B47482FC1C483F23786B788C1CA  : public CP57010_t8D1B9539938953F8CE274962782579923B6331DE
{
public:

public:
};


// I18N.Other.ENCx_iscii_ka
struct ENCx_iscii_ka_tC09693F79B977597ED98A18CE627B68B1D36D650  : public CP57008_t37F92F2B79A45E25F73C2814AC5DA8655A061CC7
{
public:

public:
};


// I18N.Other.ENCx_iscii_ma
struct ENCx_iscii_ma_t62A8777E5F6518E8D877C10934E9F9A736CB88D7  : public CP57009_t90A7DBEF0693CF1D60DE8A6A12DAE11C86BEDCC6
{
public:

public:
};


// I18N.Other.ENCx_iscii_or
struct ENCx_iscii_or_t043A951D05D2FE0714F2EB113F5606707E2194A0  : public CP57007_t9639DF280CFC1244C6397DE41C1902772633D135
{
public:

public:
};


// I18N.Other.ENCx_iscii_pa
struct ENCx_iscii_pa_tEC0DADBF7B1316C4C64B3D4762E753406020D9C0  : public CP57011_t63699D0C1E030F8F9D031688391CD10EF60C5246
{
public:

public:
};


// I18N.Other.ENCx_iscii_ta
struct ENCx_iscii_ta_t57FBB98D2E7E96219A53799D450B1135002FFE5F  : public CP57004_t5F950E54FE304C528491A0AF293C4BC1276225F3
{
public:

public:
};


// I18N.Other.ENCx_iscii_te
struct ENCx_iscii_te_tB281DFCCF3DB63F017287D9B496C50545610EEB7  : public CP57005_tB28BDBF5B09DF78382DC11B2923F8D5CE9AB947B
{
public:

public:
};


// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
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
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
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



// System.Void I18N.Common.ByteEncoding::.ctor(System.Int32,System.Char[],System.String,System.String,System.String,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteEncoding__ctor_m38C66F0BDFF6CDAF86DA35A4771938B1DA64F2B5 (ByteEncoding_t3A5A29C82549567239B7A342CC91EC5297A00412 * __this, int32_t ___codePage0, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___toChars1, String_t* ___encodingName2, String_t* ___bodyName3, String_t* ___headerName4, String_t* ___webName5, bool ___isBrowserDisplay6, bool ___isBrowserSave7, bool ___isMailNewsDisplay8, bool ___isMailNewsSave9, int32_t ___windowsCodePage10, const RuntimeMethod* method);
// System.Text.EncoderFallback System.Text.Encoding::get_EncoderFallback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * Encoding_get_EncoderFallback_m8DF6B8EC2F7AA69AF9129C5334D1FAFE13081152_inline (Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * __this, const RuntimeMethod* method);
// System.Int32 System.Runtime.CompilerServices.RuntimeHelpers::get_OffsetToStringData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuntimeHelpers_get_OffsetToStringData_mEB8E6EAEBAFAB7CD7F7A915B3081785AABB9FC42 (const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void I18N.Common.MonoEncoding::HandleFallback(System.Text.EncoderFallbackBuffer&,System.Char*,System.Int32&,System.Int32&,System.Byte*,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoEncoding_HandleFallback_m5BBB9A58548D7F4FC29EB94C8033AF716387D94F (MonoEncoding_tBF18AF9FA55C6A273B8B39F51D28ADE272E1B5FA * __this, EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 ** ___buffer0, Il2CppChar* ___chars1, int32_t* ___charIndex2, int32_t* ___charCount3, uint8_t* ___bytes4, int32_t* ___byteIndex5, int32_t* ___byteCount6, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F (RuntimeArray * ___array0, RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  ___fldHandle1, const RuntimeMethod* method);
// System.Void I18N.Other.ISCIIEncoding::.ctor(System.Int32,System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISCIIEncoding__ctor_mC59CEC87F260BE78FE94855DD0E1ECF92085C1C9 (ISCIIEncoding_tA7FBF65EC6D9E96A9961353706EC809D0C008469 * __this, int32_t ___codePage0, int32_t ___shift1, String_t* ___encodingName2, String_t* ___webName3, const RuntimeMethod* method);
// System.Void I18N.Other.CP28594::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP28594__ctor_m3A2325E91C8AC7590BDA9C504DFB0D4C20A9E1B0 (CP28594_t150821C2495D3DE51FFD20C2EA36430429F32FC0 * __this, const RuntimeMethod* method);
// System.Void I18N.Other.CP28595::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP28595__ctor_m2AE41D7DAE43E114C063A65C8CA0AD8A1D7B2CBA (CP28595_tD90E4A4C7815C4413B05E145B01A4C021194C83E * __this, const RuntimeMethod* method);
// System.Void I18N.Other.CP20866::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP20866__ctor_m3519F1C4A5B086E6C0C4C8E5AF86C77105525B06 (CP20866_tB32F65B3151CE320A085A67533B92BA74BB716A5 * __this, const RuntimeMethod* method);
// System.Void I18N.Other.CP21866::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP21866__ctor_m28ED8DD9C1F0881434328237D8C81530E82332D8 (CP21866_t3C1E45BEF3F191BEF75E920F10395570AD55077C * __this, const RuntimeMethod* method);
// System.Void I18N.Other.CP1251::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP1251__ctor_mC0BD0D8EA2048F029690FC462F90C2A976B25827 (CP1251_t67A880F7D677377EB305EC157DA9B70CFE33875C * __this, const RuntimeMethod* method);
// System.Void I18N.Other.CP1257::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP1257__ctor_m629FD8A816D62E578DF0019192B2BEBD0C6FA108 (CP1257_t1AC1809FEC3703F4088D0A44FACBAEAE9FC46B31 * __this, const RuntimeMethod* method);
// System.Void I18N.Other.CP1258::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP1258__ctor_m20ED8B05E5901F1A325A205A9CF3D9B2E912DE5E (CP1258_t93AD832AF1FFE06D53F4258384FB82C6D423CAD9 * __this, const RuntimeMethod* method);
// System.Void I18N.Other.CP874::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP874__ctor_mE462C524438011F295282085C2F1EEE7B5A6E7D4 (CP874_tEBC07123D6653EC1BB8C68CC127EB4858A473E75 * __this, const RuntimeMethod* method);
// System.Void I18N.Other.CP57006::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP57006__ctor_m9A914B77B67AEAA510B873391D63D67F1DB9E2F9 (CP57006_tEFF51C94DEE95B3405D7D465DCCB9148792CE420 * __this, const RuntimeMethod* method);
// System.Void I18N.Other.CP57003::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP57003__ctor_m19D12C51660CA8072D45E2A4650F330AB01B9BF3 (CP57003_t8E07EDBCBB10982CD462645CD671C39C2DEA8B6A * __this, const RuntimeMethod* method);
// System.Void I18N.Other.CP57002::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP57002__ctor_mC7C1FEA185F3734EC1687AB3CDC5AE44C0F92218 (CP57002_tB89DB24B3DEE8A9C1F5A680E5D93F73C7D18311E * __this, const RuntimeMethod* method);
// System.Void I18N.Other.CP57010::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP57010__ctor_m41A9CFC8BC8FD2D93CA4B11D06B7F1F87833D103 (CP57010_t8D1B9539938953F8CE274962782579923B6331DE * __this, const RuntimeMethod* method);
// System.Void I18N.Other.CP57008::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP57008__ctor_m5BCE1C7EA18A0ECE2077A8AA0502166132C14631 (CP57008_t37F92F2B79A45E25F73C2814AC5DA8655A061CC7 * __this, const RuntimeMethod* method);
// System.Void I18N.Other.CP57009::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP57009__ctor_mE245557DDA28B3A3A15FF448BEB84E3EF1F8F847 (CP57009_t90A7DBEF0693CF1D60DE8A6A12DAE11C86BEDCC6 * __this, const RuntimeMethod* method);
// System.Void I18N.Other.CP57007::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP57007__ctor_m882DB4D7DA20C1AC51C5A6434A5544B8E071A799 (CP57007_t9639DF280CFC1244C6397DE41C1902772633D135 * __this, const RuntimeMethod* method);
// System.Void I18N.Other.CP57011::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP57011__ctor_m8F52A3DA367AA0556B03784FEA67AC5E8A76EB70 (CP57011_t63699D0C1E030F8F9D031688391CD10EF60C5246 * __this, const RuntimeMethod* method);
// System.Void I18N.Other.CP57004::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP57004__ctor_m7C55EAD72327E99E46E5919C62CF1988D7EFAC15 (CP57004_t5F950E54FE304C528491A0AF293C4BC1276225F3 * __this, const RuntimeMethod* method);
// System.Void I18N.Other.CP57005::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP57005__ctor_m2FC67AD57234EB5216B2710B7BC02B79AC47C36C (CP57005_tB28BDBF5B09DF78382DC11B2923F8D5CE9AB947B * __this, const RuntimeMethod* method);
// System.Void I18N.Common.MonoEncoding::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoEncoding__ctor_m2E7B79595A50ACD69079284AFF115A0E69BDE26C (MonoEncoding_tBF18AF9FA55C6A273B8B39F51D28ADE272E1B5FA * __this, int32_t ___codePage0, const RuntimeMethod* method);
// System.String I18N.Common.Strings::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Strings_GetString_m84B4205ADF9BD4AB96836BE778BE485A0DDCF9A1 (String_t* ___tag0, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005 (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
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
// System.Void I18N.Other.CP1251::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP1251__ctor_mC0BD0D8EA2048F029690FC462F90C2A976B25827 (CP1251_t67A880F7D677377EB305EC157DA9B70CFE33875C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CP1251_t67A880F7D677377EB305EC157DA9B70CFE33875C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0F002EC5D33324D93372573BC03DAC58718DA12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE846812E6D771EF69EB2839DD01F821B22484DD3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB7EF1973CDC295B7B08FE6D82B9ECDAD1106AF2);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CP1251_t67A880F7D677377EB305EC157DA9B70CFE33875C_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = ((CP1251_t67A880F7D677377EB305EC157DA9B70CFE33875C_StaticFields*)il2cpp_codegen_static_fields_for(CP1251_t67A880F7D677377EB305EC157DA9B70CFE33875C_il2cpp_TypeInfo_var))->get_ToChars_30();
		ByteEncoding__ctor_m38C66F0BDFF6CDAF86DA35A4771938B1DA64F2B5(__this, ((int32_t)1251), L_0, _stringLiteralC0F002EC5D33324D93372573BC03DAC58718DA12, _stringLiteralE846812E6D771EF69EB2839DD01F821B22484DD3, _stringLiteralEB7EF1973CDC295B7B08FE6D82B9ECDAD1106AF2, _stringLiteralEB7EF1973CDC295B7B08FE6D82B9ECDAD1106AF2, (bool)1, (bool)1, (bool)1, (bool)1, ((int32_t)1251), /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 I18N.Other.CP1251::GetByteCountImpl(System.Char*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP1251_GetByteCountImpl_mBF96CF5BFA0769B1F4433F8ABFFB46C6EB34087C (CP1251_t67A880F7D677377EB305EC157DA9B70CFE33875C * __this, Il2CppChar* ___chars0, int32_t ___count1, const RuntimeMethod* method)
{
	{
		EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * L_0;
		L_0 = Encoding_get_EncoderFallback_m8DF6B8EC2F7AA69AF9129C5334D1FAFE13081152_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Il2CppChar* L_1 = ___chars0;
		int32_t L_2 = ___count1;
		int32_t L_3;
		L_3 = VirtFuncInvoker4< int32_t, Il2CppChar*, int32_t, uint8_t*, int32_t >::Invoke(48 /* System.Int32 I18N.Common.MonoEncoding::GetBytesImpl(System.Char*,System.Int32,System.Byte*,System.Int32) */, __this, (Il2CppChar*)(Il2CppChar*)L_1, L_2, (uint8_t*)(uint8_t*)((uintptr_t)0), 0);
		return L_3;
	}

IL_0014:
	{
		int32_t L_4 = ___count1;
		return L_4;
	}
}
// System.Int32 I18N.Other.CP1251::GetByteCount(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP1251_GetByteCount_mE9894DEDACEA3A0AFEC939024450FC5251D8CD71 (CP1251_t67A880F7D677377EB305EC157DA9B70CFE33875C * __this, String_t* ___s0, const RuntimeMethod* method)
{
	Il2CppChar* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * L_0;
		L_0 = Encoding_get_EncoderFallback_m8DF6B8EC2F7AA69AF9129C5334D1FAFE13081152_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_1 = ___s0;
		V_1 = L_1;
		String_t* L_2 = V_1;
		V_0 = (Il2CppChar*)((uintptr_t)L_2);
		Il2CppChar* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		Il2CppChar* L_4 = V_0;
		int32_t L_5;
		L_5 = RuntimeHelpers_get_OffsetToStringData_mEB8E6EAEBAFAB7CD7F7A915B3081785AABB9FC42(/*hidden argument*/NULL);
		V_0 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_4, (int32_t)L_5));
	}

IL_0018:
	{
		Il2CppChar* L_6 = V_0;
		String_t* L_7 = ___s0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_7, /*hidden argument*/NULL);
		int32_t L_9;
		L_9 = VirtFuncInvoker4< int32_t, Il2CppChar*, int32_t, uint8_t*, int32_t >::Invoke(48 /* System.Int32 I18N.Common.MonoEncoding::GetBytesImpl(System.Char*,System.Int32,System.Byte*,System.Int32) */, __this, (Il2CppChar*)(Il2CppChar*)L_6, L_8, (uint8_t*)(uint8_t*)((uintptr_t)0), 0);
		return L_9;
	}

IL_0029:
	{
		String_t* L_10 = ___s0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.Void I18N.Other.CP1251::ToBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP1251_ToBytes_mC0ED6C83CC79C36FEE2783B98A6AE87CE40AA871 (CP1251_t67A880F7D677377EB305EC157DA9B70CFE33875C * __this, Il2CppChar* ___chars0, int32_t ___charCount1, uint8_t* ___bytes2, int32_t ___byteCount3, const RuntimeMethod* method)
{
	{
		uint8_t* L_0 = ___bytes2;
		if ((!(((uintptr_t)L_0) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_0010;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral77B615B8ED1ABB8FC1395D85A5AE524A9789D947)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CP1251_ToBytes_mC0ED6C83CC79C36FEE2783B98A6AE87CE40AA871_RuntimeMethod_var)));
	}

IL_0010:
	{
		Il2CppChar* L_2 = ___chars0;
		int32_t L_3 = ___charCount1;
		uint8_t* L_4 = ___bytes2;
		int32_t L_5 = ___byteCount3;
		int32_t L_6;
		L_6 = VirtFuncInvoker4< int32_t, Il2CppChar*, int32_t, uint8_t*, int32_t >::Invoke(48 /* System.Int32 I18N.Common.MonoEncoding::GetBytesImpl(System.Char*,System.Int32,System.Byte*,System.Int32) */, __this, (Il2CppChar*)(Il2CppChar*)L_2, L_3, (uint8_t*)(uint8_t*)L_4, L_5);
		return;
	}
}
// System.Int32 I18N.Other.CP1251::GetBytesImpl(System.Char*,System.Int32,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP1251_GetBytesImpl_m74DD4A0E0E9E069CE46805390C33EC0C63124D9A (CP1251_t67A880F7D677377EB305EC157DA9B70CFE33875C * __this, Il2CppChar* ___chars0, int32_t ___charCount1, uint8_t* ___bytes2, int32_t ___byteCount3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 * V_3 = NULL;
	{
		V_1 = 0;
		V_2 = 0;
		V_3 = (EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 *)NULL;
		goto IL_0619;
	}

IL_000b:
	{
		Il2CppChar* L_0 = ___chars0;
		int32_t L_1 = V_1;
		int32_t L_2 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_1), (int32_t)2)))));
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)((int32_t)128))))
		{
			goto IL_05fb;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)8240))))
		{
			goto IL_037c;
		}
	}
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) > ((int32_t)((int32_t)187))))
		{
			goto IL_00c0;
		}
	}
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)152))))
		{
			goto IL_05fb;
		}
	}
	{
		int32_t L_7 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)((int32_t)160))))
		{
			case 0:
			{
				goto IL_05fb;
			}
			case 1:
			{
				goto IL_05c4;
			}
			case 2:
			{
				goto IL_05c4;
			}
			case 3:
			{
				goto IL_05c4;
			}
			case 4:
			{
				goto IL_05fb;
			}
			case 5:
			{
				goto IL_05c4;
			}
			case 6:
			{
				goto IL_05fb;
			}
			case 7:
			{
				goto IL_05fb;
			}
			case 8:
			{
				goto IL_05c4;
			}
			case 9:
			{
				goto IL_05fb;
			}
			case 10:
			{
				goto IL_05c4;
			}
			case 11:
			{
				goto IL_05fb;
			}
			case 12:
			{
				goto IL_05fb;
			}
			case 13:
			{
				goto IL_05fb;
			}
			case 14:
			{
				goto IL_05fb;
			}
			case 15:
			{
				goto IL_05c4;
			}
			case 16:
			{
				goto IL_05fb;
			}
			case 17:
			{
				goto IL_05fb;
			}
			case 18:
			{
				goto IL_05c4;
			}
			case 19:
			{
				goto IL_05c4;
			}
			case 20:
			{
				goto IL_05c4;
			}
			case 21:
			{
				goto IL_05fb;
			}
			case 22:
			{
				goto IL_05fb;
			}
			case 23:
			{
				goto IL_05fb;
			}
			case 24:
			{
				goto IL_05c4;
			}
			case 25:
			{
				goto IL_05c4;
			}
			case 26:
			{
				goto IL_05c4;
			}
			case 27:
			{
				goto IL_05fb;
			}
		}
	}
	{
		goto IL_05c4;
	}

IL_00c0:
	{
		int32_t L_8 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)((int32_t)1025))))
		{
			case 0:
			{
				goto IL_03c5;
			}
			case 1:
			{
				goto IL_03d0;
			}
			case 2:
			{
				goto IL_03db;
			}
			case 3:
			{
				goto IL_03e6;
			}
			case 4:
			{
				goto IL_03f1;
			}
			case 5:
			{
				goto IL_03fc;
			}
			case 6:
			{
				goto IL_0407;
			}
			case 7:
			{
				goto IL_0412;
			}
			case 8:
			{
				goto IL_041d;
			}
			case 9:
			{
				goto IL_0428;
			}
			case 10:
			{
				goto IL_0433;
			}
			case 11:
			{
				goto IL_043e;
			}
			case 12:
			{
				goto IL_05c4;
			}
			case 13:
			{
				goto IL_0449;
			}
			case 14:
			{
				goto IL_0454;
			}
			case 15:
			{
				goto IL_045f;
			}
			case 16:
			{
				goto IL_045f;
			}
			case 17:
			{
				goto IL_045f;
			}
			case 18:
			{
				goto IL_045f;
			}
			case 19:
			{
				goto IL_045f;
			}
			case 20:
			{
				goto IL_045f;
			}
			case 21:
			{
				goto IL_045f;
			}
			case 22:
			{
				goto IL_045f;
			}
			case 23:
			{
				goto IL_045f;
			}
			case 24:
			{
				goto IL_045f;
			}
			case 25:
			{
				goto IL_045f;
			}
			case 26:
			{
				goto IL_045f;
			}
			case 27:
			{
				goto IL_045f;
			}
			case 28:
			{
				goto IL_045f;
			}
			case 29:
			{
				goto IL_045f;
			}
			case 30:
			{
				goto IL_045f;
			}
			case 31:
			{
				goto IL_045f;
			}
			case 32:
			{
				goto IL_045f;
			}
			case 33:
			{
				goto IL_045f;
			}
			case 34:
			{
				goto IL_045f;
			}
			case 35:
			{
				goto IL_045f;
			}
			case 36:
			{
				goto IL_045f;
			}
			case 37:
			{
				goto IL_045f;
			}
			case 38:
			{
				goto IL_045f;
			}
			case 39:
			{
				goto IL_045f;
			}
			case 40:
			{
				goto IL_045f;
			}
			case 41:
			{
				goto IL_045f;
			}
			case 42:
			{
				goto IL_045f;
			}
			case 43:
			{
				goto IL_045f;
			}
			case 44:
			{
				goto IL_045f;
			}
			case 45:
			{
				goto IL_045f;
			}
			case 46:
			{
				goto IL_045f;
			}
			case 47:
			{
				goto IL_045f;
			}
			case 48:
			{
				goto IL_045f;
			}
			case 49:
			{
				goto IL_045f;
			}
			case 50:
			{
				goto IL_045f;
			}
			case 51:
			{
				goto IL_045f;
			}
			case 52:
			{
				goto IL_045f;
			}
			case 53:
			{
				goto IL_045f;
			}
			case 54:
			{
				goto IL_045f;
			}
			case 55:
			{
				goto IL_045f;
			}
			case 56:
			{
				goto IL_045f;
			}
			case 57:
			{
				goto IL_045f;
			}
			case 58:
			{
				goto IL_045f;
			}
			case 59:
			{
				goto IL_045f;
			}
			case 60:
			{
				goto IL_045f;
			}
			case 61:
			{
				goto IL_045f;
			}
			case 62:
			{
				goto IL_045f;
			}
			case 63:
			{
				goto IL_045f;
			}
			case 64:
			{
				goto IL_045f;
			}
			case 65:
			{
				goto IL_045f;
			}
			case 66:
			{
				goto IL_045f;
			}
			case 67:
			{
				goto IL_045f;
			}
			case 68:
			{
				goto IL_045f;
			}
			case 69:
			{
				goto IL_045f;
			}
			case 70:
			{
				goto IL_045f;
			}
			case 71:
			{
				goto IL_045f;
			}
			case 72:
			{
				goto IL_045f;
			}
			case 73:
			{
				goto IL_045f;
			}
			case 74:
			{
				goto IL_045f;
			}
			case 75:
			{
				goto IL_045f;
			}
			case 76:
			{
				goto IL_045f;
			}
			case 77:
			{
				goto IL_045f;
			}
			case 78:
			{
				goto IL_045f;
			}
			case 79:
			{
				goto IL_05c4;
			}
			case 80:
			{
				goto IL_046c;
			}
			case 81:
			{
				goto IL_0477;
			}
			case 82:
			{
				goto IL_0482;
			}
			case 83:
			{
				goto IL_048d;
			}
			case 84:
			{
				goto IL_0498;
			}
			case 85:
			{
				goto IL_04a3;
			}
			case 86:
			{
				goto IL_04ae;
			}
			case 87:
			{
				goto IL_04b9;
			}
			case 88:
			{
				goto IL_04c4;
			}
			case 89:
			{
				goto IL_04cf;
			}
			case 90:
			{
				goto IL_04da;
			}
			case 91:
			{
				goto IL_04e5;
			}
			case 92:
			{
				goto IL_05c4;
			}
			case 93:
			{
				goto IL_04f0;
			}
			case 94:
			{
				goto IL_04fb;
			}
			case 95:
			{
				goto IL_05c4;
			}
			case 96:
			{
				goto IL_05c4;
			}
			case 97:
			{
				goto IL_05c4;
			}
			case 98:
			{
				goto IL_05c4;
			}
			case 99:
			{
				goto IL_05c4;
			}
			case 100:
			{
				goto IL_05c4;
			}
			case 101:
			{
				goto IL_05c4;
			}
			case 102:
			{
				goto IL_05c4;
			}
			case 103:
			{
				goto IL_05c4;
			}
			case 104:
			{
				goto IL_05c4;
			}
			case 105:
			{
				goto IL_05c4;
			}
			case 106:
			{
				goto IL_05c4;
			}
			case 107:
			{
				goto IL_05c4;
			}
			case 108:
			{
				goto IL_05c4;
			}
			case 109:
			{
				goto IL_05c4;
			}
			case 110:
			{
				goto IL_05c4;
			}
			case 111:
			{
				goto IL_05c4;
			}
			case 112:
			{
				goto IL_05c4;
			}
			case 113:
			{
				goto IL_05c4;
			}
			case 114:
			{
				goto IL_05c4;
			}
			case 115:
			{
				goto IL_05c4;
			}
			case 116:
			{
				goto IL_05c4;
			}
			case 117:
			{
				goto IL_05c4;
			}
			case 118:
			{
				goto IL_05c4;
			}
			case 119:
			{
				goto IL_05c4;
			}
			case 120:
			{
				goto IL_05c4;
			}
			case 121:
			{
				goto IL_05c4;
			}
			case 122:
			{
				goto IL_05c4;
			}
			case 123:
			{
				goto IL_05c4;
			}
			case 124:
			{
				goto IL_05c4;
			}
			case 125:
			{
				goto IL_05c4;
			}
			case 126:
			{
				goto IL_05c4;
			}
			case 127:
			{
				goto IL_05c4;
			}
			case 128:
			{
				goto IL_05c4;
			}
			case 129:
			{
				goto IL_05c4;
			}
			case 130:
			{
				goto IL_05c4;
			}
			case 131:
			{
				goto IL_05c4;
			}
			case 132:
			{
				goto IL_05c4;
			}
			case 133:
			{
				goto IL_05c4;
			}
			case 134:
			{
				goto IL_05c4;
			}
			case 135:
			{
				goto IL_05c4;
			}
			case 136:
			{
				goto IL_05c4;
			}
			case 137:
			{
				goto IL_05c4;
			}
			case 138:
			{
				goto IL_05c4;
			}
			case 139:
			{
				goto IL_05c4;
			}
			case 140:
			{
				goto IL_05c4;
			}
			case 141:
			{
				goto IL_05c4;
			}
			case 142:
			{
				goto IL_05c4;
			}
			case 143:
			{
				goto IL_0506;
			}
			case 144:
			{
				goto IL_0511;
			}
		}
	}
	{
		int32_t L_9 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)((int32_t)8211))))
		{
			case 0:
			{
				goto IL_051c;
			}
			case 1:
			{
				goto IL_0527;
			}
			case 2:
			{
				goto IL_05c4;
			}
			case 3:
			{
				goto IL_05c4;
			}
			case 4:
			{
				goto IL_05c4;
			}
			case 5:
			{
				goto IL_0532;
			}
			case 6:
			{
				goto IL_053d;
			}
			case 7:
			{
				goto IL_0548;
			}
			case 8:
			{
				goto IL_05c4;
			}
			case 9:
			{
				goto IL_0553;
			}
			case 10:
			{
				goto IL_055e;
			}
			case 11:
			{
				goto IL_0569;
			}
			case 12:
			{
				goto IL_05c4;
			}
			case 13:
			{
				goto IL_0574;
			}
			case 14:
			{
				goto IL_057c;
			}
			case 15:
			{
				goto IL_0584;
			}
			case 16:
			{
				goto IL_05c4;
			}
			case 17:
			{
				goto IL_05c4;
			}
			case 18:
			{
				goto IL_05c4;
			}
			case 19:
			{
				goto IL_058c;
			}
		}
	}
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)8240))))
		{
			goto IL_0594;
		}
	}
	{
		goto IL_05c4;
	}

IL_037c:
	{
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) > ((int32_t)((int32_t)8250))))
		{
			goto IL_039f;
		}
	}
	{
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)8249))))
		{
			goto IL_059c;
		}
	}
	{
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)8250))))
		{
			goto IL_05a4;
		}
	}
	{
		goto IL_05c4;
	}

IL_039f:
	{
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)8364))))
		{
			goto IL_05ac;
		}
	}
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)8470))))
		{
			goto IL_05b4;
		}
	}
	{
		int32_t L_16 = V_0;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)8482))))
		{
			goto IL_05bc;
		}
	}
	{
		goto IL_05c4;
	}

IL_03c5:
	{
		V_0 = ((int32_t)168);
		goto IL_05fb;
	}

IL_03d0:
	{
		V_0 = ((int32_t)128);
		goto IL_05fb;
	}

IL_03db:
	{
		V_0 = ((int32_t)129);
		goto IL_05fb;
	}

IL_03e6:
	{
		V_0 = ((int32_t)170);
		goto IL_05fb;
	}

IL_03f1:
	{
		V_0 = ((int32_t)189);
		goto IL_05fb;
	}

IL_03fc:
	{
		V_0 = ((int32_t)178);
		goto IL_05fb;
	}

IL_0407:
	{
		V_0 = ((int32_t)175);
		goto IL_05fb;
	}

IL_0412:
	{
		V_0 = ((int32_t)163);
		goto IL_05fb;
	}

IL_041d:
	{
		V_0 = ((int32_t)138);
		goto IL_05fb;
	}

IL_0428:
	{
		V_0 = ((int32_t)140);
		goto IL_05fb;
	}

IL_0433:
	{
		V_0 = ((int32_t)142);
		goto IL_05fb;
	}

IL_043e:
	{
		V_0 = ((int32_t)141);
		goto IL_05fb;
	}

IL_0449:
	{
		V_0 = ((int32_t)161);
		goto IL_05fb;
	}

IL_0454:
	{
		V_0 = ((int32_t)143);
		goto IL_05fb;
	}

IL_045f:
	{
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)((int32_t)848)));
		goto IL_05fb;
	}

IL_046c:
	{
		V_0 = ((int32_t)184);
		goto IL_05fb;
	}

IL_0477:
	{
		V_0 = ((int32_t)144);
		goto IL_05fb;
	}

IL_0482:
	{
		V_0 = ((int32_t)131);
		goto IL_05fb;
	}

IL_048d:
	{
		V_0 = ((int32_t)186);
		goto IL_05fb;
	}

IL_0498:
	{
		V_0 = ((int32_t)190);
		goto IL_05fb;
	}

IL_04a3:
	{
		V_0 = ((int32_t)179);
		goto IL_05fb;
	}

IL_04ae:
	{
		V_0 = ((int32_t)191);
		goto IL_05fb;
	}

IL_04b9:
	{
		V_0 = ((int32_t)188);
		goto IL_05fb;
	}

IL_04c4:
	{
		V_0 = ((int32_t)154);
		goto IL_05fb;
	}

IL_04cf:
	{
		V_0 = ((int32_t)156);
		goto IL_05fb;
	}

IL_04da:
	{
		V_0 = ((int32_t)158);
		goto IL_05fb;
	}

IL_04e5:
	{
		V_0 = ((int32_t)157);
		goto IL_05fb;
	}

IL_04f0:
	{
		V_0 = ((int32_t)162);
		goto IL_05fb;
	}

IL_04fb:
	{
		V_0 = ((int32_t)159);
		goto IL_05fb;
	}

IL_0506:
	{
		V_0 = ((int32_t)165);
		goto IL_05fb;
	}

IL_0511:
	{
		V_0 = ((int32_t)180);
		goto IL_05fb;
	}

IL_051c:
	{
		V_0 = ((int32_t)150);
		goto IL_05fb;
	}

IL_0527:
	{
		V_0 = ((int32_t)151);
		goto IL_05fb;
	}

IL_0532:
	{
		V_0 = ((int32_t)145);
		goto IL_05fb;
	}

IL_053d:
	{
		V_0 = ((int32_t)146);
		goto IL_05fb;
	}

IL_0548:
	{
		V_0 = ((int32_t)130);
		goto IL_05fb;
	}

IL_0553:
	{
		V_0 = ((int32_t)147);
		goto IL_05fb;
	}

IL_055e:
	{
		V_0 = ((int32_t)148);
		goto IL_05fb;
	}

IL_0569:
	{
		V_0 = ((int32_t)132);
		goto IL_05fb;
	}

IL_0574:
	{
		V_0 = ((int32_t)134);
		goto IL_05fb;
	}

IL_057c:
	{
		V_0 = ((int32_t)135);
		goto IL_05fb;
	}

IL_0584:
	{
		V_0 = ((int32_t)149);
		goto IL_05fb;
	}

IL_058c:
	{
		V_0 = ((int32_t)133);
		goto IL_05fb;
	}

IL_0594:
	{
		V_0 = ((int32_t)137);
		goto IL_05fb;
	}

IL_059c:
	{
		V_0 = ((int32_t)139);
		goto IL_05fb;
	}

IL_05a4:
	{
		V_0 = ((int32_t)155);
		goto IL_05fb;
	}

IL_05ac:
	{
		V_0 = ((int32_t)136);
		goto IL_05fb;
	}

IL_05b4:
	{
		V_0 = ((int32_t)185);
		goto IL_05fb;
	}

IL_05bc:
	{
		V_0 = ((int32_t)153);
		goto IL_05fb;
	}

IL_05c4:
	{
		int32_t L_18 = V_0;
		if ((((int32_t)L_18) < ((int32_t)((int32_t)65281))))
		{
			goto IL_05de;
		}
	}
	{
		int32_t L_19 = V_0;
		if ((((int32_t)L_19) > ((int32_t)((int32_t)65374))))
		{
			goto IL_05de;
		}
	}
	{
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)((int32_t)65248)));
		goto IL_05fb;
	}

IL_05de:
	{
		Il2CppChar* L_21 = ___chars0;
		uint8_t* L_22 = ___bytes2;
		MonoEncoding_HandleFallback_m5BBB9A58548D7F4FC29EB94C8033AF716387D94F(__this, (EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 **)(&V_3), (Il2CppChar*)(Il2CppChar*)L_21, (int32_t*)(&V_1), (int32_t*)(&___charCount1), (uint8_t*)(uint8_t*)L_22, (int32_t*)(&V_2), (int32_t*)(&___byteCount3), /*hidden argument*/NULL);
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
		int32_t L_24 = ___charCount1;
		___charCount1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)1));
		goto IL_0619;
	}

IL_05fb:
	{
		uint8_t* L_25 = ___bytes2;
		if ((((intptr_t)L_25) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0606;
		}
	}
	{
		uint8_t* L_26 = ___bytes2;
		int32_t L_27 = V_2;
		int32_t L_28 = V_0;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_26, (int32_t)L_27))) = (int8_t)((int32_t)((uint8_t)L_28));
	}

IL_0606:
	{
		int32_t L_29 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
		int32_t L_30 = ___byteCount3;
		___byteCount3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)1));
		int32_t L_31 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
		int32_t L_32 = ___charCount1;
		___charCount1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_32, (int32_t)1));
	}

IL_0619:
	{
		int32_t L_33 = ___charCount1;
		if ((((int32_t)L_33) > ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_34 = V_2;
		return L_34;
	}
}
// System.Void I18N.Other.CP1251::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP1251__cctor_mEF2D14220494C5B5EF8F508A8D2A0662FFF8830A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CP1251_t67A880F7D677377EB305EC157DA9B70CFE33875C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t5BF9241693AE1DE48403915AA18F028381B734C1____FDC523733500E24FB60E5223DD9E396992267CD9_6_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t5BF9241693AE1DE48403915AA18F028381B734C1____FDC523733500E24FB60E5223DD9E396992267CD9_6_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((CP1251_t67A880F7D677377EB305EC157DA9B70CFE33875C_StaticFields*)il2cpp_codegen_static_fields_for(CP1251_t67A880F7D677377EB305EC157DA9B70CFE33875C_il2cpp_TypeInfo_var))->set_ToChars_30(L_1);
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
// System.Void I18N.Other.CP1257::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP1257__ctor_m629FD8A816D62E578DF0019192B2BEBD0C6FA108 (CP1257_t1AC1809FEC3703F4088D0A44FACBAEAE9FC46B31 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CP1257_t1AC1809FEC3703F4088D0A44FACBAEAE9FC46B31_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78513BBBB0FB5253CDEF0562580140D291508DCD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A3E505F1C9FA677DAF2F9EC8B62A5FE9DBC4F08);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC216EE9D2A1CBAD9FE964194A2BD558FCAB16BFD);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CP1257_t1AC1809FEC3703F4088D0A44FACBAEAE9FC46B31_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = ((CP1257_t1AC1809FEC3703F4088D0A44FACBAEAE9FC46B31_StaticFields*)il2cpp_codegen_static_fields_for(CP1257_t1AC1809FEC3703F4088D0A44FACBAEAE9FC46B31_il2cpp_TypeInfo_var))->get_ToChars_30();
		ByteEncoding__ctor_m38C66F0BDFF6CDAF86DA35A4771938B1DA64F2B5(__this, ((int32_t)1257), L_0, _stringLiteral7A3E505F1C9FA677DAF2F9EC8B62A5FE9DBC4F08, _stringLiteralC216EE9D2A1CBAD9FE964194A2BD558FCAB16BFD, _stringLiteral78513BBBB0FB5253CDEF0562580140D291508DCD, _stringLiteral78513BBBB0FB5253CDEF0562580140D291508DCD, (bool)1, (bool)1, (bool)1, (bool)1, ((int32_t)1257), /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 I18N.Other.CP1257::GetByteCountImpl(System.Char*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP1257_GetByteCountImpl_mF3EC5AA35BBCDC5076AF6A348BF126DB64596908 (CP1257_t1AC1809FEC3703F4088D0A44FACBAEAE9FC46B31 * __this, Il2CppChar* ___chars0, int32_t ___count1, const RuntimeMethod* method)
{
	{
		EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * L_0;
		L_0 = Encoding_get_EncoderFallback_m8DF6B8EC2F7AA69AF9129C5334D1FAFE13081152_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Il2CppChar* L_1 = ___chars0;
		int32_t L_2 = ___count1;
		int32_t L_3;
		L_3 = VirtFuncInvoker4< int32_t, Il2CppChar*, int32_t, uint8_t*, int32_t >::Invoke(48 /* System.Int32 I18N.Common.MonoEncoding::GetBytesImpl(System.Char*,System.Int32,System.Byte*,System.Int32) */, __this, (Il2CppChar*)(Il2CppChar*)L_1, L_2, (uint8_t*)(uint8_t*)((uintptr_t)0), 0);
		return L_3;
	}

IL_0014:
	{
		int32_t L_4 = ___count1;
		return L_4;
	}
}
// System.Int32 I18N.Other.CP1257::GetByteCount(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP1257_GetByteCount_m3DA65D41D97ACCEE5D921AEC85EBEFC171D64B9B (CP1257_t1AC1809FEC3703F4088D0A44FACBAEAE9FC46B31 * __this, String_t* ___s0, const RuntimeMethod* method)
{
	Il2CppChar* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * L_0;
		L_0 = Encoding_get_EncoderFallback_m8DF6B8EC2F7AA69AF9129C5334D1FAFE13081152_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_1 = ___s0;
		V_1 = L_1;
		String_t* L_2 = V_1;
		V_0 = (Il2CppChar*)((uintptr_t)L_2);
		Il2CppChar* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		Il2CppChar* L_4 = V_0;
		int32_t L_5;
		L_5 = RuntimeHelpers_get_OffsetToStringData_mEB8E6EAEBAFAB7CD7F7A915B3081785AABB9FC42(/*hidden argument*/NULL);
		V_0 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_4, (int32_t)L_5));
	}

IL_0018:
	{
		Il2CppChar* L_6 = V_0;
		String_t* L_7 = ___s0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_7, /*hidden argument*/NULL);
		int32_t L_9;
		L_9 = VirtFuncInvoker4< int32_t, Il2CppChar*, int32_t, uint8_t*, int32_t >::Invoke(48 /* System.Int32 I18N.Common.MonoEncoding::GetBytesImpl(System.Char*,System.Int32,System.Byte*,System.Int32) */, __this, (Il2CppChar*)(Il2CppChar*)L_6, L_8, (uint8_t*)(uint8_t*)((uintptr_t)0), 0);
		return L_9;
	}

IL_0029:
	{
		String_t* L_10 = ___s0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.Void I18N.Other.CP1257::ToBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP1257_ToBytes_mE0A467551D18BFFCF9D15FCDE2FC56A34A842F2C (CP1257_t1AC1809FEC3703F4088D0A44FACBAEAE9FC46B31 * __this, Il2CppChar* ___chars0, int32_t ___charCount1, uint8_t* ___bytes2, int32_t ___byteCount3, const RuntimeMethod* method)
{
	{
		uint8_t* L_0 = ___bytes2;
		if ((!(((uintptr_t)L_0) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_0010;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral77B615B8ED1ABB8FC1395D85A5AE524A9789D947)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CP1257_ToBytes_mE0A467551D18BFFCF9D15FCDE2FC56A34A842F2C_RuntimeMethod_var)));
	}

IL_0010:
	{
		Il2CppChar* L_2 = ___chars0;
		int32_t L_3 = ___charCount1;
		uint8_t* L_4 = ___bytes2;
		int32_t L_5 = ___byteCount3;
		int32_t L_6;
		L_6 = VirtFuncInvoker4< int32_t, Il2CppChar*, int32_t, uint8_t*, int32_t >::Invoke(48 /* System.Int32 I18N.Common.MonoEncoding::GetBytesImpl(System.Char*,System.Int32,System.Byte*,System.Int32) */, __this, (Il2CppChar*)(Il2CppChar*)L_2, L_3, (uint8_t*)(uint8_t*)L_4, L_5);
		return;
	}
}
// System.Int32 I18N.Other.CP1257::GetBytesImpl(System.Char*,System.Int32,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP1257_GetBytesImpl_m46A897506DB5A3EEB91217795D23CB448D932583 (CP1257_t1AC1809FEC3703F4088D0A44FACBAEAE9FC46B31 * __this, Il2CppChar* ___chars0, int32_t ___charCount1, uint8_t* ___bytes2, int32_t ___byteCount3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 * V_3 = NULL;
	{
		V_1 = 0;
		V_2 = 0;
		V_3 = (EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 *)NULL;
		goto IL_0832;
	}

IL_000b:
	{
		Il2CppChar* L_0 = ___chars0;
		int32_t L_1 = V_1;
		int32_t L_2 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_1), (int32_t)2)))));
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)((int32_t)128))))
		{
			goto IL_0814;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)353))))
		{
			goto IL_0389;
		}
	}
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) > ((int32_t)((int32_t)303))))
		{
			goto IL_02d7;
		}
	}
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) > ((int32_t)((int32_t)281))))
		{
			goto IL_0298;
		}
	}
	{
		int32_t L_7 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)((int32_t)129))))
		{
			case 0:
			{
				goto IL_0814;
			}
			case 1:
			{
				goto IL_07dd;
			}
			case 2:
			{
				goto IL_0814;
			}
			case 3:
			{
				goto IL_07dd;
			}
			case 4:
			{
				goto IL_07dd;
			}
			case 5:
			{
				goto IL_07dd;
			}
			case 6:
			{
				goto IL_07dd;
			}
			case 7:
			{
				goto IL_0814;
			}
			case 8:
			{
				goto IL_07dd;
			}
			case 9:
			{
				goto IL_0814;
			}
			case 10:
			{
				goto IL_07dd;
			}
			case 11:
			{
				goto IL_0814;
			}
			case 12:
			{
				goto IL_07dd;
			}
			case 13:
			{
				goto IL_07dd;
			}
			case 14:
			{
				goto IL_07dd;
			}
			case 15:
			{
				goto IL_0814;
			}
			case 16:
			{
				goto IL_07dd;
			}
			case 17:
			{
				goto IL_07dd;
			}
			case 18:
			{
				goto IL_07dd;
			}
			case 19:
			{
				goto IL_07dd;
			}
			case 20:
			{
				goto IL_07dd;
			}
			case 21:
			{
				goto IL_07dd;
			}
			case 22:
			{
				goto IL_07dd;
			}
			case 23:
			{
				goto IL_0814;
			}
			case 24:
			{
				goto IL_07dd;
			}
			case 25:
			{
				goto IL_0814;
			}
			case 26:
			{
				goto IL_07dd;
			}
			case 27:
			{
				goto IL_0814;
			}
			case 28:
			{
				goto IL_07dd;
			}
			case 29:
			{
				goto IL_07dd;
			}
			case 30:
			{
				goto IL_0814;
			}
			case 31:
			{
				goto IL_0814;
			}
			case 32:
			{
				goto IL_07dd;
			}
			case 33:
			{
				goto IL_0814;
			}
			case 34:
			{
				goto IL_0814;
			}
			case 35:
			{
				goto IL_0814;
			}
			case 36:
			{
				goto IL_07dd;
			}
			case 37:
			{
				goto IL_0814;
			}
			case 38:
			{
				goto IL_0814;
			}
			case 39:
			{
				goto IL_04c2;
			}
			case 40:
			{
				goto IL_0814;
			}
			case 41:
			{
				goto IL_07dd;
			}
			case 42:
			{
				goto IL_0814;
			}
			case 43:
			{
				goto IL_0814;
			}
			case 44:
			{
				goto IL_0814;
			}
			case 45:
			{
				goto IL_0814;
			}
			case 46:
			{
				goto IL_04cd;
			}
			case 47:
			{
				goto IL_0814;
			}
			case 48:
			{
				goto IL_0814;
			}
			case 49:
			{
				goto IL_0814;
			}
			case 50:
			{
				goto IL_0814;
			}
			case 51:
			{
				goto IL_0814;
			}
			case 52:
			{
				goto IL_0814;
			}
			case 53:
			{
				goto IL_0814;
			}
			case 54:
			{
				goto IL_0814;
			}
			case 55:
			{
				goto IL_04d8;
			}
			case 56:
			{
				goto IL_0814;
			}
			case 57:
			{
				goto IL_07dd;
			}
			case 58:
			{
				goto IL_0814;
			}
			case 59:
			{
				goto IL_0814;
			}
			case 60:
			{
				goto IL_0814;
			}
			case 61:
			{
				goto IL_0814;
			}
			case 62:
			{
				goto IL_07dd;
			}
			case 63:
			{
				goto IL_07dd;
			}
			case 64:
			{
				goto IL_07dd;
			}
			case 65:
			{
				goto IL_07dd;
			}
			case 66:
			{
				goto IL_07dd;
			}
			case 67:
			{
				goto IL_0814;
			}
			case 68:
			{
				goto IL_0814;
			}
			case 69:
			{
				goto IL_04e3;
			}
			case 70:
			{
				goto IL_07dd;
			}
			case 71:
			{
				goto IL_07dd;
			}
			case 72:
			{
				goto IL_0814;
			}
			case 73:
			{
				goto IL_07dd;
			}
			case 74:
			{
				goto IL_07dd;
			}
			case 75:
			{
				goto IL_07dd;
			}
			case 76:
			{
				goto IL_07dd;
			}
			case 77:
			{
				goto IL_07dd;
			}
			case 78:
			{
				goto IL_07dd;
			}
			case 79:
			{
				goto IL_07dd;
			}
			case 80:
			{
				goto IL_07dd;
			}
			case 81:
			{
				goto IL_07dd;
			}
			case 82:
			{
				goto IL_0814;
			}
			case 83:
			{
				goto IL_07dd;
			}
			case 84:
			{
				goto IL_0814;
			}
			case 85:
			{
				goto IL_0814;
			}
			case 86:
			{
				goto IL_0814;
			}
			case 87:
			{
				goto IL_04ee;
			}
			case 88:
			{
				goto IL_07dd;
			}
			case 89:
			{
				goto IL_07dd;
			}
			case 90:
			{
				goto IL_07dd;
			}
			case 91:
			{
				goto IL_0814;
			}
			case 92:
			{
				goto IL_07dd;
			}
			case 93:
			{
				goto IL_07dd;
			}
			case 94:
			{
				goto IL_0814;
			}
		}
	}
	{
		int32_t L_8 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)((int32_t)228))))
		{
			case 0:
			{
				goto IL_0814;
			}
			case 1:
			{
				goto IL_0814;
			}
			case 2:
			{
				goto IL_04f9;
			}
			case 3:
			{
				goto IL_07dd;
			}
			case 4:
			{
				goto IL_07dd;
			}
			case 5:
			{
				goto IL_0814;
			}
		}
	}
	{
		int32_t L_9 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)((int32_t)243))))
		{
			case 0:
			{
				goto IL_0814;
			}
			case 1:
			{
				goto IL_07dd;
			}
			case 2:
			{
				goto IL_0814;
			}
			case 3:
			{
				goto IL_0814;
			}
			case 4:
			{
				goto IL_0814;
			}
			case 5:
			{
				goto IL_0504;
			}
			case 6:
			{
				goto IL_07dd;
			}
			case 7:
			{
				goto IL_07dd;
			}
			case 8:
			{
				goto IL_07dd;
			}
			case 9:
			{
				goto IL_0814;
			}
			case 10:
			{
				goto IL_07dd;
			}
			case 11:
			{
				goto IL_07dd;
			}
			case 12:
			{
				goto IL_07dd;
			}
			case 13:
			{
				goto IL_050f;
			}
			case 14:
			{
				goto IL_051a;
			}
			case 15:
			{
				goto IL_07dd;
			}
			case 16:
			{
				goto IL_07dd;
			}
			case 17:
			{
				goto IL_0525;
			}
			case 18:
			{
				goto IL_0530;
			}
			case 19:
			{
				goto IL_053b;
			}
			case 20:
			{
				goto IL_0546;
			}
			case 21:
			{
				goto IL_07dd;
			}
			case 22:
			{
				goto IL_07dd;
			}
			case 23:
			{
				goto IL_07dd;
			}
			case 24:
			{
				goto IL_07dd;
			}
			case 25:
			{
				goto IL_0551;
			}
			case 26:
			{
				goto IL_055c;
			}
			case 27:
			{
				goto IL_07dd;
			}
			case 28:
			{
				goto IL_07dd;
			}
			case 29:
			{
				goto IL_07dd;
			}
			case 30:
			{
				goto IL_07dd;
			}
			case 31:
			{
				goto IL_0567;
			}
			case 32:
			{
				goto IL_0572;
			}
			case 33:
			{
				goto IL_07dd;
			}
			case 34:
			{
				goto IL_07dd;
			}
			case 35:
			{
				goto IL_057d;
			}
			case 36:
			{
				goto IL_0588;
			}
			case 37:
			{
				goto IL_0593;
			}
			case 38:
			{
				goto IL_059e;
			}
		}
	}
	{
		goto IL_07dd;
	}

IL_0298:
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)290))))
		{
			goto IL_05a9;
		}
	}
	{
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)291))))
		{
			goto IL_05b4;
		}
	}
	{
		int32_t L_12 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)((int32_t)298))))
		{
			case 0:
			{
				goto IL_05bf;
			}
			case 1:
			{
				goto IL_05ca;
			}
			case 2:
			{
				goto IL_07dd;
			}
			case 3:
			{
				goto IL_07dd;
			}
			case 4:
			{
				goto IL_05d5;
			}
			case 5:
			{
				goto IL_05e0;
			}
		}
	}
	{
		goto IL_07dd;
	}

IL_02d7:
	{
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) > ((int32_t)((int32_t)333))))
		{
			goto IL_034a;
		}
	}
	{
		int32_t L_14 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)((int32_t)310))))
		{
			case 0:
			{
				goto IL_05eb;
			}
			case 1:
			{
				goto IL_05f6;
			}
			case 2:
			{
				goto IL_07dd;
			}
			case 3:
			{
				goto IL_07dd;
			}
			case 4:
			{
				goto IL_07dd;
			}
			case 5:
			{
				goto IL_0601;
			}
			case 6:
			{
				goto IL_060c;
			}
			case 7:
			{
				goto IL_07dd;
			}
			case 8:
			{
				goto IL_07dd;
			}
			case 9:
			{
				goto IL_07dd;
			}
			case 10:
			{
				goto IL_07dd;
			}
			case 11:
			{
				goto IL_0617;
			}
			case 12:
			{
				goto IL_0622;
			}
			case 13:
			{
				goto IL_062d;
			}
			case 14:
			{
				goto IL_0638;
			}
			case 15:
			{
				goto IL_0643;
			}
			case 16:
			{
				goto IL_064e;
			}
		}
	}
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)332))))
		{
			goto IL_0659;
		}
	}
	{
		int32_t L_16 = V_0;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)333))))
		{
			goto IL_0664;
		}
	}
	{
		goto IL_07dd;
	}

IL_034a:
	{
		int32_t L_17 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)((int32_t)342))))
		{
			case 0:
			{
				goto IL_066f;
			}
			case 1:
			{
				goto IL_067a;
			}
			case 2:
			{
				goto IL_07dd;
			}
			case 3:
			{
				goto IL_07dd;
			}
			case 4:
			{
				goto IL_0685;
			}
			case 5:
			{
				goto IL_0690;
			}
		}
	}
	{
		int32_t L_18 = V_0;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)352))))
		{
			goto IL_069b;
		}
	}
	{
		int32_t L_19 = V_0;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)353))))
		{
			goto IL_06a6;
		}
	}
	{
		goto IL_07dd;
	}

IL_0389:
	{
		int32_t L_20 = V_0;
		if ((((int32_t)L_20) > ((int32_t)((int32_t)731))))
		{
			goto IL_041d;
		}
	}
	{
		int32_t L_21 = V_0;
		if ((((int32_t)L_21) > ((int32_t)((int32_t)382))))
		{
			goto IL_03f7;
		}
	}
	{
		int32_t L_22 = V_0;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)362))))
		{
			goto IL_06b1;
		}
	}
	{
		int32_t L_23 = V_0;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)363))))
		{
			goto IL_06bc;
		}
	}
	{
		int32_t L_24 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)((int32_t)370))))
		{
			case 0:
			{
				goto IL_06c7;
			}
			case 1:
			{
				goto IL_06d2;
			}
			case 2:
			{
				goto IL_07dd;
			}
			case 3:
			{
				goto IL_07dd;
			}
			case 4:
			{
				goto IL_07dd;
			}
			case 5:
			{
				goto IL_07dd;
			}
			case 6:
			{
				goto IL_07dd;
			}
			case 7:
			{
				goto IL_06dd;
			}
			case 8:
			{
				goto IL_06e8;
			}
			case 9:
			{
				goto IL_06f3;
			}
			case 10:
			{
				goto IL_06fe;
			}
			case 11:
			{
				goto IL_0709;
			}
			case 12:
			{
				goto IL_0714;
			}
		}
	}
	{
		goto IL_07dd;
	}

IL_03f7:
	{
		int32_t L_25 = V_0;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)711))))
		{
			goto IL_071f;
		}
	}
	{
		int32_t L_26 = V_0;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)729))))
		{
			goto IL_072a;
		}
	}
	{
		int32_t L_27 = V_0;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)731))))
		{
			goto IL_0735;
		}
	}
	{
		goto IL_07dd;
	}

IL_041d:
	{
		int32_t L_28 = V_0;
		if ((((int32_t)L_28) > ((int32_t)((int32_t)8249))))
		{
			goto IL_049c;
		}
	}
	{
		int32_t L_29 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_29, (int32_t)((int32_t)8211))))
		{
			case 0:
			{
				goto IL_0740;
			}
			case 1:
			{
				goto IL_074b;
			}
			case 2:
			{
				goto IL_07dd;
			}
			case 3:
			{
				goto IL_07dd;
			}
			case 4:
			{
				goto IL_07dd;
			}
			case 5:
			{
				goto IL_0756;
			}
			case 6:
			{
				goto IL_0761;
			}
			case 7:
			{
				goto IL_076c;
			}
			case 8:
			{
				goto IL_07dd;
			}
			case 9:
			{
				goto IL_0777;
			}
			case 10:
			{
				goto IL_0782;
			}
			case 11:
			{
				goto IL_078d;
			}
			case 12:
			{
				goto IL_07dd;
			}
			case 13:
			{
				goto IL_0795;
			}
			case 14:
			{
				goto IL_079d;
			}
			case 15:
			{
				goto IL_07a5;
			}
			case 16:
			{
				goto IL_07dd;
			}
			case 17:
			{
				goto IL_07dd;
			}
			case 18:
			{
				goto IL_07dd;
			}
			case 19:
			{
				goto IL_07ad;
			}
		}
	}
	{
		int32_t L_30 = V_0;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)8240))))
		{
			goto IL_07b5;
		}
	}
	{
		int32_t L_31 = V_0;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)8249))))
		{
			goto IL_07bd;
		}
	}
	{
		goto IL_07dd;
	}

IL_049c:
	{
		int32_t L_32 = V_0;
		if ((((int32_t)L_32) == ((int32_t)((int32_t)8250))))
		{
			goto IL_07c5;
		}
	}
	{
		int32_t L_33 = V_0;
		if ((((int32_t)L_33) == ((int32_t)((int32_t)8364))))
		{
			goto IL_07cd;
		}
	}
	{
		int32_t L_34 = V_0;
		if ((((int32_t)L_34) == ((int32_t)((int32_t)8482))))
		{
			goto IL_07d5;
		}
	}
	{
		goto IL_07dd;
	}

IL_04c2:
	{
		V_0 = ((int32_t)141);
		goto IL_0814;
	}

IL_04cd:
	{
		V_0 = ((int32_t)157);
		goto IL_0814;
	}

IL_04d8:
	{
		V_0 = ((int32_t)143);
		goto IL_0814;
	}

IL_04e3:
	{
		V_0 = ((int32_t)175);
		goto IL_0814;
	}

IL_04ee:
	{
		V_0 = ((int32_t)168);
		goto IL_0814;
	}

IL_04f9:
	{
		V_0 = ((int32_t)191);
		goto IL_0814;
	}

IL_0504:
	{
		V_0 = ((int32_t)184);
		goto IL_0814;
	}

IL_050f:
	{
		V_0 = ((int32_t)194);
		goto IL_0814;
	}

IL_051a:
	{
		V_0 = ((int32_t)226);
		goto IL_0814;
	}

IL_0525:
	{
		V_0 = ((int32_t)192);
		goto IL_0814;
	}

IL_0530:
	{
		V_0 = ((int32_t)224);
		goto IL_0814;
	}

IL_053b:
	{
		V_0 = ((int32_t)195);
		goto IL_0814;
	}

IL_0546:
	{
		V_0 = ((int32_t)227);
		goto IL_0814;
	}

IL_0551:
	{
		V_0 = ((int32_t)200);
		goto IL_0814;
	}

IL_055c:
	{
		V_0 = ((int32_t)232);
		goto IL_0814;
	}

IL_0567:
	{
		V_0 = ((int32_t)199);
		goto IL_0814;
	}

IL_0572:
	{
		V_0 = ((int32_t)231);
		goto IL_0814;
	}

IL_057d:
	{
		V_0 = ((int32_t)203);
		goto IL_0814;
	}

IL_0588:
	{
		V_0 = ((int32_t)235);
		goto IL_0814;
	}

IL_0593:
	{
		V_0 = ((int32_t)198);
		goto IL_0814;
	}

IL_059e:
	{
		V_0 = ((int32_t)230);
		goto IL_0814;
	}

IL_05a9:
	{
		V_0 = ((int32_t)204);
		goto IL_0814;
	}

IL_05b4:
	{
		V_0 = ((int32_t)236);
		goto IL_0814;
	}

IL_05bf:
	{
		V_0 = ((int32_t)206);
		goto IL_0814;
	}

IL_05ca:
	{
		V_0 = ((int32_t)238);
		goto IL_0814;
	}

IL_05d5:
	{
		V_0 = ((int32_t)193);
		goto IL_0814;
	}

IL_05e0:
	{
		V_0 = ((int32_t)225);
		goto IL_0814;
	}

IL_05eb:
	{
		V_0 = ((int32_t)205);
		goto IL_0814;
	}

IL_05f6:
	{
		V_0 = ((int32_t)237);
		goto IL_0814;
	}

IL_0601:
	{
		V_0 = ((int32_t)207);
		goto IL_0814;
	}

IL_060c:
	{
		V_0 = ((int32_t)239);
		goto IL_0814;
	}

IL_0617:
	{
		V_0 = ((int32_t)217);
		goto IL_0814;
	}

IL_0622:
	{
		V_0 = ((int32_t)249);
		goto IL_0814;
	}

IL_062d:
	{
		V_0 = ((int32_t)209);
		goto IL_0814;
	}

IL_0638:
	{
		V_0 = ((int32_t)241);
		goto IL_0814;
	}

IL_0643:
	{
		V_0 = ((int32_t)210);
		goto IL_0814;
	}

IL_064e:
	{
		V_0 = ((int32_t)242);
		goto IL_0814;
	}

IL_0659:
	{
		V_0 = ((int32_t)212);
		goto IL_0814;
	}

IL_0664:
	{
		V_0 = ((int32_t)244);
		goto IL_0814;
	}

IL_066f:
	{
		V_0 = ((int32_t)170);
		goto IL_0814;
	}

IL_067a:
	{
		V_0 = ((int32_t)186);
		goto IL_0814;
	}

IL_0685:
	{
		V_0 = ((int32_t)218);
		goto IL_0814;
	}

IL_0690:
	{
		V_0 = ((int32_t)250);
		goto IL_0814;
	}

IL_069b:
	{
		V_0 = ((int32_t)208);
		goto IL_0814;
	}

IL_06a6:
	{
		V_0 = ((int32_t)240);
		goto IL_0814;
	}

IL_06b1:
	{
		V_0 = ((int32_t)219);
		goto IL_0814;
	}

IL_06bc:
	{
		V_0 = ((int32_t)251);
		goto IL_0814;
	}

IL_06c7:
	{
		V_0 = ((int32_t)216);
		goto IL_0814;
	}

IL_06d2:
	{
		V_0 = ((int32_t)248);
		goto IL_0814;
	}

IL_06dd:
	{
		V_0 = ((int32_t)202);
		goto IL_0814;
	}

IL_06e8:
	{
		V_0 = ((int32_t)234);
		goto IL_0814;
	}

IL_06f3:
	{
		V_0 = ((int32_t)221);
		goto IL_0814;
	}

IL_06fe:
	{
		V_0 = ((int32_t)253);
		goto IL_0814;
	}

IL_0709:
	{
		V_0 = ((int32_t)222);
		goto IL_0814;
	}

IL_0714:
	{
		V_0 = ((int32_t)254);
		goto IL_0814;
	}

IL_071f:
	{
		V_0 = ((int32_t)142);
		goto IL_0814;
	}

IL_072a:
	{
		V_0 = ((int32_t)255);
		goto IL_0814;
	}

IL_0735:
	{
		V_0 = ((int32_t)158);
		goto IL_0814;
	}

IL_0740:
	{
		V_0 = ((int32_t)150);
		goto IL_0814;
	}

IL_074b:
	{
		V_0 = ((int32_t)151);
		goto IL_0814;
	}

IL_0756:
	{
		V_0 = ((int32_t)145);
		goto IL_0814;
	}

IL_0761:
	{
		V_0 = ((int32_t)146);
		goto IL_0814;
	}

IL_076c:
	{
		V_0 = ((int32_t)130);
		goto IL_0814;
	}

IL_0777:
	{
		V_0 = ((int32_t)147);
		goto IL_0814;
	}

IL_0782:
	{
		V_0 = ((int32_t)148);
		goto IL_0814;
	}

IL_078d:
	{
		V_0 = ((int32_t)132);
		goto IL_0814;
	}

IL_0795:
	{
		V_0 = ((int32_t)134);
		goto IL_0814;
	}

IL_079d:
	{
		V_0 = ((int32_t)135);
		goto IL_0814;
	}

IL_07a5:
	{
		V_0 = ((int32_t)149);
		goto IL_0814;
	}

IL_07ad:
	{
		V_0 = ((int32_t)133);
		goto IL_0814;
	}

IL_07b5:
	{
		V_0 = ((int32_t)137);
		goto IL_0814;
	}

IL_07bd:
	{
		V_0 = ((int32_t)139);
		goto IL_0814;
	}

IL_07c5:
	{
		V_0 = ((int32_t)155);
		goto IL_0814;
	}

IL_07cd:
	{
		V_0 = ((int32_t)128);
		goto IL_0814;
	}

IL_07d5:
	{
		V_0 = ((int32_t)153);
		goto IL_0814;
	}

IL_07dd:
	{
		int32_t L_35 = V_0;
		if ((((int32_t)L_35) < ((int32_t)((int32_t)65281))))
		{
			goto IL_07f7;
		}
	}
	{
		int32_t L_36 = V_0;
		if ((((int32_t)L_36) > ((int32_t)((int32_t)65374))))
		{
			goto IL_07f7;
		}
	}
	{
		int32_t L_37 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_37, (int32_t)((int32_t)65248)));
		goto IL_0814;
	}

IL_07f7:
	{
		Il2CppChar* L_38 = ___chars0;
		uint8_t* L_39 = ___bytes2;
		MonoEncoding_HandleFallback_m5BBB9A58548D7F4FC29EB94C8033AF716387D94F(__this, (EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 **)(&V_3), (Il2CppChar*)(Il2CppChar*)L_38, (int32_t*)(&V_1), (int32_t*)(&___charCount1), (uint8_t*)(uint8_t*)L_39, (int32_t*)(&V_2), (int32_t*)(&___byteCount3), /*hidden argument*/NULL);
		int32_t L_40 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1));
		int32_t L_41 = ___charCount1;
		___charCount1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_41, (int32_t)1));
		goto IL_0832;
	}

IL_0814:
	{
		uint8_t* L_42 = ___bytes2;
		if ((((intptr_t)L_42) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_081f;
		}
	}
	{
		uint8_t* L_43 = ___bytes2;
		int32_t L_44 = V_2;
		int32_t L_45 = V_0;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, (int32_t)L_44))) = (int8_t)((int32_t)((uint8_t)L_45));
	}

IL_081f:
	{
		int32_t L_46 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1));
		int32_t L_47 = ___byteCount3;
		___byteCount3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_47, (int32_t)1));
		int32_t L_48 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)1));
		int32_t L_49 = ___charCount1;
		___charCount1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_49, (int32_t)1));
	}

IL_0832:
	{
		int32_t L_50 = ___charCount1;
		if ((((int32_t)L_50) > ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_51 = V_2;
		return L_51;
	}
}
// System.Void I18N.Other.CP1257::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP1257__cctor_mFACCBD0E626F1845EAC69AB8271485CE4538D8ED (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CP1257_t1AC1809FEC3703F4088D0A44FACBAEAE9FC46B31_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t5BF9241693AE1DE48403915AA18F028381B734C1____FF5AEABB91E1A5AEC6185ADD0BCFDE4B5A440680_7_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t5BF9241693AE1DE48403915AA18F028381B734C1____FF5AEABB91E1A5AEC6185ADD0BCFDE4B5A440680_7_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((CP1257_t1AC1809FEC3703F4088D0A44FACBAEAE9FC46B31_StaticFields*)il2cpp_codegen_static_fields_for(CP1257_t1AC1809FEC3703F4088D0A44FACBAEAE9FC46B31_il2cpp_TypeInfo_var))->set_ToChars_30(L_1);
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
// System.Void I18N.Other.CP1258::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP1258__ctor_m20ED8B05E5901F1A325A205A9CF3D9B2E912DE5E (CP1258_t93AD832AF1FFE06D53F4258384FB82C6D423CAD9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CP1258_t93AD832AF1FFE06D53F4258384FB82C6D423CAD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0ADD278CB8B06A24D3EAEA172F92564CC0F1B40D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F5F7456652F53E64BFBA7704FE540D3396B0392);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CP1258_t93AD832AF1FFE06D53F4258384FB82C6D423CAD9_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = ((CP1258_t93AD832AF1FFE06D53F4258384FB82C6D423CAD9_StaticFields*)il2cpp_codegen_static_fields_for(CP1258_t93AD832AF1FFE06D53F4258384FB82C6D423CAD9_il2cpp_TypeInfo_var))->get_ToChars_30();
		ByteEncoding__ctor_m38C66F0BDFF6CDAF86DA35A4771938B1DA64F2B5(__this, ((int32_t)1258), L_0, _stringLiteral6F5F7456652F53E64BFBA7704FE540D3396B0392, _stringLiteral0ADD278CB8B06A24D3EAEA172F92564CC0F1B40D, _stringLiteral0ADD278CB8B06A24D3EAEA172F92564CC0F1B40D, _stringLiteral0ADD278CB8B06A24D3EAEA172F92564CC0F1B40D, (bool)1, (bool)1, (bool)1, (bool)1, ((int32_t)1258), /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 I18N.Other.CP1258::GetByteCountImpl(System.Char*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP1258_GetByteCountImpl_m456B720FC90247138723981B7025668F4B7B7227 (CP1258_t93AD832AF1FFE06D53F4258384FB82C6D423CAD9 * __this, Il2CppChar* ___chars0, int32_t ___count1, const RuntimeMethod* method)
{
	{
		EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * L_0;
		L_0 = Encoding_get_EncoderFallback_m8DF6B8EC2F7AA69AF9129C5334D1FAFE13081152_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Il2CppChar* L_1 = ___chars0;
		int32_t L_2 = ___count1;
		int32_t L_3;
		L_3 = VirtFuncInvoker4< int32_t, Il2CppChar*, int32_t, uint8_t*, int32_t >::Invoke(48 /* System.Int32 I18N.Common.MonoEncoding::GetBytesImpl(System.Char*,System.Int32,System.Byte*,System.Int32) */, __this, (Il2CppChar*)(Il2CppChar*)L_1, L_2, (uint8_t*)(uint8_t*)((uintptr_t)0), 0);
		return L_3;
	}

IL_0014:
	{
		int32_t L_4 = ___count1;
		return L_4;
	}
}
// System.Int32 I18N.Other.CP1258::GetByteCount(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP1258_GetByteCount_mC7285CA7B122247C00BA337A872A227BE786E807 (CP1258_t93AD832AF1FFE06D53F4258384FB82C6D423CAD9 * __this, String_t* ___s0, const RuntimeMethod* method)
{
	Il2CppChar* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * L_0;
		L_0 = Encoding_get_EncoderFallback_m8DF6B8EC2F7AA69AF9129C5334D1FAFE13081152_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_1 = ___s0;
		V_1 = L_1;
		String_t* L_2 = V_1;
		V_0 = (Il2CppChar*)((uintptr_t)L_2);
		Il2CppChar* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		Il2CppChar* L_4 = V_0;
		int32_t L_5;
		L_5 = RuntimeHelpers_get_OffsetToStringData_mEB8E6EAEBAFAB7CD7F7A915B3081785AABB9FC42(/*hidden argument*/NULL);
		V_0 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_4, (int32_t)L_5));
	}

IL_0018:
	{
		Il2CppChar* L_6 = V_0;
		String_t* L_7 = ___s0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_7, /*hidden argument*/NULL);
		int32_t L_9;
		L_9 = VirtFuncInvoker4< int32_t, Il2CppChar*, int32_t, uint8_t*, int32_t >::Invoke(48 /* System.Int32 I18N.Common.MonoEncoding::GetBytesImpl(System.Char*,System.Int32,System.Byte*,System.Int32) */, __this, (Il2CppChar*)(Il2CppChar*)L_6, L_8, (uint8_t*)(uint8_t*)((uintptr_t)0), 0);
		return L_9;
	}

IL_0029:
	{
		String_t* L_10 = ___s0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.Void I18N.Other.CP1258::ToBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP1258_ToBytes_m0ED98FCED68EFB644905ADACA690893585A445A3 (CP1258_t93AD832AF1FFE06D53F4258384FB82C6D423CAD9 * __this, Il2CppChar* ___chars0, int32_t ___charCount1, uint8_t* ___bytes2, int32_t ___byteCount3, const RuntimeMethod* method)
{
	{
		uint8_t* L_0 = ___bytes2;
		if ((!(((uintptr_t)L_0) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_0010;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral77B615B8ED1ABB8FC1395D85A5AE524A9789D947)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CP1258_ToBytes_m0ED98FCED68EFB644905ADACA690893585A445A3_RuntimeMethod_var)));
	}

IL_0010:
	{
		Il2CppChar* L_2 = ___chars0;
		int32_t L_3 = ___charCount1;
		uint8_t* L_4 = ___bytes2;
		int32_t L_5 = ___byteCount3;
		int32_t L_6;
		L_6 = VirtFuncInvoker4< int32_t, Il2CppChar*, int32_t, uint8_t*, int32_t >::Invoke(48 /* System.Int32 I18N.Common.MonoEncoding::GetBytesImpl(System.Char*,System.Int32,System.Byte*,System.Int32) */, __this, (Il2CppChar*)(Il2CppChar*)L_2, L_3, (uint8_t*)(uint8_t*)L_4, L_5);
		return;
	}
}
// System.Int32 I18N.Other.CP1258::GetBytesImpl(System.Char*,System.Int32,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP1258_GetBytesImpl_mEABE50799C7C2F0D12430CFD418E6E9FD6413A55 (CP1258_t93AD832AF1FFE06D53F4258384FB82C6D423CAD9 * __this, Il2CppChar* ___chars0, int32_t ___charCount1, uint8_t* ___bytes2, int32_t ___byteCount3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 * V_3 = NULL;
	{
		V_1 = 0;
		V_2 = 0;
		V_3 = (EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 *)NULL;
		goto IL_05e6;
	}

IL_000b:
	{
		Il2CppChar* L_0 = ___chars0;
		int32_t L_1 = V_1;
		int32_t L_2 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_1), (int32_t)2)))));
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)((int32_t)128))))
		{
			goto IL_05c8;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)710))))
		{
			goto IL_030e;
		}
	}
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) > ((int32_t)((int32_t)402))))
		{
			goto IL_02c5;
		}
	}
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) > ((int32_t)((int32_t)338))))
		{
			goto IL_029f;
		}
	}
	{
		int32_t L_7 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)((int32_t)129))))
		{
			case 0:
			{
				goto IL_05c8;
			}
			case 1:
			{
				goto IL_0591;
			}
			case 2:
			{
				goto IL_0591;
			}
			case 3:
			{
				goto IL_0591;
			}
			case 4:
			{
				goto IL_0591;
			}
			case 5:
			{
				goto IL_0591;
			}
			case 6:
			{
				goto IL_0591;
			}
			case 7:
			{
				goto IL_0591;
			}
			case 8:
			{
				goto IL_0591;
			}
			case 9:
			{
				goto IL_05c8;
			}
			case 10:
			{
				goto IL_0591;
			}
			case 11:
			{
				goto IL_0591;
			}
			case 12:
			{
				goto IL_05c8;
			}
			case 13:
			{
				goto IL_05c8;
			}
			case 14:
			{
				goto IL_05c8;
			}
			case 15:
			{
				goto IL_05c8;
			}
			case 16:
			{
				goto IL_0591;
			}
			case 17:
			{
				goto IL_0591;
			}
			case 18:
			{
				goto IL_0591;
			}
			case 19:
			{
				goto IL_0591;
			}
			case 20:
			{
				goto IL_0591;
			}
			case 21:
			{
				goto IL_0591;
			}
			case 22:
			{
				goto IL_0591;
			}
			case 23:
			{
				goto IL_0591;
			}
			case 24:
			{
				goto IL_0591;
			}
			case 25:
			{
				goto IL_05c8;
			}
			case 26:
			{
				goto IL_0591;
			}
			case 27:
			{
				goto IL_0591;
			}
			case 28:
			{
				goto IL_05c8;
			}
			case 29:
			{
				goto IL_05c8;
			}
			case 30:
			{
				goto IL_0591;
			}
			case 31:
			{
				goto IL_05c8;
			}
			case 32:
			{
				goto IL_05c8;
			}
			case 33:
			{
				goto IL_05c8;
			}
			case 34:
			{
				goto IL_05c8;
			}
			case 35:
			{
				goto IL_05c8;
			}
			case 36:
			{
				goto IL_05c8;
			}
			case 37:
			{
				goto IL_05c8;
			}
			case 38:
			{
				goto IL_05c8;
			}
			case 39:
			{
				goto IL_05c8;
			}
			case 40:
			{
				goto IL_05c8;
			}
			case 41:
			{
				goto IL_05c8;
			}
			case 42:
			{
				goto IL_05c8;
			}
			case 43:
			{
				goto IL_05c8;
			}
			case 44:
			{
				goto IL_05c8;
			}
			case 45:
			{
				goto IL_05c8;
			}
			case 46:
			{
				goto IL_05c8;
			}
			case 47:
			{
				goto IL_05c8;
			}
			case 48:
			{
				goto IL_05c8;
			}
			case 49:
			{
				goto IL_05c8;
			}
			case 50:
			{
				goto IL_05c8;
			}
			case 51:
			{
				goto IL_05c8;
			}
			case 52:
			{
				goto IL_05c8;
			}
			case 53:
			{
				goto IL_05c8;
			}
			case 54:
			{
				goto IL_05c8;
			}
			case 55:
			{
				goto IL_05c8;
			}
			case 56:
			{
				goto IL_05c8;
			}
			case 57:
			{
				goto IL_05c8;
			}
			case 58:
			{
				goto IL_05c8;
			}
			case 59:
			{
				goto IL_05c8;
			}
			case 60:
			{
				goto IL_05c8;
			}
			case 61:
			{
				goto IL_05c8;
			}
			case 62:
			{
				goto IL_05c8;
			}
			case 63:
			{
				goto IL_05c8;
			}
			case 64:
			{
				goto IL_05c8;
			}
			case 65:
			{
				goto IL_05c8;
			}
			case 66:
			{
				goto IL_0591;
			}
			case 67:
			{
				goto IL_05c8;
			}
			case 68:
			{
				goto IL_05c8;
			}
			case 69:
			{
				goto IL_05c8;
			}
			case 70:
			{
				goto IL_05c8;
			}
			case 71:
			{
				goto IL_05c8;
			}
			case 72:
			{
				goto IL_05c8;
			}
			case 73:
			{
				goto IL_05c8;
			}
			case 74:
			{
				goto IL_05c8;
			}
			case 75:
			{
				goto IL_0591;
			}
			case 76:
			{
				goto IL_05c8;
			}
			case 77:
			{
				goto IL_05c8;
			}
			case 78:
			{
				goto IL_05c8;
			}
			case 79:
			{
				goto IL_0591;
			}
			case 80:
			{
				goto IL_05c8;
			}
			case 81:
			{
				goto IL_0591;
			}
			case 82:
			{
				goto IL_05c8;
			}
			case 83:
			{
				goto IL_05c8;
			}
			case 84:
			{
				goto IL_0591;
			}
			case 85:
			{
				goto IL_05c8;
			}
			case 86:
			{
				goto IL_05c8;
			}
			case 87:
			{
				goto IL_05c8;
			}
			case 88:
			{
				goto IL_05c8;
			}
			case 89:
			{
				goto IL_05c8;
			}
			case 90:
			{
				goto IL_05c8;
			}
			case 91:
			{
				goto IL_05c8;
			}
			case 92:
			{
				goto IL_0591;
			}
			case 93:
			{
				goto IL_0591;
			}
			case 94:
			{
				goto IL_05c8;
			}
			case 95:
			{
				goto IL_05c8;
			}
			case 96:
			{
				goto IL_05c8;
			}
			case 97:
			{
				goto IL_05c8;
			}
			case 98:
			{
				goto IL_0591;
			}
			case 99:
			{
				goto IL_05c8;
			}
			case 100:
			{
				goto IL_05c8;
			}
			case 101:
			{
				goto IL_05c8;
			}
			case 102:
			{
				goto IL_05c8;
			}
			case 103:
			{
				goto IL_05c8;
			}
			case 104:
			{
				goto IL_05c8;
			}
			case 105:
			{
				goto IL_05c8;
			}
			case 106:
			{
				goto IL_05c8;
			}
			case 107:
			{
				goto IL_0591;
			}
			case 108:
			{
				goto IL_05c8;
			}
			case 109:
			{
				goto IL_05c8;
			}
			case 110:
			{
				goto IL_05c8;
			}
			case 111:
			{
				goto IL_0591;
			}
			case 112:
			{
				goto IL_05c8;
			}
			case 113:
			{
				goto IL_0591;
			}
			case 114:
			{
				goto IL_05c8;
			}
			case 115:
			{
				goto IL_05c8;
			}
			case 116:
			{
				goto IL_0591;
			}
			case 117:
			{
				goto IL_05c8;
			}
			case 118:
			{
				goto IL_05c8;
			}
			case 119:
			{
				goto IL_05c8;
			}
			case 120:
			{
				goto IL_05c8;
			}
			case 121:
			{
				goto IL_05c8;
			}
			case 122:
			{
				goto IL_05c8;
			}
			case 123:
			{
				goto IL_05c8;
			}
			case 124:
			{
				goto IL_0591;
			}
			case 125:
			{
				goto IL_0591;
			}
			case 126:
			{
				goto IL_05c8;
			}
			case 127:
			{
				goto IL_0591;
			}
			case 128:
			{
				goto IL_0591;
			}
			case 129:
			{
				goto IL_0418;
			}
			case 130:
			{
				goto IL_0423;
			}
			case 131:
			{
				goto IL_0591;
			}
			case 132:
			{
				goto IL_0591;
			}
			case 133:
			{
				goto IL_0591;
			}
			case 134:
			{
				goto IL_0591;
			}
			case 135:
			{
				goto IL_0591;
			}
			case 136:
			{
				goto IL_0591;
			}
			case 137:
			{
				goto IL_0591;
			}
			case 138:
			{
				goto IL_0591;
			}
			case 139:
			{
				goto IL_0591;
			}
			case 140:
			{
				goto IL_0591;
			}
			case 141:
			{
				goto IL_0591;
			}
			case 142:
			{
				goto IL_0591;
			}
			case 143:
			{
				goto IL_042e;
			}
			case 144:
			{
				goto IL_0439;
			}
		}
	}
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)338))))
		{
			goto IL_0444;
		}
	}
	{
		goto IL_0591;
	}

IL_029f:
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)339))))
		{
			goto IL_044f;
		}
	}
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)376))))
		{
			goto IL_045a;
		}
	}
	{
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)402))))
		{
			goto IL_0465;
		}
	}
	{
		goto IL_0591;
	}

IL_02c5:
	{
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) > ((int32_t)((int32_t)417))))
		{
			goto IL_02e8;
		}
	}
	{
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)416))))
		{
			goto IL_0470;
		}
	}
	{
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)417))))
		{
			goto IL_047b;
		}
	}
	{
		goto IL_0591;
	}

IL_02e8:
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)431))))
		{
			goto IL_0486;
		}
	}
	{
		int32_t L_16 = V_0;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)432))))
		{
			goto IL_0491;
		}
	}
	{
		int32_t L_17 = V_0;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)710))))
		{
			goto IL_049c;
		}
	}
	{
		goto IL_0591;
	}

IL_030e:
	{
		int32_t L_18 = V_0;
		if ((((int32_t)L_18) > ((int32_t)((int32_t)8230))))
		{
			goto IL_03c4;
		}
	}
	{
		int32_t L_19 = V_0;
		if ((((int32_t)L_19) > ((int32_t)((int32_t)771))))
		{
			goto IL_034d;
		}
	}
	{
		int32_t L_20 = V_0;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)732))))
		{
			goto IL_04a7;
		}
	}
	{
		int32_t L_21 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)((int32_t)768))))
		{
			case 0:
			{
				goto IL_04b2;
			}
			case 1:
			{
				goto IL_04bd;
			}
			case 2:
			{
				goto IL_0591;
			}
			case 3:
			{
				goto IL_04c8;
			}
		}
	}
	{
		goto IL_0591;
	}

IL_034d:
	{
		int32_t L_22 = V_0;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)777))))
		{
			goto IL_04d3;
		}
	}
	{
		int32_t L_23 = V_0;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)803))))
		{
			goto IL_04de;
		}
	}
	{
		int32_t L_24 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)((int32_t)8211))))
		{
			case 0:
			{
				goto IL_04e9;
			}
			case 1:
			{
				goto IL_04f4;
			}
			case 2:
			{
				goto IL_0591;
			}
			case 3:
			{
				goto IL_0591;
			}
			case 4:
			{
				goto IL_0591;
			}
			case 5:
			{
				goto IL_04ff;
			}
			case 6:
			{
				goto IL_050a;
			}
			case 7:
			{
				goto IL_0515;
			}
			case 8:
			{
				goto IL_0591;
			}
			case 9:
			{
				goto IL_0520;
			}
			case 10:
			{
				goto IL_052b;
			}
			case 11:
			{
				goto IL_0536;
			}
			case 12:
			{
				goto IL_0591;
			}
			case 13:
			{
				goto IL_0541;
			}
			case 14:
			{
				goto IL_0549;
			}
			case 15:
			{
				goto IL_0551;
			}
			case 16:
			{
				goto IL_0591;
			}
			case 17:
			{
				goto IL_0591;
			}
			case 18:
			{
				goto IL_0591;
			}
			case 19:
			{
				goto IL_0559;
			}
		}
	}
	{
		goto IL_0591;
	}

IL_03c4:
	{
		int32_t L_25 = V_0;
		if ((((int32_t)L_25) > ((int32_t)((int32_t)8250))))
		{
			goto IL_03f2;
		}
	}
	{
		int32_t L_26 = V_0;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)8240))))
		{
			goto IL_0561;
		}
	}
	{
		int32_t L_27 = V_0;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)8249))))
		{
			goto IL_0569;
		}
	}
	{
		int32_t L_28 = V_0;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)8250))))
		{
			goto IL_0571;
		}
	}
	{
		goto IL_0591;
	}

IL_03f2:
	{
		int32_t L_29 = V_0;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)8363))))
		{
			goto IL_0579;
		}
	}
	{
		int32_t L_30 = V_0;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)8364))))
		{
			goto IL_0581;
		}
	}
	{
		int32_t L_31 = V_0;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)8482))))
		{
			goto IL_0589;
		}
	}
	{
		goto IL_0591;
	}

IL_0418:
	{
		V_0 = ((int32_t)195);
		goto IL_05c8;
	}

IL_0423:
	{
		V_0 = ((int32_t)227);
		goto IL_05c8;
	}

IL_042e:
	{
		V_0 = ((int32_t)208);
		goto IL_05c8;
	}

IL_0439:
	{
		V_0 = ((int32_t)240);
		goto IL_05c8;
	}

IL_0444:
	{
		V_0 = ((int32_t)140);
		goto IL_05c8;
	}

IL_044f:
	{
		V_0 = ((int32_t)156);
		goto IL_05c8;
	}

IL_045a:
	{
		V_0 = ((int32_t)159);
		goto IL_05c8;
	}

IL_0465:
	{
		V_0 = ((int32_t)131);
		goto IL_05c8;
	}

IL_0470:
	{
		V_0 = ((int32_t)213);
		goto IL_05c8;
	}

IL_047b:
	{
		V_0 = ((int32_t)245);
		goto IL_05c8;
	}

IL_0486:
	{
		V_0 = ((int32_t)221);
		goto IL_05c8;
	}

IL_0491:
	{
		V_0 = ((int32_t)253);
		goto IL_05c8;
	}

IL_049c:
	{
		V_0 = ((int32_t)136);
		goto IL_05c8;
	}

IL_04a7:
	{
		V_0 = ((int32_t)152);
		goto IL_05c8;
	}

IL_04b2:
	{
		V_0 = ((int32_t)204);
		goto IL_05c8;
	}

IL_04bd:
	{
		V_0 = ((int32_t)236);
		goto IL_05c8;
	}

IL_04c8:
	{
		V_0 = ((int32_t)222);
		goto IL_05c8;
	}

IL_04d3:
	{
		V_0 = ((int32_t)210);
		goto IL_05c8;
	}

IL_04de:
	{
		V_0 = ((int32_t)242);
		goto IL_05c8;
	}

IL_04e9:
	{
		V_0 = ((int32_t)150);
		goto IL_05c8;
	}

IL_04f4:
	{
		V_0 = ((int32_t)151);
		goto IL_05c8;
	}

IL_04ff:
	{
		V_0 = ((int32_t)145);
		goto IL_05c8;
	}

IL_050a:
	{
		V_0 = ((int32_t)146);
		goto IL_05c8;
	}

IL_0515:
	{
		V_0 = ((int32_t)130);
		goto IL_05c8;
	}

IL_0520:
	{
		V_0 = ((int32_t)147);
		goto IL_05c8;
	}

IL_052b:
	{
		V_0 = ((int32_t)148);
		goto IL_05c8;
	}

IL_0536:
	{
		V_0 = ((int32_t)132);
		goto IL_05c8;
	}

IL_0541:
	{
		V_0 = ((int32_t)134);
		goto IL_05c8;
	}

IL_0549:
	{
		V_0 = ((int32_t)135);
		goto IL_05c8;
	}

IL_0551:
	{
		V_0 = ((int32_t)149);
		goto IL_05c8;
	}

IL_0559:
	{
		V_0 = ((int32_t)133);
		goto IL_05c8;
	}

IL_0561:
	{
		V_0 = ((int32_t)137);
		goto IL_05c8;
	}

IL_0569:
	{
		V_0 = ((int32_t)139);
		goto IL_05c8;
	}

IL_0571:
	{
		V_0 = ((int32_t)155);
		goto IL_05c8;
	}

IL_0579:
	{
		V_0 = ((int32_t)254);
		goto IL_05c8;
	}

IL_0581:
	{
		V_0 = ((int32_t)128);
		goto IL_05c8;
	}

IL_0589:
	{
		V_0 = ((int32_t)153);
		goto IL_05c8;
	}

IL_0591:
	{
		int32_t L_32 = V_0;
		if ((((int32_t)L_32) < ((int32_t)((int32_t)65281))))
		{
			goto IL_05ab;
		}
	}
	{
		int32_t L_33 = V_0;
		if ((((int32_t)L_33) > ((int32_t)((int32_t)65374))))
		{
			goto IL_05ab;
		}
	}
	{
		int32_t L_34 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_34, (int32_t)((int32_t)65248)));
		goto IL_05c8;
	}

IL_05ab:
	{
		Il2CppChar* L_35 = ___chars0;
		uint8_t* L_36 = ___bytes2;
		MonoEncoding_HandleFallback_m5BBB9A58548D7F4FC29EB94C8033AF716387D94F(__this, (EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 **)(&V_3), (Il2CppChar*)(Il2CppChar*)L_35, (int32_t*)(&V_1), (int32_t*)(&___charCount1), (uint8_t*)(uint8_t*)L_36, (int32_t*)(&V_2), (int32_t*)(&___byteCount3), /*hidden argument*/NULL);
		int32_t L_37 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
		int32_t L_38 = ___charCount1;
		___charCount1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_38, (int32_t)1));
		goto IL_05e6;
	}

IL_05c8:
	{
		uint8_t* L_39 = ___bytes2;
		if ((((intptr_t)L_39) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_05d3;
		}
	}
	{
		uint8_t* L_40 = ___bytes2;
		int32_t L_41 = V_2;
		int32_t L_42 = V_0;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_40, (int32_t)L_41))) = (int8_t)((int32_t)((uint8_t)L_42));
	}

IL_05d3:
	{
		int32_t L_43 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1));
		int32_t L_44 = ___byteCount3;
		___byteCount3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_44, (int32_t)1));
		int32_t L_45 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1));
		int32_t L_46 = ___charCount1;
		___charCount1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_46, (int32_t)1));
	}

IL_05e6:
	{
		int32_t L_47 = ___charCount1;
		if ((((int32_t)L_47) > ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_48 = V_2;
		return L_48;
	}
}
// System.Void I18N.Other.CP1258::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP1258__cctor_m21C732AE46C5C90DB9F37908025D18E5DA291127 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CP1258_t93AD832AF1FFE06D53F4258384FB82C6D423CAD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t5BF9241693AE1DE48403915AA18F028381B734C1____017235096A41990D9488223C8E0D56E35B569736_0_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t5BF9241693AE1DE48403915AA18F028381B734C1____017235096A41990D9488223C8E0D56E35B569736_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((CP1258_t93AD832AF1FFE06D53F4258384FB82C6D423CAD9_StaticFields*)il2cpp_codegen_static_fields_for(CP1258_t93AD832AF1FFE06D53F4258384FB82C6D423CAD9_il2cpp_TypeInfo_var))->set_ToChars_30(L_1);
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
// System.Void I18N.Other.CP20866::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP20866__ctor_m3519F1C4A5B086E6C0C4C8E5AF86C77105525B06 (CP20866_tB32F65B3151CE320A085A67533B92BA74BB716A5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CP20866_tB32F65B3151CE320A085A67533B92BA74BB716A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2239FB6D311A5FA76B445987450592CBD6B477A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE846812E6D771EF69EB2839DD01F821B22484DD3);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CP20866_tB32F65B3151CE320A085A67533B92BA74BB716A5_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = ((CP20866_tB32F65B3151CE320A085A67533B92BA74BB716A5_StaticFields*)il2cpp_codegen_static_fields_for(CP20866_tB32F65B3151CE320A085A67533B92BA74BB716A5_il2cpp_TypeInfo_var))->get_ToChars_30();
		ByteEncoding__ctor_m38C66F0BDFF6CDAF86DA35A4771938B1DA64F2B5(__this, ((int32_t)20866), L_0, _stringLiteralD2239FB6D311A5FA76B445987450592CBD6B477A, _stringLiteralE846812E6D771EF69EB2839DD01F821B22484DD3, _stringLiteralE846812E6D771EF69EB2839DD01F821B22484DD3, _stringLiteralE846812E6D771EF69EB2839DD01F821B22484DD3, (bool)1, (bool)1, (bool)1, (bool)1, ((int32_t)1251), /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 I18N.Other.CP20866::GetByteCountImpl(System.Char*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP20866_GetByteCountImpl_mC1C1499CA0660CAA193DCFC9E302C2C5FC9F35A8 (CP20866_tB32F65B3151CE320A085A67533B92BA74BB716A5 * __this, Il2CppChar* ___chars0, int32_t ___count1, const RuntimeMethod* method)
{
	{
		EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * L_0;
		L_0 = Encoding_get_EncoderFallback_m8DF6B8EC2F7AA69AF9129C5334D1FAFE13081152_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Il2CppChar* L_1 = ___chars0;
		int32_t L_2 = ___count1;
		int32_t L_3;
		L_3 = VirtFuncInvoker4< int32_t, Il2CppChar*, int32_t, uint8_t*, int32_t >::Invoke(48 /* System.Int32 I18N.Common.MonoEncoding::GetBytesImpl(System.Char*,System.Int32,System.Byte*,System.Int32) */, __this, (Il2CppChar*)(Il2CppChar*)L_1, L_2, (uint8_t*)(uint8_t*)((uintptr_t)0), 0);
		return L_3;
	}

IL_0014:
	{
		int32_t L_4 = ___count1;
		return L_4;
	}
}
// System.Int32 I18N.Other.CP20866::GetByteCount(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP20866_GetByteCount_m890E90316BBA34D057E484016182C831972B537A (CP20866_tB32F65B3151CE320A085A67533B92BA74BB716A5 * __this, String_t* ___s0, const RuntimeMethod* method)
{
	Il2CppChar* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * L_0;
		L_0 = Encoding_get_EncoderFallback_m8DF6B8EC2F7AA69AF9129C5334D1FAFE13081152_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_1 = ___s0;
		V_1 = L_1;
		String_t* L_2 = V_1;
		V_0 = (Il2CppChar*)((uintptr_t)L_2);
		Il2CppChar* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		Il2CppChar* L_4 = V_0;
		int32_t L_5;
		L_5 = RuntimeHelpers_get_OffsetToStringData_mEB8E6EAEBAFAB7CD7F7A915B3081785AABB9FC42(/*hidden argument*/NULL);
		V_0 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_4, (int32_t)L_5));
	}

IL_0018:
	{
		Il2CppChar* L_6 = V_0;
		String_t* L_7 = ___s0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_7, /*hidden argument*/NULL);
		int32_t L_9;
		L_9 = VirtFuncInvoker4< int32_t, Il2CppChar*, int32_t, uint8_t*, int32_t >::Invoke(48 /* System.Int32 I18N.Common.MonoEncoding::GetBytesImpl(System.Char*,System.Int32,System.Byte*,System.Int32) */, __this, (Il2CppChar*)(Il2CppChar*)L_6, L_8, (uint8_t*)(uint8_t*)((uintptr_t)0), 0);
		return L_9;
	}

IL_0029:
	{
		String_t* L_10 = ___s0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.Void I18N.Other.CP20866::ToBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP20866_ToBytes_m9DFE5A1B4C29E0D3553A88899AAE8ADAD047A27B (CP20866_tB32F65B3151CE320A085A67533B92BA74BB716A5 * __this, Il2CppChar* ___chars0, int32_t ___charCount1, uint8_t* ___bytes2, int32_t ___byteCount3, const RuntimeMethod* method)
{
	{
		uint8_t* L_0 = ___bytes2;
		if ((!(((uintptr_t)L_0) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_0010;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral77B615B8ED1ABB8FC1395D85A5AE524A9789D947)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CP20866_ToBytes_m9DFE5A1B4C29E0D3553A88899AAE8ADAD047A27B_RuntimeMethod_var)));
	}

IL_0010:
	{
		Il2CppChar* L_2 = ___chars0;
		int32_t L_3 = ___charCount1;
		uint8_t* L_4 = ___bytes2;
		int32_t L_5 = ___byteCount3;
		int32_t L_6;
		L_6 = VirtFuncInvoker4< int32_t, Il2CppChar*, int32_t, uint8_t*, int32_t >::Invoke(48 /* System.Int32 I18N.Common.MonoEncoding::GetBytesImpl(System.Char*,System.Int32,System.Byte*,System.Int32) */, __this, (Il2CppChar*)(Il2CppChar*)L_2, L_3, (uint8_t*)(uint8_t*)L_4, L_5);
		return;
	}
}
// System.Int32 I18N.Other.CP20866::GetBytesImpl(System.Char*,System.Int32,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP20866_GetBytesImpl_m5FFC7CA8F20635250D936E6498A8443E56CD8209 (CP20866_tB32F65B3151CE320A085A67533B92BA74BB716A5 * __this, Il2CppChar* ___chars0, int32_t ___charCount1, uint8_t* ___bytes2, int32_t ___byteCount3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 * V_3 = NULL;
	{
		V_1 = 0;
		V_2 = 0;
		V_3 = (EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 *)NULL;
		goto IL_0854;
	}

IL_000b:
	{
		Il2CppChar* L_0 = ___chars0;
		int32_t L_1 = V_1;
		int32_t L_2 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_1), (int32_t)2)))));
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)((int32_t)128))))
		{
			goto IL_0836;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)9474))))
		{
			goto IL_0281;
		}
	}
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) > ((int32_t)((int32_t)8729))))
		{
			goto IL_01fd;
		}
	}
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) > ((int32_t)((int32_t)178))))
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) > ((int32_t)((int32_t)169))))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)160))))
		{
			goto IL_047b;
		}
	}
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)169))))
		{
			goto IL_0486;
		}
	}
	{
		goto IL_07ff;
	}

IL_005f:
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)176))))
		{
			goto IL_0491;
		}
	}
	{
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)178))))
		{
			goto IL_049c;
		}
	}
	{
		goto IL_07ff;
	}

IL_007a:
	{
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) > ((int32_t)((int32_t)247))))
		{
			goto IL_009d;
		}
	}
	{
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)183))))
		{
			goto IL_04a7;
		}
	}
	{
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)247))))
		{
			goto IL_04b2;
		}
	}
	{
		goto IL_07ff;
	}

IL_009d:
	{
		int32_t L_15 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)((int32_t)1025))))
		{
			case 0:
			{
				goto IL_04bd;
			}
			case 1:
			{
				goto IL_07ff;
			}
			case 2:
			{
				goto IL_07ff;
			}
			case 3:
			{
				goto IL_07ff;
			}
			case 4:
			{
				goto IL_07ff;
			}
			case 5:
			{
				goto IL_07ff;
			}
			case 6:
			{
				goto IL_07ff;
			}
			case 7:
			{
				goto IL_07ff;
			}
			case 8:
			{
				goto IL_07ff;
			}
			case 9:
			{
				goto IL_07ff;
			}
			case 10:
			{
				goto IL_07ff;
			}
			case 11:
			{
				goto IL_07ff;
			}
			case 12:
			{
				goto IL_07ff;
			}
			case 13:
			{
				goto IL_07ff;
			}
			case 14:
			{
				goto IL_07ff;
			}
			case 15:
			{
				goto IL_04c8;
			}
			case 16:
			{
				goto IL_04d3;
			}
			case 17:
			{
				goto IL_04de;
			}
			case 18:
			{
				goto IL_04e9;
			}
			case 19:
			{
				goto IL_04f4;
			}
			case 20:
			{
				goto IL_04ff;
			}
			case 21:
			{
				goto IL_050a;
			}
			case 22:
			{
				goto IL_0515;
			}
			case 23:
			{
				goto IL_0520;
			}
			case 24:
			{
				goto IL_0520;
			}
			case 25:
			{
				goto IL_0520;
			}
			case 26:
			{
				goto IL_0520;
			}
			case 27:
			{
				goto IL_0520;
			}
			case 28:
			{
				goto IL_0520;
			}
			case 29:
			{
				goto IL_0520;
			}
			case 30:
			{
				goto IL_0520;
			}
			case 31:
			{
				goto IL_052d;
			}
			case 32:
			{
				goto IL_052d;
			}
			case 33:
			{
				goto IL_052d;
			}
			case 34:
			{
				goto IL_052d;
			}
			case 35:
			{
				goto IL_053a;
			}
			case 36:
			{
				goto IL_0545;
			}
			case 37:
			{
				goto IL_0550;
			}
			case 38:
			{
				goto IL_055b;
			}
			case 39:
			{
				goto IL_0566;
			}
			case 40:
			{
				goto IL_0571;
			}
			case 41:
			{
				goto IL_057c;
			}
			case 42:
			{
				goto IL_0587;
			}
			case 43:
			{
				goto IL_0592;
			}
			case 44:
			{
				goto IL_059d;
			}
			case 45:
			{
				goto IL_05a8;
			}
			case 46:
			{
				goto IL_05b3;
			}
			case 47:
			{
				goto IL_05be;
			}
			case 48:
			{
				goto IL_05c9;
			}
			case 49:
			{
				goto IL_05d4;
			}
			case 50:
			{
				goto IL_05df;
			}
			case 51:
			{
				goto IL_05ea;
			}
			case 52:
			{
				goto IL_05f5;
			}
			case 53:
			{
				goto IL_0600;
			}
			case 54:
			{
				goto IL_060b;
			}
			case 55:
			{
				goto IL_0616;
			}
			case 56:
			{
				goto IL_0616;
			}
			case 57:
			{
				goto IL_0616;
			}
			case 58:
			{
				goto IL_0616;
			}
			case 59:
			{
				goto IL_0616;
			}
			case 60:
			{
				goto IL_0616;
			}
			case 61:
			{
				goto IL_0616;
			}
			case 62:
			{
				goto IL_0616;
			}
			case 63:
			{
				goto IL_0623;
			}
			case 64:
			{
				goto IL_0623;
			}
			case 65:
			{
				goto IL_0623;
			}
			case 66:
			{
				goto IL_0623;
			}
			case 67:
			{
				goto IL_0630;
			}
			case 68:
			{
				goto IL_063b;
			}
			case 69:
			{
				goto IL_0646;
			}
			case 70:
			{
				goto IL_0651;
			}
			case 71:
			{
				goto IL_065c;
			}
			case 72:
			{
				goto IL_0667;
			}
			case 73:
			{
				goto IL_0672;
			}
			case 74:
			{
				goto IL_067d;
			}
			case 75:
			{
				goto IL_0688;
			}
			case 76:
			{
				goto IL_0693;
			}
			case 77:
			{
				goto IL_069e;
			}
			case 78:
			{
				goto IL_06a9;
			}
			case 79:
			{
				goto IL_07ff;
			}
			case 80:
			{
				goto IL_06b4;
			}
		}
	}
	{
		int32_t L_16 = V_0;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)8729))))
		{
			goto IL_06bf;
		}
	}
	{
		goto IL_07ff;
	}

IL_01fd:
	{
		int32_t L_17 = V_0;
		if ((((int32_t)L_17) > ((int32_t)((int32_t)8805))))
		{
			goto IL_0243;
		}
	}
	{
		int32_t L_18 = V_0;
		if ((((int32_t)L_18) > ((int32_t)((int32_t)8776))))
		{
			goto IL_0228;
		}
	}
	{
		int32_t L_19 = V_0;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)8730))))
		{
			goto IL_06ca;
		}
	}
	{
		int32_t L_20 = V_0;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)8776))))
		{
			goto IL_06d5;
		}
	}
	{
		goto IL_07ff;
	}

IL_0228:
	{
		int32_t L_21 = V_0;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)8804))))
		{
			goto IL_06e0;
		}
	}
	{
		int32_t L_22 = V_0;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)8805))))
		{
			goto IL_06eb;
		}
	}
	{
		goto IL_07ff;
	}

IL_0243:
	{
		int32_t L_23 = V_0;
		if ((((int32_t)L_23) > ((int32_t)((int32_t)8993))))
		{
			goto IL_0266;
		}
	}
	{
		int32_t L_24 = V_0;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)8992))))
		{
			goto IL_06f6;
		}
	}
	{
		int32_t L_25 = V_0;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)8993))))
		{
			goto IL_0701;
		}
	}
	{
		goto IL_07ff;
	}

IL_0266:
	{
		int32_t L_26 = V_0;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)9472))))
		{
			goto IL_070c;
		}
	}
	{
		int32_t L_27 = V_0;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)9474))))
		{
			goto IL_0717;
		}
	}
	{
		goto IL_07ff;
	}

IL_0281:
	{
		int32_t L_28 = V_0;
		if ((((int32_t)L_28) > ((int32_t)((int32_t)9580))))
		{
			goto IL_03f5;
		}
	}
	{
		int32_t L_29 = V_0;
		if ((((int32_t)L_29) > ((int32_t)((int32_t)9496))))
		{
			goto IL_02d2;
		}
	}
	{
		int32_t L_30 = V_0;
		if ((((int32_t)L_30) > ((int32_t)((int32_t)9488))))
		{
			goto IL_02b7;
		}
	}
	{
		int32_t L_31 = V_0;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)9484))))
		{
			goto IL_0722;
		}
	}
	{
		int32_t L_32 = V_0;
		if ((((int32_t)L_32) == ((int32_t)((int32_t)9488))))
		{
			goto IL_072d;
		}
	}
	{
		goto IL_07ff;
	}

IL_02b7:
	{
		int32_t L_33 = V_0;
		if ((((int32_t)L_33) == ((int32_t)((int32_t)9492))))
		{
			goto IL_0738;
		}
	}
	{
		int32_t L_34 = V_0;
		if ((((int32_t)L_34) == ((int32_t)((int32_t)9496))))
		{
			goto IL_0743;
		}
	}
	{
		goto IL_07ff;
	}

IL_02d2:
	{
		int32_t L_35 = V_0;
		if ((((int32_t)L_35) > ((int32_t)((int32_t)9508))))
		{
			goto IL_02f5;
		}
	}
	{
		int32_t L_36 = V_0;
		if ((((int32_t)L_36) == ((int32_t)((int32_t)9500))))
		{
			goto IL_074e;
		}
	}
	{
		int32_t L_37 = V_0;
		if ((((int32_t)L_37) == ((int32_t)((int32_t)9508))))
		{
			goto IL_0759;
		}
	}
	{
		goto IL_07ff;
	}

IL_02f5:
	{
		int32_t L_38 = V_0;
		if ((((int32_t)L_38) == ((int32_t)((int32_t)9516))))
		{
			goto IL_0764;
		}
	}
	{
		int32_t L_39 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)((int32_t)9524))))
		{
			case 0:
			{
				goto IL_076f;
			}
			case 1:
			{
				goto IL_07ff;
			}
			case 2:
			{
				goto IL_07ff;
			}
			case 3:
			{
				goto IL_07ff;
			}
			case 4:
			{
				goto IL_07ff;
			}
			case 5:
			{
				goto IL_07ff;
			}
			case 6:
			{
				goto IL_07ff;
			}
			case 7:
			{
				goto IL_07ff;
			}
			case 8:
			{
				goto IL_077a;
			}
			case 9:
			{
				goto IL_07ff;
			}
			case 10:
			{
				goto IL_07ff;
			}
			case 11:
			{
				goto IL_07ff;
			}
			case 12:
			{
				goto IL_07ff;
			}
			case 13:
			{
				goto IL_07ff;
			}
			case 14:
			{
				goto IL_07ff;
			}
			case 15:
			{
				goto IL_07ff;
			}
			case 16:
			{
				goto IL_07ff;
			}
			case 17:
			{
				goto IL_07ff;
			}
			case 18:
			{
				goto IL_07ff;
			}
			case 19:
			{
				goto IL_07ff;
			}
			case 20:
			{
				goto IL_07ff;
			}
			case 21:
			{
				goto IL_07ff;
			}
			case 22:
			{
				goto IL_07ff;
			}
			case 23:
			{
				goto IL_07ff;
			}
			case 24:
			{
				goto IL_07ff;
			}
			case 25:
			{
				goto IL_07ff;
			}
			case 26:
			{
				goto IL_07ff;
			}
			case 27:
			{
				goto IL_07ff;
			}
			case 28:
			{
				goto IL_0785;
			}
			case 29:
			{
				goto IL_0790;
			}
			case 30:
			{
				goto IL_079b;
			}
			case 31:
			{
				goto IL_07a6;
			}
			case 32:
			{
				goto IL_07a6;
			}
			case 33:
			{
				goto IL_07a6;
			}
			case 34:
			{
				goto IL_07a6;
			}
			case 35:
			{
				goto IL_07a6;
			}
			case 36:
			{
				goto IL_07a6;
			}
			case 37:
			{
				goto IL_07a6;
			}
			case 38:
			{
				goto IL_07a6;
			}
			case 39:
			{
				goto IL_07a6;
			}
			case 40:
			{
				goto IL_07a6;
			}
			case 41:
			{
				goto IL_07a6;
			}
			case 42:
			{
				goto IL_07a6;
			}
			case 43:
			{
				goto IL_07a6;
			}
			case 44:
			{
				goto IL_07a6;
			}
			case 45:
			{
				goto IL_07a6;
			}
			case 46:
			{
				goto IL_07b3;
			}
			case 47:
			{
				goto IL_07b3;
			}
			case 48:
			{
				goto IL_07b3;
			}
			case 49:
			{
				goto IL_07b3;
			}
			case 50:
			{
				goto IL_07b3;
			}
			case 51:
			{
				goto IL_07b3;
			}
			case 52:
			{
				goto IL_07b3;
			}
			case 53:
			{
				goto IL_07b3;
			}
			case 54:
			{
				goto IL_07b3;
			}
			case 55:
			{
				goto IL_07b3;
			}
			case 56:
			{
				goto IL_07b3;
			}
		}
	}
	{
		goto IL_07ff;
	}

IL_03f5:
	{
		int32_t L_40 = V_0;
		if ((((int32_t)L_40) > ((int32_t)((int32_t)9612))))
		{
			goto IL_043b;
		}
	}
	{
		int32_t L_41 = V_0;
		if ((((int32_t)L_41) > ((int32_t)((int32_t)9604))))
		{
			goto IL_0420;
		}
	}
	{
		int32_t L_42 = V_0;
		if ((((int32_t)L_42) == ((int32_t)((int32_t)9600))))
		{
			goto IL_07bd;
		}
	}
	{
		int32_t L_43 = V_0;
		if ((((int32_t)L_43) == ((int32_t)((int32_t)9604))))
		{
			goto IL_07c5;
		}
	}
	{
		goto IL_07ff;
	}

IL_0420:
	{
		int32_t L_44 = V_0;
		if ((((int32_t)L_44) == ((int32_t)((int32_t)9608))))
		{
			goto IL_07cd;
		}
	}
	{
		int32_t L_45 = V_0;
		if ((((int32_t)L_45) == ((int32_t)((int32_t)9612))))
		{
			goto IL_07d5;
		}
	}
	{
		goto IL_07ff;
	}

IL_043b:
	{
		int32_t L_46 = V_0;
		if ((((int32_t)L_46) > ((int32_t)((int32_t)9632))))
		{
			goto IL_0460;
		}
	}
	{
		int32_t L_47 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_47, (int32_t)((int32_t)9616)))) > ((uint32_t)3))))
		{
			goto IL_07dd;
		}
	}
	{
		int32_t L_48 = V_0;
		if ((((int32_t)L_48) == ((int32_t)((int32_t)9632))))
		{
			goto IL_07e7;
		}
	}
	{
		goto IL_07ff;
	}

IL_0460:
	{
		int32_t L_49 = V_0;
		if ((((int32_t)L_49) == ((int32_t)((int32_t)65512))))
		{
			goto IL_07ef;
		}
	}
	{
		int32_t L_50 = V_0;
		if ((((int32_t)L_50) == ((int32_t)((int32_t)65517))))
		{
			goto IL_07f7;
		}
	}
	{
		goto IL_07ff;
	}

IL_047b:
	{
		V_0 = ((int32_t)154);
		goto IL_0836;
	}

IL_0486:
	{
		V_0 = ((int32_t)191);
		goto IL_0836;
	}

IL_0491:
	{
		V_0 = ((int32_t)156);
		goto IL_0836;
	}

IL_049c:
	{
		V_0 = ((int32_t)157);
		goto IL_0836;
	}

IL_04a7:
	{
		V_0 = ((int32_t)158);
		goto IL_0836;
	}

IL_04b2:
	{
		V_0 = ((int32_t)159);
		goto IL_0836;
	}

IL_04bd:
	{
		V_0 = ((int32_t)179);
		goto IL_0836;
	}

IL_04c8:
	{
		V_0 = ((int32_t)225);
		goto IL_0836;
	}

IL_04d3:
	{
		V_0 = ((int32_t)226);
		goto IL_0836;
	}

IL_04de:
	{
		V_0 = ((int32_t)247);
		goto IL_0836;
	}

IL_04e9:
	{
		V_0 = ((int32_t)231);
		goto IL_0836;
	}

IL_04f4:
	{
		V_0 = ((int32_t)228);
		goto IL_0836;
	}

IL_04ff:
	{
		V_0 = ((int32_t)229);
		goto IL_0836;
	}

IL_050a:
	{
		V_0 = ((int32_t)246);
		goto IL_0836;
	}

IL_0515:
	{
		V_0 = ((int32_t)250);
		goto IL_0836;
	}

IL_0520:
	{
		int32_t L_51 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_51, (int32_t)((int32_t)815)));
		goto IL_0836;
	}

IL_052d:
	{
		int32_t L_52 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_52, (int32_t)((int32_t)814)));
		goto IL_0836;
	}

IL_053a:
	{
		V_0 = ((int32_t)230);
		goto IL_0836;
	}

IL_0545:
	{
		V_0 = ((int32_t)232);
		goto IL_0836;
	}

IL_0550:
	{
		V_0 = ((int32_t)227);
		goto IL_0836;
	}

IL_055b:
	{
		V_0 = ((int32_t)254);
		goto IL_0836;
	}

IL_0566:
	{
		V_0 = ((int32_t)251);
		goto IL_0836;
	}

IL_0571:
	{
		V_0 = ((int32_t)253);
		goto IL_0836;
	}

IL_057c:
	{
		V_0 = ((int32_t)255);
		goto IL_0836;
	}

IL_0587:
	{
		V_0 = ((int32_t)249);
		goto IL_0836;
	}

IL_0592:
	{
		V_0 = ((int32_t)248);
		goto IL_0836;
	}

IL_059d:
	{
		V_0 = ((int32_t)252);
		goto IL_0836;
	}

IL_05a8:
	{
		V_0 = ((int32_t)224);
		goto IL_0836;
	}

IL_05b3:
	{
		V_0 = ((int32_t)241);
		goto IL_0836;
	}

IL_05be:
	{
		V_0 = ((int32_t)193);
		goto IL_0836;
	}

IL_05c9:
	{
		V_0 = ((int32_t)194);
		goto IL_0836;
	}

IL_05d4:
	{
		V_0 = ((int32_t)215);
		goto IL_0836;
	}

IL_05df:
	{
		V_0 = ((int32_t)199);
		goto IL_0836;
	}

IL_05ea:
	{
		V_0 = ((int32_t)196);
		goto IL_0836;
	}

IL_05f5:
	{
		V_0 = ((int32_t)197);
		goto IL_0836;
	}

IL_0600:
	{
		V_0 = ((int32_t)214);
		goto IL_0836;
	}

IL_060b:
	{
		V_0 = ((int32_t)218);
		goto IL_0836;
	}

IL_0616:
	{
		int32_t L_53 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_53, (int32_t)((int32_t)879)));
		goto IL_0836;
	}

IL_0623:
	{
		int32_t L_54 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_54, (int32_t)((int32_t)878)));
		goto IL_0836;
	}

IL_0630:
	{
		V_0 = ((int32_t)198);
		goto IL_0836;
	}

IL_063b:
	{
		V_0 = ((int32_t)200);
		goto IL_0836;
	}

IL_0646:
	{
		V_0 = ((int32_t)195);
		goto IL_0836;
	}

IL_0651:
	{
		V_0 = ((int32_t)222);
		goto IL_0836;
	}

IL_065c:
	{
		V_0 = ((int32_t)219);
		goto IL_0836;
	}

IL_0667:
	{
		V_0 = ((int32_t)221);
		goto IL_0836;
	}

IL_0672:
	{
		V_0 = ((int32_t)223);
		goto IL_0836;
	}

IL_067d:
	{
		V_0 = ((int32_t)217);
		goto IL_0836;
	}

IL_0688:
	{
		V_0 = ((int32_t)216);
		goto IL_0836;
	}

IL_0693:
	{
		V_0 = ((int32_t)220);
		goto IL_0836;
	}

IL_069e:
	{
		V_0 = ((int32_t)192);
		goto IL_0836;
	}

IL_06a9:
	{
		V_0 = ((int32_t)209);
		goto IL_0836;
	}

IL_06b4:
	{
		V_0 = ((int32_t)163);
		goto IL_0836;
	}

IL_06bf:
	{
		V_0 = ((int32_t)149);
		goto IL_0836;
	}

IL_06ca:
	{
		V_0 = ((int32_t)150);
		goto IL_0836;
	}

IL_06d5:
	{
		V_0 = ((int32_t)151);
		goto IL_0836;
	}

IL_06e0:
	{
		V_0 = ((int32_t)152);
		goto IL_0836;
	}

IL_06eb:
	{
		V_0 = ((int32_t)153);
		goto IL_0836;
	}

IL_06f6:
	{
		V_0 = ((int32_t)147);
		goto IL_0836;
	}

IL_0701:
	{
		V_0 = ((int32_t)155);
		goto IL_0836;
	}

IL_070c:
	{
		V_0 = ((int32_t)128);
		goto IL_0836;
	}

IL_0717:
	{
		V_0 = ((int32_t)129);
		goto IL_0836;
	}

IL_0722:
	{
		V_0 = ((int32_t)130);
		goto IL_0836;
	}

IL_072d:
	{
		V_0 = ((int32_t)131);
		goto IL_0836;
	}

IL_0738:
	{
		V_0 = ((int32_t)132);
		goto IL_0836;
	}

IL_0743:
	{
		V_0 = ((int32_t)133);
		goto IL_0836;
	}

IL_074e:
	{
		V_0 = ((int32_t)134);
		goto IL_0836;
	}

IL_0759:
	{
		V_0 = ((int32_t)135);
		goto IL_0836;
	}

IL_0764:
	{
		V_0 = ((int32_t)136);
		goto IL_0836;
	}

IL_076f:
	{
		V_0 = ((int32_t)137);
		goto IL_0836;
	}

IL_077a:
	{
		V_0 = ((int32_t)138);
		goto IL_0836;
	}

IL_0785:
	{
		V_0 = ((int32_t)160);
		goto IL_0836;
	}

IL_0790:
	{
		V_0 = ((int32_t)161);
		goto IL_0836;
	}

IL_079b:
	{
		V_0 = ((int32_t)162);
		goto IL_0836;
	}

IL_07a6:
	{
		int32_t L_55 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_55, (int32_t)((int32_t)9391)));
		goto IL_0836;
	}

IL_07b3:
	{
		int32_t L_56 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_56, (int32_t)((int32_t)9390)));
		goto IL_0836;
	}

IL_07bd:
	{
		V_0 = ((int32_t)139);
		goto IL_0836;
	}

IL_07c5:
	{
		V_0 = ((int32_t)140);
		goto IL_0836;
	}

IL_07cd:
	{
		V_0 = ((int32_t)141);
		goto IL_0836;
	}

IL_07d5:
	{
		V_0 = ((int32_t)142);
		goto IL_0836;
	}

IL_07dd:
	{
		int32_t L_57 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_57, (int32_t)((int32_t)9473)));
		goto IL_0836;
	}

IL_07e7:
	{
		V_0 = ((int32_t)148);
		goto IL_0836;
	}

IL_07ef:
	{
		V_0 = ((int32_t)129);
		goto IL_0836;
	}

IL_07f7:
	{
		V_0 = ((int32_t)148);
		goto IL_0836;
	}

IL_07ff:
	{
		int32_t L_58 = V_0;
		if ((((int32_t)L_58) < ((int32_t)((int32_t)65281))))
		{
			goto IL_0819;
		}
	}
	{
		int32_t L_59 = V_0;
		if ((((int32_t)L_59) > ((int32_t)((int32_t)65374))))
		{
			goto IL_0819;
		}
	}
	{
		int32_t L_60 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_60, (int32_t)((int32_t)65248)));
		goto IL_0836;
	}

IL_0819:
	{
		Il2CppChar* L_61 = ___chars0;
		uint8_t* L_62 = ___bytes2;
		MonoEncoding_HandleFallback_m5BBB9A58548D7F4FC29EB94C8033AF716387D94F(__this, (EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 **)(&V_3), (Il2CppChar*)(Il2CppChar*)L_61, (int32_t*)(&V_1), (int32_t*)(&___charCount1), (uint8_t*)(uint8_t*)L_62, (int32_t*)(&V_2), (int32_t*)(&___byteCount3), /*hidden argument*/NULL);
		int32_t L_63 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)1));
		int32_t L_64 = ___charCount1;
		___charCount1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_64, (int32_t)1));
		goto IL_0854;
	}

IL_0836:
	{
		uint8_t* L_65 = ___bytes2;
		if ((((intptr_t)L_65) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0841;
		}
	}
	{
		uint8_t* L_66 = ___bytes2;
		int32_t L_67 = V_2;
		int32_t L_68 = V_0;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_66, (int32_t)L_67))) = (int8_t)((int32_t)((uint8_t)L_68));
	}

IL_0841:
	{
		int32_t L_69 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_69, (int32_t)1));
		int32_t L_70 = ___byteCount3;
		___byteCount3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_70, (int32_t)1));
		int32_t L_71 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_71, (int32_t)1));
		int32_t L_72 = ___charCount1;
		___charCount1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_72, (int32_t)1));
	}

IL_0854:
	{
		int32_t L_73 = ___charCount1;
		if ((((int32_t)L_73) > ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_74 = V_2;
		return L_74;
	}
}
// System.Void I18N.Other.CP20866::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP20866__cctor_mBCF93D1BA0A85396C43C9150F861537934F66328 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CP20866_tB32F65B3151CE320A085A67533B92BA74BB716A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t5BF9241693AE1DE48403915AA18F028381B734C1____3D24D1DCE9501F8E7DFB95BC7CA7EACB21704404_3_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t5BF9241693AE1DE48403915AA18F028381B734C1____3D24D1DCE9501F8E7DFB95BC7CA7EACB21704404_3_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((CP20866_tB32F65B3151CE320A085A67533B92BA74BB716A5_StaticFields*)il2cpp_codegen_static_fields_for(CP20866_tB32F65B3151CE320A085A67533B92BA74BB716A5_il2cpp_TypeInfo_var))->set_ToChars_30(L_1);
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
// System.Void I18N.Other.CP21866::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP21866__ctor_m28ED8DD9C1F0881434328237D8C81530E82332D8 (CP21866_t3C1E45BEF3F191BEF75E920F10395570AD55077C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CP21866_t3C1E45BEF3F191BEF75E920F10395570AD55077C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23E50B556D87C26CCBF71558CB31C3F5631FCB81);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7AE3626E857A47172A716EF331B27CA2491BD61);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CP21866_t3C1E45BEF3F191BEF75E920F10395570AD55077C_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = ((CP21866_t3C1E45BEF3F191BEF75E920F10395570AD55077C_StaticFields*)il2cpp_codegen_static_fields_for(CP21866_t3C1E45BEF3F191BEF75E920F10395570AD55077C_il2cpp_TypeInfo_var))->get_ToChars_30();
		ByteEncoding__ctor_m38C66F0BDFF6CDAF86DA35A4771938B1DA64F2B5(__this, ((int32_t)21866), L_0, _stringLiteralC7AE3626E857A47172A716EF331B27CA2491BD61, _stringLiteral23E50B556D87C26CCBF71558CB31C3F5631FCB81, _stringLiteral23E50B556D87C26CCBF71558CB31C3F5631FCB81, _stringLiteral23E50B556D87C26CCBF71558CB31C3F5631FCB81, (bool)1, (bool)1, (bool)1, (bool)1, ((int32_t)1251), /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 I18N.Other.CP21866::GetByteCountImpl(System.Char*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP21866_GetByteCountImpl_m35D8AA3FE2D146F5E1B5267DCAD8411C9D851B32 (CP21866_t3C1E45BEF3F191BEF75E920F10395570AD55077C * __this, Il2CppChar* ___chars0, int32_t ___count1, const RuntimeMethod* method)
{
	{
		EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * L_0;
		L_0 = Encoding_get_EncoderFallback_m8DF6B8EC2F7AA69AF9129C5334D1FAFE13081152_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Il2CppChar* L_1 = ___chars0;
		int32_t L_2 = ___count1;
		int32_t L_3;
		L_3 = VirtFuncInvoker4< int32_t, Il2CppChar*, int32_t, uint8_t*, int32_t >::Invoke(48 /* System.Int32 I18N.Common.MonoEncoding::GetBytesImpl(System.Char*,System.Int32,System.Byte*,System.Int32) */, __this, (Il2CppChar*)(Il2CppChar*)L_1, L_2, (uint8_t*)(uint8_t*)((uintptr_t)0), 0);
		return L_3;
	}

IL_0014:
	{
		int32_t L_4 = ___count1;
		return L_4;
	}
}
// System.Int32 I18N.Other.CP21866::GetByteCount(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP21866_GetByteCount_m2B884EAF49D0002F5E53DB6878207CC022AC5385 (CP21866_t3C1E45BEF3F191BEF75E920F10395570AD55077C * __this, String_t* ___s0, const RuntimeMethod* method)
{
	Il2CppChar* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * L_0;
		L_0 = Encoding_get_EncoderFallback_m8DF6B8EC2F7AA69AF9129C5334D1FAFE13081152_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_1 = ___s0;
		V_1 = L_1;
		String_t* L_2 = V_1;
		V_0 = (Il2CppChar*)((uintptr_t)L_2);
		Il2CppChar* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		Il2CppChar* L_4 = V_0;
		int32_t L_5;
		L_5 = RuntimeHelpers_get_OffsetToStringData_mEB8E6EAEBAFAB7CD7F7A915B3081785AABB9FC42(/*hidden argument*/NULL);
		V_0 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_4, (int32_t)L_5));
	}

IL_0018:
	{
		Il2CppChar* L_6 = V_0;
		String_t* L_7 = ___s0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_7, /*hidden argument*/NULL);
		int32_t L_9;
		L_9 = VirtFuncInvoker4< int32_t, Il2CppChar*, int32_t, uint8_t*, int32_t >::Invoke(48 /* System.Int32 I18N.Common.MonoEncoding::GetBytesImpl(System.Char*,System.Int32,System.Byte*,System.Int32) */, __this, (Il2CppChar*)(Il2CppChar*)L_6, L_8, (uint8_t*)(uint8_t*)((uintptr_t)0), 0);
		return L_9;
	}

IL_0029:
	{
		String_t* L_10 = ___s0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.Void I18N.Other.CP21866::ToBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP21866_ToBytes_m9A64D5B840AB8F0A0280272D6B60BDD035D612F9 (CP21866_t3C1E45BEF3F191BEF75E920F10395570AD55077C * __this, Il2CppChar* ___chars0, int32_t ___charCount1, uint8_t* ___bytes2, int32_t ___byteCount3, const RuntimeMethod* method)
{
	{
		uint8_t* L_0 = ___bytes2;
		if ((!(((uintptr_t)L_0) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_0010;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral77B615B8ED1ABB8FC1395D85A5AE524A9789D947)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CP21866_ToBytes_m9A64D5B840AB8F0A0280272D6B60BDD035D612F9_RuntimeMethod_var)));
	}

IL_0010:
	{
		Il2CppChar* L_2 = ___chars0;
		int32_t L_3 = ___charCount1;
		uint8_t* L_4 = ___bytes2;
		int32_t L_5 = ___byteCount3;
		int32_t L_6;
		L_6 = VirtFuncInvoker4< int32_t, Il2CppChar*, int32_t, uint8_t*, int32_t >::Invoke(48 /* System.Int32 I18N.Common.MonoEncoding::GetBytesImpl(System.Char*,System.Int32,System.Byte*,System.Int32) */, __this, (Il2CppChar*)(Il2CppChar*)L_2, L_3, (uint8_t*)(uint8_t*)L_4, L_5);
		return;
	}
}
// System.Int32 I18N.Other.CP21866::GetBytesImpl(System.Char*,System.Int32,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP21866_GetBytesImpl_mD7AA75A97EE614294C8AB9010C5A41EEA8290ED1 (CP21866_t3C1E45BEF3F191BEF75E920F10395570AD55077C * __this, Il2CppChar* ___chars0, int32_t ___charCount1, uint8_t* ___bytes2, int32_t ___byteCount3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 * V_3 = NULL;
	{
		V_1 = 0;
		V_2 = 0;
		V_3 = (EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 *)NULL;
		goto IL_095a;
	}

IL_000b:
	{
		Il2CppChar* L_0 = ___chars0;
		int32_t L_1 = V_1;
		int32_t L_2 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_1), (int32_t)2)))));
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)((int32_t)128))))
		{
			goto IL_093c;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)9474))))
		{
			goto IL_0381;
		}
	}
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) > ((int32_t)((int32_t)8729))))
		{
			goto IL_02fd;
		}
	}
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) > ((int32_t)((int32_t)178))))
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) > ((int32_t)((int32_t)169))))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)160))))
		{
			goto IL_0511;
		}
	}
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)169))))
		{
			goto IL_051c;
		}
	}
	{
		goto IL_0905;
	}

IL_005f:
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)176))))
		{
			goto IL_0527;
		}
	}
	{
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)178))))
		{
			goto IL_0532;
		}
	}
	{
		goto IL_0905;
	}

IL_007a:
	{
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) > ((int32_t)((int32_t)247))))
		{
			goto IL_009d;
		}
	}
	{
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)183))))
		{
			goto IL_053d;
		}
	}
	{
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)247))))
		{
			goto IL_0548;
		}
	}
	{
		goto IL_0905;
	}

IL_009d:
	{
		int32_t L_15 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)((int32_t)1025))))
		{
			case 0:
			{
				goto IL_0553;
			}
			case 1:
			{
				goto IL_0905;
			}
			case 2:
			{
				goto IL_0905;
			}
			case 3:
			{
				goto IL_055e;
			}
			case 4:
			{
				goto IL_0905;
			}
			case 5:
			{
				goto IL_0569;
			}
			case 6:
			{
				goto IL_0574;
			}
			case 7:
			{
				goto IL_0905;
			}
			case 8:
			{
				goto IL_0905;
			}
			case 9:
			{
				goto IL_0905;
			}
			case 10:
			{
				goto IL_0905;
			}
			case 11:
			{
				goto IL_0905;
			}
			case 12:
			{
				goto IL_0905;
			}
			case 13:
			{
				goto IL_0905;
			}
			case 14:
			{
				goto IL_0905;
			}
			case 15:
			{
				goto IL_057f;
			}
			case 16:
			{
				goto IL_058a;
			}
			case 17:
			{
				goto IL_0595;
			}
			case 18:
			{
				goto IL_05a0;
			}
			case 19:
			{
				goto IL_05ab;
			}
			case 20:
			{
				goto IL_05b6;
			}
			case 21:
			{
				goto IL_05c1;
			}
			case 22:
			{
				goto IL_05cc;
			}
			case 23:
			{
				goto IL_05d7;
			}
			case 24:
			{
				goto IL_05d7;
			}
			case 25:
			{
				goto IL_05d7;
			}
			case 26:
			{
				goto IL_05d7;
			}
			case 27:
			{
				goto IL_05d7;
			}
			case 28:
			{
				goto IL_05d7;
			}
			case 29:
			{
				goto IL_05d7;
			}
			case 30:
			{
				goto IL_05d7;
			}
			case 31:
			{
				goto IL_05e4;
			}
			case 32:
			{
				goto IL_05e4;
			}
			case 33:
			{
				goto IL_05e4;
			}
			case 34:
			{
				goto IL_05e4;
			}
			case 35:
			{
				goto IL_05f1;
			}
			case 36:
			{
				goto IL_05fc;
			}
			case 37:
			{
				goto IL_0607;
			}
			case 38:
			{
				goto IL_0612;
			}
			case 39:
			{
				goto IL_061d;
			}
			case 40:
			{
				goto IL_0628;
			}
			case 41:
			{
				goto IL_0633;
			}
			case 42:
			{
				goto IL_063e;
			}
			case 43:
			{
				goto IL_0649;
			}
			case 44:
			{
				goto IL_0654;
			}
			case 45:
			{
				goto IL_065f;
			}
			case 46:
			{
				goto IL_066a;
			}
			case 47:
			{
				goto IL_0675;
			}
			case 48:
			{
				goto IL_0680;
			}
			case 49:
			{
				goto IL_068b;
			}
			case 50:
			{
				goto IL_0696;
			}
			case 51:
			{
				goto IL_06a1;
			}
			case 52:
			{
				goto IL_06ac;
			}
			case 53:
			{
				goto IL_06b7;
			}
			case 54:
			{
				goto IL_06c2;
			}
			case 55:
			{
				goto IL_06cd;
			}
			case 56:
			{
				goto IL_06cd;
			}
			case 57:
			{
				goto IL_06cd;
			}
			case 58:
			{
				goto IL_06cd;
			}
			case 59:
			{
				goto IL_06cd;
			}
			case 60:
			{
				goto IL_06cd;
			}
			case 61:
			{
				goto IL_06cd;
			}
			case 62:
			{
				goto IL_06cd;
			}
			case 63:
			{
				goto IL_06da;
			}
			case 64:
			{
				goto IL_06da;
			}
			case 65:
			{
				goto IL_06da;
			}
			case 66:
			{
				goto IL_06da;
			}
			case 67:
			{
				goto IL_06e7;
			}
			case 68:
			{
				goto IL_06f2;
			}
			case 69:
			{
				goto IL_06fd;
			}
			case 70:
			{
				goto IL_0708;
			}
			case 71:
			{
				goto IL_0713;
			}
			case 72:
			{
				goto IL_071e;
			}
			case 73:
			{
				goto IL_0729;
			}
			case 74:
			{
				goto IL_0734;
			}
			case 75:
			{
				goto IL_073f;
			}
			case 76:
			{
				goto IL_074a;
			}
			case 77:
			{
				goto IL_0755;
			}
			case 78:
			{
				goto IL_0760;
			}
			case 79:
			{
				goto IL_0905;
			}
			case 80:
			{
				goto IL_076b;
			}
			case 81:
			{
				goto IL_0905;
			}
			case 82:
			{
				goto IL_0905;
			}
			case 83:
			{
				goto IL_0776;
			}
			case 84:
			{
				goto IL_0905;
			}
			case 85:
			{
				goto IL_0781;
			}
			case 86:
			{
				goto IL_078c;
			}
			case 87:
			{
				goto IL_0905;
			}
			case 88:
			{
				goto IL_0905;
			}
			case 89:
			{
				goto IL_0905;
			}
			case 90:
			{
				goto IL_0905;
			}
			case 91:
			{
				goto IL_0905;
			}
			case 92:
			{
				goto IL_0905;
			}
			case 93:
			{
				goto IL_0905;
			}
			case 94:
			{
				goto IL_0905;
			}
			case 95:
			{
				goto IL_0905;
			}
			case 96:
			{
				goto IL_0905;
			}
			case 97:
			{
				goto IL_0905;
			}
			case 98:
			{
				goto IL_0905;
			}
			case 99:
			{
				goto IL_0905;
			}
			case 100:
			{
				goto IL_0905;
			}
			case 101:
			{
				goto IL_0905;
			}
			case 102:
			{
				goto IL_0905;
			}
			case 103:
			{
				goto IL_0905;
			}
			case 104:
			{
				goto IL_0905;
			}
			case 105:
			{
				goto IL_0905;
			}
			case 106:
			{
				goto IL_0905;
			}
			case 107:
			{
				goto IL_0905;
			}
			case 108:
			{
				goto IL_0905;
			}
			case 109:
			{
				goto IL_0905;
			}
			case 110:
			{
				goto IL_0905;
			}
			case 111:
			{
				goto IL_0905;
			}
			case 112:
			{
				goto IL_0905;
			}
			case 113:
			{
				goto IL_0905;
			}
			case 114:
			{
				goto IL_0905;
			}
			case 115:
			{
				goto IL_0905;
			}
			case 116:
			{
				goto IL_0905;
			}
			case 117:
			{
				goto IL_0905;
			}
			case 118:
			{
				goto IL_0905;
			}
			case 119:
			{
				goto IL_0905;
			}
			case 120:
			{
				goto IL_0905;
			}
			case 121:
			{
				goto IL_0905;
			}
			case 122:
			{
				goto IL_0905;
			}
			case 123:
			{
				goto IL_0905;
			}
			case 124:
			{
				goto IL_0905;
			}
			case 125:
			{
				goto IL_0905;
			}
			case 126:
			{
				goto IL_0905;
			}
			case 127:
			{
				goto IL_0905;
			}
			case 128:
			{
				goto IL_0905;
			}
			case 129:
			{
				goto IL_0905;
			}
			case 130:
			{
				goto IL_0905;
			}
			case 131:
			{
				goto IL_0905;
			}
			case 132:
			{
				goto IL_0905;
			}
			case 133:
			{
				goto IL_0905;
			}
			case 134:
			{
				goto IL_0905;
			}
			case 135:
			{
				goto IL_0905;
			}
			case 136:
			{
				goto IL_0905;
			}
			case 137:
			{
				goto IL_0905;
			}
			case 138:
			{
				goto IL_0905;
			}
			case 139:
			{
				goto IL_0905;
			}
			case 140:
			{
				goto IL_0905;
			}
			case 141:
			{
				goto IL_0905;
			}
			case 142:
			{
				goto IL_0905;
			}
			case 143:
			{
				goto IL_0797;
			}
			case 144:
			{
				goto IL_07a2;
			}
		}
	}
	{
		int32_t L_16 = V_0;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)8729))))
		{
			goto IL_07ad;
		}
	}
	{
		goto IL_0905;
	}

IL_02fd:
	{
		int32_t L_17 = V_0;
		if ((((int32_t)L_17) > ((int32_t)((int32_t)8805))))
		{
			goto IL_0343;
		}
	}
	{
		int32_t L_18 = V_0;
		if ((((int32_t)L_18) > ((int32_t)((int32_t)8776))))
		{
			goto IL_0328;
		}
	}
	{
		int32_t L_19 = V_0;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)8730))))
		{
			goto IL_07b8;
		}
	}
	{
		int32_t L_20 = V_0;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)8776))))
		{
			goto IL_07c3;
		}
	}
	{
		goto IL_0905;
	}

IL_0328:
	{
		int32_t L_21 = V_0;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)8804))))
		{
			goto IL_07ce;
		}
	}
	{
		int32_t L_22 = V_0;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)8805))))
		{
			goto IL_07d9;
		}
	}
	{
		goto IL_0905;
	}

IL_0343:
	{
		int32_t L_23 = V_0;
		if ((((int32_t)L_23) > ((int32_t)((int32_t)8993))))
		{
			goto IL_0366;
		}
	}
	{
		int32_t L_24 = V_0;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)8992))))
		{
			goto IL_07e4;
		}
	}
	{
		int32_t L_25 = V_0;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)8993))))
		{
			goto IL_07ef;
		}
	}
	{
		goto IL_0905;
	}

IL_0366:
	{
		int32_t L_26 = V_0;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)9472))))
		{
			goto IL_07fa;
		}
	}
	{
		int32_t L_27 = V_0;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)9474))))
		{
			goto IL_0805;
		}
	}
	{
		goto IL_0905;
	}

IL_0381:
	{
		int32_t L_28 = V_0;
		if ((((int32_t)L_28) > ((int32_t)((int32_t)9524))))
		{
			goto IL_0410;
		}
	}
	{
		int32_t L_29 = V_0;
		if ((((int32_t)L_29) > ((int32_t)((int32_t)9496))))
		{
			goto IL_03d2;
		}
	}
	{
		int32_t L_30 = V_0;
		if ((((int32_t)L_30) > ((int32_t)((int32_t)9488))))
		{
			goto IL_03b7;
		}
	}
	{
		int32_t L_31 = V_0;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)9484))))
		{
			goto IL_0810;
		}
	}
	{
		int32_t L_32 = V_0;
		if ((((int32_t)L_32) == ((int32_t)((int32_t)9488))))
		{
			goto IL_081b;
		}
	}
	{
		goto IL_0905;
	}

IL_03b7:
	{
		int32_t L_33 = V_0;
		if ((((int32_t)L_33) == ((int32_t)((int32_t)9492))))
		{
			goto IL_0826;
		}
	}
	{
		int32_t L_34 = V_0;
		if ((((int32_t)L_34) == ((int32_t)((int32_t)9496))))
		{
			goto IL_0831;
		}
	}
	{
		goto IL_0905;
	}

IL_03d2:
	{
		int32_t L_35 = V_0;
		if ((((int32_t)L_35) > ((int32_t)((int32_t)9508))))
		{
			goto IL_03f5;
		}
	}
	{
		int32_t L_36 = V_0;
		if ((((int32_t)L_36) == ((int32_t)((int32_t)9500))))
		{
			goto IL_083c;
		}
	}
	{
		int32_t L_37 = V_0;
		if ((((int32_t)L_37) == ((int32_t)((int32_t)9508))))
		{
			goto IL_0847;
		}
	}
	{
		goto IL_0905;
	}

IL_03f5:
	{
		int32_t L_38 = V_0;
		if ((((int32_t)L_38) == ((int32_t)((int32_t)9516))))
		{
			goto IL_0852;
		}
	}
	{
		int32_t L_39 = V_0;
		if ((((int32_t)L_39) == ((int32_t)((int32_t)9524))))
		{
			goto IL_085d;
		}
	}
	{
		goto IL_0905;
	}

IL_0410:
	{
		int32_t L_40 = V_0;
		if ((((int32_t)L_40) > ((int32_t)((int32_t)9604))))
		{
			goto IL_04d1;
		}
	}
	{
		int32_t L_41 = V_0;
		if ((((int32_t)L_41) > ((int32_t)((int32_t)9580))))
		{
			goto IL_04b6;
		}
	}
	{
		int32_t L_42 = V_0;
		if ((((int32_t)L_42) == ((int32_t)((int32_t)9532))))
		{
			goto IL_0868;
		}
	}
	{
		int32_t L_43 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_43, (int32_t)((int32_t)9552))))
		{
			case 0:
			{
				goto IL_0873;
			}
			case 1:
			{
				goto IL_087e;
			}
			case 2:
			{
				goto IL_0889;
			}
			case 3:
			{
				goto IL_0905;
			}
			case 4:
			{
				goto IL_0894;
			}
			case 5:
			{
				goto IL_0905;
			}
			case 6:
			{
				goto IL_0905;
			}
			case 7:
			{
				goto IL_089f;
			}
			case 8:
			{
				goto IL_089f;
			}
			case 9:
			{
				goto IL_089f;
			}
			case 10:
			{
				goto IL_089f;
			}
			case 11:
			{
				goto IL_089f;
			}
			case 12:
			{
				goto IL_0905;
			}
			case 13:
			{
				goto IL_08ac;
			}
			case 14:
			{
				goto IL_08ac;
			}
			case 15:
			{
				goto IL_08ac;
			}
			case 16:
			{
				goto IL_08ac;
			}
			case 17:
			{
				goto IL_08ac;
			}
			case 18:
			{
				goto IL_0905;
			}
			case 19:
			{
				goto IL_08b9;
			}
			case 20:
			{
				goto IL_0905;
			}
			case 21:
			{
				goto IL_0905;
			}
			case 22:
			{
				goto IL_08c1;
			}
			case 23:
			{
				goto IL_08c1;
			}
			case 24:
			{
				goto IL_08c1;
			}
			case 25:
			{
				goto IL_08c1;
			}
			case 26:
			{
				goto IL_08c1;
			}
			case 27:
			{
				goto IL_0905;
			}
			case 28:
			{
				goto IL_08cb;
			}
		}
	}
	{
		goto IL_0905;
	}

IL_04b6:
	{
		int32_t L_44 = V_0;
		if ((((int32_t)L_44) == ((int32_t)((int32_t)9600))))
		{
			goto IL_08d3;
		}
	}
	{
		int32_t L_45 = V_0;
		if ((((int32_t)L_45) == ((int32_t)((int32_t)9604))))
		{
			goto IL_08db;
		}
	}
	{
		goto IL_0905;
	}

IL_04d1:
	{
		int32_t L_46 = V_0;
		if ((((int32_t)L_46) > ((int32_t)((int32_t)9612))))
		{
			goto IL_04f4;
		}
	}
	{
		int32_t L_47 = V_0;
		if ((((int32_t)L_47) == ((int32_t)((int32_t)9608))))
		{
			goto IL_08e3;
		}
	}
	{
		int32_t L_48 = V_0;
		if ((((int32_t)L_48) == ((int32_t)((int32_t)9612))))
		{
			goto IL_08eb;
		}
	}
	{
		goto IL_0905;
	}

IL_04f4:
	{
		int32_t L_49 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_49, (int32_t)((int32_t)9616)))) > ((uint32_t)3))))
		{
			goto IL_08f3;
		}
	}
	{
		int32_t L_50 = V_0;
		if ((((int32_t)L_50) == ((int32_t)((int32_t)9632))))
		{
			goto IL_08fd;
		}
	}
	{
		goto IL_0905;
	}

IL_0511:
	{
		V_0 = ((int32_t)154);
		goto IL_093c;
	}

IL_051c:
	{
		V_0 = ((int32_t)191);
		goto IL_093c;
	}

IL_0527:
	{
		V_0 = ((int32_t)156);
		goto IL_093c;
	}

IL_0532:
	{
		V_0 = ((int32_t)157);
		goto IL_093c;
	}

IL_053d:
	{
		V_0 = ((int32_t)158);
		goto IL_093c;
	}

IL_0548:
	{
		V_0 = ((int32_t)159);
		goto IL_093c;
	}

IL_0553:
	{
		V_0 = ((int32_t)179);
		goto IL_093c;
	}

IL_055e:
	{
		V_0 = ((int32_t)180);
		goto IL_093c;
	}

IL_0569:
	{
		V_0 = ((int32_t)182);
		goto IL_093c;
	}

IL_0574:
	{
		V_0 = ((int32_t)183);
		goto IL_093c;
	}

IL_057f:
	{
		V_0 = ((int32_t)225);
		goto IL_093c;
	}

IL_058a:
	{
		V_0 = ((int32_t)226);
		goto IL_093c;
	}

IL_0595:
	{
		V_0 = ((int32_t)247);
		goto IL_093c;
	}

IL_05a0:
	{
		V_0 = ((int32_t)231);
		goto IL_093c;
	}

IL_05ab:
	{
		V_0 = ((int32_t)228);
		goto IL_093c;
	}

IL_05b6:
	{
		V_0 = ((int32_t)229);
		goto IL_093c;
	}

IL_05c1:
	{
		V_0 = ((int32_t)246);
		goto IL_093c;
	}

IL_05cc:
	{
		V_0 = ((int32_t)250);
		goto IL_093c;
	}

IL_05d7:
	{
		int32_t L_51 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_51, (int32_t)((int32_t)815)));
		goto IL_093c;
	}

IL_05e4:
	{
		int32_t L_52 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_52, (int32_t)((int32_t)814)));
		goto IL_093c;
	}

IL_05f1:
	{
		V_0 = ((int32_t)230);
		goto IL_093c;
	}

IL_05fc:
	{
		V_0 = ((int32_t)232);
		goto IL_093c;
	}

IL_0607:
	{
		V_0 = ((int32_t)227);
		goto IL_093c;
	}

IL_0612:
	{
		V_0 = ((int32_t)254);
		goto IL_093c;
	}

IL_061d:
	{
		V_0 = ((int32_t)251);
		goto IL_093c;
	}

IL_0628:
	{
		V_0 = ((int32_t)253);
		goto IL_093c;
	}

IL_0633:
	{
		V_0 = ((int32_t)255);
		goto IL_093c;
	}

IL_063e:
	{
		V_0 = ((int32_t)249);
		goto IL_093c;
	}

IL_0649:
	{
		V_0 = ((int32_t)248);
		goto IL_093c;
	}

IL_0654:
	{
		V_0 = ((int32_t)252);
		goto IL_093c;
	}

IL_065f:
	{
		V_0 = ((int32_t)224);
		goto IL_093c;
	}

IL_066a:
	{
		V_0 = ((int32_t)241);
		goto IL_093c;
	}

IL_0675:
	{
		V_0 = ((int32_t)193);
		goto IL_093c;
	}

IL_0680:
	{
		V_0 = ((int32_t)194);
		goto IL_093c;
	}

IL_068b:
	{
		V_0 = ((int32_t)215);
		goto IL_093c;
	}

IL_0696:
	{
		V_0 = ((int32_t)199);
		goto IL_093c;
	}

IL_06a1:
	{
		V_0 = ((int32_t)196);
		goto IL_093c;
	}

IL_06ac:
	{
		V_0 = ((int32_t)197);
		goto IL_093c;
	}

IL_06b7:
	{
		V_0 = ((int32_t)214);
		goto IL_093c;
	}

IL_06c2:
	{
		V_0 = ((int32_t)218);
		goto IL_093c;
	}

IL_06cd:
	{
		int32_t L_53 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_53, (int32_t)((int32_t)879)));
		goto IL_093c;
	}

IL_06da:
	{
		int32_t L_54 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_54, (int32_t)((int32_t)878)));
		goto IL_093c;
	}

IL_06e7:
	{
		V_0 = ((int32_t)198);
		goto IL_093c;
	}

IL_06f2:
	{
		V_0 = ((int32_t)200);
		goto IL_093c;
	}

IL_06fd:
	{
		V_0 = ((int32_t)195);
		goto IL_093c;
	}

IL_0708:
	{
		V_0 = ((int32_t)222);
		goto IL_093c;
	}

IL_0713:
	{
		V_0 = ((int32_t)219);
		goto IL_093c;
	}

IL_071e:
	{
		V_0 = ((int32_t)221);
		goto IL_093c;
	}

IL_0729:
	{
		V_0 = ((int32_t)223);
		goto IL_093c;
	}

IL_0734:
	{
		V_0 = ((int32_t)217);
		goto IL_093c;
	}

IL_073f:
	{
		V_0 = ((int32_t)216);
		goto IL_093c;
	}

IL_074a:
	{
		V_0 = ((int32_t)220);
		goto IL_093c;
	}

IL_0755:
	{
		V_0 = ((int32_t)192);
		goto IL_093c;
	}

IL_0760:
	{
		V_0 = ((int32_t)209);
		goto IL_093c;
	}

IL_076b:
	{
		V_0 = ((int32_t)163);
		goto IL_093c;
	}

IL_0776:
	{
		V_0 = ((int32_t)164);
		goto IL_093c;
	}

IL_0781:
	{
		V_0 = ((int32_t)166);
		goto IL_093c;
	}

IL_078c:
	{
		V_0 = ((int32_t)167);
		goto IL_093c;
	}

IL_0797:
	{
		V_0 = ((int32_t)189);
		goto IL_093c;
	}

IL_07a2:
	{
		V_0 = ((int32_t)173);
		goto IL_093c;
	}

IL_07ad:
	{
		V_0 = ((int32_t)149);
		goto IL_093c;
	}

IL_07b8:
	{
		V_0 = ((int32_t)150);
		goto IL_093c;
	}

IL_07c3:
	{
		V_0 = ((int32_t)151);
		goto IL_093c;
	}

IL_07ce:
	{
		V_0 = ((int32_t)152);
		goto IL_093c;
	}

IL_07d9:
	{
		V_0 = ((int32_t)153);
		goto IL_093c;
	}

IL_07e4:
	{
		V_0 = ((int32_t)147);
		goto IL_093c;
	}

IL_07ef:
	{
		V_0 = ((int32_t)155);
		goto IL_093c;
	}

IL_07fa:
	{
		V_0 = ((int32_t)128);
		goto IL_093c;
	}

IL_0805:
	{
		V_0 = ((int32_t)129);
		goto IL_093c;
	}

IL_0810:
	{
		V_0 = ((int32_t)130);
		goto IL_093c;
	}

IL_081b:
	{
		V_0 = ((int32_t)131);
		goto IL_093c;
	}

IL_0826:
	{
		V_0 = ((int32_t)132);
		goto IL_093c;
	}

IL_0831:
	{
		V_0 = ((int32_t)133);
		goto IL_093c;
	}

IL_083c:
	{
		V_0 = ((int32_t)134);
		goto IL_093c;
	}

IL_0847:
	{
		V_0 = ((int32_t)135);
		goto IL_093c;
	}

IL_0852:
	{
		V_0 = ((int32_t)136);
		goto IL_093c;
	}

IL_085d:
	{
		V_0 = ((int32_t)137);
		goto IL_093c;
	}

IL_0868:
	{
		V_0 = ((int32_t)138);
		goto IL_093c;
	}

IL_0873:
	{
		V_0 = ((int32_t)160);
		goto IL_093c;
	}

IL_087e:
	{
		V_0 = ((int32_t)161);
		goto IL_093c;
	}

IL_0889:
	{
		V_0 = ((int32_t)162);
		goto IL_093c;
	}

IL_0894:
	{
		V_0 = ((int32_t)165);
		goto IL_093c;
	}

IL_089f:
	{
		int32_t L_55 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_55, (int32_t)((int32_t)9391)));
		goto IL_093c;
	}

IL_08ac:
	{
		int32_t L_56 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_56, (int32_t)((int32_t)9391)));
		goto IL_093c;
	}

IL_08b9:
	{
		V_0 = ((int32_t)181);
		goto IL_093c;
	}

IL_08c1:
	{
		int32_t L_57 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_57, (int32_t)((int32_t)9390)));
		goto IL_093c;
	}

IL_08cb:
	{
		V_0 = ((int32_t)190);
		goto IL_093c;
	}

IL_08d3:
	{
		V_0 = ((int32_t)139);
		goto IL_093c;
	}

IL_08db:
	{
		V_0 = ((int32_t)140);
		goto IL_093c;
	}

IL_08e3:
	{
		V_0 = ((int32_t)141);
		goto IL_093c;
	}

IL_08eb:
	{
		V_0 = ((int32_t)142);
		goto IL_093c;
	}

IL_08f3:
	{
		int32_t L_58 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_58, (int32_t)((int32_t)9473)));
		goto IL_093c;
	}

IL_08fd:
	{
		V_0 = ((int32_t)148);
		goto IL_093c;
	}

IL_0905:
	{
		int32_t L_59 = V_0;
		if ((((int32_t)L_59) < ((int32_t)((int32_t)65281))))
		{
			goto IL_091f;
		}
	}
	{
		int32_t L_60 = V_0;
		if ((((int32_t)L_60) > ((int32_t)((int32_t)65374))))
		{
			goto IL_091f;
		}
	}
	{
		int32_t L_61 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_61, (int32_t)((int32_t)65248)));
		goto IL_093c;
	}

IL_091f:
	{
		Il2CppChar* L_62 = ___chars0;
		uint8_t* L_63 = ___bytes2;
		MonoEncoding_HandleFallback_m5BBB9A58548D7F4FC29EB94C8033AF716387D94F(__this, (EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 **)(&V_3), (Il2CppChar*)(Il2CppChar*)L_62, (int32_t*)(&V_1), (int32_t*)(&___charCount1), (uint8_t*)(uint8_t*)L_63, (int32_t*)(&V_2), (int32_t*)(&___byteCount3), /*hidden argument*/NULL);
		int32_t L_64 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)1));
		int32_t L_65 = ___charCount1;
		___charCount1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_65, (int32_t)1));
		goto IL_095a;
	}

IL_093c:
	{
		uint8_t* L_66 = ___bytes2;
		if ((((intptr_t)L_66) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0947;
		}
	}
	{
		uint8_t* L_67 = ___bytes2;
		int32_t L_68 = V_2;
		int32_t L_69 = V_0;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_67, (int32_t)L_68))) = (int8_t)((int32_t)((uint8_t)L_69));
	}

IL_0947:
	{
		int32_t L_70 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)1));
		int32_t L_71 = ___byteCount3;
		___byteCount3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_71, (int32_t)1));
		int32_t L_72 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_72, (int32_t)1));
		int32_t L_73 = ___charCount1;
		___charCount1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_73, (int32_t)1));
	}

IL_095a:
	{
		int32_t L_74 = ___charCount1;
		if ((((int32_t)L_74) > ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_75 = V_2;
		return L_75;
	}
}
// System.Void I18N.Other.CP21866::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP21866__cctor_mA1A9909B145A32D6ACB5EBCD6C8CCA3B51DEC0F8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CP21866_t3C1E45BEF3F191BEF75E920F10395570AD55077C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t5BF9241693AE1DE48403915AA18F028381B734C1____C029709D232902A6A3808A15B7622DC2AEF16A24_4_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t5BF9241693AE1DE48403915AA18F028381B734C1____C029709D232902A6A3808A15B7622DC2AEF16A24_4_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((CP21866_t3C1E45BEF3F191BEF75E920F10395570AD55077C_StaticFields*)il2cpp_codegen_static_fields_for(CP21866_t3C1E45BEF3F191BEF75E920F10395570AD55077C_il2cpp_TypeInfo_var))->set_ToChars_30(L_1);
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
// System.Void I18N.Other.CP28594::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP28594__ctor_m3A2325E91C8AC7590BDA9C504DFB0D4C20A9E1B0 (CP28594_t150821C2495D3DE51FFD20C2EA36430429F32FC0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CP28594_t150821C2495D3DE51FFD20C2EA36430429F32FC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0AF7A09CFE38BC158E3C381B6514A2EB4D66CC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC216EE9D2A1CBAD9FE964194A2BD558FCAB16BFD);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CP28594_t150821C2495D3DE51FFD20C2EA36430429F32FC0_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = ((CP28594_t150821C2495D3DE51FFD20C2EA36430429F32FC0_StaticFields*)il2cpp_codegen_static_fields_for(CP28594_t150821C2495D3DE51FFD20C2EA36430429F32FC0_il2cpp_TypeInfo_var))->get_ToChars_30();
		ByteEncoding__ctor_m38C66F0BDFF6CDAF86DA35A4771938B1DA64F2B5(__this, ((int32_t)28594), L_0, _stringLiteralA0AF7A09CFE38BC158E3C381B6514A2EB4D66CC3, _stringLiteralC216EE9D2A1CBAD9FE964194A2BD558FCAB16BFD, _stringLiteralC216EE9D2A1CBAD9FE964194A2BD558FCAB16BFD, _stringLiteralC216EE9D2A1CBAD9FE964194A2BD558FCAB16BFD, (bool)1, (bool)1, (bool)1, (bool)1, ((int32_t)1257), /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 I18N.Other.CP28594::GetByteCountImpl(System.Char*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP28594_GetByteCountImpl_mF945854B7661360A641A0A171C3DCD0152F0266B (CP28594_t150821C2495D3DE51FFD20C2EA36430429F32FC0 * __this, Il2CppChar* ___chars0, int32_t ___count1, const RuntimeMethod* method)
{
	{
		EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * L_0;
		L_0 = Encoding_get_EncoderFallback_m8DF6B8EC2F7AA69AF9129C5334D1FAFE13081152_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Il2CppChar* L_1 = ___chars0;
		int32_t L_2 = ___count1;
		int32_t L_3;
		L_3 = VirtFuncInvoker4< int32_t, Il2CppChar*, int32_t, uint8_t*, int32_t >::Invoke(48 /* System.Int32 I18N.Common.MonoEncoding::GetBytesImpl(System.Char*,System.Int32,System.Byte*,System.Int32) */, __this, (Il2CppChar*)(Il2CppChar*)L_1, L_2, (uint8_t*)(uint8_t*)((uintptr_t)0), 0);
		return L_3;
	}

IL_0014:
	{
		int32_t L_4 = ___count1;
		return L_4;
	}
}
// System.Int32 I18N.Other.CP28594::GetByteCount(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP28594_GetByteCount_m1FCE03970B34CE63EA236C475BF0F3536A5647E2 (CP28594_t150821C2495D3DE51FFD20C2EA36430429F32FC0 * __this, String_t* ___s0, const RuntimeMethod* method)
{
	Il2CppChar* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * L_0;
		L_0 = Encoding_get_EncoderFallback_m8DF6B8EC2F7AA69AF9129C5334D1FAFE13081152_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_1 = ___s0;
		V_1 = L_1;
		String_t* L_2 = V_1;
		V_0 = (Il2CppChar*)((uintptr_t)L_2);
		Il2CppChar* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		Il2CppChar* L_4 = V_0;
		int32_t L_5;
		L_5 = RuntimeHelpers_get_OffsetToStringData_mEB8E6EAEBAFAB7CD7F7A915B3081785AABB9FC42(/*hidden argument*/NULL);
		V_0 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_4, (int32_t)L_5));
	}

IL_0018:
	{
		Il2CppChar* L_6 = V_0;
		String_t* L_7 = ___s0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_7, /*hidden argument*/NULL);
		int32_t L_9;
		L_9 = VirtFuncInvoker4< int32_t, Il2CppChar*, int32_t, uint8_t*, int32_t >::Invoke(48 /* System.Int32 I18N.Common.MonoEncoding::GetBytesImpl(System.Char*,System.Int32,System.Byte*,System.Int32) */, __this, (Il2CppChar*)(Il2CppChar*)L_6, L_8, (uint8_t*)(uint8_t*)((uintptr_t)0), 0);
		return L_9;
	}

IL_0029:
	{
		String_t* L_10 = ___s0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.Void I18N.Other.CP28594::ToBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP28594_ToBytes_m0C6E7CE55459F64757B53E8C341B8E616C011360 (CP28594_t150821C2495D3DE51FFD20C2EA36430429F32FC0 * __this, Il2CppChar* ___chars0, int32_t ___charCount1, uint8_t* ___bytes2, int32_t ___byteCount3, const RuntimeMethod* method)
{
	{
		uint8_t* L_0 = ___bytes2;
		if ((!(((uintptr_t)L_0) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_0010;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral77B615B8ED1ABB8FC1395D85A5AE524A9789D947)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CP28594_ToBytes_m0C6E7CE55459F64757B53E8C341B8E616C011360_RuntimeMethod_var)));
	}

IL_0010:
	{
		Il2CppChar* L_2 = ___chars0;
		int32_t L_3 = ___charCount1;
		uint8_t* L_4 = ___bytes2;
		int32_t L_5 = ___byteCount3;
		int32_t L_6;
		L_6 = VirtFuncInvoker4< int32_t, Il2CppChar*, int32_t, uint8_t*, int32_t >::Invoke(48 /* System.Int32 I18N.Common.MonoEncoding::GetBytesImpl(System.Char*,System.Int32,System.Byte*,System.Int32) */, __this, (Il2CppChar*)(Il2CppChar*)L_2, L_3, (uint8_t*)(uint8_t*)L_4, L_5);
		return;
	}
}
// System.Int32 I18N.Other.CP28594::GetBytesImpl(System.Char*,System.Int32,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP28594_GetBytesImpl_mB1B88726D0DF1ABA94E9B32C118A7C0C2C29092F (CP28594_t150821C2495D3DE51FFD20C2EA36430429F32FC0 * __this, Il2CppChar* ___chars0, int32_t ___charCount1, uint8_t* ___bytes2, int32_t ___byteCount3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 * V_3 = NULL;
	{
		V_1 = 0;
		V_2 = 0;
		V_3 = (EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 *)NULL;
		goto IL_05f3;
	}

IL_000b:
	{
		Il2CppChar* L_0 = ___chars0;
		int32_t L_1 = V_1;
		int32_t L_2 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_1), (int32_t)2)))));
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)((int32_t)161))))
		{
			goto IL_05d5;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)343))))
		{
			goto IL_02e1;
		}
	}
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) > ((int32_t)((int32_t)303))))
		{
			goto IL_0261;
		}
	}
	{
		int32_t L_6 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)((int32_t)164))))
		{
			case 0:
			{
				goto IL_05d5;
			}
			case 1:
			{
				goto IL_059e;
			}
			case 2:
			{
				goto IL_059e;
			}
			case 3:
			{
				goto IL_05d5;
			}
			case 4:
			{
				goto IL_05d5;
			}
			case 5:
			{
				goto IL_059e;
			}
			case 6:
			{
				goto IL_059e;
			}
			case 7:
			{
				goto IL_059e;
			}
			case 8:
			{
				goto IL_059e;
			}
			case 9:
			{
				goto IL_05d5;
			}
			case 10:
			{
				goto IL_059e;
			}
			case 11:
			{
				goto IL_05d5;
			}
			case 12:
			{
				goto IL_05d5;
			}
			case 13:
			{
				goto IL_059e;
			}
			case 14:
			{
				goto IL_059e;
			}
			case 15:
			{
				goto IL_059e;
			}
			case 16:
			{
				goto IL_05d5;
			}
			case 17:
			{
				goto IL_059e;
			}
			case 18:
			{
				goto IL_059e;
			}
			case 19:
			{
				goto IL_059e;
			}
			case 20:
			{
				goto IL_05d5;
			}
			case 21:
			{
				goto IL_059e;
			}
			case 22:
			{
				goto IL_059e;
			}
			case 23:
			{
				goto IL_059e;
			}
			case 24:
			{
				goto IL_059e;
			}
			case 25:
			{
				goto IL_059e;
			}
			case 26:
			{
				goto IL_059e;
			}
			case 27:
			{
				goto IL_059e;
			}
			case 28:
			{
				goto IL_059e;
			}
			case 29:
			{
				goto IL_05d5;
			}
			case 30:
			{
				goto IL_05d5;
			}
			case 31:
			{
				goto IL_05d5;
			}
			case 32:
			{
				goto IL_05d5;
			}
			case 33:
			{
				goto IL_05d5;
			}
			case 34:
			{
				goto IL_05d5;
			}
			case 35:
			{
				goto IL_059e;
			}
			case 36:
			{
				goto IL_059e;
			}
			case 37:
			{
				goto IL_05d5;
			}
			case 38:
			{
				goto IL_059e;
			}
			case 39:
			{
				goto IL_05d5;
			}
			case 40:
			{
				goto IL_059e;
			}
			case 41:
			{
				goto IL_05d5;
			}
			case 42:
			{
				goto IL_05d5;
			}
			case 43:
			{
				goto IL_059e;
			}
			case 44:
			{
				goto IL_059e;
			}
			case 45:
			{
				goto IL_059e;
			}
			case 46:
			{
				goto IL_059e;
			}
			case 47:
			{
				goto IL_059e;
			}
			case 48:
			{
				goto IL_05d5;
			}
			case 49:
			{
				goto IL_05d5;
			}
			case 50:
			{
				goto IL_05d5;
			}
			case 51:
			{
				goto IL_05d5;
			}
			case 52:
			{
				goto IL_05d5;
			}
			case 53:
			{
				goto IL_059e;
			}
			case 54:
			{
				goto IL_05d5;
			}
			case 55:
			{
				goto IL_05d5;
			}
			case 56:
			{
				goto IL_05d5;
			}
			case 57:
			{
				goto IL_059e;
			}
			case 58:
			{
				goto IL_059e;
			}
			case 59:
			{
				goto IL_05d5;
			}
			case 60:
			{
				goto IL_059e;
			}
			case 61:
			{
				goto IL_05d5;
			}
			case 62:
			{
				goto IL_05d5;
			}
			case 63:
			{
				goto IL_05d5;
			}
			case 64:
			{
				goto IL_05d5;
			}
			case 65:
			{
				goto IL_05d5;
			}
			case 66:
			{
				goto IL_05d5;
			}
			case 67:
			{
				goto IL_059e;
			}
			case 68:
			{
				goto IL_059e;
			}
			case 69:
			{
				goto IL_05d5;
			}
			case 70:
			{
				goto IL_059e;
			}
			case 71:
			{
				goto IL_05d5;
			}
			case 72:
			{
				goto IL_059e;
			}
			case 73:
			{
				goto IL_05d5;
			}
			case 74:
			{
				goto IL_05d5;
			}
			case 75:
			{
				goto IL_059e;
			}
			case 76:
			{
				goto IL_059e;
			}
			case 77:
			{
				goto IL_059e;
			}
			case 78:
			{
				goto IL_059e;
			}
			case 79:
			{
				goto IL_059e;
			}
			case 80:
			{
				goto IL_05d5;
			}
			case 81:
			{
				goto IL_05d5;
			}
			case 82:
			{
				goto IL_05d5;
			}
			case 83:
			{
				goto IL_05d5;
			}
			case 84:
			{
				goto IL_05d5;
			}
			case 85:
			{
				goto IL_059e;
			}
			case 86:
			{
				goto IL_05d5;
			}
			case 87:
			{
				goto IL_05d5;
			}
			case 88:
			{
				goto IL_05d5;
			}
		}
	}
	{
		int32_t L_7 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)((int32_t)256))))
		{
			case 0:
			{
				goto IL_0396;
			}
			case 1:
			{
				goto IL_03a1;
			}
			case 2:
			{
				goto IL_059e;
			}
			case 3:
			{
				goto IL_059e;
			}
			case 4:
			{
				goto IL_03ac;
			}
			case 5:
			{
				goto IL_03b7;
			}
			case 6:
			{
				goto IL_059e;
			}
			case 7:
			{
				goto IL_059e;
			}
			case 8:
			{
				goto IL_059e;
			}
			case 9:
			{
				goto IL_059e;
			}
			case 10:
			{
				goto IL_059e;
			}
			case 11:
			{
				goto IL_059e;
			}
			case 12:
			{
				goto IL_03c2;
			}
			case 13:
			{
				goto IL_03cd;
			}
			case 14:
			{
				goto IL_059e;
			}
			case 15:
			{
				goto IL_059e;
			}
			case 16:
			{
				goto IL_03d8;
			}
			case 17:
			{
				goto IL_03e3;
			}
			case 18:
			{
				goto IL_03ee;
			}
			case 19:
			{
				goto IL_03f9;
			}
			case 20:
			{
				goto IL_059e;
			}
			case 21:
			{
				goto IL_059e;
			}
			case 22:
			{
				goto IL_0404;
			}
			case 23:
			{
				goto IL_040f;
			}
			case 24:
			{
				goto IL_041a;
			}
			case 25:
			{
				goto IL_0425;
			}
		}
	}
	{
		int32_t L_8 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)((int32_t)290))))
		{
			case 0:
			{
				goto IL_0430;
			}
			case 1:
			{
				goto IL_043b;
			}
			case 2:
			{
				goto IL_059e;
			}
			case 3:
			{
				goto IL_059e;
			}
			case 4:
			{
				goto IL_059e;
			}
			case 5:
			{
				goto IL_059e;
			}
			case 6:
			{
				goto IL_0446;
			}
			case 7:
			{
				goto IL_0451;
			}
			case 8:
			{
				goto IL_045c;
			}
			case 9:
			{
				goto IL_0467;
			}
			case 10:
			{
				goto IL_059e;
			}
			case 11:
			{
				goto IL_059e;
			}
			case 12:
			{
				goto IL_0472;
			}
			case 13:
			{
				goto IL_047d;
			}
		}
	}
	{
		goto IL_059e;
	}

IL_0261:
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) > ((int32_t)((int32_t)333))))
		{
			goto IL_02c6;
		}
	}
	{
		int32_t L_10 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)((int32_t)310))))
		{
			case 0:
			{
				goto IL_0488;
			}
			case 1:
			{
				goto IL_0493;
			}
			case 2:
			{
				goto IL_049e;
			}
			case 3:
			{
				goto IL_059e;
			}
			case 4:
			{
				goto IL_059e;
			}
			case 5:
			{
				goto IL_04a9;
			}
			case 6:
			{
				goto IL_04b4;
			}
		}
	}
	{
		int32_t L_11 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)((int32_t)325))))
		{
			case 0:
			{
				goto IL_04bf;
			}
			case 1:
			{
				goto IL_04ca;
			}
			case 2:
			{
				goto IL_059e;
			}
			case 3:
			{
				goto IL_059e;
			}
			case 4:
			{
				goto IL_059e;
			}
			case 5:
			{
				goto IL_04d5;
			}
			case 6:
			{
				goto IL_04e0;
			}
			case 7:
			{
				goto IL_04eb;
			}
			case 8:
			{
				goto IL_04f6;
			}
		}
	}
	{
		goto IL_059e;
	}

IL_02c6:
	{
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)342))))
		{
			goto IL_0501;
		}
	}
	{
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)343))))
		{
			goto IL_050c;
		}
	}
	{
		goto IL_059e;
	}

IL_02e1:
	{
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) > ((int32_t)((int32_t)381))))
		{
			goto IL_0358;
		}
	}
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) > ((int32_t)((int32_t)370))))
		{
			goto IL_033d;
		}
	}
	{
		int32_t L_16 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)((int32_t)352))))
		{
			case 0:
			{
				goto IL_0517;
			}
			case 1:
			{
				goto IL_0522;
			}
			case 2:
			{
				goto IL_059e;
			}
			case 3:
			{
				goto IL_059e;
			}
			case 4:
			{
				goto IL_059e;
			}
			case 5:
			{
				goto IL_059e;
			}
			case 6:
			{
				goto IL_052d;
			}
			case 7:
			{
				goto IL_0538;
			}
			case 8:
			{
				goto IL_0543;
			}
			case 9:
			{
				goto IL_054e;
			}
			case 10:
			{
				goto IL_0556;
			}
			case 11:
			{
				goto IL_055e;
			}
		}
	}
	{
		int32_t L_17 = V_0;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)370))))
		{
			goto IL_0566;
		}
	}
	{
		goto IL_059e;
	}

IL_033d:
	{
		int32_t L_18 = V_0;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)371))))
		{
			goto IL_056e;
		}
	}
	{
		int32_t L_19 = V_0;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)381))))
		{
			goto IL_0576;
		}
	}
	{
		goto IL_059e;
	}

IL_0358:
	{
		int32_t L_20 = V_0;
		if ((((int32_t)L_20) > ((int32_t)((int32_t)711))))
		{
			goto IL_037b;
		}
	}
	{
		int32_t L_21 = V_0;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)382))))
		{
			goto IL_057e;
		}
	}
	{
		int32_t L_22 = V_0;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)711))))
		{
			goto IL_0586;
		}
	}
	{
		goto IL_059e;
	}

IL_037b:
	{
		int32_t L_23 = V_0;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)729))))
		{
			goto IL_058e;
		}
	}
	{
		int32_t L_24 = V_0;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)731))))
		{
			goto IL_0596;
		}
	}
	{
		goto IL_059e;
	}

IL_0396:
	{
		V_0 = ((int32_t)192);
		goto IL_05d5;
	}

IL_03a1:
	{
		V_0 = ((int32_t)224);
		goto IL_05d5;
	}

IL_03ac:
	{
		V_0 = ((int32_t)161);
		goto IL_05d5;
	}

IL_03b7:
	{
		V_0 = ((int32_t)177);
		goto IL_05d5;
	}

IL_03c2:
	{
		V_0 = ((int32_t)200);
		goto IL_05d5;
	}

IL_03cd:
	{
		V_0 = ((int32_t)232);
		goto IL_05d5;
	}

IL_03d8:
	{
		V_0 = ((int32_t)208);
		goto IL_05d5;
	}

IL_03e3:
	{
		V_0 = ((int32_t)240);
		goto IL_05d5;
	}

IL_03ee:
	{
		V_0 = ((int32_t)170);
		goto IL_05d5;
	}

IL_03f9:
	{
		V_0 = ((int32_t)186);
		goto IL_05d5;
	}

IL_0404:
	{
		V_0 = ((int32_t)204);
		goto IL_05d5;
	}

IL_040f:
	{
		V_0 = ((int32_t)236);
		goto IL_05d5;
	}

IL_041a:
	{
		V_0 = ((int32_t)202);
		goto IL_05d5;
	}

IL_0425:
	{
		V_0 = ((int32_t)234);
		goto IL_05d5;
	}

IL_0430:
	{
		V_0 = ((int32_t)171);
		goto IL_05d5;
	}

IL_043b:
	{
		V_0 = ((int32_t)187);
		goto IL_05d5;
	}

IL_0446:
	{
		V_0 = ((int32_t)165);
		goto IL_05d5;
	}

IL_0451:
	{
		V_0 = ((int32_t)181);
		goto IL_05d5;
	}

IL_045c:
	{
		V_0 = ((int32_t)207);
		goto IL_05d5;
	}

IL_0467:
	{
		V_0 = ((int32_t)239);
		goto IL_05d5;
	}

IL_0472:
	{
		V_0 = ((int32_t)199);
		goto IL_05d5;
	}

IL_047d:
	{
		V_0 = ((int32_t)231);
		goto IL_05d5;
	}

IL_0488:
	{
		V_0 = ((int32_t)211);
		goto IL_05d5;
	}

IL_0493:
	{
		V_0 = ((int32_t)243);
		goto IL_05d5;
	}

IL_049e:
	{
		V_0 = ((int32_t)162);
		goto IL_05d5;
	}

IL_04a9:
	{
		V_0 = ((int32_t)166);
		goto IL_05d5;
	}

IL_04b4:
	{
		V_0 = ((int32_t)182);
		goto IL_05d5;
	}

IL_04bf:
	{
		V_0 = ((int32_t)209);
		goto IL_05d5;
	}

IL_04ca:
	{
		V_0 = ((int32_t)241);
		goto IL_05d5;
	}

IL_04d5:
	{
		V_0 = ((int32_t)189);
		goto IL_05d5;
	}

IL_04e0:
	{
		V_0 = ((int32_t)191);
		goto IL_05d5;
	}

IL_04eb:
	{
		V_0 = ((int32_t)210);
		goto IL_05d5;
	}

IL_04f6:
	{
		V_0 = ((int32_t)242);
		goto IL_05d5;
	}

IL_0501:
	{
		V_0 = ((int32_t)163);
		goto IL_05d5;
	}

IL_050c:
	{
		V_0 = ((int32_t)179);
		goto IL_05d5;
	}

IL_0517:
	{
		V_0 = ((int32_t)169);
		goto IL_05d5;
	}

IL_0522:
	{
		V_0 = ((int32_t)185);
		goto IL_05d5;
	}

IL_052d:
	{
		V_0 = ((int32_t)172);
		goto IL_05d5;
	}

IL_0538:
	{
		V_0 = ((int32_t)188);
		goto IL_05d5;
	}

IL_0543:
	{
		V_0 = ((int32_t)221);
		goto IL_05d5;
	}

IL_054e:
	{
		V_0 = ((int32_t)253);
		goto IL_05d5;
	}

IL_0556:
	{
		V_0 = ((int32_t)222);
		goto IL_05d5;
	}

IL_055e:
	{
		V_0 = ((int32_t)254);
		goto IL_05d5;
	}

IL_0566:
	{
		V_0 = ((int32_t)217);
		goto IL_05d5;
	}

IL_056e:
	{
		V_0 = ((int32_t)249);
		goto IL_05d5;
	}

IL_0576:
	{
		V_0 = ((int32_t)174);
		goto IL_05d5;
	}

IL_057e:
	{
		V_0 = ((int32_t)190);
		goto IL_05d5;
	}

IL_0586:
	{
		V_0 = ((int32_t)183);
		goto IL_05d5;
	}

IL_058e:
	{
		V_0 = ((int32_t)255);
		goto IL_05d5;
	}

IL_0596:
	{
		V_0 = ((int32_t)178);
		goto IL_05d5;
	}

IL_059e:
	{
		int32_t L_25 = V_0;
		if ((((int32_t)L_25) < ((int32_t)((int32_t)65281))))
		{
			goto IL_05b8;
		}
	}
	{
		int32_t L_26 = V_0;
		if ((((int32_t)L_26) > ((int32_t)((int32_t)65374))))
		{
			goto IL_05b8;
		}
	}
	{
		int32_t L_27 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_27, (int32_t)((int32_t)65248)));
		goto IL_05d5;
	}

IL_05b8:
	{
		Il2CppChar* L_28 = ___chars0;
		uint8_t* L_29 = ___bytes2;
		MonoEncoding_HandleFallback_m5BBB9A58548D7F4FC29EB94C8033AF716387D94F(__this, (EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 **)(&V_3), (Il2CppChar*)(Il2CppChar*)L_28, (int32_t*)(&V_1), (int32_t*)(&___charCount1), (uint8_t*)(uint8_t*)L_29, (int32_t*)(&V_2), (int32_t*)(&___byteCount3), /*hidden argument*/NULL);
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
		int32_t L_31 = ___charCount1;
		___charCount1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_31, (int32_t)1));
		goto IL_05f3;
	}

IL_05d5:
	{
		uint8_t* L_32 = ___bytes2;
		if ((((intptr_t)L_32) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_05e0;
		}
	}
	{
		uint8_t* L_33 = ___bytes2;
		int32_t L_34 = V_2;
		int32_t L_35 = V_0;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_33, (int32_t)L_34))) = (int8_t)((int32_t)((uint8_t)L_35));
	}

IL_05e0:
	{
		int32_t L_36 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
		int32_t L_37 = ___byteCount3;
		___byteCount3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_37, (int32_t)1));
		int32_t L_38 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
		int32_t L_39 = ___charCount1;
		___charCount1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)1));
	}

IL_05f3:
	{
		int32_t L_40 = ___charCount1;
		if ((((int32_t)L_40) > ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_41 = V_2;
		return L_41;
	}
}
// System.Void I18N.Other.CP28594::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP28594__cctor_m1DC76A2A3B366FFF2EA4621F4E45F58F3922AE53 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CP28594_t150821C2495D3DE51FFD20C2EA36430429F32FC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t5BF9241693AE1DE48403915AA18F028381B734C1____33D1AC98C31DCCB9238C374D4D1386DB68A6A595_2_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t5BF9241693AE1DE48403915AA18F028381B734C1____33D1AC98C31DCCB9238C374D4D1386DB68A6A595_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((CP28594_t150821C2495D3DE51FFD20C2EA36430429F32FC0_StaticFields*)il2cpp_codegen_static_fields_for(CP28594_t150821C2495D3DE51FFD20C2EA36430429F32FC0_il2cpp_TypeInfo_var))->set_ToChars_30(L_1);
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
// System.Void I18N.Other.CP28595::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP28595__ctor_m2AE41D7DAE43E114C063A65C8CA0AD8A1D7B2CBA (CP28595_tD90E4A4C7815C4413B05E145B01A4C021194C83E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CP28595_tD90E4A4C7815C4413B05E145B01A4C021194C83E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral97C50A822609770F742DFE272A1D8C89500BDDE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7EEC09E9F635B74E44F1AB4B338250973A4449F);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CP28595_tD90E4A4C7815C4413B05E145B01A4C021194C83E_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = ((CP28595_tD90E4A4C7815C4413B05E145B01A4C021194C83E_StaticFields*)il2cpp_codegen_static_fields_for(CP28595_tD90E4A4C7815C4413B05E145B01A4C021194C83E_il2cpp_TypeInfo_var))->get_ToChars_30();
		ByteEncoding__ctor_m38C66F0BDFF6CDAF86DA35A4771938B1DA64F2B5(__this, ((int32_t)28595), L_0, _stringLiteral97C50A822609770F742DFE272A1D8C89500BDDE6, _stringLiteralC7EEC09E9F635B74E44F1AB4B338250973A4449F, _stringLiteralC7EEC09E9F635B74E44F1AB4B338250973A4449F, _stringLiteralC7EEC09E9F635B74E44F1AB4B338250973A4449F, (bool)1, (bool)1, (bool)1, (bool)1, ((int32_t)1251), /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 I18N.Other.CP28595::GetByteCountImpl(System.Char*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP28595_GetByteCountImpl_mF0560D4EF53FF395667F9C9C60C09CDBC57E2972 (CP28595_tD90E4A4C7815C4413B05E145B01A4C021194C83E * __this, Il2CppChar* ___chars0, int32_t ___count1, const RuntimeMethod* method)
{
	{
		EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * L_0;
		L_0 = Encoding_get_EncoderFallback_m8DF6B8EC2F7AA69AF9129C5334D1FAFE13081152_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Il2CppChar* L_1 = ___chars0;
		int32_t L_2 = ___count1;
		int32_t L_3;
		L_3 = VirtFuncInvoker4< int32_t, Il2CppChar*, int32_t, uint8_t*, int32_t >::Invoke(48 /* System.Int32 I18N.Common.MonoEncoding::GetBytesImpl(System.Char*,System.Int32,System.Byte*,System.Int32) */, __this, (Il2CppChar*)(Il2CppChar*)L_1, L_2, (uint8_t*)(uint8_t*)((uintptr_t)0), 0);
		return L_3;
	}

IL_0014:
	{
		int32_t L_4 = ___count1;
		return L_4;
	}
}
// System.Int32 I18N.Other.CP28595::GetByteCount(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP28595_GetByteCount_m9DA0D919800E54A2705D4F78FDFD6993F24D75DF (CP28595_tD90E4A4C7815C4413B05E145B01A4C021194C83E * __this, String_t* ___s0, const RuntimeMethod* method)
{
	Il2CppChar* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * L_0;
		L_0 = Encoding_get_EncoderFallback_m8DF6B8EC2F7AA69AF9129C5334D1FAFE13081152_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_1 = ___s0;
		V_1 = L_1;
		String_t* L_2 = V_1;
		V_0 = (Il2CppChar*)((uintptr_t)L_2);
		Il2CppChar* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		Il2CppChar* L_4 = V_0;
		int32_t L_5;
		L_5 = RuntimeHelpers_get_OffsetToStringData_mEB8E6EAEBAFAB7CD7F7A915B3081785AABB9FC42(/*hidden argument*/NULL);
		V_0 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_4, (int32_t)L_5));
	}

IL_0018:
	{
		Il2CppChar* L_6 = V_0;
		String_t* L_7 = ___s0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_7, /*hidden argument*/NULL);
		int32_t L_9;
		L_9 = VirtFuncInvoker4< int32_t, Il2CppChar*, int32_t, uint8_t*, int32_t >::Invoke(48 /* System.Int32 I18N.Common.MonoEncoding::GetBytesImpl(System.Char*,System.Int32,System.Byte*,System.Int32) */, __this, (Il2CppChar*)(Il2CppChar*)L_6, L_8, (uint8_t*)(uint8_t*)((uintptr_t)0), 0);
		return L_9;
	}

IL_0029:
	{
		String_t* L_10 = ___s0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.Void I18N.Other.CP28595::ToBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP28595_ToBytes_m46D538C825148FEBA161229AE81AB8CE46BD0C58 (CP28595_tD90E4A4C7815C4413B05E145B01A4C021194C83E * __this, Il2CppChar* ___chars0, int32_t ___charCount1, uint8_t* ___bytes2, int32_t ___byteCount3, const RuntimeMethod* method)
{
	{
		uint8_t* L_0 = ___bytes2;
		if ((!(((uintptr_t)L_0) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_0010;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral77B615B8ED1ABB8FC1395D85A5AE524A9789D947)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CP28595_ToBytes_m46D538C825148FEBA161229AE81AB8CE46BD0C58_RuntimeMethod_var)));
	}

IL_0010:
	{
		Il2CppChar* L_2 = ___chars0;
		int32_t L_3 = ___charCount1;
		uint8_t* L_4 = ___bytes2;
		int32_t L_5 = ___byteCount3;
		int32_t L_6;
		L_6 = VirtFuncInvoker4< int32_t, Il2CppChar*, int32_t, uint8_t*, int32_t >::Invoke(48 /* System.Int32 I18N.Common.MonoEncoding::GetBytesImpl(System.Char*,System.Int32,System.Byte*,System.Int32) */, __this, (Il2CppChar*)(Il2CppChar*)L_2, L_3, (uint8_t*)(uint8_t*)L_4, L_5);
		return;
	}
}
// System.Int32 I18N.Other.CP28595::GetBytesImpl(System.Char*,System.Int32,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP28595_GetBytesImpl_m01FC6E0E7E918978D9DDC5D21445E50F2A17C057 (CP28595_tD90E4A4C7815C4413B05E145B01A4C021194C83E * __this, Il2CppChar* ___chars0, int32_t ___charCount1, uint8_t* ___bytes2, int32_t ___byteCount3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 * V_3 = NULL;
	{
		V_1 = 0;
		V_2 = 0;
		V_3 = (EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 *)NULL;
		goto IL_0266;
	}

IL_000b:
	{
		Il2CppChar* L_0 = ___chars0;
		int32_t L_1 = V_1;
		int32_t L_2 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_1), (int32_t)2)))));
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)((int32_t)161))))
		{
			goto IL_0248;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)173))))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)167))))
		{
			goto IL_01d3;
		}
	}
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)173))))
		{
			goto IL_0248;
		}
	}
	{
		goto IL_0211;
	}

IL_0041:
	{
		int32_t L_7 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)((int32_t)1025))))
		{
			case 0:
			{
				goto IL_01db;
			}
			case 1:
			{
				goto IL_01db;
			}
			case 2:
			{
				goto IL_01db;
			}
			case 3:
			{
				goto IL_01db;
			}
			case 4:
			{
				goto IL_01db;
			}
			case 5:
			{
				goto IL_01db;
			}
			case 6:
			{
				goto IL_01db;
			}
			case 7:
			{
				goto IL_01db;
			}
			case 8:
			{
				goto IL_01db;
			}
			case 9:
			{
				goto IL_01db;
			}
			case 10:
			{
				goto IL_01db;
			}
			case 11:
			{
				goto IL_01db;
			}
			case 12:
			{
				goto IL_0211;
			}
			case 13:
			{
				goto IL_01e5;
			}
			case 14:
			{
				goto IL_01e5;
			}
			case 15:
			{
				goto IL_01e5;
			}
			case 16:
			{
				goto IL_01e5;
			}
			case 17:
			{
				goto IL_01e5;
			}
			case 18:
			{
				goto IL_01e5;
			}
			case 19:
			{
				goto IL_01e5;
			}
			case 20:
			{
				goto IL_01e5;
			}
			case 21:
			{
				goto IL_01e5;
			}
			case 22:
			{
				goto IL_01e5;
			}
			case 23:
			{
				goto IL_01e5;
			}
			case 24:
			{
				goto IL_01e5;
			}
			case 25:
			{
				goto IL_01e5;
			}
			case 26:
			{
				goto IL_01e5;
			}
			case 27:
			{
				goto IL_01e5;
			}
			case 28:
			{
				goto IL_01e5;
			}
			case 29:
			{
				goto IL_01e5;
			}
			case 30:
			{
				goto IL_01e5;
			}
			case 31:
			{
				goto IL_01e5;
			}
			case 32:
			{
				goto IL_01e5;
			}
			case 33:
			{
				goto IL_01e5;
			}
			case 34:
			{
				goto IL_01e5;
			}
			case 35:
			{
				goto IL_01e5;
			}
			case 36:
			{
				goto IL_01e5;
			}
			case 37:
			{
				goto IL_01e5;
			}
			case 38:
			{
				goto IL_01e5;
			}
			case 39:
			{
				goto IL_01e5;
			}
			case 40:
			{
				goto IL_01e5;
			}
			case 41:
			{
				goto IL_01e5;
			}
			case 42:
			{
				goto IL_01e5;
			}
			case 43:
			{
				goto IL_01e5;
			}
			case 44:
			{
				goto IL_01e5;
			}
			case 45:
			{
				goto IL_01e5;
			}
			case 46:
			{
				goto IL_01e5;
			}
			case 47:
			{
				goto IL_01e5;
			}
			case 48:
			{
				goto IL_01e5;
			}
			case 49:
			{
				goto IL_01e5;
			}
			case 50:
			{
				goto IL_01e5;
			}
			case 51:
			{
				goto IL_01e5;
			}
			case 52:
			{
				goto IL_01e5;
			}
			case 53:
			{
				goto IL_01e5;
			}
			case 54:
			{
				goto IL_01e5;
			}
			case 55:
			{
				goto IL_01e5;
			}
			case 56:
			{
				goto IL_01e5;
			}
			case 57:
			{
				goto IL_01e5;
			}
			case 58:
			{
				goto IL_01e5;
			}
			case 59:
			{
				goto IL_01e5;
			}
			case 60:
			{
				goto IL_01e5;
			}
			case 61:
			{
				goto IL_01e5;
			}
			case 62:
			{
				goto IL_01e5;
			}
			case 63:
			{
				goto IL_01e5;
			}
			case 64:
			{
				goto IL_01e5;
			}
			case 65:
			{
				goto IL_01e5;
			}
			case 66:
			{
				goto IL_01e5;
			}
			case 67:
			{
				goto IL_01e5;
			}
			case 68:
			{
				goto IL_01e5;
			}
			case 69:
			{
				goto IL_01e5;
			}
			case 70:
			{
				goto IL_01e5;
			}
			case 71:
			{
				goto IL_01e5;
			}
			case 72:
			{
				goto IL_01e5;
			}
			case 73:
			{
				goto IL_01e5;
			}
			case 74:
			{
				goto IL_01e5;
			}
			case 75:
			{
				goto IL_01e5;
			}
			case 76:
			{
				goto IL_01e5;
			}
			case 77:
			{
				goto IL_01e5;
			}
			case 78:
			{
				goto IL_01e5;
			}
			case 79:
			{
				goto IL_0211;
			}
			case 80:
			{
				goto IL_01ef;
			}
			case 81:
			{
				goto IL_01ef;
			}
			case 82:
			{
				goto IL_01ef;
			}
			case 83:
			{
				goto IL_01ef;
			}
			case 84:
			{
				goto IL_01ef;
			}
			case 85:
			{
				goto IL_01ef;
			}
			case 86:
			{
				goto IL_01ef;
			}
			case 87:
			{
				goto IL_01ef;
			}
			case 88:
			{
				goto IL_01ef;
			}
			case 89:
			{
				goto IL_01ef;
			}
			case 90:
			{
				goto IL_01ef;
			}
			case 91:
			{
				goto IL_01ef;
			}
			case 92:
			{
				goto IL_0211;
			}
			case 93:
			{
				goto IL_01f9;
			}
			case 94:
			{
				goto IL_0201;
			}
		}
	}
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)8470))))
		{
			goto IL_0209;
		}
	}
	{
		goto IL_0211;
	}

IL_01d3:
	{
		V_0 = ((int32_t)253);
		goto IL_0248;
	}

IL_01db:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)((int32_t)864)));
		goto IL_0248;
	}

IL_01e5:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)((int32_t)864)));
		goto IL_0248;
	}

IL_01ef:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)((int32_t)864)));
		goto IL_0248;
	}

IL_01f9:
	{
		V_0 = ((int32_t)254);
		goto IL_0248;
	}

IL_0201:
	{
		V_0 = ((int32_t)255);
		goto IL_0248;
	}

IL_0209:
	{
		V_0 = ((int32_t)240);
		goto IL_0248;
	}

IL_0211:
	{
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) < ((int32_t)((int32_t)65281))))
		{
			goto IL_022b;
		}
	}
	{
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) > ((int32_t)((int32_t)65374))))
		{
			goto IL_022b;
		}
	}
	{
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)((int32_t)65248)));
		goto IL_0248;
	}

IL_022b:
	{
		Il2CppChar* L_15 = ___chars0;
		uint8_t* L_16 = ___bytes2;
		MonoEncoding_HandleFallback_m5BBB9A58548D7F4FC29EB94C8033AF716387D94F(__this, (EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 **)(&V_3), (Il2CppChar*)(Il2CppChar*)L_15, (int32_t*)(&V_1), (int32_t*)(&___charCount1), (uint8_t*)(uint8_t*)L_16, (int32_t*)(&V_2), (int32_t*)(&___byteCount3), /*hidden argument*/NULL);
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		int32_t L_18 = ___charCount1;
		___charCount1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)1));
		goto IL_0266;
	}

IL_0248:
	{
		uint8_t* L_19 = ___bytes2;
		if ((((intptr_t)L_19) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0253;
		}
	}
	{
		uint8_t* L_20 = ___bytes2;
		int32_t L_21 = V_2;
		int32_t L_22 = V_0;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_20, (int32_t)L_21))) = (int8_t)((int32_t)((uint8_t)L_22));
	}

IL_0253:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
		int32_t L_24 = ___byteCount3;
		___byteCount3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)1));
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
		int32_t L_26 = ___charCount1;
		___charCount1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_26, (int32_t)1));
	}

IL_0266:
	{
		int32_t L_27 = ___charCount1;
		if ((((int32_t)L_27) > ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_28 = V_2;
		return L_28;
	}
}
// System.Void I18N.Other.CP28595::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP28595__cctor_m9FE9BA4572FC5392C63267062E7DF8B08735242A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CP28595_tD90E4A4C7815C4413B05E145B01A4C021194C83E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t5BF9241693AE1DE48403915AA18F028381B734C1____E720E24EA0E8EA5F028BE4B37A7E456DB5E6AE41_5_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t5BF9241693AE1DE48403915AA18F028381B734C1____E720E24EA0E8EA5F028BE4B37A7E456DB5E6AE41_5_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((CP28595_tD90E4A4C7815C4413B05E145B01A4C021194C83E_StaticFields*)il2cpp_codegen_static_fields_for(CP28595_tD90E4A4C7815C4413B05E145B01A4C021194C83E_il2cpp_TypeInfo_var))->set_ToChars_30(L_1);
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
// System.Void I18N.Other.CP57002::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP57002__ctor_mC7C1FEA185F3734EC1687AB3CDC5AE44C0F92218 (CP57002_tB89DB24B3DEE8A9C1F5A680E5D93F73C7D18311E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20C842E641052B872F3B22C88AF1FADB0944B2E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CCE6BC74994FAB071ED85694270733E616889B5);
		s_Il2CppMethodInitialized = true;
	}
	{
		ISCIIEncoding__ctor_mC59CEC87F260BE78FE94855DD0E1ECF92085C1C9(__this, ((int32_t)57002), ((int32_t)2304), _stringLiteral20C842E641052B872F3B22C88AF1FADB0944B2E0, _stringLiteral7CCE6BC74994FAB071ED85694270733E616889B5, /*hidden argument*/NULL);
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
// System.Void I18N.Other.CP57003::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP57003__ctor_m19D12C51660CA8072D45E2A4650F330AB01B9BF3 (CP57003_t8E07EDBCBB10982CD462645CD671C39C2DEA8B6A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EC60200EB2C4FB310B6D03C59FD2BF24E512835);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17BDEE3E69374D0D685D20729FFD47D97EF76EC2);
		s_Il2CppMethodInitialized = true;
	}
	{
		ISCIIEncoding__ctor_mC59CEC87F260BE78FE94855DD0E1ECF92085C1C9(__this, ((int32_t)57003), ((int32_t)2432), _stringLiteral17BDEE3E69374D0D685D20729FFD47D97EF76EC2, _stringLiteral0EC60200EB2C4FB310B6D03C59FD2BF24E512835, /*hidden argument*/NULL);
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
// System.Void I18N.Other.CP57004::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP57004__ctor_m7C55EAD72327E99E46E5919C62CF1988D7EFAC15 (CP57004_t5F950E54FE304C528491A0AF293C4BC1276225F3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4BB074BECCF288E8CC240DC6E68E1BABA3463B0C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DB38E03A729B3BC5A40FAA29A3F584655D68B8);
		s_Il2CppMethodInitialized = true;
	}
	{
		ISCIIEncoding__ctor_mC59CEC87F260BE78FE94855DD0E1ECF92085C1C9(__this, ((int32_t)57004), ((int32_t)2944), _stringLiteral4BB074BECCF288E8CC240DC6E68E1BABA3463B0C, _stringLiteralA3DB38E03A729B3BC5A40FAA29A3F584655D68B8, /*hidden argument*/NULL);
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
// System.Void I18N.Other.CP57005::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP57005__ctor_m2FC67AD57234EB5216B2710B7BC02B79AC47C36C (CP57005_tB28BDBF5B09DF78382DC11B2923F8D5CE9AB947B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE9899A9F1F60437FF6150902FD4A4BEBC71495E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB98DAE2991114034644106FD92748D78DBB56702);
		s_Il2CppMethodInitialized = true;
	}
	{
		ISCIIEncoding__ctor_mC59CEC87F260BE78FE94855DD0E1ECF92085C1C9(__this, ((int32_t)57005), ((int32_t)2944), _stringLiteralAE9899A9F1F60437FF6150902FD4A4BEBC71495E, _stringLiteralB98DAE2991114034644106FD92748D78DBB56702, /*hidden argument*/NULL);
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
// System.Void I18N.Other.CP57006::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP57006__ctor_m9A914B77B67AEAA510B873391D63D67F1DB9E2F9 (CP57006_tEFF51C94DEE95B3405D7D465DCCB9148792CE420 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4CC31B6C5B4E5A17444259FC957FB77C0C70FECE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82E29A7C0D56F06827DBCB1FCE7898B84F83CCC9);
		s_Il2CppMethodInitialized = true;
	}
	{
		ISCIIEncoding__ctor_mC59CEC87F260BE78FE94855DD0E1ECF92085C1C9(__this, ((int32_t)57006), ((int32_t)3456), _stringLiteral82E29A7C0D56F06827DBCB1FCE7898B84F83CCC9, _stringLiteral4CC31B6C5B4E5A17444259FC957FB77C0C70FECE, /*hidden argument*/NULL);
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
// System.Void I18N.Other.CP57007::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP57007__ctor_m882DB4D7DA20C1AC51C5A6434A5544B8E071A799 (CP57007_t9639DF280CFC1244C6397DE41C1902772633D135 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0314EB59D5D7DB264D8BF1BA5003FDE6A8492D32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F00789D228BB70AE838D627802B9AE3C2B1D2D0);
		s_Il2CppMethodInitialized = true;
	}
	{
		ISCIIEncoding__ctor_mC59CEC87F260BE78FE94855DD0E1ECF92085C1C9(__this, ((int32_t)57007), ((int32_t)2816), _stringLiteral0314EB59D5D7DB264D8BF1BA5003FDE6A8492D32, _stringLiteral9F00789D228BB70AE838D627802B9AE3C2B1D2D0, /*hidden argument*/NULL);
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
// System.Void I18N.Other.CP57008::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP57008__ctor_m5BCE1C7EA18A0ECE2077A8AA0502166132C14631 (CP57008_t37F92F2B79A45E25F73C2814AC5DA8655A061CC7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33C9FF0807BC1E3E3D6A7232D713F83ADBCD1771);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F50A394ED8E898CD0E517570D7F4D5EA6869111);
		s_Il2CppMethodInitialized = true;
	}
	{
		ISCIIEncoding__ctor_mC59CEC87F260BE78FE94855DD0E1ECF92085C1C9(__this, ((int32_t)57008), ((int32_t)3200), _stringLiteral4F50A394ED8E898CD0E517570D7F4D5EA6869111, _stringLiteral33C9FF0807BC1E3E3D6A7232D713F83ADBCD1771, /*hidden argument*/NULL);
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
// System.Void I18N.Other.CP57009::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP57009__ctor_mE245557DDA28B3A3A15FF448BEB84E3EF1F8F847 (CP57009_t90A7DBEF0693CF1D60DE8A6A12DAE11C86BEDCC6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral387D24B2AD38BFAD75F491F2B52DFEB0C68E9EC4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF4377CD7CCFF97F2BEFB64D8161CF37BB55D134);
		s_Il2CppMethodInitialized = true;
	}
	{
		ISCIIEncoding__ctor_mC59CEC87F260BE78FE94855DD0E1ECF92085C1C9(__this, ((int32_t)57009), ((int32_t)3328), _stringLiteral387D24B2AD38BFAD75F491F2B52DFEB0C68E9EC4, _stringLiteralDF4377CD7CCFF97F2BEFB64D8161CF37BB55D134, /*hidden argument*/NULL);
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
// System.Void I18N.Other.CP57010::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP57010__ctor_m41A9CFC8BC8FD2D93CA4B11D06B7F1F87833D103 (CP57010_t8D1B9539938953F8CE274962782579923B6331DE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BEE3D4B4D12655FC98F599F7E19DB43920215C2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A124EA7895BEAD831D7736F0F9801D732E7AA82);
		s_Il2CppMethodInitialized = true;
	}
	{
		ISCIIEncoding__ctor_mC59CEC87F260BE78FE94855DD0E1ECF92085C1C9(__this, ((int32_t)57010), ((int32_t)2688), _stringLiteral3A124EA7895BEAD831D7736F0F9801D732E7AA82, _stringLiteral0BEE3D4B4D12655FC98F599F7E19DB43920215C2, /*hidden argument*/NULL);
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
// System.Void I18N.Other.CP57011::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP57011__ctor_m8F52A3DA367AA0556B03784FEA67AC5E8A76EB70 (CP57011_t63699D0C1E030F8F9D031688391CD10EF60C5246 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0306DF7DBF1214D04F8B833441A25DD021E470F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE457BA8DD408FCE78E75D3A930CB1ABB2955CC0);
		s_Il2CppMethodInitialized = true;
	}
	{
		ISCIIEncoding__ctor_mC59CEC87F260BE78FE94855DD0E1ECF92085C1C9(__this, ((int32_t)57011), ((int32_t)2560), _stringLiteralFE457BA8DD408FCE78E75D3A930CB1ABB2955CC0, _stringLiteralC0306DF7DBF1214D04F8B833441A25DD021E470F, /*hidden argument*/NULL);
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
// System.Void I18N.Other.CP874::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP874__ctor_mE462C524438011F295282085C2F1EEE7B5A6E7D4 (CP874_tEBC07123D6653EC1BB8C68CC127EB4858A473E75 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CP874_tEBC07123D6653EC1BB8C68CC127EB4858A473E75_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA799DF7DC0A354D065D9FB73E14AA266E8D8C652);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAE3AD67659BA087374738C2A2EAA2D0B80B2DA7);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CP874_tEBC07123D6653EC1BB8C68CC127EB4858A473E75_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = ((CP874_tEBC07123D6653EC1BB8C68CC127EB4858A473E75_StaticFields*)il2cpp_codegen_static_fields_for(CP874_tEBC07123D6653EC1BB8C68CC127EB4858A473E75_il2cpp_TypeInfo_var))->get_ToChars_30();
		ByteEncoding__ctor_m38C66F0BDFF6CDAF86DA35A4771938B1DA64F2B5(__this, ((int32_t)874), L_0, _stringLiteralDAE3AD67659BA087374738C2A2EAA2D0B80B2DA7, _stringLiteralA799DF7DC0A354D065D9FB73E14AA266E8D8C652, _stringLiteralA799DF7DC0A354D065D9FB73E14AA266E8D8C652, _stringLiteralA799DF7DC0A354D065D9FB73E14AA266E8D8C652, (bool)1, (bool)1, (bool)1, (bool)1, ((int32_t)874), /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 I18N.Other.CP874::GetByteCountImpl(System.Char*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP874_GetByteCountImpl_m4F01DE54D212C6D4F0C73A55D0C1ADF0B876E63E (CP874_tEBC07123D6653EC1BB8C68CC127EB4858A473E75 * __this, Il2CppChar* ___chars0, int32_t ___count1, const RuntimeMethod* method)
{
	{
		EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * L_0;
		L_0 = Encoding_get_EncoderFallback_m8DF6B8EC2F7AA69AF9129C5334D1FAFE13081152_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Il2CppChar* L_1 = ___chars0;
		int32_t L_2 = ___count1;
		int32_t L_3;
		L_3 = VirtFuncInvoker4< int32_t, Il2CppChar*, int32_t, uint8_t*, int32_t >::Invoke(48 /* System.Int32 I18N.Common.MonoEncoding::GetBytesImpl(System.Char*,System.Int32,System.Byte*,System.Int32) */, __this, (Il2CppChar*)(Il2CppChar*)L_1, L_2, (uint8_t*)(uint8_t*)((uintptr_t)0), 0);
		return L_3;
	}

IL_0014:
	{
		int32_t L_4 = ___count1;
		return L_4;
	}
}
// System.Int32 I18N.Other.CP874::GetByteCount(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP874_GetByteCount_m610293BA51F029B41390ECAEE9A63A92B301F469 (CP874_tEBC07123D6653EC1BB8C68CC127EB4858A473E75 * __this, String_t* ___s0, const RuntimeMethod* method)
{
	Il2CppChar* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * L_0;
		L_0 = Encoding_get_EncoderFallback_m8DF6B8EC2F7AA69AF9129C5334D1FAFE13081152_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_1 = ___s0;
		V_1 = L_1;
		String_t* L_2 = V_1;
		V_0 = (Il2CppChar*)((uintptr_t)L_2);
		Il2CppChar* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		Il2CppChar* L_4 = V_0;
		int32_t L_5;
		L_5 = RuntimeHelpers_get_OffsetToStringData_mEB8E6EAEBAFAB7CD7F7A915B3081785AABB9FC42(/*hidden argument*/NULL);
		V_0 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_4, (int32_t)L_5));
	}

IL_0018:
	{
		Il2CppChar* L_6 = V_0;
		String_t* L_7 = ___s0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_7, /*hidden argument*/NULL);
		int32_t L_9;
		L_9 = VirtFuncInvoker4< int32_t, Il2CppChar*, int32_t, uint8_t*, int32_t >::Invoke(48 /* System.Int32 I18N.Common.MonoEncoding::GetBytesImpl(System.Char*,System.Int32,System.Byte*,System.Int32) */, __this, (Il2CppChar*)(Il2CppChar*)L_6, L_8, (uint8_t*)(uint8_t*)((uintptr_t)0), 0);
		return L_9;
	}

IL_0029:
	{
		String_t* L_10 = ___s0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.Void I18N.Other.CP874::ToBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP874_ToBytes_m31FB5F29F917BB11E4E2605FBCFB2A4A2264C9A3 (CP874_tEBC07123D6653EC1BB8C68CC127EB4858A473E75 * __this, Il2CppChar* ___chars0, int32_t ___charCount1, uint8_t* ___bytes2, int32_t ___byteCount3, const RuntimeMethod* method)
{
	{
		uint8_t* L_0 = ___bytes2;
		if ((!(((uintptr_t)L_0) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_0010;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral77B615B8ED1ABB8FC1395D85A5AE524A9789D947)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CP874_ToBytes_m31FB5F29F917BB11E4E2605FBCFB2A4A2264C9A3_RuntimeMethod_var)));
	}

IL_0010:
	{
		Il2CppChar* L_2 = ___chars0;
		int32_t L_3 = ___charCount1;
		uint8_t* L_4 = ___bytes2;
		int32_t L_5 = ___byteCount3;
		int32_t L_6;
		L_6 = VirtFuncInvoker4< int32_t, Il2CppChar*, int32_t, uint8_t*, int32_t >::Invoke(48 /* System.Int32 I18N.Common.MonoEncoding::GetBytesImpl(System.Char*,System.Int32,System.Byte*,System.Int32) */, __this, (Il2CppChar*)(Il2CppChar*)L_2, L_3, (uint8_t*)(uint8_t*)L_4, L_5);
		return;
	}
}
// System.Int32 I18N.Other.CP874::GetBytesImpl(System.Char*,System.Int32,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP874_GetBytesImpl_mE49DE41CEE0B289524933FC4B27CF4FDEDA9DF62 (CP874_tEBC07123D6653EC1BB8C68CC127EB4858A473E75 * __this, Il2CppChar* ___chars0, int32_t ___charCount1, uint8_t* ___bytes2, int32_t ___byteCount3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 * V_3 = NULL;
	{
		V_1 = 0;
		V_2 = 0;
		V_3 = (EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 *)NULL;
		goto IL_0320;
	}

IL_000b:
	{
		Il2CppChar* L_0 = ___chars0;
		int32_t L_1 = V_1;
		int32_t L_2 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_1), (int32_t)2)))));
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)((int32_t)26))))
		{
			goto IL_0302;
		}
	}
	{
		int32_t L_4 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)((int32_t)26))))
		{
			case 0:
			{
				goto IL_0288;
			}
			case 1:
			{
				goto IL_0302;
			}
			case 2:
			{
				goto IL_028d;
			}
			case 3:
			{
				goto IL_0302;
			}
			case 4:
			{
				goto IL_0302;
			}
			case 5:
			{
				goto IL_0302;
			}
			case 6:
			{
				goto IL_0302;
			}
			case 7:
			{
				goto IL_0302;
			}
			case 8:
			{
				goto IL_0302;
			}
			case 9:
			{
				goto IL_0302;
			}
			case 10:
			{
				goto IL_0302;
			}
			case 11:
			{
				goto IL_0302;
			}
			case 12:
			{
				goto IL_0302;
			}
			case 13:
			{
				goto IL_0302;
			}
			case 14:
			{
				goto IL_0302;
			}
			case 15:
			{
				goto IL_0302;
			}
			case 16:
			{
				goto IL_0302;
			}
			case 17:
			{
				goto IL_0302;
			}
			case 18:
			{
				goto IL_0302;
			}
			case 19:
			{
				goto IL_0302;
			}
			case 20:
			{
				goto IL_0302;
			}
			case 21:
			{
				goto IL_0302;
			}
			case 22:
			{
				goto IL_0302;
			}
			case 23:
			{
				goto IL_0302;
			}
			case 24:
			{
				goto IL_0302;
			}
			case 25:
			{
				goto IL_0302;
			}
			case 26:
			{
				goto IL_0302;
			}
			case 27:
			{
				goto IL_0302;
			}
			case 28:
			{
				goto IL_0302;
			}
			case 29:
			{
				goto IL_0302;
			}
			case 30:
			{
				goto IL_0302;
			}
			case 31:
			{
				goto IL_0302;
			}
			case 32:
			{
				goto IL_0302;
			}
			case 33:
			{
				goto IL_0302;
			}
			case 34:
			{
				goto IL_0302;
			}
			case 35:
			{
				goto IL_0302;
			}
			case 36:
			{
				goto IL_0302;
			}
			case 37:
			{
				goto IL_0302;
			}
			case 38:
			{
				goto IL_0302;
			}
			case 39:
			{
				goto IL_0302;
			}
			case 40:
			{
				goto IL_0302;
			}
			case 41:
			{
				goto IL_0302;
			}
			case 42:
			{
				goto IL_0302;
			}
			case 43:
			{
				goto IL_0302;
			}
			case 44:
			{
				goto IL_0302;
			}
			case 45:
			{
				goto IL_0302;
			}
			case 46:
			{
				goto IL_0302;
			}
			case 47:
			{
				goto IL_0302;
			}
			case 48:
			{
				goto IL_0302;
			}
			case 49:
			{
				goto IL_0302;
			}
			case 50:
			{
				goto IL_0302;
			}
			case 51:
			{
				goto IL_0302;
			}
			case 52:
			{
				goto IL_0302;
			}
			case 53:
			{
				goto IL_0302;
			}
			case 54:
			{
				goto IL_0302;
			}
			case 55:
			{
				goto IL_0302;
			}
			case 56:
			{
				goto IL_0302;
			}
			case 57:
			{
				goto IL_0302;
			}
			case 58:
			{
				goto IL_0302;
			}
			case 59:
			{
				goto IL_0302;
			}
			case 60:
			{
				goto IL_0302;
			}
			case 61:
			{
				goto IL_0302;
			}
			case 62:
			{
				goto IL_0302;
			}
			case 63:
			{
				goto IL_0302;
			}
			case 64:
			{
				goto IL_0302;
			}
			case 65:
			{
				goto IL_0302;
			}
			case 66:
			{
				goto IL_0302;
			}
			case 67:
			{
				goto IL_0302;
			}
			case 68:
			{
				goto IL_0302;
			}
			case 69:
			{
				goto IL_0302;
			}
			case 70:
			{
				goto IL_0302;
			}
			case 71:
			{
				goto IL_0302;
			}
			case 72:
			{
				goto IL_0302;
			}
			case 73:
			{
				goto IL_0302;
			}
			case 74:
			{
				goto IL_0302;
			}
			case 75:
			{
				goto IL_0302;
			}
			case 76:
			{
				goto IL_0302;
			}
			case 77:
			{
				goto IL_0302;
			}
			case 78:
			{
				goto IL_0302;
			}
			case 79:
			{
				goto IL_0302;
			}
			case 80:
			{
				goto IL_0302;
			}
			case 81:
			{
				goto IL_0302;
			}
			case 82:
			{
				goto IL_0302;
			}
			case 83:
			{
				goto IL_0302;
			}
			case 84:
			{
				goto IL_0302;
			}
			case 85:
			{
				goto IL_0302;
			}
			case 86:
			{
				goto IL_0302;
			}
			case 87:
			{
				goto IL_0302;
			}
			case 88:
			{
				goto IL_0302;
			}
			case 89:
			{
				goto IL_0302;
			}
			case 90:
			{
				goto IL_0302;
			}
			case 91:
			{
				goto IL_0302;
			}
			case 92:
			{
				goto IL_0302;
			}
			case 93:
			{
				goto IL_0302;
			}
			case 94:
			{
				goto IL_0302;
			}
			case 95:
			{
				goto IL_0302;
			}
			case 96:
			{
				goto IL_0302;
			}
			case 97:
			{
				goto IL_0302;
			}
			case 98:
			{
				goto IL_0302;
			}
			case 99:
			{
				goto IL_0302;
			}
			case 100:
			{
				goto IL_0302;
			}
			case 101:
			{
				goto IL_0292;
			}
			case 102:
			{
				goto IL_02cb;
			}
			case 103:
			{
				goto IL_02cb;
			}
			case 104:
			{
				goto IL_02cb;
			}
			case 105:
			{
				goto IL_02cb;
			}
			case 106:
			{
				goto IL_02cb;
			}
			case 107:
			{
				goto IL_02cb;
			}
			case 108:
			{
				goto IL_02cb;
			}
			case 109:
			{
				goto IL_02cb;
			}
			case 110:
			{
				goto IL_02cb;
			}
			case 111:
			{
				goto IL_02cb;
			}
			case 112:
			{
				goto IL_02cb;
			}
			case 113:
			{
				goto IL_02cb;
			}
			case 114:
			{
				goto IL_02cb;
			}
			case 115:
			{
				goto IL_02cb;
			}
			case 116:
			{
				goto IL_02cb;
			}
			case 117:
			{
				goto IL_02cb;
			}
			case 118:
			{
				goto IL_02cb;
			}
			case 119:
			{
				goto IL_02cb;
			}
			case 120:
			{
				goto IL_02cb;
			}
			case 121:
			{
				goto IL_02cb;
			}
			case 122:
			{
				goto IL_02cb;
			}
			case 123:
			{
				goto IL_02cb;
			}
			case 124:
			{
				goto IL_02cb;
			}
			case 125:
			{
				goto IL_02cb;
			}
			case 126:
			{
				goto IL_02cb;
			}
			case 127:
			{
				goto IL_02cb;
			}
			case 128:
			{
				goto IL_02cb;
			}
			case 129:
			{
				goto IL_02cb;
			}
			case 130:
			{
				goto IL_02cb;
			}
			case 131:
			{
				goto IL_02cb;
			}
			case 132:
			{
				goto IL_02cb;
			}
			case 133:
			{
				goto IL_02cb;
			}
			case 134:
			{
				goto IL_0297;
			}
			case 135:
			{
				goto IL_02cb;
			}
			case 136:
			{
				goto IL_029f;
			}
			case 137:
			{
				goto IL_02cb;
			}
			case 138:
			{
				goto IL_02cb;
			}
			case 139:
			{
				goto IL_02cb;
			}
			case 140:
			{
				goto IL_02a7;
			}
			case 141:
			{
				goto IL_02cb;
			}
			case 142:
			{
				goto IL_02cb;
			}
			case 143:
			{
				goto IL_02cb;
			}
			case 144:
			{
				goto IL_02cb;
			}
			case 145:
			{
				goto IL_02cb;
			}
			case 146:
			{
				goto IL_02af;
			}
		}
	}
	{
		int32_t L_5 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)((int32_t)3585)))) > ((uint32_t)((int32_t)57)))))
		{
			goto IL_02b7;
		}
	}
	{
		int32_t L_6 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)((int32_t)3647)))) > ((uint32_t)((int32_t)28)))))
		{
			goto IL_02c1;
		}
	}
	{
		goto IL_02cb;
	}

IL_0288:
	{
		V_0 = ((int32_t)127);
		goto IL_0302;
	}

IL_028d:
	{
		V_0 = ((int32_t)26);
		goto IL_0302;
	}

IL_0292:
	{
		V_0 = ((int32_t)28);
		goto IL_0302;
	}

IL_0297:
	{
		V_0 = ((int32_t)255);
		goto IL_0302;
	}

IL_029f:
	{
		V_0 = ((int32_t)252);
		goto IL_0302;
	}

IL_02a7:
	{
		V_0 = ((int32_t)254);
		goto IL_0302;
	}

IL_02af:
	{
		V_0 = ((int32_t)253);
		goto IL_0302;
	}

IL_02b7:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)((int32_t)3424)));
		goto IL_0302;
	}

IL_02c1:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)((int32_t)3424)));
		goto IL_0302;
	}

IL_02cb:
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) < ((int32_t)((int32_t)65281))))
		{
			goto IL_02e5;
		}
	}
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) > ((int32_t)((int32_t)65374))))
		{
			goto IL_02e5;
		}
	}
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)((int32_t)65248)));
		goto IL_0302;
	}

IL_02e5:
	{
		Il2CppChar* L_12 = ___chars0;
		uint8_t* L_13 = ___bytes2;
		MonoEncoding_HandleFallback_m5BBB9A58548D7F4FC29EB94C8033AF716387D94F(__this, (EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 **)(&V_3), (Il2CppChar*)(Il2CppChar*)L_12, (int32_t*)(&V_1), (int32_t*)(&___charCount1), (uint8_t*)(uint8_t*)L_13, (int32_t*)(&V_2), (int32_t*)(&___byteCount3), /*hidden argument*/NULL);
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
		int32_t L_15 = ___charCount1;
		___charCount1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)1));
		goto IL_0320;
	}

IL_0302:
	{
		uint8_t* L_16 = ___bytes2;
		if ((((intptr_t)L_16) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_030d;
		}
	}
	{
		uint8_t* L_17 = ___bytes2;
		int32_t L_18 = V_2;
		int32_t L_19 = V_0;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, (int32_t)L_18))) = (int8_t)((int32_t)((uint8_t)L_19));
	}

IL_030d:
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
		int32_t L_21 = ___byteCount3;
		___byteCount3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1));
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
		int32_t L_23 = ___charCount1;
		___charCount1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)1));
	}

IL_0320:
	{
		int32_t L_24 = ___charCount1;
		if ((((int32_t)L_24) > ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_25 = V_2;
		return L_25;
	}
}
// System.Void I18N.Other.CP874::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP874__cctor_m9BD84F83CDCE25564F18E5331FD0246A8ED1275E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CP874_tEBC07123D6653EC1BB8C68CC127EB4858A473E75_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t5BF9241693AE1DE48403915AA18F028381B734C1____31D76B23EDF9CE1BF17651DAC05E3D98BBEA1FC8_1_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t5BF9241693AE1DE48403915AA18F028381B734C1____31D76B23EDF9CE1BF17651DAC05E3D98BBEA1FC8_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((CP874_tEBC07123D6653EC1BB8C68CC127EB4858A473E75_StaticFields*)il2cpp_codegen_static_fields_for(CP874_tEBC07123D6653EC1BB8C68CC127EB4858A473E75_il2cpp_TypeInfo_var))->set_ToChars_30(L_1);
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
// System.Void I18N.Other.ENCiso_8859_4::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENCiso_8859_4__ctor_mF3A9472C5752ADD541F2D7263C9C6AFC4855E400 (ENCiso_8859_4_t559BC040CC738EF8FF65C3C4B556C44CF051B16B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CP28594_t150821C2495D3DE51FFD20C2EA36430429F32FC0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CP28594_t150821C2495D3DE51FFD20C2EA36430429F32FC0_il2cpp_TypeInfo_var);
		CP28594__ctor_m3A2325E91C8AC7590BDA9C504DFB0D4C20A9E1B0(__this, /*hidden argument*/NULL);
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
// System.Void I18N.Other.ENCiso_8859_5::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENCiso_8859_5__ctor_m2045B4995BDB5827AD905613D2FAEE085CAF6D35 (ENCiso_8859_5_tD09756D4E7144182DD53126624D463E1BBD64831 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CP28595_tD90E4A4C7815C4413B05E145B01A4C021194C83E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CP28595_tD90E4A4C7815C4413B05E145B01A4C021194C83E_il2cpp_TypeInfo_var);
		CP28595__ctor_m2AE41D7DAE43E114C063A65C8CA0AD8A1D7B2CBA(__this, /*hidden argument*/NULL);
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
// System.Void I18N.Other.ENCkoi8_r::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENCkoi8_r__ctor_m1C341ED7C590C159911931E94F9539C2A238E43A (ENCkoi8_r_tBEEB1D5914A3E48147D18D5AE9EB51B006FA19F5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CP20866_tB32F65B3151CE320A085A67533B92BA74BB716A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CP20866_tB32F65B3151CE320A085A67533B92BA74BB716A5_il2cpp_TypeInfo_var);
		CP20866__ctor_m3519F1C4A5B086E6C0C4C8E5AF86C77105525B06(__this, /*hidden argument*/NULL);
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
// System.Void I18N.Other.ENCkoi8_u::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENCkoi8_u__ctor_m52B681DF703CDE58B58AD56CB48B23A0570A382F (ENCkoi8_u_tEA78593A5219A7ACC190218670EBF895B59AE065 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CP21866_t3C1E45BEF3F191BEF75E920F10395570AD55077C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CP21866_t3C1E45BEF3F191BEF75E920F10395570AD55077C_il2cpp_TypeInfo_var);
		CP21866__ctor_m28ED8DD9C1F0881434328237D8C81530E82332D8(__this, /*hidden argument*/NULL);
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
// System.Void I18N.Other.ENCwindows_1251::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENCwindows_1251__ctor_m0189609C8FA819543C11767EF39C91D8C9A9CE79 (ENCwindows_1251_tEF42F70A0E661A6186652A3530D58B4CBEEEC135 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CP1251_t67A880F7D677377EB305EC157DA9B70CFE33875C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CP1251_t67A880F7D677377EB305EC157DA9B70CFE33875C_il2cpp_TypeInfo_var);
		CP1251__ctor_mC0BD0D8EA2048F029690FC462F90C2A976B25827(__this, /*hidden argument*/NULL);
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
// System.Void I18N.Other.ENCwindows_1257::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENCwindows_1257__ctor_m88CF6AA04FC96DD90FF2B9DAC9CBE1F60E14C625 (ENCwindows_1257_t1BA41538D487610EF5E83FB6AB4723E58D9FCE4A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CP1257_t1AC1809FEC3703F4088D0A44FACBAEAE9FC46B31_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CP1257_t1AC1809FEC3703F4088D0A44FACBAEAE9FC46B31_il2cpp_TypeInfo_var);
		CP1257__ctor_m629FD8A816D62E578DF0019192B2BEBD0C6FA108(__this, /*hidden argument*/NULL);
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
// System.Void I18N.Other.ENCwindows_1258::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENCwindows_1258__ctor_mBDB13885DA1AFD0CC10C079502E117B27F65F586 (ENCwindows_1258_tBFC531C5824E753DEC64C8FE7041A1D818C4EE13 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CP1258_t93AD832AF1FFE06D53F4258384FB82C6D423CAD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CP1258_t93AD832AF1FFE06D53F4258384FB82C6D423CAD9_il2cpp_TypeInfo_var);
		CP1258__ctor_m20ED8B05E5901F1A325A205A9CF3D9B2E912DE5E(__this, /*hidden argument*/NULL);
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
// System.Void I18N.Other.ENCwindows_874::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENCwindows_874__ctor_m4126C3DBA381B51DCD7C1E09F18CCBC0FDA332E0 (ENCwindows_874_tA9FD4615FFB031ECD38ABB8E4C2BB92E9B3AFFBB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CP874_tEBC07123D6653EC1BB8C68CC127EB4858A473E75_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CP874_tEBC07123D6653EC1BB8C68CC127EB4858A473E75_il2cpp_TypeInfo_var);
		CP874__ctor_mE462C524438011F295282085C2F1EEE7B5A6E7D4(__this, /*hidden argument*/NULL);
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
// System.Void I18N.Other.ENCx_iscii_as::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENCx_iscii_as__ctor_m2397C9B01FA06EB506510FD5F0591C21820F3921 (ENCx_iscii_as_t93958FB92B274E760D0F7D98582E730B93E81829 * __this, const RuntimeMethod* method)
{
	{
		CP57006__ctor_m9A914B77B67AEAA510B873391D63D67F1DB9E2F9(__this, /*hidden argument*/NULL);
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
// System.Void I18N.Other.ENCx_iscii_be::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENCx_iscii_be__ctor_m83082BC1C762D5E39A25C804B09D86C39B217396 (ENCx_iscii_be_t29B88C89439CEEB90989C85D39B98A222C704153 * __this, const RuntimeMethod* method)
{
	{
		CP57003__ctor_m19D12C51660CA8072D45E2A4650F330AB01B9BF3(__this, /*hidden argument*/NULL);
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
// System.Void I18N.Other.ENCx_iscii_de::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENCx_iscii_de__ctor_m1283225F0AD2B7C52113612CE0D66729029E4524 (ENCx_iscii_de_t48D57AA289C9B2D591B82A5A5D750EE1D18D64A2 * __this, const RuntimeMethod* method)
{
	{
		CP57002__ctor_mC7C1FEA185F3734EC1687AB3CDC5AE44C0F92218(__this, /*hidden argument*/NULL);
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
// System.Void I18N.Other.ENCx_iscii_gu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENCx_iscii_gu__ctor_m59704705950B9D3A3B368022606AEA38978C0185 (ENCx_iscii_gu_t705C3E5067C72B47482FC1C483F23786B788C1CA * __this, const RuntimeMethod* method)
{
	{
		CP57010__ctor_m41A9CFC8BC8FD2D93CA4B11D06B7F1F87833D103(__this, /*hidden argument*/NULL);
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
// System.Void I18N.Other.ENCx_iscii_ka::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENCx_iscii_ka__ctor_m742A0D1C96DA5EAF82FB9E0EC1CC0883659603F3 (ENCx_iscii_ka_tC09693F79B977597ED98A18CE627B68B1D36D650 * __this, const RuntimeMethod* method)
{
	{
		CP57008__ctor_m5BCE1C7EA18A0ECE2077A8AA0502166132C14631(__this, /*hidden argument*/NULL);
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
// System.Void I18N.Other.ENCx_iscii_ma::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENCx_iscii_ma__ctor_mFB9219EF035CD07A0F734FF0A8BFEA309D100CD4 (ENCx_iscii_ma_t62A8777E5F6518E8D877C10934E9F9A736CB88D7 * __this, const RuntimeMethod* method)
{
	{
		CP57009__ctor_mE245557DDA28B3A3A15FF448BEB84E3EF1F8F847(__this, /*hidden argument*/NULL);
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
// System.Void I18N.Other.ENCx_iscii_or::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENCx_iscii_or__ctor_m3D44920B778A9203CDDFB9DB44FF4A3AE81B14D4 (ENCx_iscii_or_t043A951D05D2FE0714F2EB113F5606707E2194A0 * __this, const RuntimeMethod* method)
{
	{
		CP57007__ctor_m882DB4D7DA20C1AC51C5A6434A5544B8E071A799(__this, /*hidden argument*/NULL);
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
// System.Void I18N.Other.ENCx_iscii_pa::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENCx_iscii_pa__ctor_mDB03A2055B688AEC5476682567BD1D049F09AEED (ENCx_iscii_pa_tEC0DADBF7B1316C4C64B3D4762E753406020D9C0 * __this, const RuntimeMethod* method)
{
	{
		CP57011__ctor_m8F52A3DA367AA0556B03784FEA67AC5E8A76EB70(__this, /*hidden argument*/NULL);
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
// System.Void I18N.Other.ENCx_iscii_ta::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENCx_iscii_ta__ctor_mBBFA1D5B1355A183F1EA9FCA304CBFDAD5DA77D4 (ENCx_iscii_ta_t57FBB98D2E7E96219A53799D450B1135002FFE5F * __this, const RuntimeMethod* method)
{
	{
		CP57004__ctor_m7C55EAD72327E99E46E5919C62CF1988D7EFAC15(__this, /*hidden argument*/NULL);
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
// System.Void I18N.Other.ENCx_iscii_te::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENCx_iscii_te__ctor_m188600B95C2FECB96DBB0319A0DDC71F4937C2E4 (ENCx_iscii_te_tB281DFCCF3DB63F017287D9B496C50545610EEB7 * __this, const RuntimeMethod* method)
{
	{
		CP57005__ctor_m2FC67AD57234EB5216B2710B7BC02B79AC47C36C(__this, /*hidden argument*/NULL);
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
// System.Void I18N.Other.ISCIIEncoding::.ctor(System.Int32,System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISCIIEncoding__ctor_mC59CEC87F260BE78FE94855DD0E1ECF92085C1C9 (ISCIIEncoding_tA7FBF65EC6D9E96A9961353706EC809D0C008469 * __this, int32_t ___codePage0, int32_t ___shift1, String_t* ___encodingName2, String_t* ___webName3, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___codePage0;
		MonoEncoding__ctor_m2E7B79595A50ACD69079284AFF115A0E69BDE26C(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___shift1;
		__this->set_shift_17(L_1);
		String_t* L_2 = ___encodingName2;
		__this->set_encodingName_18(L_2);
		String_t* L_3 = ___webName3;
		__this->set_webName_19(L_3);
		return;
	}
}
// System.Int32 I18N.Other.ISCIIEncoding::GetByteCount(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ISCIIEncoding_GetByteCount_m4C6DEF1837BB4CEB87C6508414E8DAB666268ED5 (ISCIIEncoding_tA7FBF65EC6D9E96A9961353706EC809D0C008469 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = ___chars0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4F04E415359BAAEA12C3DA482EAACC98D2F7EDC8)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ISCIIEncoding_GetByteCount_m4C6DEF1837BB4CEB87C6508414E8DAB666268ED5_RuntimeMethod_var)));
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
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4 = ___chars0;
		NullCheck(L_4);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_002d;
		}
	}

IL_0018:
	{
		String_t* L_5;
		L_5 = Strings_GetString_m84B4205ADF9BD4AB96836BE778BE485A0DDCF9A1(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8AE156A07BD53166C43D7130252A6777DEECD332)), /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_6 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ISCIIEncoding_GetByteCount_m4C6DEF1837BB4CEB87C6508414E8DAB666268ED5_RuntimeMethod_var)));
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
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_9 = ___chars0;
		NullCheck(L_9);
		int32_t L_10 = ___index1;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))), (int32_t)L_10)))))
		{
			goto IL_004e;
		}
	}

IL_0039:
	{
		String_t* L_11;
		L_11 = Strings_GetString_m84B4205ADF9BD4AB96836BE778BE485A0DDCF9A1(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8AE156A07BD53166C43D7130252A6777DEECD332)), /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_12 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), L_11, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ISCIIEncoding_GetByteCount_m4C6DEF1837BB4CEB87C6508414E8DAB666268ED5_RuntimeMethod_var)));
	}

IL_004e:
	{
		int32_t L_13 = ___count2;
		return L_13;
	}
}
// System.Int32 I18N.Other.ISCIIEncoding::GetByteCount(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ISCIIEncoding_GetByteCount_mEC9FEC43485C9773EA2A5CEE3D7C8533C51BC070 (ISCIIEncoding_tA7FBF65EC6D9E96A9961353706EC809D0C008469 * __this, String_t* ___s0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___s0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ISCIIEncoding_GetByteCount_mEC9FEC43485C9773EA2A5CEE3D7C8533C51BC070_RuntimeMethod_var)));
	}

IL_000e:
	{
		String_t* L_2 = ___s0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 I18N.Other.ISCIIEncoding::GetByteCountImpl(System.Char*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ISCIIEncoding_GetByteCountImpl_mD81A497F2EC90716688D039C41CB67C37E23C4C7 (ISCIIEncoding_tA7FBF65EC6D9E96A9961353706EC809D0C008469 * __this, Il2CppChar* ___chars0, int32_t ___count1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	Il2CppChar V_3 = 0x0;
	Il2CppChar V_4 = 0x0;
	{
		V_0 = 0;
		V_1 = 0;
		int32_t L_0 = __this->get_shift_17();
		V_3 = ((int32_t)((uint16_t)L_0));
		int32_t L_1 = __this->get_shift_17();
		V_4 = ((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)((int32_t)127)))));
		goto IL_0062;
	}

IL_001a:
	{
		Il2CppChar* L_2 = ___chars0;
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
		int32_t L_5 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_2, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_4), (int32_t)2)))));
		V_2 = L_5;
		Il2CppChar L_6 = V_2;
		if ((((int32_t)L_6) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		goto IL_005d;
	}

IL_0034:
	{
		Il2CppChar L_8 = V_2;
		Il2CppChar L_9 = V_3;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0043;
		}
	}
	{
		Il2CppChar L_10 = V_2;
		Il2CppChar L_11 = V_4;
		if ((((int32_t)L_10) > ((int32_t)L_11)))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
		goto IL_005d;
	}

IL_0043:
	{
		Il2CppChar L_13 = V_2;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)65281))))
		{
			goto IL_0059;
		}
	}
	{
		Il2CppChar L_14 = V_2;
		if ((((int32_t)L_14) > ((int32_t)((int32_t)65374))))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
		goto IL_005d;
	}

IL_0059:
	{
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_005d:
	{
		int32_t L_17 = ___count1;
		___count1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)1));
	}

IL_0062:
	{
		int32_t L_18 = ___count1;
		int32_t L_19 = L_18;
		___count1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1));
		if ((((int32_t)L_19) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_20 = V_1;
		return L_20;
	}
}
// System.Int32 I18N.Other.ISCIIEncoding::GetBytesImpl(System.Char*,System.Int32,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ISCIIEncoding_GetBytesImpl_mC8A885EFB1D79934E28ACB8EF94D0E3F236F0942 (ISCIIEncoding_tA7FBF65EC6D9E96A9961353706EC809D0C008469 * __this, Il2CppChar* ___chars0, int32_t ___charCount1, uint8_t* ___bytes2, int32_t ___byteCount3, const RuntimeMethod* method)
{
	EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	int32_t V_4 = 0;
	Il2CppChar V_5 = 0x0;
	Il2CppChar V_6 = 0x0;
	int32_t V_7 = 0;
	{
		V_0 = (EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 *)NULL;
		V_1 = 0;
		int32_t L_0 = ___charCount1;
		V_2 = L_0;
		Il2CppChar* L_1 = ___chars0;
		if ((!(((uintptr_t)L_1) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4F04E415359BAAEA12C3DA482EAACC98D2F7EDC8)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ISCIIEncoding_GetBytesImpl_mC8A885EFB1D79934E28ACB8EF94D0E3F236F0942_RuntimeMethod_var)));
	}

IL_0016:
	{
		uint8_t* L_3 = ___bytes2;
		if ((!(((uintptr_t)L_3) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_0026;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_4 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral77B615B8ED1ABB8FC1395D85A5AE524A9789D947)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ISCIIEncoding_GetBytesImpl_mC8A885EFB1D79934E28ACB8EF94D0E3F236F0942_RuntimeMethod_var)));
	}

IL_0026:
	{
		int32_t L_5 = V_1;
		V_4 = L_5;
		int32_t L_6 = __this->get_shift_17();
		V_5 = ((int32_t)((uint16_t)L_6));
		int32_t L_7 = __this->get_shift_17();
		V_6 = ((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)((int32_t)127)))));
		V_7 = 0;
		goto IL_00cf;
	}

IL_0046:
	{
		Il2CppChar* L_8 = ___chars0;
		int32_t L_9 = V_7;
		int32_t L_10 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_8, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_9), (int32_t)2)))));
		V_3 = L_10;
		Il2CppChar L_11 = V_3;
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0065;
		}
	}
	{
		uint8_t* L_12 = ___bytes2;
		int32_t L_13 = V_4;
		int32_t L_14 = L_13;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
		Il2CppChar L_15 = V_3;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_12, (int32_t)L_14))) = (int8_t)((int32_t)((uint8_t)L_15));
		goto IL_00be;
	}

IL_0065:
	{
		Il2CppChar L_16 = V_3;
		Il2CppChar L_17 = V_5;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0086;
		}
	}
	{
		Il2CppChar L_18 = V_3;
		Il2CppChar L_19 = V_6;
		if ((((int32_t)L_18) > ((int32_t)L_19)))
		{
			goto IL_0086;
		}
	}
	{
		uint8_t* L_20 = ___bytes2;
		int32_t L_21 = V_4;
		int32_t L_22 = L_21;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
		Il2CppChar L_23 = V_3;
		Il2CppChar L_24 = V_5;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_20, (int32_t)L_22))) = (int8_t)((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)L_24)), (int32_t)((int32_t)128)))));
		goto IL_00be;
	}

IL_0086:
	{
		Il2CppChar L_25 = V_3;
		if ((((int32_t)L_25) < ((int32_t)((int32_t)65281))))
		{
			goto IL_00aa;
		}
	}
	{
		Il2CppChar L_26 = V_3;
		if ((((int32_t)L_26) > ((int32_t)((int32_t)65374))))
		{
			goto IL_00aa;
		}
	}
	{
		uint8_t* L_27 = ___bytes2;
		int32_t L_28 = V_4;
		int32_t L_29 = L_28;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
		Il2CppChar L_30 = V_3;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_27, (int32_t)L_29))) = (int8_t)((int32_t)((uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)((int32_t)65248)))));
		goto IL_00be;
	}

IL_00aa:
	{
		Il2CppChar* L_31 = ___chars0;
		uint8_t* L_32 = ___bytes2;
		MonoEncoding_HandleFallback_m5BBB9A58548D7F4FC29EB94C8033AF716387D94F(__this, (EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 **)(&V_0), (Il2CppChar*)(Il2CppChar*)L_31, (int32_t*)(&V_7), (int32_t*)(&___charCount1), (uint8_t*)(uint8_t*)L_32, (int32_t*)(&V_4), (int32_t*)(&___byteCount3), /*hidden argument*/NULL);
		goto IL_00c4;
	}

IL_00be:
	{
		int32_t L_33 = ___byteCount3;
		___byteCount3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_33, (int32_t)1));
	}

IL_00c4:
	{
		int32_t L_34 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
		int32_t L_35 = ___charCount1;
		___charCount1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_35, (int32_t)1));
	}

IL_00cf:
	{
		int32_t L_36 = V_7;
		int32_t L_37 = V_2;
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_38 = V_4;
		int32_t L_39 = V_1;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_38, (int32_t)L_39));
	}
}
// System.Int32 I18N.Other.ISCIIEncoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ISCIIEncoding_GetCharCount_m7FDB44DC99C1704322863A0C001A2300295AAE7D (ISCIIEncoding_tA7FBF65EC6D9E96A9961353706EC809D0C008469 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral77B615B8ED1ABB8FC1395D85A5AE524A9789D947)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ISCIIEncoding_GetCharCount_m7FDB44DC99C1704322863A0C001A2300295AAE7D_RuntimeMethod_var)));
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
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___bytes0;
		NullCheck(L_4);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_002d;
		}
	}

IL_0018:
	{
		String_t* L_5;
		L_5 = Strings_GetString_m84B4205ADF9BD4AB96836BE778BE485A0DDCF9A1(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8AE156A07BD53166C43D7130252A6777DEECD332)), /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_6 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ISCIIEncoding_GetCharCount_m7FDB44DC99C1704322863A0C001A2300295AAE7D_RuntimeMethod_var)));
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
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = ___bytes0;
		NullCheck(L_9);
		int32_t L_10 = ___index1;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))), (int32_t)L_10)))))
		{
			goto IL_004e;
		}
	}

IL_0039:
	{
		String_t* L_11;
		L_11 = Strings_GetString_m84B4205ADF9BD4AB96836BE778BE485A0DDCF9A1(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8AE156A07BD53166C43D7130252A6777DEECD332)), /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_12 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), L_11, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ISCIIEncoding_GetCharCount_m7FDB44DC99C1704322863A0C001A2300295AAE7D_RuntimeMethod_var)));
	}

IL_004e:
	{
		int32_t L_13 = ___count2;
		return L_13;
	}
}
// System.Int32 I18N.Other.ISCIIEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ISCIIEncoding_GetChars_mFB48DF9E59D616AD8896625E28D7C2E4DA0E9E13 (ISCIIEncoding_tA7FBF65EC6D9E96A9961353706EC809D0C008469 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars3, int32_t ___charIndex4, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral77B615B8ED1ABB8FC1395D85A5AE524A9789D947)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ISCIIEncoding_GetChars_mFB48DF9E59D616AD8896625E28D7C2E4DA0E9E13_RuntimeMethod_var)));
	}

IL_000e:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = ___chars3;
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_3 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4F04E415359BAAEA12C3DA482EAACC98D2F7EDC8)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ISCIIEncoding_GetChars_mFB48DF9E59D616AD8896625E28D7C2E4DA0E9E13_RuntimeMethod_var)));
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
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___bytes0;
		NullCheck(L_6);
		if ((((int32_t)L_5) <= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))))
		{
			goto IL_003c;
		}
	}

IL_0027:
	{
		String_t* L_7;
		L_7 = Strings_GetString_m84B4205ADF9BD4AB96836BE778BE485A0DDCF9A1(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8AE156A07BD53166C43D7130252A6777DEECD332)), /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_8 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral135BCD65E52CDAFB4FCF5E6C49A413A0CB794D3B)), L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ISCIIEncoding_GetChars_mFB48DF9E59D616AD8896625E28D7C2E4DA0E9E13_RuntimeMethod_var)));
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
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = ___bytes0;
		NullCheck(L_11);
		int32_t L_12 = ___byteIndex1;
		if ((((int32_t)L_10) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))), (int32_t)L_12)))))
		{
			goto IL_005d;
		}
	}

IL_0048:
	{
		String_t* L_13;
		L_13 = Strings_GetString_m84B4205ADF9BD4AB96836BE778BE485A0DDCF9A1(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8AE156A07BD53166C43D7130252A6777DEECD332)), /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_14 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEA91A6F78B958DA5FF4B61532CF56E4AEBBF872C)), L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ISCIIEncoding_GetChars_mFB48DF9E59D616AD8896625E28D7C2E4DA0E9E13_RuntimeMethod_var)));
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
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_17 = ___chars3;
		NullCheck(L_17);
		if ((((int32_t)L_16) <= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))))))
		{
			goto IL_007f;
		}
	}

IL_006a:
	{
		String_t* L_18;
		L_18 = Strings_GetString_m84B4205ADF9BD4AB96836BE778BE485A0DDCF9A1(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8AE156A07BD53166C43D7130252A6777DEECD332)), /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_19 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAAD91FE754F32DC76537C154682A89C05C27E0F3)), L_18, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ISCIIEncoding_GetChars_mFB48DF9E59D616AD8896625E28D7C2E4DA0E9E13_RuntimeMethod_var)));
	}

IL_007f:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_20 = ___chars3;
		NullCheck(L_20);
		int32_t L_21 = ___charIndex4;
		int32_t L_22 = ___byteCount2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length))), (int32_t)L_21))) >= ((int32_t)L_22)))
		{
			goto IL_009e;
		}
	}
	{
		String_t* L_23;
		L_23 = Strings_GetString_m84B4205ADF9BD4AB96836BE778BE485A0DDCF9A1(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral10562201C2A7AB420A8DECFE1373D48FBF48A6AE)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_24 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_24, L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4F04E415359BAAEA12C3DA482EAACC98D2F7EDC8)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ISCIIEncoding_GetChars_mFB48DF9E59D616AD8896625E28D7C2E4DA0E9E13_RuntimeMethod_var)));
	}

IL_009e:
	{
		int32_t L_25 = ___byteCount2;
		V_0 = L_25;
		int32_t L_26 = __this->get_shift_17();
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_26, (int32_t)((int32_t)128)));
		goto IL_00dc;
	}

IL_00af:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_27 = ___bytes0;
		int32_t L_28 = ___byteIndex1;
		int32_t L_29 = L_28;
		___byteIndex1 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
		NullCheck(L_27);
		int32_t L_30 = L_29;
		uint8_t L_31 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_1 = L_31;
		int32_t L_32 = V_1;
		if ((((int32_t)L_32) >= ((int32_t)((int32_t)128))))
		{
			goto IL_00ce;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_33 = ___chars3;
		int32_t L_34 = ___charIndex4;
		int32_t L_35 = L_34;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
		int32_t L_36 = V_1;
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_35), (Il2CppChar)((int32_t)((uint16_t)L_36)));
		goto IL_00dc;
	}

IL_00ce:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_37 = ___chars3;
		int32_t L_38 = ___charIndex4;
		int32_t L_39 = L_38;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
		int32_t L_40 = V_1;
		int32_t L_41 = V_2;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_39), (Il2CppChar)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)L_41)))));
	}

IL_00dc:
	{
		int32_t L_42 = V_0;
		int32_t L_43 = L_42;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_43, (int32_t)1));
		if ((((int32_t)L_43) > ((int32_t)0)))
		{
			goto IL_00af;
		}
	}
	{
		int32_t L_44 = ___byteCount2;
		return L_44;
	}
}
// System.Int32 I18N.Other.ISCIIEncoding::GetMaxByteCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ISCIIEncoding_GetMaxByteCount_m4AF583169B060407AF51AC8DB34E6055D30E7572 (ISCIIEncoding_tA7FBF65EC6D9E96A9961353706EC809D0C008469 * __this, int32_t ___charCount0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___charCount0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1;
		L_1 = Strings_GetString_m84B4205ADF9BD4AB96836BE778BE485A0DDCF9A1(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2A2086AE6565AD627CF8A222FE831AB6F72ECCFF)), /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_2 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9AA99C92BB9065939AEAB82DCEAAB6CEE49FA2FB)), L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ISCIIEncoding_GetMaxByteCount_m4AF583169B060407AF51AC8DB34E6055D30E7572_RuntimeMethod_var)));
	}

IL_0019:
	{
		int32_t L_3 = ___charCount0;
		return L_3;
	}
}
// System.Int32 I18N.Other.ISCIIEncoding::GetMaxCharCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ISCIIEncoding_GetMaxCharCount_m2AFB3D60E0B84B3D365896767BAC1272BA9C255A (ISCIIEncoding_tA7FBF65EC6D9E96A9961353706EC809D0C008469 * __this, int32_t ___byteCount0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___byteCount0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1;
		L_1 = Strings_GetString_m84B4205ADF9BD4AB96836BE778BE485A0DDCF9A1(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2A2086AE6565AD627CF8A222FE831AB6F72ECCFF)), /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_2 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEA91A6F78B958DA5FF4B61532CF56E4AEBBF872C)), L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ISCIIEncoding_GetMaxCharCount_m2AFB3D60E0B84B3D365896767BAC1272BA9C255A_RuntimeMethod_var)));
	}

IL_0019:
	{
		int32_t L_3 = ___byteCount0;
		return L_3;
	}
}
// System.String I18N.Other.ISCIIEncoding::get_BodyName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ISCIIEncoding_get_BodyName_m8ECCED0B709F2656B58835CBBEA4148E924DFD0C (ISCIIEncoding_tA7FBF65EC6D9E96A9961353706EC809D0C008469 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_webName_19();
		return L_0;
	}
}
// System.String I18N.Other.ISCIIEncoding::get_EncodingName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ISCIIEncoding_get_EncodingName_mBEAF2ECD1F97641EAFBD61516F6E9636DDC2546F (ISCIIEncoding_tA7FBF65EC6D9E96A9961353706EC809D0C008469 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_encodingName_18();
		return L_0;
	}
}
// System.String I18N.Other.ISCIIEncoding::get_HeaderName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ISCIIEncoding_get_HeaderName_m581710CC853872B40FF8AD2C494CC746D4922BA0 (ISCIIEncoding_tA7FBF65EC6D9E96A9961353706EC809D0C008469 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_webName_19();
		return L_0;
	}
}
// System.String I18N.Other.ISCIIEncoding::get_WebName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ISCIIEncoding_get_WebName_mD031B7BD3EB3F5347AD2E5F1CD7FFF2EC564480E (ISCIIEncoding_tA7FBF65EC6D9E96A9961353706EC809D0C008469 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_webName_19();
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * Encoding_get_EncoderFallback_m8DF6B8EC2F7AA69AF9129C5334D1FAFE13081152_inline (Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * __this, const RuntimeMethod* method)
{
	{
		EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * L_0 = __this->get_encoderFallback_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
