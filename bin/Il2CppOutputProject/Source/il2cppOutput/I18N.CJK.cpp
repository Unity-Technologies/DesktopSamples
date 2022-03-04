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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// I18N.CJK.GB18030Source/GB18030Map[]
struct GB18030MapU5BU5D_tEBCE6E25AE316F256DBF693F861C0DFA45BF3B3E;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.Reflection.Assembly
struct Assembly_t;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056;
// I18N.CJK.CP50220
struct CP50220_t31ABD0962AB7C3A08F57DAD16ABABEB8C6EEB4BD;
// I18N.CJK.CP50221
struct CP50221_tE1FE919ACD943034E2D012D74B673D96A67A2361;
// I18N.CJK.CP50222
struct CP50222_t80727A61FBE9B90EA8126A9C12BA89958BF753BB;
// I18N.CJK.CP51932
struct CP51932_t1AF90767E1FC85D8A3F12D47E03205D61833C502;
// I18N.CJK.CP51932Decoder
struct CP51932Decoder_tC03EC4B854B4393E2A49FDD66AC4195645C9696F;
// I18N.CJK.CP51932Encoder
struct CP51932Encoder_t2D109B1562B6FB19940754F06F0C87C022FC7312;
// I18N.CJK.CP51949
struct CP51949_tF501078A4A22B0D292CB290076A4F207E1760B64;
// I18N.CJK.CP54936
struct CP54936_tBE9FEC49039E36BEE92AC1A9620D9DF93257A54F;
// I18N.CJK.CP932
struct CP932_t30A1C3786CBAC763AD15AA7146BB886F26F01596;
// I18N.CJK.CP932Decoder
struct CP932Decoder_t7FA16FF015C7A2CEA4DB579DEEFBB632B3182225;
// I18N.CJK.CP936
struct CP936_tB81AF17959C1E8D5AE3E4CE146D89F1E295E534F;
// I18N.CJK.CP936Decoder
struct CP936Decoder_t4E9A8F2DD551EFFA508441B10EDAD4200D32E120;
// I18N.CJK.CP949
struct CP949_t6F6698BB1EE821BF679191F45FA5E32AED627F19;
// I18N.CJK.CP950
struct CP950_tC49816E378AA2453DD6F08701D7657C44E47FEDC;
// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// I18N.CJK.CodeTable
struct CodeTable_t24F95BB4E7C0ACFD3C4E68F3A132A0270C05CA03;
// I18N.CJK.DbcsConvert
struct DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6;
// I18N.CJK.DbcsEncoding
struct DbcsEncoding_t97AEDFAC1F40C1EAB9DD5FD68BE7B377FB635ECE;
// System.Text.Decoder
struct Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B;
// I18N.CJK.ENCbig5
struct ENCbig5_t4DF6EBF0161669339489FD8732666363AB62D6BF;
// I18N.CJK.ENCeuc_jp
struct ENCeuc_jp_tF1F1430C246DE14A4248A629174C8B6B21CE0922;
// I18N.CJK.ENCeuc_kr
struct ENCeuc_kr_t3F0655385F9D9AEFFCB04FA9E70B10E025072580;
// I18N.CJK.ENCgb18030
struct ENCgb18030_tACDBF747C27117B8BB310AE8A6F44ECDB77B68C8;
// I18N.CJK.ENCgb2312
struct ENCgb2312_tEEEA920BED52A98B9E848AE7000405CE74835864;
// I18N.CJK.ENCiso_2022_jp
struct ENCiso_2022_jp_tCF64B94579193B69CD43C13EAF099C5806DA259D;
// I18N.CJK.ENCshift_jis
struct ENCshift_jis_t4E78F10D709157D6D59C0DBB274773B0E24227CF;
// I18N.CJK.ENCuhc
struct ENCuhc_tE492559A19EB9D9F3ECDC7606C859188C94F3483;
// System.Text.Encoder
struct Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.EncoderFallbackBuffer
struct EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0;
// System.Text.EncoderNLS
struct EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Exception
struct Exception_t;
// I18N.CJK.GB18030Decoder
struct GB18030Decoder_t24EE55D918A003E55F69C1DDEA153C6A189A72B9;
// I18N.CJK.GB18030Encoder
struct GB18030Encoder_t0A88113FFF8BAFE6F79A16678697B61C488AA971;
// I18N.CJK.GB18030Encoding
struct GB18030Encoding_t48649BF97C255015EB5811902CE20AA6D3B3FE57;
// I18N.CJK.GB18030Source
struct GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// I18N.CJK.ISO2022JPDecoder
struct ISO2022JPDecoder_t1614BCC169A8897B2CD138F980FB728DB696B2CC;
// I18N.CJK.ISO2022JPEncoder
struct ISO2022JPEncoder_tB0BDAE1A1F936AB4C05A6AD1FDEFE4945EE29AA6;
// I18N.CJK.ISO2022JPEncoding
struct ISO2022JPEncoding_t50513DEA872F8D29579CF6725848DA3E18E25CD8;
// I18N.CJK.JISConvert
struct JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848;
// I18N.CJK.KoreanEncoding
struct KoreanEncoding_t802D545D60E3844B7A431234B087FE2928F87391;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// I18N.Common.MonoEncodingDefaultEncoder
struct MonoEncodingDefaultEncoder_t4B58B3F3AFA8085CDE630E185C8572B72EEE8A90;
// I18N.Common.MonoSafeEncoder
struct MonoSafeEncoder_t0DF1BF26F417B4E71A75DD81C838421CD0DB7D52;
// I18N.Common.MonoSafeEncoding
struct MonoSafeEncoding_t0F0341C8A621EBF14ADEA3F5DC248BC26F7DDE83;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62;
// System.Type
struct Type_t;
// System.Reflection.TypeFilter
struct TypeFilter_t8E0AA7E71F2D6695C61A52277E6CF6E49230F2C3;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C;
// I18N.CJK.CP950/CP950Decoder
struct CP950Decoder_t6D8DBBAA197A2D5800980E193F5E09C61B092138;
// I18N.CJK.DbcsEncoding/DbcsDecoder
struct DbcsDecoder_tE3C4C6E22EB2E09258D84C6FF2FD7FBAD7BF7F8F;
// I18N.CJK.GB18030Source/GB18030Map
struct GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8;
// I18N.CJK.KoreanEncoding/KoreanDecoder
struct KoreanDecoder_t7A190670048C88144494EB3E16C5E35F7601E959;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CP51932Decoder_tC03EC4B854B4393E2A49FDD66AC4195645C9696F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CP51932Encoder_t2D109B1562B6FB19940754F06F0C87C022FC7312_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CP932Decoder_t7FA16FF015C7A2CEA4DB579DEEFBB632B3182225_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CP936Decoder_t4E9A8F2DD551EFFA508441B10EDAD4200D32E120_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CP950Decoder_t6D8DBBAA197A2D5800980E193F5E09C61B092138_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CodeTable_t24F95BB4E7C0ACFD3C4E68F3A132A0270C05CA03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GB18030Decoder_t24EE55D918A003E55F69C1DDEA153C6A189A72B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GB18030Encoder_t0A88113FFF8BAFE6F79A16678697B61C488AA971_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GB18030MapU5BU5D_tEBCE6E25AE316F256DBF693F861C0DFA45BF3B3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISO2022JPDecoder_t1614BCC169A8897B2CD138F980FB728DB696B2CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISO2022JPEncoder_tB0BDAE1A1F936AB4C05A6AD1FDEFE4945EE29AA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KoreanDecoder_t7A190670048C88144494EB3E16C5E35F7601E959_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MonoEncodingDefaultEncoder_t4B58B3F3AFA8085CDE630E185C8572B72EEE8A90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0E2D6234731D30F4B134056E10FB479493219935____E37F35D8F8544C41A0449A42051AEFACF21F8621_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626;
IL2CPP_EXTERN_C String_t* _stringLiteral0E5900473DAE968E1F4600CC48CBEEB2AEF5AEDB;
IL2CPP_EXTERN_C String_t* _stringLiteral10562201C2A7AB420A8DECFE1373D48FBF48A6AE;
IL2CPP_EXTERN_C String_t* _stringLiteral135BCD65E52CDAFB4FCF5E6C49A413A0CB794D3B;
IL2CPP_EXTERN_C String_t* _stringLiteral19AF67277280509C9DA28ED8F1A254429648F4CA;
IL2CPP_EXTERN_C String_t* _stringLiteral1B9456FD3CA0E32700AFB53160BCC870B3848FF4;
IL2CPP_EXTERN_C String_t* _stringLiteral247A870FC548A3D4C43DA0A9D154098CEE7D7CED;
IL2CPP_EXTERN_C String_t* _stringLiteral25D8BC23F831D8EFA6509D258FF7E36469D41625;
IL2CPP_EXTERN_C String_t* _stringLiteral2963F884691C93A4D24C3B6684EBC449253AC7B0;
IL2CPP_EXTERN_C String_t* _stringLiteral2A2086AE6565AD627CF8A222FE831AB6F72ECCFF;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral32330AB77DEF9883B00C95C23F73315939670D22;
IL2CPP_EXTERN_C String_t* _stringLiteral3376C44466E919A70A02AA3ACB7791D292C161BE;
IL2CPP_EXTERN_C String_t* _stringLiteral40EE947A7070BE6D20D77536685265C688F4713A;
IL2CPP_EXTERN_C String_t* _stringLiteral46D49ED9792AFC72CCEBD7E6D237722C37410FBF;
IL2CPP_EXTERN_C String_t* _stringLiteral4A1E7CA2D7A9670B0D9A719DC44C35DAE10EB3C8;
IL2CPP_EXTERN_C String_t* _stringLiteral4F04E415359BAAEA12C3DA482EAACC98D2F7EDC8;
IL2CPP_EXTERN_C String_t* _stringLiteral55C78D7827EC5F6276BA3568C85612BF051686B2;
IL2CPP_EXTERN_C String_t* _stringLiteral5B02C95FD71AC5B53DC8E403117E89B593236473;
IL2CPP_EXTERN_C String_t* _stringLiteral5F81F23BE8E73E4DA13E4AEA38A6717230062C2E;
IL2CPP_EXTERN_C String_t* _stringLiteral6C0852A35F5B2C09467F4C96BBE883A402D2C15A;
IL2CPP_EXTERN_C String_t* _stringLiteral77B615B8ED1ABB8FC1395D85A5AE524A9789D947;
IL2CPP_EXTERN_C String_t* _stringLiteral7A4CAA44E577D721780626FDA762744166099063;
IL2CPP_EXTERN_C String_t* _stringLiteral7C17BEF3EFFF7AD2B5A5AA3C0CA404589CE48C27;
IL2CPP_EXTERN_C String_t* _stringLiteral8AE156A07BD53166C43D7130252A6777DEECD332;
IL2CPP_EXTERN_C String_t* _stringLiteral8B19C1CC68E20679F72DBE50617728AA0FDEE4D3;
IL2CPP_EXTERN_C String_t* _stringLiteral98F909B47B62CE0D1D166DF4CDA36DD83742071F;
IL2CPP_EXTERN_C String_t* _stringLiteral9AA99C92BB9065939AEAB82DCEAAB6CEE49FA2FB;
IL2CPP_EXTERN_C String_t* _stringLiteralA2D3FF2FE923BEF204F5539A8AB3FD5EEA81ADFF;
IL2CPP_EXTERN_C String_t* _stringLiteralAAD91FE754F32DC76537C154682A89C05C27E0F3;
IL2CPP_EXTERN_C String_t* _stringLiteralAB44D305293AF0B75A15DDA90DD538CE236474E7;
IL2CPP_EXTERN_C String_t* _stringLiteralB5ECFFDB038BCFA2116D6102731BC2B18BB78E18;
IL2CPP_EXTERN_C String_t* _stringLiteralBB68F8F2A0E7A2F44AAEAFA9A4A9E57F16C4D7DE;
IL2CPP_EXTERN_C String_t* _stringLiteralC7A8569669CE3C1A1791A0C7468C4370B4C4FA95;
IL2CPP_EXTERN_C String_t* _stringLiteralCCCA7C0B445ECC76093C5099F1A970EA4228DC03;
IL2CPP_EXTERN_C String_t* _stringLiteralD0050F900BF1A1EA5A688BEEDDA876E99ECF7DBD;
IL2CPP_EXTERN_C String_t* _stringLiteralEA91A6F78B958DA5FF4B61532CF56E4AEBBF872C;
IL2CPP_EXTERN_C String_t* _stringLiteralECDAC393A5FD605E749C4DB7D471CAA0B5D51B3D;
IL2CPP_EXTERN_C String_t* _stringLiteralEEC3DCC8182BD98C2EEB8C528D7001625C982858;
IL2CPP_EXTERN_C String_t* _stringLiteralF512F2CB430B135FD2B0519B779BC77CDF6B6207;
IL2CPP_EXTERN_C const RuntimeMethod* CP51932Decoder_GetChars_mA872441B6B21D566930093F4C087420701424399_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CP51932Decoder_Insufficient_mFCA10A6AA231A94C862BA6E466F5E809E965B3EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CP51932Encoder_GetBytes_m3E70966E8D0C26BA892580784DFCFFB0EC75919F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CP51932_GetMaxByteCount_mDEE60866680934EDB3C88DFC6E2B11B075ED2982_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CP51932_GetMaxCharCount_m72D0162B5F72B9D85A80682A227A04292DFAEDA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CP932Decoder_GetChars_m3F2A6FD3FBBCEBF13C76C366E744DD3EA9A4152A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CP932_GetBytes_m354228380718F75597603F07ABA3490BB2760002_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CP932_GetMaxByteCount_m2E8F495AFEEC48712F987F69E73B0262CBF9875B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CP932_GetMaxCharCount_m95248406D2C112E87B9251F79E63E583716753FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CodeTable__ctor_m05F6BC60339A17BD8A883304FB3D0B6D9431D2DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DbcsDecoder_CheckRange_m7E0B5C58A934289C66DEDDB0C93B3B33E0F9F38C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DbcsDecoder_CheckRange_mA1765EE1ED3A33C1A7FDA2E0C6E12B64ABBDBBCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DbcsEncoding_GetByteCount_m1D2BC9C01A1119C437D3A7199466AD1E1B59CFB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DbcsEncoding_GetCharCount_m8F68D1584B577284D84D8AD2A6702CB8F8A76A3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DbcsEncoding_GetChars_m147E9CBC56AD542FA72C5C5520CE914B5A7AA7F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DbcsEncoding_GetMaxByteCount_m32F3C108A1CEC5D22632DE5C68BC12EE195E5958_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DbcsEncoding_GetMaxCharCount_mDD5D9C30A50065EF57A12CD1843231AFBF9509E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GB18030Source_FromGBX_m2B43470C984D7B7EFA2F2B4FEEB82616CAEBC44E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GB18030Source_FromUCS_mBC86622A6A7E470D0044A34801A526E758940258_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GB18030Source__cctor_m7AA25B50318D5FB80545EC2787D4B8340DCF8AA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ISO2022JPEncoder_SwitchMode_mC061C595999EB3847AA86F761E11549ED9B31F3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Assembly_t_0_0_0_var;
struct Assembly_t_marshaled_com;
struct Assembly_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct GB18030MapU5BU5D_tEBCE6E25AE316F256DBF693F861C0DFA45BF3B3E;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t06C7160B255BDAA2B93C8E37BC433053E3135C51 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// I18N.CJK.CodeTable
struct CodeTable_t24F95BB4E7C0ACFD3C4E68F3A132A0270C05CA03  : public RuntimeObject
{
public:
	// System.IO.Stream I18N.CJK.CodeTable::stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream_0;

public:
	inline static int32_t get_offset_of_stream_0() { return static_cast<int32_t>(offsetof(CodeTable_t24F95BB4E7C0ACFD3C4E68F3A132A0270C05CA03, ___stream_0)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_stream_0() const { return ___stream_0; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_stream_0() { return &___stream_0; }
	inline void set_stream_0(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___stream_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_0), (void*)value);
	}
};


// Consts
struct Consts_t62815AE816BEED15B62011BE677528B9CE56A7E6  : public RuntimeObject
{
public:

public:
};


// I18N.CJK.DbcsConvert
struct DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6  : public RuntimeObject
{
public:
	// System.Byte[] I18N.CJK.DbcsConvert::n2u
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___n2u_0;
	// System.Byte[] I18N.CJK.DbcsConvert::u2n
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___u2n_1;

public:
	inline static int32_t get_offset_of_n2u_0() { return static_cast<int32_t>(offsetof(DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6, ___n2u_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_n2u_0() const { return ___n2u_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_n2u_0() { return &___n2u_0; }
	inline void set_n2u_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___n2u_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___n2u_0), (void*)value);
	}

	inline static int32_t get_offset_of_u2n_1() { return static_cast<int32_t>(offsetof(DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6, ___u2n_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_u2n_1() const { return ___u2n_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_u2n_1() { return &___u2n_1; }
	inline void set_u2n_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___u2n_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___u2n_1), (void*)value);
	}
};

struct DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6_StaticFields
{
public:
	// I18N.CJK.DbcsConvert I18N.CJK.DbcsConvert::Gb2312
	DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * ___Gb2312_2;
	// I18N.CJK.DbcsConvert I18N.CJK.DbcsConvert::Big5
	DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * ___Big5_3;
	// I18N.CJK.DbcsConvert I18N.CJK.DbcsConvert::KS
	DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * ___KS_4;

public:
	inline static int32_t get_offset_of_Gb2312_2() { return static_cast<int32_t>(offsetof(DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6_StaticFields, ___Gb2312_2)); }
	inline DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * get_Gb2312_2() const { return ___Gb2312_2; }
	inline DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 ** get_address_of_Gb2312_2() { return &___Gb2312_2; }
	inline void set_Gb2312_2(DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * value)
	{
		___Gb2312_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Gb2312_2), (void*)value);
	}

	inline static int32_t get_offset_of_Big5_3() { return static_cast<int32_t>(offsetof(DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6_StaticFields, ___Big5_3)); }
	inline DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * get_Big5_3() const { return ___Big5_3; }
	inline DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 ** get_address_of_Big5_3() { return &___Big5_3; }
	inline void set_Big5_3(DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * value)
	{
		___Big5_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Big5_3), (void*)value);
	}

	inline static int32_t get_offset_of_KS_4() { return static_cast<int32_t>(offsetof(DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6_StaticFields, ___KS_4)); }
	inline DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * get_KS_4() const { return ___KS_4; }
	inline DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 ** get_address_of_KS_4() { return &___KS_4; }
	inline void set_KS_4(DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * value)
	{
		___KS_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___KS_4), (void*)value);
	}
};


// System.Text.Decoder
struct Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370  : public RuntimeObject
{
public:
	// System.Text.DecoderFallback System.Text.Decoder::m_fallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___m_fallback_0;
	// System.Text.DecoderFallbackBuffer System.Text.Decoder::m_fallbackBuffer
	DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B * ___m_fallbackBuffer_1;

public:
	inline static int32_t get_offset_of_m_fallback_0() { return static_cast<int32_t>(offsetof(Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370, ___m_fallback_0)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_m_fallback_0() const { return ___m_fallback_0; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_m_fallback_0() { return &___m_fallback_0; }
	inline void set_m_fallback_0(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___m_fallback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fallback_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_fallbackBuffer_1() { return static_cast<int32_t>(offsetof(Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370, ___m_fallbackBuffer_1)); }
	inline DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B * get_m_fallbackBuffer_1() const { return ___m_fallbackBuffer_1; }
	inline DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B ** get_address_of_m_fallbackBuffer_1() { return &___m_fallbackBuffer_1; }
	inline void set_m_fallbackBuffer_1(DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B * value)
	{
		___m_fallbackBuffer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fallbackBuffer_1), (void*)value);
	}
};


// System.Text.Encoder
struct Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A  : public RuntimeObject
{
public:
	// System.Text.EncoderFallback System.Text.Encoder::m_fallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___m_fallback_0;
	// System.Text.EncoderFallbackBuffer System.Text.Encoder::m_fallbackBuffer
	EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 * ___m_fallbackBuffer_1;

public:
	inline static int32_t get_offset_of_m_fallback_0() { return static_cast<int32_t>(offsetof(Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A, ___m_fallback_0)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_m_fallback_0() const { return ___m_fallback_0; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_m_fallback_0() { return &___m_fallback_0; }
	inline void set_m_fallback_0(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___m_fallback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fallback_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_fallbackBuffer_1() { return static_cast<int32_t>(offsetof(Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A, ___m_fallbackBuffer_1)); }
	inline EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 * get_m_fallbackBuffer_1() const { return ___m_fallbackBuffer_1; }
	inline EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 ** get_address_of_m_fallbackBuffer_1() { return &___m_fallbackBuffer_1; }
	inline void set_m_fallbackBuffer_1(EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 * value)
	{
		___m_fallbackBuffer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fallbackBuffer_1), (void*)value);
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


// I18N.CJK.GB18030Source
struct GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D  : public RuntimeObject
{
public:

public:
};

struct GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_StaticFields
{
public:
	// System.Byte* I18N.CJK.GB18030Source::gbx2uni
	uint8_t* ___gbx2uni_0;
	// System.Byte* I18N.CJK.GB18030Source::uni2gbx
	uint8_t* ___uni2gbx_1;
	// System.Int32 I18N.CJK.GB18030Source::gbx2uniSize
	int32_t ___gbx2uniSize_2;
	// System.Int32 I18N.CJK.GB18030Source::uni2gbxSize
	int32_t ___uni2gbxSize_3;
	// System.Int64 I18N.CJK.GB18030Source::gbxBase
	int64_t ___gbxBase_4;
	// System.Int64 I18N.CJK.GB18030Source::gbxSuppBase
	int64_t ___gbxSuppBase_5;
	// I18N.CJK.GB18030Source/GB18030Map[] I18N.CJK.GB18030Source::ranges
	GB18030MapU5BU5D_tEBCE6E25AE316F256DBF693F861C0DFA45BF3B3E* ___ranges_6;

public:
	inline static int32_t get_offset_of_gbx2uni_0() { return static_cast<int32_t>(offsetof(GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_StaticFields, ___gbx2uni_0)); }
	inline uint8_t* get_gbx2uni_0() const { return ___gbx2uni_0; }
	inline uint8_t** get_address_of_gbx2uni_0() { return &___gbx2uni_0; }
	inline void set_gbx2uni_0(uint8_t* value)
	{
		___gbx2uni_0 = value;
	}

	inline static int32_t get_offset_of_uni2gbx_1() { return static_cast<int32_t>(offsetof(GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_StaticFields, ___uni2gbx_1)); }
	inline uint8_t* get_uni2gbx_1() const { return ___uni2gbx_1; }
	inline uint8_t** get_address_of_uni2gbx_1() { return &___uni2gbx_1; }
	inline void set_uni2gbx_1(uint8_t* value)
	{
		___uni2gbx_1 = value;
	}

	inline static int32_t get_offset_of_gbx2uniSize_2() { return static_cast<int32_t>(offsetof(GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_StaticFields, ___gbx2uniSize_2)); }
	inline int32_t get_gbx2uniSize_2() const { return ___gbx2uniSize_2; }
	inline int32_t* get_address_of_gbx2uniSize_2() { return &___gbx2uniSize_2; }
	inline void set_gbx2uniSize_2(int32_t value)
	{
		___gbx2uniSize_2 = value;
	}

	inline static int32_t get_offset_of_uni2gbxSize_3() { return static_cast<int32_t>(offsetof(GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_StaticFields, ___uni2gbxSize_3)); }
	inline int32_t get_uni2gbxSize_3() const { return ___uni2gbxSize_3; }
	inline int32_t* get_address_of_uni2gbxSize_3() { return &___uni2gbxSize_3; }
	inline void set_uni2gbxSize_3(int32_t value)
	{
		___uni2gbxSize_3 = value;
	}

	inline static int32_t get_offset_of_gbxBase_4() { return static_cast<int32_t>(offsetof(GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_StaticFields, ___gbxBase_4)); }
	inline int64_t get_gbxBase_4() const { return ___gbxBase_4; }
	inline int64_t* get_address_of_gbxBase_4() { return &___gbxBase_4; }
	inline void set_gbxBase_4(int64_t value)
	{
		___gbxBase_4 = value;
	}

	inline static int32_t get_offset_of_gbxSuppBase_5() { return static_cast<int32_t>(offsetof(GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_StaticFields, ___gbxSuppBase_5)); }
	inline int64_t get_gbxSuppBase_5() const { return ___gbxSuppBase_5; }
	inline int64_t* get_address_of_gbxSuppBase_5() { return &___gbxSuppBase_5; }
	inline void set_gbxSuppBase_5(int64_t value)
	{
		___gbxSuppBase_5 = value;
	}

	inline static int32_t get_offset_of_ranges_6() { return static_cast<int32_t>(offsetof(GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_StaticFields, ___ranges_6)); }
	inline GB18030MapU5BU5D_tEBCE6E25AE316F256DBF693F861C0DFA45BF3B3E* get_ranges_6() const { return ___ranges_6; }
	inline GB18030MapU5BU5D_tEBCE6E25AE316F256DBF693F861C0DFA45BF3B3E** get_address_of_ranges_6() { return &___ranges_6; }
	inline void set_ranges_6(GB18030MapU5BU5D_tEBCE6E25AE316F256DBF693F861C0DFA45BF3B3E* value)
	{
		___ranges_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ranges_6), (void*)value);
	}
};


// I18N.CJK.JISConvert
struct JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848  : public RuntimeObject
{
public:
	// System.Byte[] I18N.CJK.JISConvert::jisx0208ToUnicode
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___jisx0208ToUnicode_5;
	// System.Byte[] I18N.CJK.JISConvert::jisx0212ToUnicode
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___jisx0212ToUnicode_6;
	// System.Byte[] I18N.CJK.JISConvert::cjkToJis
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___cjkToJis_7;
	// System.Byte[] I18N.CJK.JISConvert::greekToJis
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___greekToJis_8;
	// System.Byte[] I18N.CJK.JISConvert::extraToJis
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___extraToJis_9;

public:
	inline static int32_t get_offset_of_jisx0208ToUnicode_5() { return static_cast<int32_t>(offsetof(JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848, ___jisx0208ToUnicode_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_jisx0208ToUnicode_5() const { return ___jisx0208ToUnicode_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_jisx0208ToUnicode_5() { return &___jisx0208ToUnicode_5; }
	inline void set_jisx0208ToUnicode_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___jisx0208ToUnicode_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jisx0208ToUnicode_5), (void*)value);
	}

	inline static int32_t get_offset_of_jisx0212ToUnicode_6() { return static_cast<int32_t>(offsetof(JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848, ___jisx0212ToUnicode_6)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_jisx0212ToUnicode_6() const { return ___jisx0212ToUnicode_6; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_jisx0212ToUnicode_6() { return &___jisx0212ToUnicode_6; }
	inline void set_jisx0212ToUnicode_6(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___jisx0212ToUnicode_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jisx0212ToUnicode_6), (void*)value);
	}

	inline static int32_t get_offset_of_cjkToJis_7() { return static_cast<int32_t>(offsetof(JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848, ___cjkToJis_7)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_cjkToJis_7() const { return ___cjkToJis_7; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_cjkToJis_7() { return &___cjkToJis_7; }
	inline void set_cjkToJis_7(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___cjkToJis_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cjkToJis_7), (void*)value);
	}

	inline static int32_t get_offset_of_greekToJis_8() { return static_cast<int32_t>(offsetof(JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848, ___greekToJis_8)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_greekToJis_8() const { return ___greekToJis_8; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_greekToJis_8() { return &___greekToJis_8; }
	inline void set_greekToJis_8(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___greekToJis_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___greekToJis_8), (void*)value);
	}

	inline static int32_t get_offset_of_extraToJis_9() { return static_cast<int32_t>(offsetof(JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848, ___extraToJis_9)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_extraToJis_9() const { return ___extraToJis_9; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_extraToJis_9() { return &___extraToJis_9; }
	inline void set_extraToJis_9(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___extraToJis_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extraToJis_9), (void*)value);
	}
};

struct JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848_StaticFields
{
public:
	// I18N.CJK.JISConvert I18N.CJK.JISConvert::convert
	JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848 * ___convert_10;
	// System.Object I18N.CJK.JISConvert::lockobj
	RuntimeObject * ___lockobj_11;

public:
	inline static int32_t get_offset_of_convert_10() { return static_cast<int32_t>(offsetof(JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848_StaticFields, ___convert_10)); }
	inline JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848 * get_convert_10() const { return ___convert_10; }
	inline JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848 ** get_address_of_convert_10() { return &___convert_10; }
	inline void set_convert_10(JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848 * value)
	{
		___convert_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___convert_10), (void*)value);
	}

	inline static int32_t get_offset_of_lockobj_11() { return static_cast<int32_t>(offsetof(JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848_StaticFields, ___lockobj_11)); }
	inline RuntimeObject * get_lockobj_11() const { return ___lockobj_11; }
	inline RuntimeObject ** get_address_of_lockobj_11() { return &___lockobj_11; }
	inline void set_lockobj_11(RuntimeObject * value)
	{
		___lockobj_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lockobj_11), (void*)value);
	}
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
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

// I18N.CJK.GB18030Source/GB18030Map
struct GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8  : public RuntimeObject
{
public:
	// System.Int32 I18N.CJK.GB18030Source/GB18030Map::UStart
	int32_t ___UStart_0;
	// System.Int32 I18N.CJK.GB18030Source/GB18030Map::UEnd
	int32_t ___UEnd_1;
	// System.Int64 I18N.CJK.GB18030Source/GB18030Map::GStart
	int64_t ___GStart_2;
	// System.Int64 I18N.CJK.GB18030Source/GB18030Map::GEnd
	int64_t ___GEnd_3;
	// System.Boolean I18N.CJK.GB18030Source/GB18030Map::Dummy
	bool ___Dummy_4;

public:
	inline static int32_t get_offset_of_UStart_0() { return static_cast<int32_t>(offsetof(GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8, ___UStart_0)); }
	inline int32_t get_UStart_0() const { return ___UStart_0; }
	inline int32_t* get_address_of_UStart_0() { return &___UStart_0; }
	inline void set_UStart_0(int32_t value)
	{
		___UStart_0 = value;
	}

	inline static int32_t get_offset_of_UEnd_1() { return static_cast<int32_t>(offsetof(GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8, ___UEnd_1)); }
	inline int32_t get_UEnd_1() const { return ___UEnd_1; }
	inline int32_t* get_address_of_UEnd_1() { return &___UEnd_1; }
	inline void set_UEnd_1(int32_t value)
	{
		___UEnd_1 = value;
	}

	inline static int32_t get_offset_of_GStart_2() { return static_cast<int32_t>(offsetof(GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8, ___GStart_2)); }
	inline int64_t get_GStart_2() const { return ___GStart_2; }
	inline int64_t* get_address_of_GStart_2() { return &___GStart_2; }
	inline void set_GStart_2(int64_t value)
	{
		___GStart_2 = value;
	}

	inline static int32_t get_offset_of_GEnd_3() { return static_cast<int32_t>(offsetof(GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8, ___GEnd_3)); }
	inline int64_t get_GEnd_3() const { return ___GEnd_3; }
	inline int64_t* get_address_of_GEnd_3() { return &___GEnd_3; }
	inline void set_GEnd_3(int64_t value)
	{
		___GEnd_3 = value;
	}

	inline static int32_t get_offset_of_Dummy_4() { return static_cast<int32_t>(offsetof(GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8, ___Dummy_4)); }
	inline bool get_Dummy_4() const { return ___Dummy_4; }
	inline bool* get_address_of_Dummy_4() { return &___Dummy_4; }
	inline void set_Dummy_4(bool value)
	{
		___Dummy_4 = value;
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


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// I18N.Common.MonoSafeEncoder
struct MonoSafeEncoder_t0DF1BF26F417B4E71A75DD81C838421CD0DB7D52  : public Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A
{
public:
	// I18N.Common.MonoSafeEncoding I18N.Common.MonoSafeEncoder::encoding
	MonoSafeEncoding_t0F0341C8A621EBF14ADEA3F5DC248BC26F7DDE83 * ___encoding_2;

public:
	inline static int32_t get_offset_of_encoding_2() { return static_cast<int32_t>(offsetof(MonoSafeEncoder_t0DF1BF26F417B4E71A75DD81C838421CD0DB7D52, ___encoding_2)); }
	inline MonoSafeEncoding_t0F0341C8A621EBF14ADEA3F5DC248BC26F7DDE83 * get_encoding_2() const { return ___encoding_2; }
	inline MonoSafeEncoding_t0F0341C8A621EBF14ADEA3F5DC248BC26F7DDE83 ** get_address_of_encoding_2() { return &___encoding_2; }
	inline void set_encoding_2(MonoSafeEncoding_t0F0341C8A621EBF14ADEA3F5DC248BC26F7DDE83 * value)
	{
		___encoding_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoding_2), (void*)value);
	}
};


// I18N.Common.MonoSafeEncoding
struct MonoSafeEncoding_t0F0341C8A621EBF14ADEA3F5DC248BC26F7DDE83  : public Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827
{
public:
	// System.Int32 I18N.Common.MonoSafeEncoding::win_code_page
	int32_t ___win_code_page_16;

public:
	inline static int32_t get_offset_of_win_code_page_16() { return static_cast<int32_t>(offsetof(MonoSafeEncoding_t0F0341C8A621EBF14ADEA3F5DC248BC26F7DDE83, ___win_code_page_16)); }
	inline int32_t get_win_code_page_16() const { return ___win_code_page_16; }
	inline int32_t* get_address_of_win_code_page_16() { return &___win_code_page_16; }
	inline void set_win_code_page_16(int32_t value)
	{
		___win_code_page_16 = value;
	}
};


// I18N.Common.ReferenceSourceDefaultEncoder
struct ReferenceSourceDefaultEncoder_t931CEDACED8B56299618BA75B21023D54CE0F227  : public Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A
{
public:
	// System.Text.Encoding I18N.Common.ReferenceSourceDefaultEncoder::m_encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___m_encoding_2;
	// System.Boolean I18N.Common.ReferenceSourceDefaultEncoder::m_hasInitializedEncoding
	bool ___m_hasInitializedEncoding_3;
	// System.Char I18N.Common.ReferenceSourceDefaultEncoder::charLeftOver
	Il2CppChar ___charLeftOver_4;

public:
	inline static int32_t get_offset_of_m_encoding_2() { return static_cast<int32_t>(offsetof(ReferenceSourceDefaultEncoder_t931CEDACED8B56299618BA75B21023D54CE0F227, ___m_encoding_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_m_encoding_2() const { return ___m_encoding_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_m_encoding_2() { return &___m_encoding_2; }
	inline void set_m_encoding_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___m_encoding_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_encoding_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_hasInitializedEncoding_3() { return static_cast<int32_t>(offsetof(ReferenceSourceDefaultEncoder_t931CEDACED8B56299618BA75B21023D54CE0F227, ___m_hasInitializedEncoding_3)); }
	inline bool get_m_hasInitializedEncoding_3() const { return ___m_hasInitializedEncoding_3; }
	inline bool* get_address_of_m_hasInitializedEncoding_3() { return &___m_hasInitializedEncoding_3; }
	inline void set_m_hasInitializedEncoding_3(bool value)
	{
		___m_hasInitializedEncoding_3 = value;
	}

	inline static int32_t get_offset_of_charLeftOver_4() { return static_cast<int32_t>(offsetof(ReferenceSourceDefaultEncoder_t931CEDACED8B56299618BA75B21023D54CE0F227, ___charLeftOver_4)); }
	inline Il2CppChar get_charLeftOver_4() const { return ___charLeftOver_4; }
	inline Il2CppChar* get_address_of_charLeftOver_4() { return &___charLeftOver_4; }
	inline void set_charLeftOver_4(Il2CppChar value)
	{
		___charLeftOver_4 = value;
	}
};


// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_2), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_3), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
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


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128
struct __StaticArrayInitTypeSizeU3D128_t180D4121F2D7740A5830A6D6E4DDF302BB2903C3 
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
		uint8_t __StaticArrayInitTypeSizeU3D128_t180D4121F2D7740A5830A6D6E4DDF302BB2903C3__padding[128];
	};

public:
};


// I18N.CJK.DbcsEncoding/DbcsDecoder
struct DbcsDecoder_tE3C4C6E22EB2E09258D84C6FF2FD7FBAD7BF7F8F  : public Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370
{
public:
	// I18N.CJK.DbcsConvert I18N.CJK.DbcsEncoding/DbcsDecoder::convert
	DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * ___convert_2;

public:
	inline static int32_t get_offset_of_convert_2() { return static_cast<int32_t>(offsetof(DbcsDecoder_tE3C4C6E22EB2E09258D84C6FF2FD7FBAD7BF7F8F, ___convert_2)); }
	inline DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * get_convert_2() const { return ___convert_2; }
	inline DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 ** get_address_of_convert_2() { return &___convert_2; }
	inline void set_convert_2(DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * value)
	{
		___convert_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___convert_2), (void*)value);
	}
};


// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0E2D6234731D30F4B134056E10FB479493219935  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t0E2D6234731D30F4B134056E10FB479493219935_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::E37F35D8F8544C41A0449A42051AEFACF21F8621
	__StaticArrayInitTypeSizeU3D128_t180D4121F2D7740A5830A6D6E4DDF302BB2903C3  ___E37F35D8F8544C41A0449A42051AEFACF21F8621_0;

public:
	inline static int32_t get_offset_of_E37F35D8F8544C41A0449A42051AEFACF21F8621_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t0E2D6234731D30F4B134056E10FB479493219935_StaticFields, ___E37F35D8F8544C41A0449A42051AEFACF21F8621_0)); }
	inline __StaticArrayInitTypeSizeU3D128_t180D4121F2D7740A5830A6D6E4DDF302BB2903C3  get_E37F35D8F8544C41A0449A42051AEFACF21F8621_0() const { return ___E37F35D8F8544C41A0449A42051AEFACF21F8621_0; }
	inline __StaticArrayInitTypeSizeU3D128_t180D4121F2D7740A5830A6D6E4DDF302BB2903C3 * get_address_of_E37F35D8F8544C41A0449A42051AEFACF21F8621_0() { return &___E37F35D8F8544C41A0449A42051AEFACF21F8621_0; }
	inline void set_E37F35D8F8544C41A0449A42051AEFACF21F8621_0(__StaticArrayInitTypeSizeU3D128_t180D4121F2D7740A5830A6D6E4DDF302BB2903C3  value)
	{
		___E37F35D8F8544C41A0449A42051AEFACF21F8621_0 = value;
	}
};


// System.Reflection.Assembly
struct Assembly_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Assembly::_mono_assembly
	intptr_t ____mono_assembly_0;
	// System.Reflection.Assembly/ResolveEventHolder System.Reflection.Assembly::resolve_event_holder
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	// System.Object System.Reflection.Assembly::_evidence
	RuntimeObject * ____evidence_2;
	// System.Object System.Reflection.Assembly::_minimum
	RuntimeObject * ____minimum_3;
	// System.Object System.Reflection.Assembly::_optional
	RuntimeObject * ____optional_4;
	// System.Object System.Reflection.Assembly::_refuse
	RuntimeObject * ____refuse_5;
	// System.Object System.Reflection.Assembly::_granted
	RuntimeObject * ____granted_6;
	// System.Object System.Reflection.Assembly::_denied
	RuntimeObject * ____denied_7;
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
	inline ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * get_resolve_event_holder_1() const { return ___resolve_event_holder_1; }
	inline ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C ** get_address_of_resolve_event_holder_1() { return &___resolve_event_holder_1; }
	inline void set_resolve_event_holder_1(ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * value)
	{
		___resolve_event_holder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resolve_event_holder_1), (void*)value);
	}

	inline static int32_t get_offset_of__evidence_2() { return static_cast<int32_t>(offsetof(Assembly_t, ____evidence_2)); }
	inline RuntimeObject * get__evidence_2() const { return ____evidence_2; }
	inline RuntimeObject ** get_address_of__evidence_2() { return &____evidence_2; }
	inline void set__evidence_2(RuntimeObject * value)
	{
		____evidence_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____evidence_2), (void*)value);
	}

	inline static int32_t get_offset_of__minimum_3() { return static_cast<int32_t>(offsetof(Assembly_t, ____minimum_3)); }
	inline RuntimeObject * get__minimum_3() const { return ____minimum_3; }
	inline RuntimeObject ** get_address_of__minimum_3() { return &____minimum_3; }
	inline void set__minimum_3(RuntimeObject * value)
	{
		____minimum_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____minimum_3), (void*)value);
	}

	inline static int32_t get_offset_of__optional_4() { return static_cast<int32_t>(offsetof(Assembly_t, ____optional_4)); }
	inline RuntimeObject * get__optional_4() const { return ____optional_4; }
	inline RuntimeObject ** get_address_of__optional_4() { return &____optional_4; }
	inline void set__optional_4(RuntimeObject * value)
	{
		____optional_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____optional_4), (void*)value);
	}

	inline static int32_t get_offset_of__refuse_5() { return static_cast<int32_t>(offsetof(Assembly_t, ____refuse_5)); }
	inline RuntimeObject * get__refuse_5() const { return ____refuse_5; }
	inline RuntimeObject ** get_address_of__refuse_5() { return &____refuse_5; }
	inline void set__refuse_5(RuntimeObject * value)
	{
		____refuse_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____refuse_5), (void*)value);
	}

	inline static int32_t get_offset_of__granted_6() { return static_cast<int32_t>(offsetof(Assembly_t, ____granted_6)); }
	inline RuntimeObject * get__granted_6() const { return ____granted_6; }
	inline RuntimeObject ** get_address_of__granted_6() { return &____granted_6; }
	inline void set__granted_6(RuntimeObject * value)
	{
		____granted_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____granted_6), (void*)value);
	}

	inline static int32_t get_offset_of__denied_7() { return static_cast<int32_t>(offsetof(Assembly_t, ____denied_7)); }
	inline RuntimeObject * get__denied_7() const { return ____denied_7; }
	inline RuntimeObject ** get_address_of__denied_7() { return &____denied_7; }
	inline void set__denied_7(RuntimeObject * value)
	{
		____denied_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____denied_7), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&___assemblyName_9), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	Il2CppIUnknown* ____evidence_2;
	Il2CppIUnknown* ____minimum_3;
	Il2CppIUnknown* ____optional_4;
	Il2CppIUnknown* ____refuse_5;
	Il2CppIUnknown* ____granted_6;
	Il2CppIUnknown* ____denied_7;
	int32_t ___fromByteArray_8;
	char* ___assemblyName_9;
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	Il2CppIUnknown* ____evidence_2;
	Il2CppIUnknown* ____minimum_3;
	Il2CppIUnknown* ____optional_4;
	Il2CppIUnknown* ____refuse_5;
	Il2CppIUnknown* ____granted_6;
	Il2CppIUnknown* ____denied_7;
	int32_t ___fromByteArray_8;
	Il2CppChar* ___assemblyName_9;
};

// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// I18N.CJK.CP51932
struct CP51932_t1AF90767E1FC85D8A3F12D47E03205D61833C502  : public MonoSafeEncoding_t0F0341C8A621EBF14ADEA3F5DC248BC26F7DDE83
{
public:

public:
};


// I18N.CJK.CP51932Decoder
struct CP51932Decoder_tC03EC4B854B4393E2A49FDD66AC4195645C9696F  : public DbcsDecoder_tE3C4C6E22EB2E09258D84C6FF2FD7FBAD7BF7F8F
{
public:
	// System.Int32 I18N.CJK.CP51932Decoder::last_count
	int32_t ___last_count_3;
	// System.Int32 I18N.CJK.CP51932Decoder::last_bytes
	int32_t ___last_bytes_4;

public:
	inline static int32_t get_offset_of_last_count_3() { return static_cast<int32_t>(offsetof(CP51932Decoder_tC03EC4B854B4393E2A49FDD66AC4195645C9696F, ___last_count_3)); }
	inline int32_t get_last_count_3() const { return ___last_count_3; }
	inline int32_t* get_address_of_last_count_3() { return &___last_count_3; }
	inline void set_last_count_3(int32_t value)
	{
		___last_count_3 = value;
	}

	inline static int32_t get_offset_of_last_bytes_4() { return static_cast<int32_t>(offsetof(CP51932Decoder_tC03EC4B854B4393E2A49FDD66AC4195645C9696F, ___last_bytes_4)); }
	inline int32_t get_last_bytes_4() const { return ___last_bytes_4; }
	inline int32_t* get_address_of_last_bytes_4() { return &___last_bytes_4; }
	inline void set_last_bytes_4(int32_t value)
	{
		___last_bytes_4 = value;
	}
};


// I18N.CJK.CP51932Encoder
struct CP51932Encoder_t2D109B1562B6FB19940754F06F0C87C022FC7312  : public MonoSafeEncoder_t0DF1BF26F417B4E71A75DD81C838421CD0DB7D52
{
public:

public:
};


// I18N.CJK.CP932
struct CP932_t30A1C3786CBAC763AD15AA7146BB886F26F01596  : public MonoSafeEncoding_t0F0341C8A621EBF14ADEA3F5DC248BC26F7DDE83
{
public:

public:
};


// I18N.CJK.CP932Decoder
struct CP932Decoder_t7FA16FF015C7A2CEA4DB579DEEFBB632B3182225  : public DbcsDecoder_tE3C4C6E22EB2E09258D84C6FF2FD7FBAD7BF7F8F
{
public:
	// I18N.CJK.JISConvert I18N.CJK.CP932Decoder::convert
	JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848 * ___convert_3;
	// System.Int32 I18N.CJK.CP932Decoder::last_byte_count
	int32_t ___last_byte_count_4;
	// System.Int32 I18N.CJK.CP932Decoder::last_byte_chars
	int32_t ___last_byte_chars_5;

public:
	inline static int32_t get_offset_of_convert_3() { return static_cast<int32_t>(offsetof(CP932Decoder_t7FA16FF015C7A2CEA4DB579DEEFBB632B3182225, ___convert_3)); }
	inline JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848 * get_convert_3() const { return ___convert_3; }
	inline JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848 ** get_address_of_convert_3() { return &___convert_3; }
	inline void set_convert_3(JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848 * value)
	{
		___convert_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___convert_3), (void*)value);
	}

	inline static int32_t get_offset_of_last_byte_count_4() { return static_cast<int32_t>(offsetof(CP932Decoder_t7FA16FF015C7A2CEA4DB579DEEFBB632B3182225, ___last_byte_count_4)); }
	inline int32_t get_last_byte_count_4() const { return ___last_byte_count_4; }
	inline int32_t* get_address_of_last_byte_count_4() { return &___last_byte_count_4; }
	inline void set_last_byte_count_4(int32_t value)
	{
		___last_byte_count_4 = value;
	}

	inline static int32_t get_offset_of_last_byte_chars_5() { return static_cast<int32_t>(offsetof(CP932Decoder_t7FA16FF015C7A2CEA4DB579DEEFBB632B3182225, ___last_byte_chars_5)); }
	inline int32_t get_last_byte_chars_5() const { return ___last_byte_chars_5; }
	inline int32_t* get_address_of_last_byte_chars_5() { return &___last_byte_chars_5; }
	inline void set_last_byte_chars_5(int32_t value)
	{
		___last_byte_chars_5 = value;
	}
};


// I18N.CJK.CP936Decoder
struct CP936Decoder_t4E9A8F2DD551EFFA508441B10EDAD4200D32E120  : public DbcsDecoder_tE3C4C6E22EB2E09258D84C6FF2FD7FBAD7BF7F8F
{
public:
	// System.Int32 I18N.CJK.CP936Decoder::last_byte_count
	int32_t ___last_byte_count_3;
	// System.Int32 I18N.CJK.CP936Decoder::last_byte_bytes
	int32_t ___last_byte_bytes_4;

public:
	inline static int32_t get_offset_of_last_byte_count_3() { return static_cast<int32_t>(offsetof(CP936Decoder_t4E9A8F2DD551EFFA508441B10EDAD4200D32E120, ___last_byte_count_3)); }
	inline int32_t get_last_byte_count_3() const { return ___last_byte_count_3; }
	inline int32_t* get_address_of_last_byte_count_3() { return &___last_byte_count_3; }
	inline void set_last_byte_count_3(int32_t value)
	{
		___last_byte_count_3 = value;
	}

	inline static int32_t get_offset_of_last_byte_bytes_4() { return static_cast<int32_t>(offsetof(CP936Decoder_t4E9A8F2DD551EFFA508441B10EDAD4200D32E120, ___last_byte_bytes_4)); }
	inline int32_t get_last_byte_bytes_4() const { return ___last_byte_bytes_4; }
	inline int32_t* get_address_of_last_byte_bytes_4() { return &___last_byte_bytes_4; }
	inline void set_last_byte_bytes_4(int32_t value)
	{
		___last_byte_bytes_4 = value;
	}
};


// I18N.CJK.DbcsEncoding
struct DbcsEncoding_t97AEDFAC1F40C1EAB9DD5FD68BE7B377FB635ECE  : public MonoSafeEncoding_t0F0341C8A621EBF14ADEA3F5DC248BC26F7DDE83
{
public:

public:
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

// I18N.CJK.GB18030Decoder
struct GB18030Decoder_t24EE55D918A003E55F69C1DDEA153C6A189A72B9  : public DbcsDecoder_tE3C4C6E22EB2E09258D84C6FF2FD7FBAD7BF7F8F
{
public:

public:
};

struct GB18030Decoder_t24EE55D918A003E55F69C1DDEA153C6A189A72B9_StaticFields
{
public:
	// I18N.CJK.DbcsConvert I18N.CJK.GB18030Decoder::gb2312
	DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * ___gb2312_3;

public:
	inline static int32_t get_offset_of_gb2312_3() { return static_cast<int32_t>(offsetof(GB18030Decoder_t24EE55D918A003E55F69C1DDEA153C6A189A72B9_StaticFields, ___gb2312_3)); }
	inline DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * get_gb2312_3() const { return ___gb2312_3; }
	inline DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 ** get_address_of_gb2312_3() { return &___gb2312_3; }
	inline void set_gb2312_3(DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * value)
	{
		___gb2312_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gb2312_3), (void*)value);
	}
};


// I18N.CJK.GB18030Encoder
struct GB18030Encoder_t0A88113FFF8BAFE6F79A16678697B61C488AA971  : public MonoSafeEncoder_t0DF1BF26F417B4E71A75DD81C838421CD0DB7D52
{
public:
	// System.Char I18N.CJK.GB18030Encoder::incomplete_byte_count
	Il2CppChar ___incomplete_byte_count_4;
	// System.Char I18N.CJK.GB18030Encoder::incomplete_bytes
	Il2CppChar ___incomplete_bytes_5;

public:
	inline static int32_t get_offset_of_incomplete_byte_count_4() { return static_cast<int32_t>(offsetof(GB18030Encoder_t0A88113FFF8BAFE6F79A16678697B61C488AA971, ___incomplete_byte_count_4)); }
	inline Il2CppChar get_incomplete_byte_count_4() const { return ___incomplete_byte_count_4; }
	inline Il2CppChar* get_address_of_incomplete_byte_count_4() { return &___incomplete_byte_count_4; }
	inline void set_incomplete_byte_count_4(Il2CppChar value)
	{
		___incomplete_byte_count_4 = value;
	}

	inline static int32_t get_offset_of_incomplete_bytes_5() { return static_cast<int32_t>(offsetof(GB18030Encoder_t0A88113FFF8BAFE6F79A16678697B61C488AA971, ___incomplete_bytes_5)); }
	inline Il2CppChar get_incomplete_bytes_5() const { return ___incomplete_bytes_5; }
	inline Il2CppChar* get_address_of_incomplete_bytes_5() { return &___incomplete_bytes_5; }
	inline void set_incomplete_bytes_5(Il2CppChar value)
	{
		___incomplete_bytes_5 = value;
	}
};

struct GB18030Encoder_t0A88113FFF8BAFE6F79A16678697B61C488AA971_StaticFields
{
public:
	// I18N.CJK.DbcsConvert I18N.CJK.GB18030Encoder::gb2312
	DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * ___gb2312_3;

public:
	inline static int32_t get_offset_of_gb2312_3() { return static_cast<int32_t>(offsetof(GB18030Encoder_t0A88113FFF8BAFE6F79A16678697B61C488AA971_StaticFields, ___gb2312_3)); }
	inline DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * get_gb2312_3() const { return ___gb2312_3; }
	inline DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 ** get_address_of_gb2312_3() { return &___gb2312_3; }
	inline void set_gb2312_3(DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * value)
	{
		___gb2312_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gb2312_3), (void*)value);
	}
};


// I18N.CJK.GB18030Encoding
struct GB18030Encoding_t48649BF97C255015EB5811902CE20AA6D3B3FE57  : public MonoSafeEncoding_t0F0341C8A621EBF14ADEA3F5DC248BC26F7DDE83
{
public:

public:
};


// I18N.CJK.ISO2022JPEncoding
struct ISO2022JPEncoding_t50513DEA872F8D29579CF6725848DA3E18E25CD8  : public MonoSafeEncoding_t0F0341C8A621EBF14ADEA3F5DC248BC26F7DDE83
{
public:
	// System.Boolean I18N.CJK.ISO2022JPEncoding::allow_1byte_kana
	bool ___allow_1byte_kana_17;
	// System.Boolean I18N.CJK.ISO2022JPEncoding::allow_shift_io
	bool ___allow_shift_io_18;

public:
	inline static int32_t get_offset_of_allow_1byte_kana_17() { return static_cast<int32_t>(offsetof(ISO2022JPEncoding_t50513DEA872F8D29579CF6725848DA3E18E25CD8, ___allow_1byte_kana_17)); }
	inline bool get_allow_1byte_kana_17() const { return ___allow_1byte_kana_17; }
	inline bool* get_address_of_allow_1byte_kana_17() { return &___allow_1byte_kana_17; }
	inline void set_allow_1byte_kana_17(bool value)
	{
		___allow_1byte_kana_17 = value;
	}

	inline static int32_t get_offset_of_allow_shift_io_18() { return static_cast<int32_t>(offsetof(ISO2022JPEncoding_t50513DEA872F8D29579CF6725848DA3E18E25CD8, ___allow_shift_io_18)); }
	inline bool get_allow_shift_io_18() const { return ___allow_shift_io_18; }
	inline bool* get_address_of_allow_shift_io_18() { return &___allow_shift_io_18; }
	inline void set_allow_shift_io_18(bool value)
	{
		___allow_shift_io_18 = value;
	}
};


// I18N.CJK.ISO2022JPMode
struct ISO2022JPMode_tFE9EBA939EB260AD0FDFAC4B06A11C2EF51640CB 
{
public:
	// System.Int32 I18N.CJK.ISO2022JPMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ISO2022JPMode_tFE9EBA939EB260AD0FDFAC4B06A11C2EF51640CB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
public:

public:
};


// I18N.Common.MonoEncodingDefaultEncoder
struct MonoEncodingDefaultEncoder_t4B58B3F3AFA8085CDE630E185C8572B72EEE8A90  : public ReferenceSourceDefaultEncoder_t931CEDACED8B56299618BA75B21023D54CE0F227
{
public:

public:
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


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// I18N.CJK.CP950/CP950Decoder
struct CP950Decoder_t6D8DBBAA197A2D5800980E193F5E09C61B092138  : public DbcsDecoder_tE3C4C6E22EB2E09258D84C6FF2FD7FBAD7BF7F8F
{
public:
	// System.Int32 I18N.CJK.CP950/CP950Decoder::last_byte_count
	int32_t ___last_byte_count_3;
	// System.Int32 I18N.CJK.CP950/CP950Decoder::last_byte_conv
	int32_t ___last_byte_conv_4;

public:
	inline static int32_t get_offset_of_last_byte_count_3() { return static_cast<int32_t>(offsetof(CP950Decoder_t6D8DBBAA197A2D5800980E193F5E09C61B092138, ___last_byte_count_3)); }
	inline int32_t get_last_byte_count_3() const { return ___last_byte_count_3; }
	inline int32_t* get_address_of_last_byte_count_3() { return &___last_byte_count_3; }
	inline void set_last_byte_count_3(int32_t value)
	{
		___last_byte_count_3 = value;
	}

	inline static int32_t get_offset_of_last_byte_conv_4() { return static_cast<int32_t>(offsetof(CP950Decoder_t6D8DBBAA197A2D5800980E193F5E09C61B092138, ___last_byte_conv_4)); }
	inline int32_t get_last_byte_conv_4() const { return ___last_byte_conv_4; }
	inline int32_t* get_address_of_last_byte_conv_4() { return &___last_byte_conv_4; }
	inline void set_last_byte_conv_4(int32_t value)
	{
		___last_byte_conv_4 = value;
	}
};


// I18N.CJK.KoreanEncoding/KoreanDecoder
struct KoreanDecoder_t7A190670048C88144494EB3E16C5E35F7601E959  : public DbcsDecoder_tE3C4C6E22EB2E09258D84C6FF2FD7FBAD7BF7F8F
{
public:
	// System.Boolean I18N.CJK.KoreanEncoding/KoreanDecoder::useUHC
	bool ___useUHC_3;
	// System.Int32 I18N.CJK.KoreanEncoding/KoreanDecoder::last_byte_count
	int32_t ___last_byte_count_4;
	// System.Int32 I18N.CJK.KoreanEncoding/KoreanDecoder::last_byte_conv
	int32_t ___last_byte_conv_5;

public:
	inline static int32_t get_offset_of_useUHC_3() { return static_cast<int32_t>(offsetof(KoreanDecoder_t7A190670048C88144494EB3E16C5E35F7601E959, ___useUHC_3)); }
	inline bool get_useUHC_3() const { return ___useUHC_3; }
	inline bool* get_address_of_useUHC_3() { return &___useUHC_3; }
	inline void set_useUHC_3(bool value)
	{
		___useUHC_3 = value;
	}

	inline static int32_t get_offset_of_last_byte_count_4() { return static_cast<int32_t>(offsetof(KoreanDecoder_t7A190670048C88144494EB3E16C5E35F7601E959, ___last_byte_count_4)); }
	inline int32_t get_last_byte_count_4() const { return ___last_byte_count_4; }
	inline int32_t* get_address_of_last_byte_count_4() { return &___last_byte_count_4; }
	inline void set_last_byte_count_4(int32_t value)
	{
		___last_byte_count_4 = value;
	}

	inline static int32_t get_offset_of_last_byte_conv_5() { return static_cast<int32_t>(offsetof(KoreanDecoder_t7A190670048C88144494EB3E16C5E35F7601E959, ___last_byte_conv_5)); }
	inline int32_t get_last_byte_conv_5() const { return ___last_byte_conv_5; }
	inline int32_t* get_address_of_last_byte_conv_5() { return &___last_byte_conv_5; }
	inline void set_last_byte_conv_5(int32_t value)
	{
		___last_byte_conv_5 = value;
	}
};


// I18N.CJK.CP50220
struct CP50220_t31ABD0962AB7C3A08F57DAD16ABABEB8C6EEB4BD  : public ISO2022JPEncoding_t50513DEA872F8D29579CF6725848DA3E18E25CD8
{
public:

public:
};


// I18N.CJK.CP50221
struct CP50221_tE1FE919ACD943034E2D012D74B673D96A67A2361  : public ISO2022JPEncoding_t50513DEA872F8D29579CF6725848DA3E18E25CD8
{
public:

public:
};


// I18N.CJK.CP50222
struct CP50222_t80727A61FBE9B90EA8126A9C12BA89958BF753BB  : public ISO2022JPEncoding_t50513DEA872F8D29579CF6725848DA3E18E25CD8
{
public:

public:
};


// I18N.CJK.CP54936
struct CP54936_tBE9FEC49039E36BEE92AC1A9620D9DF93257A54F  : public GB18030Encoding_t48649BF97C255015EB5811902CE20AA6D3B3FE57
{
public:

public:
};


// I18N.CJK.CP936
struct CP936_tB81AF17959C1E8D5AE3E4CE146D89F1E295E534F  : public DbcsEncoding_t97AEDFAC1F40C1EAB9DD5FD68BE7B377FB635ECE
{
public:

public:
};


// I18N.CJK.CP950
struct CP950_tC49816E378AA2453DD6F08701D7657C44E47FEDC  : public DbcsEncoding_t97AEDFAC1F40C1EAB9DD5FD68BE7B377FB635ECE
{
public:

public:
};


// I18N.CJK.ENCeuc_jp
struct ENCeuc_jp_tF1F1430C246DE14A4248A629174C8B6B21CE0922  : public CP51932_t1AF90767E1FC85D8A3F12D47E03205D61833C502
{
public:

public:
};


// I18N.CJK.ENCgb18030
struct ENCgb18030_tACDBF747C27117B8BB310AE8A6F44ECDB77B68C8  : public GB18030Encoding_t48649BF97C255015EB5811902CE20AA6D3B3FE57
{
public:

public:
};


// I18N.CJK.ENCshift_jis
struct ENCshift_jis_t4E78F10D709157D6D59C0DBB274773B0E24227CF  : public CP932_t30A1C3786CBAC763AD15AA7146BB886F26F01596
{
public:

public:
};


// I18N.CJK.ISO2022JPDecoder
struct ISO2022JPDecoder_t1614BCC169A8897B2CD138F980FB728DB696B2CC  : public Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370
{
public:
	// System.Boolean I18N.CJK.ISO2022JPDecoder::allow_shift_io
	bool ___allow_shift_io_3;
	// I18N.CJK.ISO2022JPMode I18N.CJK.ISO2022JPDecoder::m
	int32_t ___m_4;
	// System.Boolean I18N.CJK.ISO2022JPDecoder::shifted_in_conv
	bool ___shifted_in_conv_5;
	// System.Boolean I18N.CJK.ISO2022JPDecoder::shifted_in_count
	bool ___shifted_in_count_6;

public:
	inline static int32_t get_offset_of_allow_shift_io_3() { return static_cast<int32_t>(offsetof(ISO2022JPDecoder_t1614BCC169A8897B2CD138F980FB728DB696B2CC, ___allow_shift_io_3)); }
	inline bool get_allow_shift_io_3() const { return ___allow_shift_io_3; }
	inline bool* get_address_of_allow_shift_io_3() { return &___allow_shift_io_3; }
	inline void set_allow_shift_io_3(bool value)
	{
		___allow_shift_io_3 = value;
	}

	inline static int32_t get_offset_of_m_4() { return static_cast<int32_t>(offsetof(ISO2022JPDecoder_t1614BCC169A8897B2CD138F980FB728DB696B2CC, ___m_4)); }
	inline int32_t get_m_4() const { return ___m_4; }
	inline int32_t* get_address_of_m_4() { return &___m_4; }
	inline void set_m_4(int32_t value)
	{
		___m_4 = value;
	}

	inline static int32_t get_offset_of_shifted_in_conv_5() { return static_cast<int32_t>(offsetof(ISO2022JPDecoder_t1614BCC169A8897B2CD138F980FB728DB696B2CC, ___shifted_in_conv_5)); }
	inline bool get_shifted_in_conv_5() const { return ___shifted_in_conv_5; }
	inline bool* get_address_of_shifted_in_conv_5() { return &___shifted_in_conv_5; }
	inline void set_shifted_in_conv_5(bool value)
	{
		___shifted_in_conv_5 = value;
	}

	inline static int32_t get_offset_of_shifted_in_count_6() { return static_cast<int32_t>(offsetof(ISO2022JPDecoder_t1614BCC169A8897B2CD138F980FB728DB696B2CC, ___shifted_in_count_6)); }
	inline bool get_shifted_in_count_6() const { return ___shifted_in_count_6; }
	inline bool* get_address_of_shifted_in_count_6() { return &___shifted_in_count_6; }
	inline void set_shifted_in_count_6(bool value)
	{
		___shifted_in_count_6 = value;
	}
};

struct ISO2022JPDecoder_t1614BCC169A8897B2CD138F980FB728DB696B2CC_StaticFields
{
public:
	// I18N.CJK.JISConvert I18N.CJK.ISO2022JPDecoder::convert
	JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848 * ___convert_2;

public:
	inline static int32_t get_offset_of_convert_2() { return static_cast<int32_t>(offsetof(ISO2022JPDecoder_t1614BCC169A8897B2CD138F980FB728DB696B2CC_StaticFields, ___convert_2)); }
	inline JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848 * get_convert_2() const { return ___convert_2; }
	inline JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848 ** get_address_of_convert_2() { return &___convert_2; }
	inline void set_convert_2(JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848 * value)
	{
		___convert_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___convert_2), (void*)value);
	}
};


// I18N.CJK.ISO2022JPEncoder
struct ISO2022JPEncoder_tB0BDAE1A1F936AB4C05A6AD1FDEFE4945EE29AA6  : public MonoSafeEncoder_t0DF1BF26F417B4E71A75DD81C838421CD0DB7D52
{
public:
	// System.Boolean I18N.CJK.ISO2022JPEncoder::allow_1byte_kana
	bool ___allow_1byte_kana_4;
	// System.Boolean I18N.CJK.ISO2022JPEncoder::allow_shift_io
	bool ___allow_shift_io_5;
	// I18N.CJK.ISO2022JPMode I18N.CJK.ISO2022JPEncoder::m
	int32_t ___m_6;
	// System.Boolean I18N.CJK.ISO2022JPEncoder::shifted_in_count
	bool ___shifted_in_count_7;
	// System.Boolean I18N.CJK.ISO2022JPEncoder::shifted_in_conv
	bool ___shifted_in_conv_8;

public:
	inline static int32_t get_offset_of_allow_1byte_kana_4() { return static_cast<int32_t>(offsetof(ISO2022JPEncoder_tB0BDAE1A1F936AB4C05A6AD1FDEFE4945EE29AA6, ___allow_1byte_kana_4)); }
	inline bool get_allow_1byte_kana_4() const { return ___allow_1byte_kana_4; }
	inline bool* get_address_of_allow_1byte_kana_4() { return &___allow_1byte_kana_4; }
	inline void set_allow_1byte_kana_4(bool value)
	{
		___allow_1byte_kana_4 = value;
	}

	inline static int32_t get_offset_of_allow_shift_io_5() { return static_cast<int32_t>(offsetof(ISO2022JPEncoder_tB0BDAE1A1F936AB4C05A6AD1FDEFE4945EE29AA6, ___allow_shift_io_5)); }
	inline bool get_allow_shift_io_5() const { return ___allow_shift_io_5; }
	inline bool* get_address_of_allow_shift_io_5() { return &___allow_shift_io_5; }
	inline void set_allow_shift_io_5(bool value)
	{
		___allow_shift_io_5 = value;
	}

	inline static int32_t get_offset_of_m_6() { return static_cast<int32_t>(offsetof(ISO2022JPEncoder_tB0BDAE1A1F936AB4C05A6AD1FDEFE4945EE29AA6, ___m_6)); }
	inline int32_t get_m_6() const { return ___m_6; }
	inline int32_t* get_address_of_m_6() { return &___m_6; }
	inline void set_m_6(int32_t value)
	{
		___m_6 = value;
	}

	inline static int32_t get_offset_of_shifted_in_count_7() { return static_cast<int32_t>(offsetof(ISO2022JPEncoder_tB0BDAE1A1F936AB4C05A6AD1FDEFE4945EE29AA6, ___shifted_in_count_7)); }
	inline bool get_shifted_in_count_7() const { return ___shifted_in_count_7; }
	inline bool* get_address_of_shifted_in_count_7() { return &___shifted_in_count_7; }
	inline void set_shifted_in_count_7(bool value)
	{
		___shifted_in_count_7 = value;
	}

	inline static int32_t get_offset_of_shifted_in_conv_8() { return static_cast<int32_t>(offsetof(ISO2022JPEncoder_tB0BDAE1A1F936AB4C05A6AD1FDEFE4945EE29AA6, ___shifted_in_conv_8)); }
	inline bool get_shifted_in_conv_8() const { return ___shifted_in_conv_8; }
	inline bool* get_address_of_shifted_in_conv_8() { return &___shifted_in_conv_8; }
	inline void set_shifted_in_conv_8(bool value)
	{
		___shifted_in_conv_8 = value;
	}
};

struct ISO2022JPEncoder_tB0BDAE1A1F936AB4C05A6AD1FDEFE4945EE29AA6_StaticFields
{
public:
	// I18N.CJK.JISConvert I18N.CJK.ISO2022JPEncoder::convert
	JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848 * ___convert_3;
	// System.Char[] I18N.CJK.ISO2022JPEncoder::full_width_map
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___full_width_map_9;

public:
	inline static int32_t get_offset_of_convert_3() { return static_cast<int32_t>(offsetof(ISO2022JPEncoder_tB0BDAE1A1F936AB4C05A6AD1FDEFE4945EE29AA6_StaticFields, ___convert_3)); }
	inline JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848 * get_convert_3() const { return ___convert_3; }
	inline JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848 ** get_address_of_convert_3() { return &___convert_3; }
	inline void set_convert_3(JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848 * value)
	{
		___convert_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___convert_3), (void*)value);
	}

	inline static int32_t get_offset_of_full_width_map_9() { return static_cast<int32_t>(offsetof(ISO2022JPEncoder_tB0BDAE1A1F936AB4C05A6AD1FDEFE4945EE29AA6_StaticFields, ___full_width_map_9)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_full_width_map_9() const { return ___full_width_map_9; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_full_width_map_9() { return &___full_width_map_9; }
	inline void set_full_width_map_9(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___full_width_map_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___full_width_map_9), (void*)value);
	}
};


// I18N.CJK.KoreanEncoding
struct KoreanEncoding_t802D545D60E3844B7A431234B087FE2928F87391  : public DbcsEncoding_t97AEDFAC1F40C1EAB9DD5FD68BE7B377FB635ECE
{
public:
	// System.Boolean I18N.CJK.KoreanEncoding::useUHC
	bool ___useUHC_17;

public:
	inline static int32_t get_offset_of_useUHC_17() { return static_cast<int32_t>(offsetof(KoreanEncoding_t802D545D60E3844B7A431234B087FE2928F87391, ___useUHC_17)); }
	inline bool get_useUHC_17() const { return ___useUHC_17; }
	inline bool* get_address_of_useUHC_17() { return &___useUHC_17; }
	inline void set_useUHC_17(bool value)
	{
		___useUHC_17 = value;
	}
};


// System.Reflection.Module
struct Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7  : public RuntimeObject
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
	inline static int32_t get_offset_of__impl_2() { return static_cast<int32_t>(offsetof(Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7, ____impl_2)); }
	inline intptr_t get__impl_2() const { return ____impl_2; }
	inline intptr_t* get_address_of__impl_2() { return &____impl_2; }
	inline void set__impl_2(intptr_t value)
	{
		____impl_2 = value;
	}

	inline static int32_t get_offset_of_assembly_3() { return static_cast<int32_t>(offsetof(Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7, ___assembly_3)); }
	inline Assembly_t * get_assembly_3() const { return ___assembly_3; }
	inline Assembly_t ** get_address_of_assembly_3() { return &___assembly_3; }
	inline void set_assembly_3(Assembly_t * value)
	{
		___assembly_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assembly_3), (void*)value);
	}

	inline static int32_t get_offset_of_fqname_4() { return static_cast<int32_t>(offsetof(Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7, ___fqname_4)); }
	inline String_t* get_fqname_4() const { return ___fqname_4; }
	inline String_t** get_address_of_fqname_4() { return &___fqname_4; }
	inline void set_fqname_4(String_t* value)
	{
		___fqname_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fqname_4), (void*)value);
	}

	inline static int32_t get_offset_of_name_5() { return static_cast<int32_t>(offsetof(Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7, ___name_5)); }
	inline String_t* get_name_5() const { return ___name_5; }
	inline String_t** get_address_of_name_5() { return &___name_5; }
	inline void set_name_5(String_t* value)
	{
		___name_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_5), (void*)value);
	}

	inline static int32_t get_offset_of_scopename_6() { return static_cast<int32_t>(offsetof(Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7, ___scopename_6)); }
	inline String_t* get_scopename_6() const { return ___scopename_6; }
	inline String_t** get_address_of_scopename_6() { return &___scopename_6; }
	inline void set_scopename_6(String_t* value)
	{
		___scopename_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scopename_6), (void*)value);
	}

	inline static int32_t get_offset_of_is_resource_7() { return static_cast<int32_t>(offsetof(Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7, ___is_resource_7)); }
	inline bool get_is_resource_7() const { return ___is_resource_7; }
	inline bool* get_address_of_is_resource_7() { return &___is_resource_7; }
	inline void set_is_resource_7(bool value)
	{
		___is_resource_7 = value;
	}

	inline static int32_t get_offset_of_token_8() { return static_cast<int32_t>(offsetof(Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7, ___token_8)); }
	inline int32_t get_token_8() const { return ___token_8; }
	inline int32_t* get_address_of_token_8() { return &___token_8; }
	inline void set_token_8(int32_t value)
	{
		___token_8 = value;
	}
};

struct Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7_StaticFields
{
public:
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeName
	TypeFilter_t8E0AA7E71F2D6695C61A52277E6CF6E49230F2C3 * ___FilterTypeName_0;
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeNameIgnoreCase
	TypeFilter_t8E0AA7E71F2D6695C61A52277E6CF6E49230F2C3 * ___FilterTypeNameIgnoreCase_1;

public:
	inline static int32_t get_offset_of_FilterTypeName_0() { return static_cast<int32_t>(offsetof(Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7_StaticFields, ___FilterTypeName_0)); }
	inline TypeFilter_t8E0AA7E71F2D6695C61A52277E6CF6E49230F2C3 * get_FilterTypeName_0() const { return ___FilterTypeName_0; }
	inline TypeFilter_t8E0AA7E71F2D6695C61A52277E6CF6E49230F2C3 ** get_address_of_FilterTypeName_0() { return &___FilterTypeName_0; }
	inline void set_FilterTypeName_0(TypeFilter_t8E0AA7E71F2D6695C61A52277E6CF6E49230F2C3 * value)
	{
		___FilterTypeName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterTypeName_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterTypeNameIgnoreCase_1() { return static_cast<int32_t>(offsetof(Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7_StaticFields, ___FilterTypeNameIgnoreCase_1)); }
	inline TypeFilter_t8E0AA7E71F2D6695C61A52277E6CF6E49230F2C3 * get_FilterTypeNameIgnoreCase_1() const { return ___FilterTypeNameIgnoreCase_1; }
	inline TypeFilter_t8E0AA7E71F2D6695C61A52277E6CF6E49230F2C3 ** get_address_of_FilterTypeNameIgnoreCase_1() { return &___FilterTypeNameIgnoreCase_1; }
	inline void set_FilterTypeNameIgnoreCase_1(TypeFilter_t8E0AA7E71F2D6695C61A52277E6CF6E49230F2C3 * value)
	{
		___FilterTypeNameIgnoreCase_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterTypeNameIgnoreCase_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.Module
struct Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7_marshaled_pinvoke
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
struct Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7_marshaled_com
{
	intptr_t ____impl_2;
	Assembly_t_marshaled_com* ___assembly_3;
	Il2CppChar* ___fqname_4;
	Il2CppChar* ___name_5;
	Il2CppChar* ___scopename_6;
	int32_t ___is_resource_7;
	int32_t ___token_8;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
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


// I18N.CJK.CP51949
struct CP51949_tF501078A4A22B0D292CB290076A4F207E1760B64  : public KoreanEncoding_t802D545D60E3844B7A431234B087FE2928F87391
{
public:

public:
};


// I18N.CJK.CP949
struct CP949_t6F6698BB1EE821BF679191F45FA5E32AED627F19  : public KoreanEncoding_t802D545D60E3844B7A431234B087FE2928F87391
{
public:

public:
};


// I18N.CJK.ENCbig5
struct ENCbig5_t4DF6EBF0161669339489FD8732666363AB62D6BF  : public CP950_tC49816E378AA2453DD6F08701D7657C44E47FEDC
{
public:

public:
};


// I18N.CJK.ENCgb2312
struct ENCgb2312_tEEEA920BED52A98B9E848AE7000405CE74835864  : public CP936_tB81AF17959C1E8D5AE3E4CE146D89F1E295E534F
{
public:

public:
};


// I18N.CJK.ENCiso_2022_jp
struct ENCiso_2022_jp_tCF64B94579193B69CD43C13EAF099C5806DA259D  : public CP50220_t31ABD0962AB7C3A08F57DAD16ABABEB8C6EEB4BD
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
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


// I18N.CJK.ENCeuc_kr
struct ENCeuc_kr_t3F0655385F9D9AEFFCB04FA9E70B10E025072580  : public CP51949_tF501078A4A22B0D292CB290076A4F207E1760B64
{
public:

public:
};


// I18N.CJK.ENCuhc
struct ENCuhc_tE492559A19EB9D9F3ECDC7606C859188C94F3483  : public CP949_t6F6698BB1EE821BF679191F45FA5E32AED627F19
{
public:

public:
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
// I18N.CJK.GB18030Source/GB18030Map[]
struct GB18030MapU5BU5D_tEBCE6E25AE316F256DBF693F861C0DFA45BF3B3E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 * m_Items[1];

public:
	inline GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};



// System.Void I18N.CJK.ISO2022JPEncoding::.ctor(System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISO2022JPEncoding__ctor_m17D09D6D0284611A8A37CF415816EFBA202DF7EC (ISO2022JPEncoding_t50513DEA872F8D29579CF6725848DA3E18E25CD8 * __this, int32_t ___codePage0, bool ___allow1ByteKana1, bool ___allowShiftIO2, const RuntimeMethod* method);
// System.Void I18N.Common.MonoSafeEncoding::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoSafeEncoding__ctor_m22024C3A28920B9112728E9CF9CF218621D880E5 (MonoSafeEncoding_t0F0341C8A621EBF14ADEA3F5DC248BC26F7DDE83 * __this, int32_t ___codePage0, int32_t ___windowsCodePage1, const RuntimeMethod* method);
// System.Void I18N.CJK.CP51932Encoder::.ctor(I18N.Common.MonoSafeEncoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP51932Encoder__ctor_m600876953D7C9E4EA8F35A7D26D3B582D0C47DD0 (CP51932Encoder_t2D109B1562B6FB19940754F06F0C87C022FC7312 * __this, MonoSafeEncoding_t0F0341C8A621EBF14ADEA3F5DC248BC26F7DDE83 * ___encoding0, const RuntimeMethod* method);
// System.Void I18N.CJK.CP51932Decoder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP51932Decoder__ctor_mCD7EBA0866E141275F6F86C7EA0910BCFDB33517 (CP51932Decoder_tC03EC4B854B4393E2A49FDD66AC4195645C9696F * __this, const RuntimeMethod* method);
// System.String I18N.Common.Strings::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Strings_GetString_m84B4205ADF9BD4AB96836BE778BE485A0DDCF9A1 (String_t* ___tag0, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005 (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.Void I18N.CJK.DbcsEncoding/DbcsDecoder::.ctor(I18N.CJK.DbcsConvert)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbcsDecoder__ctor_mFF26DCA3EA24AA43C4CF5D8191E25D73AFDA41F4 (DbcsDecoder_tE3C4C6E22EB2E09258D84C6FF2FD7FBAD7BF7F8F * __this, DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * ___convert0, const RuntimeMethod* method);
// System.Void I18N.CJK.DbcsEncoding/DbcsDecoder::CheckRange(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbcsDecoder_CheckRange_mA1765EE1ED3A33C1A7FDA2E0C6E12B64ABBDBBCA (DbcsDecoder_tE3C4C6E22EB2E09258D84C6FF2FD7FBAD7BF7F8F * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method);
// I18N.CJK.JISConvert I18N.CJK.JISConvert::get_Convert()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848 * JISConvert_get_Convert_m2294F43F984013F908B15172EAB6EBABFA13C774 (const RuntimeMethod* method);
// System.Void I18N.CJK.DbcsEncoding/DbcsDecoder::CheckRange(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbcsDecoder_CheckRange_m7E0B5C58A934289C66DEDDB0C93B3B33E0F9F38C (DbcsDecoder_tE3C4C6E22EB2E09258D84C6FF2FD7FBAD7BF7F8F * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars3, int32_t ___charIndex4, const RuntimeMethod* method);
// System.Exception I18N.CJK.CP51932Decoder::Insufficient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * CP51932Decoder_Insufficient_mFCA10A6AA231A94C862BA6E466F5E809E965B3EC (CP51932Decoder_tC03EC4B854B4393E2A49FDD66AC4195645C9696F * __this, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void I18N.Common.MonoSafeEncoder::.ctor(I18N.Common.MonoSafeEncoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoSafeEncoder__ctor_mE2203C5488EEAE1D2D9D8E3F1FC21ECE168DAADC (MonoSafeEncoder_t0DF1BF26F417B4E71A75DD81C838421CD0DB7D52 * __this, MonoSafeEncoding_t0F0341C8A621EBF14ADEA3F5DC248BC26F7DDE83 * ___encoding0, const RuntimeMethod* method);
// System.Void I18N.Common.MonoSafeEncoder::HandleFallback(System.Char[],System.Int32&,System.Int32&,System.Byte[],System.Int32&,System.Int32&,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoSafeEncoder_HandleFallback_m5616797BE059754055D104BF351A4473D615C4C5 (MonoSafeEncoder_t0DF1BF26F417B4E71A75DD81C838421CD0DB7D52 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars0, int32_t* ___charIndex1, int32_t* ___charCount2, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes3, int32_t* ___byteIndex4, int32_t* ___byteCount5, RuntimeObject * ___state6, const RuntimeMethod* method);
// System.Void I18N.CJK.KoreanEncoding::.ctor(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KoreanEncoding__ctor_m5DAFC4E50A88F3B5486479614660AFEFFFADB0D1 (KoreanEncoding_t802D545D60E3844B7A431234B087FE2928F87391 * __this, int32_t ___codepage0, bool ___useUHC1, const RuntimeMethod* method);
// System.Void I18N.CJK.GB18030Encoding::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GB18030Encoding__ctor_m68BF70D37FE8B805524F8F1FE8258770640B265B (GB18030Encoding_t48649BF97C255015EB5811902CE20AA6D3B3FE57 * __this, const RuntimeMethod* method);
// System.Void I18N.Common.MonoSafeEncoding::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoSafeEncoding__ctor_mE4BC6943BA58B3A96D2EA100044BF295A470E83F (MonoSafeEncoding_t0F0341C8A621EBF14ADEA3F5DC248BC26F7DDE83 * __this, int32_t ___codePage0, const RuntimeMethod* method);
// System.Void I18N.Common.MonoSafeEncoding::HandleFallback(System.Text.EncoderFallbackBuffer&,System.Char[],System.Int32&,System.Int32&,System.Byte[],System.Int32&,System.Int32&,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoSafeEncoding_HandleFallback_mEA25FB4276523DC9F36C3C03F97F7682C0C31DDF (MonoSafeEncoding_t0F0341C8A621EBF14ADEA3F5DC248BC26F7DDE83 * __this, EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 ** ___buffer0, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars1, int32_t* ___charIndex2, int32_t* ___charCount3, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes4, int32_t* ___byteIndex5, int32_t* ___byteCount6, RuntimeObject * ___state7, const RuntimeMethod* method);
// System.Void I18N.CJK.CP932Decoder::.ctor(I18N.CJK.JISConvert)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP932Decoder__ctor_mBD955394B5CB18FDB6FB8772AE3AB3DE4EBF718D (CP932Decoder_t7FA16FF015C7A2CEA4DB579DEEFBB632B3182225 * __this, JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848 * ___convert0, const RuntimeMethod* method);
// System.Void I18N.Common.MonoEncodingDefaultEncoder::.ctor(System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoEncodingDefaultEncoder__ctor_mFB66B8F2114655EC5A2E0B2443B5A4F87C2B5126 (MonoEncodingDefaultEncoder_t4B58B3F3AFA8085CDE630E185C8572B72EEE8A90 * __this, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___encoding0, const RuntimeMethod* method);
// System.Void I18N.CJK.DbcsEncoding::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbcsEncoding__ctor_mCEC14C007554B842ADFCEC58E0F316C9531AD0B5 (DbcsEncoding_t97AEDFAC1F40C1EAB9DD5FD68BE7B377FB635ECE * __this, int32_t ___codePage0, const RuntimeMethod* method);
// System.Int32 I18N.CJK.CP936::GetBytesInternal(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP936_GetBytesInternal_mDF0DE6531B280526FD86895A20B0DFB95E190063 (CP936_tB81AF17959C1E8D5AE3E4CE146D89F1E295E534F * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars0, int32_t ___charIndex1, int32_t ___charCount2, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes3, int32_t ___byteIndex4, const RuntimeMethod* method);
// System.Void I18N.CJK.CP936Decoder::.ctor(I18N.CJK.DbcsConvert)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP936Decoder__ctor_mA490711D4E387D8EC60906A161461484E68049BE (CP936Decoder_t4E9A8F2DD551EFFA508441B10EDAD4200D32E120 * __this, DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * ___convert0, const RuntimeMethod* method);
// System.Void I18N.CJK.CP950/CP950Decoder::.ctor(I18N.CJK.DbcsConvert)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP950Decoder__ctor_mDBB57F0B5DA506060A9752A5B0F98BE4B28ACDEE (CP950Decoder_t6D8DBBAA197A2D5800980E193F5E09C61B092138 * __this, DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * ___convert0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90 (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void I18N.CJK.CodeTable::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodeTable__ctor_m05F6BC60339A17BD8A883304FB3D0B6D9431D2DA (CodeTable_t24F95BB4E7C0ACFD3C4E68F3A132A0270C05CA03 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Byte[] I18N.CJK.CodeTable::GetSection(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* CodeTable_GetSection_m575390C701E870B69912F6591BBF407FD35AC88C (CodeTable_t24F95BB4E7C0ACFD3C4E68F3A132A0270C05CA03 * __this, int32_t ___num0, const RuntimeMethod* method);
// System.Void I18N.CJK.DbcsConvert::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbcsConvert__ctor_m3A4BCB371E1D98A0D7BBEE2AB6B305A3D528C772 (DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * __this, String_t* ___fileName0, const RuntimeMethod* method);
// System.Void I18N.CJK.DbcsEncoding::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbcsEncoding__ctor_m102798630D97C8E241105DE95BDC0885BF7E7173 (DbcsEncoding_t97AEDFAC1F40C1EAB9DD5FD68BE7B377FB635ECE * __this, int32_t ___codePage0, int32_t ___windowsCodePage1, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void I18N.CJK.CP950::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP950__ctor_mC31215BAEEDD9FEB1DF2282F8E17B98C84F49118 (CP950_tC49816E378AA2453DD6F08701D7657C44E47FEDC * __this, const RuntimeMethod* method);
// System.Void I18N.CJK.CP51932::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP51932__ctor_mD0A6A28B396703C5ACFF23FE77C34E0097033A93 (CP51932_t1AF90767E1FC85D8A3F12D47E03205D61833C502 * __this, const RuntimeMethod* method);
// System.Void I18N.CJK.CP51949::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP51949__ctor_m25A8E288C93BDF4FFD60E25BFE609921A5F58C76 (CP51949_tF501078A4A22B0D292CB290076A4F207E1760B64 * __this, const RuntimeMethod* method);
// System.Void I18N.CJK.CP936::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP936__ctor_m53B4030D0303F4BF1C7D1DAE21DDCDCAB9327976 (CP936_tB81AF17959C1E8D5AE3E4CE146D89F1E295E534F * __this, const RuntimeMethod* method);
// System.Void I18N.CJK.CP50220::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP50220__ctor_mDC4B4AF84BBABB5C99990CB4E83E3166A61793B2 (CP50220_t31ABD0962AB7C3A08F57DAD16ABABEB8C6EEB4BD * __this, const RuntimeMethod* method);
// System.Void I18N.CJK.CP932::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP932__ctor_mF6EAF20EA953762EB68498458C370ABC7C5EF676 (CP932_t30A1C3786CBAC763AD15AA7146BB886F26F01596 * __this, const RuntimeMethod* method);
// System.Void I18N.CJK.CP949::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP949__ctor_m64E3AE7EAB0A16194B9EEFCECF8D96189C188413 (CP949_t6F6698BB1EE821BF679191F45FA5E32AED627F19 * __this, const RuntimeMethod* method);
// System.Int64 I18N.CJK.GB18030Source::FromGBX(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t GB18030Source_FromGBX_m2B43470C984D7B7EFA2F2B4FEEB82616CAEBC44E (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___start1, const RuntimeMethod* method);
// System.Boolean System.Char::IsSurrogate(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsSurrogate_mDE2EA47FEF5F4816C883C5FF7DA85364025B5CDE (Il2CppChar ___c0, const RuntimeMethod* method);
// System.Int64 I18N.CJK.GB18030Source::FromUCS(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t GB18030Source_FromUCS_mBC86622A6A7E470D0044A34801A526E758940258 (int32_t ___cp0, const RuntimeMethod* method);
// System.Int64 I18N.CJK.GB18030Source::FromUCSSurrogate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t GB18030Source_FromUCSSurrogate_m6FF91BBA759FC7091471313FDD695A9BFEF995E2 (int32_t ___cp0, const RuntimeMethod* method);
// System.Void I18N.CJK.GB18030Source::Unlinear(System.Byte[],System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GB18030Source_Unlinear_mE038EE5FD05C759F17B71D238291FCF8222FED66 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___start1, int64_t ___gbx2, const RuntimeMethod* method);
// System.Void I18N.CJK.GB18030Encoder::.ctor(I18N.Common.MonoSafeEncoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GB18030Encoder__ctor_m92309D16A98AA6B9E9B72D0A9AB666853B116BD0 (GB18030Encoder_t0A88113FFF8BAFE6F79A16678697B61C488AA971 * __this, MonoSafeEncoding_t0F0341C8A621EBF14ADEA3F5DC248BC26F7DDE83 * ___owner0, const RuntimeMethod* method);
// System.Void I18N.CJK.GB18030Decoder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GB18030Decoder__ctor_m3220E4F3D5301803A7D9B9824C051EFEBDBCB0D4 (GB18030Decoder_t24EE55D918A003E55F69C1DDEA153C6A189A72B9 * __this, const RuntimeMethod* method);
// System.Int64 I18N.CJK.GB18030Source::FromGBXRaw(System.Byte,System.Byte,System.Byte,System.Byte,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t GB18030Source_FromGBXRaw_m8AF7E2EC3A688EF593B8A44713CC5F29FF0CC62E (uint8_t ___b10, uint8_t ___b21, uint8_t ___b32, uint8_t ___b43, bool ___supp4, const RuntimeMethod* method);
// System.Void I18N.CJK.GB18030Source/GB18030Map::.ctor(System.Int32,System.Int32,System.Int64,System.Int64,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GB18030Map__ctor_m42B294C7DC4CF0F69CEAB68091553ED7FDEEE113 (GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 * __this, int32_t ___ustart0, int32_t ___uend1, int64_t ___gstart2, int64_t ___gend3, bool ___dummy4, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * Type_GetMethod_m2DDEF37DF33D28F579BA8E03F4376B67D91F0DEB (Type_t * __this, String_t* ___name0, int32_t ___bindingAttr1, const RuntimeMethod* method);
// System.Boolean System.Reflection.MethodInfo::op_Inequality(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodInfo_op_Inequality_mDE1DAA5D330E9C975AC6423FC2D06862637BE68D (MethodInfo_t * ___left0, MethodInfo_t * ___right1, const RuntimeMethod* method);
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3 (MethodBase_t * __this, RuntimeObject * ___obj0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___parameters1, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocHGlobal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_AllocHGlobal_mED1B623D229DB8FAB58D187E4E73D3DA2E8AE6EC (int32_t ___cb0, const RuntimeMethod* method);
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD (intptr_t ___value0, const RuntimeMethod* method);
// System.IntPtr System.IntPtr::op_Explicit(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mBD40223EE90BDDF40A24C0F321D3398DEA300495 (void* ___value0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void I18N.CJK.GB18030Source::Unlinear(System.Byte*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GB18030Source_Unlinear_m7955171E3C4047720D582F17EF7412FCD7997957 (uint8_t* ___bytes0, int64_t ___gbx1, const RuntimeMethod* method);
// System.Int32 I18N.CJK.GB18030Source::ToUcsRaw(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GB18030Source_ToUcsRaw_m6AA82C27AE64348504006215D6EBF6DF5DDC7E04 (int32_t ___idx0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void System.SystemException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemException__ctor_m65B6562BDBB8EF84A384B217BE96647C0BAC770A (SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Int64 I18N.CJK.GB18030Source::ToGbxRaw(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t GB18030Source_ToGbxRaw_mDDFAFA00009FA3DCF9BF7E5714C0129A726FE198 (int32_t ___idx0, const RuntimeMethod* method);
// System.Void System.Text.Decoder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decoder__ctor_m2EA154371203FAAE1CD0477C828E0B39B2091DF3 (Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * __this, const RuntimeMethod* method);
// System.Int32 I18N.CJK.ISO2022JPDecoder::ToChar(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ISO2022JPDecoder_ToChar_m4F85A5DB20D231D4470B7B63B5E037752496E03D (ISO2022JPDecoder_t1614BCC169A8897B2CD138F980FB728DB696B2CC * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 I18N.CJK.ISO2022JPEncoder::GetBytesInternal(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ISO2022JPEncoder_GetBytesInternal_mEC43FC6C78F367623434CDE57B60D1037048C5C2 (ISO2022JPEncoder_tB0BDAE1A1F936AB4C05A6AD1FDEFE4945EE29AA6 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars0, int32_t ___charIndex1, int32_t ___charCount2, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes3, int32_t ___byteIndex4, bool ___flush5, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Boolean I18N.CJK.ISO2022JPEncoder::IsShifted(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ISO2022JPEncoder_IsShifted_m67C4494F77A8E0B9D934DC17AC96C4293882095B (ISO2022JPEncoder_tB0BDAE1A1F936AB4C05A6AD1FDEFE4945EE29AA6 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, const RuntimeMethod* method);
// System.Void I18N.CJK.ISO2022JPEncoder::SetShifted(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISO2022JPEncoder_SetShifted_m7508E9E80582B5BD32FD5118042E756B100FD3E7 (ISO2022JPEncoder_tB0BDAE1A1F936AB4C05A6AD1FDEFE4945EE29AA6 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, bool ___state1, const RuntimeMethod* method);
// System.Void I18N.CJK.ISO2022JPEncoder::SwitchMode(System.Byte[],System.Int32&,System.Int32&,I18N.CJK.ISO2022JPMode&,I18N.CJK.ISO2022JPMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISO2022JPEncoder_SwitchMode_mC061C595999EB3847AA86F761E11549ED9B31F3C (ISO2022JPEncoder_tB0BDAE1A1F936AB4C05A6AD1FDEFE4945EE29AA6 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t* ___byteIndex1, int32_t* ___byteCount2, int32_t* ___cur3, int32_t ___next4, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F (RuntimeArray * ___array0, RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  ___fldHandle1, const RuntimeMethod* method);
// System.Void I18N.CJK.ISO2022JPEncoder::.ctor(I18N.Common.MonoSafeEncoding,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISO2022JPEncoder__ctor_m073DCB645A4884B69F76CA85B0E822305AECB7DE (ISO2022JPEncoder_tB0BDAE1A1F936AB4C05A6AD1FDEFE4945EE29AA6 * __this, MonoSafeEncoding_t0F0341C8A621EBF14ADEA3F5DC248BC26F7DDE83 * ___owner0, bool ___allow1ByteKana1, bool ___allowShiftIO2, const RuntimeMethod* method);
// System.Void I18N.CJK.ISO2022JPDecoder::.ctor(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISO2022JPDecoder__ctor_m06543AB01B9F9E76ED987464319AB8C8750174B9 (ISO2022JPDecoder_t1614BCC169A8897B2CD138F980FB728DB696B2CC * __this, bool ___allow1ByteKana0, bool ___allowShiftIO1, const RuntimeMethod* method);
// System.Void I18N.CJK.CodeTable::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodeTable_Dispose_m5E9943D7B65098A6907576DC0E0E6E2C0CEF7C52 (CodeTable_t24F95BB4E7C0ACFD3C4E68F3A132A0270C05CA03 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void I18N.CJK.JISConvert::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JISConvert__ctor_m6C21F3382EB70847EF1C17C2D2D59AC33F691967 (JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void I18N.CJK.KoreanEncoding/KoreanDecoder::.ctor(I18N.CJK.DbcsConvert,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KoreanDecoder__ctor_mC22BE343B7E00518D890CFD31E7EA4CA03798042 (KoreanDecoder_t7A190670048C88144494EB3E16C5E35F7601E959 * __this, DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * ___convert0, bool ___useUHC1, const RuntimeMethod* method);
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
// System.Void I18N.CJK.CP50220::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP50220__ctor_mDC4B4AF84BBABB5C99990CB4E83E3166A61793B2 (CP50220_t31ABD0962AB7C3A08F57DAD16ABABEB8C6EEB4BD * __this, const RuntimeMethod* method)
{
	{
		ISO2022JPEncoding__ctor_m17D09D6D0284611A8A37CF415816EFBA202DF7EC(__this, ((int32_t)50220), (bool)0, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.String I18N.CJK.CP50220::get_EncodingName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CP50220_get_EncodingName_m0A2E89DAFB6BFA92105F3C35151A36693AD804A9 (CP50220_t31ABD0962AB7C3A08F57DAD16ABABEB8C6EEB4BD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2D3FF2FE923BEF204F5539A8AB3FD5EEA81ADFF);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralA2D3FF2FE923BEF204F5539A8AB3FD5EEA81ADFF;
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
// System.Void I18N.CJK.CP50221::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP50221__ctor_m198D26C343D215FBCB0F4056F15F7EF93365F586 (CP50221_tE1FE919ACD943034E2D012D74B673D96A67A2361 * __this, const RuntimeMethod* method)
{
	{
		ISO2022JPEncoding__ctor_m17D09D6D0284611A8A37CF415816EFBA202DF7EC(__this, ((int32_t)50221), (bool)1, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.String I18N.CJK.CP50221::get_EncodingName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CP50221_get_EncodingName_m4363FB30419A82CD96B0F09929066D3C882996A5 (CP50221_tE1FE919ACD943034E2D012D74B673D96A67A2361 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB68F8F2A0E7A2F44AAEAFA9A4A9E57F16C4D7DE);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralBB68F8F2A0E7A2F44AAEAFA9A4A9E57F16C4D7DE;
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
// System.Void I18N.CJK.CP50222::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP50222__ctor_m82E5E6C6B791D5AA2367142C132A92E5C342C537 (CP50222_t80727A61FBE9B90EA8126A9C12BA89958BF753BB * __this, const RuntimeMethod* method)
{
	{
		ISO2022JPEncoding__ctor_m17D09D6D0284611A8A37CF415816EFBA202DF7EC(__this, ((int32_t)50222), (bool)1, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.String I18N.CJK.CP50222::get_EncodingName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CP50222_get_EncodingName_mF44F02660930422B8FCB355C507B3D670B4FAB0F (CP50222_t80727A61FBE9B90EA8126A9C12BA89958BF753BB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3376C44466E919A70A02AA3ACB7791D292C161BE);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral3376C44466E919A70A02AA3ACB7791D292C161BE;
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
// System.Void I18N.CJK.CP51932::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP51932__ctor_mD0A6A28B396703C5ACFF23FE77C34E0097033A93 (CP51932_t1AF90767E1FC85D8A3F12D47E03205D61833C502 * __this, const RuntimeMethod* method)
{
	{
		MonoSafeEncoding__ctor_m22024C3A28920B9112728E9CF9CF218621D880E5(__this, ((int32_t)51932), ((int32_t)932), /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 I18N.CJK.CP51932::GetByteCount(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP51932_GetByteCount_mF2BE755212D8391B28F86F724D86F0FC12272F53 (CP51932_t1AF90767E1FC85D8A3F12D47E03205D61833C502 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CP51932Encoder_t2D109B1562B6FB19940754F06F0C87C022FC7312_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CP51932Encoder_t2D109B1562B6FB19940754F06F0C87C022FC7312 * L_0 = (CP51932Encoder_t2D109B1562B6FB19940754F06F0C87C022FC7312 *)il2cpp_codegen_object_new(CP51932Encoder_t2D109B1562B6FB19940754F06F0C87C022FC7312_il2cpp_TypeInfo_var);
		CP51932Encoder__ctor_m600876953D7C9E4EA8F35A7D26D3B582D0C47DD0(L_0, __this, /*hidden argument*/NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = ___chars0;
		int32_t L_2 = ___index1;
		int32_t L_3 = ___length2;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = VirtFuncInvoker4< int32_t, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, int32_t, int32_t, bool >::Invoke(5 /* System.Int32 System.Text.Encoder::GetByteCount(System.Char[],System.Int32,System.Int32,System.Boolean) */, L_0, L_1, L_2, L_3, (bool)1);
		return L_4;
	}
}
// System.Int32 I18N.CJK.CP51932::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP51932_GetBytes_m4EE37DE11AA330B538D185522A25E5652E68890C (CP51932_t1AF90767E1FC85D8A3F12D47E03205D61833C502 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars0, int32_t ___charIndex1, int32_t ___charCount2, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes3, int32_t ___byteIndex4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CP51932Encoder_t2D109B1562B6FB19940754F06F0C87C022FC7312_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CP51932Encoder_t2D109B1562B6FB19940754F06F0C87C022FC7312 * L_0 = (CP51932Encoder_t2D109B1562B6FB19940754F06F0C87C022FC7312 *)il2cpp_codegen_object_new(CP51932Encoder_t2D109B1562B6FB19940754F06F0C87C022FC7312_il2cpp_TypeInfo_var);
		CP51932Encoder__ctor_m600876953D7C9E4EA8F35A7D26D3B582D0C47DD0(L_0, __this, /*hidden argument*/NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = ___chars0;
		int32_t L_2 = ___charIndex1;
		int32_t L_3 = ___charCount2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___bytes3;
		int32_t L_5 = ___byteIndex4;
		NullCheck(L_0);
		int32_t L_6;
		L_6 = VirtFuncInvoker6< int32_t, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, int32_t, int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, bool >::Invoke(7 /* System.Int32 System.Text.Encoder::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Boolean) */, L_0, L_1, L_2, L_3, L_4, L_5, (bool)1);
		return L_6;
	}
}
// System.Int32 I18N.CJK.CP51932::GetCharCount(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP51932_GetCharCount_m9F15B69F95A3578F6B99A16F9836CFB887EA0ED8 (CP51932_t1AF90767E1FC85D8A3F12D47E03205D61833C502 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CP51932Decoder_tC03EC4B854B4393E2A49FDD66AC4195645C9696F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CP51932Decoder_tC03EC4B854B4393E2A49FDD66AC4195645C9696F * L_0 = (CP51932Decoder_tC03EC4B854B4393E2A49FDD66AC4195645C9696F *)il2cpp_codegen_object_new(CP51932Decoder_tC03EC4B854B4393E2A49FDD66AC4195645C9696F_il2cpp_TypeInfo_var);
		CP51932Decoder__ctor_mCD7EBA0866E141275F6F86C7EA0910BCFDB33517(L_0, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___bytes0;
		int32_t L_2 = ___index1;
		int32_t L_3 = ___count2;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = VirtFuncInvoker4< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, bool >::Invoke(6 /* System.Int32 System.Text.Decoder::GetCharCount(System.Byte[],System.Int32,System.Int32,System.Boolean) */, L_0, L_1, L_2, L_3, (bool)1);
		return L_4;
	}
}
// System.Int32 I18N.CJK.CP51932::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP51932_GetChars_m7C3C48F2C11FF0A572A6F2BC29ECE12865D56B6A (CP51932_t1AF90767E1FC85D8A3F12D47E03205D61833C502 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars3, int32_t ___charIndex4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CP51932Decoder_tC03EC4B854B4393E2A49FDD66AC4195645C9696F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CP51932Decoder_tC03EC4B854B4393E2A49FDD66AC4195645C9696F * L_0 = (CP51932Decoder_tC03EC4B854B4393E2A49FDD66AC4195645C9696F *)il2cpp_codegen_object_new(CP51932Decoder_tC03EC4B854B4393E2A49FDD66AC4195645C9696F_il2cpp_TypeInfo_var);
		CP51932Decoder__ctor_mCD7EBA0866E141275F6F86C7EA0910BCFDB33517(L_0, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___bytes0;
		int32_t L_2 = ___byteIndex1;
		int32_t L_3 = ___byteCount2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4 = ___chars3;
		int32_t L_5 = ___charIndex4;
		NullCheck(L_0);
		int32_t L_6;
		L_6 = VirtFuncInvoker6< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, int32_t, bool >::Invoke(9 /* System.Int32 System.Text.Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Boolean) */, L_0, L_1, L_2, L_3, L_4, L_5, (bool)1);
		return L_6;
	}
}
// System.Int32 I18N.CJK.CP51932::GetMaxByteCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP51932_GetMaxByteCount_mDEE60866680934EDB3C88DFC6E2B11B075ED2982 (CP51932_t1AF90767E1FC85D8A3F12D47E03205D61833C502 * __this, int32_t ___charCount0, const RuntimeMethod* method)
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CP51932_GetMaxByteCount_mDEE60866680934EDB3C88DFC6E2B11B075ED2982_RuntimeMethod_var)));
	}

IL_0019:
	{
		int32_t L_3 = ___charCount0;
		return ((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)3));
	}
}
// System.Int32 I18N.CJK.CP51932::GetMaxCharCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP51932_GetMaxCharCount_m72D0162B5F72B9D85A80682A227A04292DFAEDA7 (CP51932_t1AF90767E1FC85D8A3F12D47E03205D61833C502 * __this, int32_t ___byteCount0, const RuntimeMethod* method)
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CP51932_GetMaxCharCount_m72D0162B5F72B9D85A80682A227A04292DFAEDA7_RuntimeMethod_var)));
	}

IL_0019:
	{
		int32_t L_3 = ___byteCount0;
		return L_3;
	}
}
// System.Text.Encoder I18N.CJK.CP51932::GetEncoder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * CP51932_GetEncoder_m5DE425541590FEB48534A03641991DDB8738DC8D (CP51932_t1AF90767E1FC85D8A3F12D47E03205D61833C502 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CP51932Encoder_t2D109B1562B6FB19940754F06F0C87C022FC7312_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CP51932Encoder_t2D109B1562B6FB19940754F06F0C87C022FC7312 * L_0 = (CP51932Encoder_t2D109B1562B6FB19940754F06F0C87C022FC7312 *)il2cpp_codegen_object_new(CP51932Encoder_t2D109B1562B6FB19940754F06F0C87C022FC7312_il2cpp_TypeInfo_var);
		CP51932Encoder__ctor_m600876953D7C9E4EA8F35A7D26D3B582D0C47DD0(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Text.Decoder I18N.CJK.CP51932::GetDecoder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * CP51932_GetDecoder_mBC66D68D391C0F5433C806E1BD2F50636C85BA2F (CP51932_t1AF90767E1FC85D8A3F12D47E03205D61833C502 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CP51932Decoder_tC03EC4B854B4393E2A49FDD66AC4195645C9696F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CP51932Decoder_tC03EC4B854B4393E2A49FDD66AC4195645C9696F * L_0 = (CP51932Decoder_tC03EC4B854B4393E2A49FDD66AC4195645C9696F *)il2cpp_codegen_object_new(CP51932Decoder_tC03EC4B854B4393E2A49FDD66AC4195645C9696F_il2cpp_TypeInfo_var);
		CP51932Decoder__ctor_mCD7EBA0866E141275F6F86C7EA0910BCFDB33517(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String I18N.CJK.CP51932::get_BodyName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CP51932_get_BodyName_m92F6AE37D16886CDF86D38F93B0551EED7A36164 (CP51932_t1AF90767E1FC85D8A3F12D47E03205D61833C502 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral247A870FC548A3D4C43DA0A9D154098CEE7D7CED);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral247A870FC548A3D4C43DA0A9D154098CEE7D7CED;
	}
}
// System.String I18N.CJK.CP51932::get_EncodingName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CP51932_get_EncodingName_m629DA0EB93CB5993C20DE64D73C66F2ACDB67939 (CP51932_t1AF90767E1FC85D8A3F12D47E03205D61833C502 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46D49ED9792AFC72CCEBD7E6D237722C37410FBF);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral46D49ED9792AFC72CCEBD7E6D237722C37410FBF;
	}
}
// System.String I18N.CJK.CP51932::get_HeaderName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CP51932_get_HeaderName_m2D793CC8DA1CBBCBF8286DFD5E87708BBFA1EF0E (CP51932_t1AF90767E1FC85D8A3F12D47E03205D61833C502 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral247A870FC548A3D4C43DA0A9D154098CEE7D7CED);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral247A870FC548A3D4C43DA0A9D154098CEE7D7CED;
	}
}
// System.Boolean I18N.CJK.CP51932::get_IsBrowserDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CP51932_get_IsBrowserDisplay_m8ED54E930CBF8C14CE262ACD6A3382FC06FE6957 (CP51932_t1AF90767E1FC85D8A3F12D47E03205D61833C502 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Boolean I18N.CJK.CP51932::get_IsBrowserSave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CP51932_get_IsBrowserSave_mE2EADD239CC9E275F53523F0A53E7552AD3221C2 (CP51932_t1AF90767E1FC85D8A3F12D47E03205D61833C502 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Boolean I18N.CJK.CP51932::get_IsMailNewsDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CP51932_get_IsMailNewsDisplay_mF4AE9C602A6E8B8EB24F40EDF4C3EA08D4B8AA16 (CP51932_t1AF90767E1FC85D8A3F12D47E03205D61833C502 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Boolean I18N.CJK.CP51932::get_IsMailNewsSave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CP51932_get_IsMailNewsSave_m1C17FA0374FAB185F08D31481070E3260B107D1B (CP51932_t1AF90767E1FC85D8A3F12D47E03205D61833C502 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.String I18N.CJK.CP51932::get_WebName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CP51932_get_WebName_m6B240BA9A3EC68212618C13059014F67FE88DCE9 (CP51932_t1AF90767E1FC85D8A3F12D47E03205D61833C502 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral247A870FC548A3D4C43DA0A9D154098CEE7D7CED);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral247A870FC548A3D4C43DA0A9D154098CEE7D7CED;
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
// System.Void I18N.CJK.CP51932Decoder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP51932Decoder__ctor_mCD7EBA0866E141275F6F86C7EA0910BCFDB33517 (CP51932Decoder_tC03EC4B854B4393E2A49FDD66AC4195645C9696F * __this, const RuntimeMethod* method)
{
	{
		DbcsDecoder__ctor_mFF26DCA3EA24AA43C4CF5D8191E25D73AFDA41F4(__this, (DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 I18N.CJK.CP51932Decoder::GetCharCount(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP51932Decoder_GetCharCount_m9362F8F9E84D0016ABBDB16AF586A7E4AE335EF0 (CP51932Decoder_tC03EC4B854B4393E2A49FDD66AC4195645C9696F * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___count2;
		int32_t L_3;
		L_3 = VirtFuncInvoker4< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, bool >::Invoke(6 /* System.Int32 System.Text.Decoder::GetCharCount(System.Byte[],System.Int32,System.Int32,System.Boolean) */, __this, L_0, L_1, L_2, (bool)0);
		return L_3;
	}
}
// System.Int32 I18N.CJK.CP51932Decoder::GetCharCount(System.Byte[],System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP51932Decoder_GetCharCount_mA3111DA797390A00C17A073E96CD881747F62DB7 (CP51932Decoder_tC03EC4B854B4393E2A49FDD66AC4195645C9696F * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___index1, int32_t ___count2, bool ___refresh3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___count2;
		DbcsDecoder_CheckRange_mA1765EE1ED3A33C1A7FDA2E0C6E12B64ABBDBBCA(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848_il2cpp_TypeInfo_var);
		JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848 * L_3;
		L_3 = JISConvert_get_Convert_m2294F43F984013F908B15172EAB6EBABFA13C774(/*hidden argument*/NULL);
		NullCheck(L_3);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = L_3->get_jisx0208ToUnicode_5();
		V_1 = L_4;
		JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848 * L_5;
		L_5 = JISConvert_get_Convert_m2294F43F984013F908B15172EAB6EBABFA13C774(/*hidden argument*/NULL);
		NullCheck(L_5);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = L_5->get_jisx0212ToUnicode_6();
		V_2 = L_6;
		V_3 = 0;
		V_4 = 0;
		int32_t L_7 = __this->get_last_count_3();
		V_5 = L_7;
		goto IL_0139;
	}

IL_0033:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = ___bytes0;
		int32_t L_9 = ___index1;
		int32_t L_10 = L_9;
		___index1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
		NullCheck(L_8);
		int32_t L_11 = L_10;
		uint8_t L_12 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_4 = L_12;
		int32_t L_13 = ___count2;
		___count2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1));
		int32_t L_14 = V_5;
		if (L_14)
		{
			goto IL_009d;
		}
	}
	{
		int32_t L_15 = V_4;
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)143)))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_16 = V_4;
		V_5 = L_16;
		goto IL_0139;
	}

IL_0058:
	{
		int32_t L_17 = V_4;
		if ((((int32_t)L_17) > ((int32_t)((int32_t)127))))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_18 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
		goto IL_0139;
	}

IL_0067:
	{
		int32_t L_19 = V_4;
		if ((!(((uint32_t)L_19) == ((uint32_t)((int32_t)142)))))
		{
			goto IL_0079;
		}
	}
	{
		int32_t L_20 = V_4;
		V_5 = L_20;
		goto IL_0139;
	}

IL_0079:
	{
		int32_t L_21 = V_4;
		if ((((int32_t)L_21) < ((int32_t)((int32_t)161))))
		{
			goto IL_0094;
		}
	}
	{
		int32_t L_22 = V_4;
		if ((((int32_t)L_22) > ((int32_t)((int32_t)254))))
		{
			goto IL_0094;
		}
	}
	{
		int32_t L_23 = V_4;
		V_5 = L_23;
		goto IL_0139;
	}

IL_0094:
	{
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
		goto IL_0139;
	}

IL_009d:
	{
		int32_t L_25 = V_5;
		if ((!(((uint32_t)L_25) == ((uint32_t)((int32_t)142)))))
		{
			goto IL_00c7;
		}
	}
	{
		int32_t L_26 = V_4;
		if ((((int32_t)L_26) < ((int32_t)((int32_t)161))))
		{
			goto IL_00be;
		}
	}
	{
		int32_t L_27 = V_4;
		if ((((int32_t)L_27) > ((int32_t)((int32_t)223))))
		{
			goto IL_00be;
		}
	}
	{
		int32_t L_28 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
		goto IL_00c2;
	}

IL_00be:
	{
		int32_t L_29 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
	}

IL_00c2:
	{
		V_5 = 0;
		goto IL_0139;
	}

IL_00c7:
	{
		int32_t L_30 = V_5;
		if ((!(((uint32_t)L_30) == ((uint32_t)((int32_t)143)))))
		{
			goto IL_00d6;
		}
	}
	{
		int32_t L_31 = V_4;
		V_5 = L_31;
		goto IL_0139;
	}

IL_00d6:
	{
		int32_t L_32 = V_5;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_32, (int32_t)((int32_t)161))), (int32_t)((int32_t)94)));
		V_5 = 0;
		int32_t L_33 = V_4;
		if ((((int32_t)L_33) < ((int32_t)((int32_t)161))))
		{
			goto IL_0104;
		}
	}
	{
		int32_t L_34 = V_4;
		if ((((int32_t)L_34) > ((int32_t)((int32_t)254))))
		{
			goto IL_0104;
		}
	}
	{
		int32_t L_35 = V_0;
		int32_t L_36 = V_4;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_36, (int32_t)((int32_t)161)))));
		goto IL_010d;
	}

IL_0104:
	{
		V_5 = 0;
		int32_t L_37 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
		goto IL_0139;
	}

IL_010d:
	{
		int32_t L_38 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_38, (int32_t)2));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_39 = V_1;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		uint8_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_43 = V_1;
		int32_t L_44 = V_0;
		NullCheck(L_43);
		int32_t L_45 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
		uint8_t L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_0 = ((int32_t)((int32_t)L_42|(int32_t)((int32_t)((int32_t)L_46<<(int32_t)8))));
		int32_t L_47 = V_0;
		if (L_47)
		{
			goto IL_012c;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_48 = V_2;
		int32_t L_49 = V_0;
		NullCheck(L_48);
		int32_t L_50 = L_49;
		uint8_t L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_52 = V_2;
		int32_t L_53 = V_0;
		NullCheck(L_52);
		int32_t L_54 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)1));
		uint8_t L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		V_0 = ((int32_t)((int32_t)L_51|(int32_t)((int32_t)((int32_t)L_55<<(int32_t)8))));
	}

IL_012c:
	{
		int32_t L_56 = V_0;
		if (!L_56)
		{
			goto IL_0135;
		}
	}
	{
		int32_t L_57 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)1));
		goto IL_0139;
	}

IL_0135:
	{
		int32_t L_58 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)1));
	}

IL_0139:
	{
		int32_t L_59 = ___count2;
		if ((((int32_t)L_59) > ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		bool L_60 = ___refresh3;
		if (!L_60)
		{
			goto IL_014e;
		}
	}
	{
		int32_t L_61 = V_5;
		if (!L_61)
		{
			goto IL_014e;
		}
	}
	{
		int32_t L_62 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)1));
		goto IL_0156;
	}

IL_014e:
	{
		int32_t L_63 = V_5;
		__this->set_last_count_3(L_63);
	}

IL_0156:
	{
		int32_t L_64 = V_3;
		return L_64;
	}
}
// System.Int32 I18N.CJK.CP51932Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP51932Decoder_GetChars_m88B3D0F567E78DE7E94A447BBFF29898A0F8C731 (CP51932Decoder_tC03EC4B854B4393E2A49FDD66AC4195645C9696F * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars3, int32_t ___charIndex4, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		int32_t L_1 = ___byteIndex1;
		int32_t L_2 = ___byteCount2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = ___chars3;
		int32_t L_4 = ___charIndex4;
		int32_t L_5;
		L_5 = VirtFuncInvoker6< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, int32_t, bool >::Invoke(9 /* System.Int32 System.Text.Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Boolean) */, __this, L_0, L_1, L_2, L_3, L_4, (bool)0);
		return L_5;
	}
}
// System.Int32 I18N.CJK.CP51932Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP51932Decoder_GetChars_mA872441B6B21D566930093F4C087420701424399 (CP51932Decoder_tC03EC4B854B4393E2A49FDD66AC4195645C9696F * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars3, int32_t ___charIndex4, bool ___refresh5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_5 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_6 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		int32_t L_1 = ___byteIndex1;
		int32_t L_2 = ___byteCount2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = ___chars3;
		int32_t L_4 = ___charIndex4;
		DbcsDecoder_CheckRange_m7E0B5C58A934289C66DEDDB0C93B3B33E0F9F38C(__this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		int32_t L_5 = ___charIndex4;
		V_0 = L_5;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_6 = ___chars3;
		NullCheck(L_6);
		V_1 = ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)));
		int32_t L_7 = __this->get_last_bytes_4();
		V_4 = L_7;
		IL2CPP_RUNTIME_CLASS_INIT(JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848_il2cpp_TypeInfo_var);
		JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848 * L_8;
		L_8 = JISConvert_get_Convert_m2294F43F984013F908B15172EAB6EBABFA13C774(/*hidden argument*/NULL);
		NullCheck(L_8);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = L_8->get_jisx0208ToUnicode_5();
		V_5 = L_9;
		JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848 * L_10;
		L_10 = JISConvert_get_Convert_m2294F43F984013F908B15172EAB6EBABFA13C774(/*hidden argument*/NULL);
		NullCheck(L_10);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = L_10->get_jisx0212ToUnicode_6();
		V_6 = L_11;
		goto IL_01c0;
	}

IL_003a:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = ___bytes0;
		int32_t L_13 = ___byteIndex1;
		int32_t L_14 = L_13;
		___byteIndex1 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
		NullCheck(L_12);
		int32_t L_15 = L_14;
		uint8_t L_16 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_2 = L_16;
		int32_t L_17 = ___byteCount2;
		___byteCount2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)1));
		int32_t L_18 = V_4;
		if (L_18)
		{
			goto IL_00c0;
		}
	}
	{
		int32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) == ((uint32_t)((int32_t)143)))))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_20 = V_2;
		V_4 = L_20;
		goto IL_01c0;
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		if ((((int32_t)L_21) > ((int32_t)((int32_t)127))))
		{
			goto IL_007b;
		}
	}
	{
		int32_t L_22 = V_0;
		int32_t L_23 = V_1;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_006c;
		}
	}
	{
		Exception_t * L_24;
		L_24 = CP51932Decoder_Insufficient_mFCA10A6AA231A94C862BA6E466F5E809E965B3EC(__this, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CP51932Decoder_GetChars_mA872441B6B21D566930093F4C087420701424399_RuntimeMethod_var)));
	}

IL_006c:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_25 = ___chars3;
		int32_t L_26 = V_0;
		int32_t L_27 = L_26;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
		int32_t L_28 = V_2;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (Il2CppChar)((int32_t)((uint16_t)L_28)));
		goto IL_01c0;
	}

IL_007b:
	{
		int32_t L_29 = V_2;
		if ((!(((uint32_t)L_29) == ((uint32_t)((int32_t)142)))))
		{
			goto IL_008b;
		}
	}
	{
		int32_t L_30 = V_2;
		V_4 = L_30;
		goto IL_01c0;
	}

IL_008b:
	{
		int32_t L_31 = V_2;
		if ((((int32_t)L_31) < ((int32_t)((int32_t)161))))
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_32 = V_2;
		if ((((int32_t)L_32) > ((int32_t)((int32_t)254))))
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_33 = V_2;
		V_4 = L_33;
		goto IL_01c0;
	}

IL_00a3:
	{
		int32_t L_34 = V_0;
		int32_t L_35 = V_1;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_00ae;
		}
	}
	{
		Exception_t * L_36;
		L_36 = CP51932Decoder_Insufficient_mFCA10A6AA231A94C862BA6E466F5E809E965B3EC(__this, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_36, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CP51932Decoder_GetChars_mA872441B6B21D566930093F4C087420701424399_RuntimeMethod_var)));
	}

IL_00ae:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_37 = ___chars3;
		int32_t L_38 = V_0;
		int32_t L_39 = L_38;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_39), (Il2CppChar)((int32_t)12539));
		goto IL_01c0;
	}

IL_00c0:
	{
		int32_t L_40 = V_4;
		if ((!(((uint32_t)L_40) == ((uint32_t)((int32_t)142)))))
		{
			goto IL_011d;
		}
	}
	{
		int32_t L_41 = V_2;
		if ((((int32_t)L_41) < ((int32_t)((int32_t)161))))
		{
			goto IL_00fd;
		}
	}
	{
		int32_t L_42 = V_2;
		if ((((int32_t)L_42) > ((int32_t)((int32_t)223))))
		{
			goto IL_00fd;
		}
	}
	{
		int32_t L_43 = V_2;
		int32_t L_44 = V_4;
		V_3 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_43, (int32_t)((int32_t)64)))|(int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)((int32_t)113)))<<(int32_t)8))));
		int32_t L_45 = V_0;
		int32_t L_46 = V_1;
		if ((((int32_t)L_45) < ((int32_t)L_46)))
		{
			goto IL_00f1;
		}
	}
	{
		Exception_t * L_47;
		L_47 = CP51932Decoder_Insufficient_mFCA10A6AA231A94C862BA6E466F5E809E965B3EC(__this, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CP51932Decoder_GetChars_mA872441B6B21D566930093F4C087420701424399_RuntimeMethod_var)));
	}

IL_00f1:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_48 = ___chars3;
		int32_t L_49 = V_0;
		int32_t L_50 = L_49;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1));
		int32_t L_51 = V_3;
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(L_50), (Il2CppChar)((int32_t)((uint16_t)L_51)));
		goto IL_0115;
	}

IL_00fd:
	{
		int32_t L_52 = V_0;
		int32_t L_53 = V_1;
		if ((((int32_t)L_52) < ((int32_t)L_53)))
		{
			goto IL_0108;
		}
	}
	{
		Exception_t * L_54;
		L_54 = CP51932Decoder_Insufficient_mFCA10A6AA231A94C862BA6E466F5E809E965B3EC(__this, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_54, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CP51932Decoder_GetChars_mA872441B6B21D566930093F4C087420701424399_RuntimeMethod_var)));
	}

IL_0108:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_55 = ___chars3;
		int32_t L_56 = V_0;
		int32_t L_57 = L_56;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)1));
		NullCheck(L_55);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(L_57), (Il2CppChar)((int32_t)12539));
	}

IL_0115:
	{
		V_4 = 0;
		goto IL_01c0;
	}

IL_011d:
	{
		int32_t L_58 = V_4;
		if ((!(((uint32_t)L_58) == ((uint32_t)((int32_t)143)))))
		{
			goto IL_012e;
		}
	}
	{
		int32_t L_59 = V_2;
		V_4 = L_59;
		goto IL_01c0;
	}

IL_012e:
	{
		int32_t L_60 = V_4;
		V_3 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_60, (int32_t)((int32_t)161))), (int32_t)((int32_t)94)));
		V_4 = 0;
		int32_t L_61 = V_2;
		if ((((int32_t)L_61) < ((int32_t)((int32_t)161))))
		{
			goto IL_0159;
		}
	}
	{
		int32_t L_62 = V_2;
		if ((((int32_t)L_62) > ((int32_t)((int32_t)254))))
		{
			goto IL_0159;
		}
	}
	{
		int32_t L_63 = V_3;
		int32_t L_64 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_64, (int32_t)((int32_t)161)))));
		goto IL_0176;
	}

IL_0159:
	{
		V_4 = 0;
		int32_t L_65 = V_0;
		int32_t L_66 = V_1;
		if ((((int32_t)L_65) < ((int32_t)L_66)))
		{
			goto IL_0167;
		}
	}
	{
		Exception_t * L_67;
		L_67 = CP51932Decoder_Insufficient_mFCA10A6AA231A94C862BA6E466F5E809E965B3EC(__this, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_67, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CP51932Decoder_GetChars_mA872441B6B21D566930093F4C087420701424399_RuntimeMethod_var)));
	}

IL_0167:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_68 = ___chars3;
		int32_t L_69 = V_0;
		int32_t L_70 = L_69;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)1));
		NullCheck(L_68);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(L_70), (Il2CppChar)((int32_t)12539));
		goto IL_01c0;
	}

IL_0176:
	{
		int32_t L_71 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_71, (int32_t)2));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_72 = V_5;
		int32_t L_73 = V_3;
		NullCheck(L_72);
		int32_t L_74 = L_73;
		uint8_t L_75 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_76 = V_5;
		int32_t L_77 = V_3;
		NullCheck(L_76);
		int32_t L_78 = ((int32_t)il2cpp_codegen_add((int32_t)L_77, (int32_t)1));
		uint8_t L_79 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		V_3 = ((int32_t)((int32_t)L_75|(int32_t)((int32_t)((int32_t)L_79<<(int32_t)8))));
		int32_t L_80 = V_3;
		if (L_80)
		{
			goto IL_0199;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_81 = V_6;
		int32_t L_82 = V_3;
		NullCheck(L_81);
		int32_t L_83 = L_82;
		uint8_t L_84 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_85 = V_6;
		int32_t L_86 = V_3;
		NullCheck(L_85);
		int32_t L_87 = ((int32_t)il2cpp_codegen_add((int32_t)L_86, (int32_t)1));
		uint8_t L_88 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		V_3 = ((int32_t)((int32_t)L_84|(int32_t)((int32_t)((int32_t)L_88<<(int32_t)8))));
	}

IL_0199:
	{
		int32_t L_89 = V_0;
		int32_t L_90 = V_1;
		if ((((int32_t)L_89) < ((int32_t)L_90)))
		{
			goto IL_01a4;
		}
	}
	{
		Exception_t * L_91;
		L_91 = CP51932Decoder_Insufficient_mFCA10A6AA231A94C862BA6E466F5E809E965B3EC(__this, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_91, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CP51932Decoder_GetChars_mA872441B6B21D566930093F4C087420701424399_RuntimeMethod_var)));
	}

IL_01a4:
	{
		int32_t L_92 = V_3;
		if (!L_92)
		{
			goto IL_01b3;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_93 = ___chars3;
		int32_t L_94 = V_0;
		int32_t L_95 = L_94;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_95, (int32_t)1));
		int32_t L_96 = V_3;
		NullCheck(L_93);
		(L_93)->SetAt(static_cast<il2cpp_array_size_t>(L_95), (Il2CppChar)((int32_t)((uint16_t)L_96)));
		goto IL_01c0;
	}

IL_01b3:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_97 = ___chars3;
		int32_t L_98 = V_0;
		int32_t L_99 = L_98;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_99, (int32_t)1));
		NullCheck(L_97);
		(L_97)->SetAt(static_cast<il2cpp_array_size_t>(L_99), (Il2CppChar)((int32_t)12539));
	}

IL_01c0:
	{
		int32_t L_100 = ___byteCount2;
		if ((((int32_t)L_100) > ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		bool L_101 = ___refresh5;
		if (!L_101)
		{
			goto IL_01e9;
		}
	}
	{
		int32_t L_102 = V_4;
		if (!L_102)
		{
			goto IL_01e9;
		}
	}
	{
		int32_t L_103 = V_0;
		int32_t L_104 = V_1;
		if ((((int32_t)L_103) < ((int32_t)L_104)))
		{
			goto IL_01da;
		}
	}
	{
		Exception_t * L_105;
		L_105 = CP51932Decoder_Insufficient_mFCA10A6AA231A94C862BA6E466F5E809E965B3EC(__this, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_105, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CP51932Decoder_GetChars_mA872441B6B21D566930093F4C087420701424399_RuntimeMethod_var)));
	}

IL_01da:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_106 = ___chars3;
		int32_t L_107 = V_0;
		int32_t L_108 = L_107;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_108, (int32_t)1));
		NullCheck(L_106);
		(L_106)->SetAt(static_cast<il2cpp_array_size_t>(L_108), (Il2CppChar)((int32_t)12539));
		goto IL_01f1;
	}

IL_01e9:
	{
		int32_t L_109 = V_4;
		__this->set_last_bytes_4(L_109);
	}

IL_01f1:
	{
		int32_t L_110 = V_0;
		int32_t L_111 = ___charIndex4;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_110, (int32_t)L_111));
	}
}
// System.Exception I18N.CJK.CP51932Decoder::Insufficient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * CP51932Decoder_Insufficient_mFCA10A6AA231A94C862BA6E466F5E809E965B3EC (CP51932Decoder_tC03EC4B854B4393E2A49FDD66AC4195645C9696F * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0;
		L_0 = Strings_GetString_m84B4205ADF9BD4AB96836BE778BE485A0DDCF9A1(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral10562201C2A7AB420A8DECFE1373D48FBF48A6AE)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_1 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_1, L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4F04E415359BAAEA12C3DA482EAACC98D2F7EDC8)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CP51932Decoder_Insufficient_mFCA10A6AA231A94C862BA6E466F5E809E965B3EC_RuntimeMethod_var)));
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
// System.Void I18N.CJK.CP51932Encoder::.ctor(I18N.Common.MonoSafeEncoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP51932Encoder__ctor_m600876953D7C9E4EA8F35A7D26D3B582D0C47DD0 (CP51932Encoder_t2D109B1562B6FB19940754F06F0C87C022FC7312 * __this, MonoSafeEncoding_t0F0341C8A621EBF14ADEA3F5DC248BC26F7DDE83 * ___encoding0, const RuntimeMethod* method)
{
	{
		MonoSafeEncoding_t0F0341C8A621EBF14ADEA3F5DC248BC26F7DDE83 * L_0 = ___encoding0;
		MonoSafeEncoder__ctor_mE2203C5488EEAE1D2D9D8E3F1FC21ECE168DAADC(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 I18N.CJK.CP51932Encoder::GetByteCount(System.Char[],System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP51932Encoder_GetByteCount_mBDBC8720EE4CBC3D18C7AB9DECFA43F80DEBEE88 (CP51932Encoder_t2D109B1562B6FB19940754F06F0C87C022FC7312 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars0, int32_t ___index1, int32_t ___count2, bool ___flush3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_3 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_4 = NULL;
	{
		V_0 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848_il2cpp_TypeInfo_var);
		JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848 * L_0;
		L_0 = JISConvert_get_Convert_m2294F43F984013F908B15172EAB6EBABFA13C774(/*hidden argument*/NULL);
		NullCheck(L_0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = L_0->get_cjkToJis_7();
		V_3 = L_1;
		JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848 * L_2;
		L_2 = JISConvert_get_Convert_m2294F43F984013F908B15172EAB6EBABFA13C774(/*hidden argument*/NULL);
		NullCheck(L_2);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = L_2->get_extraToJis_9();
		V_4 = L_3;
		goto IL_013b;
	}

IL_001e:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4 = ___chars0;
		int32_t L_5 = ___index1;
		int32_t L_6 = L_5;
		___index1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
		NullCheck(L_4);
		int32_t L_7 = L_6;
		uint16_t L_8 = (uint16_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_1 = L_8;
		int32_t L_9 = ___count2;
		___count2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1));
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
		int32_t L_11 = V_1;
		if ((((int32_t)L_11) < ((int32_t)((int32_t)128))))
		{
			goto IL_013b;
		}
	}
	{
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) >= ((int32_t)((int32_t)256))))
		{
			goto IL_00a7;
		}
	}
	{
		int32_t L_13 = V_1;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)162))))
		{
			goto IL_009e;
		}
	}
	{
		int32_t L_14 = V_1;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)163))))
		{
			goto IL_009e;
		}
	}
	{
		int32_t L_15 = V_1;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)167))))
		{
			goto IL_009e;
		}
	}
	{
		int32_t L_16 = V_1;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)168))))
		{
			goto IL_009e;
		}
	}
	{
		int32_t L_17 = V_1;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)172))))
		{
			goto IL_009e;
		}
	}
	{
		int32_t L_18 = V_1;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)176))))
		{
			goto IL_009e;
		}
	}
	{
		int32_t L_19 = V_1;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)177))))
		{
			goto IL_009e;
		}
	}
	{
		int32_t L_20 = V_1;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)180))))
		{
			goto IL_009e;
		}
	}
	{
		int32_t L_21 = V_1;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)182))))
		{
			goto IL_009e;
		}
	}
	{
		int32_t L_22 = V_1;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)215))))
		{
			goto IL_009e;
		}
	}
	{
		int32_t L_23 = V_1;
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)247)))))
		{
			goto IL_013b;
		}
	}

IL_009e:
	{
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
		goto IL_013b;
	}

IL_00a7:
	{
		int32_t L_25 = V_1;
		if ((((int32_t)L_25) < ((int32_t)((int32_t)913))))
		{
			goto IL_00bd;
		}
	}
	{
		int32_t L_26 = V_1;
		if ((((int32_t)L_26) > ((int32_t)((int32_t)1105))))
		{
			goto IL_00bd;
		}
	}
	{
		int32_t L_27 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
		goto IL_013b;
	}

IL_00bd:
	{
		int32_t L_28 = V_1;
		if ((((int32_t)L_28) < ((int32_t)((int32_t)8208))))
		{
			goto IL_00f1;
		}
	}
	{
		int32_t L_29 = V_1;
		if ((((int32_t)L_29) > ((int32_t)((int32_t)40869))))
		{
			goto IL_00f1;
		}
	}
	{
		int32_t L_30 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)((int32_t)8208))), (int32_t)2));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_31 = V_3;
		int32_t L_32 = V_2;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		uint8_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_35 = V_3;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		int32_t L_37 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
		uint8_t L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_2 = ((int32_t)((int32_t)L_34|(int32_t)((int32_t)((int32_t)L_38<<(int32_t)8))));
		int32_t L_39 = V_2;
		if ((((int32_t)L_39) < ((int32_t)((int32_t)256))))
		{
			goto IL_013b;
		}
	}
	{
		int32_t L_40 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1));
		goto IL_013b;
	}

IL_00f1:
	{
		int32_t L_41 = V_1;
		if ((((int32_t)L_41) < ((int32_t)((int32_t)65281))))
		{
			goto IL_0127;
		}
	}
	{
		int32_t L_42 = V_1;
		if ((((int32_t)L_42) >= ((int32_t)((int32_t)65376))))
		{
			goto IL_0127;
		}
	}
	{
		int32_t L_43 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_43, (int32_t)((int32_t)65281))), (int32_t)2));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_44 = V_4;
		int32_t L_45 = V_2;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		uint8_t L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_48 = V_4;
		int32_t L_49 = V_2;
		NullCheck(L_48);
		int32_t L_50 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1));
		uint8_t L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		V_2 = ((int32_t)((int32_t)L_47|(int32_t)((int32_t)((int32_t)L_51<<(int32_t)8))));
		int32_t L_52 = V_2;
		if ((((int32_t)L_52) < ((int32_t)((int32_t)256))))
		{
			goto IL_013b;
		}
	}
	{
		int32_t L_53 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)1));
		goto IL_013b;
	}

IL_0127:
	{
		int32_t L_54 = V_1;
		if ((((int32_t)L_54) < ((int32_t)((int32_t)65376))))
		{
			goto IL_013b;
		}
	}
	{
		int32_t L_55 = V_1;
		if ((((int32_t)L_55) > ((int32_t)((int32_t)65440))))
		{
			goto IL_013b;
		}
	}
	{
		int32_t L_56 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)1));
	}

IL_013b:
	{
		int32_t L_57 = ___count2;
		if ((((int32_t)L_57) > ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_58 = V_0;
		return L_58;
	}
}
// System.Int32 I18N.CJK.CP51932Encoder::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP51932Encoder_GetBytes_m3E70966E8D0C26BA892580784DFCFFB0EC75919F (CP51932Encoder_t2D109B1562B6FB19940754F06F0C87C022FC7312 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars0, int32_t ___charIndex1, int32_t ___charCount2, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes3, int32_t ___byteIndex4, bool ___flush5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_6 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_7 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_8 = NULL;
	int32_t V_9 = 0;
	{
		int32_t L_0 = ___byteIndex4;
		V_0 = L_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___bytes3;
		NullCheck(L_1);
		V_1 = ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___bytes3;
		NullCheck(L_2);
		V_2 = ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)));
		int32_t L_3 = ___charIndex1;
		int32_t L_4 = ___charCount2;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4));
		IL2CPP_RUNTIME_CLASS_INIT(JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848_il2cpp_TypeInfo_var);
		JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848 * L_5;
		L_5 = JISConvert_get_Convert_m2294F43F984013F908B15172EAB6EBABFA13C774(/*hidden argument*/NULL);
		NullCheck(L_5);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = L_5->get_cjkToJis_7();
		V_6 = L_6;
		JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848 * L_7;
		L_7 = JISConvert_get_Convert_m2294F43F984013F908B15172EAB6EBABFA13C774(/*hidden argument*/NULL);
		NullCheck(L_7);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = L_7->get_greekToJis_8();
		V_7 = L_8;
		JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848 * L_9;
		L_9 = JISConvert_get_Convert_m2294F43F984013F908B15172EAB6EBABFA13C774(/*hidden argument*/NULL);
		NullCheck(L_9);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = L_9->get_extraToJis_9();
		V_8 = L_10;
		int32_t L_11 = ___charIndex1;
		V_9 = L_11;
		goto IL_01e4;
	}

IL_003d:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_12 = ___chars0;
		int32_t L_13 = V_9;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		uint16_t L_15 = (uint16_t)(L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_4 = L_15;
		int32_t L_16 = V_0;
		int32_t L_17 = V_1;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_005c;
		}
	}
	{
		String_t* L_18;
		L_18 = Strings_GetString_m84B4205ADF9BD4AB96836BE778BE485A0DDCF9A1(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral10562201C2A7AB420A8DECFE1373D48FBF48A6AE)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_19 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_19, L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral77B615B8ED1ABB8FC1395D85A5AE524A9789D947)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CP51932Encoder_GetBytes_m3E70966E8D0C26BA892580784DFCFFB0EC75919F_RuntimeMethod_var)));
	}

IL_005c:
	{
		int32_t L_20 = V_4;
		if ((((int32_t)L_20) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0075;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_21 = ___bytes3;
		int32_t L_22 = V_0;
		int32_t L_23 = L_22;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
		int32_t L_24 = V_4;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (uint8_t)((int32_t)((uint8_t)L_24)));
		goto IL_01d9;
	}

IL_0075:
	{
		int32_t L_25 = V_4;
		if ((((int32_t)L_25) < ((int32_t)((int32_t)913))))
		{
			goto IL_00a9;
		}
	}
	{
		int32_t L_26 = V_4;
		if ((((int32_t)L_26) > ((int32_t)((int32_t)1105))))
		{
			goto IL_00a9;
		}
	}
	{
		int32_t L_27 = V_4;
		V_5 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_27, (int32_t)((int32_t)913))), (int32_t)2));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_28 = V_7;
		int32_t L_29 = V_5;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		uint8_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_32 = V_7;
		int32_t L_33 = V_5;
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
		uint8_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_5 = ((int32_t)((int32_t)L_31|(int32_t)((int32_t)((int32_t)L_35<<(int32_t)8))));
		goto IL_0132;
	}

IL_00a9:
	{
		int32_t L_36 = V_4;
		if ((((int32_t)L_36) < ((int32_t)((int32_t)8208))))
		{
			goto IL_00da;
		}
	}
	{
		int32_t L_37 = V_4;
		if ((((int32_t)L_37) > ((int32_t)((int32_t)40869))))
		{
			goto IL_00da;
		}
	}
	{
		int32_t L_38 = V_4;
		V_5 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_38, (int32_t)((int32_t)8208))), (int32_t)2));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_39 = V_6;
		int32_t L_40 = V_5;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		uint8_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_43 = V_6;
		int32_t L_44 = V_5;
		NullCheck(L_43);
		int32_t L_45 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
		uint8_t L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_5 = ((int32_t)((int32_t)L_42|(int32_t)((int32_t)((int32_t)L_46<<(int32_t)8))));
		goto IL_0132;
	}

IL_00da:
	{
		int32_t L_47 = V_4;
		if ((((int32_t)L_47) < ((int32_t)((int32_t)65281))))
		{
			goto IL_010b;
		}
	}
	{
		int32_t L_48 = V_4;
		if ((((int32_t)L_48) > ((int32_t)((int32_t)65376))))
		{
			goto IL_010b;
		}
	}
	{
		int32_t L_49 = V_4;
		V_5 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_49, (int32_t)((int32_t)65281))), (int32_t)2));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_50 = V_8;
		int32_t L_51 = V_5;
		NullCheck(L_50);
		int32_t L_52 = L_51;
		uint8_t L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_54 = V_8;
		int32_t L_55 = V_5;
		NullCheck(L_54);
		int32_t L_56 = ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)1));
		uint8_t L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		V_5 = ((int32_t)((int32_t)L_53|(int32_t)((int32_t)((int32_t)L_57<<(int32_t)8))));
		goto IL_0132;
	}

IL_010b:
	{
		int32_t L_58 = V_4;
		if ((((int32_t)L_58) < ((int32_t)((int32_t)65376))))
		{
			goto IL_012f;
		}
	}
	{
		int32_t L_59 = V_4;
		if ((((int32_t)L_59) > ((int32_t)((int32_t)65440))))
		{
			goto IL_012f;
		}
	}
	{
		int32_t L_60 = V_4;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_60, (int32_t)((int32_t)65376))), (int32_t)((int32_t)36512)));
		goto IL_0132;
	}

IL_012f:
	{
		V_5 = 0;
	}

IL_0132:
	{
		int32_t L_61 = V_5;
		if (L_61)
		{
			goto IL_014d;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_62 = ___chars0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_63 = ___bytes3;
		MonoSafeEncoder_HandleFallback_m5616797BE059754055D104BF351A4473D615C4C5(__this, L_62, (int32_t*)(&V_9), (int32_t*)(&___charCount2), L_63, (int32_t*)(&V_0), (int32_t*)(&V_2), NULL, /*hidden argument*/NULL);
		goto IL_01d9;
	}

IL_014d:
	{
		int32_t L_64 = V_5;
		if ((((int32_t)L_64) >= ((int32_t)((int32_t)256))))
		{
			goto IL_0163;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_65 = ___bytes3;
		int32_t L_66 = V_0;
		int32_t L_67 = L_66;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_67, (int32_t)1));
		int32_t L_68 = V_5;
		NullCheck(L_65);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(L_67), (uint8_t)((int32_t)((uint8_t)L_68)));
		goto IL_01d9;
	}

IL_0163:
	{
		int32_t L_69 = V_0;
		int32_t L_70 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_69, (int32_t)1))) < ((int32_t)L_70)))
		{
			goto IL_017e;
		}
	}
	{
		String_t* L_71;
		L_71 = Strings_GetString_m84B4205ADF9BD4AB96836BE778BE485A0DDCF9A1(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral10562201C2A7AB420A8DECFE1373D48FBF48A6AE)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_72 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_72, L_71, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral77B615B8ED1ABB8FC1395D85A5AE524A9789D947)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_72, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CP51932Encoder_GetBytes_m3E70966E8D0C26BA892580784DFCFFB0EC75919F_RuntimeMethod_var)));
	}

IL_017e:
	{
		int32_t L_73 = V_5;
		if ((((int32_t)L_73) >= ((int32_t)((int32_t)32768))))
		{
			goto IL_01bb;
		}
	}
	{
		int32_t L_74 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_74, (int32_t)((int32_t)256)));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_75 = ___bytes3;
		int32_t L_76 = V_0;
		int32_t L_77 = L_76;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_77, (int32_t)1));
		int32_t L_78 = V_5;
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(L_77), (uint8_t)((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_78/(int32_t)((int32_t)94))), (int32_t)((int32_t)161))))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_79 = ___bytes3;
		int32_t L_80 = V_0;
		int32_t L_81 = L_80;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_81, (int32_t)1));
		int32_t L_82 = V_5;
		NullCheck(L_79);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(L_81), (uint8_t)((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_82%(int32_t)((int32_t)94))), (int32_t)((int32_t)161))))));
		goto IL_01d9;
	}

IL_01bb:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_83 = ___bytes3;
		int32_t L_84 = V_0;
		int32_t L_85 = L_84;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_85, (int32_t)1));
		NullCheck(L_83);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(L_85), (uint8_t)((int32_t)142));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_86 = ___bytes3;
		int32_t L_87 = V_0;
		int32_t L_88 = L_87;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_88, (int32_t)1));
		int32_t L_89 = V_5;
		NullCheck(L_86);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(L_88), (uint8_t)((int32_t)((uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_89, (int32_t)((int32_t)36352))))));
	}

IL_01d9:
	{
		int32_t L_90 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_90, (int32_t)1));
		int32_t L_91 = ___charCount2;
		___charCount2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_91, (int32_t)1));
	}

IL_01e4:
	{
		int32_t L_92 = V_9;
		int32_t L_93 = V_3;
		if ((((int32_t)L_92) < ((int32_t)L_93)))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_94 = V_0;
		int32_t L_95 = ___byteIndex4;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_94, (int32_t)L_95));
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
// System.Void I18N.CJK.CP51949::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP51949__ctor_m25A8E288C93BDF4FFD60E25BFE609921A5F58C76 (CP51949_tF501078A4A22B0D292CB290076A4F207E1760B64 * __this, const RuntimeMethod* method)
{
	{
		KoreanEncoding__ctor_m5DAFC4E50A88F3B5486479614660AFEFFFADB0D1(__this, ((int32_t)51949), (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.String I18N.CJK.CP51949::get_BodyName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CP51949_get_BodyName_mFB691ECB52BF3B729C7D4D5896CF68A67477271C (CP51949_tF501078A4A22B0D292CB290076A4F207E1760B64 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECDAC393A5FD605E749C4DB7D471CAA0B5D51B3D);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralECDAC393A5FD605E749C4DB7D471CAA0B5D51B3D;
	}
}
// System.String I18N.CJK.CP51949::get_EncodingName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CP51949_get_EncodingName_m5C4D3847B638C91365C38FCC5DD216984E622873 (CP51949_tF501078A4A22B0D292CB290076A4F207E1760B64 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98F909B47B62CE0D1D166DF4CDA36DD83742071F);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral98F909B47B62CE0D1D166DF4CDA36DD83742071F;
	}
}
// System.String I18N.CJK.CP51949::get_HeaderName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CP51949_get_HeaderName_m18D449E34E1DEC36385D2D3ABC872C75BB25CBF1 (CP51949_tF501078A4A22B0D292CB290076A4F207E1760B64 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECDAC393A5FD605E749C4DB7D471CAA0B5D51B3D);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralECDAC393A5FD605E749C4DB7D471CAA0B5D51B3D;
	}
}
// System.String I18N.CJK.CP51949::get_WebName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CP51949_get_WebName_mC3C90A8A9B88F43AF5BFFD0811D809CCDA930055 (CP51949_tF501078A4A22B0D292CB290076A4F207E1760B64 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECDAC393A5FD605E749C4DB7D471CAA0B5D51B3D);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralECDAC393A5FD605E749C4DB7D471CAA0B5D51B3D;
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
// System.Void I18N.CJK.CP54936::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP54936__ctor_mA9FEAE2527CF43A94A409085560D3A658F504D39 (CP54936_tBE9FEC49039E36BEE92AC1A9620D9DF93257A54F * __this, const RuntimeMethod* method)
{
	{
		GB18030Encoding__ctor_m68BF70D37FE8B805524F8F1FE8258770640B265B(__this, /*hidden argument*/NULL);
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
// System.Void I18N.CJK.CP932::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP932__ctor_mF6EAF20EA953762EB68498458C370ABC7C5EF676 (CP932_t30A1C3786CBAC763AD15AA7146BB886F26F01596 * __this, const RuntimeMethod* method)
{
	{
		MonoSafeEncoding__ctor_mE4BC6943BA58B3A96D2EA100044BF295A470E83F(__this, ((int32_t)932), /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 I18N.CJK.CP932::GetByteCount(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP932_GetByteCount_m6552D0233925FB0D664536DB7E4FC033D72D72E0 (CP932_t30A1C3786CBAC763AD15AA7146BB886F26F01596 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_3 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_4 = NULL;
	{
		V_0 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848_il2cpp_TypeInfo_var);
		JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848 * L_0;
		L_0 = JISConvert_get_Convert_m2294F43F984013F908B15172EAB6EBABFA13C774(/*hidden argument*/NULL);
		NullCheck(L_0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = L_0->get_cjkToJis_7();
		V_3 = L_1;
		JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848 * L_2;
		L_2 = JISConvert_get_Convert_m2294F43F984013F908B15172EAB6EBABFA13C774(/*hidden argument*/NULL);
		NullCheck(L_2);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = L_2->get_extraToJis_9();
		V_4 = L_3;
		goto IL_013b;
	}

IL_001e:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4 = ___chars0;
		int32_t L_5 = ___index1;
		int32_t L_6 = L_5;
		___index1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
		NullCheck(L_4);
		int32_t L_7 = L_6;
		uint16_t L_8 = (uint16_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_1 = L_8;
		int32_t L_9 = ___count2;
		___count2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1));
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
		int32_t L_11 = V_1;
		if ((((int32_t)L_11) < ((int32_t)((int32_t)128))))
		{
			goto IL_013b;
		}
	}
	{
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) >= ((int32_t)((int32_t)256))))
		{
			goto IL_00a7;
		}
	}
	{
		int32_t L_13 = V_1;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)162))))
		{
			goto IL_009e;
		}
	}
	{
		int32_t L_14 = V_1;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)163))))
		{
			goto IL_009e;
		}
	}
	{
		int32_t L_15 = V_1;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)167))))
		{
			goto IL_009e;
		}
	}
	{
		int32_t L_16 = V_1;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)168))))
		{
			goto IL_009e;
		}
	}
	{
		int32_t L_17 = V_1;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)172))))
		{
			goto IL_009e;
		}
	}
	{
		int32_t L_18 = V_1;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)176))))
		{
			goto IL_009e;
		}
	}
	{
		int32_t L_19 = V_1;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)177))))
		{
			goto IL_009e;
		}
	}
	{
		int32_t L_20 = V_1;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)180))))
		{
			goto IL_009e;
		}
	}
	{
		int32_t L_21 = V_1;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)182))))
		{
			goto IL_009e;
		}
	}
	{
		int32_t L_22 = V_1;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)215))))
		{
			goto IL_009e;
		}
	}
	{
		int32_t L_23 = V_1;
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)247)))))
		{
			goto IL_013b;
		}
	}

IL_009e:
	{
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
		goto IL_013b;
	}

IL_00a7:
	{
		int32_t L_25 = V_1;
		if ((((int32_t)L_25) < ((int32_t)((int32_t)913))))
		{
			goto IL_00bd;
		}
	}
	{
		int32_t L_26 = V_1;
		if ((((int32_t)L_26) > ((int32_t)((int32_t)1105))))
		{
			goto IL_00bd;
		}
	}
	{
		int32_t L_27 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
		goto IL_013b;
	}

IL_00bd:
	{
		int32_t L_28 = V_1;
		if ((((int32_t)L_28) < ((int32_t)((int32_t)8208))))
		{
			goto IL_00f1;
		}
	}
	{
		int32_t L_29 = V_1;
		if ((((int32_t)L_29) > ((int32_t)((int32_t)40869))))
		{
			goto IL_00f1;
		}
	}
	{
		int32_t L_30 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)((int32_t)8208))), (int32_t)2));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_31 = V_3;
		int32_t L_32 = V_2;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		uint8_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_35 = V_3;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		int32_t L_37 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
		uint8_t L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_2 = ((int32_t)((int32_t)L_34|(int32_t)((int32_t)((int32_t)L_38<<(int32_t)8))));
		int32_t L_39 = V_2;
		if ((((int32_t)L_39) < ((int32_t)((int32_t)256))))
		{
			goto IL_013b;
		}
	}
	{
		int32_t L_40 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1));
		goto IL_013b;
	}

IL_00f1:
	{
		int32_t L_41 = V_1;
		if ((((int32_t)L_41) < ((int32_t)((int32_t)57344))))
		{
			goto IL_0107;
		}
	}
	{
		int32_t L_42 = V_1;
		if ((((int32_t)L_42) > ((int32_t)((int32_t)59223))))
		{
			goto IL_0107;
		}
	}
	{
		int32_t L_43 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1));
		goto IL_013b;
	}

IL_0107:
	{
		int32_t L_44 = V_1;
		if ((((int32_t)L_44) < ((int32_t)((int32_t)65281))))
		{
			goto IL_013b;
		}
	}
	{
		int32_t L_45 = V_1;
		if ((((int32_t)L_45) > ((int32_t)((int32_t)65519))))
		{
			goto IL_013b;
		}
	}
	{
		int32_t L_46 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_46, (int32_t)((int32_t)65281))), (int32_t)2));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_47 = V_4;
		int32_t L_48 = V_2;
		NullCheck(L_47);
		int32_t L_49 = L_48;
		uint8_t L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_51 = V_4;
		int32_t L_52 = V_2;
		NullCheck(L_51);
		int32_t L_53 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1));
		uint8_t L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		V_2 = ((int32_t)((int32_t)L_50|(int32_t)((int32_t)((int32_t)L_54<<(int32_t)8))));
		int32_t L_55 = V_2;
		if ((((int32_t)L_55) < ((int32_t)((int32_t)256))))
		{
			goto IL_013b;
		}
	}
	{
		int32_t L_56 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)1));
	}

IL_013b:
	{
		int32_t L_57 = ___count2;
		if ((((int32_t)L_57) > ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_58 = V_0;
		return L_58;
	}
}
// System.Int32 I18N.CJK.CP932::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP932_GetBytes_m354228380718F75597603F07ABA3490BB2760002 (CP932_t30A1C3786CBAC763AD15AA7146BB886F26F01596 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars0, int32_t ___charIndex1, int32_t ___charCount2, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes3, int32_t ___byteIndex4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_6 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_7 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes3;
		NullCheck(L_0);
		V_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		V_1 = (EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 *)NULL;
		int32_t L_1 = ___byteIndex4;
		V_2 = L_1;
		int32_t L_2 = ___charIndex1;
		int32_t L_3 = ___charCount2;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3));
		int32_t L_4 = V_0;
		V_4 = L_4;
		IL2CPP_RUNTIME_CLASS_INIT(JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848_il2cpp_TypeInfo_var);
		JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848 * L_5;
		L_5 = JISConvert_get_Convert_m2294F43F984013F908B15172EAB6EBABFA13C774(/*hidden argument*/NULL);
		NullCheck(L_5);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = L_5->get_cjkToJis_7();
		V_6 = L_6;
		JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848 * L_7;
		L_7 = JISConvert_get_Convert_m2294F43F984013F908B15172EAB6EBABFA13C774(/*hidden argument*/NULL);
		NullCheck(L_7);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = L_7->get_greekToJis_8();
		V_7 = L_8;
		JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848 * L_9;
		L_9 = JISConvert_get_Convert_m2294F43F984013F908B15172EAB6EBABFA13C774(/*hidden argument*/NULL);
		NullCheck(L_9);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = L_9->get_extraToJis_9();
		V_8 = L_10;
		int32_t L_11 = ___charIndex1;
		V_9 = L_11;
		goto IL_0529;
	}

IL_003d:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_12 = ___chars0;
		int32_t L_13 = V_9;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		uint16_t L_15 = (uint16_t)(L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_10 = L_15;
		int32_t L_16 = V_2;
		int32_t L_17 = V_4;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_005d;
		}
	}
	{
		String_t* L_18;
		L_18 = Strings_GetString_m84B4205ADF9BD4AB96836BE778BE485A0DDCF9A1(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral10562201C2A7AB420A8DECFE1373D48FBF48A6AE)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_19 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_19, L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral77B615B8ED1ABB8FC1395D85A5AE524A9789D947)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CP932_GetBytes_m354228380718F75597603F07ABA3490BB2760002_RuntimeMethod_var)));
	}

IL_005d:
	{
		int32_t L_20 = V_10;
		if ((((int32_t)L_20) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0076;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_21 = ___bytes3;
		int32_t L_22 = V_2;
		int32_t L_23 = L_22;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
		int32_t L_24 = V_10;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (uint8_t)((int32_t)((uint8_t)L_24)));
		goto IL_051e;
	}

IL_0076:
	{
		int32_t L_25 = V_10;
		if ((((int32_t)L_25) >= ((int32_t)((int32_t)256))))
		{
			goto IL_0307;
		}
	}
	{
		int32_t L_26 = V_10;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)162))))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_27 = V_10;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)163))))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_28 = V_10;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)167))))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_29 = V_10;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)168))))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_30 = V_10;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)172))))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_31 = V_10;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)176))))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_32 = V_10;
		if ((((int32_t)L_32) == ((int32_t)((int32_t)177))))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_33 = V_10;
		if ((((int32_t)L_33) == ((int32_t)((int32_t)180))))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_34 = V_10;
		if ((((int32_t)L_34) == ((int32_t)((int32_t)182))))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_35 = V_10;
		if ((((int32_t)L_35) == ((int32_t)((int32_t)215))))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_36 = V_10;
		if ((!(((uint32_t)L_36) == ((uint32_t)((int32_t)247)))))
		{
			goto IL_02d6;
		}
	}

IL_00e8:
	{
		int32_t L_37 = V_2;
		int32_t L_38 = V_4;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1))) < ((int32_t)L_38)))
		{
			goto IL_0104;
		}
	}
	{
		String_t* L_39;
		L_39 = Strings_GetString_m84B4205ADF9BD4AB96836BE778BE485A0DDCF9A1(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral10562201C2A7AB420A8DECFE1373D48FBF48A6AE)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_40 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_40, L_39, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral77B615B8ED1ABB8FC1395D85A5AE524A9789D947)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_40, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CP932_GetBytes_m354228380718F75597603F07ABA3490BB2760002_RuntimeMethod_var)));
	}

IL_0104:
	{
		int32_t L_41 = V_10;
		if ((((int32_t)L_41) > ((int32_t)((int32_t)172))))
		{
			goto IL_0147;
		}
	}
	{
		int32_t L_42 = V_10;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_42, (int32_t)((int32_t)162))))
		{
			case 0:
			{
				goto IL_018d;
			}
			case 1:
			{
				goto IL_01ac;
			}
			case 2:
			{
				goto IL_051e;
			}
			case 3:
			{
				goto IL_051e;
			}
			case 4:
			{
				goto IL_051e;
			}
			case 5:
			{
				goto IL_01cb;
			}
			case 6:
			{
				goto IL_01ea;
			}
		}
	}
	{
		int32_t L_43 = V_10;
		if ((((int32_t)L_43) == ((int32_t)((int32_t)172))))
		{
			goto IL_0206;
		}
	}
	{
		goto IL_051e;
	}

IL_0147:
	{
		int32_t L_44 = V_10;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_44, (int32_t)((int32_t)176))))
		{
			case 0:
			{
				goto IL_0225;
			}
			case 1:
			{
				goto IL_0244;
			}
			case 2:
			{
				goto IL_051e;
			}
			case 3:
			{
				goto IL_051e;
			}
			case 4:
			{
				goto IL_0260;
			}
			case 5:
			{
				goto IL_051e;
			}
			case 6:
			{
				goto IL_027c;
			}
		}
	}
	{
		int32_t L_45 = V_10;
		if ((((int32_t)L_45) == ((int32_t)((int32_t)215))))
		{
			goto IL_029b;
		}
	}
	{
		int32_t L_46 = V_10;
		if ((((int32_t)L_46) == ((int32_t)((int32_t)247))))
		{
			goto IL_02b7;
		}
	}
	{
		goto IL_051e;
	}

IL_018d:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_47 = ___bytes3;
		int32_t L_48 = V_2;
		int32_t L_49 = L_48;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1));
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(L_49), (uint8_t)((int32_t)129));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_50 = ___bytes3;
		int32_t L_51 = V_2;
		int32_t L_52 = L_51;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1));
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(L_52), (uint8_t)((int32_t)145));
		goto IL_051e;
	}

IL_01ac:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_53 = ___bytes3;
		int32_t L_54 = V_2;
		int32_t L_55 = L_54;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)1));
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(L_55), (uint8_t)((int32_t)129));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_56 = ___bytes3;
		int32_t L_57 = V_2;
		int32_t L_58 = L_57;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)1));
		NullCheck(L_56);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(L_58), (uint8_t)((int32_t)146));
		goto IL_051e;
	}

IL_01cb:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_59 = ___bytes3;
		int32_t L_60 = V_2;
		int32_t L_61 = L_60;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_61, (int32_t)1));
		NullCheck(L_59);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(L_61), (uint8_t)((int32_t)129));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_62 = ___bytes3;
		int32_t L_63 = V_2;
		int32_t L_64 = L_63;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)1));
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(L_64), (uint8_t)((int32_t)152));
		goto IL_051e;
	}

IL_01ea:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_65 = ___bytes3;
		int32_t L_66 = V_2;
		int32_t L_67 = L_66;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_67, (int32_t)1));
		NullCheck(L_65);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(L_67), (uint8_t)((int32_t)129));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_68 = ___bytes3;
		int32_t L_69 = V_2;
		int32_t L_70 = L_69;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)1));
		NullCheck(L_68);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(L_70), (uint8_t)((int32_t)78));
		goto IL_051e;
	}

IL_0206:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_71 = ___bytes3;
		int32_t L_72 = V_2;
		int32_t L_73 = L_72;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_73, (int32_t)1));
		NullCheck(L_71);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_73), (uint8_t)((int32_t)129));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_74 = ___bytes3;
		int32_t L_75 = V_2;
		int32_t L_76 = L_75;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
		NullCheck(L_74);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(L_76), (uint8_t)((int32_t)202));
		goto IL_051e;
	}

IL_0225:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_77 = ___bytes3;
		int32_t L_78 = V_2;
		int32_t L_79 = L_78;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_79, (int32_t)1));
		NullCheck(L_77);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(L_79), (uint8_t)((int32_t)129));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_80 = ___bytes3;
		int32_t L_81 = V_2;
		int32_t L_82 = L_81;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_82, (int32_t)1));
		NullCheck(L_80);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(L_82), (uint8_t)((int32_t)139));
		goto IL_051e;
	}

IL_0244:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_83 = ___bytes3;
		int32_t L_84 = V_2;
		int32_t L_85 = L_84;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_85, (int32_t)1));
		NullCheck(L_83);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(L_85), (uint8_t)((int32_t)129));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_86 = ___bytes3;
		int32_t L_87 = V_2;
		int32_t L_88 = L_87;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_88, (int32_t)1));
		NullCheck(L_86);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(L_88), (uint8_t)((int32_t)125));
		goto IL_051e;
	}

IL_0260:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_89 = ___bytes3;
		int32_t L_90 = V_2;
		int32_t L_91 = L_90;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_91, (int32_t)1));
		NullCheck(L_89);
		(L_89)->SetAt(static_cast<il2cpp_array_size_t>(L_91), (uint8_t)((int32_t)129));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_92 = ___bytes3;
		int32_t L_93 = V_2;
		int32_t L_94 = L_93;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_94, (int32_t)1));
		NullCheck(L_92);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_94), (uint8_t)((int32_t)76));
		goto IL_051e;
	}

IL_027c:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_95 = ___bytes3;
		int32_t L_96 = V_2;
		int32_t L_97 = L_96;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_97, (int32_t)1));
		NullCheck(L_95);
		(L_95)->SetAt(static_cast<il2cpp_array_size_t>(L_97), (uint8_t)((int32_t)129));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_98 = ___bytes3;
		int32_t L_99 = V_2;
		int32_t L_100 = L_99;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_100, (int32_t)1));
		NullCheck(L_98);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(L_100), (uint8_t)((int32_t)247));
		goto IL_051e;
	}

IL_029b:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_101 = ___bytes3;
		int32_t L_102 = V_2;
		int32_t L_103 = L_102;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_103, (int32_t)1));
		NullCheck(L_101);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(L_103), (uint8_t)((int32_t)129));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_104 = ___bytes3;
		int32_t L_105 = V_2;
		int32_t L_106 = L_105;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_106, (int32_t)1));
		NullCheck(L_104);
		(L_104)->SetAt(static_cast<il2cpp_array_size_t>(L_106), (uint8_t)((int32_t)126));
		goto IL_051e;
	}

IL_02b7:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_107 = ___bytes3;
		int32_t L_108 = V_2;
		int32_t L_109 = L_108;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_109, (int32_t)1));
		NullCheck(L_107);
		(L_107)->SetAt(static_cast<il2cpp_array_size_t>(L_109), (uint8_t)((int32_t)129));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_110 = ___bytes3;
		int32_t L_111 = V_2;
		int32_t L_112 = L_111;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_112, (int32_t)1));
		NullCheck(L_110);
		(L_110)->SetAt(static_cast<il2cpp_array_size_t>(L_112), (uint8_t)((int32_t)128));
		goto IL_051e;
	}

IL_02d6:
	{
		int32_t L_113 = V_10;
		if ((!(((uint32_t)L_113) == ((uint32_t)((int32_t)165)))))
		{
			goto IL_02ee;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_114 = ___bytes3;
		int32_t L_115 = V_2;
		int32_t L_116 = L_115;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_116, (int32_t)1));
		NullCheck(L_114);
		(L_114)->SetAt(static_cast<il2cpp_array_size_t>(L_116), (uint8_t)((int32_t)92));
		goto IL_051e;
	}

IL_02ee:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_117 = ___chars0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_118 = ___bytes3;
		MonoSafeEncoding_HandleFallback_mEA25FB4276523DC9F36C3C03F97F7682C0C31DDF(__this, (EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 **)(&V_1), L_117, (int32_t*)(&V_9), (int32_t*)(&___charCount2), L_118, (int32_t*)(&___byteIndex4), (int32_t*)(&V_0), NULL, /*hidden argument*/NULL);
		goto IL_051e;
	}

IL_0307:
	{
		int32_t L_119 = V_10;
		if ((((int32_t)L_119) < ((int32_t)((int32_t)913))))
		{
			goto IL_033b;
		}
	}
	{
		int32_t L_120 = V_10;
		if ((((int32_t)L_120) > ((int32_t)((int32_t)1105))))
		{
			goto IL_033b;
		}
	}
	{
		int32_t L_121 = V_10;
		V_5 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_121, (int32_t)((int32_t)913))), (int32_t)2));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_122 = V_7;
		int32_t L_123 = V_5;
		NullCheck(L_122);
		int32_t L_124 = L_123;
		uint8_t L_125 = (L_122)->GetAt(static_cast<il2cpp_array_size_t>(L_124));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_126 = V_7;
		int32_t L_127 = V_5;
		NullCheck(L_126);
		int32_t L_128 = ((int32_t)il2cpp_codegen_add((int32_t)L_127, (int32_t)1));
		uint8_t L_129 = (L_126)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		V_5 = ((int32_t)((int32_t)L_125|(int32_t)((int32_t)((int32_t)L_129<<(int32_t)8))));
		goto IL_0412;
	}

IL_033b:
	{
		int32_t L_130 = V_10;
		if ((((int32_t)L_130) < ((int32_t)((int32_t)8208))))
		{
			goto IL_036f;
		}
	}
	{
		int32_t L_131 = V_10;
		if ((((int32_t)L_131) > ((int32_t)((int32_t)40869))))
		{
			goto IL_036f;
		}
	}
	{
		int32_t L_132 = V_10;
		V_5 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_132, (int32_t)((int32_t)8208))), (int32_t)2));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_133 = V_6;
		int32_t L_134 = V_5;
		NullCheck(L_133);
		int32_t L_135 = L_134;
		uint8_t L_136 = (L_133)->GetAt(static_cast<il2cpp_array_size_t>(L_135));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_137 = V_6;
		int32_t L_138 = V_5;
		NullCheck(L_137);
		int32_t L_139 = ((int32_t)il2cpp_codegen_add((int32_t)L_138, (int32_t)1));
		uint8_t L_140 = (L_137)->GetAt(static_cast<il2cpp_array_size_t>(L_139));
		V_5 = ((int32_t)((int32_t)L_136|(int32_t)((int32_t)((int32_t)L_140<<(int32_t)8))));
		goto IL_0412;
	}

IL_036f:
	{
		int32_t L_141 = V_10;
		if ((((int32_t)L_141) < ((int32_t)((int32_t)57344))))
		{
			goto IL_03ba;
		}
	}
	{
		int32_t L_142 = V_10;
		if ((((int32_t)L_142) > ((int32_t)((int32_t)59223))))
		{
			goto IL_03ba;
		}
	}
	{
		int32_t L_143 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_143, (int32_t)((int32_t)57344)));
		int32_t L_144 = V_11;
		int32_t L_145 = V_11;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_144/(int32_t)((int32_t)188)))<<(int32_t)8)), (int32_t)((int32_t)((int32_t)L_145%(int32_t)((int32_t)188))))), (int32_t)((int32_t)61504)));
		int32_t L_146 = V_5;
		if ((((int32_t)((int32_t)((int32_t)L_146%(int32_t)((int32_t)256)))) < ((int32_t)((int32_t)127))))
		{
			goto IL_0412;
		}
	}
	{
		int32_t L_147 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_147, (int32_t)1));
		goto IL_0412;
	}

IL_03ba:
	{
		int32_t L_148 = V_10;
		if ((((int32_t)L_148) < ((int32_t)((int32_t)65281))))
		{
			goto IL_03eb;
		}
	}
	{
		int32_t L_149 = V_10;
		if ((((int32_t)L_149) > ((int32_t)((int32_t)65376))))
		{
			goto IL_03eb;
		}
	}
	{
		int32_t L_150 = V_10;
		V_5 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_150, (int32_t)((int32_t)65281))), (int32_t)2));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_151 = V_8;
		int32_t L_152 = V_5;
		NullCheck(L_151);
		int32_t L_153 = L_152;
		uint8_t L_154 = (L_151)->GetAt(static_cast<il2cpp_array_size_t>(L_153));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_155 = V_8;
		int32_t L_156 = V_5;
		NullCheck(L_155);
		int32_t L_157 = ((int32_t)il2cpp_codegen_add((int32_t)L_156, (int32_t)1));
		uint8_t L_158 = (L_155)->GetAt(static_cast<il2cpp_array_size_t>(L_157));
		V_5 = ((int32_t)((int32_t)L_154|(int32_t)((int32_t)((int32_t)L_158<<(int32_t)8))));
		goto IL_0412;
	}

IL_03eb:
	{
		int32_t L_159 = V_10;
		if ((((int32_t)L_159) < ((int32_t)((int32_t)65376))))
		{
			goto IL_040f;
		}
	}
	{
		int32_t L_160 = V_10;
		if ((((int32_t)L_160) > ((int32_t)((int32_t)65440))))
		{
			goto IL_040f;
		}
	}
	{
		int32_t L_161 = V_10;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_161, (int32_t)((int32_t)65376))), (int32_t)((int32_t)160)));
		goto IL_0412;
	}

IL_040f:
	{
		V_5 = 0;
	}

IL_0412:
	{
		int32_t L_162 = V_5;
		if (L_162)
		{
			goto IL_042f;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_163 = ___chars0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_164 = ___bytes3;
		MonoSafeEncoding_HandleFallback_mEA25FB4276523DC9F36C3C03F97F7682C0C31DDF(__this, (EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 **)(&V_1), L_163, (int32_t*)(&___charIndex1), (int32_t*)(&___charCount2), L_164, (int32_t*)(&V_2), (int32_t*)(&V_0), NULL, /*hidden argument*/NULL);
		goto IL_051e;
	}

IL_042f:
	{
		int32_t L_165 = V_5;
		if ((((int32_t)L_165) >= ((int32_t)((int32_t)256))))
		{
			goto IL_0448;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_166 = ___bytes3;
		int32_t L_167 = V_2;
		int32_t L_168 = L_167;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_168, (int32_t)1));
		int32_t L_169 = V_5;
		NullCheck(L_166);
		(L_166)->SetAt(static_cast<il2cpp_array_size_t>(L_168), (uint8_t)((int32_t)((uint8_t)L_169)));
		goto IL_051e;
	}

IL_0448:
	{
		int32_t L_170 = V_2;
		int32_t L_171 = V_4;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_170, (int32_t)1))) < ((int32_t)L_171)))
		{
			goto IL_0464;
		}
	}
	{
		String_t* L_172;
		L_172 = Strings_GetString_m84B4205ADF9BD4AB96836BE778BE485A0DDCF9A1(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral10562201C2A7AB420A8DECFE1373D48FBF48A6AE)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_173 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_173, L_172, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral77B615B8ED1ABB8FC1395D85A5AE524A9789D947)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_173, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CP932_GetBytes_m354228380718F75597603F07ABA3490BB2760002_RuntimeMethod_var)));
	}

IL_0464:
	{
		int32_t L_174 = V_5;
		if ((((int32_t)L_174) >= ((int32_t)((int32_t)32768))))
		{
			goto IL_04d4;
		}
	}
	{
		int32_t L_175 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_175, (int32_t)((int32_t)256)));
		int32_t L_176 = V_5;
		V_10 = ((int32_t)((int32_t)L_176/(int32_t)((int32_t)188)));
		int32_t L_177 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_177%(int32_t)((int32_t)188))), (int32_t)((int32_t)64)));
		int32_t L_178 = V_5;
		if ((((int32_t)L_178) < ((int32_t)((int32_t)127))))
		{
			goto IL_049a;
		}
	}
	{
		int32_t L_179 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_179, (int32_t)1));
	}

IL_049a:
	{
		int32_t L_180 = V_10;
		if ((((int32_t)L_180) >= ((int32_t)((int32_t)31))))
		{
			goto IL_04b3;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_181 = ___bytes3;
		int32_t L_182 = V_2;
		int32_t L_183 = L_182;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_183, (int32_t)1));
		int32_t L_184 = V_10;
		NullCheck(L_181);
		(L_181)->SetAt(static_cast<il2cpp_array_size_t>(L_183), (uint8_t)((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_184, (int32_t)((int32_t)129))))));
		goto IL_04c7;
	}

IL_04b3:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_185 = ___bytes3;
		int32_t L_186 = V_2;
		int32_t L_187 = L_186;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_187, (int32_t)1));
		int32_t L_188 = V_10;
		NullCheck(L_185);
		(L_185)->SetAt(static_cast<il2cpp_array_size_t>(L_187), (uint8_t)((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_188, (int32_t)((int32_t)31))), (int32_t)((int32_t)224))))));
	}

IL_04c7:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_189 = ___bytes3;
		int32_t L_190 = V_2;
		int32_t L_191 = L_190;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_191, (int32_t)1));
		int32_t L_192 = V_5;
		NullCheck(L_189);
		(L_189)->SetAt(static_cast<il2cpp_array_size_t>(L_191), (uint8_t)((int32_t)((uint8_t)L_192)));
		goto IL_051e;
	}

IL_04d4:
	{
		int32_t L_193 = V_5;
		if ((((int32_t)L_193) < ((int32_t)((int32_t)61504))))
		{
			goto IL_050a;
		}
	}
	{
		int32_t L_194 = V_5;
		if ((((int32_t)L_194) > ((int32_t)((int32_t)63996))))
		{
			goto IL_050a;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_195 = ___bytes3;
		int32_t L_196 = V_2;
		int32_t L_197 = L_196;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_197, (int32_t)1));
		int32_t L_198 = V_5;
		NullCheck(L_195);
		(L_195)->SetAt(static_cast<il2cpp_array_size_t>(L_197), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_198/(int32_t)((int32_t)256))))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_199 = ___bytes3;
		int32_t L_200 = V_2;
		int32_t L_201 = L_200;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_201, (int32_t)1));
		int32_t L_202 = V_5;
		NullCheck(L_199);
		(L_199)->SetAt(static_cast<il2cpp_array_size_t>(L_201), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_202%(int32_t)((int32_t)256))))));
		goto IL_051e;
	}

IL_050a:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_203 = ___bytes3;
		int32_t L_204 = V_2;
		int32_t L_205 = L_204;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_205, (int32_t)1));
		NullCheck(L_203);
		(L_203)->SetAt(static_cast<il2cpp_array_size_t>(L_205), (uint8_t)((int32_t)63));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_206 = ___bytes3;
		int32_t L_207 = V_2;
		int32_t L_208 = L_207;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_208, (int32_t)1));
		NullCheck(L_206);
		(L_206)->SetAt(static_cast<il2cpp_array_size_t>(L_208), (uint8_t)((int32_t)63));
	}

IL_051e:
	{
		int32_t L_209 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_209, (int32_t)1));
		int32_t L_210 = ___charCount2;
		___charCount2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_210, (int32_t)1));
	}

IL_0529:
	{
		int32_t L_211 = V_9;
		int32_t L_212 = V_3;
		if ((((int32_t)L_211) < ((int32_t)L_212)))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_213 = V_2;
		int32_t L_214 = ___byteIndex4;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_213, (int32_t)L_214));
	}
}
// System.Int32 I18N.CJK.CP932::GetCharCount(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP932_GetCharCount_m1DF2EFFC1F3104622C61D47A9E3C1904E30EAC1B (CP932_t30A1C3786CBAC763AD15AA7146BB886F26F01596 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CP932Decoder_t7FA16FF015C7A2CEA4DB579DEEFBB632B3182225_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848_il2cpp_TypeInfo_var);
		JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848 * L_0;
		L_0 = JISConvert_get_Convert_m2294F43F984013F908B15172EAB6EBABFA13C774(/*hidden argument*/NULL);
		CP932Decoder_t7FA16FF015C7A2CEA4DB579DEEFBB632B3182225 * L_1 = (CP932Decoder_t7FA16FF015C7A2CEA4DB579DEEFBB632B3182225 *)il2cpp_codegen_object_new(CP932Decoder_t7FA16FF015C7A2CEA4DB579DEEFBB632B3182225_il2cpp_TypeInfo_var);
		CP932Decoder__ctor_mBD955394B5CB18FDB6FB8772AE3AB3DE4EBF718D(L_1, L_0, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___bytes0;
		int32_t L_3 = ___index1;
		int32_t L_4 = ___count2;
		NullCheck(L_1);
		int32_t L_5;
		L_5 = VirtFuncInvoker4< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, bool >::Invoke(6 /* System.Int32 System.Text.Decoder::GetCharCount(System.Byte[],System.Int32,System.Int32,System.Boolean) */, L_1, L_2, L_3, L_4, (bool)1);
		return L_5;
	}
}
// System.Int32 I18N.CJK.CP932::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP932_GetChars_m6AEDFFA3E082929A2B4E18FEE6494B989521CB6F (CP932_t30A1C3786CBAC763AD15AA7146BB886F26F01596 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars3, int32_t ___charIndex4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CP932Decoder_t7FA16FF015C7A2CEA4DB579DEEFBB632B3182225_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848_il2cpp_TypeInfo_var);
		JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848 * L_0;
		L_0 = JISConvert_get_Convert_m2294F43F984013F908B15172EAB6EBABFA13C774(/*hidden argument*/NULL);
		CP932Decoder_t7FA16FF015C7A2CEA4DB579DEEFBB632B3182225 * L_1 = (CP932Decoder_t7FA16FF015C7A2CEA4DB579DEEFBB632B3182225 *)il2cpp_codegen_object_new(CP932Decoder_t7FA16FF015C7A2CEA4DB579DEEFBB632B3182225_il2cpp_TypeInfo_var);
		CP932Decoder__ctor_mBD955394B5CB18FDB6FB8772AE3AB3DE4EBF718D(L_1, L_0, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___bytes0;
		int32_t L_3 = ___byteIndex1;
		int32_t L_4 = ___byteCount2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_5 = ___chars3;
		int32_t L_6 = ___charIndex4;
		NullCheck(L_1);
		int32_t L_7;
		L_7 = VirtFuncInvoker6< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, int32_t, bool >::Invoke(9 /* System.Int32 System.Text.Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Boolean) */, L_1, L_2, L_3, L_4, L_5, L_6, (bool)1);
		return L_7;
	}
}
// System.Int32 I18N.CJK.CP932::GetMaxByteCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP932_GetMaxByteCount_m2E8F495AFEEC48712F987F69E73B0262CBF9875B (CP932_t30A1C3786CBAC763AD15AA7146BB886F26F01596 * __this, int32_t ___charCount0, const RuntimeMethod* method)
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CP932_GetMaxByteCount_m2E8F495AFEEC48712F987F69E73B0262CBF9875B_RuntimeMethod_var)));
	}

IL_0019:
	{
		int32_t L_3 = ___charCount0;
		return ((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)2));
	}
}
// System.Int32 I18N.CJK.CP932::GetMaxCharCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP932_GetMaxCharCount_m95248406D2C112E87B9251F79E63E583716753FF (CP932_t30A1C3786CBAC763AD15AA7146BB886F26F01596 * __this, int32_t ___byteCount0, const RuntimeMethod* method)
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CP932_GetMaxCharCount_m95248406D2C112E87B9251F79E63E583716753FF_RuntimeMethod_var)));
	}

IL_0019:
	{
		int32_t L_3 = ___byteCount0;
		return L_3;
	}
}
// System.Text.Decoder I18N.CJK.CP932::GetDecoder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * CP932_GetDecoder_m4B6817C94D28B9529D03C7E8CD8FE05D46587AAB (CP932_t30A1C3786CBAC763AD15AA7146BB886F26F01596 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CP932Decoder_t7FA16FF015C7A2CEA4DB579DEEFBB632B3182225_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848_il2cpp_TypeInfo_var);
		JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848 * L_0;
		L_0 = JISConvert_get_Convert_m2294F43F984013F908B15172EAB6EBABFA13C774(/*hidden argument*/NULL);
		CP932Decoder_t7FA16FF015C7A2CEA4DB579DEEFBB632B3182225 * L_1 = (CP932Decoder_t7FA16FF015C7A2CEA4DB579DEEFBB632B3182225 *)il2cpp_codegen_object_new(CP932Decoder_t7FA16FF015C7A2CEA4DB579DEEFBB632B3182225_il2cpp_TypeInfo_var);
		CP932Decoder__ctor_mBD955394B5CB18FDB6FB8772AE3AB3DE4EBF718D(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String I18N.CJK.CP932::get_BodyName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CP932_get_BodyName_m91CC99014396E10BFB8BBDC2975214F69E0102D4 (CP932_t30A1C3786CBAC763AD15AA7146BB886F26F01596 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF512F2CB430B135FD2B0519B779BC77CDF6B6207);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralF512F2CB430B135FD2B0519B779BC77CDF6B6207;
	}
}
// System.String I18N.CJK.CP932::get_EncodingName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CP932_get_EncodingName_m85B7083D287DA9A0E9142222B210CF5D022F6F2A (CP932_t30A1C3786CBAC763AD15AA7146BB886F26F01596 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0050F900BF1A1EA5A688BEEDDA876E99ECF7DBD);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralD0050F900BF1A1EA5A688BEEDDA876E99ECF7DBD;
	}
}
// System.String I18N.CJK.CP932::get_HeaderName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CP932_get_HeaderName_m205003A11AD74B3795429D8C256D66D7CA59C315 (CP932_t30A1C3786CBAC763AD15AA7146BB886F26F01596 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF512F2CB430B135FD2B0519B779BC77CDF6B6207);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralF512F2CB430B135FD2B0519B779BC77CDF6B6207;
	}
}
// System.Boolean I18N.CJK.CP932::get_IsBrowserDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CP932_get_IsBrowserDisplay_m7F2DEB2BC8577D9829AC8DB8E7709F65D86595B5 (CP932_t30A1C3786CBAC763AD15AA7146BB886F26F01596 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Boolean I18N.CJK.CP932::get_IsBrowserSave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CP932_get_IsBrowserSave_m4140BC9D2DFEFDA1A0CE0ADC2C0073581DACDD1C (CP932_t30A1C3786CBAC763AD15AA7146BB886F26F01596 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Boolean I18N.CJK.CP932::get_IsMailNewsDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CP932_get_IsMailNewsDisplay_m3B918E6939762D922B928678BC768B6F48DD2C7D (CP932_t30A1C3786CBAC763AD15AA7146BB886F26F01596 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Boolean I18N.CJK.CP932::get_IsMailNewsSave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CP932_get_IsMailNewsSave_mD288F3F35144F724BE36EBC1590DCA807F65FE36 (CP932_t30A1C3786CBAC763AD15AA7146BB886F26F01596 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.String I18N.CJK.CP932::get_WebName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CP932_get_WebName_mE0868FB21D94F940ED032649CFDFAB72CB19C5CC (CP932_t30A1C3786CBAC763AD15AA7146BB886F26F01596 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32330AB77DEF9883B00C95C23F73315939670D22);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral32330AB77DEF9883B00C95C23F73315939670D22;
	}
}
// System.Int32 I18N.CJK.CP932::get_WindowsCodePage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP932_get_WindowsCodePage_mD772017336DA81671C60EBEF67258B4A3D23D00E (CP932_t30A1C3786CBAC763AD15AA7146BB886F26F01596 * __this, const RuntimeMethod* method)
{
	{
		return ((int32_t)932);
	}
}
// System.Text.Encoder I18N.CJK.CP932::GetEncoder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * CP932_GetEncoder_m2CCED4A7A7634B372475170CC091A31249B97D3B (CP932_t30A1C3786CBAC763AD15AA7146BB886F26F01596 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoEncodingDefaultEncoder_t4B58B3F3AFA8085CDE630E185C8572B72EEE8A90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonoEncodingDefaultEncoder_t4B58B3F3AFA8085CDE630E185C8572B72EEE8A90 * L_0 = (MonoEncodingDefaultEncoder_t4B58B3F3AFA8085CDE630E185C8572B72EEE8A90 *)il2cpp_codegen_object_new(MonoEncodingDefaultEncoder_t4B58B3F3AFA8085CDE630E185C8572B72EEE8A90_il2cpp_TypeInfo_var);
		MonoEncodingDefaultEncoder__ctor_mFB66B8F2114655EC5A2E0B2443B5A4F87C2B5126(L_0, __this, /*hidden argument*/NULL);
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
// System.Void I18N.CJK.CP932Decoder::.ctor(I18N.CJK.JISConvert)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP932Decoder__ctor_mBD955394B5CB18FDB6FB8772AE3AB3DE4EBF718D (CP932Decoder_t7FA16FF015C7A2CEA4DB579DEEFBB632B3182225 * __this, JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848 * ___convert0, const RuntimeMethod* method)
{
	{
		DbcsDecoder__ctor_mFF26DCA3EA24AA43C4CF5D8191E25D73AFDA41F4(__this, (DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 *)NULL, /*hidden argument*/NULL);
		JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848 * L_0 = ___convert0;
		__this->set_convert_3(L_0);
		return;
	}
}
// System.Int32 I18N.CJK.CP932Decoder::GetCharCount(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP932Decoder_GetCharCount_m101B88FD2774C35098DC00356761E98277319B10 (CP932Decoder_t7FA16FF015C7A2CEA4DB579DEEFBB632B3182225 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___count2;
		int32_t L_3;
		L_3 = VirtFuncInvoker4< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, bool >::Invoke(6 /* System.Int32 System.Text.Decoder::GetCharCount(System.Byte[],System.Int32,System.Int32,System.Boolean) */, __this, L_0, L_1, L_2, (bool)0);
		return L_3;
	}
}
// System.Int32 I18N.CJK.CP932Decoder::GetCharCount(System.Byte[],System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP932Decoder_GetCharCount_m77688CA44EAFFD64FA63FD3681DFA2806F73D087 (CP932Decoder_t7FA16FF015C7A2CEA4DB579DEEFBB632B3182225 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___index1, int32_t ___count2, bool ___refresh3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___count2;
		DbcsDecoder_CheckRange_mA1765EE1ED3A33C1A7FDA2E0C6E12B64ABBDBBCA(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = 0;
		int32_t L_3 = __this->get_last_byte_count_4();
		V_2 = L_3;
		goto IL_004f;
	}

IL_0014:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___bytes0;
		int32_t L_5 = ___index1;
		int32_t L_6 = L_5;
		___index1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
		NullCheck(L_4);
		int32_t L_7 = L_6;
		uint8_t L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_1 = L_8;
		int32_t L_9 = ___count2;
		___count2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1));
		int32_t L_10 = V_2;
		if (L_10)
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_11 = V_1;
		if ((((int32_t)L_11) < ((int32_t)((int32_t)129))))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) <= ((int32_t)((int32_t)159))))
		{
			goto IL_0045;
		}
	}

IL_0035:
	{
		int32_t L_13 = V_1;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)224))))
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_14 = V_1;
		if ((((int32_t)L_14) > ((int32_t)((int32_t)239))))
		{
			goto IL_0047;
		}
	}

IL_0045:
	{
		int32_t L_15 = V_1;
		V_2 = L_15;
	}

IL_0047:
	{
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
		goto IL_004f;
	}

IL_004d:
	{
		V_2 = 0;
	}

IL_004f:
	{
		int32_t L_17 = ___count2;
		if ((((int32_t)L_17) > ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		bool L_18 = ___refresh3;
		if (!L_18)
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_19 = V_2;
		if (!L_19)
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_005e:
	{
		__this->set_last_byte_count_4(0);
		goto IL_006e;
	}

IL_0067:
	{
		int32_t L_21 = V_2;
		__this->set_last_byte_count_4(L_21);
	}

IL_006e:
	{
		int32_t L_22 = V_0;
		return L_22;
	}
}
// System.Int32 I18N.CJK.CP932Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP932Decoder_GetChars_mC30A6DB96F1995EAF35C0B278C84466C612FF488 (CP932Decoder_t7FA16FF015C7A2CEA4DB579DEEFBB632B3182225 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars3, int32_t ___charIndex4, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		int32_t L_1 = ___byteIndex1;
		int32_t L_2 = ___byteCount2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = ___chars3;
		int32_t L_4 = ___charIndex4;
		int32_t L_5;
		L_5 = VirtFuncInvoker6< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, int32_t, bool >::Invoke(9 /* System.Int32 System.Text.Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Boolean) */, __this, L_0, L_1, L_2, L_3, L_4, (bool)0);
		return L_5;
	}
}
// System.Int32 I18N.CJK.CP932Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP932Decoder_GetChars_m3F2A6FD3FBBCEBF13C76C366E744DD3EA9A4152A (CP932Decoder_t7FA16FF015C7A2CEA4DB579DEEFBB632B3182225 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars3, int32_t ___charIndex4, bool ___refresh5, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_5 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		int32_t L_1 = ___byteIndex1;
		int32_t L_2 = ___byteCount2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = ___chars3;
		int32_t L_4 = ___charIndex4;
		DbcsDecoder_CheckRange_m7E0B5C58A934289C66DEDDB0C93B3B33E0F9F38C(__this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		int32_t L_5 = ___charIndex4;
		V_0 = L_5;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_6 = ___chars3;
		NullCheck(L_6);
		V_1 = ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)));
		int32_t L_7 = __this->get_last_byte_chars_5();
		V_4 = L_7;
		JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848 * L_8 = __this->get_convert_3();
		NullCheck(L_8);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = L_8->get_jisx0208ToUnicode_5();
		V_5 = L_9;
		goto IL_01b3;
	}

IL_002f:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = ___bytes0;
		int32_t L_11 = ___byteIndex1;
		int32_t L_12 = L_11;
		___byteIndex1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
		NullCheck(L_10);
		int32_t L_13 = L_12;
		uint8_t L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_2 = L_14;
		int32_t L_15 = ___byteCount2;
		___byteCount2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)1));
		int32_t L_16 = V_4;
		if (L_16)
		{
			goto IL_00d6;
		}
	}
	{
		int32_t L_17 = V_0;
		int32_t L_18 = V_1;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_005d;
		}
	}
	{
		String_t* L_19;
		L_19 = Strings_GetString_m84B4205ADF9BD4AB96836BE778BE485A0DDCF9A1(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral10562201C2A7AB420A8DECFE1373D48FBF48A6AE)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_20 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_20, L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4F04E415359BAAEA12C3DA482EAACC98D2F7EDC8)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CP932Decoder_GetChars_m3F2A6FD3FBBCEBF13C76C366E744DD3EA9A4152A_RuntimeMethod_var)));
	}

IL_005d:
	{
		int32_t L_21 = V_2;
		if ((((int32_t)L_21) < ((int32_t)((int32_t)129))))
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_22 = V_2;
		if ((((int32_t)L_22) <= ((int32_t)((int32_t)159))))
		{
			goto IL_007d;
		}
	}

IL_006d:
	{
		int32_t L_23 = V_2;
		if ((((int32_t)L_23) < ((int32_t)((int32_t)224))))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_24 = V_2;
		if ((((int32_t)L_24) > ((int32_t)((int32_t)239))))
		{
			goto IL_0085;
		}
	}

IL_007d:
	{
		int32_t L_25 = V_2;
		V_4 = L_25;
		goto IL_01b3;
	}

IL_0085:
	{
		int32_t L_26 = V_2;
		if ((((int32_t)L_26) >= ((int32_t)((int32_t)128))))
		{
			goto IL_009c;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_27 = ___chars3;
		int32_t L_28 = V_0;
		int32_t L_29 = L_28;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
		int32_t L_30 = V_2;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (Il2CppChar)((int32_t)((uint16_t)L_30)));
		goto IL_01b3;
	}

IL_009c:
	{
		int32_t L_31 = V_2;
		if ((((int32_t)L_31) < ((int32_t)((int32_t)161))))
		{
			goto IL_00c7;
		}
	}
	{
		int32_t L_32 = V_2;
		if ((((int32_t)L_32) > ((int32_t)((int32_t)223))))
		{
			goto IL_00c7;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_33 = ___chars3;
		int32_t L_34 = V_0;
		int32_t L_35 = L_34;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
		int32_t L_36 = V_2;
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_35), (Il2CppChar)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_36, (int32_t)((int32_t)161))), (int32_t)((int32_t)65377))))));
		goto IL_01b3;
	}

IL_00c7:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_37 = ___chars3;
		int32_t L_38 = V_0;
		int32_t L_39 = L_38;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_39), (Il2CppChar)((int32_t)63));
		goto IL_01b3;
	}

IL_00d6:
	{
		int32_t L_40 = V_4;
		if ((((int32_t)L_40) < ((int32_t)((int32_t)129))))
		{
			goto IL_00f9;
		}
	}
	{
		int32_t L_41 = V_4;
		if ((((int32_t)L_41) > ((int32_t)((int32_t)159))))
		{
			goto IL_00f9;
		}
	}
	{
		int32_t L_42 = V_4;
		V_3 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_42, (int32_t)((int32_t)129))), (int32_t)((int32_t)188)));
		goto IL_0147;
	}

IL_00f9:
	{
		int32_t L_43 = V_4;
		if ((((int32_t)L_43) < ((int32_t)((int32_t)240))))
		{
			goto IL_0135;
		}
	}
	{
		int32_t L_44 = V_4;
		if ((((int32_t)L_44) > ((int32_t)((int32_t)252))))
		{
			goto IL_0135;
		}
	}
	{
		int32_t L_45 = V_2;
		if ((((int32_t)L_45) > ((int32_t)((int32_t)252))))
		{
			goto IL_0135;
		}
	}
	{
		int32_t L_46 = V_4;
		int32_t L_47 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)57344), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_46, (int32_t)((int32_t)240))), (int32_t)((int32_t)188))))), (int32_t)L_47));
		int32_t L_48 = V_2;
		if ((((int32_t)L_48) <= ((int32_t)((int32_t)127))))
		{
			goto IL_0147;
		}
	}
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_49, (int32_t)1));
		goto IL_0147;
	}

IL_0135:
	{
		int32_t L_50 = V_4;
		V_3 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_50, (int32_t)((int32_t)224))), (int32_t)((int32_t)31))), (int32_t)((int32_t)188)));
	}

IL_0147:
	{
		V_4 = 0;
		int32_t L_51 = V_2;
		if ((((int32_t)L_51) < ((int32_t)((int32_t)64))))
		{
			goto IL_015d;
		}
	}
	{
		int32_t L_52 = V_2;
		if ((((int32_t)L_52) > ((int32_t)((int32_t)126))))
		{
			goto IL_015d;
		}
	}
	{
		int32_t L_53 = V_3;
		int32_t L_54 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_54, (int32_t)((int32_t)64)))));
		goto IL_0188;
	}

IL_015d:
	{
		int32_t L_55 = V_2;
		if ((((int32_t)L_55) < ((int32_t)((int32_t)128))))
		{
			goto IL_017c;
		}
	}
	{
		int32_t L_56 = V_2;
		if ((((int32_t)L_56) > ((int32_t)((int32_t)252))))
		{
			goto IL_017c;
		}
	}
	{
		int32_t L_57 = V_3;
		int32_t L_58 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_58, (int32_t)((int32_t)128))), (int32_t)((int32_t)63)))));
		goto IL_0188;
	}

IL_017c:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_59 = ___chars3;
		int32_t L_60 = V_0;
		int32_t L_61 = L_60;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_61, (int32_t)1));
		NullCheck(L_59);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(L_61), (Il2CppChar)((int32_t)63));
		goto IL_01b3;
	}

IL_0188:
	{
		int32_t L_62 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_62, (int32_t)2));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_63 = V_5;
		int32_t L_64 = V_3;
		NullCheck(L_63);
		int32_t L_65 = L_64;
		uint8_t L_66 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_67 = V_5;
		int32_t L_68 = V_3;
		NullCheck(L_67);
		int32_t L_69 = ((int32_t)il2cpp_codegen_add((int32_t)L_68, (int32_t)1));
		uint8_t L_70 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		V_3 = ((int32_t)((int32_t)L_66|(int32_t)((int32_t)((int32_t)L_70<<(int32_t)8))));
		int32_t L_71 = V_3;
		if (!L_71)
		{
			goto IL_01a9;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_72 = ___chars3;
		int32_t L_73 = V_0;
		int32_t L_74 = L_73;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_74, (int32_t)1));
		int32_t L_75 = V_3;
		NullCheck(L_72);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(L_74), (Il2CppChar)((int32_t)((uint16_t)L_75)));
		goto IL_01b3;
	}

IL_01a9:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_76 = ___chars3;
		int32_t L_77 = V_0;
		int32_t L_78 = L_77;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_78, (int32_t)1));
		NullCheck(L_76);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(L_78), (Il2CppChar)((int32_t)63));
	}

IL_01b3:
	{
		int32_t L_79 = ___byteCount2;
		if ((((int32_t)L_79) > ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		bool L_80 = ___refresh5;
		if (!L_80)
		{
			goto IL_01d8;
		}
	}
	{
		int32_t L_81 = V_4;
		if (!L_81)
		{
			goto IL_01cf;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_82 = ___chars3;
		int32_t L_83 = V_0;
		int32_t L_84 = L_83;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_84, (int32_t)1));
		NullCheck(L_82);
		(L_82)->SetAt(static_cast<il2cpp_array_size_t>(L_84), (Il2CppChar)((int32_t)12539));
	}

IL_01cf:
	{
		__this->set_last_byte_chars_5(0);
		goto IL_01e0;
	}

IL_01d8:
	{
		int32_t L_85 = V_4;
		__this->set_last_byte_chars_5(L_85);
	}

IL_01e0:
	{
		int32_t L_86 = V_0;
		int32_t L_87 = ___charIndex4;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_86, (int32_t)L_87));
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
// System.Void I18N.CJK.CP936::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP936__ctor_m53B4030D0303F4BF1C7D1DAE21DDCDCAB9327976 (CP936_tB81AF17959C1E8D5AE3E4CE146D89F1E295E534F * __this, const RuntimeMethod* method)
{
	{
		DbcsEncoding__ctor_mCEC14C007554B842ADFCEC58E0F316C9531AD0B5(__this, ((int32_t)936), /*hidden argument*/NULL);
		return;
	}
}
// I18N.CJK.DbcsConvert I18N.CJK.CP936::GetConvert()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * CP936_GetConvert_mBEA9E5020902819EB1769EADE0C9A267796DD46B (CP936_tB81AF17959C1E8D5AE3E4CE146D89F1E295E534F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6_il2cpp_TypeInfo_var);
		DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * L_0 = ((DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6_StaticFields*)il2cpp_codegen_static_fields_for(DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6_il2cpp_TypeInfo_var))->get_Gb2312_2();
		return L_0;
	}
}
// System.Int32 I18N.CJK.CP936::GetBytesInternal(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP936_GetBytesInternal_mDF0DE6531B280526FD86895A20B0DFB95E190063 (CP936_tB81AF17959C1E8D5AE3E4CE146D89F1E295E534F * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars0, int32_t ___charIndex1, int32_t ___charCount2, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes3, int32_t ___byteIndex4, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * V_3 = NULL;
	EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 * V_4 = NULL;
	int32_t V_5 = 0;
	Il2CppChar V_6 = 0x0;
	uint8_t V_7 = 0x0;
	uint8_t V_8 = 0x0;
	int32_t V_9 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___byteIndex4;
		V_0 = L_0;
		int32_t L_1 = ___charIndex1;
		int32_t L_2 = ___charCount2;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___bytes3;
		if (L_3)
		{
			goto IL_000e;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0012;
	}

IL_000e:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___bytes3;
		NullCheck(L_4);
		G_B3_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)));
	}

IL_0012:
	{
		V_2 = G_B3_0;
		DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * L_5;
		L_5 = VirtFuncInvoker0< DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * >::Invoke(47 /* I18N.CJK.DbcsConvert I18N.CJK.DbcsEncoding::GetConvert() */, __this);
		V_3 = L_5;
		V_4 = (EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 *)NULL;
		int32_t L_6 = ___charIndex1;
		V_5 = L_6;
		goto IL_00bd;
	}

IL_0025:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_7 = ___chars0;
		int32_t L_8 = V_5;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		uint16_t L_10 = (uint16_t)(L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_6 = L_10;
		Il2CppChar L_11 = V_6;
		if ((((int32_t)L_11) <= ((int32_t)((int32_t)128))))
		{
			goto IL_003d;
		}
	}
	{
		Il2CppChar L_12 = V_6;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_0054;
		}
	}

IL_003d:
	{
		int32_t L_13 = ___byteIndex4;
		int32_t L_14 = L_13;
		___byteIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
		V_9 = L_14;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = ___bytes3;
		if (!L_15)
		{
			goto IL_00b2;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = ___bytes3;
		int32_t L_17 = V_9;
		Il2CppChar L_18 = V_6;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (uint8_t)((int32_t)((uint8_t)L_18)));
		goto IL_00b2;
	}

IL_0054:
	{
		DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * L_19 = V_3;
		NullCheck(L_19);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_20 = L_19->get_u2n_1();
		Il2CppChar L_21 = V_6;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_21, (int32_t)2)), (int32_t)1));
		uint8_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_7 = L_23;
		DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * L_24 = V_3;
		NullCheck(L_24);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_25 = L_24->get_u2n_1();
		Il2CppChar L_26 = V_6;
		NullCheck(L_25);
		int32_t L_27 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_26, (int32_t)2));
		uint8_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_8 = L_28;
		uint8_t L_29 = V_7;
		if (L_29)
		{
			goto IL_008e;
		}
	}
	{
		uint8_t L_30 = V_8;
		if (L_30)
		{
			goto IL_008e;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_31 = ___chars0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_32 = ___bytes3;
		MonoSafeEncoding_HandleFallback_mEA25FB4276523DC9F36C3C03F97F7682C0C31DDF(__this, (EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 **)(&V_4), L_31, (int32_t*)(&V_5), (int32_t*)(&___charCount2), L_32, (int32_t*)(&___byteIndex4), (int32_t*)(&V_2), NULL, /*hidden argument*/NULL);
		goto IL_00b2;
	}

IL_008e:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_33 = ___bytes3;
		if (!L_33)
		{
			goto IL_00ac;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_34 = ___bytes3;
		int32_t L_35 = ___byteIndex4;
		int32_t L_36 = L_35;
		___byteIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
		uint8_t L_37 = V_7;
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (uint8_t)L_37);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_38 = ___bytes3;
		int32_t L_39 = ___byteIndex4;
		int32_t L_40 = L_39;
		___byteIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1));
		uint8_t L_41 = V_8;
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(L_40), (uint8_t)L_41);
		goto IL_00b2;
	}

IL_00ac:
	{
		int32_t L_42 = ___byteIndex4;
		___byteIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)2));
	}

IL_00b2:
	{
		int32_t L_43 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1));
		int32_t L_44 = ___charCount2;
		___charCount2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_44, (int32_t)1));
	}

IL_00bd:
	{
		int32_t L_45 = V_5;
		int32_t L_46 = V_1;
		if ((((int32_t)L_45) < ((int32_t)L_46)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_47 = ___byteIndex4;
		int32_t L_48 = V_0;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_47, (int32_t)L_48));
	}
}
// System.Int32 I18N.CJK.CP936::GetByteCount(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP936_GetByteCount_mC633F255529F6D937ACFA126E4D6C2A90479B392 (CP936_tB81AF17959C1E8D5AE3E4CE146D89F1E295E534F * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = ___chars0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___count2;
		int32_t L_3;
		L_3 = VirtFuncInvoker5< int32_t, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, int32_t, int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t >::Invoke(24 /* System.Int32 System.Text.Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32) */, __this, L_0, L_1, L_2, (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL, 0);
		return L_3;
	}
}
// System.Int32 I18N.CJK.CP936::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP936_GetBytes_mE529087DB7F73E4B6A25CF1E93E4D7B9391B7C57 (CP936_tB81AF17959C1E8D5AE3E4CE146D89F1E295E534F * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars0, int32_t ___charIndex1, int32_t ___charCount2, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes3, int32_t ___byteIndex4, const RuntimeMethod* method)
{
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = ___chars0;
		int32_t L_1 = ___charIndex1;
		int32_t L_2 = ___charCount2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___bytes3;
		int32_t L_4 = ___byteIndex4;
		int32_t L_5;
		L_5 = CP936_GetBytesInternal_mDF0DE6531B280526FD86895A20B0DFB95E190063(__this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Int32 I18N.CJK.CP936::GetCharCount(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP936_GetCharCount_m94511E892513B8C24C4B422BB1AA0DC449D79834 (CP936_tB81AF17959C1E8D5AE3E4CE146D89F1E295E534F * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	{
		Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * L_0;
		L_0 = VirtFuncInvoker0< Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * >::Invoke(38 /* System.Text.Decoder System.Text.Encoding::GetDecoder() */, __this);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___bytes0;
		int32_t L_2 = ___index1;
		int32_t L_3 = ___count2;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Text.Decoder::GetCharCount(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// System.Int32 I18N.CJK.CP936::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP936_GetChars_m74D324A9224980881498E87D445285ED8F46D404 (CP936_tB81AF17959C1E8D5AE3E4CE146D89F1E295E534F * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars3, int32_t ___charIndex4, const RuntimeMethod* method)
{
	{
		Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * L_0;
		L_0 = VirtFuncInvoker0< Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * >::Invoke(38 /* System.Text.Decoder System.Text.Encoding::GetDecoder() */, __this);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___bytes0;
		int32_t L_2 = ___byteIndex1;
		int32_t L_3 = ___byteCount2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4 = ___chars3;
		int32_t L_5 = ___charIndex4;
		NullCheck(L_0);
		int32_t L_6;
		L_6 = VirtFuncInvoker5< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, int32_t >::Invoke(8 /* System.Int32 System.Text.Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32) */, L_0, L_1, L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Text.Decoder I18N.CJK.CP936::GetDecoder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * CP936_GetDecoder_m85018FB8DD3D8BD8785EE4E4C8A3914D57102CA6 (CP936_tB81AF17959C1E8D5AE3E4CE146D89F1E295E534F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CP936Decoder_t4E9A8F2DD551EFFA508441B10EDAD4200D32E120_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * L_0;
		L_0 = VirtFuncInvoker0< DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * >::Invoke(47 /* I18N.CJK.DbcsConvert I18N.CJK.DbcsEncoding::GetConvert() */, __this);
		CP936Decoder_t4E9A8F2DD551EFFA508441B10EDAD4200D32E120 * L_1 = (CP936Decoder_t4E9A8F2DD551EFFA508441B10EDAD4200D32E120 *)il2cpp_codegen_object_new(CP936Decoder_t4E9A8F2DD551EFFA508441B10EDAD4200D32E120_il2cpp_TypeInfo_var);
		CP936Decoder__ctor_mA490711D4E387D8EC60906A161461484E68049BE(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String I18N.CJK.CP936::get_BodyName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CP936_get_BodyName_m9AFDB95F1FC4B5A5346D152A6BB98C2BFA94E537 (CP936_tB81AF17959C1E8D5AE3E4CE146D89F1E295E534F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A4CAA44E577D721780626FDA762744166099063);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral7A4CAA44E577D721780626FDA762744166099063;
	}
}
// System.String I18N.CJK.CP936::get_EncodingName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CP936_get_EncodingName_m927C8641F060F56488E821A2BDDFBB7F51055C92 (CP936_tB81AF17959C1E8D5AE3E4CE146D89F1E295E534F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB44D305293AF0B75A15DDA90DD538CE236474E7);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralAB44D305293AF0B75A15DDA90DD538CE236474E7;
	}
}
// System.String I18N.CJK.CP936::get_HeaderName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CP936_get_HeaderName_mDA62FC103DF3A06506F5BB6A067997F19C6B763F (CP936_tB81AF17959C1E8D5AE3E4CE146D89F1E295E534F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A4CAA44E577D721780626FDA762744166099063);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral7A4CAA44E577D721780626FDA762744166099063;
	}
}
// System.Boolean I18N.CJK.CP936::get_IsBrowserDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CP936_get_IsBrowserDisplay_m6265C183B1D8C420745FCAA16997937429676CB1 (CP936_tB81AF17959C1E8D5AE3E4CE146D89F1E295E534F * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Boolean I18N.CJK.CP936::get_IsBrowserSave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CP936_get_IsBrowserSave_mA8254FB0E3FB6FC36DB8A7D5AE0BEEA230A28C10 (CP936_tB81AF17959C1E8D5AE3E4CE146D89F1E295E534F * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Boolean I18N.CJK.CP936::get_IsMailNewsDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CP936_get_IsMailNewsDisplay_m25018188B5BA8952E2E771613D4EBF8987697992 (CP936_tB81AF17959C1E8D5AE3E4CE146D89F1E295E534F * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Boolean I18N.CJK.CP936::get_IsMailNewsSave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CP936_get_IsMailNewsSave_mC295E2A9869889697DD16C65E86835FC42C7F978 (CP936_tB81AF17959C1E8D5AE3E4CE146D89F1E295E534F * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.String I18N.CJK.CP936::get_WebName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CP936_get_WebName_m866BE219C3F6A9CAE396EE14055EDF9C1BC36496 (CP936_tB81AF17959C1E8D5AE3E4CE146D89F1E295E534F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A4CAA44E577D721780626FDA762744166099063);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral7A4CAA44E577D721780626FDA762744166099063;
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
// System.Void I18N.CJK.CP936Decoder::.ctor(I18N.CJK.DbcsConvert)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP936Decoder__ctor_mA490711D4E387D8EC60906A161461484E68049BE (CP936Decoder_t4E9A8F2DD551EFFA508441B10EDAD4200D32E120 * __this, DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * ___convert0, const RuntimeMethod* method)
{
	{
		DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * L_0 = ___convert0;
		DbcsDecoder__ctor_mFF26DCA3EA24AA43C4CF5D8191E25D73AFDA41F4(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 I18N.CJK.CP936Decoder::GetCharCount(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP936Decoder_GetCharCount_m599ADD29321EA3C5965833867CC73C07C5DD4A39 (CP936Decoder_t4E9A8F2DD551EFFA508441B10EDAD4200D32E120 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___count2;
		int32_t L_3;
		L_3 = VirtFuncInvoker4< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, bool >::Invoke(6 /* System.Int32 System.Text.Decoder::GetCharCount(System.Byte[],System.Int32,System.Int32,System.Boolean) */, __this, L_0, L_1, L_2, (bool)0);
		return L_3;
	}
}
// System.Int32 I18N.CJK.CP936Decoder::GetCharCount(System.Byte[],System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP936Decoder_GetCharCount_mB6C5504CC4838ED27336F0AE0AE1443A2A49EB2E (CP936Decoder_t4E9A8F2DD551EFFA508441B10EDAD4200D32E120 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___index1, int32_t ___count2, bool ___refresh3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___count2;
		DbcsDecoder_CheckRange_mA1765EE1ED3A33C1A7FDA2E0C6E12B64ABBDBBCA(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		int32_t L_3 = __this->get_last_byte_count_3();
		V_0 = L_3;
		__this->set_last_byte_count_3(0);
		V_1 = 0;
		goto IL_0047;
	}

IL_001b:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___bytes0;
		int32_t L_5 = ___index1;
		int32_t L_6 = L_5;
		___index1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
		NullCheck(L_4);
		int32_t L_7 = L_6;
		uint8_t L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = L_8;
		int32_t L_9 = V_0;
		if (L_9)
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_10 = V_2;
		if ((((int32_t)L_10) <= ((int32_t)((int32_t)128))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_003d;
		}
	}

IL_0037:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
		goto IL_0047;
	}

IL_003d:
	{
		int32_t L_13 = V_2;
		V_0 = L_13;
		goto IL_0047;
	}

IL_0041:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
		V_0 = 0;
	}

IL_0047:
	{
		int32_t L_15 = ___count2;
		int32_t L_16 = L_15;
		___count2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1));
		if ((((int32_t)L_16) > ((int32_t)0)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_17 = V_0;
		if (!L_17)
		{
			goto IL_006b;
		}
	}
	{
		bool L_18 = ___refresh3;
		if (!L_18)
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
		__this->set_last_byte_count_3(0);
		goto IL_006b;
	}

IL_0064:
	{
		int32_t L_20 = V_0;
		__this->set_last_byte_count_3(L_20);
	}

IL_006b:
	{
		int32_t L_21 = V_1;
		return L_21;
	}
}
// System.Int32 I18N.CJK.CP936Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP936Decoder_GetChars_mBA76093E1EA991FCDB37C3A6B245F3803DF78A55 (CP936Decoder_t4E9A8F2DD551EFFA508441B10EDAD4200D32E120 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars3, int32_t ___charIndex4, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		int32_t L_1 = ___byteIndex1;
		int32_t L_2 = ___byteCount2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = ___chars3;
		int32_t L_4 = ___charIndex4;
		int32_t L_5;
		L_5 = VirtFuncInvoker6< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, int32_t, bool >::Invoke(9 /* System.Int32 System.Text.Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Boolean) */, __this, L_0, L_1, L_2, L_3, L_4, (bool)0);
		return L_5;
	}
}
// System.Int32 I18N.CJK.CP936Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP936Decoder_GetChars_m36DA4465A0FEC2C7CC9E7E3F8778BA6B31BA170B (CP936Decoder_t4E9A8F2DD551EFFA508441B10EDAD4200D32E120 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars3, int32_t ___charIndex4, bool ___refresh5, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Il2CppChar V_4 = 0x0;
	int32_t G_B12_0 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		int32_t L_1 = ___byteIndex1;
		int32_t L_2 = ___byteCount2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = ___chars3;
		int32_t L_4 = ___charIndex4;
		DbcsDecoder_CheckRange_m7E0B5C58A934289C66DEDDB0C93B3B33E0F9F38C(__this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		int32_t L_5 = ___charIndex4;
		V_0 = L_5;
		int32_t L_6 = __this->get_last_byte_bytes_4();
		V_1 = L_6;
		__this->set_last_byte_bytes_4(0);
		goto IL_00d6;
	}

IL_0023:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = ___bytes0;
		int32_t L_8 = ___byteIndex1;
		int32_t L_9 = L_8;
		___byteIndex1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		NullCheck(L_7);
		int32_t L_10 = L_9;
		uint8_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_2 = L_11;
		int32_t L_12 = V_1;
		if (L_12)
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_13 = V_2;
		if ((((int32_t)L_13) <= ((int32_t)((int32_t)128))))
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_0050;
		}
	}

IL_003f:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_15 = ___chars3;
		int32_t L_16 = ___charIndex4;
		int32_t L_17 = L_16;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		int32_t L_18 = V_2;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (Il2CppChar)((int32_t)((uint16_t)L_18)));
		goto IL_00d6;
	}

IL_0050:
	{
		int32_t L_19 = V_2;
		if ((((int32_t)L_19) < ((int32_t)((int32_t)129))))
		{
			goto IL_00d6;
		}
	}
	{
		int32_t L_20 = V_2;
		if ((((int32_t)L_20) >= ((int32_t)((int32_t)255))))
		{
			goto IL_00d6;
		}
	}
	{
		int32_t L_21 = V_2;
		V_1 = L_21;
		goto IL_00d6;
	}

IL_0064:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)((int32_t)129))), (int32_t)((int32_t)191))), (int32_t)L_23)), (int32_t)((int32_t)64))), (int32_t)2));
		int32_t L_24 = V_3;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00b3;
		}
	}
	{
		int32_t L_25 = V_3;
		DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * L_26 = ((DbcsDecoder_tE3C4C6E22EB2E09258D84C6FF2FD7FBAD7BF7F8F *)__this)->get_convert_2();
		NullCheck(L_26);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_27 = L_26->get_n2u_0();
		NullCheck(L_27);
		if ((((int32_t)L_25) >= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length))))))
		{
			goto IL_00b3;
		}
	}
	{
		DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * L_28 = ((DbcsDecoder_tE3C4C6E22EB2E09258D84C6FF2FD7FBAD7BF7F8F *)__this)->get_convert_2();
		NullCheck(L_28);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_29 = L_28->get_n2u_0();
		int32_t L_30 = V_3;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		uint8_t L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * L_33 = ((DbcsDecoder_tE3C4C6E22EB2E09258D84C6FF2FD7FBAD7BF7F8F *)__this)->get_convert_2();
		NullCheck(L_33);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_34 = L_33->get_n2u_0();
		int32_t L_35 = V_3;
		NullCheck(L_34);
		int32_t L_36 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
		uint8_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		G_B12_0 = ((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_37, (int32_t)((int32_t)256)))))));
		goto IL_00b4;
	}

IL_00b3:
	{
		G_B12_0 = 0;
	}

IL_00b4:
	{
		V_4 = G_B12_0;
		Il2CppChar L_38 = V_4;
		if (L_38)
		{
			goto IL_00c8;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_39 = ___chars3;
		int32_t L_40 = ___charIndex4;
		int32_t L_41 = L_40;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(L_41), (Il2CppChar)((int32_t)63));
		goto IL_00d4;
	}

IL_00c8:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_42 = ___chars3;
		int32_t L_43 = ___charIndex4;
		int32_t L_44 = L_43;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
		Il2CppChar L_45 = V_4;
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(L_44), (Il2CppChar)L_45);
	}

IL_00d4:
	{
		V_1 = 0;
	}

IL_00d6:
	{
		int32_t L_46 = ___byteCount2;
		int32_t L_47 = L_46;
		___byteCount2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_47, (int32_t)1));
		if ((((int32_t)L_47) > ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_48 = V_1;
		if (!L_48)
		{
			goto IL_0105;
		}
	}
	{
		bool L_49 = ___refresh5;
		if (!L_49)
		{
			goto IL_00fe;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_50 = ___chars3;
		int32_t L_51 = ___charIndex4;
		int32_t L_52 = L_51;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1));
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(L_52), (Il2CppChar)((int32_t)63));
		__this->set_last_byte_bytes_4(0);
		goto IL_0105;
	}

IL_00fe:
	{
		int32_t L_53 = V_1;
		__this->set_last_byte_bytes_4(L_53);
	}

IL_0105:
	{
		int32_t L_54 = ___charIndex4;
		int32_t L_55 = V_0;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_54, (int32_t)L_55));
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
// System.Void I18N.CJK.CP949::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP949__ctor_m64E3AE7EAB0A16194B9EEFCECF8D96189C188413 (CP949_t6F6698BB1EE821BF679191F45FA5E32AED627F19 * __this, const RuntimeMethod* method)
{
	{
		KoreanEncoding__ctor_m5DAFC4E50A88F3B5486479614660AFEFFFADB0D1(__this, ((int32_t)949), (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.String I18N.CJK.CP949::get_BodyName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CP949_get_BodyName_m77AA2FF64B7CC6F8DC98775B3EBC8FA7EA76F3D5 (CP949_t6F6698BB1EE821BF679191F45FA5E32AED627F19 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2963F884691C93A4D24C3B6684EBC449253AC7B0);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral2963F884691C93A4D24C3B6684EBC449253AC7B0;
	}
}
// System.String I18N.CJK.CP949::get_EncodingName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CP949_get_EncodingName_mC143484FFF97057350153FFFDE40AF18A53DD47B (CP949_t6F6698BB1EE821BF679191F45FA5E32AED627F19 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C17BEF3EFFF7AD2B5A5AA3C0CA404589CE48C27);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral7C17BEF3EFFF7AD2B5A5AA3C0CA404589CE48C27;
	}
}
// System.String I18N.CJK.CP949::get_HeaderName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CP949_get_HeaderName_m49C70BB29B8845E1A7B34BFE8A928244164F4DA1 (CP949_t6F6698BB1EE821BF679191F45FA5E32AED627F19 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2963F884691C93A4D24C3B6684EBC449253AC7B0);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral2963F884691C93A4D24C3B6684EBC449253AC7B0;
	}
}
// System.String I18N.CJK.CP949::get_WebName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CP949_get_WebName_m323BFB20E8544E81674B06F356F7C38888014A2C (CP949_t6F6698BB1EE821BF679191F45FA5E32AED627F19 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2963F884691C93A4D24C3B6684EBC449253AC7B0);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral2963F884691C93A4D24C3B6684EBC449253AC7B0;
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
// System.Void I18N.CJK.CP950::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP950__ctor_mC31215BAEEDD9FEB1DF2282F8E17B98C84F49118 (CP950_tC49816E378AA2453DD6F08701D7657C44E47FEDC * __this, const RuntimeMethod* method)
{
	{
		DbcsEncoding__ctor_mCEC14C007554B842ADFCEC58E0F316C9531AD0B5(__this, ((int32_t)950), /*hidden argument*/NULL);
		return;
	}
}
// I18N.CJK.DbcsConvert I18N.CJK.CP950::GetConvert()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * CP950_GetConvert_m937B32C1549EE298503C1D76AF0D9DBC0D080435 (CP950_tC49816E378AA2453DD6F08701D7657C44E47FEDC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6_il2cpp_TypeInfo_var);
		DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * L_0 = ((DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6_StaticFields*)il2cpp_codegen_static_fields_for(DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6_il2cpp_TypeInfo_var))->get_Big5_3();
		return L_0;
	}
}
// System.Int32 I18N.CJK.CP950::GetByteCount(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP950_GetByteCount_m6EE83DB2C0D9FD085908A6FE3364F931B514D36D (CP950_tC49816E378AA2453DD6F08701D7657C44E47FEDC * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	uint8_t V_3 = 0x0;
	uint8_t V_4 = 0x0;
	{
		DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * L_0;
		L_0 = VirtFuncInvoker0< DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * >::Invoke(47 /* I18N.CJK.DbcsConvert I18N.CJK.DbcsEncoding::GetConvert() */, __this);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0054;
	}

IL_000b:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = ___chars0;
		int32_t L_2 = ___index1;
		int32_t L_3 = L_2;
		___index1 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
		NullCheck(L_1);
		int32_t L_4 = L_3;
		uint16_t L_5 = (uint16_t)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		Il2CppChar L_6 = V_2;
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)128))))
		{
			goto IL_0024;
		}
	}
	{
		Il2CppChar L_7 = V_2;
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_002a;
		}
	}

IL_0024:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
		goto IL_0054;
	}

IL_002a:
	{
		DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * L_9 = V_0;
		NullCheck(L_9);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = L_9->get_u2n_1();
		Il2CppChar L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_11, (int32_t)2)), (int32_t)1));
		uint8_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = L_13;
		DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * L_14 = V_0;
		NullCheck(L_14);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = L_14->get_u2n_1();
		Il2CppChar L_16 = V_2;
		NullCheck(L_15);
		int32_t L_17 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_16, (int32_t)2));
		uint8_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_4 = L_18;
		uint8_t L_19 = V_3;
		if (L_19)
		{
			goto IL_0050;
		}
	}
	{
		uint8_t L_20 = V_4;
		if (L_20)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
		goto IL_0054;
	}

IL_0050:
	{
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)2));
	}

IL_0054:
	{
		int32_t L_23 = ___count2;
		int32_t L_24 = L_23;
		___count2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)1));
		if ((((int32_t)L_24) > ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_25 = V_1;
		return L_25;
	}
}
// System.Int32 I18N.CJK.CP950::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP950_GetBytes_m5B217EE682128935666C69B6F6B87BD0E2D0ECFB (CP950_tC49816E378AA2453DD6F08701D7657C44E47FEDC * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars0, int32_t ___charIndex1, int32_t ___charCount2, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes3, int32_t ___byteIndex4, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * V_2 = NULL;
	EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 * V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Il2CppChar V_6 = 0x0;
	uint8_t V_7 = 0x0;
	uint8_t V_8 = 0x0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes3;
		NullCheck(L_0);
		V_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		int32_t L_1 = ___charIndex1;
		int32_t L_2 = ___charCount2;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2));
		DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * L_3;
		L_3 = VirtFuncInvoker0< DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * >::Invoke(47 /* I18N.CJK.DbcsConvert I18N.CJK.DbcsEncoding::GetConvert() */, __this);
		V_2 = L_3;
		V_3 = (EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 *)NULL;
		int32_t L_4 = ___byteIndex4;
		V_4 = L_4;
		int32_t L_5 = ___charIndex1;
		V_5 = L_5;
		goto IL_00a2;
	}

IL_001e:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_6 = ___chars0;
		int32_t L_7 = V_5;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint16_t L_9 = (uint16_t)(L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_6 = L_9;
		Il2CppChar L_10 = V_6;
		if ((((int32_t)L_10) <= ((int32_t)((int32_t)128))))
		{
			goto IL_0036;
		}
	}
	{
		Il2CppChar L_11 = V_6;
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_0045;
		}
	}

IL_0036:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = ___bytes3;
		int32_t L_13 = ___byteIndex4;
		int32_t L_14 = L_13;
		___byteIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
		Il2CppChar L_15 = V_6;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (uint8_t)((int32_t)((uint8_t)L_15)));
		goto IL_0097;
	}

IL_0045:
	{
		DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * L_16 = V_2;
		NullCheck(L_16);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17 = L_16->get_u2n_1();
		Il2CppChar L_18 = V_6;
		NullCheck(L_17);
		int32_t L_19 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_18, (int32_t)2)), (int32_t)1));
		uint8_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_7 = L_20;
		DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * L_21 = V_2;
		NullCheck(L_21);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_22 = L_21->get_u2n_1();
		Il2CppChar L_23 = V_6;
		NullCheck(L_22);
		int32_t L_24 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_23, (int32_t)2));
		uint8_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_8 = L_25;
		uint8_t L_26 = V_7;
		if (L_26)
		{
			goto IL_007f;
		}
	}
	{
		uint8_t L_27 = V_8;
		if (L_27)
		{
			goto IL_007f;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_28 = ___chars0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_29 = ___bytes3;
		MonoSafeEncoding_HandleFallback_mEA25FB4276523DC9F36C3C03F97F7682C0C31DDF(__this, (EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 **)(&V_3), L_28, (int32_t*)(&V_5), (int32_t*)(&___charCount2), L_29, (int32_t*)(&___byteIndex4), (int32_t*)(&V_0), NULL, /*hidden argument*/NULL);
		goto IL_0097;
	}

IL_007f:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_30 = ___bytes3;
		int32_t L_31 = ___byteIndex4;
		int32_t L_32 = L_31;
		___byteIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
		uint8_t L_33 = V_7;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (uint8_t)L_33);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_34 = ___bytes3;
		int32_t L_35 = ___byteIndex4;
		int32_t L_36 = L_35;
		___byteIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
		uint8_t L_37 = V_8;
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (uint8_t)L_37);
	}

IL_0097:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
		int32_t L_39 = ___charCount2;
		___charCount2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)1));
	}

IL_00a2:
	{
		int32_t L_40 = V_5;
		int32_t L_41 = V_1;
		if ((((int32_t)L_40) < ((int32_t)L_41)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_42 = ___byteIndex4;
		int32_t L_43 = V_4;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_42, (int32_t)L_43));
	}
}
// System.Int32 I18N.CJK.CP950::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP950_GetChars_m6DF73D13871F6D15F3CC7DC589E09FA1503E4A77 (CP950_tC49816E378AA2453DD6F08701D7657C44E47FEDC * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars3, int32_t ___charIndex4, const RuntimeMethod* method)
{
	{
		Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * L_0;
		L_0 = VirtFuncInvoker0< Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * >::Invoke(38 /* System.Text.Decoder System.Text.Encoding::GetDecoder() */, __this);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___bytes0;
		int32_t L_2 = ___byteIndex1;
		int32_t L_3 = ___byteCount2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4 = ___chars3;
		int32_t L_5 = ___charIndex4;
		NullCheck(L_0);
		int32_t L_6;
		L_6 = VirtFuncInvoker5< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, int32_t >::Invoke(8 /* System.Int32 System.Text.Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32) */, L_0, L_1, L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Text.Decoder I18N.CJK.CP950::GetDecoder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * CP950_GetDecoder_m4CD63BDC4E988060A339A396C5B1EA97E13FF256 (CP950_tC49816E378AA2453DD6F08701D7657C44E47FEDC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CP950Decoder_t6D8DBBAA197A2D5800980E193F5E09C61B092138_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * L_0;
		L_0 = VirtFuncInvoker0< DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * >::Invoke(47 /* I18N.CJK.DbcsConvert I18N.CJK.DbcsEncoding::GetConvert() */, __this);
		CP950Decoder_t6D8DBBAA197A2D5800980E193F5E09C61B092138 * L_1 = (CP950Decoder_t6D8DBBAA197A2D5800980E193F5E09C61B092138 *)il2cpp_codegen_object_new(CP950Decoder_t6D8DBBAA197A2D5800980E193F5E09C61B092138_il2cpp_TypeInfo_var);
		CP950Decoder__ctor_mDBB57F0B5DA506060A9752A5B0F98BE4B28ACDEE(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String I18N.CJK.CP950::get_BodyName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CP950_get_BodyName_m6B62982994CCB84A9CFA3BFA4B06572F8B8BC08F (CP950_tC49816E378AA2453DD6F08701D7657C44E47FEDC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F81F23BE8E73E4DA13E4AEA38A6717230062C2E);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral5F81F23BE8E73E4DA13E4AEA38A6717230062C2E;
	}
}
// System.String I18N.CJK.CP950::get_EncodingName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CP950_get_EncodingName_m33135B20D33EA75AAE8AEAEF18EB4AA178A550BA (CP950_tC49816E378AA2453DD6F08701D7657C44E47FEDC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55C78D7827EC5F6276BA3568C85612BF051686B2);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral55C78D7827EC5F6276BA3568C85612BF051686B2;
	}
}
// System.String I18N.CJK.CP950::get_HeaderName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CP950_get_HeaderName_mAF2B326B00D6CD4B832165FD103B78042EAC32FC (CP950_tC49816E378AA2453DD6F08701D7657C44E47FEDC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F81F23BE8E73E4DA13E4AEA38A6717230062C2E);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral5F81F23BE8E73E4DA13E4AEA38A6717230062C2E;
	}
}
// System.String I18N.CJK.CP950::get_WebName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CP950_get_WebName_mE4E96C8033871540757175C5DEB8B475C222ADC9 (CP950_tC49816E378AA2453DD6F08701D7657C44E47FEDC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F81F23BE8E73E4DA13E4AEA38A6717230062C2E);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral5F81F23BE8E73E4DA13E4AEA38A6717230062C2E;
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
// System.Void I18N.CJK.CodeTable::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodeTable__ctor_m05F6BC60339A17BD8A883304FB3D0B6D9431D2DA (CodeTable_t24F95BB4E7C0ACFD3C4E68F3A132A0270C05CA03 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodeTable__ctor_m05F6BC60339A17BD8A883304FB3D0B6D9431D2DA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		Assembly_t * L_0;
		L_0 = il2cpp_codegen_get_executing_assembly(CodeTable__ctor_m05F6BC60339A17BD8A883304FB3D0B6D9431D2DA_RuntimeMethod_var);
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_2;
		L_2 = VirtFuncInvoker1< Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *, String_t* >::Invoke(14 /* System.IO.Stream System.Reflection.Assembly::GetManifestResourceStream(System.String) */, L_0, L_1);
		__this->set_stream_0(L_2);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_3 = __this->get_stream_0();
		if (L_3)
		{
			goto IL_0035;
		}
	}
	{
		String_t* L_4;
		L_4 = Strings_GetString_m84B4205ADF9BD4AB96836BE778BE485A0DDCF9A1(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral25D8BC23F831D8EFA6509D258FF7E36469D41625)), /*hidden argument*/NULL);
		String_t* L_5 = ___name0;
		String_t* L_6;
		L_6 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(L_4, L_5, /*hidden argument*/NULL);
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_7 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_7, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CodeTable__ctor_m05F6BC60339A17BD8A883304FB3D0B6D9431D2DA_RuntimeMethod_var)));
	}

IL_0035:
	{
		return;
	}
}
// System.Void I18N.CJK.CodeTable::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodeTable_Dispose_m5E9943D7B65098A6907576DC0E0E6E2C0CEF7C52 (CodeTable_t24F95BB4E7C0ACFD3C4E68F3A132A0270C05CA03 * __this, const RuntimeMethod* method)
{
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get_stream_0();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_1 = __this->get_stream_0();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(13 /* System.Void System.IO.Stream::Close() */, L_1);
		__this->set_stream_0((Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *)NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Byte[] I18N.CJK.CodeTable::GetSection(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* CodeTable_GetSection_m575390C701E870B69912F6591BBF407FD35AC88C (CodeTable_t24F95BB4E7C0ACFD3C4E68F3A132A0270C05CA03 * __this, int32_t ___num0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_2 = NULL;
	int32_t V_3 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_4 = NULL;
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get_stream_0();
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL;
	}

IL_000a:
	{
		V_0 = ((int64_t)((int64_t)0));
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_1 = __this->get_stream_0();
		NullCheck(L_1);
		int64_t L_2;
		L_2 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_1);
		V_1 = L_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)8);
		V_2 = L_3;
		goto IL_0095;
	}

IL_0022:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_4 = __this->get_stream_0();
		int64_t L_5 = V_0;
		NullCheck(L_4);
		VirtActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_4, L_5);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_6 = __this->get_stream_0();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8;
		L_8 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(21 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_6, L_7, 0, 8);
		if ((!(((uint32_t)L_8) == ((uint32_t)8))))
		{
			goto IL_009c;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = V_2;
		NullCheck(L_9);
		int32_t L_10 = 0;
		uint8_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = V_2;
		NullCheck(L_12);
		int32_t L_13 = 1;
		uint8_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16 = 2;
		uint8_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18 = V_2;
		NullCheck(L_18);
		int32_t L_19 = 3;
		uint8_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_21 = V_2;
		NullCheck(L_21);
		int32_t L_22 = 4;
		uint8_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_24 = V_2;
		NullCheck(L_24);
		int32_t L_25 = 5;
		uint8_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_27 = V_2;
		NullCheck(L_27);
		int32_t L_28 = 6;
		uint8_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_30 = V_2;
		NullCheck(L_30);
		int32_t L_31 = 7;
		uint8_t L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_23|(int32_t)((int32_t)((int32_t)L_26<<(int32_t)8))))|(int32_t)((int32_t)((int32_t)L_29<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)L_32<<(int32_t)((int32_t)24)))));
		int32_t L_33 = ___num0;
		if ((!(((uint32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_11|(int32_t)((int32_t)((int32_t)L_14<<(int32_t)8))))|(int32_t)((int32_t)((int32_t)L_17<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)L_20<<(int32_t)((int32_t)24)))))) == ((uint32_t)L_33))))
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_34 = V_3;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_35 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_34);
		V_4 = L_35;
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_36 = __this->get_stream_0();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_37 = V_4;
		int32_t L_38 = V_3;
		NullCheck(L_36);
		int32_t L_39;
		L_39 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(21 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_36, L_37, 0, L_38);
		int32_t L_40 = V_3;
		if ((!(((uint32_t)L_39) == ((uint32_t)L_40))))
		{
			goto IL_009c;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_41 = V_4;
		return L_41;
	}

IL_008e:
	{
		int64_t L_42 = V_0;
		int32_t L_43 = V_3;
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_42, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_add((int32_t)8, (int32_t)L_43))))));
	}

IL_0095:
	{
		int64_t L_44 = V_0;
		int64_t L_45 = V_1;
		if ((((int64_t)((int64_t)il2cpp_codegen_add((int64_t)L_44, (int64_t)((int64_t)((int64_t)8))))) <= ((int64_t)L_45)))
		{
			goto IL_0022;
		}
	}

IL_009c:
	{
		return (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL;
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
// System.Void I18N.CJK.DbcsConvert::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbcsConvert__ctor_m3A4BCB371E1D98A0D7BBEE2AB6B305A3D528C772 (DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * __this, String_t* ___fileName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodeTable_t24F95BB4E7C0ACFD3C4E68F3A132A0270C05CA03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CodeTable_t24F95BB4E7C0ACFD3C4E68F3A132A0270C05CA03 * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___fileName0;
		CodeTable_t24F95BB4E7C0ACFD3C4E68F3A132A0270C05CA03 * L_1 = (CodeTable_t24F95BB4E7C0ACFD3C4E68F3A132A0270C05CA03 *)il2cpp_codegen_object_new(CodeTable_t24F95BB4E7C0ACFD3C4E68F3A132A0270C05CA03_il2cpp_TypeInfo_var);
		CodeTable__ctor_m05F6BC60339A17BD8A883304FB3D0B6D9431D2DA(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		CodeTable_t24F95BB4E7C0ACFD3C4E68F3A132A0270C05CA03 * L_2 = V_0;
		NullCheck(L_2);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3;
		L_3 = CodeTable_GetSection_m575390C701E870B69912F6591BBF407FD35AC88C(L_2, 1, /*hidden argument*/NULL);
		__this->set_n2u_0(L_3);
		CodeTable_t24F95BB4E7C0ACFD3C4E68F3A132A0270C05CA03 * L_4 = V_0;
		NullCheck(L_4);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5;
		L_5 = CodeTable_GetSection_m575390C701E870B69912F6591BBF407FD35AC88C(L_4, 2, /*hidden argument*/NULL);
		__this->set_u2n_1(L_5);
		IL2CPP_LEAVE(0x33, FINALLY_0029);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0029;
	}

FINALLY_0029:
	{ // begin finally (depth: 1)
		{
			CodeTable_t24F95BB4E7C0ACFD3C4E68F3A132A0270C05CA03 * L_6 = V_0;
			if (!L_6)
			{
				goto IL_0032;
			}
		}

IL_002c:
		{
			CodeTable_t24F95BB4E7C0ACFD3C4E68F3A132A0270C05CA03 * L_7 = V_0;
			NullCheck(L_7);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_7);
		}

IL_0032:
		{
			IL2CPP_END_FINALLY(41)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(41)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x33, IL_0033)
	}

IL_0033:
	{
		return;
	}
}
// System.Void I18N.CJK.DbcsConvert::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbcsConvert__cctor_m8C2D4DC8183C566AADEFA6D6EA6A505FD7566196 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B9456FD3CA0E32700AFB53160BCC870B3848FF4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5ECFFDB038BCFA2116D6102731BC2B18BB78E18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEEC3DCC8182BD98C2EEB8C528D7001625C982858);
		s_Il2CppMethodInitialized = true;
	}
	{
		DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * L_0 = (DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 *)il2cpp_codegen_object_new(DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6_il2cpp_TypeInfo_var);
		DbcsConvert__ctor_m3A4BCB371E1D98A0D7BBEE2AB6B305A3D528C772(L_0, _stringLiteralEEC3DCC8182BD98C2EEB8C528D7001625C982858, /*hidden argument*/NULL);
		((DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6_StaticFields*)il2cpp_codegen_static_fields_for(DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6_il2cpp_TypeInfo_var))->set_Gb2312_2(L_0);
		DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * L_1 = (DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 *)il2cpp_codegen_object_new(DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6_il2cpp_TypeInfo_var);
		DbcsConvert__ctor_m3A4BCB371E1D98A0D7BBEE2AB6B305A3D528C772(L_1, _stringLiteral1B9456FD3CA0E32700AFB53160BCC870B3848FF4, /*hidden argument*/NULL);
		((DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6_StaticFields*)il2cpp_codegen_static_fields_for(DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6_il2cpp_TypeInfo_var))->set_Big5_3(L_1);
		DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * L_2 = (DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 *)il2cpp_codegen_object_new(DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6_il2cpp_TypeInfo_var);
		DbcsConvert__ctor_m3A4BCB371E1D98A0D7BBEE2AB6B305A3D528C772(L_2, _stringLiteralB5ECFFDB038BCFA2116D6102731BC2B18BB78E18, /*hidden argument*/NULL);
		((DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6_StaticFields*)il2cpp_codegen_static_fields_for(DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6_il2cpp_TypeInfo_var))->set_KS_4(L_2);
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
// System.Void I18N.CJK.DbcsEncoding::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbcsEncoding__ctor_mCEC14C007554B842ADFCEC58E0F316C9531AD0B5 (DbcsEncoding_t97AEDFAC1F40C1EAB9DD5FD68BE7B377FB635ECE * __this, int32_t ___codePage0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___codePage0;
		DbcsEncoding__ctor_m102798630D97C8E241105DE95BDC0885BF7E7173(__this, L_0, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void I18N.CJK.DbcsEncoding::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbcsEncoding__ctor_m102798630D97C8E241105DE95BDC0885BF7E7173 (DbcsEncoding_t97AEDFAC1F40C1EAB9DD5FD68BE7B377FB635ECE * __this, int32_t ___codePage0, int32_t ___windowsCodePage1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___codePage0;
		int32_t L_1 = ___windowsCodePage1;
		MonoSafeEncoding__ctor_m22024C3A28920B9112728E9CF9CF218621D880E5(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 I18N.CJK.DbcsEncoding::GetByteCount(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DbcsEncoding_GetByteCount_m1D2BC9C01A1119C437D3A7199466AD1E1B59CFB2 (DbcsEncoding_t97AEDFAC1F40C1EAB9DD5FD68BE7B377FB635ECE * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DbcsEncoding_GetByteCount_m1D2BC9C01A1119C437D3A7199466AD1E1B59CFB2_RuntimeMethod_var)));
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DbcsEncoding_GetByteCount_m1D2BC9C01A1119C437D3A7199466AD1E1B59CFB2_RuntimeMethod_var)));
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
		int32_t L_8 = ___index1;
		int32_t L_9 = ___count2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_10 = ___chars0;
		NullCheck(L_10);
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_9))) <= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DbcsEncoding_GetByteCount_m1D2BC9C01A1119C437D3A7199466AD1E1B59CFB2_RuntimeMethod_var)));
	}

IL_004e:
	{
		int32_t L_13 = ___count2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_13, (int32_t)2)));
		V_0 = L_14;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_15 = ___chars0;
		int32_t L_16 = ___index1;
		int32_t L_17 = ___count2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18 = V_0;
		int32_t L_19;
		L_19 = VirtFuncInvoker5< int32_t, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, int32_t, int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t >::Invoke(24 /* System.Int32 System.Text.Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32) */, __this, L_15, L_16, L_17, L_18, 0);
		return L_19;
	}
}
// System.Int32 I18N.CJK.DbcsEncoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DbcsEncoding_GetCharCount_m8F68D1584B577284D84D8AD2A6702CB8F8A76A3E (DbcsEncoding_t97AEDFAC1F40C1EAB9DD5FD68BE7B377FB635ECE * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_0 = NULL;
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DbcsEncoding_GetCharCount_m8F68D1584B577284D84D8AD2A6702CB8F8A76A3E_RuntimeMethod_var)));
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DbcsEncoding_GetCharCount_m8F68D1584B577284D84D8AD2A6702CB8F8A76A3E_RuntimeMethod_var)));
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
		int32_t L_8 = ___index1;
		int32_t L_9 = ___count2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = ___bytes0;
		NullCheck(L_10);
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_9))) <= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DbcsEncoding_GetCharCount_m8F68D1584B577284D84D8AD2A6702CB8F8A76A3E_RuntimeMethod_var)));
	}

IL_004e:
	{
		int32_t L_13 = ___count2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_14 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)L_13);
		V_0 = L_14;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = ___bytes0;
		int32_t L_16 = ___index1;
		int32_t L_17 = ___count2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_18 = V_0;
		int32_t L_19;
		L_19 = VirtFuncInvoker5< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, int32_t >::Invoke(33 /* System.Int32 System.Text.Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32) */, __this, L_15, L_16, L_17, L_18, 0);
		return L_19;
	}
}
// System.Int32 I18N.CJK.DbcsEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DbcsEncoding_GetChars_m147E9CBC56AD542FA72C5C5520CE914B5A7AA7F4 (DbcsEncoding_t97AEDFAC1F40C1EAB9DD5FD68BE7B377FB635ECE * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars3, int32_t ___charIndex4, const RuntimeMethod* method)
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DbcsEncoding_GetChars_m147E9CBC56AD542FA72C5C5520CE914B5A7AA7F4_RuntimeMethod_var)));
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DbcsEncoding_GetChars_m147E9CBC56AD542FA72C5C5520CE914B5A7AA7F4_RuntimeMethod_var)));
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DbcsEncoding_GetChars_m147E9CBC56AD542FA72C5C5520CE914B5A7AA7F4_RuntimeMethod_var)));
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
		int32_t L_10 = ___byteIndex1;
		int32_t L_11 = ___byteCount2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = ___bytes0;
		NullCheck(L_12);
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)L_11))) <= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))))
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DbcsEncoding_GetChars_m147E9CBC56AD542FA72C5C5520CE914B5A7AA7F4_RuntimeMethod_var)));
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DbcsEncoding_GetChars_m147E9CBC56AD542FA72C5C5520CE914B5A7AA7F4_RuntimeMethod_var)));
	}

IL_007f:
	{
		return 0;
	}
}
// System.Int32 I18N.CJK.DbcsEncoding::GetMaxByteCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DbcsEncoding_GetMaxByteCount_m32F3C108A1CEC5D22632DE5C68BC12EE195E5958 (DbcsEncoding_t97AEDFAC1F40C1EAB9DD5FD68BE7B377FB635ECE * __this, int32_t ___charCount0, const RuntimeMethod* method)
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DbcsEncoding_GetMaxByteCount_m32F3C108A1CEC5D22632DE5C68BC12EE195E5958_RuntimeMethod_var)));
	}

IL_0019:
	{
		int32_t L_3 = ___charCount0;
		return ((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)2));
	}
}
// System.Int32 I18N.CJK.DbcsEncoding::GetMaxCharCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DbcsEncoding_GetMaxCharCount_mDD5D9C30A50065EF57A12CD1843231AFBF9509E7 (DbcsEncoding_t97AEDFAC1F40C1EAB9DD5FD68BE7B377FB635ECE * __this, int32_t ___byteCount0, const RuntimeMethod* method)
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DbcsEncoding_GetMaxCharCount_mDD5D9C30A50065EF57A12CD1843231AFBF9509E7_RuntimeMethod_var)));
	}

IL_0019:
	{
		int32_t L_3 = ___byteCount0;
		return L_3;
	}
}
// System.Boolean I18N.CJK.DbcsEncoding::get_IsBrowserDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DbcsEncoding_get_IsBrowserDisplay_mD84FFD6DD02CBCC672297CFD240B2D8F801ADB4C (DbcsEncoding_t97AEDFAC1F40C1EAB9DD5FD68BE7B377FB635ECE * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Boolean I18N.CJK.DbcsEncoding::get_IsBrowserSave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DbcsEncoding_get_IsBrowserSave_mD5FB111836A49133EB52F151EBF30938541202C1 (DbcsEncoding_t97AEDFAC1F40C1EAB9DD5FD68BE7B377FB635ECE * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Boolean I18N.CJK.DbcsEncoding::get_IsMailNewsDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DbcsEncoding_get_IsMailNewsDisplay_m6CD3FCB35E485BFCD2E913D1D5F41805873A739B (DbcsEncoding_t97AEDFAC1F40C1EAB9DD5FD68BE7B377FB635ECE * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Boolean I18N.CJK.DbcsEncoding::get_IsMailNewsSave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DbcsEncoding_get_IsMailNewsSave_mFE40AE4B4A39405E160790719153804BD77B7B97 (DbcsEncoding_t97AEDFAC1F40C1EAB9DD5FD68BE7B377FB635ECE * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
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
// System.Void I18N.CJK.ENCbig5::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENCbig5__ctor_m34A5F6A932AAAE26A08BD0391FC888EAEF021B60 (ENCbig5_t4DF6EBF0161669339489FD8732666363AB62D6BF * __this, const RuntimeMethod* method)
{
	{
		CP950__ctor_mC31215BAEEDD9FEB1DF2282F8E17B98C84F49118(__this, /*hidden argument*/NULL);
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
// System.Void I18N.CJK.ENCeuc_jp::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENCeuc_jp__ctor_mA22C887383992052A5F39ED1B74CF9D393937190 (ENCeuc_jp_tF1F1430C246DE14A4248A629174C8B6B21CE0922 * __this, const RuntimeMethod* method)
{
	{
		CP51932__ctor_mD0A6A28B396703C5ACFF23FE77C34E0097033A93(__this, /*hidden argument*/NULL);
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
// System.Void I18N.CJK.ENCeuc_kr::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENCeuc_kr__ctor_m0C544FF53A0C3B3933EB2F0F558588ABE764C637 (ENCeuc_kr_t3F0655385F9D9AEFFCB04FA9E70B10E025072580 * __this, const RuntimeMethod* method)
{
	{
		CP51949__ctor_m25A8E288C93BDF4FFD60E25BFE609921A5F58C76(__this, /*hidden argument*/NULL);
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
// System.Void I18N.CJK.ENCgb18030::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENCgb18030__ctor_m5EE4DDB099EC8C4C770D8DB3D7C5F4892A06B5BB (ENCgb18030_tACDBF747C27117B8BB310AE8A6F44ECDB77B68C8 * __this, const RuntimeMethod* method)
{
	{
		GB18030Encoding__ctor_m68BF70D37FE8B805524F8F1FE8258770640B265B(__this, /*hidden argument*/NULL);
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
// System.Void I18N.CJK.ENCgb2312::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENCgb2312__ctor_m937C2BC829082ACA6DEC7E187A998C65B9CEC0AF (ENCgb2312_tEEEA920BED52A98B9E848AE7000405CE74835864 * __this, const RuntimeMethod* method)
{
	{
		CP936__ctor_m53B4030D0303F4BF1C7D1DAE21DDCDCAB9327976(__this, /*hidden argument*/NULL);
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
// System.Void I18N.CJK.ENCiso_2022_jp::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENCiso_2022_jp__ctor_mECDB9EA895CAD2F96A359B86F73CAA6023066B55 (ENCiso_2022_jp_tCF64B94579193B69CD43C13EAF099C5806DA259D * __this, const RuntimeMethod* method)
{
	{
		CP50220__ctor_mDC4B4AF84BBABB5C99990CB4E83E3166A61793B2(__this, /*hidden argument*/NULL);
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
// System.Void I18N.CJK.ENCshift_jis::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENCshift_jis__ctor_mD79949836B23D4559EC01E478FDFEC0E29DEBC4A (ENCshift_jis_t4E78F10D709157D6D59C0DBB274773B0E24227CF * __this, const RuntimeMethod* method)
{
	{
		CP932__ctor_mF6EAF20EA953762EB68498458C370ABC7C5EF676(__this, /*hidden argument*/NULL);
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
// System.Void I18N.CJK.ENCuhc::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENCuhc__ctor_m71F1498A958165D2C84366630FBAA13C1F2E2E59 (ENCuhc_tE492559A19EB9D9F3ECDC7606C859188C94F3483 * __this, const RuntimeMethod* method)
{
	{
		CP949__ctor_m64E3AE7EAB0A16194B9EEFCECF8D96189C188413(__this, /*hidden argument*/NULL);
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
// System.Void I18N.CJK.GB18030Decoder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GB18030Decoder__ctor_m3220E4F3D5301803A7D9B9824C051EFEBDBCB0D4 (GB18030Decoder_t24EE55D918A003E55F69C1DDEA153C6A189A72B9 * __this, const RuntimeMethod* method)
{
	{
		DbcsDecoder__ctor_mFF26DCA3EA24AA43C4CF5D8191E25D73AFDA41F4(__this, (DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 I18N.CJK.GB18030Decoder::GetCharCount(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GB18030Decoder_GetCharCount_mB855C39B0CC5C28EFCEB796DB4CE724D3732E9CE (GB18030Decoder_t24EE55D918A003E55F69C1DDEA153C6A189A72B9 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___start1, int32_t ___len2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	int64_t V_3 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B18_0 = 0;
	int32_t G_B18_1 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		int32_t L_1 = ___start1;
		int32_t L_2 = ___len2;
		DbcsDecoder_CheckRange_mA1765EE1ED3A33C1A7FDA2E0C6E12B64ABBDBBCA(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		int32_t L_3 = ___start1;
		int32_t L_4 = ___len2;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4));
		V_1 = 0;
		goto IL_00e9;
	}

IL_0014:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = ___bytes0;
		int32_t L_6 = ___start1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint8_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		if ((((int32_t)L_8) >= ((int32_t)((int32_t)128))))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		int32_t L_10 = ___start1;
		___start1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
		goto IL_00e9;
	}

IL_002c:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = ___bytes0;
		int32_t L_12 = ___start1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		uint8_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)128)))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
		int32_t L_16 = ___start1;
		___start1 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
		goto IL_00e9;
	}

IL_0044:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17 = ___bytes0;
		int32_t L_18 = ___start1;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		uint8_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
		int32_t L_22 = ___start1;
		___start1 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
		goto IL_00e9;
	}

IL_005c:
	{
		int32_t L_23 = ___start1;
		int32_t L_24 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1))) < ((int32_t)L_24)))
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
		goto IL_00f0;
	}

IL_006b:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_26 = ___bytes0;
		int32_t L_27 = ___start1;
		NullCheck(L_26);
		int32_t L_28 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
		uint8_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_2 = L_29;
		uint8_t L_30 = V_2;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)127))))
		{
			goto IL_007e;
		}
	}
	{
		uint8_t L_31 = V_2;
		if ((!(((uint32_t)L_31) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_0089;
		}
	}

IL_007e:
	{
		int32_t L_32 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
		int32_t L_33 = ___start1;
		___start1 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)2));
		goto IL_00e9;
	}

IL_0089:
	{
		uint8_t L_34 = V_2;
		if ((((int32_t)((int32_t)48)) > ((int32_t)L_34)))
		{
			goto IL_00e0;
		}
	}
	{
		uint8_t L_35 = V_2;
		if ((((int32_t)L_35) > ((int32_t)((int32_t)57))))
		{
			goto IL_00e0;
		}
	}
	{
		int32_t L_36 = ___start1;
		int32_t L_37 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)3))) < ((int32_t)L_37)))
		{
			goto IL_00a8;
		}
	}
	{
		int32_t L_38 = V_1;
		int32_t L_39 = ___start1;
		int32_t L_40 = V_0;
		G_B16_0 = L_38;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)3))) == ((int32_t)L_40)))
		{
			G_B17_0 = L_38;
			goto IL_00a3;
		}
	}
	{
		G_B18_0 = 2;
		G_B18_1 = G_B16_0;
		goto IL_00a4;
	}

IL_00a3:
	{
		G_B18_0 = 3;
		G_B18_1 = G_B17_0;
	}

IL_00a4:
	{
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)G_B18_1, (int32_t)G_B18_0));
		goto IL_00f0;
	}

IL_00a8:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_41 = ___bytes0;
		int32_t L_42 = ___start1;
		IL2CPP_RUNTIME_CLASS_INIT(GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var);
		int64_t L_43;
		L_43 = GB18030Source_FromGBX_m2B43470C984D7B7EFA2F2B4FEEB82616CAEBC44E(L_41, L_42, /*hidden argument*/NULL);
		V_3 = L_43;
		int64_t L_44 = V_3;
		if ((((int64_t)L_44) >= ((int64_t)((int64_t)((int64_t)0)))))
		{
			goto IL_00c1;
		}
	}
	{
		int32_t L_45 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1));
		int32_t L_46 = ___start1;
		int64_t L_47 = V_3;
		___start1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_46, (int32_t)((int32_t)((int32_t)L_47))));
		goto IL_00e9;
	}

IL_00c1:
	{
		int64_t L_48 = V_3;
		if ((((int64_t)L_48) < ((int64_t)((int64_t)((int64_t)((int32_t)65536))))))
		{
			goto IL_00d5;
		}
	}
	{
		int32_t L_49 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)2));
		int32_t L_50 = ___start1;
		___start1 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)4));
		goto IL_00e9;
	}

IL_00d5:
	{
		int32_t L_51 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)1));
		int32_t L_52 = ___start1;
		___start1 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)4));
		goto IL_00e9;
	}

IL_00e0:
	{
		int32_t L_53 = ___start1;
		___start1 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)2));
		int32_t L_54 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)1));
	}

IL_00e9:
	{
		int32_t L_55 = ___start1;
		int32_t L_56 = V_0;
		if ((((int32_t)L_55) < ((int32_t)L_56)))
		{
			goto IL_0014;
		}
	}

IL_00f0:
	{
		int32_t L_57 = V_1;
		return L_57;
	}
}
// System.Int32 I18N.CJK.GB18030Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GB18030Decoder_GetChars_mB299443B10CBC20949BF207953BAA1B3A426F874 (GB18030Decoder_t24EE55D918A003E55F69C1DDEA153C6A189A72B9 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars3, int32_t ___charIndex4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GB18030Decoder_t24EE55D918A003E55F69C1DDEA153C6A189A72B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	int64_t V_3 = 0;
	int32_t V_4 = 0;
	Il2CppChar V_5 = 0x0;
	int32_t G_B23_0 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		int32_t L_1 = ___byteIndex1;
		int32_t L_2 = ___byteCount2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = ___chars3;
		int32_t L_4 = ___charIndex4;
		DbcsDecoder_CheckRange_m7E0B5C58A934289C66DEDDB0C93B3B33E0F9F38C(__this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		int32_t L_5 = ___byteIndex1;
		int32_t L_6 = ___byteCount2;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)L_6));
		int32_t L_7 = ___charIndex4;
		V_1 = L_7;
		goto IL_01c8;
	}

IL_0019:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = ___bytes0;
		int32_t L_9 = ___byteIndex1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)128))))
		{
			goto IL_003a;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_12 = ___chars3;
		int32_t L_13 = ___charIndex4;
		int32_t L_14 = L_13;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = ___bytes0;
		int32_t L_16 = ___byteIndex1;
		int32_t L_17 = L_16;
		___byteIndex1 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		NullCheck(L_15);
		int32_t L_18 = L_17;
		uint8_t L_19 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (Il2CppChar)L_19);
		goto IL_01c8;
	}

IL_003a:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_20 = ___bytes0;
		int32_t L_21 = ___byteIndex1;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		uint8_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)128)))))
		{
			goto IL_005d;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_24 = ___chars3;
		int32_t L_25 = ___charIndex4;
		int32_t L_26 = L_25;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (Il2CppChar)((int32_t)8364));
		int32_t L_27 = ___byteIndex1;
		___byteIndex1 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
		goto IL_01c8;
	}

IL_005d:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_28 = ___bytes0;
		int32_t L_29 = ___byteIndex1;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		uint8_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		if ((!(((uint32_t)L_31) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_007d;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_32 = ___chars3;
		int32_t L_33 = ___charIndex4;
		int32_t L_34 = L_33;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(L_34), (Il2CppChar)((int32_t)63));
		int32_t L_35 = ___byteIndex1;
		___byteIndex1 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
		goto IL_01c8;
	}

IL_007d:
	{
		int32_t L_36 = ___byteIndex1;
		int32_t L_37 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1))) >= ((int32_t)L_37)))
		{
			goto IL_01cf;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_38 = ___bytes0;
		int32_t L_39 = ___byteIndex1;
		NullCheck(L_38);
		int32_t L_40 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
		uint8_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		V_2 = L_41;
		uint8_t L_42 = V_2;
		if ((((int32_t)L_42) == ((int32_t)((int32_t)127))))
		{
			goto IL_0099;
		}
	}
	{
		uint8_t L_43 = V_2;
		if ((!(((uint32_t)L_43) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_00af;
		}
	}

IL_0099:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_44 = ___chars3;
		int32_t L_45 = ___charIndex4;
		int32_t L_46 = L_45;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1));
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (Il2CppChar)((int32_t)63));
		int32_t L_47 = ___byteIndex1;
		___byteIndex1 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)2));
		goto IL_01c8;
	}

IL_00af:
	{
		uint8_t L_48 = V_2;
		if ((((int32_t)((int32_t)48)) > ((int32_t)L_48)))
		{
			goto IL_014f;
		}
	}
	{
		uint8_t L_49 = V_2;
		if ((((int32_t)L_49) > ((int32_t)((int32_t)57))))
		{
			goto IL_014f;
		}
	}
	{
		int32_t L_50 = ___byteIndex1;
		int32_t L_51 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)3))) >= ((int32_t)L_51)))
		{
			goto IL_01cf;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_52 = ___bytes0;
		int32_t L_53 = ___byteIndex1;
		IL2CPP_RUNTIME_CLASS_INIT(GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var);
		int64_t L_54;
		L_54 = GB18030Source_FromGBX_m2B43470C984D7B7EFA2F2B4FEEB82616CAEBC44E(L_52, L_53, /*hidden argument*/NULL);
		V_3 = L_54;
		int64_t L_55 = V_3;
		if ((((int64_t)L_55) >= ((int64_t)((int64_t)((int64_t)0)))))
		{
			goto IL_00ec;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_56 = ___chars3;
		int32_t L_57 = ___charIndex4;
		int32_t L_58 = L_57;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)1));
		NullCheck(L_56);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(L_58), (Il2CppChar)((int32_t)63));
		int32_t L_59 = ___byteIndex1;
		int64_t L_60 = V_3;
		___byteIndex1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_59, (int32_t)((int32_t)((int32_t)L_60))));
		goto IL_01c8;
	}

IL_00ec:
	{
		int64_t L_61 = V_3;
		if ((((int64_t)L_61) < ((int64_t)((int64_t)((int64_t)((int32_t)65536))))))
		{
			goto IL_013c;
		}
	}
	{
		int64_t L_62 = V_3;
		V_3 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_62, (int64_t)((int64_t)((int64_t)((int32_t)65536)))));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_63 = ___chars3;
		int32_t L_64 = ___charIndex4;
		int32_t L_65 = L_64;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)1));
		int64_t L_66 = V_3;
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(L_65), (Il2CppChar)((int32_t)((uint16_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)L_66/(int64_t)((int64_t)((int64_t)((int32_t)1024))))), (int64_t)((int64_t)((int64_t)((int32_t)55296))))))));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_67 = ___chars3;
		int32_t L_68 = ___charIndex4;
		int32_t L_69 = L_68;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_69, (int32_t)1));
		int64_t L_70 = V_3;
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(L_69), (Il2CppChar)((int32_t)((uint16_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)L_70%(int64_t)((int64_t)((int64_t)((int32_t)1024))))), (int64_t)((int64_t)((int64_t)((int32_t)56320))))))));
		int32_t L_71 = ___byteIndex1;
		___byteIndex1 = ((int32_t)il2cpp_codegen_add((int32_t)L_71, (int32_t)4));
		goto IL_01c8;
	}

IL_013c:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_72 = ___chars3;
		int32_t L_73 = ___charIndex4;
		int32_t L_74 = L_73;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_74, (int32_t)1));
		int64_t L_75 = V_3;
		NullCheck(L_72);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(L_74), (Il2CppChar)((int32_t)((uint16_t)L_75)));
		int32_t L_76 = ___byteIndex1;
		___byteIndex1 = ((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)4));
		goto IL_01c8;
	}

IL_014f:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_77 = ___bytes0;
		int32_t L_78 = ___byteIndex1;
		NullCheck(L_77);
		int32_t L_79 = L_78;
		uint8_t L_80 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		uint8_t L_81 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_80, (int32_t)((int32_t)129))), (int32_t)((int32_t)191))), (int32_t)L_81)), (int32_t)((int32_t)64))), (int32_t)2));
		int32_t L_82 = V_4;
		if ((((int32_t)L_82) < ((int32_t)0)))
		{
			goto IL_01a2;
		}
	}
	{
		int32_t L_83 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(GB18030Decoder_t24EE55D918A003E55F69C1DDEA153C6A189A72B9_il2cpp_TypeInfo_var);
		DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * L_84 = ((GB18030Decoder_t24EE55D918A003E55F69C1DDEA153C6A189A72B9_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Decoder_t24EE55D918A003E55F69C1DDEA153C6A189A72B9_il2cpp_TypeInfo_var))->get_gb2312_3();
		NullCheck(L_84);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_85 = L_84->get_n2u_0();
		NullCheck(L_85);
		if ((((int32_t)L_83) >= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_85)->max_length))))))
		{
			goto IL_01a2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GB18030Decoder_t24EE55D918A003E55F69C1DDEA153C6A189A72B9_il2cpp_TypeInfo_var);
		DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * L_86 = ((GB18030Decoder_t24EE55D918A003E55F69C1DDEA153C6A189A72B9_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Decoder_t24EE55D918A003E55F69C1DDEA153C6A189A72B9_il2cpp_TypeInfo_var))->get_gb2312_3();
		NullCheck(L_86);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_87 = L_86->get_n2u_0();
		int32_t L_88 = V_4;
		NullCheck(L_87);
		int32_t L_89 = L_88;
		uint8_t L_90 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * L_91 = ((GB18030Decoder_t24EE55D918A003E55F69C1DDEA153C6A189A72B9_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Decoder_t24EE55D918A003E55F69C1DDEA153C6A189A72B9_il2cpp_TypeInfo_var))->get_gb2312_3();
		NullCheck(L_91);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_92 = L_91->get_n2u_0();
		int32_t L_93 = V_4;
		NullCheck(L_92);
		int32_t L_94 = ((int32_t)il2cpp_codegen_add((int32_t)L_93, (int32_t)1));
		uint8_t L_95 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		G_B23_0 = ((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_90, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_95, (int32_t)((int32_t)256)))))));
		goto IL_01a3;
	}

IL_01a2:
	{
		G_B23_0 = 0;
	}

IL_01a3:
	{
		V_5 = G_B23_0;
		Il2CppChar L_96 = V_5;
		if (L_96)
		{
			goto IL_01b7;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_97 = ___chars3;
		int32_t L_98 = ___charIndex4;
		int32_t L_99 = L_98;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_99, (int32_t)1));
		NullCheck(L_97);
		(L_97)->SetAt(static_cast<il2cpp_array_size_t>(L_99), (Il2CppChar)((int32_t)63));
		goto IL_01c3;
	}

IL_01b7:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_100 = ___chars3;
		int32_t L_101 = ___charIndex4;
		int32_t L_102 = L_101;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_102, (int32_t)1));
		Il2CppChar L_103 = V_5;
		NullCheck(L_100);
		(L_100)->SetAt(static_cast<il2cpp_array_size_t>(L_102), (Il2CppChar)L_103);
	}

IL_01c3:
	{
		int32_t L_104 = ___byteIndex1;
		___byteIndex1 = ((int32_t)il2cpp_codegen_add((int32_t)L_104, (int32_t)2));
	}

IL_01c8:
	{
		int32_t L_105 = ___byteIndex1;
		int32_t L_106 = V_0;
		if ((((int32_t)L_105) < ((int32_t)L_106)))
		{
			goto IL_0019;
		}
	}

IL_01cf:
	{
		int32_t L_107 = ___charIndex4;
		int32_t L_108 = V_1;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_107, (int32_t)L_108));
	}
}
// System.Void I18N.CJK.GB18030Decoder::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GB18030Decoder__cctor_m9B97396171614D42AFE51267E08D972CF6FB556A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GB18030Decoder_t24EE55D918A003E55F69C1DDEA153C6A189A72B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6_il2cpp_TypeInfo_var);
		DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * L_0 = ((DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6_StaticFields*)il2cpp_codegen_static_fields_for(DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6_il2cpp_TypeInfo_var))->get_Gb2312_2();
		((GB18030Decoder_t24EE55D918A003E55F69C1DDEA153C6A189A72B9_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Decoder_t24EE55D918A003E55F69C1DDEA153C6A189A72B9_il2cpp_TypeInfo_var))->set_gb2312_3(L_0);
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
// System.Void I18N.CJK.GB18030Encoder::.ctor(I18N.Common.MonoSafeEncoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GB18030Encoder__ctor_m92309D16A98AA6B9E9B72D0A9AB666853B116BD0 (GB18030Encoder_t0A88113FFF8BAFE6F79A16678697B61C488AA971 * __this, MonoSafeEncoding_t0F0341C8A621EBF14ADEA3F5DC248BC26F7DDE83 * ___owner0, const RuntimeMethod* method)
{
	{
		MonoSafeEncoding_t0F0341C8A621EBF14ADEA3F5DC248BC26F7DDE83 * L_0 = ___owner0;
		MonoSafeEncoder__ctor_mE2203C5488EEAE1D2D9D8E3F1FC21ECE168DAADC(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 I18N.CJK.GB18030Encoder::GetByteCount(System.Char[],System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GB18030Encoder_GetByteCount_mBA1D3F26A596EF0908FBE2C512A815A8EB3CE8BC (GB18030Encoder_t0A88113FFF8BAFE6F79A16678697B61C488AA971 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars0, int32_t ___index1, int32_t ___count2, bool ___refresh3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GB18030Encoder_t0A88113FFF8BAFE6F79A16678697B61C488AA971_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	uint8_t V_4 = 0x0;
	{
		V_0 = 0;
		int32_t L_0 = ___count2;
		V_1 = L_0;
		V_2 = 0;
		goto IL_00ab;
	}

IL_000b:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = ___chars0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint16_t L_4 = (uint16_t)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_3 = L_4;
		Il2CppChar L_5 = V_3;
		if ((((int32_t)L_5) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		goto IL_00ab;
	}

IL_0024:
	{
		Il2CppChar L_8 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Char_IsSurrogate_mDE2EA47FEF5F4816C883C5FF7DA85364025B5CDE(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_10 = V_0;
		int32_t L_11 = V_1;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1))) == ((uint32_t)L_11))))
		{
			goto IL_003f;
		}
	}
	{
		Il2CppChar L_12 = V_3;
		__this->set_incomplete_byte_count_4(L_12);
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
		goto IL_00ab;
	}

IL_003f:
	{
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)4));
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)2));
		goto IL_00ab;
	}

IL_0049:
	{
		Il2CppChar L_16 = V_3;
		if ((((int32_t)L_16) < ((int32_t)((int32_t)128))))
		{
			goto IL_0059;
		}
	}
	{
		Il2CppChar L_17 = V_3;
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_0063;
		}
	}

IL_0059:
	{
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
		goto IL_00ab;
	}

IL_0063:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GB18030Encoder_t0A88113FFF8BAFE6F79A16678697B61C488AA971_il2cpp_TypeInfo_var);
		DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * L_20 = ((GB18030Encoder_t0A88113FFF8BAFE6F79A16678697B61C488AA971_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Encoder_t0A88113FFF8BAFE6F79A16678697B61C488AA971_il2cpp_TypeInfo_var))->get_gb2312_3();
		NullCheck(L_20);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_21 = L_20->get_u2n_1();
		Il2CppChar L_22 = V_3;
		NullCheck(L_21);
		int32_t L_23 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_22, (int32_t)2)), (int32_t)1));
		uint8_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * L_25 = ((GB18030Encoder_t0A88113FFF8BAFE6F79A16678697B61C488AA971_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Encoder_t0A88113FFF8BAFE6F79A16678697B61C488AA971_il2cpp_TypeInfo_var))->get_gb2312_3();
		NullCheck(L_25);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_26 = L_25->get_u2n_1();
		Il2CppChar L_27 = V_3;
		NullCheck(L_26);
		int32_t L_28 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_27, (int32_t)2));
		uint8_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_4 = L_29;
		if (!L_24)
		{
			goto IL_0093;
		}
	}
	{
		uint8_t L_30 = V_4;
		if (!L_30)
		{
			goto IL_0093;
		}
	}
	{
		int32_t L_31 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)2));
		int32_t L_32 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
		goto IL_00ab;
	}

IL_0093:
	{
		Il2CppChar L_33 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var);
		int64_t L_34;
		L_34 = GB18030Source_FromUCS_mBC86622A6A7E470D0044A34801A526E758940258(L_33, /*hidden argument*/NULL);
		if ((((int64_t)L_34) >= ((int64_t)((int64_t)((int64_t)0)))))
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_35 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
		goto IL_00a7;
	}

IL_00a3:
	{
		int32_t L_36 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)4));
	}

IL_00a7:
	{
		int32_t L_37 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
	}

IL_00ab:
	{
		int32_t L_38 = V_0;
		int32_t L_39 = V_1;
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_000b;
		}
	}
	{
		bool L_40 = ___refresh3;
		if (!L_40)
		{
			goto IL_00c9;
		}
	}
	{
		Il2CppChar L_41 = __this->get_incomplete_byte_count_4();
		if (!L_41)
		{
			goto IL_00c2;
		}
	}
	{
		int32_t L_42 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1));
	}

IL_00c2:
	{
		__this->set_incomplete_byte_count_4(0);
	}

IL_00c9:
	{
		int32_t L_43 = V_2;
		return L_43;
	}
}
// System.Int32 I18N.CJK.GB18030Encoder::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GB18030Encoder_GetBytes_mBDD4F073AFEE14EF666379407F9D2DF76686CBF5 (GB18030Encoder_t0A88113FFF8BAFE6F79A16678697B61C488AA971 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars0, int32_t ___charIndex1, int32_t ___charCount2, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes3, int32_t ___byteIndex4, bool ___refresh5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GB18030Encoder_t0A88113FFF8BAFE6F79A16678697B61C488AA971_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	uint8_t V_4 = 0x0;
	uint8_t V_5 = 0x0;
	int64_t V_6 = 0;
	Il2CppChar V_7 = 0x0;
	int32_t V_8 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes3;
		NullCheck(L_0);
		V_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		int32_t L_1 = ___charIndex1;
		int32_t L_2 = ___charCount2;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2));
		int32_t L_3 = ___byteIndex4;
		V_2 = L_3;
		Il2CppChar L_4 = __this->get_incomplete_bytes_5();
		V_3 = L_4;
		goto IL_014f;
	}

IL_0018:
	{
		Il2CppChar L_5 = __this->get_incomplete_bytes_5();
		if (L_5)
		{
			goto IL_002b;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_6 = ___chars0;
		int32_t L_7 = ___charIndex1;
		int32_t L_8 = L_7;
		___charIndex1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
		NullCheck(L_6);
		int32_t L_9 = L_8;
		uint16_t L_10 = (uint16_t)(L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_3 = L_10;
		goto IL_0032;
	}

IL_002b:
	{
		__this->set_incomplete_bytes_5(0);
	}

IL_0032:
	{
		Il2CppChar L_11 = V_3;
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)128))))
		{
			goto IL_004b;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = ___bytes3;
		int32_t L_13 = ___byteIndex4;
		int32_t L_14 = L_13;
		___byteIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
		Il2CppChar L_15 = V_3;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (uint8_t)((int32_t)((uint8_t)L_15)));
		goto IL_014f;
	}

IL_004b:
	{
		Il2CppChar L_16 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Char_IsSurrogate_mDE2EA47FEF5F4816C883C5FF7DA85364025B5CDE(L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00c0;
		}
	}
	{
		int32_t L_18 = ___charIndex1;
		int32_t L_19 = V_1;
		if ((!(((uint32_t)L_18) == ((uint32_t)L_19))))
		{
			goto IL_0063;
		}
	}
	{
		Il2CppChar L_20 = V_3;
		__this->set_incomplete_bytes_5(L_20);
		goto IL_0156;
	}

IL_0063:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_21 = ___chars0;
		int32_t L_22 = ___charIndex1;
		int32_t L_23 = L_22;
		___charIndex1 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
		NullCheck(L_21);
		int32_t L_24 = L_23;
		uint16_t L_25 = (uint16_t)(L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_7 = L_25;
		Il2CppChar L_26 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Char_IsSurrogate_mDE2EA47FEF5F4816C883C5FF7DA85364025B5CDE(L_26, /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_008d;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_28 = ___chars0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_29 = ___bytes3;
		MonoSafeEncoder_HandleFallback_m5616797BE059754055D104BF351A4473D615C4C5(__this, L_28, (int32_t*)(&___charIndex1), (int32_t*)(&___charCount2), L_29, (int32_t*)(&___byteIndex4), (int32_t*)(&V_0), NULL, /*hidden argument*/NULL);
		goto IL_014f;
	}

IL_008d:
	{
		Il2CppChar L_30 = V_3;
		Il2CppChar L_31 = V_7;
		V_8 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)((int32_t)55296))), (int32_t)((int32_t)1024))), (int32_t)L_31)), (int32_t)((int32_t)56320)));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_32 = ___bytes3;
		int32_t L_33 = ___byteIndex4;
		int32_t L_34 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var);
		int64_t L_35;
		L_35 = GB18030Source_FromUCSSurrogate_m6FF91BBA759FC7091471313FDD695A9BFEF995E2(L_34, /*hidden argument*/NULL);
		GB18030Source_Unlinear_mE038EE5FD05C759F17B71D238291FCF8222FED66(L_32, L_33, L_35, /*hidden argument*/NULL);
		int32_t L_36 = ___byteIndex4;
		___byteIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)4));
		goto IL_014f;
	}

IL_00c0:
	{
		Il2CppChar L_37 = V_3;
		if ((((int32_t)L_37) <= ((int32_t)((int32_t)128))))
		{
			goto IL_00d0;
		}
	}
	{
		Il2CppChar L_38 = V_3;
		if ((!(((uint32_t)L_38) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_00de;
		}
	}

IL_00d0:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_39 = ___bytes3;
		int32_t L_40 = ___byteIndex4;
		int32_t L_41 = L_40;
		___byteIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
		Il2CppChar L_42 = V_3;
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(L_41), (uint8_t)((int32_t)((uint8_t)L_42)));
		goto IL_014f;
	}

IL_00de:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GB18030Encoder_t0A88113FFF8BAFE6F79A16678697B61C488AA971_il2cpp_TypeInfo_var);
		DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * L_43 = ((GB18030Encoder_t0A88113FFF8BAFE6F79A16678697B61C488AA971_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Encoder_t0A88113FFF8BAFE6F79A16678697B61C488AA971_il2cpp_TypeInfo_var))->get_gb2312_3();
		NullCheck(L_43);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_44 = L_43->get_u2n_1();
		Il2CppChar L_45 = V_3;
		NullCheck(L_44);
		int32_t L_46 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_45, (int32_t)2)), (int32_t)1));
		uint8_t L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		V_4 = L_47;
		DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * L_48 = ((GB18030Encoder_t0A88113FFF8BAFE6F79A16678697B61C488AA971_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Encoder_t0A88113FFF8BAFE6F79A16678697B61C488AA971_il2cpp_TypeInfo_var))->get_gb2312_3();
		NullCheck(L_48);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_49 = L_48->get_u2n_1();
		Il2CppChar L_50 = V_3;
		NullCheck(L_49);
		int32_t L_51 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_50, (int32_t)2));
		uint8_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		V_5 = L_52;
		uint8_t L_53 = V_4;
		if (!L_53)
		{
			goto IL_0122;
		}
	}
	{
		uint8_t L_54 = V_5;
		if (!L_54)
		{
			goto IL_0122;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_55 = ___bytes3;
		int32_t L_56 = ___byteIndex4;
		int32_t L_57 = L_56;
		___byteIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)1));
		uint8_t L_58 = V_4;
		NullCheck(L_55);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(L_57), (uint8_t)L_58);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_59 = ___bytes3;
		int32_t L_60 = ___byteIndex4;
		int32_t L_61 = L_60;
		___byteIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_61, (int32_t)1));
		uint8_t L_62 = V_5;
		NullCheck(L_59);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(L_61), (uint8_t)L_62);
		goto IL_014f;
	}

IL_0122:
	{
		Il2CppChar L_63 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var);
		int64_t L_64;
		L_64 = GB18030Source_FromUCS_mBC86622A6A7E470D0044A34801A526E758940258(L_63, /*hidden argument*/NULL);
		V_6 = L_64;
		int64_t L_65 = V_6;
		if ((((int64_t)L_65) >= ((int64_t)((int64_t)((int64_t)0)))))
		{
			goto IL_013e;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_66 = ___bytes3;
		int32_t L_67 = ___byteIndex4;
		int32_t L_68 = L_67;
		___byteIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_68, (int32_t)1));
		NullCheck(L_66);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(L_68), (uint8_t)((int32_t)63));
		goto IL_014f;
	}

IL_013e:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_69 = ___bytes3;
		int32_t L_70 = ___byteIndex4;
		int64_t L_71 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var);
		GB18030Source_Unlinear_mE038EE5FD05C759F17B71D238291FCF8222FED66(L_69, L_70, L_71, /*hidden argument*/NULL);
		int32_t L_72 = ___byteIndex4;
		___byteIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_72, (int32_t)4));
	}

IL_014f:
	{
		int32_t L_73 = ___charIndex1;
		int32_t L_74 = V_1;
		if ((((int32_t)L_73) < ((int32_t)L_74)))
		{
			goto IL_0018;
		}
	}

IL_0156:
	{
		bool L_75 = ___refresh5;
		if (!L_75)
		{
			goto IL_0175;
		}
	}
	{
		Il2CppChar L_76 = __this->get_incomplete_bytes_5();
		if (!L_76)
		{
			goto IL_016e;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_77 = ___bytes3;
		int32_t L_78 = ___byteIndex4;
		int32_t L_79 = L_78;
		___byteIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_79, (int32_t)1));
		NullCheck(L_77);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(L_79), (uint8_t)((int32_t)63));
	}

IL_016e:
	{
		__this->set_incomplete_bytes_5(0);
	}

IL_0175:
	{
		int32_t L_80 = ___byteIndex4;
		int32_t L_81 = V_2;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_80, (int32_t)L_81));
	}
}
// System.Void I18N.CJK.GB18030Encoder::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GB18030Encoder__cctor_mA53CB2D414FE9BA57263B627A0C673FCC532FAE4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GB18030Encoder_t0A88113FFF8BAFE6F79A16678697B61C488AA971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6_il2cpp_TypeInfo_var);
		DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * L_0 = ((DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6_StaticFields*)il2cpp_codegen_static_fields_for(DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6_il2cpp_TypeInfo_var))->get_Gb2312_2();
		((GB18030Encoder_t0A88113FFF8BAFE6F79A16678697B61C488AA971_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Encoder_t0A88113FFF8BAFE6F79A16678697B61C488AA971_il2cpp_TypeInfo_var))->set_gb2312_3(L_0);
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
// System.Void I18N.CJK.GB18030Encoding::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GB18030Encoding__ctor_m68BF70D37FE8B805524F8F1FE8258770640B265B (GB18030Encoding_t48649BF97C255015EB5811902CE20AA6D3B3FE57 * __this, const RuntimeMethod* method)
{
	{
		MonoSafeEncoding__ctor_m22024C3A28920B9112728E9CF9CF218621D880E5(__this, ((int32_t)54936), ((int32_t)936), /*hidden argument*/NULL);
		return;
	}
}
// System.String I18N.CJK.GB18030Encoding::get_EncodingName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GB18030Encoding_get_EncodingName_m2BEB5CB3DD2A5F3652CAD9738DC49B11EA785C0A (GB18030Encoding_t48649BF97C255015EB5811902CE20AA6D3B3FE57 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7A8569669CE3C1A1791A0C7468C4370B4C4FA95);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralC7A8569669CE3C1A1791A0C7468C4370B4C4FA95;
	}
}
// System.String I18N.CJK.GB18030Encoding::get_HeaderName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GB18030Encoding_get_HeaderName_mB84F1E0742E250BDCB52464E148F3DA2BA301F24 (GB18030Encoding_t48649BF97C255015EB5811902CE20AA6D3B3FE57 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E5900473DAE968E1F4600CC48CBEEB2AEF5AEDB);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral0E5900473DAE968E1F4600CC48CBEEB2AEF5AEDB;
	}
}
// System.String I18N.CJK.GB18030Encoding::get_BodyName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GB18030Encoding_get_BodyName_m0107FDABFF07FDCA261A2E192932B8CAC4F4AACC (GB18030Encoding_t48649BF97C255015EB5811902CE20AA6D3B3FE57 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E5900473DAE968E1F4600CC48CBEEB2AEF5AEDB);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral0E5900473DAE968E1F4600CC48CBEEB2AEF5AEDB;
	}
}
// System.String I18N.CJK.GB18030Encoding::get_WebName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GB18030Encoding_get_WebName_m3175B8B992D173C0DA79436C3C0192726F3F6A72 (GB18030Encoding_t48649BF97C255015EB5811902CE20AA6D3B3FE57 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E5900473DAE968E1F4600CC48CBEEB2AEF5AEDB);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral0E5900473DAE968E1F4600CC48CBEEB2AEF5AEDB;
	}
}
// System.Boolean I18N.CJK.GB18030Encoding::get_IsMailNewsDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GB18030Encoding_get_IsMailNewsDisplay_m4A671EB97513D1729C2BCFC9E5C9CFB90524106E (GB18030Encoding_t48649BF97C255015EB5811902CE20AA6D3B3FE57 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Boolean I18N.CJK.GB18030Encoding::get_IsMailNewsSave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GB18030Encoding_get_IsMailNewsSave_mD10708C4FB76C4D2AA92FA9511322048D6B8CAAC (GB18030Encoding_t48649BF97C255015EB5811902CE20AA6D3B3FE57 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Boolean I18N.CJK.GB18030Encoding::get_IsBrowserDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GB18030Encoding_get_IsBrowserDisplay_m225ECC30066A27DDB23E63E4194AFC041304A1DD (GB18030Encoding_t48649BF97C255015EB5811902CE20AA6D3B3FE57 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Boolean I18N.CJK.GB18030Encoding::get_IsBrowserSave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GB18030Encoding_get_IsBrowserSave_mD2F97E96BD38C6E3C1F79FE4842EDAD032368897 (GB18030Encoding_t48649BF97C255015EB5811902CE20AA6D3B3FE57 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Int32 I18N.CJK.GB18030Encoding::GetMaxByteCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GB18030Encoding_GetMaxByteCount_m6E4698EA278967B438E6BDF2EB78249C4012EF6D (GB18030Encoding_t48649BF97C255015EB5811902CE20AA6D3B3FE57 * __this, int32_t ___len0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___len0;
		return ((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)4));
	}
}
// System.Int32 I18N.CJK.GB18030Encoding::GetMaxCharCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GB18030Encoding_GetMaxCharCount_mDCED5041E2FDB1B53CF9904F4BD69E3995B1626A (GB18030Encoding_t48649BF97C255015EB5811902CE20AA6D3B3FE57 * __this, int32_t ___len0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___len0;
		return L_0;
	}
}
// System.Int32 I18N.CJK.GB18030Encoding::GetByteCount(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GB18030Encoding_GetByteCount_m6A068C7219AB60C666D7F8070BAE7F888570F1C7 (GB18030Encoding_t48649BF97C255015EB5811902CE20AA6D3B3FE57 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GB18030Encoder_t0A88113FFF8BAFE6F79A16678697B61C488AA971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GB18030Encoder_t0A88113FFF8BAFE6F79A16678697B61C488AA971 * L_0 = (GB18030Encoder_t0A88113FFF8BAFE6F79A16678697B61C488AA971 *)il2cpp_codegen_object_new(GB18030Encoder_t0A88113FFF8BAFE6F79A16678697B61C488AA971_il2cpp_TypeInfo_var);
		GB18030Encoder__ctor_m92309D16A98AA6B9E9B72D0A9AB666853B116BD0(L_0, __this, /*hidden argument*/NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = ___chars0;
		int32_t L_2 = ___index1;
		int32_t L_3 = ___length2;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = VirtFuncInvoker4< int32_t, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, int32_t, int32_t, bool >::Invoke(5 /* System.Int32 System.Text.Encoder::GetByteCount(System.Char[],System.Int32,System.Int32,System.Boolean) */, L_0, L_1, L_2, L_3, (bool)1);
		return L_4;
	}
}
// System.Int32 I18N.CJK.GB18030Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GB18030Encoding_GetBytes_mE5A3862BE6FD7BC4E763BDA2A242E2F4D633182B (GB18030Encoding_t48649BF97C255015EB5811902CE20AA6D3B3FE57 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars0, int32_t ___charIndex1, int32_t ___charCount2, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes3, int32_t ___byteIndex4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GB18030Encoder_t0A88113FFF8BAFE6F79A16678697B61C488AA971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GB18030Encoder_t0A88113FFF8BAFE6F79A16678697B61C488AA971 * L_0 = (GB18030Encoder_t0A88113FFF8BAFE6F79A16678697B61C488AA971 *)il2cpp_codegen_object_new(GB18030Encoder_t0A88113FFF8BAFE6F79A16678697B61C488AA971_il2cpp_TypeInfo_var);
		GB18030Encoder__ctor_m92309D16A98AA6B9E9B72D0A9AB666853B116BD0(L_0, __this, /*hidden argument*/NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = ___chars0;
		int32_t L_2 = ___charIndex1;
		int32_t L_3 = ___charCount2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___bytes3;
		int32_t L_5 = ___byteIndex4;
		NullCheck(L_0);
		int32_t L_6;
		L_6 = VirtFuncInvoker6< int32_t, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, int32_t, int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, bool >::Invoke(7 /* System.Int32 System.Text.Encoder::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Boolean) */, L_0, L_1, L_2, L_3, L_4, L_5, (bool)1);
		return L_6;
	}
}
// System.Int32 I18N.CJK.GB18030Encoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GB18030Encoding_GetCharCount_mAD963D5AE64121FB6DF5312F646B7BEE3D3EC48D (GB18030Encoding_t48649BF97C255015EB5811902CE20AA6D3B3FE57 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___start1, int32_t ___len2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GB18030Decoder_t24EE55D918A003E55F69C1DDEA153C6A189A72B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GB18030Decoder_t24EE55D918A003E55F69C1DDEA153C6A189A72B9 * L_0 = (GB18030Decoder_t24EE55D918A003E55F69C1DDEA153C6A189A72B9 *)il2cpp_codegen_object_new(GB18030Decoder_t24EE55D918A003E55F69C1DDEA153C6A189A72B9_il2cpp_TypeInfo_var);
		GB18030Decoder__ctor_m3220E4F3D5301803A7D9B9824C051EFEBDBCB0D4(L_0, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___bytes0;
		int32_t L_2 = ___start1;
		int32_t L_3 = ___len2;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Text.Decoder::GetCharCount(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// System.Int32 I18N.CJK.GB18030Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GB18030Encoding_GetChars_mD445927C7E58F3418857CD3EE6A838C3083BF772 (GB18030Encoding_t48649BF97C255015EB5811902CE20AA6D3B3FE57 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___byteIdx1, int32_t ___srclen2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars3, int32_t ___charIdx4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GB18030Decoder_t24EE55D918A003E55F69C1DDEA153C6A189A72B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GB18030Decoder_t24EE55D918A003E55F69C1DDEA153C6A189A72B9 * L_0 = (GB18030Decoder_t24EE55D918A003E55F69C1DDEA153C6A189A72B9 *)il2cpp_codegen_object_new(GB18030Decoder_t24EE55D918A003E55F69C1DDEA153C6A189A72B9_il2cpp_TypeInfo_var);
		GB18030Decoder__ctor_m3220E4F3D5301803A7D9B9824C051EFEBDBCB0D4(L_0, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___bytes0;
		int32_t L_2 = ___byteIdx1;
		int32_t L_3 = ___srclen2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4 = ___chars3;
		int32_t L_5 = ___charIdx4;
		NullCheck(L_0);
		int32_t L_6;
		L_6 = VirtFuncInvoker5< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, int32_t >::Invoke(8 /* System.Int32 System.Text.Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32) */, L_0, L_1, L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Text.Encoder I18N.CJK.GB18030Encoding::GetEncoder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * GB18030Encoding_GetEncoder_m5719EBB1D36C6F50CCAED9F6604FD8A77110F461 (GB18030Encoding_t48649BF97C255015EB5811902CE20AA6D3B3FE57 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GB18030Encoder_t0A88113FFF8BAFE6F79A16678697B61C488AA971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GB18030Encoder_t0A88113FFF8BAFE6F79A16678697B61C488AA971 * L_0 = (GB18030Encoder_t0A88113FFF8BAFE6F79A16678697B61C488AA971 *)il2cpp_codegen_object_new(GB18030Encoder_t0A88113FFF8BAFE6F79A16678697B61C488AA971_il2cpp_TypeInfo_var);
		GB18030Encoder__ctor_m92309D16A98AA6B9E9B72D0A9AB666853B116BD0(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Text.Decoder I18N.CJK.GB18030Encoding::GetDecoder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * GB18030Encoding_GetDecoder_m8296FC6D8685FD085A673AA7E0D160866089F338 (GB18030Encoding_t48649BF97C255015EB5811902CE20AA6D3B3FE57 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GB18030Decoder_t24EE55D918A003E55F69C1DDEA153C6A189A72B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GB18030Decoder_t24EE55D918A003E55F69C1DDEA153C6A189A72B9 * L_0 = (GB18030Decoder_t24EE55D918A003E55F69C1DDEA153C6A189A72B9 *)il2cpp_codegen_object_new(GB18030Decoder_t24EE55D918A003E55F69C1DDEA153C6A189A72B9_il2cpp_TypeInfo_var);
		GB18030Decoder__ctor_m3220E4F3D5301803A7D9B9824C051EFEBDBCB0D4(L_0, /*hidden argument*/NULL);
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
// System.Void I18N.CJK.GB18030Source::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GB18030Source__ctor_m2813CCAC9DBB131802B8DDBECD77FE0F3767D457 (GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void I18N.CJK.GB18030Source::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GB18030Source__cctor_m7AA25B50318D5FB80545EC2787D4B8340DCF8AA8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assembly_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GB18030MapU5BU5D_tEBCE6E25AE316F256DBF693F861C0DFA45BF3B3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GB18030Source__cctor_m7AA25B50318D5FB80545EC2787D4B8340DCF8AA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19AF67277280509C9DA28ED8F1A254429648F4CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C0852A35F5B2C09467F4C96BBE883A402D2C15A);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	int32_t V_1 = 0;
	Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7 * V_2 = NULL;
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * V_4 = NULL;
	int32_t V_5 = 0;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int64_t L_0;
		L_0 = GB18030Source_FromGBXRaw_m8AF7E2EC3A688EF593B8A44713CC5F29FF0CC62E((uint8_t)((int32_t)129), (uint8_t)((int32_t)48), (uint8_t)((int32_t)129), (uint8_t)((int32_t)48), (bool)0, /*hidden argument*/NULL);
		((GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var))->set_gbxBase_4(L_0);
		int64_t L_1;
		L_1 = GB18030Source_FromGBXRaw_m8AF7E2EC3A688EF593B8A44713CC5F29FF0CC62E((uint8_t)((int32_t)144), (uint8_t)((int32_t)48), (uint8_t)((int32_t)129), (uint8_t)((int32_t)48), (bool)0, /*hidden argument*/NULL);
		((GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var))->set_gbxSuppBase_5(L_1);
		GB18030MapU5BU5D_tEBCE6E25AE316F256DBF693F861C0DFA45BF3B3E* L_2 = (GB18030MapU5BU5D_tEBCE6E25AE316F256DBF693F861C0DFA45BF3B3E*)(GB18030MapU5BU5D_tEBCE6E25AE316F256DBF693F861C0DFA45BF3B3E*)SZArrayNew(GB18030MapU5BU5D_tEBCE6E25AE316F256DBF693F861C0DFA45BF3B3E_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14));
		GB18030MapU5BU5D_tEBCE6E25AE316F256DBF693F861C0DFA45BF3B3E* L_3 = L_2;
		int64_t L_4;
		L_4 = GB18030Source_FromGBXRaw_m8AF7E2EC3A688EF593B8A44713CC5F29FF0CC62E((uint8_t)((int32_t)129), (uint8_t)((int32_t)48), (uint8_t)((int32_t)211), (uint8_t)((int32_t)48), (bool)0, /*hidden argument*/NULL);
		int64_t L_5;
		L_5 = GB18030Source_FromGBXRaw_m8AF7E2EC3A688EF593B8A44713CC5F29FF0CC62E((uint8_t)((int32_t)129), (uint8_t)((int32_t)54), (uint8_t)((int32_t)165), (uint8_t)((int32_t)49), (bool)0, /*hidden argument*/NULL);
		GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 * L_6 = (GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 *)il2cpp_codegen_object_new(GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8_il2cpp_TypeInfo_var);
		GB18030Map__ctor_m42B294C7DC4CF0F69CEAB68091553ED7FDEEE113(L_6, ((int32_t)1106), ((int32_t)8207), L_4, L_5, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 *)L_6);
		GB18030MapU5BU5D_tEBCE6E25AE316F256DBF693F861C0DFA45BF3B3E* L_7 = L_3;
		int64_t L_8;
		L_8 = GB18030Source_FromGBXRaw_m8AF7E2EC3A688EF593B8A44713CC5F29FF0CC62E((uint8_t)((int32_t)129), (uint8_t)((int32_t)55), (uint8_t)((int32_t)168), (uint8_t)((int32_t)57), (bool)0, /*hidden argument*/NULL);
		int64_t L_9;
		L_9 = GB18030Source_FromGBXRaw_m8AF7E2EC3A688EF593B8A44713CC5F29FF0CC62E((uint8_t)((int32_t)129), (uint8_t)((int32_t)56), (uint8_t)((int32_t)253), (uint8_t)((int32_t)56), (bool)0, /*hidden argument*/NULL);
		GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 * L_10 = (GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 *)il2cpp_codegen_object_new(GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8_il2cpp_TypeInfo_var);
		GB18030Map__ctor_m42B294C7DC4CF0F69CEAB68091553ED7FDEEE113(L_10, ((int32_t)9795), ((int32_t)11904), L_8, L_9, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 *)L_10);
		GB18030MapU5BU5D_tEBCE6E25AE316F256DBF693F861C0DFA45BF3B3E* L_11 = L_7;
		int64_t L_12;
		L_12 = GB18030Source_FromGBXRaw_m8AF7E2EC3A688EF593B8A44713CC5F29FF0CC62E((uint8_t)((int32_t)130), (uint8_t)((int32_t)48), (uint8_t)((int32_t)166), (uint8_t)((int32_t)51), (bool)0, /*hidden argument*/NULL);
		int64_t L_13;
		L_13 = GB18030Source_FromGBXRaw_m8AF7E2EC3A688EF593B8A44713CC5F29FF0CC62E((uint8_t)((int32_t)130), (uint8_t)((int32_t)48), (uint8_t)((int32_t)242), (uint8_t)((int32_t)55), (bool)0, /*hidden argument*/NULL);
		GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 * L_14 = (GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 *)il2cpp_codegen_object_new(GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8_il2cpp_TypeInfo_var);
		GB18030Map__ctor_m42B294C7DC4CF0F69CEAB68091553ED7FDEEE113(L_14, ((int32_t)13851), ((int32_t)14615), L_12, L_13, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 *)L_14);
		GB18030MapU5BU5D_tEBCE6E25AE316F256DBF693F861C0DFA45BF3B3E* L_15 = L_11;
		int64_t L_16;
		L_16 = GB18030Source_FromGBXRaw_m8AF7E2EC3A688EF593B8A44713CC5F29FF0CC62E((uint8_t)((int32_t)130), (uint8_t)((int32_t)49), (uint8_t)((int32_t)212), (uint8_t)((int32_t)56), (bool)0, /*hidden argument*/NULL);
		int64_t L_17;
		L_17 = GB18030Source_FromGBXRaw_m8AF7E2EC3A688EF593B8A44713CC5F29FF0CC62E((uint8_t)((int32_t)130), (uint8_t)((int32_t)50), (uint8_t)((int32_t)175), (uint8_t)((int32_t)50), (bool)0, /*hidden argument*/NULL);
		GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 * L_18 = (GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 *)il2cpp_codegen_object_new(GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8_il2cpp_TypeInfo_var);
		GB18030Map__ctor_m42B294C7DC4CF0F69CEAB68091553ED7FDEEE113(L_18, ((int32_t)15585), ((int32_t)16469), L_16, L_17, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_18);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 *)L_18);
		GB18030MapU5BU5D_tEBCE6E25AE316F256DBF693F861C0DFA45BF3B3E* L_19 = L_15;
		int64_t L_20;
		L_20 = GB18030Source_FromGBXRaw_m8AF7E2EC3A688EF593B8A44713CC5F29FF0CC62E((uint8_t)((int32_t)130), (uint8_t)((int32_t)50), (uint8_t)((int32_t)201), (uint8_t)((int32_t)55), (bool)0, /*hidden argument*/NULL);
		int64_t L_21;
		L_21 = GB18030Source_FromGBXRaw_m8AF7E2EC3A688EF593B8A44713CC5F29FF0CC62E((uint8_t)((int32_t)130), (uint8_t)((int32_t)50), (uint8_t)((int32_t)248), (uint8_t)((int32_t)55), (bool)0, /*hidden argument*/NULL);
		GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 * L_22 = (GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 *)il2cpp_codegen_object_new(GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8_il2cpp_TypeInfo_var);
		GB18030Map__ctor_m42B294C7DC4CF0F69CEAB68091553ED7FDEEE113(L_22, ((int32_t)16736), ((int32_t)17206), L_20, L_21, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_22);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(4), (GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 *)L_22);
		GB18030MapU5BU5D_tEBCE6E25AE316F256DBF693F861C0DFA45BF3B3E* L_23 = L_19;
		int64_t L_24;
		L_24 = GB18030Source_FromGBXRaw_m8AF7E2EC3A688EF593B8A44713CC5F29FF0CC62E((uint8_t)((int32_t)130), (uint8_t)((int32_t)51), (uint8_t)((int32_t)163), (uint8_t)((int32_t)57), (bool)0, /*hidden argument*/NULL);
		int64_t L_25;
		L_25 = GB18030Source_FromGBXRaw_m8AF7E2EC3A688EF593B8A44713CC5F29FF0CC62E((uint8_t)((int32_t)130), (uint8_t)((int32_t)51), (uint8_t)((int32_t)201), (uint8_t)((int32_t)49), (bool)0, /*hidden argument*/NULL);
		GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 * L_26 = (GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 *)il2cpp_codegen_object_new(GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8_il2cpp_TypeInfo_var);
		GB18030Map__ctor_m42B294C7DC4CF0F69CEAB68091553ED7FDEEE113(L_26, ((int32_t)17623), ((int32_t)17995), L_24, L_25, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_26);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(5), (GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 *)L_26);
		GB18030MapU5BU5D_tEBCE6E25AE316F256DBF693F861C0DFA45BF3B3E* L_27 = L_23;
		int64_t L_28;
		L_28 = GB18030Source_FromGBXRaw_m8AF7E2EC3A688EF593B8A44713CC5F29FF0CC62E((uint8_t)((int32_t)130), (uint8_t)((int32_t)51), (uint8_t)((int32_t)232), (uint8_t)((int32_t)56), (bool)0, /*hidden argument*/NULL);
		int64_t L_29;
		L_29 = GB18030Source_FromGBXRaw_m8AF7E2EC3A688EF593B8A44713CC5F29FF0CC62E((uint8_t)((int32_t)130), (uint8_t)((int32_t)52), (uint8_t)((int32_t)150), (uint8_t)((int32_t)56), (bool)0, /*hidden argument*/NULL);
		GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 * L_30 = (GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 *)il2cpp_codegen_object_new(GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8_il2cpp_TypeInfo_var);
		GB18030Map__ctor_m42B294C7DC4CF0F69CEAB68091553ED7FDEEE113(L_30, ((int32_t)18318), ((int32_t)18758), L_28, L_29, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_30);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(6), (GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 *)L_30);
		GB18030MapU5BU5D_tEBCE6E25AE316F256DBF693F861C0DFA45BF3B3E* L_31 = L_27;
		int64_t L_32;
		L_32 = GB18030Source_FromGBXRaw_m8AF7E2EC3A688EF593B8A44713CC5F29FF0CC62E((uint8_t)((int32_t)130), (uint8_t)((int32_t)52), (uint8_t)((int32_t)161), (uint8_t)((int32_t)49), (bool)0, /*hidden argument*/NULL);
		int64_t L_33;
		L_33 = GB18030Source_FromGBXRaw_m8AF7E2EC3A688EF593B8A44713CC5F29FF0CC62E((uint8_t)((int32_t)130), (uint8_t)((int32_t)52), (uint8_t)((int32_t)231), (uint8_t)((int32_t)51), (bool)0, /*hidden argument*/NULL);
		GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 * L_34 = (GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 *)il2cpp_codegen_object_new(GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8_il2cpp_TypeInfo_var);
		GB18030Map__ctor_m42B294C7DC4CF0F69CEAB68091553ED7FDEEE113(L_34, ((int32_t)18872), ((int32_t)19574), L_32, L_33, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_34);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(7), (GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 *)L_34);
		GB18030MapU5BU5D_tEBCE6E25AE316F256DBF693F861C0DFA45BF3B3E* L_35 = L_31;
		GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 * L_36 = (GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 *)il2cpp_codegen_object_new(GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8_il2cpp_TypeInfo_var);
		GB18030Map__ctor_m42B294C7DC4CF0F69CEAB68091553ED7FDEEE113(L_36, ((int32_t)19968), ((int32_t)40869), ((int64_t)((int64_t)0)), ((int64_t)((int64_t)0)), (bool)1, /*hidden argument*/NULL);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_36);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(8), (GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 *)L_36);
		GB18030MapU5BU5D_tEBCE6E25AE316F256DBF693F861C0DFA45BF3B3E* L_37 = L_35;
		int64_t L_38;
		L_38 = GB18030Source_FromGBXRaw_m8AF7E2EC3A688EF593B8A44713CC5F29FF0CC62E((uint8_t)((int32_t)130), (uint8_t)((int32_t)53), (uint8_t)((int32_t)143), (uint8_t)((int32_t)51), (bool)0, /*hidden argument*/NULL);
		int64_t L_39;
		L_39 = GB18030Source_FromGBXRaw_m8AF7E2EC3A688EF593B8A44713CC5F29FF0CC62E((uint8_t)((int32_t)131), (uint8_t)((int32_t)54), (uint8_t)((int32_t)199), (uint8_t)((int32_t)56), (bool)0, /*hidden argument*/NULL);
		GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 * L_40 = (GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 *)il2cpp_codegen_object_new(GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8_il2cpp_TypeInfo_var);
		GB18030Map__ctor_m42B294C7DC4CF0F69CEAB68091553ED7FDEEE113(L_40, ((int32_t)40870), ((int32_t)55295), L_38, L_39, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_40);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 *)L_40);
		GB18030MapU5BU5D_tEBCE6E25AE316F256DBF693F861C0DFA45BF3B3E* L_41 = L_37;
		GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 * L_42 = (GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 *)il2cpp_codegen_object_new(GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8_il2cpp_TypeInfo_var);
		GB18030Map__ctor_m42B294C7DC4CF0F69CEAB68091553ED7FDEEE113(L_42, ((int32_t)55296), ((int32_t)59243), ((int64_t)((int64_t)0)), ((int64_t)((int64_t)0)), (bool)1, /*hidden argument*/NULL);
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_42);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 *)L_42);
		GB18030MapU5BU5D_tEBCE6E25AE316F256DBF693F861C0DFA45BF3B3E* L_43 = L_41;
		int64_t L_44;
		L_44 = GB18030Source_FromGBXRaw_m8AF7E2EC3A688EF593B8A44713CC5F29FF0CC62E((uint8_t)((int32_t)131), (uint8_t)((int32_t)54), (uint8_t)((int32_t)208), (uint8_t)((int32_t)48), (bool)0, /*hidden argument*/NULL);
		int64_t L_45;
		L_45 = GB18030Source_FromGBXRaw_m8AF7E2EC3A688EF593B8A44713CC5F29FF0CC62E((uint8_t)((int32_t)132), (uint8_t)((int32_t)48), (uint8_t)((int32_t)133), (uint8_t)((int32_t)52), (bool)0, /*hidden argument*/NULL);
		GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 * L_46 = (GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 *)il2cpp_codegen_object_new(GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8_il2cpp_TypeInfo_var);
		GB18030Map__ctor_m42B294C7DC4CF0F69CEAB68091553ED7FDEEE113(L_46, ((int32_t)59493), ((int32_t)63787), L_44, L_45, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_46);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 *)L_46);
		GB18030MapU5BU5D_tEBCE6E25AE316F256DBF693F861C0DFA45BF3B3E* L_47 = L_43;
		int64_t L_48;
		L_48 = GB18030Source_FromGBXRaw_m8AF7E2EC3A688EF593B8A44713CC5F29FF0CC62E((uint8_t)((int32_t)132), (uint8_t)((int32_t)48), (uint8_t)((int32_t)156), (uint8_t)((int32_t)56), (bool)0, /*hidden argument*/NULL);
		int64_t L_49;
		L_49 = GB18030Source_FromGBXRaw_m8AF7E2EC3A688EF593B8A44713CC5F29FF0CC62E((uint8_t)((int32_t)132), (uint8_t)((int32_t)49), (uint8_t)((int32_t)133), (uint8_t)((int32_t)55), (bool)0, /*hidden argument*/NULL);
		GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 * L_50 = (GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 *)il2cpp_codegen_object_new(GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8_il2cpp_TypeInfo_var);
		GB18030Map__ctor_m42B294C7DC4CF0F69CEAB68091553ED7FDEEE113(L_50, ((int32_t)64042), ((int32_t)65071), L_48, L_49, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, L_50);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 *)L_50);
		GB18030MapU5BU5D_tEBCE6E25AE316F256DBF693F861C0DFA45BF3B3E* L_51 = L_47;
		int64_t L_52;
		L_52 = GB18030Source_FromGBXRaw_m8AF7E2EC3A688EF593B8A44713CC5F29FF0CC62E((uint8_t)((int32_t)132), (uint8_t)((int32_t)49), (uint8_t)((int32_t)162), (uint8_t)((int32_t)52), (bool)0, /*hidden argument*/NULL);
		int64_t L_53;
		L_53 = GB18030Source_FromGBXRaw_m8AF7E2EC3A688EF593B8A44713CC5F29FF0CC62E((uint8_t)((int32_t)132), (uint8_t)((int32_t)49), (uint8_t)((int32_t)164), (uint8_t)((int32_t)57), (bool)0, /*hidden argument*/NULL);
		GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 * L_54 = (GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 *)il2cpp_codegen_object_new(GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8_il2cpp_TypeInfo_var);
		GB18030Map__ctor_m42B294C7DC4CF0F69CEAB68091553ED7FDEEE113(L_54, ((int32_t)65510), ((int32_t)65535), L_52, L_53, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, L_54);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 *)L_54);
		((GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var))->set_ranges_6(L_51);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_55 = { reinterpret_cast<intptr_t> (Assembly_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_56;
		L_56 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_55, /*hidden argument*/NULL);
		NullCheck(L_56);
		MethodInfo_t * L_57;
		L_57 = Type_GetMethod_m2DDEF37DF33D28F579BA8E03F4376B67D91F0DEB(L_56, _stringLiteral19AF67277280509C9DA28ED8F1A254429648F4CA, ((int32_t)36), /*hidden argument*/NULL);
		V_0 = L_57;
		V_1 = 0;
		V_2 = (Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7 *)NULL;
		V_3 = (intptr_t)(0);
		MethodInfo_t * L_58 = V_0;
		bool L_59;
		L_59 = MethodInfo_op_Inequality_mDE1DAA5D330E9C975AC6423FC2D06862637BE68D(L_58, (MethodInfo_t *)NULL, /*hidden argument*/NULL);
		if (!L_59)
		{
			goto IL_038d;
		}
	}
	{
		MethodInfo_t * L_60 = V_0;
		Assembly_t * L_61;
		L_61 = il2cpp_codegen_get_executing_assembly(GB18030Source__cctor_m7AA25B50318D5FB80545EC2787D4B8340DCF8AA8_RuntimeMethod_var);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_62 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_63 = L_62;
		NullCheck(L_63);
		ArrayElementTypeCheck (L_63, _stringLiteral6C0852A35F5B2C09467F4C96BBE883A402D2C15A);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral6C0852A35F5B2C09467F4C96BBE883A402D2C15A);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_64 = L_63;
		int32_t L_65 = V_1;
		int32_t L_66 = L_65;
		RuntimeObject * L_67 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_66);
		NullCheck(L_64);
		ArrayElementTypeCheck (L_64, L_67);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_67);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_68 = L_64;
		Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7 * L_69 = V_2;
		NullCheck(L_68);
		ArrayElementTypeCheck (L_68, L_69);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_69);
		NullCheck(L_60);
		RuntimeObject * L_70;
		L_70 = MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3(L_60, L_61, L_68, /*hidden argument*/NULL);
		V_3 = (intptr_t)((*(intptr_t*)((intptr_t*)UnBox(L_70, IntPtr_t_il2cpp_TypeInfo_var))));
		goto IL_03eb;
	}

IL_038d:
	{
		Assembly_t * L_71;
		L_71 = il2cpp_codegen_get_executing_assembly(GB18030Source__cctor_m7AA25B50318D5FB80545EC2787D4B8340DCF8AA8_RuntimeMethod_var);
		NullCheck(L_71);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_72;
		L_72 = VirtFuncInvoker1< Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *, String_t* >::Invoke(14 /* System.IO.Stream System.Reflection.Assembly::GetManifestResourceStream(System.String) */, L_71, _stringLiteral6C0852A35F5B2C09467F4C96BBE883A402D2C15A);
		V_4 = L_72;
	}

IL_039e:
	try
	{ // begin try (depth: 1)
		{
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_73 = V_4;
			NullCheck(L_73);
			int64_t L_74;
			L_74 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_73);
			V_5 = ((int32_t)((int32_t)L_74));
			int32_t L_75 = V_5;
			IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
			intptr_t L_76;
			L_76 = Marshal_AllocHGlobal_mED1B623D229DB8FAB58D187E4E73D3DA2E8AE6EC(L_75, /*hidden argument*/NULL);
			void* L_77;
			L_77 = IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD((intptr_t)L_76, /*hidden argument*/NULL);
			V_6 = (uint8_t*)L_77;
			V_7 = 0;
			goto IL_03cf;
		}

IL_03bb:
		{
			uint8_t* L_78 = V_6;
			int32_t L_79 = V_7;
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_80 = V_4;
			NullCheck(L_80);
			int32_t L_81;
			L_81 = VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.IO.Stream::ReadByte() */, L_80);
			*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_78, (int32_t)L_79))) = (int8_t)((int32_t)((uint8_t)L_81));
			int32_t L_82 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_82, (int32_t)1));
		}

IL_03cf:
		{
			int32_t L_83 = V_7;
			int32_t L_84 = V_5;
			if ((((int32_t)L_83) < ((int32_t)L_84)))
			{
				goto IL_03bb;
			}
		}

IL_03d5:
		{
			uint8_t* L_85 = V_6;
			intptr_t L_86;
			L_86 = IntPtr_op_Explicit_mBD40223EE90BDDF40A24C0F321D3398DEA300495((void*)(void*)L_85, /*hidden argument*/NULL);
			V_3 = (intptr_t)L_86;
			IL2CPP_LEAVE(0x3EB, FINALLY_03df);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_03df;
	}

FINALLY_03df:
	{ // begin finally (depth: 1)
		{
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_87 = V_4;
			if (!L_87)
			{
				goto IL_03ea;
			}
		}

IL_03e3:
		{
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_88 = V_4;
			NullCheck(L_88);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_88);
		}

IL_03ea:
		{
			IL2CPP_END_FINALLY(991)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(991)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3EB, IL_03eb)
	}

IL_03eb:
	{
		intptr_t L_89 = V_3;
		bool L_90;
		L_90 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_89, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_90)
		{
			goto IL_048a;
		}
	}
	{
		intptr_t L_91 = V_3;
		void* L_92;
		L_92 = IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD((intptr_t)L_91, /*hidden argument*/NULL);
		((GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var))->set_gbx2uni_0((uint8_t*)L_92);
		uint8_t* L_93 = ((GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var))->get_gbx2uni_0();
		int32_t L_94 = *((uint8_t*)L_93);
		uint8_t* L_95 = ((GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var))->get_gbx2uni_0();
		int32_t L_96 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_95, (int32_t)1)));
		uint8_t* L_97 = ((GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var))->get_gbx2uni_0();
		int32_t L_98 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_97, (int32_t)2)));
		uint8_t* L_99 = ((GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var))->get_gbx2uni_0();
		int32_t L_100 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_99, (int32_t)3)));
		((GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var))->set_gbx2uniSize_2(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_94<<(int32_t)((int32_t)24))), (int32_t)((int32_t)((int32_t)L_96<<(int32_t)((int32_t)16))))), (int32_t)((int32_t)((int32_t)L_98<<(int32_t)8)))), (int32_t)L_100)));
		uint8_t* L_101 = ((GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var))->get_gbx2uni_0();
		((GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var))->set_gbx2uni_0((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_101, (int32_t)4)));
		uint8_t* L_102 = ((GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var))->get_gbx2uni_0();
		int32_t L_103 = ((GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var))->get_gbx2uniSize_2();
		((GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var))->set_uni2gbx_1((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_102, (int32_t)L_103)));
		uint8_t* L_104 = ((GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var))->get_uni2gbx_1();
		int32_t L_105 = *((uint8_t*)L_104);
		uint8_t* L_106 = ((GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var))->get_uni2gbx_1();
		int32_t L_107 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_106, (int32_t)1)));
		uint8_t* L_108 = ((GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var))->get_uni2gbx_1();
		int32_t L_109 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_108, (int32_t)2)));
		uint8_t* L_110 = ((GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var))->get_uni2gbx_1();
		int32_t L_111 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_110, (int32_t)3)));
		((GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var))->set_uni2gbxSize_3(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_105<<(int32_t)((int32_t)24))), (int32_t)((int32_t)((int32_t)L_107<<(int32_t)((int32_t)16))))), (int32_t)((int32_t)((int32_t)L_109<<(int32_t)8)))), (int32_t)L_111)));
		uint8_t* L_112 = ((GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var))->get_uni2gbx_1();
		((GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var))->set_uni2gbx_1((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_112, (int32_t)4)));
	}

IL_048a:
	{
		return;
	}
}
// System.Void I18N.CJK.GB18030Source::Unlinear(System.Byte[],System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GB18030Source_Unlinear_mE038EE5FD05C759F17B71D238291FCF8222FED66 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___start1, int64_t ___gbx2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = L_0;
		V_1 = L_1;
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = V_1;
		NullCheck(L_2);
		if (((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))
		{
			goto IL_000f;
		}
	}

IL_000a:
	{
		V_0 = (uint8_t*)((uintptr_t)0);
		goto IL_0018;
	}

IL_000f:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = V_1;
		NullCheck(L_3);
		V_0 = (uint8_t*)((uintptr_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0018:
	{
		uint8_t* L_4 = V_0;
		int32_t L_5 = ___start1;
		int64_t L_6 = ___gbx2;
		IL2CPP_RUNTIME_CLASS_INIT(GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var);
		GB18030Source_Unlinear_m7955171E3C4047720D582F17EF7412FCD7997957((uint8_t*)(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_4, (int32_t)L_5)), L_6, /*hidden argument*/NULL);
		V_1 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL;
		return;
	}
}
// System.Void I18N.CJK.GB18030Source::Unlinear(System.Byte*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GB18030Source_Unlinear_m7955171E3C4047720D582F17EF7412FCD7997957 (uint8_t* ___bytes0, int64_t ___gbx1, const RuntimeMethod* method)
{
	{
		uint8_t* L_0 = ___bytes0;
		int64_t L_1 = ___gbx1;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, (int32_t)3))) = (int8_t)((int32_t)((uint8_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)L_1%(int64_t)((int64_t)((int64_t)((int32_t)10))))), (int64_t)((int64_t)((int64_t)((int32_t)48)))))));
		int64_t L_2 = ___gbx1;
		___gbx1 = ((int64_t)((int64_t)L_2/(int64_t)((int64_t)((int64_t)((int32_t)10)))));
		uint8_t* L_3 = ___bytes0;
		int64_t L_4 = ___gbx1;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, (int32_t)2))) = (int8_t)((int32_t)((uint8_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)L_4%(int64_t)((int64_t)((int64_t)((int32_t)126))))), (int64_t)((int64_t)((int64_t)((int32_t)129)))))));
		int64_t L_5 = ___gbx1;
		___gbx1 = ((int64_t)((int64_t)L_5/(int64_t)((int64_t)((int64_t)((int32_t)126)))));
		uint8_t* L_6 = ___bytes0;
		int64_t L_7 = ___gbx1;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_6, (int32_t)1))) = (int8_t)((int32_t)((uint8_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)L_7%(int64_t)((int64_t)((int64_t)((int32_t)10))))), (int64_t)((int64_t)((int64_t)((int32_t)48)))))));
		int64_t L_8 = ___gbx1;
		___gbx1 = ((int64_t)((int64_t)L_8/(int64_t)((int64_t)((int64_t)((int32_t)10)))));
		uint8_t* L_9 = ___bytes0;
		int64_t L_10 = ___gbx1;
		*((int8_t*)L_9) = (int8_t)((int32_t)((uint8_t)((int64_t)il2cpp_codegen_add((int64_t)L_10, (int64_t)((int64_t)((int64_t)((int32_t)129)))))));
		return;
	}
}
// System.Int64 I18N.CJK.GB18030Source::FromGBX(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t GB18030Source_FromGBX_m2B43470C984D7B7EFA2F2B4FEEB82616CAEBC44E (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___start1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	uint8_t V_1 = 0x0;
	uint8_t V_2 = 0x0;
	uint8_t V_3 = 0x0;
	int64_t V_4 = 0;
	int64_t V_5 = 0;
	int64_t V_6 = 0;
	int32_t V_7 = 0;
	GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 * V_8 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		int32_t L_1 = ___start1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___bytes0;
		int32_t L_5 = ___start1;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = ___bytes0;
		int32_t L_9 = ___start1;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)2));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_2 = L_11;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = ___bytes0;
		int32_t L_13 = ___start1;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)3));
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_3 = L_15;
		uint8_t L_16 = V_0;
		if ((((int32_t)L_16) < ((int32_t)((int32_t)129))))
		{
			goto IL_0026;
		}
	}
	{
		uint8_t L_17 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_0029;
		}
	}

IL_0026:
	{
		return ((int64_t)((int64_t)(-1)));
	}

IL_0029:
	{
		uint8_t L_18 = V_1;
		if ((((int32_t)L_18) < ((int32_t)((int32_t)48))))
		{
			goto IL_0033;
		}
	}
	{
		uint8_t L_19 = V_1;
		if ((((int32_t)L_19) <= ((int32_t)((int32_t)57))))
		{
			goto IL_0037;
		}
	}

IL_0033:
	{
		return ((int64_t)((int64_t)((int32_t)-2)));
	}

IL_0037:
	{
		uint8_t L_20 = V_2;
		if ((((int32_t)L_20) < ((int32_t)((int32_t)129))))
		{
			goto IL_0047;
		}
	}
	{
		uint8_t L_21 = V_2;
		if ((!(((uint32_t)L_21) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_004b;
		}
	}

IL_0047:
	{
		return ((int64_t)((int64_t)((int32_t)-3)));
	}

IL_004b:
	{
		uint8_t L_22 = V_3;
		if ((((int32_t)L_22) < ((int32_t)((int32_t)48))))
		{
			goto IL_0055;
		}
	}
	{
		uint8_t L_23 = V_3;
		if ((((int32_t)L_23) <= ((int32_t)((int32_t)57))))
		{
			goto IL_0059;
		}
	}

IL_0055:
	{
		return ((int64_t)((int64_t)((int32_t)-4)));
	}

IL_0059:
	{
		uint8_t L_24 = V_0;
		if ((((int32_t)L_24) < ((int32_t)((int32_t)144))))
		{
			goto IL_006c;
		}
	}
	{
		uint8_t L_25 = V_0;
		uint8_t L_26 = V_1;
		uint8_t L_27 = V_2;
		uint8_t L_28 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var);
		int64_t L_29;
		L_29 = GB18030Source_FromGBXRaw_m8AF7E2EC3A688EF593B8A44713CC5F29FF0CC62E(L_25, L_26, L_27, L_28, (bool)1, /*hidden argument*/NULL);
		return L_29;
	}

IL_006c:
	{
		uint8_t L_30 = V_0;
		uint8_t L_31 = V_1;
		uint8_t L_32 = V_2;
		uint8_t L_33 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var);
		int64_t L_34;
		L_34 = GB18030Source_FromGBXRaw_m8AF7E2EC3A688EF593B8A44713CC5F29FF0CC62E(L_30, L_31, L_32, L_33, (bool)0, /*hidden argument*/NULL);
		V_4 = L_34;
		V_5 = ((int64_t)((int64_t)0));
		V_6 = ((int64_t)((int64_t)0));
		V_7 = 0;
		goto IL_00f9;
	}

IL_0085:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var);
		GB18030MapU5BU5D_tEBCE6E25AE316F256DBF693F861C0DFA45BF3B3E* L_35 = ((GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var))->get_ranges_6();
		int32_t L_36 = V_7;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 * L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_8 = L_38;
		int64_t L_39 = V_4;
		GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 * L_40 = V_8;
		NullCheck(L_40);
		int64_t L_41 = L_40->get_GStart_2();
		if ((((int64_t)L_39) >= ((int64_t)L_41)))
		{
			goto IL_00aa;
		}
	}
	{
		int64_t L_42 = V_4;
		int64_t L_43 = V_6;
		int64_t L_44 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var);
		int32_t L_45;
		L_45 = GB18030Source_ToUcsRaw_m6AA82C27AE64348504006215D6EBF6DF5DDC7E04(((int32_t)((int32_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_42, (int64_t)L_43)), (int64_t)L_44)))), /*hidden argument*/NULL);
		return ((int64_t)((int64_t)L_45));
	}

IL_00aa:
	{
		int64_t L_46 = V_4;
		GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 * L_47 = V_8;
		NullCheck(L_47);
		int64_t L_48 = L_47->get_GEnd_3();
		if ((((int64_t)L_46) > ((int64_t)L_48)))
		{
			goto IL_00cf;
		}
	}
	{
		int64_t L_49 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var);
		int64_t L_50 = ((GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var))->get_gbxBase_4();
		GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 * L_51 = V_8;
		NullCheck(L_51);
		int64_t L_52 = L_51->get_GStart_2();
		GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 * L_53 = V_8;
		NullCheck(L_53);
		int32_t L_54 = L_53->get_UStart_0();
		return ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_49, (int64_t)L_50)), (int64_t)L_52)), (int64_t)((int64_t)((int64_t)L_54))));
	}

IL_00cf:
	{
		GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 * L_55 = V_8;
		NullCheck(L_55);
		int64_t L_56 = L_55->get_GStart_2();
		if (!L_56)
		{
			goto IL_00f3;
		}
	}
	{
		int64_t L_57 = V_5;
		GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 * L_58 = V_8;
		NullCheck(L_58);
		int64_t L_59 = L_58->get_GStart_2();
		int64_t L_60 = V_6;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_57, (int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_59, (int64_t)L_60))));
		GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 * L_61 = V_8;
		NullCheck(L_61);
		int64_t L_62 = L_61->get_GEnd_3();
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_62, (int64_t)((int64_t)((int64_t)1))));
	}

IL_00f3:
	{
		int32_t L_63 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)1));
	}

IL_00f9:
	{
		int32_t L_64 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var);
		GB18030MapU5BU5D_tEBCE6E25AE316F256DBF693F861C0DFA45BF3B3E* L_65 = ((GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var))->get_ranges_6();
		NullCheck(L_65);
		if ((((int32_t)L_64) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_65)->max_length))))))
		{
			goto IL_0085;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_66 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var)), (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_67 = L_66;
		uint8_t L_68 = V_0;
		uint8_t L_69 = L_68;
		RuntimeObject * L_70 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)), &L_69);
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, L_70);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_70);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_71 = L_67;
		uint8_t L_72 = V_1;
		uint8_t L_73 = L_72;
		RuntimeObject * L_74 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)), &L_73);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_74);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_75 = L_71;
		uint8_t L_76 = V_2;
		uint8_t L_77 = L_76;
		RuntimeObject * L_78 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)), &L_77);
		NullCheck(L_75);
		ArrayElementTypeCheck (L_75, L_78);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_78);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_79 = L_75;
		uint8_t L_80 = V_3;
		uint8_t L_81 = L_80;
		RuntimeObject * L_82 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)), &L_81);
		NullCheck(L_79);
		ArrayElementTypeCheck (L_79, L_82);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_82);
		String_t* L_83;
		L_83 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCCCA7C0B445ECC76093C5099F1A970EA4228DC03)), L_79, /*hidden argument*/NULL);
		SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62 * L_84 = (SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62_il2cpp_TypeInfo_var)));
		SystemException__ctor_m65B6562BDBB8EF84A384B217BE96647C0BAC770A(L_84, L_83, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_84, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GB18030Source_FromGBX_m2B43470C984D7B7EFA2F2B4FEEB82616CAEBC44E_RuntimeMethod_var)));
	}
}
// System.Int64 I18N.CJK.GB18030Source::FromUCSSurrogate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t GB18030Source_FromUCSSurrogate_m6FF91BBA759FC7091471313FDD695A9BFEF995E2 (int32_t ___cp0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___cp0;
		IL2CPP_RUNTIME_CLASS_INIT(GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var);
		int64_t L_1 = ((GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var))->get_gbxSuppBase_5();
		return ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)L_0)), (int64_t)L_1));
	}
}
// System.Int64 I18N.CJK.GB18030Source::FromUCS(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t GB18030Source_FromUCS_mBC86622A6A7E470D0044A34801A526E758940258 (int32_t ___cp0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int32_t V_2 = 0;
	GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 * V_3 = NULL;
	{
		V_0 = ((int64_t)((int64_t)0));
		V_1 = ((int64_t)((int64_t)((int32_t)128)));
		V_2 = 0;
		goto IL_0068;
	}

IL_000e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var);
		GB18030MapU5BU5D_tEBCE6E25AE316F256DBF693F861C0DFA45BF3B3E* L_0 = ((GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var))->get_ranges_6();
		int32_t L_1 = V_2;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_3 = L_3;
		int32_t L_4 = ___cp0;
		GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 * L_5 = V_3;
		NullCheck(L_5);
		int32_t L_6 = L_5->get_UStart_0();
		if ((((int32_t)L_4) >= ((int32_t)L_6)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_7 = ___cp0;
		int64_t L_8 = V_1;
		int64_t L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var);
		int64_t L_10;
		L_10 = GB18030Source_ToGbxRaw_mDDFAFA00009FA3DCF9BF7E5714C0129A726FE198(((int32_t)((int32_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)((int64_t)((int64_t)L_7)), (int64_t)L_8)), (int64_t)L_9)))), /*hidden argument*/NULL);
		return L_10;
	}

IL_002c:
	{
		int32_t L_11 = ___cp0;
		GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 * L_12 = V_3;
		NullCheck(L_12);
		int32_t L_13 = L_12->get_UEnd_1();
		if ((((int32_t)L_11) > ((int32_t)L_13)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_14 = ___cp0;
		GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 * L_15 = V_3;
		NullCheck(L_15);
		int32_t L_16 = L_15->get_UStart_0();
		GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 * L_17 = V_3;
		NullCheck(L_17);
		int64_t L_18 = L_17->get_GStart_2();
		return ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)L_16)))), (int64_t)L_18));
	}

IL_0046:
	{
		GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 * L_19 = V_3;
		NullCheck(L_19);
		int64_t L_20 = L_19->get_GStart_2();
		if (!L_20)
		{
			goto IL_0064;
		}
	}
	{
		int64_t L_21 = V_0;
		GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 * L_22 = V_3;
		NullCheck(L_22);
		int32_t L_23 = L_22->get_UStart_0();
		int64_t L_24 = V_1;
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_21, (int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)((int64_t)((int64_t)L_23)), (int64_t)L_24))));
		GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 * L_25 = V_3;
		NullCheck(L_25);
		int32_t L_26 = L_25->get_UEnd_1();
		V_1 = ((int64_t)((int64_t)((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1))));
	}

IL_0064:
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_0068:
	{
		int32_t L_28 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var);
		GB18030MapU5BU5D_tEBCE6E25AE316F256DBF693F861C0DFA45BF3B3E* L_29 = ((GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var))->get_ranges_6();
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length))))))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_30 = ___cp0;
		int32_t L_31 = L_30;
		RuntimeObject * L_32 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_31);
		String_t* L_33;
		L_33 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral40EE947A7070BE6D20D77536685265C688F4713A)), L_32, /*hidden argument*/NULL);
		SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62 * L_34 = (SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62_il2cpp_TypeInfo_var)));
		SystemException__ctor_m65B6562BDBB8EF84A384B217BE96647C0BAC770A(L_34, L_33, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_34, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GB18030Source_FromUCS_mBC86622A6A7E470D0044A34801A526E758940258_RuntimeMethod_var)));
	}
}
// System.Int64 I18N.CJK.GB18030Source::FromGBXRaw(System.Byte,System.Byte,System.Byte,System.Byte,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t GB18030Source_FromGBXRaw_m8AF7E2EC3A688EF593B8A44713CC5F29FF0CC62E (uint8_t ___b10, uint8_t ___b21, uint8_t ___b32, uint8_t ___b43, bool ___supp4, const RuntimeMethod* method)
{
	uint8_t G_B2_0 = 0x0;
	uint8_t G_B1_0 = 0x0;
	int32_t G_B3_0 = 0;
	uint8_t G_B3_1 = 0x0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	{
		uint8_t L_0 = ___b10;
		bool L_1 = ___supp4;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_000c;
		}
	}
	{
		G_B3_0 = ((int32_t)129);
		G_B3_1 = G_B1_0;
		goto IL_0011;
	}

IL_000c:
	{
		G_B3_0 = ((int32_t)144);
		G_B3_1 = G_B2_0;
	}

IL_0011:
	{
		uint8_t L_2 = ___b21;
		uint8_t L_3 = ___b32;
		uint8_t L_4 = ___b43;
		bool L_5 = ___supp4;
		G_B4_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)G_B3_1, (int32_t)G_B3_0)), (int32_t)((int32_t)10))), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)((int32_t)48))))), (int32_t)((int32_t)126))), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)((int32_t)129))))), (int32_t)((int32_t)10))), (int32_t)L_4)), (int32_t)((int32_t)48)));
		if (L_5)
		{
			G_B5_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)G_B3_1, (int32_t)G_B3_0)), (int32_t)((int32_t)10))), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)((int32_t)48))))), (int32_t)((int32_t)126))), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)((int32_t)129))))), (int32_t)((int32_t)10))), (int32_t)L_4)), (int32_t)((int32_t)48)));
			goto IL_0034;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		goto IL_0039;
	}

IL_0034:
	{
		G_B6_0 = ((int32_t)65536);
		G_B6_1 = G_B5_0;
	}

IL_0039:
	{
		return ((int64_t)((int64_t)((int32_t)il2cpp_codegen_add((int32_t)G_B6_1, (int32_t)G_B6_0))));
	}
}
// System.Int32 I18N.CJK.GB18030Source::ToUcsRaw(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GB18030Source_ToUcsRaw_m6AA82C27AE64348504006215D6EBF6DF5DDC7E04 (int32_t ___idx0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var);
		uint8_t* L_0 = ((GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var))->get_gbx2uni_0();
		int32_t L_1 = ___idx0;
		int32_t L_2 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)2)))));
		uint8_t* L_3 = ((GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var))->get_gbx2uni_0();
		int32_t L_4 = ___idx0;
		int32_t L_5 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_4, (int32_t)2)), (int32_t)1)))));
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)((int32_t)256))), (int32_t)L_5));
	}
}
// System.Int64 I18N.CJK.GB18030Source::ToGbxRaw(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t GB18030Source_ToGbxRaw_mDDFAFA00009FA3DCF9BF7E5714C0129A726FE198 (int32_t ___idx0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___idx0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1 = ___idx0;
		IL2CPP_RUNTIME_CLASS_INIT(GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var);
		int32_t L_2 = ((GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var))->get_uni2gbxSize_3();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)2)), (int32_t)1))) < ((int32_t)L_2)))
		{
			goto IL_0013;
		}
	}

IL_0010:
	{
		return ((int64_t)((int64_t)(-1)));
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var);
		int64_t L_3 = ((GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var))->get_gbxBase_4();
		uint8_t* L_4 = ((GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var))->get_uni2gbx_1();
		int32_t L_5 = ___idx0;
		int32_t L_6 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_4, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_5, (int32_t)2)))));
		uint8_t* L_7 = ((GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t8FCA18A83527967C9653CABDED4ACC87B9D85C7D_il2cpp_TypeInfo_var))->get_uni2gbx_1();
		int32_t L_8 = ___idx0;
		int32_t L_9 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)2)), (int32_t)1)))));
		return ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_add((int64_t)L_3, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_6, (int32_t)((int32_t)256))))))), (int64_t)((int64_t)((uint64_t)((uint32_t)((uint32_t)L_9))))));
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
// System.Void I18N.CJK.ISO2022JPDecoder::.ctor(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISO2022JPDecoder__ctor_m06543AB01B9F9E76ED987464319AB8C8750174B9 (ISO2022JPDecoder_t1614BCC169A8897B2CD138F980FB728DB696B2CC * __this, bool ___allow1ByteKana0, bool ___allowShiftIO1, const RuntimeMethod* method)
{
	{
		Decoder__ctor_m2EA154371203FAAE1CD0477C828E0B39B2091DF3(__this, /*hidden argument*/NULL);
		bool L_0 = ___allowShiftIO1;
		__this->set_allow_shift_io_3(L_0);
		return;
	}
}
// System.Int32 I18N.CJK.ISO2022JPDecoder::GetCharCount(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ISO2022JPDecoder_GetCharCount_m592EEF23A381113BF30DF2E283E503DCA4212E91 (ISO2022JPDecoder_t1614BCC169A8897B2CD138F980FB728DB696B2CC * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint8_t V_3 = 0x0;
	bool V_4 = false;
	ISO2022JPDecoder_t1614BCC169A8897B2CD138F980FB728DB696B2CC * G_B22_0 = NULL;
	ISO2022JPDecoder_t1614BCC169A8897B2CD138F980FB728DB696B2CC * G_B21_0 = NULL;
	int32_t G_B23_0 = 0;
	ISO2022JPDecoder_t1614BCC169A8897B2CD138F980FB728DB696B2CC * G_B23_1 = NULL;
	{
		V_0 = 0;
		int32_t L_0 = ___index1;
		int32_t L_1 = ___count2;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1));
		int32_t L_2 = ___index1;
		V_2 = L_2;
		goto IL_00e1;
	}

IL_000d:
	{
		bool L_3 = __this->get_allow_shift_io_3();
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___bytes0;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		uint8_t L_8 = V_3;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)14))))
		{
			goto IL_002f;
		}
	}
	{
		uint8_t L_9 = V_3;
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)15)))))
		{
			goto IL_003b;
		}
	}
	{
		__this->set_shifted_in_count_6((bool)0);
		goto IL_00dd;
	}

IL_002f:
	{
		__this->set_shifted_in_count_6((bool)1);
		goto IL_00dd;
	}

IL_003b:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = ___bytes0;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		uint8_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		if ((((int32_t)L_13) == ((int32_t)((int32_t)27))))
		{
			goto IL_006c;
		}
	}
	{
		bool L_14 = __this->get_shifted_in_count_6();
		if (L_14)
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_15 = __this->get_m_4();
		if ((!(((uint32_t)L_15) == ((uint32_t)1))))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_16 = V_2;
		int32_t L_17 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1))) == ((int32_t)L_17)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
		goto IL_00dd;
	}

IL_0066:
	{
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
		goto IL_00dd;
	}

IL_006c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)2))) >= ((int32_t)L_22)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
		V_4 = (bool)0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_24 = ___bytes0;
		int32_t L_25 = V_2;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		uint8_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		if ((!(((uint32_t)L_27) == ((uint32_t)((int32_t)36)))))
		{
			goto IL_0085;
		}
	}
	{
		V_4 = (bool)1;
		goto IL_0097;
	}

IL_0085:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_28 = ___bytes0;
		int32_t L_29 = V_2;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		uint8_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		if ((!(((uint32_t)L_31) == ((uint32_t)((int32_t)40)))))
		{
			goto IL_0091;
		}
	}
	{
		V_4 = (bool)0;
		goto IL_0097;
	}

IL_0091:
	{
		int32_t L_32 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)2));
		goto IL_00dd;
	}

IL_0097:
	{
		int32_t L_33 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_34 = ___bytes0;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		uint8_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		if ((((int32_t)L_37) == ((int32_t)((int32_t)66))))
		{
			goto IL_00a9;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_38 = ___bytes0;
		int32_t L_39 = V_2;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		uint8_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		if ((!(((uint32_t)L_41) == ((uint32_t)((int32_t)64)))))
		{
			goto IL_00b9;
		}
	}

IL_00a9:
	{
		bool L_42 = V_4;
		G_B21_0 = __this;
		if (L_42)
		{
			G_B22_0 = __this;
			goto IL_00b1;
		}
	}
	{
		G_B23_0 = 0;
		G_B23_1 = G_B21_0;
		goto IL_00b2;
	}

IL_00b1:
	{
		G_B23_0 = 1;
		G_B23_1 = G_B22_0;
	}

IL_00b2:
	{
		NullCheck(G_B23_1);
		G_B23_1->set_m_4(G_B23_0);
		goto IL_00dd;
	}

IL_00b9:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_43 = ___bytes0;
		int32_t L_44 = V_2;
		NullCheck(L_43);
		int32_t L_45 = L_44;
		uint8_t L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		if ((!(((uint32_t)L_46) == ((uint32_t)((int32_t)74)))))
		{
			goto IL_00c9;
		}
	}
	{
		__this->set_m_4(0);
		goto IL_00dd;
	}

IL_00c9:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_47 = ___bytes0;
		int32_t L_48 = V_2;
		NullCheck(L_47);
		int32_t L_49 = L_48;
		uint8_t L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		if ((!(((uint32_t)L_50) == ((uint32_t)((int32_t)73)))))
		{
			goto IL_00d9;
		}
	}
	{
		__this->set_m_4(2);
		goto IL_00dd;
	}

IL_00d9:
	{
		int32_t L_51 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)3));
	}

IL_00dd:
	{
		int32_t L_52 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1));
	}

IL_00e1:
	{
		int32_t L_53 = V_2;
		int32_t L_54 = V_1;
		if ((((int32_t)L_53) < ((int32_t)L_54)))
		{
			goto IL_000d;
		}
	}

IL_00e8:
	{
		int32_t L_55 = V_0;
		return L_55;
	}
}
// System.Int32 I18N.CJK.ISO2022JPDecoder::ToChar(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ISO2022JPDecoder_ToChar_m4F85A5DB20D231D4470B7B63B5E037752496E03D (ISO2022JPDecoder_t1614BCC169A8897B2CD138F980FB728DB696B2CC * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISO2022JPDecoder_t1614BCC169A8897B2CD138F980FB728DB696B2CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___value0;
		___value0 = ((int32_t)((int32_t)L_0<<(int32_t)1));
		int32_t L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(ISO2022JPDecoder_t1614BCC169A8897B2CD138F980FB728DB696B2CC_il2cpp_TypeInfo_var);
		JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848 * L_2 = ((ISO2022JPDecoder_t1614BCC169A8897B2CD138F980FB728DB696B2CC_StaticFields*)il2cpp_codegen_static_fields_for(ISO2022JPDecoder_t1614BCC169A8897B2CD138F980FB728DB696B2CC_il2cpp_TypeInfo_var))->get_convert_2();
		NullCheck(L_2);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = L_2->get_jisx0208ToUnicode_5();
		NullCheck(L_3);
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1))) >= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_4 = ___value0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ISO2022JPDecoder_t1614BCC169A8897B2CD138F980FB728DB696B2CC_il2cpp_TypeInfo_var);
		JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848 * L_5 = ((ISO2022JPDecoder_t1614BCC169A8897B2CD138F980FB728DB696B2CC_StaticFields*)il2cpp_codegen_static_fields_for(ISO2022JPDecoder_t1614BCC169A8897B2CD138F980FB728DB696B2CC_il2cpp_TypeInfo_var))->get_convert_2();
		NullCheck(L_5);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = L_5->get_jisx0208ToUnicode_5();
		int32_t L_7 = ___value0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848 * L_10 = ((ISO2022JPDecoder_t1614BCC169A8897B2CD138F980FB728DB696B2CC_StaticFields*)il2cpp_codegen_static_fields_for(ISO2022JPDecoder_t1614BCC169A8897B2CD138F980FB728DB696B2CC_il2cpp_TypeInfo_var))->get_convert_2();
		NullCheck(L_10);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = L_10->get_jisx0208ToUnicode_5();
		int32_t L_12 = ___value0;
		NullCheck(L_11);
		int32_t L_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
		uint8_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		return ((int32_t)((int32_t)L_9|(int32_t)((int32_t)((int32_t)L_14<<(int32_t)8))));
	}

IL_0038:
	{
		return (-1);
	}
}
// System.Int32 I18N.CJK.ISO2022JPDecoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ISO2022JPDecoder_GetChars_m16CFB52E90679F1ABF4ED276029D093FC433BD5F (ISO2022JPDecoder_t1614BCC169A8897B2CD138F980FB728DB696B2CC * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars3, int32_t ___charIndex4, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint8_t V_3 = 0x0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	bool V_8 = false;
	int32_t G_B16_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B17_1 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B18_0 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B20_1 = 0;
	int32_t G_B23_0 = 0;
	ISO2022JPDecoder_t1614BCC169A8897B2CD138F980FB728DB696B2CC * G_B41_0 = NULL;
	ISO2022JPDecoder_t1614BCC169A8897B2CD138F980FB728DB696B2CC * G_B40_0 = NULL;
	int32_t G_B42_0 = 0;
	ISO2022JPDecoder_t1614BCC169A8897B2CD138F980FB728DB696B2CC * G_B42_1 = NULL;
	{
		int32_t L_0 = ___charIndex4;
		V_0 = L_0;
		int32_t L_1 = ___byteIndex1;
		int32_t L_2 = ___byteCount2;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2));
		int32_t L_3 = ___byteIndex1;
		V_2 = L_3;
		goto IL_0222;
	}

IL_000e:
	{
		bool L_4 = __this->get_allow_shift_io_3();
		if (!L_4)
		{
			goto IL_003c;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = ___bytes0;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint8_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = L_8;
		uint8_t L_9 = V_3;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)14))))
		{
			goto IL_0030;
		}
	}
	{
		uint8_t L_10 = V_3;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)15)))))
		{
			goto IL_003c;
		}
	}
	{
		__this->set_shifted_in_conv_5((bool)0);
		goto IL_021e;
	}

IL_0030:
	{
		__this->set_shifted_in_conv_5((bool)1);
		goto IL_021e;
	}

IL_003c:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = ___bytes0;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		uint8_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		if ((((int32_t)L_14) == ((int32_t)((int32_t)27))))
		{
			goto IL_0171;
		}
	}
	{
		bool L_15 = __this->get_shifted_in_conv_5();
		if (L_15)
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_16 = __this->get_m_4();
		if ((!(((uint32_t)L_16) == ((uint32_t)2))))
		{
			goto IL_0088;
		}
	}

IL_0057:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17 = ___bytes0;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		uint8_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		if ((((int32_t)L_20) >= ((int32_t)((int32_t)96))))
		{
			goto IL_0077;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_21 = ___chars3;
		int32_t L_22 = ___charIndex4;
		int32_t L_23 = L_22;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_24 = ___bytes0;
		int32_t L_25 = V_2;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		uint8_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (Il2CppChar)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)((int32_t)65344))))));
		goto IL_021e;
	}

IL_0077:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_28 = ___chars3;
		int32_t L_29 = ___charIndex4;
		int32_t L_30 = L_29;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (Il2CppChar)((int32_t)63));
		goto IL_021e;
	}

IL_0088:
	{
		int32_t L_31 = __this->get_m_4();
		if ((!(((uint32_t)L_31) == ((uint32_t)1))))
		{
			goto IL_012c;
		}
	}
	{
		int32_t L_32 = V_2;
		int32_t L_33 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1))) == ((int32_t)L_33)))
		{
			goto IL_0231;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_34 = ___bytes0;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		uint8_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_38 = ___bytes0;
		int32_t L_39 = V_2;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		uint8_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		G_B15_0 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_37, (int32_t)1))>>(int32_t)1));
		if ((((int32_t)L_41) <= ((int32_t)((int32_t)94))))
		{
			G_B16_0 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_37, (int32_t)1))>>(int32_t)1));
			goto IL_00b2;
		}
	}
	{
		G_B17_0 = ((int32_t)177);
		G_B17_1 = G_B15_0;
		goto IL_00b4;
	}

IL_00b2:
	{
		G_B17_0 = ((int32_t)113);
		G_B17_1 = G_B16_0;
	}

IL_00b4:
	{
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)G_B17_1, (int32_t)G_B17_0));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_42 = ___bytes0;
		int32_t L_43 = V_2;
		NullCheck(L_42);
		int32_t L_44 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1));
		uint8_t L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_46 = ___bytes0;
		int32_t L_47 = V_2;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		uint8_t L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		G_B18_0 = ((int32_t)(L_45));
		if (((int32_t)((int32_t)L_49&(int32_t)1)))
		{
			G_B19_0 = ((int32_t)(L_45));
			goto IL_00c7;
		}
	}
	{
		G_B20_0 = ((int32_t)126);
		G_B20_1 = G_B18_0;
		goto IL_00c9;
	}

IL_00c7:
	{
		G_B20_0 = ((int32_t)32);
		G_B20_1 = G_B19_0;
	}

IL_00c9:
	{
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)G_B20_1, (int32_t)G_B20_0));
		int32_t L_50 = V_4;
		if ((((int32_t)L_50) <= ((int32_t)((int32_t)159))))
		{
			goto IL_00df;
		}
	}
	{
		int32_t L_51 = V_4;
		G_B23_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_51, (int32_t)((int32_t)193)));
		goto IL_00e7;
	}

IL_00df:
	{
		int32_t L_52 = V_4;
		G_B23_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_52, (int32_t)((int32_t)129)));
	}

IL_00e7:
	{
		V_6 = ((int32_t)il2cpp_codegen_multiply((int32_t)G_B23_0, (int32_t)((int32_t)188)));
		int32_t L_53 = V_6;
		int32_t L_54 = V_5;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_54, (int32_t)((int32_t)65)))));
		int32_t L_55 = V_6;
		int32_t L_56;
		L_56 = ISO2022JPDecoder_ToChar_m4F85A5DB20D231D4470B7B63B5E037752496E03D(__this, L_55, /*hidden argument*/NULL);
		V_7 = L_56;
		int32_t L_57 = V_7;
		if ((((int32_t)L_57) >= ((int32_t)0)))
		{
			goto IL_0116;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_58 = ___chars3;
		int32_t L_59 = ___charIndex4;
		int32_t L_60 = L_59;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_60, (int32_t)1));
		NullCheck(L_58);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(L_60), (Il2CppChar)((int32_t)63));
		goto IL_0123;
	}

IL_0116:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_61 = ___chars3;
		int32_t L_62 = ___charIndex4;
		int32_t L_63 = L_62;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)1));
		int32_t L_64 = V_7;
		NullCheck(L_61);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(L_63), (Il2CppChar)((int32_t)((uint16_t)L_64)));
	}

IL_0123:
	{
		int32_t L_65 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)1));
		goto IL_021e;
	}

IL_012c:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_66 = ___bytes0;
		int32_t L_67 = V_2;
		NullCheck(L_66);
		int32_t L_68 = L_67;
		uint8_t L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		if ((((int32_t)L_69) <= ((int32_t)((int32_t)160))))
		{
			goto IL_015f;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_70 = ___bytes0;
		int32_t L_71 = V_2;
		NullCheck(L_70);
		int32_t L_72 = L_71;
		uint8_t L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		if ((((int32_t)L_73) >= ((int32_t)((int32_t)224))))
		{
			goto IL_015f;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_74 = ___chars3;
		int32_t L_75 = ___charIndex4;
		int32_t L_76 = L_75;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_77 = ___bytes0;
		int32_t L_78 = V_2;
		NullCheck(L_77);
		int32_t L_79 = L_78;
		uint8_t L_80 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		NullCheck(L_74);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(L_76), (Il2CppChar)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_80, (int32_t)((int32_t)160))), (int32_t)((int32_t)65376))))));
		goto IL_021e;
	}

IL_015f:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_81 = ___chars3;
		int32_t L_82 = ___charIndex4;
		int32_t L_83 = L_82;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_83, (int32_t)1));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_84 = ___bytes0;
		int32_t L_85 = V_2;
		NullCheck(L_84);
		int32_t L_86 = L_85;
		uint8_t L_87 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		NullCheck(L_81);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(L_83), (Il2CppChar)L_87);
		goto IL_021e;
	}

IL_0171:
	{
		int32_t L_88 = V_2;
		int32_t L_89 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_88, (int32_t)2))) >= ((int32_t)L_89)))
		{
			goto IL_0231;
		}
	}
	{
		int32_t L_90 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_90, (int32_t)1));
		V_8 = (bool)0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_91 = ___bytes0;
		int32_t L_92 = V_2;
		NullCheck(L_91);
		int32_t L_93 = L_92;
		uint8_t L_94 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		if ((!(((uint32_t)L_94) == ((uint32_t)((int32_t)36)))))
		{
			goto IL_018d;
		}
	}
	{
		V_8 = (bool)1;
		goto IL_01b4;
	}

IL_018d:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_95 = ___bytes0;
		int32_t L_96 = V_2;
		NullCheck(L_95);
		int32_t L_97 = L_96;
		uint8_t L_98 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		if ((!(((uint32_t)L_98) == ((uint32_t)((int32_t)40)))))
		{
			goto IL_0199;
		}
	}
	{
		V_8 = (bool)0;
		goto IL_01b4;
	}

IL_0199:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_99 = ___chars3;
		int32_t L_100 = ___charIndex4;
		int32_t L_101 = L_100;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_101, (int32_t)1));
		NullCheck(L_99);
		(L_99)->SetAt(static_cast<il2cpp_array_size_t>(L_101), (Il2CppChar)((int32_t)27));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_102 = ___chars3;
		int32_t L_103 = ___charIndex4;
		int32_t L_104 = L_103;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_104, (int32_t)1));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_105 = ___bytes0;
		int32_t L_106 = V_2;
		NullCheck(L_105);
		int32_t L_107 = L_106;
		uint8_t L_108 = (L_105)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		NullCheck(L_102);
		(L_102)->SetAt(static_cast<il2cpp_array_size_t>(L_104), (Il2CppChar)L_108);
		goto IL_021e;
	}

IL_01b4:
	{
		int32_t L_109 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_109, (int32_t)1));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_110 = ___bytes0;
		int32_t L_111 = V_2;
		NullCheck(L_110);
		int32_t L_112 = L_111;
		uint8_t L_113 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		if ((((int32_t)L_113) == ((int32_t)((int32_t)66))))
		{
			goto IL_01c6;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_114 = ___bytes0;
		int32_t L_115 = V_2;
		NullCheck(L_114);
		int32_t L_116 = L_115;
		uint8_t L_117 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		if ((!(((uint32_t)L_117) == ((uint32_t)((int32_t)64)))))
		{
			goto IL_01d6;
		}
	}

IL_01c6:
	{
		bool L_118 = V_8;
		G_B40_0 = __this;
		if (L_118)
		{
			G_B41_0 = __this;
			goto IL_01ce;
		}
	}
	{
		G_B42_0 = 0;
		G_B42_1 = G_B40_0;
		goto IL_01cf;
	}

IL_01ce:
	{
		G_B42_0 = 1;
		G_B42_1 = G_B41_0;
	}

IL_01cf:
	{
		NullCheck(G_B42_1);
		G_B42_1->set_m_4(G_B42_0);
		goto IL_021e;
	}

IL_01d6:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_119 = ___bytes0;
		int32_t L_120 = V_2;
		NullCheck(L_119);
		int32_t L_121 = L_120;
		uint8_t L_122 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		if ((!(((uint32_t)L_122) == ((uint32_t)((int32_t)74)))))
		{
			goto IL_01e6;
		}
	}
	{
		__this->set_m_4(0);
		goto IL_021e;
	}

IL_01e6:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_123 = ___bytes0;
		int32_t L_124 = V_2;
		NullCheck(L_123);
		int32_t L_125 = L_124;
		uint8_t L_126 = (L_123)->GetAt(static_cast<il2cpp_array_size_t>(L_125));
		if ((!(((uint32_t)L_126) == ((uint32_t)((int32_t)73)))))
		{
			goto IL_01f6;
		}
	}
	{
		__this->set_m_4(2);
		goto IL_021e;
	}

IL_01f6:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_127 = ___chars3;
		int32_t L_128 = ___charIndex4;
		int32_t L_129 = L_128;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_129, (int32_t)1));
		NullCheck(L_127);
		(L_127)->SetAt(static_cast<il2cpp_array_size_t>(L_129), (Il2CppChar)((int32_t)27));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_130 = ___chars3;
		int32_t L_131 = ___charIndex4;
		int32_t L_132 = L_131;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_132, (int32_t)1));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_133 = ___bytes0;
		int32_t L_134 = V_2;
		NullCheck(L_133);
		int32_t L_135 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_134, (int32_t)1));
		uint8_t L_136 = (L_133)->GetAt(static_cast<il2cpp_array_size_t>(L_135));
		NullCheck(L_130);
		(L_130)->SetAt(static_cast<il2cpp_array_size_t>(L_132), (Il2CppChar)L_136);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_137 = ___chars3;
		int32_t L_138 = ___charIndex4;
		int32_t L_139 = L_138;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_139, (int32_t)1));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_140 = ___bytes0;
		int32_t L_141 = V_2;
		NullCheck(L_140);
		int32_t L_142 = L_141;
		uint8_t L_143 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_142));
		NullCheck(L_137);
		(L_137)->SetAt(static_cast<il2cpp_array_size_t>(L_139), (Il2CppChar)L_143);
	}

IL_021e:
	{
		int32_t L_144 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_144, (int32_t)1));
	}

IL_0222:
	{
		int32_t L_145 = V_2;
		int32_t L_146 = V_1;
		if ((((int32_t)L_145) >= ((int32_t)L_146)))
		{
			goto IL_0231;
		}
	}
	{
		int32_t L_147 = ___charIndex4;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_148 = ___chars3;
		NullCheck(L_148);
		if ((((int32_t)L_147) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_148)->max_length))))))
		{
			goto IL_000e;
		}
	}

IL_0231:
	{
		int32_t L_149 = ___charIndex4;
		int32_t L_150 = V_0;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_149, (int32_t)L_150));
	}
}
// System.Void I18N.CJK.ISO2022JPDecoder::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISO2022JPDecoder_Reset_mDFAF5AC8765D2DCAE320575DA3D737E094E9C89D (ISO2022JPDecoder_t1614BCC169A8897B2CD138F980FB728DB696B2CC * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		__this->set_m_4(0);
		int32_t L_0 = 0;
		V_0 = (bool)L_0;
		__this->set_shifted_in_conv_5((bool)L_0);
		bool L_1 = V_0;
		__this->set_shifted_in_count_6(L_1);
		return;
	}
}
// System.Void I18N.CJK.ISO2022JPDecoder::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISO2022JPDecoder__cctor_mE7051CBC3E34EC478EFBDE8A811181B41152D518 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISO2022JPDecoder_t1614BCC169A8897B2CD138F980FB728DB696B2CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848_il2cpp_TypeInfo_var);
		JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848 * L_0;
		L_0 = JISConvert_get_Convert_m2294F43F984013F908B15172EAB6EBABFA13C774(/*hidden argument*/NULL);
		((ISO2022JPDecoder_t1614BCC169A8897B2CD138F980FB728DB696B2CC_StaticFields*)il2cpp_codegen_static_fields_for(ISO2022JPDecoder_t1614BCC169A8897B2CD138F980FB728DB696B2CC_il2cpp_TypeInfo_var))->set_convert_2(L_0);
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
// System.Void I18N.CJK.ISO2022JPEncoder::.ctor(I18N.Common.MonoSafeEncoding,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISO2022JPEncoder__ctor_m073DCB645A4884B69F76CA85B0E822305AECB7DE (ISO2022JPEncoder_tB0BDAE1A1F936AB4C05A6AD1FDEFE4945EE29AA6 * __this, MonoSafeEncoding_t0F0341C8A621EBF14ADEA3F5DC248BC26F7DDE83 * ___owner0, bool ___allow1ByteKana1, bool ___allowShiftIO2, const RuntimeMethod* method)
{
	{
		MonoSafeEncoding_t0F0341C8A621EBF14ADEA3F5DC248BC26F7DDE83 * L_0 = ___owner0;
		MonoSafeEncoder__ctor_mE2203C5488EEAE1D2D9D8E3F1FC21ECE168DAADC(__this, L_0, /*hidden argument*/NULL);
		bool L_1 = ___allow1ByteKana1;
		__this->set_allow_1byte_kana_4(L_1);
		bool L_2 = ___allowShiftIO2;
		__this->set_allow_shift_io_5(L_2);
		return;
	}
}
// System.Int32 I18N.CJK.ISO2022JPEncoder::GetByteCount(System.Char[],System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ISO2022JPEncoder_GetByteCount_m909A122C2D2A1DB3782BAA864D85FD637552F431 (ISO2022JPEncoder_tB0BDAE1A1F936AB4C05A6AD1FDEFE4945EE29AA6 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars0, int32_t ___charIndex1, int32_t ___charCount2, bool ___flush3, const RuntimeMethod* method)
{
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = ___chars0;
		int32_t L_1 = ___charIndex1;
		int32_t L_2 = ___charCount2;
		int32_t L_3;
		L_3 = ISO2022JPEncoder_GetBytesInternal_mEC43FC6C78F367623434CDE57B60D1037048C5C2(__this, L_0, L_1, L_2, (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL, 0, (bool)1, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean I18N.CJK.ISO2022JPEncoder::IsShifted(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ISO2022JPEncoder_IsShifted_m67C4494F77A8E0B9D934DC17AC96C4293882095B (ISO2022JPEncoder_tB0BDAE1A1F936AB4C05A6AD1FDEFE4945EE29AA6 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		bool L_1 = __this->get_shifted_in_conv_8();
		return L_1;
	}

IL_000a:
	{
		bool L_2 = __this->get_shifted_in_count_7();
		return L_2;
	}
}
// System.Void I18N.CJK.ISO2022JPEncoder::SetShifted(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISO2022JPEncoder_SetShifted_m7508E9E80582B5BD32FD5118042E756B100FD3E7 (ISO2022JPEncoder_tB0BDAE1A1F936AB4C05A6AD1FDEFE4945EE29AA6 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, bool ___state1, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		bool L_1 = ___state1;
		__this->set_shifted_in_count_7(L_1);
		return;
	}

IL_000b:
	{
		bool L_2 = ___state1;
		__this->set_shifted_in_conv_8(L_2);
		return;
	}
}
// System.Void I18N.CJK.ISO2022JPEncoder::SwitchMode(System.Byte[],System.Int32&,System.Int32&,I18N.CJK.ISO2022JPMode&,I18N.CJK.ISO2022JPMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISO2022JPEncoder_SwitchMode_mC061C595999EB3847AA86F761E11549ED9B31F3C (ISO2022JPEncoder_tB0BDAE1A1F936AB4C05A6AD1FDEFE4945EE29AA6 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t* ___byteIndex1, int32_t* ___byteCount2, int32_t* ___cur3, int32_t ___next4, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___cur3;
		int32_t L_1 = *((int32_t*)L_0);
		int32_t L_2 = ___next4;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0008;
		}
	}
	{
		return;
	}

IL_0008:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___bytes0;
		if (L_3)
		{
			goto IL_0017;
		}
	}
	{
		int32_t* L_4 = ___byteIndex1;
		int32_t* L_5 = ___byteIndex1;
		int32_t L_6 = *((int32_t*)L_5);
		*((int32_t*)L_4) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)3));
		int32_t* L_7 = ___cur3;
		int32_t L_8 = ___next4;
		*((int32_t*)L_7) = (int32_t)L_8;
		return;
	}

IL_0017:
	{
		int32_t* L_9 = ___byteCount2;
		int32_t L_10 = *((int32_t*)L_9);
		if ((((int32_t)L_10) > ((int32_t)3)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_11 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8B19C1CC68E20679F72DBE50617728AA0FDEE4D3)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ISO2022JPEncoder_SwitchMode_mC061C595999EB3847AA86F761E11549ED9B31F3C_RuntimeMethod_var)));
	}

IL_0027:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = ___bytes0;
		int32_t* L_13 = ___byteIndex1;
		int32_t* L_14 = ___byteIndex1;
		int32_t L_15 = *((int32_t*)L_14);
		V_0 = L_15;
		int32_t L_16 = V_0;
		*((int32_t*)L_13) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
		int32_t L_17 = V_0;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (uint8_t)((int32_t)27));
		int32_t L_18 = ___next4;
		if ((((int32_t)L_18) == ((int32_t)1)))
		{
			goto IL_005a;
		}
	}
	{
		int32_t L_19 = ___next4;
		if ((!(((uint32_t)L_19) == ((uint32_t)2))))
		{
			goto IL_0076;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_20 = ___bytes0;
		int32_t* L_21 = ___byteIndex1;
		int32_t* L_22 = ___byteIndex1;
		int32_t L_23 = *((int32_t*)L_22);
		V_0 = L_23;
		int32_t L_24 = V_0;
		*((int32_t*)L_21) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
		int32_t L_25 = V_0;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (uint8_t)((int32_t)40));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_26 = ___bytes0;
		int32_t* L_27 = ___byteIndex1;
		int32_t* L_28 = ___byteIndex1;
		int32_t L_29 = *((int32_t*)L_28);
		V_0 = L_29;
		int32_t L_30 = V_0;
		*((int32_t*)L_27) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
		int32_t L_31 = V_0;
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (uint8_t)((int32_t)73));
		goto IL_0090;
	}

IL_005a:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_32 = ___bytes0;
		int32_t* L_33 = ___byteIndex1;
		int32_t* L_34 = ___byteIndex1;
		int32_t L_35 = *((int32_t*)L_34);
		V_0 = L_35;
		int32_t L_36 = V_0;
		*((int32_t*)L_33) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
		int32_t L_37 = V_0;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(L_37), (uint8_t)((int32_t)36));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_38 = ___bytes0;
		int32_t* L_39 = ___byteIndex1;
		int32_t* L_40 = ___byteIndex1;
		int32_t L_41 = *((int32_t*)L_40);
		V_0 = L_41;
		int32_t L_42 = V_0;
		*((int32_t*)L_39) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1));
		int32_t L_43 = V_0;
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(L_43), (uint8_t)((int32_t)66));
		goto IL_0090;
	}

IL_0076:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_44 = ___bytes0;
		int32_t* L_45 = ___byteIndex1;
		int32_t* L_46 = ___byteIndex1;
		int32_t L_47 = *((int32_t*)L_46);
		V_0 = L_47;
		int32_t L_48 = V_0;
		*((int32_t*)L_45) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)1));
		int32_t L_49 = V_0;
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_49), (uint8_t)((int32_t)40));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_50 = ___bytes0;
		int32_t* L_51 = ___byteIndex1;
		int32_t* L_52 = ___byteIndex1;
		int32_t L_53 = *((int32_t*)L_52);
		V_0 = L_53;
		int32_t L_54 = V_0;
		*((int32_t*)L_51) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)1));
		int32_t L_55 = V_0;
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(L_55), (uint8_t)((int32_t)66));
	}

IL_0090:
	{
		int32_t* L_56 = ___cur3;
		int32_t L_57 = ___next4;
		*((int32_t*)L_56) = (int32_t)L_57;
		return;
	}
}
// System.Int32 I18N.CJK.ISO2022JPEncoder::GetBytesInternal(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ISO2022JPEncoder_GetBytesInternal_mEC43FC6C78F367623434CDE57B60D1037048C5C2 (ISO2022JPEncoder_tB0BDAE1A1F936AB4C05A6AD1FDEFE4945EE29AA6 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars0, int32_t ___charIndex1, int32_t ___charCount2, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes3, int32_t ___byteIndex4, bool ___flush5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISO2022JPEncoder_tB0BDAE1A1F936AB4C05A6AD1FDEFE4945EE29AA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Il2CppChar V_5 = 0x0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___byteIndex4;
		V_0 = L_0;
		int32_t L_1 = ___charIndex1;
		int32_t L_2 = ___charCount2;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___bytes3;
		if (L_3)
		{
			goto IL_000e;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0012;
	}

IL_000e:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___bytes3;
		NullCheck(L_4);
		G_B3_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)));
	}

IL_0012:
	{
		V_3 = G_B3_0;
		int32_t L_5 = ___charIndex1;
		V_4 = L_5;
		goto IL_02a2;
	}

IL_001b:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_6 = ___chars0;
		int32_t L_7 = V_4;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint16_t L_9 = (uint16_t)(L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_5 = L_9;
		bool L_10 = __this->get_allow_1byte_kana_4();
		if (L_10)
		{
			goto IL_004b;
		}
	}
	{
		Il2CppChar L_11 = V_5;
		if ((((int32_t)L_11) < ((int32_t)((int32_t)65376))))
		{
			goto IL_004b;
		}
	}
	{
		Il2CppChar L_12 = V_5;
		if ((((int32_t)L_12) > ((int32_t)((int32_t)65440))))
		{
			goto IL_004b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ISO2022JPEncoder_tB0BDAE1A1F936AB4C05A6AD1FDEFE4945EE29AA6_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_13 = ((ISO2022JPEncoder_tB0BDAE1A1F936AB4C05A6AD1FDEFE4945EE29AA6_StaticFields*)il2cpp_codegen_static_fields_for(ISO2022JPEncoder_tB0BDAE1A1F936AB4C05A6AD1FDEFE4945EE29AA6_il2cpp_TypeInfo_var))->get_full_width_map_9();
		Il2CppChar L_14 = V_5;
		NullCheck(L_13);
		int32_t L_15 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)((int32_t)65376)));
		uint16_t L_16 = (uint16_t)(L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_5 = L_16;
	}

IL_004b:
	{
		Il2CppChar L_17 = V_5;
		if ((((int32_t)L_17) < ((int32_t)((int32_t)8208))))
		{
			goto IL_00d9;
		}
	}
	{
		Il2CppChar L_18 = V_5;
		if ((((int32_t)L_18) > ((int32_t)((int32_t)40869))))
		{
			goto IL_00d9;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_19 = ___bytes3;
		bool L_20;
		L_20 = ISO2022JPEncoder_IsShifted_m67C4494F77A8E0B9D934DC17AC96C4293882095B(__this, L_19, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		int32_t L_21 = ___byteIndex4;
		int32_t L_22 = L_21;
		___byteIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
		V_6 = L_22;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23 = ___bytes3;
		if (!L_23)
		{
			goto IL_007e;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_24 = ___bytes3;
		int32_t L_25 = V_6;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (uint8_t)((int32_t)15));
	}

IL_007e:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_26 = ___bytes3;
		ISO2022JPEncoder_SetShifted_m7508E9E80582B5BD32FD5118042E756B100FD3E7(__this, L_26, (bool)0, /*hidden argument*/NULL);
		int32_t L_27 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_27, (int32_t)1));
	}

IL_008b:
	{
		int32_t L_28 = __this->get_m_6();
		V_7 = L_28;
		int32_t L_29 = V_7;
		if ((((int32_t)L_29) == ((int32_t)1)))
		{
			goto IL_00ab;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_30 = ___bytes3;
		int32_t* L_31 = __this->get_address_of_m_6();
		ISO2022JPEncoder_SwitchMode_mC061C595999EB3847AA86F761E11549ED9B31F3C(__this, L_30, (int32_t*)(&___byteIndex4), (int32_t*)(&V_3), (int32_t*)L_31, 1, /*hidden argument*/NULL);
	}

IL_00ab:
	{
		Il2CppChar L_32 = V_5;
		V_2 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_32, (int32_t)((int32_t)8208))), (int32_t)2));
		IL2CPP_RUNTIME_CLASS_INIT(ISO2022JPEncoder_tB0BDAE1A1F936AB4C05A6AD1FDEFE4945EE29AA6_il2cpp_TypeInfo_var);
		JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848 * L_33 = ((ISO2022JPEncoder_tB0BDAE1A1F936AB4C05A6AD1FDEFE4945EE29AA6_StaticFields*)il2cpp_codegen_static_fields_for(ISO2022JPEncoder_tB0BDAE1A1F936AB4C05A6AD1FDEFE4945EE29AA6_il2cpp_TypeInfo_var))->get_convert_3();
		NullCheck(L_33);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_34 = L_33->get_cjkToJis_7();
		int32_t L_35 = V_2;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		uint8_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848 * L_38 = ((ISO2022JPEncoder_tB0BDAE1A1F936AB4C05A6AD1FDEFE4945EE29AA6_StaticFields*)il2cpp_codegen_static_fields_for(ISO2022JPEncoder_tB0BDAE1A1F936AB4C05A6AD1FDEFE4945EE29AA6_il2cpp_TypeInfo_var))->get_convert_3();
		NullCheck(L_38);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_39 = L_38->get_cjkToJis_7();
		int32_t L_40 = V_2;
		NullCheck(L_39);
		int32_t L_41 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1));
		uint8_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		V_2 = ((int32_t)((int32_t)L_37|(int32_t)((int32_t)((int32_t)L_42<<(int32_t)8))));
		goto IL_0239;
	}

IL_00d9:
	{
		Il2CppChar L_43 = V_5;
		if ((((int32_t)L_43) < ((int32_t)((int32_t)65281))))
		{
			goto IL_0167;
		}
	}
	{
		Il2CppChar L_44 = V_5;
		if ((((int32_t)L_44) > ((int32_t)((int32_t)65376))))
		{
			goto IL_0167;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_45 = ___bytes3;
		bool L_46;
		L_46 = ISO2022JPEncoder_IsShifted_m67C4494F77A8E0B9D934DC17AC96C4293882095B(__this, L_45, /*hidden argument*/NULL);
		if (!L_46)
		{
			goto IL_0119;
		}
	}
	{
		int32_t L_47 = ___byteIndex4;
		int32_t L_48 = L_47;
		___byteIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)1));
		V_8 = L_48;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_49 = ___bytes3;
		if (!L_49)
		{
			goto IL_010c;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_50 = ___bytes3;
		int32_t L_51 = V_8;
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(L_51), (uint8_t)((int32_t)15));
	}

IL_010c:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_52 = ___bytes3;
		ISO2022JPEncoder_SetShifted_m7508E9E80582B5BD32FD5118042E756B100FD3E7(__this, L_52, (bool)0, /*hidden argument*/NULL);
		int32_t L_53 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_53, (int32_t)1));
	}

IL_0119:
	{
		int32_t L_54 = __this->get_m_6();
		V_7 = L_54;
		int32_t L_55 = V_7;
		if ((((int32_t)L_55) == ((int32_t)1)))
		{
			goto IL_0139;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_56 = ___bytes3;
		int32_t* L_57 = __this->get_address_of_m_6();
		ISO2022JPEncoder_SwitchMode_mC061C595999EB3847AA86F761E11549ED9B31F3C(__this, L_56, (int32_t*)(&___byteIndex4), (int32_t*)(&V_3), (int32_t*)L_57, 1, /*hidden argument*/NULL);
	}

IL_0139:
	{
		Il2CppChar L_58 = V_5;
		V_2 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_58, (int32_t)((int32_t)65281))), (int32_t)2));
		IL2CPP_RUNTIME_CLASS_INIT(ISO2022JPEncoder_tB0BDAE1A1F936AB4C05A6AD1FDEFE4945EE29AA6_il2cpp_TypeInfo_var);
		JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848 * L_59 = ((ISO2022JPEncoder_tB0BDAE1A1F936AB4C05A6AD1FDEFE4945EE29AA6_StaticFields*)il2cpp_codegen_static_fields_for(ISO2022JPEncoder_tB0BDAE1A1F936AB4C05A6AD1FDEFE4945EE29AA6_il2cpp_TypeInfo_var))->get_convert_3();
		NullCheck(L_59);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_60 = L_59->get_extraToJis_9();
		int32_t L_61 = V_2;
		NullCheck(L_60);
		int32_t L_62 = L_61;
		uint8_t L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848 * L_64 = ((ISO2022JPEncoder_tB0BDAE1A1F936AB4C05A6AD1FDEFE4945EE29AA6_StaticFields*)il2cpp_codegen_static_fields_for(ISO2022JPEncoder_tB0BDAE1A1F936AB4C05A6AD1FDEFE4945EE29AA6_il2cpp_TypeInfo_var))->get_convert_3();
		NullCheck(L_64);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_65 = L_64->get_extraToJis_9();
		int32_t L_66 = V_2;
		NullCheck(L_65);
		int32_t L_67 = ((int32_t)il2cpp_codegen_add((int32_t)L_66, (int32_t)1));
		uint8_t L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		V_2 = ((int32_t)((int32_t)L_63|(int32_t)((int32_t)((int32_t)L_68<<(int32_t)8))));
		goto IL_0239;
	}

IL_0167:
	{
		Il2CppChar L_69 = V_5;
		if ((((int32_t)L_69) < ((int32_t)((int32_t)65376))))
		{
			goto IL_01d9;
		}
	}
	{
		Il2CppChar L_70 = V_5;
		if ((((int32_t)L_70) > ((int32_t)((int32_t)65440))))
		{
			goto IL_01d9;
		}
	}
	{
		bool L_71 = __this->get_allow_shift_io_5();
		if (!L_71)
		{
			goto IL_01ae;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_72 = ___bytes3;
		bool L_73;
		L_73 = ISO2022JPEncoder_IsShifted_m67C4494F77A8E0B9D934DC17AC96C4293882095B(__this, L_72, /*hidden argument*/NULL);
		if (L_73)
		{
			goto IL_01ce;
		}
	}
	{
		int32_t L_74 = ___byteIndex4;
		int32_t L_75 = L_74;
		___byteIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)1));
		V_9 = L_75;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_76 = ___bytes3;
		if (!L_76)
		{
			goto IL_019f;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_77 = ___bytes3;
		int32_t L_78 = V_9;
		NullCheck(L_77);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(L_78), (uint8_t)((int32_t)14));
	}

IL_019f:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_79 = ___bytes3;
		ISO2022JPEncoder_SetShifted_m7508E9E80582B5BD32FD5118042E756B100FD3E7(__this, L_79, (bool)1, /*hidden argument*/NULL);
		int32_t L_80 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_80, (int32_t)1));
		goto IL_01ce;
	}

IL_01ae:
	{
		int32_t L_81 = __this->get_m_6();
		V_7 = L_81;
		int32_t L_82 = V_7;
		if ((((int32_t)L_82) == ((int32_t)2)))
		{
			goto IL_01ce;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_83 = ___bytes3;
		int32_t* L_84 = __this->get_address_of_m_6();
		ISO2022JPEncoder_SwitchMode_mC061C595999EB3847AA86F761E11549ED9B31F3C(__this, L_83, (int32_t*)(&___byteIndex4), (int32_t*)(&V_3), (int32_t*)L_84, 2, /*hidden argument*/NULL);
	}

IL_01ce:
	{
		Il2CppChar L_85 = V_5;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_85, (int32_t)((int32_t)65344)));
		goto IL_0239;
	}

IL_01d9:
	{
		Il2CppChar L_86 = V_5;
		if ((((int32_t)L_86) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0225;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_87 = ___bytes3;
		bool L_88;
		L_88 = ISO2022JPEncoder_IsShifted_m67C4494F77A8E0B9D934DC17AC96C4293882095B(__this, L_87, /*hidden argument*/NULL);
		if (!L_88)
		{
			goto IL_020d;
		}
	}
	{
		int32_t L_89 = ___byteIndex4;
		int32_t L_90 = L_89;
		___byteIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_90, (int32_t)1));
		V_10 = L_90;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_91 = ___bytes3;
		if (!L_91)
		{
			goto IL_0200;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_92 = ___bytes3;
		int32_t L_93 = V_10;
		NullCheck(L_92);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (uint8_t)((int32_t)15));
	}

IL_0200:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_94 = ___bytes3;
		ISO2022JPEncoder_SetShifted_m7508E9E80582B5BD32FD5118042E756B100FD3E7(__this, L_94, (bool)0, /*hidden argument*/NULL);
		int32_t L_95 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_95, (int32_t)1));
	}

IL_020d:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_96 = ___bytes3;
		int32_t* L_97 = __this->get_address_of_m_6();
		ISO2022JPEncoder_SwitchMode_mC061C595999EB3847AA86F761E11549ED9B31F3C(__this, L_96, (int32_t*)(&___byteIndex4), (int32_t*)(&V_3), (int32_t*)L_97, 0, /*hidden argument*/NULL);
		Il2CppChar L_98 = V_5;
		V_2 = L_98;
		goto IL_0239;
	}

IL_0225:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_99 = ___chars0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_100 = ___bytes3;
		MonoSafeEncoder_HandleFallback_m5616797BE059754055D104BF351A4473D615C4C5(__this, L_99, (int32_t*)(&V_4), (int32_t*)(&___charCount2), L_100, (int32_t*)(&___byteIndex4), (int32_t*)(&V_3), __this, /*hidden argument*/NULL);
		goto IL_0297;
	}

IL_0239:
	{
		int32_t L_101 = V_2;
		if ((((int32_t)L_101) < ((int32_t)((int32_t)256))))
		{
			goto IL_027f;
		}
	}
	{
		int32_t L_102 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_102, (int32_t)((int32_t)256)));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_103 = ___bytes3;
		if (!L_103)
		{
			goto IL_0273;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_104 = ___bytes3;
		int32_t L_105 = ___byteIndex4;
		int32_t L_106 = L_105;
		___byteIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_106, (int32_t)1));
		int32_t L_107 = V_2;
		NullCheck(L_104);
		(L_104)->SetAt(static_cast<il2cpp_array_size_t>(L_106), (uint8_t)((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_107/(int32_t)((int32_t)94))), (int32_t)((int32_t)33))))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_108 = ___bytes3;
		int32_t L_109 = ___byteIndex4;
		int32_t L_110 = L_109;
		___byteIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_110, (int32_t)1));
		int32_t L_111 = V_2;
		NullCheck(L_108);
		(L_108)->SetAt(static_cast<il2cpp_array_size_t>(L_110), (uint8_t)((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_111%(int32_t)((int32_t)94))), (int32_t)((int32_t)33))))));
		goto IL_0279;
	}

IL_0273:
	{
		int32_t L_112 = ___byteIndex4;
		___byteIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_112, (int32_t)2));
	}

IL_0279:
	{
		int32_t L_113 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_113, (int32_t)2));
		goto IL_0297;
	}

IL_027f:
	{
		int32_t L_114 = ___byteIndex4;
		int32_t L_115 = L_114;
		___byteIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_115, (int32_t)1));
		V_11 = L_115;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_116 = ___bytes3;
		if (!L_116)
		{
			goto IL_0293;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_117 = ___bytes3;
		int32_t L_118 = V_11;
		int32_t L_119 = V_2;
		NullCheck(L_117);
		(L_117)->SetAt(static_cast<il2cpp_array_size_t>(L_118), (uint8_t)((int32_t)((uint8_t)L_119)));
	}

IL_0293:
	{
		int32_t L_120 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_120, (int32_t)1));
	}

IL_0297:
	{
		int32_t L_121 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_121, (int32_t)1));
		int32_t L_122 = ___charCount2;
		___charCount2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_122, (int32_t)1));
	}

IL_02a2:
	{
		int32_t L_123 = V_4;
		int32_t L_124 = V_1;
		if ((((int32_t)L_123) < ((int32_t)L_124)))
		{
			goto IL_001b;
		}
	}
	{
		bool L_125 = ___flush5;
		if (!L_125)
		{
			goto IL_02f4;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_126 = ___bytes3;
		bool L_127;
		L_127 = ISO2022JPEncoder_IsShifted_m67C4494F77A8E0B9D934DC17AC96C4293882095B(__this, L_126, /*hidden argument*/NULL);
		if (!L_127)
		{
			goto IL_02d9;
		}
	}
	{
		int32_t L_128 = ___byteIndex4;
		int32_t L_129 = L_128;
		___byteIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_129, (int32_t)1));
		V_12 = L_129;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_130 = ___bytes3;
		if (!L_130)
		{
			goto IL_02cc;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_131 = ___bytes3;
		int32_t L_132 = V_12;
		NullCheck(L_131);
		(L_131)->SetAt(static_cast<il2cpp_array_size_t>(L_132), (uint8_t)((int32_t)15));
	}

IL_02cc:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_133 = ___bytes3;
		ISO2022JPEncoder_SetShifted_m7508E9E80582B5BD32FD5118042E756B100FD3E7(__this, L_133, (bool)0, /*hidden argument*/NULL);
		int32_t L_134 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_134, (int32_t)1));
	}

IL_02d9:
	{
		int32_t L_135 = __this->get_m_6();
		if (!L_135)
		{
			goto IL_02f4;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_136 = ___bytes3;
		int32_t* L_137 = __this->get_address_of_m_6();
		ISO2022JPEncoder_SwitchMode_mC061C595999EB3847AA86F761E11549ED9B31F3C(__this, L_136, (int32_t*)(&___byteIndex4), (int32_t*)(&V_3), (int32_t*)L_137, 0, /*hidden argument*/NULL);
	}

IL_02f4:
	{
		int32_t L_138 = ___byteIndex4;
		int32_t L_139 = V_0;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_138, (int32_t)L_139));
	}
}
// System.Int32 I18N.CJK.ISO2022JPEncoder::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ISO2022JPEncoder_GetBytes_m67D4FC89D35BE19346D1289CBDB66738E9501A16 (ISO2022JPEncoder_tB0BDAE1A1F936AB4C05A6AD1FDEFE4945EE29AA6 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars0, int32_t ___charIndex1, int32_t ___charCount2, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes3, int32_t ___byteIndex4, bool ___flush5, const RuntimeMethod* method)
{
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = ___chars0;
		int32_t L_1 = ___charIndex1;
		int32_t L_2 = ___charCount2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___bytes3;
		int32_t L_4 = ___byteIndex4;
		bool L_5 = ___flush5;
		int32_t L_6;
		L_6 = ISO2022JPEncoder_GetBytesInternal_mEC43FC6C78F367623434CDE57B60D1037048C5C2(__this, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void I18N.CJK.ISO2022JPEncoder::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISO2022JPEncoder_Reset_m7A60C3A8A0AFD8501F080A2444692879FC95F528 (ISO2022JPEncoder_tB0BDAE1A1F936AB4C05A6AD1FDEFE4945EE29AA6 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		__this->set_m_6(0);
		int32_t L_0 = 0;
		V_0 = (bool)L_0;
		__this->set_shifted_in_count_7((bool)L_0);
		bool L_1 = V_0;
		__this->set_shifted_in_conv_8(L_1);
		return;
	}
}
// System.Void I18N.CJK.ISO2022JPEncoder::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISO2022JPEncoder__cctor_m25389DE95E190BFE52017936CBFF15E6BA3832DB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISO2022JPEncoder_tB0BDAE1A1F936AB4C05A6AD1FDEFE4945EE29AA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0E2D6234731D30F4B134056E10FB479493219935____E37F35D8F8544C41A0449A42051AEFACF21F8621_0_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848_il2cpp_TypeInfo_var);
		JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848 * L_0;
		L_0 = JISConvert_get_Convert_m2294F43F984013F908B15172EAB6EBABFA13C774(/*hidden argument*/NULL);
		((ISO2022JPEncoder_tB0BDAE1A1F936AB4C05A6AD1FDEFE4945EE29AA6_StaticFields*)il2cpp_codegen_static_fields_for(ISO2022JPEncoder_tB0BDAE1A1F936AB4C05A6AD1FDEFE4945EE29AA6_il2cpp_TypeInfo_var))->set_convert_3(L_0);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = L_1;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_3 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0E2D6234731D30F4B134056E10FB479493219935____E37F35D8F8544C41A0449A42051AEFACF21F8621_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_2, L_3, /*hidden argument*/NULL);
		((ISO2022JPEncoder_tB0BDAE1A1F936AB4C05A6AD1FDEFE4945EE29AA6_StaticFields*)il2cpp_codegen_static_fields_for(ISO2022JPEncoder_tB0BDAE1A1F936AB4C05A6AD1FDEFE4945EE29AA6_il2cpp_TypeInfo_var))->set_full_width_map_9(L_2);
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
// System.Void I18N.CJK.ISO2022JPEncoding::.ctor(System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISO2022JPEncoding__ctor_m17D09D6D0284611A8A37CF415816EFBA202DF7EC (ISO2022JPEncoding_t50513DEA872F8D29579CF6725848DA3E18E25CD8 * __this, int32_t ___codePage0, bool ___allow1ByteKana1, bool ___allowShiftIO2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___codePage0;
		MonoSafeEncoding__ctor_m22024C3A28920B9112728E9CF9CF218621D880E5(__this, L_0, ((int32_t)932), /*hidden argument*/NULL);
		bool L_1 = ___allow1ByteKana1;
		__this->set_allow_1byte_kana_17(L_1);
		bool L_2 = ___allowShiftIO2;
		__this->set_allow_shift_io_18(L_2);
		return;
	}
}
// System.String I18N.CJK.ISO2022JPEncoding::get_BodyName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ISO2022JPEncoding_get_BodyName_mB9E033650FD142FC6C26B270A0C102EE9E00B4BF (ISO2022JPEncoding_t50513DEA872F8D29579CF6725848DA3E18E25CD8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF512F2CB430B135FD2B0519B779BC77CDF6B6207);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralF512F2CB430B135FD2B0519B779BC77CDF6B6207;
	}
}
// System.String I18N.CJK.ISO2022JPEncoding::get_HeaderName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ISO2022JPEncoding_get_HeaderName_mAF7A5CAE87F9B49095B0AC9940D5EB3A83329A80 (ISO2022JPEncoding_t50513DEA872F8D29579CF6725848DA3E18E25CD8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF512F2CB430B135FD2B0519B779BC77CDF6B6207);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralF512F2CB430B135FD2B0519B779BC77CDF6B6207;
	}
}
// System.String I18N.CJK.ISO2022JPEncoding::get_WebName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ISO2022JPEncoding_get_WebName_m618A09B097E1CD0698C92D99C146D193FDEC988E (ISO2022JPEncoding_t50513DEA872F8D29579CF6725848DA3E18E25CD8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A1E7CA2D7A9670B0D9A719DC44C35DAE10EB3C8);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral4A1E7CA2D7A9670B0D9A719DC44C35DAE10EB3C8;
	}
}
// System.Int32 I18N.CJK.ISO2022JPEncoding::GetMaxByteCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ISO2022JPEncoding_GetMaxByteCount_mD58B30043EAB8F05B029E91704040DD436223F48 (ISO2022JPEncoding_t50513DEA872F8D29579CF6725848DA3E18E25CD8 * __this, int32_t ___charCount0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___charCount0;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)L_0/(int32_t)2)), (int32_t)5)), (int32_t)4));
	}
}
// System.Int32 I18N.CJK.ISO2022JPEncoding::GetMaxCharCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ISO2022JPEncoding_GetMaxCharCount_m899C030CBCB136C47B19E8951631A48EA46E8837 (ISO2022JPEncoding_t50513DEA872F8D29579CF6725848DA3E18E25CD8 * __this, int32_t ___byteCount0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___byteCount0;
		return L_0;
	}
}
// System.Int32 I18N.CJK.ISO2022JPEncoding::GetBytesInternal(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Boolean,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ISO2022JPEncoding_GetBytesInternal_mB5D489FC3E407B18F3C438C6E48FC02AE963130D (ISO2022JPEncoding_t50513DEA872F8D29579CF6725848DA3E18E25CD8 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars0, int32_t ___charIndex1, int32_t ___charCount2, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes3, int32_t ___byteIndex4, bool ___flush5, RuntimeObject * ___state6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISO2022JPEncoder_tB0BDAE1A1F936AB4C05A6AD1FDEFE4945EE29AA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___state6;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		RuntimeObject * L_1 = ___state6;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = ___chars0;
		int32_t L_3 = ___charIndex1;
		int32_t L_4 = ___charCount2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = ___bytes3;
		int32_t L_6 = ___byteIndex4;
		NullCheck(((ISO2022JPEncoder_tB0BDAE1A1F936AB4C05A6AD1FDEFE4945EE29AA6 *)CastclassClass((RuntimeObject*)L_1, ISO2022JPEncoder_tB0BDAE1A1F936AB4C05A6AD1FDEFE4945EE29AA6_il2cpp_TypeInfo_var)));
		int32_t L_7;
		L_7 = ISO2022JPEncoder_GetBytesInternal_mEC43FC6C78F367623434CDE57B60D1037048C5C2(((ISO2022JPEncoder_tB0BDAE1A1F936AB4C05A6AD1FDEFE4945EE29AA6 *)CastclassClass((RuntimeObject*)L_1, ISO2022JPEncoder_tB0BDAE1A1F936AB4C05A6AD1FDEFE4945EE29AA6_il2cpp_TypeInfo_var)), L_2, L_3, L_4, L_5, L_6, (bool)1, /*hidden argument*/NULL);
		return L_7;
	}

IL_0019:
	{
		bool L_8 = __this->get_allow_1byte_kana_17();
		bool L_9 = __this->get_allow_shift_io_18();
		ISO2022JPEncoder_tB0BDAE1A1F936AB4C05A6AD1FDEFE4945EE29AA6 * L_10 = (ISO2022JPEncoder_tB0BDAE1A1F936AB4C05A6AD1FDEFE4945EE29AA6 *)il2cpp_codegen_object_new(ISO2022JPEncoder_tB0BDAE1A1F936AB4C05A6AD1FDEFE4945EE29AA6_il2cpp_TypeInfo_var);
		ISO2022JPEncoder__ctor_m073DCB645A4884B69F76CA85B0E822305AECB7DE(L_10, __this, L_8, L_9, /*hidden argument*/NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_11 = ___chars0;
		int32_t L_12 = ___charIndex1;
		int32_t L_13 = ___charCount2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = ___bytes3;
		int32_t L_15 = ___byteIndex4;
		NullCheck(L_10);
		int32_t L_16;
		L_16 = ISO2022JPEncoder_GetBytesInternal_mEC43FC6C78F367623434CDE57B60D1037048C5C2(L_10, L_11, L_12, L_13, L_14, L_15, (bool)1, /*hidden argument*/NULL);
		return L_16;
	}
}
// System.Int32 I18N.CJK.ISO2022JPEncoding::GetByteCount(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ISO2022JPEncoding_GetByteCount_m4CAA2ADA965A7E6003B2FA10E1ED0E244DC35DA3 (ISO2022JPEncoding_t50513DEA872F8D29579CF6725848DA3E18E25CD8 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars0, int32_t ___charIndex1, int32_t ___charCount2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISO2022JPEncoder_tB0BDAE1A1F936AB4C05A6AD1FDEFE4945EE29AA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_allow_1byte_kana_17();
		bool L_1 = __this->get_allow_shift_io_18();
		ISO2022JPEncoder_tB0BDAE1A1F936AB4C05A6AD1FDEFE4945EE29AA6 * L_2 = (ISO2022JPEncoder_tB0BDAE1A1F936AB4C05A6AD1FDEFE4945EE29AA6 *)il2cpp_codegen_object_new(ISO2022JPEncoder_tB0BDAE1A1F936AB4C05A6AD1FDEFE4945EE29AA6_il2cpp_TypeInfo_var);
		ISO2022JPEncoder__ctor_m073DCB645A4884B69F76CA85B0E822305AECB7DE(L_2, __this, L_0, L_1, /*hidden argument*/NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = ___chars0;
		int32_t L_4 = ___charIndex1;
		int32_t L_5 = ___charCount2;
		NullCheck(L_2);
		int32_t L_6;
		L_6 = VirtFuncInvoker4< int32_t, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, int32_t, int32_t, bool >::Invoke(5 /* System.Int32 System.Text.Encoder::GetByteCount(System.Char[],System.Int32,System.Int32,System.Boolean) */, L_2, L_3, L_4, L_5, (bool)1);
		return L_6;
	}
}
// System.Int32 I18N.CJK.ISO2022JPEncoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ISO2022JPEncoding_GetBytes_m1AE5B62069856411356776FA348B74DF880B2F1E (ISO2022JPEncoding_t50513DEA872F8D29579CF6725848DA3E18E25CD8 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars0, int32_t ___charIndex1, int32_t ___charCount2, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes3, int32_t ___byteIndex4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISO2022JPEncoder_tB0BDAE1A1F936AB4C05A6AD1FDEFE4945EE29AA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_allow_1byte_kana_17();
		bool L_1 = __this->get_allow_shift_io_18();
		ISO2022JPEncoder_tB0BDAE1A1F936AB4C05A6AD1FDEFE4945EE29AA6 * L_2 = (ISO2022JPEncoder_tB0BDAE1A1F936AB4C05A6AD1FDEFE4945EE29AA6 *)il2cpp_codegen_object_new(ISO2022JPEncoder_tB0BDAE1A1F936AB4C05A6AD1FDEFE4945EE29AA6_il2cpp_TypeInfo_var);
		ISO2022JPEncoder__ctor_m073DCB645A4884B69F76CA85B0E822305AECB7DE(L_2, __this, L_0, L_1, /*hidden argument*/NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = ___chars0;
		int32_t L_4 = ___charIndex1;
		int32_t L_5 = ___charCount2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___bytes3;
		int32_t L_7 = ___byteIndex4;
		NullCheck(L_2);
		int32_t L_8;
		L_8 = VirtFuncInvoker6< int32_t, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, int32_t, int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, bool >::Invoke(7 /* System.Int32 System.Text.Encoder::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Boolean) */, L_2, L_3, L_4, L_5, L_6, L_7, (bool)1);
		return L_8;
	}
}
// System.Int32 I18N.CJK.ISO2022JPEncoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ISO2022JPEncoding_GetCharCount_m89F9C809C50E5C5510C5B42CCD0499217150D234 (ISO2022JPEncoding_t50513DEA872F8D29579CF6725848DA3E18E25CD8 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISO2022JPDecoder_t1614BCC169A8897B2CD138F980FB728DB696B2CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_allow_1byte_kana_17();
		bool L_1 = __this->get_allow_shift_io_18();
		ISO2022JPDecoder_t1614BCC169A8897B2CD138F980FB728DB696B2CC * L_2 = (ISO2022JPDecoder_t1614BCC169A8897B2CD138F980FB728DB696B2CC *)il2cpp_codegen_object_new(ISO2022JPDecoder_t1614BCC169A8897B2CD138F980FB728DB696B2CC_il2cpp_TypeInfo_var);
		ISO2022JPDecoder__ctor_m06543AB01B9F9E76ED987464319AB8C8750174B9(L_2, L_0, L_1, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___bytes0;
		int32_t L_4 = ___index1;
		int32_t L_5 = ___count2;
		NullCheck(L_2);
		int32_t L_6;
		L_6 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Text.Decoder::GetCharCount(System.Byte[],System.Int32,System.Int32) */, L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Int32 I18N.CJK.ISO2022JPEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ISO2022JPEncoding_GetChars_m97BA8FD6A76277A22149105BC1385032622B7A50 (ISO2022JPEncoding_t50513DEA872F8D29579CF6725848DA3E18E25CD8 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars3, int32_t ___charIndex4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISO2022JPDecoder_t1614BCC169A8897B2CD138F980FB728DB696B2CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_allow_1byte_kana_17();
		bool L_1 = __this->get_allow_shift_io_18();
		ISO2022JPDecoder_t1614BCC169A8897B2CD138F980FB728DB696B2CC * L_2 = (ISO2022JPDecoder_t1614BCC169A8897B2CD138F980FB728DB696B2CC *)il2cpp_codegen_object_new(ISO2022JPDecoder_t1614BCC169A8897B2CD138F980FB728DB696B2CC_il2cpp_TypeInfo_var);
		ISO2022JPDecoder__ctor_m06543AB01B9F9E76ED987464319AB8C8750174B9(L_2, L_0, L_1, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___bytes0;
		int32_t L_4 = ___byteIndex1;
		int32_t L_5 = ___byteCount2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_6 = ___chars3;
		int32_t L_7 = ___charIndex4;
		NullCheck(L_2);
		int32_t L_8;
		L_8 = VirtFuncInvoker5< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, int32_t >::Invoke(8 /* System.Int32 System.Text.Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32) */, L_2, L_3, L_4, L_5, L_6, L_7);
		return L_8;
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
// System.Void I18N.CJK.JISConvert::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JISConvert__ctor_m6C21F3382EB70847EF1C17C2D2D59AC33F691967 (JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodeTable_t24F95BB4E7C0ACFD3C4E68F3A132A0270C05CA03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B02C95FD71AC5B53DC8E403117E89B593236473);
		s_Il2CppMethodInitialized = true;
	}
	CodeTable_t24F95BB4E7C0ACFD3C4E68F3A132A0270C05CA03 * V_0 = NULL;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		CodeTable_t24F95BB4E7C0ACFD3C4E68F3A132A0270C05CA03 * L_0 = (CodeTable_t24F95BB4E7C0ACFD3C4E68F3A132A0270C05CA03 *)il2cpp_codegen_object_new(CodeTable_t24F95BB4E7C0ACFD3C4E68F3A132A0270C05CA03_il2cpp_TypeInfo_var);
		CodeTable__ctor_m05F6BC60339A17BD8A883304FB3D0B6D9431D2DA(L_0, _stringLiteral5B02C95FD71AC5B53DC8E403117E89B593236473, /*hidden argument*/NULL);
		V_0 = L_0;
		CodeTable_t24F95BB4E7C0ACFD3C4E68F3A132A0270C05CA03 * L_1 = V_0;
		NullCheck(L_1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = CodeTable_GetSection_m575390C701E870B69912F6591BBF407FD35AC88C(L_1, 1, /*hidden argument*/NULL);
		__this->set_jisx0208ToUnicode_5(L_2);
		CodeTable_t24F95BB4E7C0ACFD3C4E68F3A132A0270C05CA03 * L_3 = V_0;
		NullCheck(L_3);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4;
		L_4 = CodeTable_GetSection_m575390C701E870B69912F6591BBF407FD35AC88C(L_3, 2, /*hidden argument*/NULL);
		__this->set_jisx0212ToUnicode_6(L_4);
		CodeTable_t24F95BB4E7C0ACFD3C4E68F3A132A0270C05CA03 * L_5 = V_0;
		NullCheck(L_5);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6;
		L_6 = CodeTable_GetSection_m575390C701E870B69912F6591BBF407FD35AC88C(L_5, 3, /*hidden argument*/NULL);
		__this->set_cjkToJis_7(L_6);
		CodeTable_t24F95BB4E7C0ACFD3C4E68F3A132A0270C05CA03 * L_7 = V_0;
		NullCheck(L_7);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8;
		L_8 = CodeTable_GetSection_m575390C701E870B69912F6591BBF407FD35AC88C(L_7, 4, /*hidden argument*/NULL);
		__this->set_greekToJis_8(L_8);
		CodeTable_t24F95BB4E7C0ACFD3C4E68F3A132A0270C05CA03 * L_9 = V_0;
		NullCheck(L_9);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10;
		L_10 = CodeTable_GetSection_m575390C701E870B69912F6591BBF407FD35AC88C(L_9, 5, /*hidden argument*/NULL);
		__this->set_extraToJis_9(L_10);
		CodeTable_t24F95BB4E7C0ACFD3C4E68F3A132A0270C05CA03 * L_11 = V_0;
		NullCheck(L_11);
		CodeTable_Dispose_m5E9943D7B65098A6907576DC0E0E6E2C0CEF7C52(L_11, /*hidden argument*/NULL);
		return;
	}
}
// I18N.CJK.JISConvert I18N.CJK.JISConvert::get_Convert()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848 * JISConvert_get_Convert_m2294F43F984013F908B15172EAB6EBABFA13C774 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848_StaticFields*)il2cpp_codegen_static_fields_for(JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848_il2cpp_TypeInfo_var))->get_lockobj_11();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject * L_1 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848_il2cpp_TypeInfo_var);
			JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848 * L_2 = ((JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848_StaticFields*)il2cpp_codegen_static_fields_for(JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848_il2cpp_TypeInfo_var))->get_convert_10();
			if (!L_2)
			{
				goto IL_001f;
			}
		}

IL_0017:
		{
			IL2CPP_RUNTIME_CLASS_INIT(JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848_il2cpp_TypeInfo_var);
			JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848 * L_3 = ((JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848_StaticFields*)il2cpp_codegen_static_fields_for(JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848_il2cpp_TypeInfo_var))->get_convert_10();
			V_2 = L_3;
			IL2CPP_LEAVE(0x3B, FINALLY_0031);
		}

IL_001f:
		{
			JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848 * L_4 = (JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848 *)il2cpp_codegen_object_new(JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848_il2cpp_TypeInfo_var);
			JISConvert__ctor_m6C21F3382EB70847EF1C17C2D2D59AC33F691967(L_4, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848_il2cpp_TypeInfo_var);
			((JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848_StaticFields*)il2cpp_codegen_static_fields_for(JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848_il2cpp_TypeInfo_var))->set_convert_10(L_4);
			JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848 * L_5 = ((JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848_StaticFields*)il2cpp_codegen_static_fields_for(JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848_il2cpp_TypeInfo_var))->get_convert_10();
			V_2 = L_5;
			IL2CPP_LEAVE(0x3B, FINALLY_0031);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0031;
	}

FINALLY_0031:
	{ // begin finally (depth: 1)
		{
			bool L_6 = V_1;
			if (!L_6)
			{
				goto IL_003a;
			}
		}

IL_0034:
		{
			RuntimeObject * L_7 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_7, /*hidden argument*/NULL);
		}

IL_003a:
		{
			IL2CPP_END_FINALLY(49)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(49)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
	}

IL_003b:
	{
		JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848 * L_8 = V_2;
		return L_8;
	}
}
// System.Void I18N.CJK.JISConvert::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JISConvert__cctor_m0B105B55232DDD130EC0E5337752B74A2DFF768C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_0, /*hidden argument*/NULL);
		((JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848_StaticFields*)il2cpp_codegen_static_fields_for(JISConvert_t2E414DED391FB89C6ADD74A61C50B08562EDD848_il2cpp_TypeInfo_var))->set_lockobj_11(L_0);
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
// System.Void I18N.CJK.KoreanEncoding::.ctor(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KoreanEncoding__ctor_m5DAFC4E50A88F3B5486479614660AFEFFFADB0D1 (KoreanEncoding_t802D545D60E3844B7A431234B087FE2928F87391 * __this, int32_t ___codepage0, bool ___useUHC1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___codepage0;
		DbcsEncoding__ctor_m102798630D97C8E241105DE95BDC0885BF7E7173(__this, L_0, ((int32_t)949), /*hidden argument*/NULL);
		bool L_1 = ___useUHC1;
		__this->set_useUHC_17(L_1);
		return;
	}
}
// I18N.CJK.DbcsConvert I18N.CJK.KoreanEncoding::GetConvert()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * KoreanEncoding_GetConvert_mC6F295C0BD12D33D9C67699715DA4424855576C3 (KoreanEncoding_t802D545D60E3844B7A431234B087FE2928F87391 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6_il2cpp_TypeInfo_var);
		DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * L_0 = ((DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6_StaticFields*)il2cpp_codegen_static_fields_for(DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6_il2cpp_TypeInfo_var))->get_KS_4();
		return L_0;
	}
}
// System.Int32 I18N.CJK.KoreanEncoding::GetByteCount(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KoreanEncoding_GetByteCount_mC8749804A0191C526116D1A261DD14C408808D97 (KoreanEncoding_t802D545D60E3844B7A431234B087FE2928F87391 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * V_1 = NULL;
	Il2CppChar V_2 = 0x0;
	uint8_t V_3 = 0x0;
	uint8_t V_4 = 0x0;
	{
		V_0 = 0;
		DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * L_0;
		L_0 = VirtFuncInvoker0< DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * >::Invoke(47 /* I18N.CJK.DbcsConvert I18N.CJK.DbcsEncoding::GetConvert() */, __this);
		V_1 = L_0;
		goto IL_0054;
	}

IL_000b:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = ___chars0;
		int32_t L_2 = ___index1;
		int32_t L_3 = L_2;
		___index1 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
		NullCheck(L_1);
		int32_t L_4 = L_3;
		uint16_t L_5 = (uint16_t)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		Il2CppChar L_6 = V_2;
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)128))))
		{
			goto IL_0024;
		}
	}
	{
		Il2CppChar L_7 = V_2;
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_002a;
		}
	}

IL_0024:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
		goto IL_0054;
	}

IL_002a:
	{
		DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * L_9 = V_1;
		NullCheck(L_9);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = L_9->get_u2n_1();
		Il2CppChar L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_11, (int32_t)2));
		uint8_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = L_13;
		DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * L_14 = V_1;
		NullCheck(L_14);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = L_14->get_u2n_1();
		Il2CppChar L_16 = V_2;
		NullCheck(L_15);
		int32_t L_17 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_16, (int32_t)2)), (int32_t)1));
		uint8_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_4 = L_18;
		uint8_t L_19 = V_3;
		if (L_19)
		{
			goto IL_0050;
		}
	}
	{
		uint8_t L_20 = V_4;
		if (L_20)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_21 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
		goto IL_0054;
	}

IL_0050:
	{
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)2));
	}

IL_0054:
	{
		int32_t L_23 = ___count2;
		int32_t L_24 = L_23;
		___count2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)1));
		if ((((int32_t)L_24) > ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_25 = V_0;
		return L_25;
	}
}
// System.Int32 I18N.CJK.KoreanEncoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KoreanEncoding_GetBytes_mFEE2BBE42E086EF133B68FD6C4290A172675A3DD (KoreanEncoding_t802D545D60E3844B7A431234B087FE2928F87391 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars0, int32_t ___charIndex1, int32_t ___charCount2, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes3, int32_t ___byteIndex4, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * V_2 = NULL;
	EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 * V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Il2CppChar V_6 = 0x0;
	uint8_t V_7 = 0x0;
	uint8_t V_8 = 0x0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes3;
		NullCheck(L_0);
		V_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		int32_t L_1 = ___charIndex1;
		int32_t L_2 = ___charCount2;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2));
		DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * L_3;
		L_3 = VirtFuncInvoker0< DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * >::Invoke(47 /* I18N.CJK.DbcsConvert I18N.CJK.DbcsEncoding::GetConvert() */, __this);
		V_2 = L_3;
		V_3 = (EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 *)NULL;
		int32_t L_4 = ___byteIndex4;
		V_4 = L_4;
		int32_t L_5 = ___charIndex1;
		V_5 = L_5;
		goto IL_00a2;
	}

IL_001e:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_6 = ___chars0;
		int32_t L_7 = V_5;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint16_t L_9 = (uint16_t)(L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_6 = L_9;
		Il2CppChar L_10 = V_6;
		if ((((int32_t)L_10) <= ((int32_t)((int32_t)128))))
		{
			goto IL_0036;
		}
	}
	{
		Il2CppChar L_11 = V_6;
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_0045;
		}
	}

IL_0036:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = ___bytes3;
		int32_t L_13 = ___byteIndex4;
		int32_t L_14 = L_13;
		___byteIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
		Il2CppChar L_15 = V_6;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (uint8_t)((int32_t)((uint8_t)L_15)));
		goto IL_0097;
	}

IL_0045:
	{
		DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * L_16 = V_2;
		NullCheck(L_16);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17 = L_16->get_u2n_1();
		Il2CppChar L_18 = V_6;
		NullCheck(L_17);
		int32_t L_19 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_18, (int32_t)2));
		uint8_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_7 = L_20;
		DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * L_21 = V_2;
		NullCheck(L_21);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_22 = L_21->get_u2n_1();
		Il2CppChar L_23 = V_6;
		NullCheck(L_22);
		int32_t L_24 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_23, (int32_t)2)), (int32_t)1));
		uint8_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_8 = L_25;
		uint8_t L_26 = V_7;
		if (L_26)
		{
			goto IL_007f;
		}
	}
	{
		uint8_t L_27 = V_8;
		if (L_27)
		{
			goto IL_007f;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_28 = ___chars0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_29 = ___bytes3;
		MonoSafeEncoding_HandleFallback_mEA25FB4276523DC9F36C3C03F97F7682C0C31DDF(__this, (EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 **)(&V_3), L_28, (int32_t*)(&V_5), (int32_t*)(&___charCount2), L_29, (int32_t*)(&___byteIndex4), (int32_t*)(&V_0), NULL, /*hidden argument*/NULL);
		goto IL_0097;
	}

IL_007f:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_30 = ___bytes3;
		int32_t L_31 = ___byteIndex4;
		int32_t L_32 = L_31;
		___byteIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
		uint8_t L_33 = V_7;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (uint8_t)L_33);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_34 = ___bytes3;
		int32_t L_35 = ___byteIndex4;
		int32_t L_36 = L_35;
		___byteIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
		uint8_t L_37 = V_8;
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (uint8_t)L_37);
	}

IL_0097:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
		int32_t L_39 = ___charCount2;
		___charCount2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)1));
	}

IL_00a2:
	{
		int32_t L_40 = V_5;
		int32_t L_41 = V_1;
		if ((((int32_t)L_40) < ((int32_t)L_41)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_42 = ___byteIndex4;
		int32_t L_43 = V_4;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_42, (int32_t)L_43));
	}
}
// System.Int32 I18N.CJK.KoreanEncoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KoreanEncoding_GetCharCount_mA8739D230B9629EC7A77346683A170BBB978C283 (KoreanEncoding_t802D545D60E3844B7A431234B087FE2928F87391 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	{
		Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * L_0;
		L_0 = VirtFuncInvoker0< Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * >::Invoke(38 /* System.Text.Decoder System.Text.Encoding::GetDecoder() */, __this);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___bytes0;
		int32_t L_2 = ___index1;
		int32_t L_3 = ___count2;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Text.Decoder::GetCharCount(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// System.Int32 I18N.CJK.KoreanEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KoreanEncoding_GetChars_m4D8BAC2B7BD65F384BB3ED245B5784BD53FB09B1 (KoreanEncoding_t802D545D60E3844B7A431234B087FE2928F87391 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars3, int32_t ___charIndex4, const RuntimeMethod* method)
{
	{
		Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * L_0;
		L_0 = VirtFuncInvoker0< Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * >::Invoke(38 /* System.Text.Decoder System.Text.Encoding::GetDecoder() */, __this);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___bytes0;
		int32_t L_2 = ___byteIndex1;
		int32_t L_3 = ___byteCount2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4 = ___chars3;
		int32_t L_5 = ___charIndex4;
		NullCheck(L_0);
		int32_t L_6;
		L_6 = VirtFuncInvoker5< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, int32_t >::Invoke(8 /* System.Int32 System.Text.Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32) */, L_0, L_1, L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Text.Decoder I18N.CJK.KoreanEncoding::GetDecoder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * KoreanEncoding_GetDecoder_mDF5C06DF50F424A86492A2A48CD97122677FCB7E (KoreanEncoding_t802D545D60E3844B7A431234B087FE2928F87391 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KoreanDecoder_t7A190670048C88144494EB3E16C5E35F7601E959_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * L_0;
		L_0 = VirtFuncInvoker0< DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * >::Invoke(47 /* I18N.CJK.DbcsConvert I18N.CJK.DbcsEncoding::GetConvert() */, __this);
		bool L_1 = __this->get_useUHC_17();
		KoreanDecoder_t7A190670048C88144494EB3E16C5E35F7601E959 * L_2 = (KoreanDecoder_t7A190670048C88144494EB3E16C5E35F7601E959 *)il2cpp_codegen_object_new(KoreanDecoder_t7A190670048C88144494EB3E16C5E35F7601E959_il2cpp_TypeInfo_var);
		KoreanDecoder__ctor_mC22BE343B7E00518D890CFD31E7EA4CA03798042(L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
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
// System.Void I18N.CJK.CP950/CP950Decoder::.ctor(I18N.CJK.DbcsConvert)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP950Decoder__ctor_mDBB57F0B5DA506060A9752A5B0F98BE4B28ACDEE (CP950Decoder_t6D8DBBAA197A2D5800980E193F5E09C61B092138 * __this, DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * ___convert0, const RuntimeMethod* method)
{
	{
		DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * L_0 = ___convert0;
		DbcsDecoder__ctor_mFF26DCA3EA24AA43C4CF5D8191E25D73AFDA41F4(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 I18N.CJK.CP950/CP950Decoder::GetCharCount(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP950Decoder_GetCharCount_m8D9EAF0D839900761F6A8DD51BD17FFFF970936A (CP950Decoder_t6D8DBBAA197A2D5800980E193F5E09C61B092138 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___count2;
		int32_t L_3;
		L_3 = VirtFuncInvoker4< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, bool >::Invoke(6 /* System.Int32 System.Text.Decoder::GetCharCount(System.Byte[],System.Int32,System.Int32,System.Boolean) */, __this, L_0, L_1, L_2, (bool)0);
		return L_3;
	}
}
// System.Int32 I18N.CJK.CP950/CP950Decoder::GetCharCount(System.Byte[],System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP950Decoder_GetCharCount_mDE96E1CA5BE5AF33A3A7B87EC835ED8E7F560641 (CP950Decoder_t6D8DBBAA197A2D5800980E193F5E09C61B092138 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___index1, int32_t ___count2, bool ___refresh3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t G_B13_0 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___count2;
		DbcsDecoder_CheckRange_mA1765EE1ED3A33C1A7FDA2E0C6E12B64ABBDBBCA(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		int32_t L_3 = __this->get_last_byte_count_3();
		V_0 = L_3;
		__this->set_last_byte_count_3(0);
		V_1 = 0;
		goto IL_00bd;
	}

IL_001e:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___bytes0;
		int32_t L_5 = ___index1;
		int32_t L_6 = L_5;
		___index1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
		NullCheck(L_4);
		int32_t L_7 = L_6;
		uint8_t L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = L_8;
		int32_t L_9 = V_0;
		if (L_9)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_10 = V_2;
		if ((((int32_t)L_10) <= ((int32_t)((int32_t)128))))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_0040;
		}
	}

IL_003a:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
		goto IL_00bd;
	}

IL_0040:
	{
		int32_t L_13 = V_2;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)161))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_14 = V_2;
		if ((((int32_t)L_14) < ((int32_t)((int32_t)250))))
		{
			goto IL_005b;
		}
	}

IL_0050:
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
		int32_t L_16 = ___count2;
		___count2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1));
		goto IL_00bd;
	}

IL_005b:
	{
		int32_t L_17 = V_2;
		V_0 = L_17;
		goto IL_00bd;
	}

IL_005f:
	{
		int32_t L_18 = V_0;
		int32_t L_19 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)((int32_t)161))), (int32_t)((int32_t)191))), (int32_t)L_19)), (int32_t)((int32_t)64))), (int32_t)2));
		int32_t L_20 = V_3;
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_00ae;
		}
	}
	{
		int32_t L_21 = V_3;
		DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * L_22 = ((DbcsDecoder_tE3C4C6E22EB2E09258D84C6FF2FD7FBAD7BF7F8F *)__this)->get_convert_2();
		NullCheck(L_22);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23 = L_22->get_n2u_0();
		NullCheck(L_23);
		if ((((int32_t)L_21) > ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length))))))
		{
			goto IL_00ae;
		}
	}
	{
		DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * L_24 = ((DbcsDecoder_tE3C4C6E22EB2E09258D84C6FF2FD7FBAD7BF7F8F *)__this)->get_convert_2();
		NullCheck(L_24);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_25 = L_24->get_n2u_0();
		int32_t L_26 = V_3;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		uint8_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * L_29 = ((DbcsDecoder_tE3C4C6E22EB2E09258D84C6FF2FD7FBAD7BF7F8F *)__this)->get_convert_2();
		NullCheck(L_29);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_30 = L_29->get_n2u_0();
		int32_t L_31 = V_3;
		NullCheck(L_30);
		int32_t L_32 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
		uint8_t L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		G_B13_0 = ((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_33, (int32_t)((int32_t)256)))))));
		goto IL_00af;
	}

IL_00ae:
	{
		G_B13_0 = 0;
	}

IL_00af:
	{
		if (G_B13_0)
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_34 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
		goto IL_00bb;
	}

IL_00b7:
	{
		int32_t L_35 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
	}

IL_00bb:
	{
		V_0 = 0;
	}

IL_00bd:
	{
		int32_t L_36 = ___count2;
		int32_t L_37 = L_36;
		___count2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_37, (int32_t)1));
		if ((((int32_t)L_37) > ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_38 = V_0;
		if (!L_38)
		{
			goto IL_00dd;
		}
	}
	{
		bool L_39 = ___refresh3;
		if (!L_39)
		{
			goto IL_00d6;
		}
	}
	{
		int32_t L_40 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1));
		goto IL_00dd;
	}

IL_00d6:
	{
		int32_t L_41 = V_0;
		__this->set_last_byte_count_3(L_41);
	}

IL_00dd:
	{
		int32_t L_42 = V_1;
		return L_42;
	}
}
// System.Int32 I18N.CJK.CP950/CP950Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP950Decoder_GetChars_mC9E99C1CB2799338BDB848EF3C476E1FF454B436 (CP950Decoder_t6D8DBBAA197A2D5800980E193F5E09C61B092138 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars3, int32_t ___charIndex4, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		int32_t L_1 = ___byteIndex1;
		int32_t L_2 = ___byteCount2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = ___chars3;
		int32_t L_4 = ___charIndex4;
		int32_t L_5;
		L_5 = VirtFuncInvoker6< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, int32_t, bool >::Invoke(9 /* System.Int32 System.Text.Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Boolean) */, __this, L_0, L_1, L_2, L_3, L_4, (bool)0);
		return L_5;
	}
}
// System.Int32 I18N.CJK.CP950/CP950Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP950Decoder_GetChars_m335BCFECD6928D69AB3DDCCA0DDB978F27531352 (CP950Decoder_t6D8DBBAA197A2D5800980E193F5E09C61B092138 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars3, int32_t ___charIndex4, bool ___refresh5, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Il2CppChar V_4 = 0x0;
	int32_t G_B13_0 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		int32_t L_1 = ___byteIndex1;
		int32_t L_2 = ___byteCount2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = ___chars3;
		int32_t L_4 = ___charIndex4;
		DbcsDecoder_CheckRange_m7E0B5C58A934289C66DEDDB0C93B3B33E0F9F38C(__this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		int32_t L_5 = ___charIndex4;
		V_0 = L_5;
		int32_t L_6 = __this->get_last_byte_conv_4();
		V_1 = L_6;
		__this->set_last_byte_conv_4(0);
		goto IL_00e9;
	}

IL_0023:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = ___bytes0;
		int32_t L_8 = ___byteIndex1;
		int32_t L_9 = L_8;
		___byteIndex1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		NullCheck(L_7);
		int32_t L_10 = L_9;
		uint8_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_2 = L_11;
		int32_t L_12 = V_1;
		if (L_12)
		{
			goto IL_0077;
		}
	}
	{
		int32_t L_13 = V_2;
		if ((((int32_t)L_13) <= ((int32_t)((int32_t)128))))
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_0050;
		}
	}

IL_003f:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_15 = ___chars3;
		int32_t L_16 = ___charIndex4;
		int32_t L_17 = L_16;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		int32_t L_18 = V_2;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (Il2CppChar)((int32_t)((uint16_t)L_18)));
		goto IL_00e9;
	}

IL_0050:
	{
		int32_t L_19 = V_2;
		if ((((int32_t)L_19) < ((int32_t)((int32_t)161))))
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_20 = V_2;
		if ((((int32_t)L_20) < ((int32_t)((int32_t)250))))
		{
			goto IL_0073;
		}
	}

IL_0060:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_21 = ___chars3;
		int32_t L_22 = ___charIndex4;
		int32_t L_23 = L_22;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (Il2CppChar)((int32_t)63));
		int32_t L_24 = ___byteCount2;
		___byteCount2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)1));
		goto IL_00e9;
	}

IL_0073:
	{
		int32_t L_25 = V_2;
		V_1 = L_25;
		goto IL_00e9;
	}

IL_0077:
	{
		int32_t L_26 = V_1;
		int32_t L_27 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_26, (int32_t)((int32_t)161))), (int32_t)((int32_t)191))), (int32_t)L_27)), (int32_t)((int32_t)64))), (int32_t)2));
		int32_t L_28 = V_3;
		if ((((int32_t)L_28) < ((int32_t)0)))
		{
			goto IL_00c6;
		}
	}
	{
		int32_t L_29 = V_3;
		DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * L_30 = ((DbcsDecoder_tE3C4C6E22EB2E09258D84C6FF2FD7FBAD7BF7F8F *)__this)->get_convert_2();
		NullCheck(L_30);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_31 = L_30->get_n2u_0();
		NullCheck(L_31);
		if ((((int32_t)L_29) > ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length))))))
		{
			goto IL_00c6;
		}
	}
	{
		DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * L_32 = ((DbcsDecoder_tE3C4C6E22EB2E09258D84C6FF2FD7FBAD7BF7F8F *)__this)->get_convert_2();
		NullCheck(L_32);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_33 = L_32->get_n2u_0();
		int32_t L_34 = V_3;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		uint8_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * L_37 = ((DbcsDecoder_tE3C4C6E22EB2E09258D84C6FF2FD7FBAD7BF7F8F *)__this)->get_convert_2();
		NullCheck(L_37);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_38 = L_37->get_n2u_0();
		int32_t L_39 = V_3;
		NullCheck(L_38);
		int32_t L_40 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
		uint8_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		G_B13_0 = ((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_41, (int32_t)((int32_t)256)))))));
		goto IL_00c7;
	}

IL_00c6:
	{
		G_B13_0 = 0;
	}

IL_00c7:
	{
		V_4 = G_B13_0;
		Il2CppChar L_42 = V_4;
		if (L_42)
		{
			goto IL_00db;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_43 = ___chars3;
		int32_t L_44 = ___charIndex4;
		int32_t L_45 = L_44;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1));
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(L_45), (Il2CppChar)((int32_t)63));
		goto IL_00e7;
	}

IL_00db:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_46 = ___chars3;
		int32_t L_47 = ___charIndex4;
		int32_t L_48 = L_47;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)1));
		Il2CppChar L_49 = V_4;
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (Il2CppChar)L_49);
	}

IL_00e7:
	{
		V_1 = 0;
	}

IL_00e9:
	{
		int32_t L_50 = ___byteCount2;
		int32_t L_51 = L_50;
		___byteCount2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_51, (int32_t)1));
		if ((((int32_t)L_51) > ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_52 = V_1;
		if (!L_52)
		{
			goto IL_0111;
		}
	}
	{
		bool L_53 = ___refresh5;
		if (!L_53)
		{
			goto IL_010a;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_54 = ___chars3;
		int32_t L_55 = ___charIndex4;
		int32_t L_56 = L_55;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)1));
		NullCheck(L_54);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(L_56), (Il2CppChar)((int32_t)63));
		goto IL_0111;
	}

IL_010a:
	{
		int32_t L_57 = V_1;
		__this->set_last_byte_conv_4(L_57);
	}

IL_0111:
	{
		int32_t L_58 = ___charIndex4;
		int32_t L_59 = V_0;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_58, (int32_t)L_59));
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
// System.Void I18N.CJK.DbcsEncoding/DbcsDecoder::.ctor(I18N.CJK.DbcsConvert)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbcsDecoder__ctor_mFF26DCA3EA24AA43C4CF5D8191E25D73AFDA41F4 (DbcsDecoder_tE3C4C6E22EB2E09258D84C6FF2FD7FBAD7BF7F8F * __this, DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * ___convert0, const RuntimeMethod* method)
{
	{
		Decoder__ctor_m2EA154371203FAAE1CD0477C828E0B39B2091DF3(__this, /*hidden argument*/NULL);
		DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * L_0 = ___convert0;
		__this->set_convert_2(L_0);
		return;
	}
}
// System.Void I18N.CJK.DbcsEncoding/DbcsDecoder::CheckRange(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbcsDecoder_CheckRange_mA1765EE1ED3A33C1A7FDA2E0C6E12B64ABBDBBCA (DbcsDecoder_tE3C4C6E22EB2E09258D84C6FF2FD7FBAD7BF7F8F * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DbcsDecoder_CheckRange_mA1765EE1ED3A33C1A7FDA2E0C6E12B64ABBDBBCA_RuntimeMethod_var)));
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DbcsDecoder_CheckRange_mA1765EE1ED3A33C1A7FDA2E0C6E12B64ABBDBBCA_RuntimeMethod_var)));
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DbcsDecoder_CheckRange_mA1765EE1ED3A33C1A7FDA2E0C6E12B64ABBDBBCA_RuntimeMethod_var)));
	}

IL_004e:
	{
		return;
	}
}
// System.Void I18N.CJK.DbcsEncoding/DbcsDecoder::CheckRange(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbcsDecoder_CheckRange_m7E0B5C58A934289C66DEDDB0C93B3B33E0F9F38C (DbcsDecoder_tE3C4C6E22EB2E09258D84C6FF2FD7FBAD7BF7F8F * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars3, int32_t ___charIndex4, const RuntimeMethod* method)
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DbcsDecoder_CheckRange_m7E0B5C58A934289C66DEDDB0C93B3B33E0F9F38C_RuntimeMethod_var)));
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DbcsDecoder_CheckRange_m7E0B5C58A934289C66DEDDB0C93B3B33E0F9F38C_RuntimeMethod_var)));
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DbcsDecoder_CheckRange_m7E0B5C58A934289C66DEDDB0C93B3B33E0F9F38C_RuntimeMethod_var)));
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
		int32_t L_10 = ___byteIndex1;
		int32_t L_11 = ___byteCount2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = ___bytes0;
		NullCheck(L_12);
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)L_11))) <= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))))
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DbcsDecoder_CheckRange_m7E0B5C58A934289C66DEDDB0C93B3B33E0F9F38C_RuntimeMethod_var)));
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DbcsDecoder_CheckRange_m7E0B5C58A934289C66DEDDB0C93B3B33E0F9F38C_RuntimeMethod_var)));
	}

IL_007f:
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
// System.Void I18N.CJK.GB18030Source/GB18030Map::.ctor(System.Int32,System.Int32,System.Int64,System.Int64,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GB18030Map__ctor_m42B294C7DC4CF0F69CEAB68091553ED7FDEEE113 (GB18030Map_tE4F811FA65931F8266A3842EC134B5E6EAF6A9B8 * __this, int32_t ___ustart0, int32_t ___uend1, int64_t ___gstart2, int64_t ___gend3, bool ___dummy4, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___ustart0;
		__this->set_UStart_0(L_0);
		int32_t L_1 = ___uend1;
		__this->set_UEnd_1(L_1);
		int64_t L_2 = ___gstart2;
		__this->set_GStart_2(L_2);
		int64_t L_3 = ___gend3;
		__this->set_GEnd_3(L_3);
		bool L_4 = ___dummy4;
		__this->set_Dummy_4(L_4);
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
// System.Void I18N.CJK.KoreanEncoding/KoreanDecoder::.ctor(I18N.CJK.DbcsConvert,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KoreanDecoder__ctor_mC22BE343B7E00518D890CFD31E7EA4CA03798042 (KoreanDecoder_t7A190670048C88144494EB3E16C5E35F7601E959 * __this, DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * ___convert0, bool ___useUHC1, const RuntimeMethod* method)
{
	{
		DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * L_0 = ___convert0;
		DbcsDecoder__ctor_mFF26DCA3EA24AA43C4CF5D8191E25D73AFDA41F4(__this, L_0, /*hidden argument*/NULL);
		bool L_1 = ___useUHC1;
		__this->set_useUHC_3(L_1);
		return;
	}
}
// System.Int32 I18N.CJK.KoreanEncoding/KoreanDecoder::GetCharCount(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KoreanDecoder_GetCharCount_m5BFAB9E8F2DB590E3D561419D467E0AE2E9A5E2B (KoreanDecoder_t7A190670048C88144494EB3E16C5E35F7601E959 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___count2;
		int32_t L_3;
		L_3 = VirtFuncInvoker4< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, bool >::Invoke(6 /* System.Int32 System.Text.Decoder::GetCharCount(System.Byte[],System.Int32,System.Int32,System.Boolean) */, __this, L_0, L_1, L_2, (bool)0);
		return L_3;
	}
}
// System.Int32 I18N.CJK.KoreanEncoding/KoreanDecoder::GetCharCount(System.Byte[],System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KoreanDecoder_GetCharCount_m6137F20D24E5AA1B513941AF03FE5105BA4F175E (KoreanDecoder_t7A190670048C88144494EB3E16C5E35F7601E959 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___index1, int32_t ___count2, bool ___refresh3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t G_B45_0 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___count2;
		DbcsDecoder_CheckRange_mA1765EE1ED3A33C1A7FDA2E0C6E12B64ABBDBBCA(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		int32_t L_3 = __this->get_last_byte_count_4();
		V_0 = L_3;
		__this->set_last_byte_count_4(0);
		V_1 = 0;
		goto IL_025b;
	}

IL_001e:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___bytes0;
		int32_t L_5 = ___index1;
		int32_t L_6 = L_5;
		___index1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
		NullCheck(L_4);
		int32_t L_7 = L_6;
		uint8_t L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = L_8;
		int32_t L_9 = V_0;
		if (L_9)
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_10 = V_2;
		if ((((int32_t)L_10) <= ((int32_t)((int32_t)128))))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_0043;
		}
	}

IL_003a:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
		goto IL_025b;
	}

IL_0043:
	{
		int32_t L_13 = V_2;
		V_0 = L_13;
		goto IL_025b;
	}

IL_004a:
	{
		bool L_14 = __this->get_useUHC_3();
		if (!L_14)
		{
			goto IL_0115;
		}
	}
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) >= ((int32_t)((int32_t)161))))
		{
			goto IL_0115;
		}
	}
	{
		int32_t L_16 = V_0;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)8836), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)((int32_t)129))), (int32_t)((int32_t)178)))));
		int32_t L_17 = V_2;
		if ((((int32_t)L_17) < ((int32_t)((int32_t)65))))
		{
			goto IL_008a;
		}
	}
	{
		int32_t L_18 = V_2;
		if ((((int32_t)L_18) > ((int32_t)((int32_t)90))))
		{
			goto IL_008a;
		}
	}
	{
		int32_t L_19 = V_4;
		int32_t L_20 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)((int32_t)65)))));
		goto IL_00c6;
	}

IL_008a:
	{
		int32_t L_21 = V_2;
		if ((((int32_t)L_21) < ((int32_t)((int32_t)97))))
		{
			goto IL_00a2;
		}
	}
	{
		int32_t L_22 = V_2;
		if ((((int32_t)L_22) > ((int32_t)((int32_t)122))))
		{
			goto IL_00a2;
		}
	}
	{
		int32_t L_23 = V_4;
		int32_t L_24 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)((int32_t)97))), (int32_t)((int32_t)26)))));
		goto IL_00c6;
	}

IL_00a2:
	{
		int32_t L_25 = V_2;
		if ((((int32_t)L_25) < ((int32_t)((int32_t)129))))
		{
			goto IL_00c3;
		}
	}
	{
		int32_t L_26 = V_2;
		if ((((int32_t)L_26) > ((int32_t)((int32_t)254))))
		{
			goto IL_00c3;
		}
	}
	{
		int32_t L_27 = V_4;
		int32_t L_28 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)((int32_t)129))), (int32_t)((int32_t)52)))));
		goto IL_00c6;
	}

IL_00c3:
	{
		V_4 = (-1);
	}

IL_00c6:
	{
		int32_t L_29 = V_4;
		if ((((int32_t)L_29) < ((int32_t)0)))
		{
			goto IL_010e;
		}
	}
	{
		int32_t L_30 = V_4;
		DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * L_31 = ((DbcsDecoder_tE3C4C6E22EB2E09258D84C6FF2FD7FBAD7BF7F8F *)__this)->get_convert_2();
		NullCheck(L_31);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_32 = L_31->get_n2u_0();
		NullCheck(L_32);
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_30, (int32_t)2))) > ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length))))))
		{
			goto IL_010e;
		}
	}
	{
		DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * L_33 = ((DbcsDecoder_tE3C4C6E22EB2E09258D84C6FF2FD7FBAD7BF7F8F *)__this)->get_convert_2();
		NullCheck(L_33);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_34 = L_33->get_n2u_0();
		int32_t L_35 = V_4;
		NullCheck(L_34);
		int32_t L_36 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_35, (int32_t)2));
		uint8_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * L_38 = ((DbcsDecoder_tE3C4C6E22EB2E09258D84C6FF2FD7FBAD7BF7F8F *)__this)->get_convert_2();
		NullCheck(L_38);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_39 = L_38->get_n2u_0();
		int32_t L_40 = V_4;
		NullCheck(L_39);
		int32_t L_41 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_40, (int32_t)2)), (int32_t)1));
		uint8_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		V_3 = ((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_42, (int32_t)((int32_t)256)))))));
		goto IL_024c;
	}

IL_010e:
	{
		V_3 = 0;
		goto IL_024c;
	}

IL_0115:
	{
		bool L_43 = __this->get_useUHC_3();
		if (!L_43)
		{
			goto IL_01e2;
		}
	}
	{
		int32_t L_44 = V_0;
		if ((((int32_t)L_44) > ((int32_t)((int32_t)198))))
		{
			goto IL_01e2;
		}
	}
	{
		int32_t L_45 = V_2;
		if ((((int32_t)L_45) >= ((int32_t)((int32_t)161))))
		{
			goto IL_01e2;
		}
	}
	{
		int32_t L_46 = V_0;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)14532), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_46, (int32_t)((int32_t)161))), (int32_t)((int32_t)84)))));
		int32_t L_47 = V_2;
		if ((((int32_t)L_47) < ((int32_t)((int32_t)65))))
		{
			goto IL_015d;
		}
	}
	{
		int32_t L_48 = V_2;
		if ((((int32_t)L_48) > ((int32_t)((int32_t)90))))
		{
			goto IL_015d;
		}
	}
	{
		int32_t L_49 = V_5;
		int32_t L_50 = V_2;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_50, (int32_t)((int32_t)65)))));
		goto IL_0199;
	}

IL_015d:
	{
		int32_t L_51 = V_2;
		if ((((int32_t)L_51) < ((int32_t)((int32_t)97))))
		{
			goto IL_0175;
		}
	}
	{
		int32_t L_52 = V_2;
		if ((((int32_t)L_52) > ((int32_t)((int32_t)122))))
		{
			goto IL_0175;
		}
	}
	{
		int32_t L_53 = V_5;
		int32_t L_54 = V_2;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_54, (int32_t)((int32_t)97))), (int32_t)((int32_t)26)))));
		goto IL_0199;
	}

IL_0175:
	{
		int32_t L_55 = V_2;
		if ((((int32_t)L_55) < ((int32_t)((int32_t)129))))
		{
			goto IL_0196;
		}
	}
	{
		int32_t L_56 = V_2;
		if ((((int32_t)L_56) > ((int32_t)((int32_t)160))))
		{
			goto IL_0196;
		}
	}
	{
		int32_t L_57 = V_5;
		int32_t L_58 = V_2;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_58, (int32_t)((int32_t)129))), (int32_t)((int32_t)52)))));
		goto IL_0199;
	}

IL_0196:
	{
		V_5 = (-1);
	}

IL_0199:
	{
		int32_t L_59 = V_5;
		if ((((int32_t)L_59) < ((int32_t)0)))
		{
			goto IL_01de;
		}
	}
	{
		int32_t L_60 = V_5;
		DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * L_61 = ((DbcsDecoder_tE3C4C6E22EB2E09258D84C6FF2FD7FBAD7BF7F8F *)__this)->get_convert_2();
		NullCheck(L_61);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_62 = L_61->get_n2u_0();
		NullCheck(L_62);
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_60, (int32_t)2))) > ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_62)->max_length))))))
		{
			goto IL_01de;
		}
	}
	{
		DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * L_63 = ((DbcsDecoder_tE3C4C6E22EB2E09258D84C6FF2FD7FBAD7BF7F8F *)__this)->get_convert_2();
		NullCheck(L_63);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_64 = L_63->get_n2u_0();
		int32_t L_65 = V_5;
		NullCheck(L_64);
		int32_t L_66 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_65, (int32_t)2));
		uint8_t L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * L_68 = ((DbcsDecoder_tE3C4C6E22EB2E09258D84C6FF2FD7FBAD7BF7F8F *)__this)->get_convert_2();
		NullCheck(L_68);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_69 = L_68->get_n2u_0();
		int32_t L_70 = V_5;
		NullCheck(L_69);
		int32_t L_71 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_70, (int32_t)2)), (int32_t)1));
		uint8_t L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		V_3 = ((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_67, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_72, (int32_t)((int32_t)256)))))));
		goto IL_024c;
	}

IL_01de:
	{
		V_3 = 0;
		goto IL_024c;
	}

IL_01e2:
	{
		int32_t L_73 = V_2;
		if ((((int32_t)L_73) < ((int32_t)((int32_t)161))))
		{
			goto IL_024a;
		}
	}
	{
		int32_t L_74 = V_2;
		if ((((int32_t)L_74) > ((int32_t)((int32_t)254))))
		{
			goto IL_024a;
		}
	}
	{
		int32_t L_75 = V_0;
		int32_t L_76 = V_2;
		V_6 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_75, (int32_t)((int32_t)161))), (int32_t)((int32_t)94))), (int32_t)L_76)), (int32_t)((int32_t)161))), (int32_t)2));
		int32_t L_77 = V_6;
		if ((((int32_t)L_77) < ((int32_t)0)))
		{
			goto IL_0246;
		}
	}
	{
		int32_t L_78 = V_6;
		DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * L_79 = ((DbcsDecoder_tE3C4C6E22EB2E09258D84C6FF2FD7FBAD7BF7F8F *)__this)->get_convert_2();
		NullCheck(L_79);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_80 = L_79->get_n2u_0();
		NullCheck(L_80);
		if ((((int32_t)L_78) >= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_80)->max_length))))))
		{
			goto IL_0246;
		}
	}
	{
		DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * L_81 = ((DbcsDecoder_tE3C4C6E22EB2E09258D84C6FF2FD7FBAD7BF7F8F *)__this)->get_convert_2();
		NullCheck(L_81);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_82 = L_81->get_n2u_0();
		int32_t L_83 = V_6;
		NullCheck(L_82);
		int32_t L_84 = L_83;
		uint8_t L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * L_86 = ((DbcsDecoder_tE3C4C6E22EB2E09258D84C6FF2FD7FBAD7BF7F8F *)__this)->get_convert_2();
		NullCheck(L_86);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_87 = L_86->get_n2u_0();
		int32_t L_88 = V_6;
		NullCheck(L_87);
		int32_t L_89 = ((int32_t)il2cpp_codegen_add((int32_t)L_88, (int32_t)1));
		uint8_t L_90 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		G_B45_0 = ((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_85, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_90, (int32_t)((int32_t)256)))))));
		goto IL_0247;
	}

IL_0246:
	{
		G_B45_0 = 0;
	}

IL_0247:
	{
		V_3 = G_B45_0;
		goto IL_024c;
	}

IL_024a:
	{
		V_3 = 0;
	}

IL_024c:
	{
		Il2CppChar L_91 = V_3;
		if (L_91)
		{
			goto IL_0255;
		}
	}
	{
		int32_t L_92 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_92, (int32_t)1));
		goto IL_0259;
	}

IL_0255:
	{
		int32_t L_93 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_93, (int32_t)1));
	}

IL_0259:
	{
		V_0 = 0;
	}

IL_025b:
	{
		int32_t L_94 = ___count2;
		int32_t L_95 = L_94;
		___count2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_95, (int32_t)1));
		if ((((int32_t)L_95) > ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_96 = V_0;
		if (!L_96)
		{
			goto IL_0282;
		}
	}
	{
		bool L_97 = ___refresh3;
		if (!L_97)
		{
			goto IL_027b;
		}
	}
	{
		int32_t L_98 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_98, (int32_t)1));
		__this->set_last_byte_count_4(0);
		goto IL_0282;
	}

IL_027b:
	{
		int32_t L_99 = V_0;
		__this->set_last_byte_count_4(L_99);
	}

IL_0282:
	{
		int32_t L_100 = V_1;
		return L_100;
	}
}
// System.Int32 I18N.CJK.KoreanEncoding/KoreanDecoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KoreanDecoder_GetChars_m08E615CF6492E4BFC1C2E761F4B602108681E0F8 (KoreanDecoder_t7A190670048C88144494EB3E16C5E35F7601E959 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars3, int32_t ___charIndex4, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		int32_t L_1 = ___byteIndex1;
		int32_t L_2 = ___byteCount2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = ___chars3;
		int32_t L_4 = ___charIndex4;
		int32_t L_5;
		L_5 = VirtFuncInvoker6< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, int32_t, bool >::Invoke(9 /* System.Int32 System.Text.Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Boolean) */, __this, L_0, L_1, L_2, L_3, L_4, (bool)0);
		return L_5;
	}
}
// System.Int32 I18N.CJK.KoreanEncoding/KoreanDecoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KoreanDecoder_GetChars_m27BCE9B72CE85E4FAFCBD7C8EC84AE6317C1E094 (KoreanDecoder_t7A190670048C88144494EB3E16C5E35F7601E959 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars3, int32_t ___charIndex4, bool ___refresh5, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t G_B45_0 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		int32_t L_1 = ___byteIndex1;
		int32_t L_2 = ___byteCount2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = ___chars3;
		int32_t L_4 = ___charIndex4;
		DbcsDecoder_CheckRange_m7E0B5C58A934289C66DEDDB0C93B3B33E0F9F38C(__this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		int32_t L_5 = ___charIndex4;
		V_0 = L_5;
		int32_t L_6 = __this->get_last_byte_conv_5();
		V_1 = L_6;
		__this->set_last_byte_conv_5(0);
		goto IL_0277;
	}

IL_0023:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = ___bytes0;
		int32_t L_8 = ___byteIndex1;
		int32_t L_9 = L_8;
		___byteIndex1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		NullCheck(L_7);
		int32_t L_10 = L_9;
		uint8_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_2 = L_11;
		int32_t L_12 = V_1;
		if (L_12)
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_13 = V_2;
		if ((((int32_t)L_13) <= ((int32_t)((int32_t)128))))
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_0050;
		}
	}

IL_003f:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_15 = ___chars3;
		int32_t L_16 = ___charIndex4;
		int32_t L_17 = L_16;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		int32_t L_18 = V_2;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (Il2CppChar)((int32_t)((uint16_t)L_18)));
		goto IL_0277;
	}

IL_0050:
	{
		int32_t L_19 = V_2;
		V_1 = L_19;
		goto IL_0277;
	}

IL_0057:
	{
		bool L_20 = __this->get_useUHC_3();
		if (!L_20)
		{
			goto IL_0122;
		}
	}
	{
		int32_t L_21 = V_1;
		if ((((int32_t)L_21) >= ((int32_t)((int32_t)161))))
		{
			goto IL_0122;
		}
	}
	{
		int32_t L_22 = V_1;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)8836), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)((int32_t)129))), (int32_t)((int32_t)178)))));
		int32_t L_23 = V_2;
		if ((((int32_t)L_23) < ((int32_t)((int32_t)65))))
		{
			goto IL_0097;
		}
	}
	{
		int32_t L_24 = V_2;
		if ((((int32_t)L_24) > ((int32_t)((int32_t)90))))
		{
			goto IL_0097;
		}
	}
	{
		int32_t L_25 = V_4;
		int32_t L_26 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_26, (int32_t)((int32_t)65)))));
		goto IL_00d3;
	}

IL_0097:
	{
		int32_t L_27 = V_2;
		if ((((int32_t)L_27) < ((int32_t)((int32_t)97))))
		{
			goto IL_00af;
		}
	}
	{
		int32_t L_28 = V_2;
		if ((((int32_t)L_28) > ((int32_t)((int32_t)122))))
		{
			goto IL_00af;
		}
	}
	{
		int32_t L_29 = V_4;
		int32_t L_30 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)((int32_t)97))), (int32_t)((int32_t)26)))));
		goto IL_00d3;
	}

IL_00af:
	{
		int32_t L_31 = V_2;
		if ((((int32_t)L_31) < ((int32_t)((int32_t)129))))
		{
			goto IL_00d0;
		}
	}
	{
		int32_t L_32 = V_2;
		if ((((int32_t)L_32) > ((int32_t)((int32_t)254))))
		{
			goto IL_00d0;
		}
	}
	{
		int32_t L_33 = V_4;
		int32_t L_34 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_34, (int32_t)((int32_t)129))), (int32_t)((int32_t)52)))));
		goto IL_00d3;
	}

IL_00d0:
	{
		V_4 = (-1);
	}

IL_00d3:
	{
		int32_t L_35 = V_4;
		if ((((int32_t)L_35) < ((int32_t)0)))
		{
			goto IL_011b;
		}
	}
	{
		int32_t L_36 = V_4;
		DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * L_37 = ((DbcsDecoder_tE3C4C6E22EB2E09258D84C6FF2FD7FBAD7BF7F8F *)__this)->get_convert_2();
		NullCheck(L_37);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_38 = L_37->get_n2u_0();
		NullCheck(L_38);
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_36, (int32_t)2))) > ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_38)->max_length))))))
		{
			goto IL_011b;
		}
	}
	{
		DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * L_39 = ((DbcsDecoder_tE3C4C6E22EB2E09258D84C6FF2FD7FBAD7BF7F8F *)__this)->get_convert_2();
		NullCheck(L_39);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_40 = L_39->get_n2u_0();
		int32_t L_41 = V_4;
		NullCheck(L_40);
		int32_t L_42 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_41, (int32_t)2));
		uint8_t L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * L_44 = ((DbcsDecoder_tE3C4C6E22EB2E09258D84C6FF2FD7FBAD7BF7F8F *)__this)->get_convert_2();
		NullCheck(L_44);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_45 = L_44->get_n2u_0();
		int32_t L_46 = V_4;
		NullCheck(L_45);
		int32_t L_47 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_46, (int32_t)2)), (int32_t)1));
		uint8_t L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		V_3 = ((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_48, (int32_t)((int32_t)256)))))));
		goto IL_0259;
	}

IL_011b:
	{
		V_3 = 0;
		goto IL_0259;
	}

IL_0122:
	{
		bool L_49 = __this->get_useUHC_3();
		if (!L_49)
		{
			goto IL_01ef;
		}
	}
	{
		int32_t L_50 = V_1;
		if ((((int32_t)L_50) > ((int32_t)((int32_t)198))))
		{
			goto IL_01ef;
		}
	}
	{
		int32_t L_51 = V_2;
		if ((((int32_t)L_51) >= ((int32_t)((int32_t)161))))
		{
			goto IL_01ef;
		}
	}
	{
		int32_t L_52 = V_1;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)14532), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_52, (int32_t)((int32_t)161))), (int32_t)((int32_t)84)))));
		int32_t L_53 = V_2;
		if ((((int32_t)L_53) < ((int32_t)((int32_t)65))))
		{
			goto IL_016a;
		}
	}
	{
		int32_t L_54 = V_2;
		if ((((int32_t)L_54) > ((int32_t)((int32_t)90))))
		{
			goto IL_016a;
		}
	}
	{
		int32_t L_55 = V_5;
		int32_t L_56 = V_2;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_56, (int32_t)((int32_t)65)))));
		goto IL_01a6;
	}

IL_016a:
	{
		int32_t L_57 = V_2;
		if ((((int32_t)L_57) < ((int32_t)((int32_t)97))))
		{
			goto IL_0182;
		}
	}
	{
		int32_t L_58 = V_2;
		if ((((int32_t)L_58) > ((int32_t)((int32_t)122))))
		{
			goto IL_0182;
		}
	}
	{
		int32_t L_59 = V_5;
		int32_t L_60 = V_2;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_60, (int32_t)((int32_t)97))), (int32_t)((int32_t)26)))));
		goto IL_01a6;
	}

IL_0182:
	{
		int32_t L_61 = V_2;
		if ((((int32_t)L_61) < ((int32_t)((int32_t)129))))
		{
			goto IL_01a3;
		}
	}
	{
		int32_t L_62 = V_2;
		if ((((int32_t)L_62) > ((int32_t)((int32_t)160))))
		{
			goto IL_01a3;
		}
	}
	{
		int32_t L_63 = V_5;
		int32_t L_64 = V_2;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_64, (int32_t)((int32_t)129))), (int32_t)((int32_t)52)))));
		goto IL_01a6;
	}

IL_01a3:
	{
		V_5 = (-1);
	}

IL_01a6:
	{
		int32_t L_65 = V_5;
		if ((((int32_t)L_65) < ((int32_t)0)))
		{
			goto IL_01eb;
		}
	}
	{
		int32_t L_66 = V_5;
		DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * L_67 = ((DbcsDecoder_tE3C4C6E22EB2E09258D84C6FF2FD7FBAD7BF7F8F *)__this)->get_convert_2();
		NullCheck(L_67);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_68 = L_67->get_n2u_0();
		NullCheck(L_68);
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_66, (int32_t)2))) > ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length))))))
		{
			goto IL_01eb;
		}
	}
	{
		DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * L_69 = ((DbcsDecoder_tE3C4C6E22EB2E09258D84C6FF2FD7FBAD7BF7F8F *)__this)->get_convert_2();
		NullCheck(L_69);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_70 = L_69->get_n2u_0();
		int32_t L_71 = V_5;
		NullCheck(L_70);
		int32_t L_72 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_71, (int32_t)2));
		uint8_t L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * L_74 = ((DbcsDecoder_tE3C4C6E22EB2E09258D84C6FF2FD7FBAD7BF7F8F *)__this)->get_convert_2();
		NullCheck(L_74);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_75 = L_74->get_n2u_0();
		int32_t L_76 = V_5;
		NullCheck(L_75);
		int32_t L_77 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_76, (int32_t)2)), (int32_t)1));
		uint8_t L_78 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		V_3 = ((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_73, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_78, (int32_t)((int32_t)256)))))));
		goto IL_0259;
	}

IL_01eb:
	{
		V_3 = 0;
		goto IL_0259;
	}

IL_01ef:
	{
		int32_t L_79 = V_2;
		if ((((int32_t)L_79) < ((int32_t)((int32_t)161))))
		{
			goto IL_0257;
		}
	}
	{
		int32_t L_80 = V_2;
		if ((((int32_t)L_80) > ((int32_t)((int32_t)254))))
		{
			goto IL_0257;
		}
	}
	{
		int32_t L_81 = V_1;
		int32_t L_82 = V_2;
		V_6 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_81, (int32_t)((int32_t)161))), (int32_t)((int32_t)94))), (int32_t)L_82)), (int32_t)((int32_t)161))), (int32_t)2));
		int32_t L_83 = V_6;
		if ((((int32_t)L_83) < ((int32_t)0)))
		{
			goto IL_0253;
		}
	}
	{
		int32_t L_84 = V_6;
		DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * L_85 = ((DbcsDecoder_tE3C4C6E22EB2E09258D84C6FF2FD7FBAD7BF7F8F *)__this)->get_convert_2();
		NullCheck(L_85);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_86 = L_85->get_n2u_0();
		NullCheck(L_86);
		if ((((int32_t)L_84) >= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_86)->max_length))))))
		{
			goto IL_0253;
		}
	}
	{
		DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * L_87 = ((DbcsDecoder_tE3C4C6E22EB2E09258D84C6FF2FD7FBAD7BF7F8F *)__this)->get_convert_2();
		NullCheck(L_87);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_88 = L_87->get_n2u_0();
		int32_t L_89 = V_6;
		NullCheck(L_88);
		int32_t L_90 = L_89;
		uint8_t L_91 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		DbcsConvert_tCAAA80302815F988970547D5D75F829EB212D3A6 * L_92 = ((DbcsDecoder_tE3C4C6E22EB2E09258D84C6FF2FD7FBAD7BF7F8F *)__this)->get_convert_2();
		NullCheck(L_92);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_93 = L_92->get_n2u_0();
		int32_t L_94 = V_6;
		NullCheck(L_93);
		int32_t L_95 = ((int32_t)il2cpp_codegen_add((int32_t)L_94, (int32_t)1));
		uint8_t L_96 = (L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		G_B45_0 = ((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_91, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_96, (int32_t)((int32_t)256)))))));
		goto IL_0254;
	}

IL_0253:
	{
		G_B45_0 = 0;
	}

IL_0254:
	{
		V_3 = G_B45_0;
		goto IL_0259;
	}

IL_0257:
	{
		V_3 = 0;
	}

IL_0259:
	{
		Il2CppChar L_97 = V_3;
		if (L_97)
		{
			goto IL_026a;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_98 = ___chars3;
		int32_t L_99 = ___charIndex4;
		int32_t L_100 = L_99;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_100, (int32_t)1));
		NullCheck(L_98);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(L_100), (Il2CppChar)((int32_t)63));
		goto IL_0275;
	}

IL_026a:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_101 = ___chars3;
		int32_t L_102 = ___charIndex4;
		int32_t L_103 = L_102;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_103, (int32_t)1));
		Il2CppChar L_104 = V_3;
		NullCheck(L_101);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(L_103), (Il2CppChar)L_104);
	}

IL_0275:
	{
		V_1 = 0;
	}

IL_0277:
	{
		int32_t L_105 = ___byteCount2;
		int32_t L_106 = L_105;
		___byteCount2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_106, (int32_t)1));
		if ((((int32_t)L_106) > ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_107 = V_1;
		if (!L_107)
		{
			goto IL_02a6;
		}
	}
	{
		bool L_108 = ___refresh5;
		if (!L_108)
		{
			goto IL_029f;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_109 = ___chars3;
		int32_t L_110 = ___charIndex4;
		int32_t L_111 = L_110;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_111, (int32_t)1));
		NullCheck(L_109);
		(L_109)->SetAt(static_cast<il2cpp_array_size_t>(L_111), (Il2CppChar)((int32_t)63));
		__this->set_last_byte_conv_5(0);
		goto IL_02a6;
	}

IL_029f:
	{
		int32_t L_112 = V_1;
		__this->set_last_byte_conv_5(L_112);
	}

IL_02a6:
	{
		int32_t L_113 = ___charIndex4;
		int32_t L_114 = V_0;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_113, (int32_t)L_114));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
