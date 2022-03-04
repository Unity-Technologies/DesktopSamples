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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F;
// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162;
// System.Collections.Generic.Dictionary`2<System.String,System.UriParser>
struct Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.String>
struct KeyCollection_t95CEC57CA04600603C7E9067D11E724EE99AD7D1;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.UriParser>
struct KeyCollection_t4D8331BBA9E57CE61F833B1895C15542E3802424;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.String>
struct ValueCollection_t5C221D6474B57B05A1EF91C1C6A7B1FA1CF361BF;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.UriParser>
struct ValueCollection_t99ADD34BF63C2BCA597E9DD4C94B41AF81D39213;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.String>[]
struct EntryU5BU5D_t0760EF54F1EA7070181C04D5D34118DC91F943ED;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.UriParser>[]
struct EntryU5BU5D_tE4D5DAB840B6A8609AE3436A3952F21D08487BD2;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// Mono.Security.ASN1
struct ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.Collections.ArrayList
struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t8C098DB59DF7BA2C2A71369978F4225B92B2F59B;
// System.Security.Cryptography.CryptographicException
struct CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.Text.DecoderReplacementFallback
struct DecoderReplacementFallback_t8DA345EC4EF3A35A2667365F691EE69408A62130;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.EncoderReplacementFallback
struct EncoderReplacementFallback_t61E36A507D7FA8034B49F86DBE560EC77A6A8418;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Exception
struct Exception_t;
// System.Runtime.InteropServices.ExternalException
struct ExternalException_tC18275DD0AEB2CDF9F85D94670C5A49A4DC3B783;
// System.FormatException
struct FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t2A667D8777429024D8A3CB3D9AE29EA79FEA6176;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.NotImplementedException
struct NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6;
// System.Security.Cryptography.Oid
struct Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800;
// System.Security.Cryptography.OidCollection
struct OidCollection_tA091E185B8840648BE96A6C547F0C26F88E3A902;
// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t40ABE7E0985F3E274C9564670970EC6F3B39A4A2;
// System.Security.Cryptography.SHA1
struct SHA1_t15B592B9935E19EC3FD5679B969239AC572E2C0E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Type
struct Type_t;
// System.ComponentModel.TypeConverter
struct TypeConverter_t004F185B630F00F509F08BD8F8D82471867323B4;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.UriFormatException
struct UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D;
// System.UriParser
struct UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A;
// System.UriTypeConverter
struct UriTypeConverter_tF512B4F48E57AC42B460E2847743CD78F4D24694;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Net.Configuration.WebProxyScriptElement
struct WebProxyScriptElement_t6E2DB4259FF77920BA00BBA7AC7E0BAC995FD76F;
// System.Net.Configuration.WebRequestModuleElementCollection
struct WebRequestModuleElementCollection_tC1A60891298C544F74DA731DDEEFE603015C09C9;
// System.Net.Configuration.WebRequestModulesSection
struct WebRequestModulesSection_t2F6BB673DEE919615116B391BA37F70831084603;
// System.ComponentModel.Win32Exception
struct Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950;
// System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension
struct X509BasicConstraintsExtension_t790FA4E7D9715A72A621A290FF0CDD5A647EF3CF;
// System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension
struct X509EnhancedKeyUsageExtension_tD53B0C2AF93C2496461F2960946C5F40A33AC82B;
// System.Security.Cryptography.X509Certificates.X509Extension
struct X509Extension_t9142CAA11EB46CC4CAB51A26D3B84BDA06FA9FF5;
// System.Security.Cryptography.X509Certificates.X509KeyUsageExtension
struct X509KeyUsageExtension_tF78A71F87AEE0E0DC54DFF837AB2880E3D9CF227;
// System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension
struct X509SubjectKeyIdentifierExtension_t9781D24066D84C09C7137124FBC848491BF54567;
// System.Text.RegularExpressions.RegexCharClass/SingleRange
struct SingleRange_tEE8EA054843A8B8979D082D2CCC8E52A12155624;
// System.Text.RegularExpressions.RegexCharClass/SingleRangeComparer
struct SingleRangeComparer_t2D22B185700E925165F9548B3647E0E1FC9DB075;
// System.Uri/MoreInfo
struct MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727;
// System.Uri/UriInfo
struct UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45;
// System.UriParser/BuiltInUriParser
struct BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26;

IL2CPP_EXTERN_C RuntimeClass* ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryCompatibility_t44EDF0C684F7241E727B341DF3896349BC34D810_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DecoderReplacementFallback_t8DA345EC4EF3A35A2667365F691EE69408A62130_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EncoderReplacementFallback_t61E36A507D7FA8034B49F86DBE560EC77A6A8418_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OidCollection_tA091E185B8840648BE96A6C547F0C26F88E3A902_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UriComponents_tA599793722A9810EC23036FF1B1B02A905B4EA76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509Extension_t9142CAA11EB46CC4CAB51A26D3B84BDA06FA9FF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t1267FAF6E08D720F26ABF676554E6948A7F6A2D0____59F5BD34B6C013DEACC784F69C67E95150033A84_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral001611EA36FEB747E4C160A3E7A402813B416AF1;
IL2CPP_EXTERN_C String_t* _stringLiteral0B85D604B5CD78CCF01CDA620C0DEF5DCC5C1FD7;
IL2CPP_EXTERN_C String_t* _stringLiteral10FC672FB9F87F9D6AFF9F8D6BFF4199EF333405;
IL2CPP_EXTERN_C String_t* _stringLiteral11F95AF2256BE4BBDBEAF89CB3904A6AB1B3A01D;
IL2CPP_EXTERN_C String_t* _stringLiteral1207530D7D4A8643E4DA91D94090C5B782E8D4AA;
IL2CPP_EXTERN_C String_t* _stringLiteral19A87220AA9460BCE77166C6A721ECA99780C3E7;
IL2CPP_EXTERN_C String_t* _stringLiteral1E8AB4D0974C246EABB424179864CCBA5DCEE064;
IL2CPP_EXTERN_C String_t* _stringLiteral1EF9E33E97E3023577871E2EA773996440F2F5F9;
IL2CPP_EXTERN_C String_t* _stringLiteral20F8CFBBD4C388C4999BC67998CD7310A3357E3F;
IL2CPP_EXTERN_C String_t* _stringLiteral212797907CC7AD095EFEBD10D643DF1F9608C8C1;
IL2CPP_EXTERN_C String_t* _stringLiteral2243F389E5AA3DE4541A15C92A9BACE59F8BE4E3;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral244BA6FE8878C6A66F7648332C07125DF3AFBC4B;
IL2CPP_EXTERN_C String_t* _stringLiteral254B65344AFC181606CA4DFAD96AD5ECAF4EC1A4;
IL2CPP_EXTERN_C String_t* _stringLiteral2A97A21771096701008C3221E4E58C40E34C5D2A;
IL2CPP_EXTERN_C String_t* _stringLiteral2C0C7BE659E23DAFA1146EBB9040344301391983;
IL2CPP_EXTERN_C String_t* _stringLiteral2F709974418B85825D8E38ADF52E90B7496ED7A3;
IL2CPP_EXTERN_C String_t* _stringLiteral2F874A32C0360779E461A5ED6063EF8E6729A514;
IL2CPP_EXTERN_C String_t* _stringLiteral2FDCE7F577695853459152469012B0121731CD52;
IL2CPP_EXTERN_C String_t* _stringLiteral315E5D2D2D07B33F565952A5C0509A988785ABF6;
IL2CPP_EXTERN_C String_t* _stringLiteral324033F505A57738479E4A50C6C83DD40C3EEC72;
IL2CPP_EXTERN_C String_t* _stringLiteral324A15BBCCD67A1997F37BF20414A7EB61126AB5;
IL2CPP_EXTERN_C String_t* _stringLiteral36A832BCE093B1C64A8D587D84C04716FC3D8123;
IL2CPP_EXTERN_C String_t* _stringLiteral3AB04459C95BC4FFBBDA41BF1A685753EB83D903;
IL2CPP_EXTERN_C String_t* _stringLiteral3BF6290AF676E80C38F6589505DFD9ECD0590836;
IL2CPP_EXTERN_C String_t* _stringLiteral3C77EE02D0B62256DB746EEC2F12CB9BC801126A;
IL2CPP_EXTERN_C String_t* _stringLiteral3D3AA5822C64FA34CB5E37391CFC58263F937F30;
IL2CPP_EXTERN_C String_t* _stringLiteral3D578B33304CEDE293DF5286833AF99CB7582472;
IL2CPP_EXTERN_C String_t* _stringLiteral3ECCF64C0782442EC426220868830513FD924C3C;
IL2CPP_EXTERN_C String_t* _stringLiteral3EE5BCAF4F2ABF8C2E555D5760FA880AAB22CABF;
IL2CPP_EXTERN_C String_t* _stringLiteral3F87CFEF1A1BA898EEFCE807810982D16AC01A99;
IL2CPP_EXTERN_C String_t* _stringLiteral49FCFEB950E4FC1E14C6AB9024A0D20CC2BEB985;
IL2CPP_EXTERN_C String_t* _stringLiteral4ACEC7A42FAB928B0D1510DB60C3D35BC6DC4D9F;
IL2CPP_EXTERN_C String_t* _stringLiteral4FA8C3994CCEF6319AF0BED6CBC74C41F5E23E78;
IL2CPP_EXTERN_C String_t* _stringLiteral5274194BE573E6D86BDC850C768FAEBD25A0C72E;
IL2CPP_EXTERN_C String_t* _stringLiteral548D93DDB2AC6B24373148B19D9A625571AB2318;
IL2CPP_EXTERN_C String_t* _stringLiteral54C50EBA1F9B7D1A0F12E6A2A0DC78BF59231F31;
IL2CPP_EXTERN_C String_t* _stringLiteral56D7741BCA89552362FD24D11BB8980E3D8A444C;
IL2CPP_EXTERN_C String_t* _stringLiteral587B0E053519266A1A5628C5DBE03AA33A3BBE95;
IL2CPP_EXTERN_C String_t* _stringLiteral58B716FF5428F7961E1403E6D969E605D0F27EAF;
IL2CPP_EXTERN_C String_t* _stringLiteral5D1D45B6F90EF153C0073C0B7E9492B4DBF540F1;
IL2CPP_EXTERN_C String_t* _stringLiteral5D81741866E0AFB5638DF15167E9A90CDC2CF124;
IL2CPP_EXTERN_C String_t* _stringLiteral5EDC47BC71D706BB11343CC890323569C143CD50;
IL2CPP_EXTERN_C String_t* _stringLiteral5EF9365F8C43E6AB95C818EEEE9E5EF0D539BF1A;
IL2CPP_EXTERN_C String_t* _stringLiteral5EFEED0117DD1A53229D6D374013D42D30B1B19E;
IL2CPP_EXTERN_C String_t* _stringLiteral5FB56C8861544146EF414DAE01766AD43F440960;
IL2CPP_EXTERN_C String_t* _stringLiteral62F92E932A25B80B40DBB89A07F4AD690B6F800D;
IL2CPP_EXTERN_C String_t* _stringLiteral63DCC50AED43B00BB793B2D0F054171D9D12A15E;
IL2CPP_EXTERN_C String_t* _stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260;
IL2CPP_EXTERN_C String_t* _stringLiteral6A1647F2AA7442466F1E26B4E54D7ACAA785F886;
IL2CPP_EXTERN_C String_t* _stringLiteral6F42498ADE17E452CCFC96AF356C74D51ACA0524;
IL2CPP_EXTERN_C String_t* _stringLiteral6F60E896CBE94313C35CDF8C33C899216DA269EF;
IL2CPP_EXTERN_C String_t* _stringLiteral6FEF7F07E4E5C8758103389685FF14ABCB30BD0B;
IL2CPP_EXTERN_C String_t* _stringLiteral70ACDB62BA3184CF43D7E26D62FB85E2340ED892;
IL2CPP_EXTERN_C String_t* _stringLiteral751F5076C7A89E0EBF4B8BBF42D19173A068D0FE;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral75C57EB9FD95FB9243FE99EBB78A77B0117BD190;
IL2CPP_EXTERN_C String_t* _stringLiteral75C9716749EA210206E3467390B7A11F3F33DDFA;
IL2CPP_EXTERN_C String_t* _stringLiteral7A4031343C4BF504EC9F4A28169986445F910C6A;
IL2CPP_EXTERN_C String_t* _stringLiteral830B64B4254C502C612E53C83DBEE6238E710499;
IL2CPP_EXTERN_C String_t* _stringLiteral8398C464CEF2A8E224363DAF635848402299705A;
IL2CPP_EXTERN_C String_t* _stringLiteral83F837B4325FC4400C4089A21E353D2D0CD0EF29;
IL2CPP_EXTERN_C String_t* _stringLiteral84A0343BF19D2274E807E1B6505C382F81D6E3C9;
IL2CPP_EXTERN_C String_t* _stringLiteral85C411E2A2C61BD26D48EEB5D245D2D203BD74BA;
IL2CPP_EXTERN_C String_t* _stringLiteral87D7C5E974D9C89FB52B8A53360C0C2E1DAAEC63;
IL2CPP_EXTERN_C String_t* _stringLiteral8BF693870A1CA202D2EE1A186395E62B409214FD;
IL2CPP_EXTERN_C String_t* _stringLiteral8CB5CAE4A06CBA4A72564C688228877DD24B9906;
IL2CPP_EXTERN_C String_t* _stringLiteral8D1E32D587015A9DB04576A49D22A6924F1B9D62;
IL2CPP_EXTERN_C String_t* _stringLiteral91E2D84A2649FBF80361A807D1020FB40280EF31;
IL2CPP_EXTERN_C String_t* _stringLiteral95FFF748EEEE6E0D4ADA84ED41FB391126B8CFF7;
IL2CPP_EXTERN_C String_t* _stringLiteral9610F86E2CB2A021571D9CE9BF9630C0084AAF00;
IL2CPP_EXTERN_C String_t* _stringLiteral9753F194FF9C1EAC5D2E1FAADADC2E63D96E516E;
IL2CPP_EXTERN_C String_t* _stringLiteral98086E81726E63C07D5EE51033D818164107DDF6;
IL2CPP_EXTERN_C String_t* _stringLiteral9C1ED970007229D4BBE511BC369FF3ACD197B1F2;
IL2CPP_EXTERN_C String_t* _stringLiteralA07CCE227D5A4E151B0A5EF141705717C77B8CFE;
IL2CPP_EXTERN_C String_t* _stringLiteralA3C5DC11C0F491C18EA087784CC4C662A0629733;
IL2CPP_EXTERN_C String_t* _stringLiteralA431B02F755D1ADA246246ACF4AD7497CFB57892;
IL2CPP_EXTERN_C String_t* _stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085;
IL2CPP_EXTERN_C String_t* _stringLiteralA9AF8D13B64E63A31A01386E007E5C9CF3A6CF5B;
IL2CPP_EXTERN_C String_t* _stringLiteralAC705511F599E168CB4A19DE96F050E694A04892;
IL2CPP_EXTERN_C String_t* _stringLiteralAFA84BE1B233FD908181C2B76616E356218E5B31;
IL2CPP_EXTERN_C String_t* _stringLiteralB2AED74A19DD9414DD0792FD340CC531536B8454;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB4A94E440E57B3321B2097CEC9E046D28EE1C0CD;
IL2CPP_EXTERN_C String_t* _stringLiteralB4F44FFF8E8B6A3CA093580564BB4F0DF515EB8E;
IL2CPP_EXTERN_C String_t* _stringLiteralBCBD089553BED56941C157C4F715B4365F724D7C;
IL2CPP_EXTERN_C String_t* _stringLiteralBE9CA5A938D04349B649020FA52D9EC24C97099D;
IL2CPP_EXTERN_C String_t* _stringLiteralC05DD95A56B355AAD74E9CE147B236E03FF8905E;
IL2CPP_EXTERN_C String_t* _stringLiteralC0A48EDC742B92D7EFD262D5F90073EE36ECFEFF;
IL2CPP_EXTERN_C String_t* _stringLiteralC32ED50300303AD9E773DE5B27CD33A424A6F172;
IL2CPP_EXTERN_C String_t* _stringLiteralC4E1CA5F695C0687C577DB8E17E55E7B5845A445;
IL2CPP_EXTERN_C String_t* _stringLiteralC517A672C519F103745EEF18967AD4081CBFAEE2;
IL2CPP_EXTERN_C String_t* _stringLiteralC54E67FF6B0A0F7026D9F0CA0C1E11CC59B88ADC;
IL2CPP_EXTERN_C String_t* _stringLiteralC9FB8C73B342D5B3C700EDA7C5212DD547D29E4E;
IL2CPP_EXTERN_C String_t* _stringLiteralCABCFE6297E437347D23F1B446C58DD70094E306;
IL2CPP_EXTERN_C String_t* _stringLiteralCC86C197E0FEFBC58402C83C0D74784A5C39CD74;
IL2CPP_EXTERN_C String_t* _stringLiteralCD32F08BAB4EE365057213BCC6332DD39C2DE46B;
IL2CPP_EXTERN_C String_t* _stringLiteralCD808C493DAE7E08DD825B3BE75EC7DF375082B6;
IL2CPP_EXTERN_C String_t* _stringLiteralCEF86F29033280F9E4D053455DDC08C8746E5E5E;
IL2CPP_EXTERN_C String_t* _stringLiteralD20A4058B7B405BF173793FAAC54A85874A0CDDE;
IL2CPP_EXTERN_C String_t* _stringLiteralD39E208E1EDCA34C72FCD76197E0EA7CD671D2F9;
IL2CPP_EXTERN_C String_t* _stringLiteralD615D452AAA84D559E3E5FFF5168A1AF47500E8D;
IL2CPP_EXTERN_C String_t* _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32;
IL2CPP_EXTERN_C String_t* _stringLiteralD9B53FE83B364433B53BD1F5712DD31D58258FB4;
IL2CPP_EXTERN_C String_t* _stringLiteralD9EDAE09EFB19C1354AEFDA553B4B5DC28D5CD87;
IL2CPP_EXTERN_C String_t* _stringLiteralDA0721C1938DB62218B172D4D91AD61AFD6EA65A;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDD5A04FDCE8EDE26B5E78DE17CAB2D9DB4D10C73;
IL2CPP_EXTERN_C String_t* _stringLiteralDDA0FEDECC3765A8D5F295C4B302D615D29F3483;
IL2CPP_EXTERN_C String_t* _stringLiteralDE0A8A4B33338D09BDE82F544CF26FB4B56B9F98;
IL2CPP_EXTERN_C String_t* _stringLiteralDE9E1E6A7FD6E2514E97545C0BC4A067C0DAD5E7;
IL2CPP_EXTERN_C String_t* _stringLiteralDEB31152738116748FADCEF38CE0C9964DACCF2F;
IL2CPP_EXTERN_C String_t* _stringLiteralDF9B137BC764E0190EA1D7EEB32F2364F3F3A2DF;
IL2CPP_EXTERN_C String_t* _stringLiteralE13258345AC5ED7FA38D641004219DBE3A3FB56C;
IL2CPP_EXTERN_C String_t* _stringLiteralE657126EBF76C06687ED6EAD2C714E37315C927F;
IL2CPP_EXTERN_C String_t* _stringLiteralE6FA6FADCE3B49C8F065918B497F388AB44DA05D;
IL2CPP_EXTERN_C String_t* _stringLiteralE7C7449D840A91B3AF035F43E6106A0BC8372CC6;
IL2CPP_EXTERN_C String_t* _stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6;
IL2CPP_EXTERN_C String_t* _stringLiteralEB6BBFD5D01FC65219978A6C56AF3DD9C51AD35E;
IL2CPP_EXTERN_C String_t* _stringLiteralEB9599E9ABB0C609991C09C03544164393F9661D;
IL2CPP_EXTERN_C String_t* _stringLiteralEDDFDA94752EB5111EC566E5CAF709B7133C43DA;
IL2CPP_EXTERN_C String_t* _stringLiteralEEAB711A5B5FD0EFECB9A5166B548777BDDB7901;
IL2CPP_EXTERN_C String_t* _stringLiteralF27E4C631EBEFA337EC21BE8552E169C9DED78A2;
IL2CPP_EXTERN_C String_t* _stringLiteralF388C7719B1FB6CFBD759164BEE4F33BB420FF6E;
IL2CPP_EXTERN_C String_t* _stringLiteralF64982ECFBBDC20AF3E40B6D5C0B68965820A033;
IL2CPP_EXTERN_C String_t* _stringLiteralF7C03E97995F6950303A46C204A216735E6B4582;
IL2CPP_EXTERN_C String_t* _stringLiteralFA1D72164D93990AA279210A8D4332B3E0A6C411;
IL2CPP_EXTERN_C String_t* _stringLiteralFCC60170DC9ECA079BBFC781ACD49B93D0E8C4AE;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m05B3B2E9A02468956D9D51C30093821BFBC3C63A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mA9A5AC6DC5483E78A8A41145515BF11AF259409E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mB40672A269C34DB22BA5BFAF2511631483E1690E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mEF275C708A9D8C75BE351DE8D63068D20522B707_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_mC890D4862BCE096F4E905A751AEE39B30478357C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UriHelper_EscapeString_m322E8737F58BBAF891A75032EC1800BE548F84D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UriHelper_UnescapeString_m92E5C90E7DAE8DA5C7C1E6FB72B0F58321B6484C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UriParser_GetComponents_mEF92B7D8CD59B1C8502D195D775D02D2C844FC1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UriParser_Resolve_m031E03AD4141D77F023345D8FB087FA06CEA41C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebProxyScriptElement__ctor_m943D653C6A20D602A9ED7F0D13E0ED41691CC2C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebProxyScriptElement_get_Properties_mD29E00ECE9AAA868495BECD6D88C48BBFE74F26E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestModuleElementCollection__ctor_mE32DEB8FF2F3E3582D6E9C291B6496BAFD182D3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestModulesSection__ctor_mE9CD09355B8B10829D4B6D2681811DC7F199B8D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestModulesSection_get_Properties_mF7B71DE46486B2AF3D42FB3B877CDBC35B5FFC2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Win32Exception_GetObjectData_mFB1F75CC318DB1FA595ECA5466F331AEC686BB07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509BasicConstraintsExtension_CopyFrom_mB87E2C5337CEE107018289CF81AD4ED7956A6ECD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509BasicConstraintsExtension__ctor_m27365A2183995553C17661A9C5E6CFF474AEB33D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509BasicConstraintsExtension_get_CertificateAuthority_mF7C866A45B3DE24A06EA3256B8FC0BA1989D038D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509BasicConstraintsExtension_get_HasPathLengthConstraint_m04C1B45C4FF2FF902B45A5B1AE309D3816A3457A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509BasicConstraintsExtension_get_PathLengthConstraint_m9401525125A220F1D51F130E3CC6E4C938E45566_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509EnhancedKeyUsageExtension_CopyFrom_mDD12A69F6804BA6B137A459CD941B367274C2B25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509EnhancedKeyUsageExtension_Decode_m610C0C741966205F6DC0492BD17B28E1FED8D648_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509Extension_CopyFrom_m1D101C0A8E17FDC25EF1D7645F2A07E5AB7A3D1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509KeyUsageExtension_CopyFrom_m029A26C577528A8DF077CF68AD2787DC1E76FA7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509KeyUsageExtension_get_KeyUsages_mD2ADFD4CC335B85D453BCA75A8541D3DF099A8FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509SubjectKeyIdentifierExtension_CopyFrom_mA94CE978304FA27C3CD9719F34D85CD34FC3695D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509SubjectKeyIdentifierExtension__ctor_m178F0928E93C151B64754E82C9613687D80671A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509SubjectKeyIdentifierExtension__ctor_m7CE599E8BEFBF176243E07100E2B9D1AD40E109E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509SubjectKeyIdentifierExtension__ctor_mDEF8BD36D2A43B1BDC54760AC6E57458E5ECBFE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509SubjectKeyIdentifierExtension_get_SubjectKeyIdentifier_mD90F985708EE4E69C37AA8B09AEBBE64A4002601_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509Utils_FindOidInfo_m7CC1462A6CC9DA7C40CA09FA5EACEE9B9117EC8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t0760EF54F1EA7070181C04D5D34118DC91F943ED* ___entries_1;
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
	KeyCollection_t95CEC57CA04600603C7E9067D11E724EE99AD7D1 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t5C221D6474B57B05A1EF91C1C6A7B1FA1CF361BF * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB, ___entries_1)); }
	inline EntryU5BU5D_t0760EF54F1EA7070181C04D5D34118DC91F943ED* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t0760EF54F1EA7070181C04D5D34118DC91F943ED** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t0760EF54F1EA7070181C04D5D34118DC91F943ED* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB, ___keys_7)); }
	inline KeyCollection_t95CEC57CA04600603C7E9067D11E724EE99AD7D1 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t95CEC57CA04600603C7E9067D11E724EE99AD7D1 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t95CEC57CA04600603C7E9067D11E724EE99AD7D1 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB, ___values_8)); }
	inline ValueCollection_t5C221D6474B57B05A1EF91C1C6A7B1FA1CF361BF * get_values_8() const { return ___values_8; }
	inline ValueCollection_t5C221D6474B57B05A1EF91C1C6A7B1FA1CF361BF ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t5C221D6474B57B05A1EF91C1C6A7B1FA1CF361BF * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.UriParser>
struct Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tE4D5DAB840B6A8609AE3436A3952F21D08487BD2* ___entries_1;
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
	KeyCollection_t4D8331BBA9E57CE61F833B1895C15542E3802424 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t99ADD34BF63C2BCA597E9DD4C94B41AF81D39213 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5, ___entries_1)); }
	inline EntryU5BU5D_tE4D5DAB840B6A8609AE3436A3952F21D08487BD2* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tE4D5DAB840B6A8609AE3436A3952F21D08487BD2** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tE4D5DAB840B6A8609AE3436A3952F21D08487BD2* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5, ___keys_7)); }
	inline KeyCollection_t4D8331BBA9E57CE61F833B1895C15542E3802424 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t4D8331BBA9E57CE61F833B1895C15542E3802424 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t4D8331BBA9E57CE61F833B1895C15542E3802424 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5, ___values_8)); }
	inline ValueCollection_t99ADD34BF63C2BCA597E9DD4C94B41AF81D39213 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t99ADD34BF63C2BCA597E9DD4C94B41AF81D39213 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t99ADD34BF63C2BCA597E9DD4C94B41AF81D39213 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// Mono.Security.ASN1
struct ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8  : public RuntimeObject
{
public:
	// System.Byte Mono.Security.ASN1::m_nTag
	uint8_t ___m_nTag_0;
	// System.Byte[] Mono.Security.ASN1::m_aValue
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___m_aValue_1;
	// System.Collections.ArrayList Mono.Security.ASN1::elist
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ___elist_2;

public:
	inline static int32_t get_offset_of_m_nTag_0() { return static_cast<int32_t>(offsetof(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8, ___m_nTag_0)); }
	inline uint8_t get_m_nTag_0() const { return ___m_nTag_0; }
	inline uint8_t* get_address_of_m_nTag_0() { return &___m_nTag_0; }
	inline void set_m_nTag_0(uint8_t value)
	{
		___m_nTag_0 = value;
	}

	inline static int32_t get_offset_of_m_aValue_1() { return static_cast<int32_t>(offsetof(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8, ___m_aValue_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_m_aValue_1() const { return ___m_aValue_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_m_aValue_1() { return &___m_aValue_1; }
	inline void set_m_aValue_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___m_aValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_aValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_elist_2() { return static_cast<int32_t>(offsetof(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8, ___elist_2)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get_elist_2() const { return ___elist_2; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of_elist_2() { return &___elist_2; }
	inline void set_elist_2(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		___elist_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___elist_2), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA  : public RuntimeObject
{
public:
	// System.Security.Cryptography.Oid System.Security.Cryptography.AsnEncodedData::_oid
	Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 * ____oid_0;
	// System.Byte[] System.Security.Cryptography.AsnEncodedData::_raw
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____raw_1;

public:
	inline static int32_t get_offset_of__oid_0() { return static_cast<int32_t>(offsetof(AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA, ____oid_0)); }
	inline Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 * get__oid_0() const { return ____oid_0; }
	inline Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 ** get_address_of__oid_0() { return &____oid_0; }
	inline void set__oid_0(Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 * value)
	{
		____oid_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____oid_0), (void*)value);
	}

	inline static int32_t get_offset_of__raw_1() { return static_cast<int32_t>(offsetof(AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA, ____raw_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__raw_1() const { return ____raw_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__raw_1() { return &____raw_1; }
	inline void set__raw_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____raw_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____raw_1), (void*)value);
	}
};


// System.Runtime.Versioning.BinaryCompatibility
struct BinaryCompatibility_t44EDF0C684F7241E727B341DF3896349BC34D810  : public RuntimeObject
{
public:

public:
};

struct BinaryCompatibility_t44EDF0C684F7241E727B341DF3896349BC34D810_StaticFields
{
public:
	// System.Boolean System.Runtime.Versioning.BinaryCompatibility::TargetsAtLeast_Desktop_V4_5
	bool ___TargetsAtLeast_Desktop_V4_5_0;
	// System.Boolean System.Runtime.Versioning.BinaryCompatibility::TargetsAtLeast_Desktop_V4_5_1
	bool ___TargetsAtLeast_Desktop_V4_5_1_1;

public:
	inline static int32_t get_offset_of_TargetsAtLeast_Desktop_V4_5_0() { return static_cast<int32_t>(offsetof(BinaryCompatibility_t44EDF0C684F7241E727B341DF3896349BC34D810_StaticFields, ___TargetsAtLeast_Desktop_V4_5_0)); }
	inline bool get_TargetsAtLeast_Desktop_V4_5_0() const { return ___TargetsAtLeast_Desktop_V4_5_0; }
	inline bool* get_address_of_TargetsAtLeast_Desktop_V4_5_0() { return &___TargetsAtLeast_Desktop_V4_5_0; }
	inline void set_TargetsAtLeast_Desktop_V4_5_0(bool value)
	{
		___TargetsAtLeast_Desktop_V4_5_0 = value;
	}

	inline static int32_t get_offset_of_TargetsAtLeast_Desktop_V4_5_1_1() { return static_cast<int32_t>(offsetof(BinaryCompatibility_t44EDF0C684F7241E727B341DF3896349BC34D810_StaticFields, ___TargetsAtLeast_Desktop_V4_5_1_1)); }
	inline bool get_TargetsAtLeast_Desktop_V4_5_1_1() const { return ___TargetsAtLeast_Desktop_V4_5_1_1; }
	inline bool* get_address_of_TargetsAtLeast_Desktop_V4_5_1_1() { return &___TargetsAtLeast_Desktop_V4_5_1_1; }
	inline void set_TargetsAtLeast_Desktop_V4_5_1_1(bool value)
	{
		___TargetsAtLeast_Desktop_V4_5_1_1 = value;
	}
};


// System.Configuration.ConfigurationElement
struct ConfigurationElement_t571C446CFDFF39CF17130653C433786BEFF25DFA  : public RuntimeObject
{
public:

public:
};


// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t8C098DB59DF7BA2C2A71369978F4225B92B2F59B  : public RuntimeObject
{
public:

public:
};


// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D  : public RuntimeObject
{
public:
	// System.Boolean System.Text.DecoderFallback::bIsMicrosoftBestFitFallback
	bool ___bIsMicrosoftBestFitFallback_0;

public:
	inline static int32_t get_offset_of_bIsMicrosoftBestFitFallback_0() { return static_cast<int32_t>(offsetof(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D, ___bIsMicrosoftBestFitFallback_0)); }
	inline bool get_bIsMicrosoftBestFitFallback_0() const { return ___bIsMicrosoftBestFitFallback_0; }
	inline bool* get_address_of_bIsMicrosoftBestFitFallback_0() { return &___bIsMicrosoftBestFitFallback_0; }
	inline void set_bIsMicrosoftBestFitFallback_0(bool value)
	{
		___bIsMicrosoftBestFitFallback_0 = value;
	}
};

struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_StaticFields
{
public:
	// System.Text.DecoderFallback modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.DecoderFallback::replacementFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___replacementFallback_1;
	// System.Text.DecoderFallback modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.DecoderFallback::exceptionFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___exceptionFallback_2;
	// System.Object System.Text.DecoderFallback::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_3;

public:
	inline static int32_t get_offset_of_replacementFallback_1() { return static_cast<int32_t>(offsetof(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_StaticFields, ___replacementFallback_1)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_replacementFallback_1() const { return ___replacementFallback_1; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_replacementFallback_1() { return &___replacementFallback_1; }
	inline void set_replacementFallback_1(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___replacementFallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___replacementFallback_1), (void*)value);
	}

	inline static int32_t get_offset_of_exceptionFallback_2() { return static_cast<int32_t>(offsetof(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_StaticFields, ___exceptionFallback_2)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_exceptionFallback_2() const { return ___exceptionFallback_2; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_exceptionFallback_2() { return &___exceptionFallback_2; }
	inline void set_exceptionFallback_2(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___exceptionFallback_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___exceptionFallback_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_3() { return static_cast<int32_t>(offsetof(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_StaticFields, ___s_InternalSyncObject_3)); }
	inline RuntimeObject * get_s_InternalSyncObject_3() const { return ___s_InternalSyncObject_3; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_3() { return &___s_InternalSyncObject_3; }
	inline void set_s_InternalSyncObject_3(RuntimeObject * value)
	{
		___s_InternalSyncObject_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_3), (void*)value);
	}
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


// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_0;
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___HashValue_1;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_2;
	// System.Boolean System.Security.Cryptography.HashAlgorithm::m_bDisposed
	bool ___m_bDisposed_3;

public:
	inline static int32_t get_offset_of_HashSizeValue_0() { return static_cast<int32_t>(offsetof(HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31, ___HashSizeValue_0)); }
	inline int32_t get_HashSizeValue_0() const { return ___HashSizeValue_0; }
	inline int32_t* get_address_of_HashSizeValue_0() { return &___HashSizeValue_0; }
	inline void set_HashSizeValue_0(int32_t value)
	{
		___HashSizeValue_0 = value;
	}

	inline static int32_t get_offset_of_HashValue_1() { return static_cast<int32_t>(offsetof(HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31, ___HashValue_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_HashValue_1() const { return ___HashValue_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_HashValue_1() { return &___HashValue_1; }
	inline void set_HashValue_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___HashValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HashValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_State_2() { return static_cast<int32_t>(offsetof(HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31, ___State_2)); }
	inline int32_t get_State_2() const { return ___State_2; }
	inline int32_t* get_address_of_State_2() { return &___State_2; }
	inline void set_State_2(int32_t value)
	{
		___State_2 = value;
	}

	inline static int32_t get_offset_of_m_bDisposed_3() { return static_cast<int32_t>(offsetof(HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31, ___m_bDisposed_3)); }
	inline bool get_m_bDisposed_3() const { return ___m_bDisposed_3; }
	inline bool* get_address_of_m_bDisposed_3() { return &___m_bDisposed_3; }
	inline void set_m_bDisposed_3(bool value)
	{
		___m_bDisposed_3 = value;
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.Security.Cryptography.OidCollection
struct OidCollection_tA091E185B8840648BE96A6C547F0C26F88E3A902  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Security.Cryptography.OidCollection::m_list
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ___m_list_0;

public:
	inline static int32_t get_offset_of_m_list_0() { return static_cast<int32_t>(offsetof(OidCollection_tA091E185B8840648BE96A6C547F0C26F88E3A902, ___m_list_0)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get_m_list_0() const { return ___m_list_0; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of_m_list_0() { return &___m_list_0; }
	inline void set_m_list_0(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		___m_list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_list_0), (void*)value);
	}
};


// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t40ABE7E0985F3E274C9564670970EC6F3B39A4A2  : public RuntimeObject
{
public:
	// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::_keyValue
	AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA * ____keyValue_0;
	// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::_params
	AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA * ____params_1;
	// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::_oid
	Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 * ____oid_2;

public:
	inline static int32_t get_offset_of__keyValue_0() { return static_cast<int32_t>(offsetof(PublicKey_t40ABE7E0985F3E274C9564670970EC6F3B39A4A2, ____keyValue_0)); }
	inline AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA * get__keyValue_0() const { return ____keyValue_0; }
	inline AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA ** get_address_of__keyValue_0() { return &____keyValue_0; }
	inline void set__keyValue_0(AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA * value)
	{
		____keyValue_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____keyValue_0), (void*)value);
	}

	inline static int32_t get_offset_of__params_1() { return static_cast<int32_t>(offsetof(PublicKey_t40ABE7E0985F3E274C9564670970EC6F3B39A4A2, ____params_1)); }
	inline AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA * get__params_1() const { return ____params_1; }
	inline AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA ** get_address_of__params_1() { return &____params_1; }
	inline void set__params_1(AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA * value)
	{
		____params_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____params_1), (void*)value);
	}

	inline static int32_t get_offset_of__oid_2() { return static_cast<int32_t>(offsetof(PublicKey_t40ABE7E0985F3E274C9564670970EC6F3B39A4A2, ____oid_2)); }
	inline Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 * get__oid_2() const { return ____oid_2; }
	inline Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 ** get_address_of__oid_2() { return &____oid_2; }
	inline void set__oid_2(Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 * value)
	{
		____oid_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____oid_2), (void*)value);
	}
};

struct PublicKey_t40ABE7E0985F3E274C9564670970EC6F3B39A4A2_StaticFields
{
public:
	// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::Empty
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___Empty_3;

public:
	inline static int32_t get_offset_of_Empty_3() { return static_cast<int32_t>(offsetof(PublicKey_t40ABE7E0985F3E274C9564670970EC6F3B39A4A2_StaticFields, ___Empty_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_Empty_3() const { return ___Empty_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_Empty_3() { return &___Empty_3; }
	inline void set_Empty_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___Empty_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_3), (void*)value);
	}
};


// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1  : public RuntimeObject
{
public:
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_members_0;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_data_1;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___m_types_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * ___m_nameToIndex_3;
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
	inline static int32_t get_offset_of_m_members_0() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_members_0)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_members_0() const { return ___m_members_0; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_members_0() { return &___m_members_0; }
	inline void set_m_members_0(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_members_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_members_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_data_1() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_data_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_data_1() const { return ___m_data_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_data_1() { return &___m_data_1; }
	inline void set_m_data_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_data_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_data_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_types_2() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_types_2)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_m_types_2() const { return ___m_types_2; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_m_types_2() { return &___m_types_2; }
	inline void set_m_types_2(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___m_types_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_types_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_nameToIndex_3() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_nameToIndex_3)); }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * get_m_nameToIndex_3() const { return ___m_nameToIndex_3; }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 ** get_address_of_m_nameToIndex_3() { return &___m_nameToIndex_3; }
	inline void set_m_nameToIndex_3(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * value)
	{
		___m_nameToIndex_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_nameToIndex_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_currMember_4() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_currMember_4)); }
	inline int32_t get_m_currMember_4() const { return ___m_currMember_4; }
	inline int32_t* get_address_of_m_currMember_4() { return &___m_currMember_4; }
	inline void set_m_currMember_4(int32_t value)
	{
		___m_currMember_4 = value;
	}

	inline static int32_t get_offset_of_m_converter_5() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_converter_5)); }
	inline RuntimeObject* get_m_converter_5() const { return ___m_converter_5; }
	inline RuntimeObject** get_address_of_m_converter_5() { return &___m_converter_5; }
	inline void set_m_converter_5(RuntimeObject* value)
	{
		___m_converter_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_converter_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_fullTypeName_6() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_fullTypeName_6)); }
	inline String_t* get_m_fullTypeName_6() const { return ___m_fullTypeName_6; }
	inline String_t** get_address_of_m_fullTypeName_6() { return &___m_fullTypeName_6; }
	inline void set_m_fullTypeName_6(String_t* value)
	{
		___m_fullTypeName_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fullTypeName_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_assemName_7() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_assemName_7)); }
	inline String_t* get_m_assemName_7() const { return ___m_assemName_7; }
	inline String_t** get_address_of_m_assemName_7() { return &___m_assemName_7; }
	inline void set_m_assemName_7(String_t* value)
	{
		___m_assemName_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_assemName_7), (void*)value);
	}

	inline static int32_t get_offset_of_objectType_8() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___objectType_8)); }
	inline Type_t * get_objectType_8() const { return ___objectType_8; }
	inline Type_t ** get_address_of_objectType_8() { return &___objectType_8; }
	inline void set_objectType_8(Type_t * value)
	{
		___objectType_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectType_8), (void*)value);
	}

	inline static int32_t get_offset_of_isFullTypeNameSetExplicit_9() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___isFullTypeNameSetExplicit_9)); }
	inline bool get_isFullTypeNameSetExplicit_9() const { return ___isFullTypeNameSetExplicit_9; }
	inline bool* get_address_of_isFullTypeNameSetExplicit_9() { return &___isFullTypeNameSetExplicit_9; }
	inline void set_isFullTypeNameSetExplicit_9(bool value)
	{
		___isFullTypeNameSetExplicit_9 = value;
	}

	inline static int32_t get_offset_of_isAssemblyNameSetExplicit_10() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___isAssemblyNameSetExplicit_10)); }
	inline bool get_isAssemblyNameSetExplicit_10() const { return ___isAssemblyNameSetExplicit_10; }
	inline bool* get_address_of_isAssemblyNameSetExplicit_10() { return &___isAssemblyNameSetExplicit_10; }
	inline void set_isAssemblyNameSetExplicit_10(bool value)
	{
		___isAssemblyNameSetExplicit_10 = value;
	}

	inline static int32_t get_offset_of_requireSameTokenInPartialTrust_11() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___requireSameTokenInPartialTrust_11)); }
	inline bool get_requireSameTokenInPartialTrust_11() const { return ___requireSameTokenInPartialTrust_11; }
	inline bool* get_address_of_requireSameTokenInPartialTrust_11() { return &___requireSameTokenInPartialTrust_11; }
	inline void set_requireSameTokenInPartialTrust_11(bool value)
	{
		___requireSameTokenInPartialTrust_11 = value;
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


// System.UriHelper
struct UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D  : public RuntimeObject
{
public:

public:
};

struct UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_StaticFields
{
public:
	// System.Char[] System.UriHelper::HexUpperChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___HexUpperChars_0;

public:
	inline static int32_t get_offset_of_HexUpperChars_0() { return static_cast<int32_t>(offsetof(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_StaticFields, ___HexUpperChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_HexUpperChars_0() const { return ___HexUpperChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_HexUpperChars_0() { return &___HexUpperChars_0; }
	inline void set_HexUpperChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___HexUpperChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HexUpperChars_0), (void*)value);
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

// System.Security.Cryptography.X509Certificates.X509Utils
struct X509Utils_tC790ED685B9F900AAEC02480B011B3492CD44BE9  : public RuntimeObject
{
public:

public:
};


// System.Text.RegularExpressions.RegexCharClass/SingleRange
struct SingleRange_tEE8EA054843A8B8979D082D2CCC8E52A12155624  : public RuntimeObject
{
public:
	// System.Char System.Text.RegularExpressions.RegexCharClass/SingleRange::_first
	Il2CppChar ____first_0;
	// System.Char System.Text.RegularExpressions.RegexCharClass/SingleRange::_last
	Il2CppChar ____last_1;

public:
	inline static int32_t get_offset_of__first_0() { return static_cast<int32_t>(offsetof(SingleRange_tEE8EA054843A8B8979D082D2CCC8E52A12155624, ____first_0)); }
	inline Il2CppChar get__first_0() const { return ____first_0; }
	inline Il2CppChar* get_address_of__first_0() { return &____first_0; }
	inline void set__first_0(Il2CppChar value)
	{
		____first_0 = value;
	}

	inline static int32_t get_offset_of__last_1() { return static_cast<int32_t>(offsetof(SingleRange_tEE8EA054843A8B8979D082D2CCC8E52A12155624, ____last_1)); }
	inline Il2CppChar get__last_1() const { return ____last_1; }
	inline Il2CppChar* get_address_of__last_1() { return &____last_1; }
	inline void set__last_1(Il2CppChar value)
	{
		____last_1 = value;
	}
};


// System.Text.RegularExpressions.RegexCharClass/SingleRangeComparer
struct SingleRangeComparer_t2D22B185700E925165F9548B3647E0E1FC9DB075  : public RuntimeObject
{
public:

public:
};


// System.ComponentModel.TypeConverter/StandardValuesCollection
struct StandardValuesCollection_tB8B2368EBF592D624D7A07BE6C539DE9BA9A1FB1  : public RuntimeObject
{
public:

public:
};


// System.Uri/MoreInfo
struct MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727  : public RuntimeObject
{
public:
	// System.String System.Uri/MoreInfo::AbsoluteUri
	String_t* ___AbsoluteUri_0;
	// System.Int32 System.Uri/MoreInfo::Hash
	int32_t ___Hash_1;
	// System.String System.Uri/MoreInfo::RemoteUrl
	String_t* ___RemoteUrl_2;

public:
	inline static int32_t get_offset_of_AbsoluteUri_0() { return static_cast<int32_t>(offsetof(MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727, ___AbsoluteUri_0)); }
	inline String_t* get_AbsoluteUri_0() const { return ___AbsoluteUri_0; }
	inline String_t** get_address_of_AbsoluteUri_0() { return &___AbsoluteUri_0; }
	inline void set_AbsoluteUri_0(String_t* value)
	{
		___AbsoluteUri_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AbsoluteUri_0), (void*)value);
	}

	inline static int32_t get_offset_of_Hash_1() { return static_cast<int32_t>(offsetof(MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727, ___Hash_1)); }
	inline int32_t get_Hash_1() const { return ___Hash_1; }
	inline int32_t* get_address_of_Hash_1() { return &___Hash_1; }
	inline void set_Hash_1(int32_t value)
	{
		___Hash_1 = value;
	}

	inline static int32_t get_offset_of_RemoteUrl_2() { return static_cast<int32_t>(offsetof(MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727, ___RemoteUrl_2)); }
	inline String_t* get_RemoteUrl_2() const { return ___RemoteUrl_2; }
	inline String_t** get_address_of_RemoteUrl_2() { return &___RemoteUrl_2; }
	inline void set_RemoteUrl_2(String_t* value)
	{
		___RemoteUrl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RemoteUrl_2), (void*)value);
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


// System.Configuration.ConfigurationElementCollection
struct ConfigurationElementCollection_t09097ED83C909F1481AEF6E4451CF7595AFA403E  : public ConfigurationElement_t571C446CFDFF39CF17130653C433786BEFF25DFA
{
public:

public:
};


// System.Configuration.ConfigurationSection
struct ConfigurationSection_t0D68AA1EA007506253A4935DB9F357AF9B50C683  : public ConfigurationElement_t571C446CFDFF39CF17130653C433786BEFF25DFA
{
public:

public:
};


// System.Text.DecoderReplacementFallback
struct DecoderReplacementFallback_t8DA345EC4EF3A35A2667365F691EE69408A62130  : public DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D
{
public:
	// System.String System.Text.DecoderReplacementFallback::strDefault
	String_t* ___strDefault_4;

public:
	inline static int32_t get_offset_of_strDefault_4() { return static_cast<int32_t>(offsetof(DecoderReplacementFallback_t8DA345EC4EF3A35A2667365F691EE69408A62130, ___strDefault_4)); }
	inline String_t* get_strDefault_4() const { return ___strDefault_4; }
	inline String_t** get_address_of_strDefault_4() { return &___strDefault_4; }
	inline void set_strDefault_4(String_t* value)
	{
		___strDefault_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strDefault_4), (void*)value);
	}
};


// System.Text.EncoderReplacementFallback
struct EncoderReplacementFallback_t61E36A507D7FA8034B49F86DBE560EC77A6A8418  : public EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4
{
public:
	// System.String System.Text.EncoderReplacementFallback::strDefault
	String_t* ___strDefault_4;

public:
	inline static int32_t get_offset_of_strDefault_4() { return static_cast<int32_t>(offsetof(EncoderReplacementFallback_t61E36A507D7FA8034B49F86DBE560EC77A6A8418, ___strDefault_4)); }
	inline String_t* get_strDefault_4() const { return ___strDefault_4; }
	inline String_t** get_address_of_strDefault_4() { return &___strDefault_4; }
	inline void set_strDefault_4(String_t* value)
	{
		___strDefault_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strDefault_4), (void*)value);
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

// System.Int16
struct Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
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


// System.Security.Cryptography.SHA1
struct SHA1_t15B592B9935E19EC3FD5679B969239AC572E2C0E  : public HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31
{
public:

public:
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
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


// System.Net.Configuration.WebProxyScriptElement
struct WebProxyScriptElement_t6E2DB4259FF77920BA00BBA7AC7E0BAC995FD76F  : public ConfigurationElement_t571C446CFDFF39CF17130653C433786BEFF25DFA
{
public:

public:
};


// System.Net.Configuration.WebRequestModuleElement
struct WebRequestModuleElement_t4B7D6319D7B88AE61D59F549801BCE4EC4611F39  : public ConfigurationElement_t571C446CFDFF39CF17130653C433786BEFF25DFA
{
public:

public:
};


// System.Security.Cryptography.X509Certificates.X509Extension
struct X509Extension_t9142CAA11EB46CC4CAB51A26D3B84BDA06FA9FF5  : public AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA
{
public:
	// System.Boolean System.Security.Cryptography.X509Certificates.X509Extension::_critical
	bool ____critical_2;

public:
	inline static int32_t get_offset_of__critical_2() { return static_cast<int32_t>(offsetof(X509Extension_t9142CAA11EB46CC4CAB51A26D3B84BDA06FA9FF5, ____critical_2)); }
	inline bool get__critical_2() const { return ____critical_2; }
	inline bool* get_address_of__critical_2() { return &____critical_2; }
	inline void set__critical_2(bool value)
	{
		____critical_2 = value;
	}
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128
struct __StaticArrayInitTypeSizeU3D128_t2C1166FE3CC05212DD55648859D997CA8842A83B 
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
		uint8_t __StaticArrayInitTypeSizeU3D128_t2C1166FE3CC05212DD55648859D997CA8842A83B__padding[128];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct __StaticArrayInitTypeSizeU3D32_tD37BEF7101998702862991181C721026AB96A59F 
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
		uint8_t __StaticArrayInitTypeSizeU3D32_tD37BEF7101998702862991181C721026AB96A59F__padding[32];
	};

public:
};


// System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping
struct LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE 
{
public:
	// System.Char System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping::_chMin
	Il2CppChar ____chMin_0;
	// System.Char System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping::_chMax
	Il2CppChar ____chMax_1;
	// System.Int32 System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping::_lcOp
	int32_t ____lcOp_2;
	// System.Int32 System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping::_data
	int32_t ____data_3;

public:
	inline static int32_t get_offset_of__chMin_0() { return static_cast<int32_t>(offsetof(LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE, ____chMin_0)); }
	inline Il2CppChar get__chMin_0() const { return ____chMin_0; }
	inline Il2CppChar* get_address_of__chMin_0() { return &____chMin_0; }
	inline void set__chMin_0(Il2CppChar value)
	{
		____chMin_0 = value;
	}

	inline static int32_t get_offset_of__chMax_1() { return static_cast<int32_t>(offsetof(LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE, ____chMax_1)); }
	inline Il2CppChar get__chMax_1() const { return ____chMax_1; }
	inline Il2CppChar* get_address_of__chMax_1() { return &____chMax_1; }
	inline void set__chMax_1(Il2CppChar value)
	{
		____chMax_1 = value;
	}

	inline static int32_t get_offset_of__lcOp_2() { return static_cast<int32_t>(offsetof(LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE, ____lcOp_2)); }
	inline int32_t get__lcOp_2() const { return ____lcOp_2; }
	inline int32_t* get_address_of__lcOp_2() { return &____lcOp_2; }
	inline void set__lcOp_2(int32_t value)
	{
		____lcOp_2 = value;
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE, ____data_3)); }
	inline int32_t get__data_3() const { return ____data_3; }
	inline int32_t* get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(int32_t value)
	{
		____data_3 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping
struct LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE_marshaled_pinvoke
{
	uint8_t ____chMin_0;
	uint8_t ____chMax_1;
	int32_t ____lcOp_2;
	int32_t ____data_3;
};
// Native definition for COM marshalling of System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping
struct LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE_marshaled_com
{
	uint8_t ____chMin_0;
	uint8_t ____chMax_1;
	int32_t ____lcOp_2;
	int32_t ____data_3;
};

// System.Uri/Offset
#pragma pack(push, tp, 1)
struct Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 
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
	inline static int32_t get_offset_of_Scheme_0() { return static_cast<int32_t>(offsetof(Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5, ___Scheme_0)); }
	inline uint16_t get_Scheme_0() const { return ___Scheme_0; }
	inline uint16_t* get_address_of_Scheme_0() { return &___Scheme_0; }
	inline void set_Scheme_0(uint16_t value)
	{
		___Scheme_0 = value;
	}

	inline static int32_t get_offset_of_User_1() { return static_cast<int32_t>(offsetof(Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5, ___User_1)); }
	inline uint16_t get_User_1() const { return ___User_1; }
	inline uint16_t* get_address_of_User_1() { return &___User_1; }
	inline void set_User_1(uint16_t value)
	{
		___User_1 = value;
	}

	inline static int32_t get_offset_of_Host_2() { return static_cast<int32_t>(offsetof(Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5, ___Host_2)); }
	inline uint16_t get_Host_2() const { return ___Host_2; }
	inline uint16_t* get_address_of_Host_2() { return &___Host_2; }
	inline void set_Host_2(uint16_t value)
	{
		___Host_2 = value;
	}

	inline static int32_t get_offset_of_PortValue_3() { return static_cast<int32_t>(offsetof(Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5, ___PortValue_3)); }
	inline uint16_t get_PortValue_3() const { return ___PortValue_3; }
	inline uint16_t* get_address_of_PortValue_3() { return &___PortValue_3; }
	inline void set_PortValue_3(uint16_t value)
	{
		___PortValue_3 = value;
	}

	inline static int32_t get_offset_of_Path_4() { return static_cast<int32_t>(offsetof(Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5, ___Path_4)); }
	inline uint16_t get_Path_4() const { return ___Path_4; }
	inline uint16_t* get_address_of_Path_4() { return &___Path_4; }
	inline void set_Path_4(uint16_t value)
	{
		___Path_4 = value;
	}

	inline static int32_t get_offset_of_Query_5() { return static_cast<int32_t>(offsetof(Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5, ___Query_5)); }
	inline uint16_t get_Query_5() const { return ___Query_5; }
	inline uint16_t* get_address_of_Query_5() { return &___Query_5; }
	inline void set_Query_5(uint16_t value)
	{
		___Query_5 = value;
	}

	inline static int32_t get_offset_of_Fragment_6() { return static_cast<int32_t>(offsetof(Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5, ___Fragment_6)); }
	inline uint16_t get_Fragment_6() const { return ___Fragment_6; }
	inline uint16_t* get_address_of_Fragment_6() { return &___Fragment_6; }
	inline void set_Fragment_6(uint16_t value)
	{
		___Fragment_6 = value;
	}

	inline static int32_t get_offset_of_End_7() { return static_cast<int32_t>(offsetof(Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5, ___End_7)); }
	inline uint16_t get_End_7() const { return ___End_7; }
	inline uint16_t* get_address_of_End_7() { return &___End_7; }
	inline void set_End_7(uint16_t value)
	{
		___End_7 = value;
	}
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t1267FAF6E08D720F26ABF676554E6948A7F6A2D0  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t1267FAF6E08D720F26ABF676554E6948A7F6A2D0_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::59F5BD34B6C013DEACC784F69C67E95150033A84
	__StaticArrayInitTypeSizeU3D32_tD37BEF7101998702862991181C721026AB96A59F  ___59F5BD34B6C013DEACC784F69C67E95150033A84_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536
	__StaticArrayInitTypeSizeU3D32_tD37BEF7101998702862991181C721026AB96A59F  ___C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::CCEEADA43268372341F81AE0C9208C6856441C04
	__StaticArrayInitTypeSizeU3D128_t2C1166FE3CC05212DD55648859D997CA8842A83B  ___CCEEADA43268372341F81AE0C9208C6856441C04_2;
	// System.Int64 <PrivateImplementationDetails>::E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78
	int64_t ___E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_3;

public:
	inline static int32_t get_offset_of_U359F5BD34B6C013DEACC784F69C67E95150033A84_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1267FAF6E08D720F26ABF676554E6948A7F6A2D0_StaticFields, ___59F5BD34B6C013DEACC784F69C67E95150033A84_0)); }
	inline __StaticArrayInitTypeSizeU3D32_tD37BEF7101998702862991181C721026AB96A59F  get_U359F5BD34B6C013DEACC784F69C67E95150033A84_0() const { return ___59F5BD34B6C013DEACC784F69C67E95150033A84_0; }
	inline __StaticArrayInitTypeSizeU3D32_tD37BEF7101998702862991181C721026AB96A59F * get_address_of_U359F5BD34B6C013DEACC784F69C67E95150033A84_0() { return &___59F5BD34B6C013DEACC784F69C67E95150033A84_0; }
	inline void set_U359F5BD34B6C013DEACC784F69C67E95150033A84_0(__StaticArrayInitTypeSizeU3D32_tD37BEF7101998702862991181C721026AB96A59F  value)
	{
		___59F5BD34B6C013DEACC784F69C67E95150033A84_0 = value;
	}

	inline static int32_t get_offset_of_C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1267FAF6E08D720F26ABF676554E6948A7F6A2D0_StaticFields, ___C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_1)); }
	inline __StaticArrayInitTypeSizeU3D32_tD37BEF7101998702862991181C721026AB96A59F  get_C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_1() const { return ___C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_1; }
	inline __StaticArrayInitTypeSizeU3D32_tD37BEF7101998702862991181C721026AB96A59F * get_address_of_C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_1() { return &___C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_1; }
	inline void set_C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_1(__StaticArrayInitTypeSizeU3D32_tD37BEF7101998702862991181C721026AB96A59F  value)
	{
		___C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_1 = value;
	}

	inline static int32_t get_offset_of_CCEEADA43268372341F81AE0C9208C6856441C04_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1267FAF6E08D720F26ABF676554E6948A7F6A2D0_StaticFields, ___CCEEADA43268372341F81AE0C9208C6856441C04_2)); }
	inline __StaticArrayInitTypeSizeU3D128_t2C1166FE3CC05212DD55648859D997CA8842A83B  get_CCEEADA43268372341F81AE0C9208C6856441C04_2() const { return ___CCEEADA43268372341F81AE0C9208C6856441C04_2; }
	inline __StaticArrayInitTypeSizeU3D128_t2C1166FE3CC05212DD55648859D997CA8842A83B * get_address_of_CCEEADA43268372341F81AE0C9208C6856441C04_2() { return &___CCEEADA43268372341F81AE0C9208C6856441C04_2; }
	inline void set_CCEEADA43268372341F81AE0C9208C6856441C04_2(__StaticArrayInitTypeSizeU3D128_t2C1166FE3CC05212DD55648859D997CA8842A83B  value)
	{
		___CCEEADA43268372341F81AE0C9208C6856441C04_2 = value;
	}

	inline static int32_t get_offset_of_E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1267FAF6E08D720F26ABF676554E6948A7F6A2D0_StaticFields, ___E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_3)); }
	inline int64_t get_E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_3() const { return ___E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_3; }
	inline int64_t* get_address_of_E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_3() { return &___E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_3; }
	inline void set_E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_3(int64_t value)
	{
		___E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_3 = value;
	}
};


// System.Security.Cryptography.AsnDecodeStatus
struct AsnDecodeStatus_tBE4ADA7C45EBFD656BFEE0F04CAEC70A1C1BD15E 
{
public:
	// System.Int32 System.Security.Cryptography.AsnDecodeStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AsnDecodeStatus_tBE4ADA7C45EBFD656BFEE0F04CAEC70A1C1BD15E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// System.Security.Cryptography.OidGroup
struct OidGroup_tA8D8DA27353F8D70638E08569F65A34BCA3D5EB4 
{
public:
	// System.Int32 System.Security.Cryptography.OidGroup::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OidGroup_tA8D8DA27353F8D70638E08569F65A34BCA3D5EB4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// System.Runtime.Serialization.StreamingContextStates
struct StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.ComponentModel.TypeConverter
struct TypeConverter_t004F185B630F00F509F08BD8F8D82471867323B4  : public RuntimeObject
{
public:

public:
};

struct TypeConverter_t004F185B630F00F509F08BD8F8D82471867323B4_StaticFields
{
public:
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.TypeConverter::useCompatibleTypeConversion
	bool ___useCompatibleTypeConversion_1;

public:
	inline static int32_t get_offset_of_useCompatibleTypeConversion_1() { return static_cast<int32_t>(offsetof(TypeConverter_t004F185B630F00F509F08BD8F8D82471867323B4_StaticFields, ___useCompatibleTypeConversion_1)); }
	inline bool get_useCompatibleTypeConversion_1() const { return ___useCompatibleTypeConversion_1; }
	inline bool* get_address_of_useCompatibleTypeConversion_1() { return &___useCompatibleTypeConversion_1; }
	inline void set_useCompatibleTypeConversion_1(bool value)
	{
		___useCompatibleTypeConversion_1 = value;
	}
};


// System.UnescapeMode
struct UnescapeMode_tAAD72A439A031D63DA366126306CC0DDB9312850 
{
public:
	// System.Int32 System.UnescapeMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UnescapeMode_tAAD72A439A031D63DA366126306CC0DDB9312850, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriComponents
struct UriComponents_tA599793722A9810EC23036FF1B1B02A905B4EA76 
{
public:
	// System.Int32 System.UriComponents::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriComponents_tA599793722A9810EC23036FF1B1B02A905B4EA76, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriFormat
struct UriFormat_t25C936463BDE737B16A8EC3DA05091FC31F1A71F 
{
public:
	// System.Int32 System.UriFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriFormat_t25C936463BDE737B16A8EC3DA05091FC31F1A71F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// System.UriKind
struct UriKind_tFC16ACC1842283AAE2C7F50C9C70EFBF6550B3FC 
{
public:
	// System.Int32 System.UriKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriKind_tFC16ACC1842283AAE2C7F50C9C70EFBF6550B3FC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriSyntaxFlags
struct UriSyntaxFlags_t00ABF83A3AA06E5B670D3F73E3E87BC21F72044A 
{
public:
	// System.Int32 System.UriSyntaxFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriSyntaxFlags_t00ABF83A3AA06E5B670D3F73E3E87BC21F72044A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Configuration.WebRequestModuleElementCollection
struct WebRequestModuleElementCollection_tC1A60891298C544F74DA731DDEEFE603015C09C9  : public ConfigurationElementCollection_t09097ED83C909F1481AEF6E4451CF7595AFA403E
{
public:

public:
};


// System.Net.Configuration.WebRequestModulesSection
struct WebRequestModulesSection_t2F6BB673DEE919615116B391BA37F70831084603  : public ConfigurationSection_t0D68AA1EA007506253A4935DB9F357AF9B50C683
{
public:

public:
};


// System.Security.Cryptography.X509Certificates.X509KeyUsageFlags
struct X509KeyUsageFlags_tA10D2E023BB8086E102AE4EBE10CF84656A18849 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509KeyUsageFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(X509KeyUsageFlags_tA10D2E023BB8086E102AE4EBE10CF84656A18849, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm
struct X509SubjectKeyIdentifierHashAlgorithm_t38BCCB6F30D80F7CDF39B3A164129FDF81B11D29 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(X509SubjectKeyIdentifierHashAlgorithm_t38BCCB6F30D80F7CDF39B3A164129FDF81B11D29, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Uri/Check
struct Check_tEDA05554030AFFE9920C7E4C2233599B26DA74E8 
{
public:
	// System.Int32 System.Uri/Check::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Check_tEDA05554030AFFE9920C7E4C2233599B26DA74E8, ___value___2)); }
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


// System.Uri/UriInfo
struct UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45  : public RuntimeObject
{
public:
	// System.String System.Uri/UriInfo::Host
	String_t* ___Host_0;
	// System.String System.Uri/UriInfo::ScopeId
	String_t* ___ScopeId_1;
	// System.String System.Uri/UriInfo::String
	String_t* ___String_2;
	// System.Uri/Offset System.Uri/UriInfo::Offset
	Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5  ___Offset_3;
	// System.String System.Uri/UriInfo::DnsSafeHost
	String_t* ___DnsSafeHost_4;
	// System.Uri/MoreInfo System.Uri/UriInfo::MoreInfo
	MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727 * ___MoreInfo_5;

public:
	inline static int32_t get_offset_of_Host_0() { return static_cast<int32_t>(offsetof(UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45, ___Host_0)); }
	inline String_t* get_Host_0() const { return ___Host_0; }
	inline String_t** get_address_of_Host_0() { return &___Host_0; }
	inline void set_Host_0(String_t* value)
	{
		___Host_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Host_0), (void*)value);
	}

	inline static int32_t get_offset_of_ScopeId_1() { return static_cast<int32_t>(offsetof(UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45, ___ScopeId_1)); }
	inline String_t* get_ScopeId_1() const { return ___ScopeId_1; }
	inline String_t** get_address_of_ScopeId_1() { return &___ScopeId_1; }
	inline void set_ScopeId_1(String_t* value)
	{
		___ScopeId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ScopeId_1), (void*)value);
	}

	inline static int32_t get_offset_of_String_2() { return static_cast<int32_t>(offsetof(UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45, ___String_2)); }
	inline String_t* get_String_2() const { return ___String_2; }
	inline String_t** get_address_of_String_2() { return &___String_2; }
	inline void set_String_2(String_t* value)
	{
		___String_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___String_2), (void*)value);
	}

	inline static int32_t get_offset_of_Offset_3() { return static_cast<int32_t>(offsetof(UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45, ___Offset_3)); }
	inline Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5  get_Offset_3() const { return ___Offset_3; }
	inline Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * get_address_of_Offset_3() { return &___Offset_3; }
	inline void set_Offset_3(Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5  value)
	{
		___Offset_3 = value;
	}

	inline static int32_t get_offset_of_DnsSafeHost_4() { return static_cast<int32_t>(offsetof(UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45, ___DnsSafeHost_4)); }
	inline String_t* get_DnsSafeHost_4() const { return ___DnsSafeHost_4; }
	inline String_t** get_address_of_DnsSafeHost_4() { return &___DnsSafeHost_4; }
	inline void set_DnsSafeHost_4(String_t* value)
	{
		___DnsSafeHost_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DnsSafeHost_4), (void*)value);
	}

	inline static int32_t get_offset_of_MoreInfo_5() { return static_cast<int32_t>(offsetof(UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45, ___MoreInfo_5)); }
	inline MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727 * get_MoreInfo_5() const { return ___MoreInfo_5; }
	inline MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727 ** get_address_of_MoreInfo_5() { return &___MoreInfo_5; }
	inline void set_MoreInfo_5(MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727 * value)
	{
		___MoreInfo_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MoreInfo_5), (void*)value);
	}
};


// System.UriParser/UriQuirksVersion
struct UriQuirksVersion_t5A2A88A1D01D0CBC52BC12C612CC1A7F714E79B6 
{
public:
	// System.Int32 System.UriParser/UriQuirksVersion::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriQuirksVersion_t5A2A88A1D01D0CBC52BC12C612CC1A7F714E79B6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Security.Cryptography.Oid
struct Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800  : public RuntimeObject
{
public:
	// System.String System.Security.Cryptography.Oid::m_value
	String_t* ___m_value_0;
	// System.String System.Security.Cryptography.Oid::m_friendlyName
	String_t* ___m_friendlyName_1;
	// System.Security.Cryptography.OidGroup System.Security.Cryptography.Oid::m_group
	int32_t ___m_group_2;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800, ___m_value_0)); }
	inline String_t* get_m_value_0() const { return ___m_value_0; }
	inline String_t** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(String_t* value)
	{
		___m_value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_value_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_friendlyName_1() { return static_cast<int32_t>(offsetof(Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800, ___m_friendlyName_1)); }
	inline String_t* get_m_friendlyName_1() const { return ___m_friendlyName_1; }
	inline String_t** get_address_of_m_friendlyName_1() { return &___m_friendlyName_1; }
	inline void set_m_friendlyName_1(String_t* value)
	{
		___m_friendlyName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_friendlyName_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_group_2() { return static_cast<int32_t>(offsetof(Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800, ___m_group_2)); }
	inline int32_t get_m_group_2() const { return ___m_group_2; }
	inline int32_t* get_address_of_m_group_2() { return &___m_group_2; }
	inline void set_m_group_2(int32_t value)
	{
		___m_group_2 = value;
	}
};


// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 
{
public:
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject * ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;

public:
	inline static int32_t get_offset_of_m_additionalContext_0() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_additionalContext_0)); }
	inline RuntimeObject * get_m_additionalContext_0() const { return ___m_additionalContext_0; }
	inline RuntimeObject ** get_address_of_m_additionalContext_0() { return &___m_additionalContext_0; }
	inline void set_m_additionalContext_0(RuntimeObject * value)
	{
		___m_additionalContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_additionalContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_state_1() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_state_1)); }
	inline int32_t get_m_state_1() const { return ___m_state_1; }
	inline int32_t* get_address_of_m_state_1() { return &___m_state_1; }
	inline void set_m_state_1(int32_t value)
	{
		___m_state_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
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


// System.UriParser
struct UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A  : public RuntimeObject
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
	inline static int32_t get_offset_of_m_Flags_2() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A, ___m_Flags_2)); }
	inline int32_t get_m_Flags_2() const { return ___m_Flags_2; }
	inline int32_t* get_address_of_m_Flags_2() { return &___m_Flags_2; }
	inline void set_m_Flags_2(int32_t value)
	{
		___m_Flags_2 = value;
	}

	inline static int32_t get_offset_of_m_UpdatableFlags_3() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A, ___m_UpdatableFlags_3)); }
	inline int32_t get_m_UpdatableFlags_3() const { return ___m_UpdatableFlags_3; }
	inline int32_t* get_address_of_m_UpdatableFlags_3() { return &___m_UpdatableFlags_3; }
	inline void set_m_UpdatableFlags_3(int32_t value)
	{
		___m_UpdatableFlags_3 = value;
	}

	inline static int32_t get_offset_of_m_UpdatableFlagsUsed_4() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A, ___m_UpdatableFlagsUsed_4)); }
	inline bool get_m_UpdatableFlagsUsed_4() const { return ___m_UpdatableFlagsUsed_4; }
	inline bool* get_address_of_m_UpdatableFlagsUsed_4() { return &___m_UpdatableFlagsUsed_4; }
	inline void set_m_UpdatableFlagsUsed_4(bool value)
	{
		___m_UpdatableFlagsUsed_4 = value;
	}

	inline static int32_t get_offset_of_m_Port_5() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A, ___m_Port_5)); }
	inline int32_t get_m_Port_5() const { return ___m_Port_5; }
	inline int32_t* get_address_of_m_Port_5() { return &___m_Port_5; }
	inline void set_m_Port_5(int32_t value)
	{
		___m_Port_5 = value;
	}

	inline static int32_t get_offset_of_m_Scheme_6() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A, ___m_Scheme_6)); }
	inline String_t* get_m_Scheme_6() const { return ___m_Scheme_6; }
	inline String_t** get_address_of_m_Scheme_6() { return &___m_Scheme_6; }
	inline void set_m_Scheme_6(String_t* value)
	{
		___m_Scheme_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Scheme_6), (void*)value);
	}
};

struct UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.UriParser> System.UriParser::m_Table
	Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * ___m_Table_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.UriParser> System.UriParser::m_TempTable
	Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * ___m_TempTable_1;
	// System.UriParser System.UriParser::HttpUri
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___HttpUri_7;
	// System.UriParser System.UriParser::HttpsUri
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___HttpsUri_8;
	// System.UriParser System.UriParser::WsUri
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___WsUri_9;
	// System.UriParser System.UriParser::WssUri
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___WssUri_10;
	// System.UriParser System.UriParser::FtpUri
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___FtpUri_11;
	// System.UriParser System.UriParser::FileUri
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___FileUri_12;
	// System.UriParser System.UriParser::GopherUri
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___GopherUri_13;
	// System.UriParser System.UriParser::NntpUri
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___NntpUri_14;
	// System.UriParser System.UriParser::NewsUri
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___NewsUri_15;
	// System.UriParser System.UriParser::MailToUri
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___MailToUri_16;
	// System.UriParser System.UriParser::UuidUri
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___UuidUri_17;
	// System.UriParser System.UriParser::TelnetUri
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___TelnetUri_18;
	// System.UriParser System.UriParser::LdapUri
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___LdapUri_19;
	// System.UriParser System.UriParser::NetTcpUri
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___NetTcpUri_20;
	// System.UriParser System.UriParser::NetPipeUri
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___NetPipeUri_21;
	// System.UriParser System.UriParser::VsMacrosUri
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___VsMacrosUri_22;
	// System.UriParser/UriQuirksVersion System.UriParser::s_QuirksVersion
	int32_t ___s_QuirksVersion_23;
	// System.UriSyntaxFlags System.UriParser::HttpSyntaxFlags
	int32_t ___HttpSyntaxFlags_24;
	// System.UriSyntaxFlags System.UriParser::FileSyntaxFlags
	int32_t ___FileSyntaxFlags_25;

public:
	inline static int32_t get_offset_of_m_Table_0() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___m_Table_0)); }
	inline Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * get_m_Table_0() const { return ___m_Table_0; }
	inline Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 ** get_address_of_m_Table_0() { return &___m_Table_0; }
	inline void set_m_Table_0(Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * value)
	{
		___m_Table_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Table_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_TempTable_1() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___m_TempTable_1)); }
	inline Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * get_m_TempTable_1() const { return ___m_TempTable_1; }
	inline Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 ** get_address_of_m_TempTable_1() { return &___m_TempTable_1; }
	inline void set_m_TempTable_1(Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * value)
	{
		___m_TempTable_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempTable_1), (void*)value);
	}

	inline static int32_t get_offset_of_HttpUri_7() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___HttpUri_7)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_HttpUri_7() const { return ___HttpUri_7; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_HttpUri_7() { return &___HttpUri_7; }
	inline void set_HttpUri_7(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___HttpUri_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HttpUri_7), (void*)value);
	}

	inline static int32_t get_offset_of_HttpsUri_8() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___HttpsUri_8)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_HttpsUri_8() const { return ___HttpsUri_8; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_HttpsUri_8() { return &___HttpsUri_8; }
	inline void set_HttpsUri_8(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___HttpsUri_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HttpsUri_8), (void*)value);
	}

	inline static int32_t get_offset_of_WsUri_9() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___WsUri_9)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_WsUri_9() const { return ___WsUri_9; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_WsUri_9() { return &___WsUri_9; }
	inline void set_WsUri_9(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___WsUri_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WsUri_9), (void*)value);
	}

	inline static int32_t get_offset_of_WssUri_10() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___WssUri_10)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_WssUri_10() const { return ___WssUri_10; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_WssUri_10() { return &___WssUri_10; }
	inline void set_WssUri_10(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___WssUri_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WssUri_10), (void*)value);
	}

	inline static int32_t get_offset_of_FtpUri_11() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___FtpUri_11)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_FtpUri_11() const { return ___FtpUri_11; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_FtpUri_11() { return &___FtpUri_11; }
	inline void set_FtpUri_11(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___FtpUri_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FtpUri_11), (void*)value);
	}

	inline static int32_t get_offset_of_FileUri_12() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___FileUri_12)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_FileUri_12() const { return ___FileUri_12; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_FileUri_12() { return &___FileUri_12; }
	inline void set_FileUri_12(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___FileUri_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FileUri_12), (void*)value);
	}

	inline static int32_t get_offset_of_GopherUri_13() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___GopherUri_13)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_GopherUri_13() const { return ___GopherUri_13; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_GopherUri_13() { return &___GopherUri_13; }
	inline void set_GopherUri_13(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___GopherUri_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GopherUri_13), (void*)value);
	}

	inline static int32_t get_offset_of_NntpUri_14() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___NntpUri_14)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_NntpUri_14() const { return ___NntpUri_14; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_NntpUri_14() { return &___NntpUri_14; }
	inline void set_NntpUri_14(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___NntpUri_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NntpUri_14), (void*)value);
	}

	inline static int32_t get_offset_of_NewsUri_15() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___NewsUri_15)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_NewsUri_15() const { return ___NewsUri_15; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_NewsUri_15() { return &___NewsUri_15; }
	inline void set_NewsUri_15(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___NewsUri_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NewsUri_15), (void*)value);
	}

	inline static int32_t get_offset_of_MailToUri_16() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___MailToUri_16)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_MailToUri_16() const { return ___MailToUri_16; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_MailToUri_16() { return &___MailToUri_16; }
	inline void set_MailToUri_16(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___MailToUri_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MailToUri_16), (void*)value);
	}

	inline static int32_t get_offset_of_UuidUri_17() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___UuidUri_17)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_UuidUri_17() const { return ___UuidUri_17; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_UuidUri_17() { return &___UuidUri_17; }
	inline void set_UuidUri_17(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___UuidUri_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UuidUri_17), (void*)value);
	}

	inline static int32_t get_offset_of_TelnetUri_18() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___TelnetUri_18)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_TelnetUri_18() const { return ___TelnetUri_18; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_TelnetUri_18() { return &___TelnetUri_18; }
	inline void set_TelnetUri_18(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___TelnetUri_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TelnetUri_18), (void*)value);
	}

	inline static int32_t get_offset_of_LdapUri_19() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___LdapUri_19)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_LdapUri_19() const { return ___LdapUri_19; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_LdapUri_19() { return &___LdapUri_19; }
	inline void set_LdapUri_19(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___LdapUri_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LdapUri_19), (void*)value);
	}

	inline static int32_t get_offset_of_NetTcpUri_20() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___NetTcpUri_20)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_NetTcpUri_20() const { return ___NetTcpUri_20; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_NetTcpUri_20() { return &___NetTcpUri_20; }
	inline void set_NetTcpUri_20(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___NetTcpUri_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NetTcpUri_20), (void*)value);
	}

	inline static int32_t get_offset_of_NetPipeUri_21() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___NetPipeUri_21)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_NetPipeUri_21() const { return ___NetPipeUri_21; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_NetPipeUri_21() { return &___NetPipeUri_21; }
	inline void set_NetPipeUri_21(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___NetPipeUri_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NetPipeUri_21), (void*)value);
	}

	inline static int32_t get_offset_of_VsMacrosUri_22() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___VsMacrosUri_22)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_VsMacrosUri_22() const { return ___VsMacrosUri_22; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_VsMacrosUri_22() { return &___VsMacrosUri_22; }
	inline void set_VsMacrosUri_22(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___VsMacrosUri_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VsMacrosUri_22), (void*)value);
	}

	inline static int32_t get_offset_of_s_QuirksVersion_23() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___s_QuirksVersion_23)); }
	inline int32_t get_s_QuirksVersion_23() const { return ___s_QuirksVersion_23; }
	inline int32_t* get_address_of_s_QuirksVersion_23() { return &___s_QuirksVersion_23; }
	inline void set_s_QuirksVersion_23(int32_t value)
	{
		___s_QuirksVersion_23 = value;
	}

	inline static int32_t get_offset_of_HttpSyntaxFlags_24() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___HttpSyntaxFlags_24)); }
	inline int32_t get_HttpSyntaxFlags_24() const { return ___HttpSyntaxFlags_24; }
	inline int32_t* get_address_of_HttpSyntaxFlags_24() { return &___HttpSyntaxFlags_24; }
	inline void set_HttpSyntaxFlags_24(int32_t value)
	{
		___HttpSyntaxFlags_24 = value;
	}

	inline static int32_t get_offset_of_FileSyntaxFlags_25() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___FileSyntaxFlags_25)); }
	inline int32_t get_FileSyntaxFlags_25() const { return ___FileSyntaxFlags_25; }
	inline int32_t* get_address_of_FileSyntaxFlags_25() { return &___FileSyntaxFlags_25; }
	inline void set_FileSyntaxFlags_25(int32_t value)
	{
		___FileSyntaxFlags_25 = value;
	}
};


// System.UriTypeConverter
struct UriTypeConverter_tF512B4F48E57AC42B460E2847743CD78F4D24694  : public TypeConverter_t004F185B630F00F509F08BD8F8D82471867323B4
{
public:

public:
};


// System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension
struct X509BasicConstraintsExtension_t790FA4E7D9715A72A621A290FF0CDD5A647EF3CF  : public X509Extension_t9142CAA11EB46CC4CAB51A26D3B84BDA06FA9FF5
{
public:
	// System.Boolean System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::_certificateAuthority
	bool ____certificateAuthority_5;
	// System.Boolean System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::_hasPathLengthConstraint
	bool ____hasPathLengthConstraint_6;
	// System.Int32 System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::_pathLengthConstraint
	int32_t ____pathLengthConstraint_7;
	// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::_status
	int32_t ____status_8;

public:
	inline static int32_t get_offset_of__certificateAuthority_5() { return static_cast<int32_t>(offsetof(X509BasicConstraintsExtension_t790FA4E7D9715A72A621A290FF0CDD5A647EF3CF, ____certificateAuthority_5)); }
	inline bool get__certificateAuthority_5() const { return ____certificateAuthority_5; }
	inline bool* get_address_of__certificateAuthority_5() { return &____certificateAuthority_5; }
	inline void set__certificateAuthority_5(bool value)
	{
		____certificateAuthority_5 = value;
	}

	inline static int32_t get_offset_of__hasPathLengthConstraint_6() { return static_cast<int32_t>(offsetof(X509BasicConstraintsExtension_t790FA4E7D9715A72A621A290FF0CDD5A647EF3CF, ____hasPathLengthConstraint_6)); }
	inline bool get__hasPathLengthConstraint_6() const { return ____hasPathLengthConstraint_6; }
	inline bool* get_address_of__hasPathLengthConstraint_6() { return &____hasPathLengthConstraint_6; }
	inline void set__hasPathLengthConstraint_6(bool value)
	{
		____hasPathLengthConstraint_6 = value;
	}

	inline static int32_t get_offset_of__pathLengthConstraint_7() { return static_cast<int32_t>(offsetof(X509BasicConstraintsExtension_t790FA4E7D9715A72A621A290FF0CDD5A647EF3CF, ____pathLengthConstraint_7)); }
	inline int32_t get__pathLengthConstraint_7() const { return ____pathLengthConstraint_7; }
	inline int32_t* get_address_of__pathLengthConstraint_7() { return &____pathLengthConstraint_7; }
	inline void set__pathLengthConstraint_7(int32_t value)
	{
		____pathLengthConstraint_7 = value;
	}

	inline static int32_t get_offset_of__status_8() { return static_cast<int32_t>(offsetof(X509BasicConstraintsExtension_t790FA4E7D9715A72A621A290FF0CDD5A647EF3CF, ____status_8)); }
	inline int32_t get__status_8() const { return ____status_8; }
	inline int32_t* get_address_of__status_8() { return &____status_8; }
	inline void set__status_8(int32_t value)
	{
		____status_8 = value;
	}
};


// System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension
struct X509EnhancedKeyUsageExtension_tD53B0C2AF93C2496461F2960946C5F40A33AC82B  : public X509Extension_t9142CAA11EB46CC4CAB51A26D3B84BDA06FA9FF5
{
public:
	// System.Security.Cryptography.OidCollection System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::_enhKeyUsage
	OidCollection_tA091E185B8840648BE96A6C547F0C26F88E3A902 * ____enhKeyUsage_3;
	// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::_status
	int32_t ____status_4;

public:
	inline static int32_t get_offset_of__enhKeyUsage_3() { return static_cast<int32_t>(offsetof(X509EnhancedKeyUsageExtension_tD53B0C2AF93C2496461F2960946C5F40A33AC82B, ____enhKeyUsage_3)); }
	inline OidCollection_tA091E185B8840648BE96A6C547F0C26F88E3A902 * get__enhKeyUsage_3() const { return ____enhKeyUsage_3; }
	inline OidCollection_tA091E185B8840648BE96A6C547F0C26F88E3A902 ** get_address_of__enhKeyUsage_3() { return &____enhKeyUsage_3; }
	inline void set__enhKeyUsage_3(OidCollection_tA091E185B8840648BE96A6C547F0C26F88E3A902 * value)
	{
		____enhKeyUsage_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____enhKeyUsage_3), (void*)value);
	}

	inline static int32_t get_offset_of__status_4() { return static_cast<int32_t>(offsetof(X509EnhancedKeyUsageExtension_tD53B0C2AF93C2496461F2960946C5F40A33AC82B, ____status_4)); }
	inline int32_t get__status_4() const { return ____status_4; }
	inline int32_t* get_address_of__status_4() { return &____status_4; }
	inline void set__status_4(int32_t value)
	{
		____status_4 = value;
	}
};


// System.Security.Cryptography.X509Certificates.X509KeyUsageExtension
struct X509KeyUsageExtension_tF78A71F87AEE0E0DC54DFF837AB2880E3D9CF227  : public X509Extension_t9142CAA11EB46CC4CAB51A26D3B84BDA06FA9FF5
{
public:
	// System.Security.Cryptography.X509Certificates.X509KeyUsageFlags System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::_keyUsages
	int32_t ____keyUsages_6;
	// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::_status
	int32_t ____status_7;

public:
	inline static int32_t get_offset_of__keyUsages_6() { return static_cast<int32_t>(offsetof(X509KeyUsageExtension_tF78A71F87AEE0E0DC54DFF837AB2880E3D9CF227, ____keyUsages_6)); }
	inline int32_t get__keyUsages_6() const { return ____keyUsages_6; }
	inline int32_t* get_address_of__keyUsages_6() { return &____keyUsages_6; }
	inline void set__keyUsages_6(int32_t value)
	{
		____keyUsages_6 = value;
	}

	inline static int32_t get_offset_of__status_7() { return static_cast<int32_t>(offsetof(X509KeyUsageExtension_tF78A71F87AEE0E0DC54DFF837AB2880E3D9CF227, ____status_7)); }
	inline int32_t get__status_7() const { return ____status_7; }
	inline int32_t* get_address_of__status_7() { return &____status_7; }
	inline void set__status_7(int32_t value)
	{
		____status_7 = value;
	}
};


// System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension
struct X509SubjectKeyIdentifierExtension_t9781D24066D84C09C7137124FBC848491BF54567  : public X509Extension_t9142CAA11EB46CC4CAB51A26D3B84BDA06FA9FF5
{
public:
	// System.Byte[] System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::_subjectKeyIdentifier
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____subjectKeyIdentifier_5;
	// System.String System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::_ski
	String_t* ____ski_6;
	// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::_status
	int32_t ____status_7;

public:
	inline static int32_t get_offset_of__subjectKeyIdentifier_5() { return static_cast<int32_t>(offsetof(X509SubjectKeyIdentifierExtension_t9781D24066D84C09C7137124FBC848491BF54567, ____subjectKeyIdentifier_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__subjectKeyIdentifier_5() const { return ____subjectKeyIdentifier_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__subjectKeyIdentifier_5() { return &____subjectKeyIdentifier_5; }
	inline void set__subjectKeyIdentifier_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____subjectKeyIdentifier_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____subjectKeyIdentifier_5), (void*)value);
	}

	inline static int32_t get_offset_of__ski_6() { return static_cast<int32_t>(offsetof(X509SubjectKeyIdentifierExtension_t9781D24066D84C09C7137124FBC848491BF54567, ____ski_6)); }
	inline String_t* get__ski_6() const { return ____ski_6; }
	inline String_t** get_address_of__ski_6() { return &____ski_6; }
	inline void set__ski_6(String_t* value)
	{
		____ski_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ski_6), (void*)value);
	}

	inline static int32_t get_offset_of__status_7() { return static_cast<int32_t>(offsetof(X509SubjectKeyIdentifierExtension_t9781D24066D84C09C7137124FBC848491BF54567, ____status_7)); }
	inline int32_t get__status_7() const { return ____status_7; }
	inline int32_t* get_address_of__status_7() { return &____status_7; }
	inline void set__status_7(int32_t value)
	{
		____status_7 = value;
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


// System.Security.Cryptography.CryptographicException
struct CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.Runtime.InteropServices.ExternalException
struct ExternalException_tC18275DD0AEB2CDF9F85D94670C5A49A4DC3B783  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.FormatException
struct FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.NotImplementedException
struct NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.UriParser/BuiltInUriParser
struct BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26  : public UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A
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


// System.UriFormatException
struct UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D  : public FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759
{
public:

public:
};


// System.ComponentModel.Win32Exception
struct Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950  : public ExternalException_tC18275DD0AEB2CDF9F85D94670C5A49A4DC3B783
{
public:
	// System.Int32 System.ComponentModel.Win32Exception::nativeErrorCode
	int32_t ___nativeErrorCode_17;

public:
	inline static int32_t get_offset_of_nativeErrorCode_17() { return static_cast<int32_t>(offsetof(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950, ___nativeErrorCode_17)); }
	inline int32_t get_nativeErrorCode_17() const { return ___nativeErrorCode_17; }
	inline int32_t* get_address_of_nativeErrorCode_17() { return &___nativeErrorCode_17; }
	inline void set_nativeErrorCode_17(int32_t value)
	{
		___nativeErrorCode_17 = value;
	}
};

struct Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields
{
public:
	// System.Boolean System.ComponentModel.Win32Exception::s_ErrorMessagesInitialized
	bool ___s_ErrorMessagesInitialized_18;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.String> System.ComponentModel.Win32Exception::s_ErrorMessage
	Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * ___s_ErrorMessage_19;

public:
	inline static int32_t get_offset_of_s_ErrorMessagesInitialized_18() { return static_cast<int32_t>(offsetof(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields, ___s_ErrorMessagesInitialized_18)); }
	inline bool get_s_ErrorMessagesInitialized_18() const { return ___s_ErrorMessagesInitialized_18; }
	inline bool* get_address_of_s_ErrorMessagesInitialized_18() { return &___s_ErrorMessagesInitialized_18; }
	inline void set_s_ErrorMessagesInitialized_18(bool value)
	{
		___s_ErrorMessagesInitialized_18 = value;
	}

	inline static int32_t get_offset_of_s_ErrorMessage_19() { return static_cast<int32_t>(offsetof(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields, ___s_ErrorMessage_19)); }
	inline Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * get_s_ErrorMessage_19() const { return ___s_ErrorMessage_19; }
	inline Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB ** get_address_of_s_ErrorMessage_19() { return &___s_ErrorMessage_19; }
	inline void set_s_ErrorMessage_19(Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * value)
	{
		___s_ErrorMessage_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ErrorMessage_19), (void*)value);
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


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mBD7199657787018123B7B8F2B048B503D484C097_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m39BC00F21EE9459BB8DEF5479F95F79C5C740682_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, const RuntimeMethod* method);

// System.Void System.FormatException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormatException__ctor_m782FDB1A7F0BA932C9937FDB8E936D0E4724AA67 (FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759 * __this, const RuntimeMethod* method);
// System.Void System.FormatException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormatException__ctor_mB8F9A26F985EF9A6C0C082F7D70CFDF2DBDBB23B (FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.FormatException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormatException__ctor_m9D50D1A9FC1B72427455B7FFBDB80198D996667F (FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method);
// System.Void System.Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception_GetObjectData_m2031046D41E7BEE3C743E918B358A336F99D6882 (Exception_t * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method);
// System.String SR::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462 (String_t* ___name0, const RuntimeMethod* method);
// System.Void System.UriFormatException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriFormatException__ctor_mC9CB29EF00CB33869659306AC3FCA69342FD044F (UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * __this, String_t* ___textString0, const RuntimeMethod* method);
// System.Int32 System.Runtime.CompilerServices.RuntimeHelpers::get_OffsetToStringData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuntimeHelpers_get_OffsetToStringData_mEB8E6EAEBAFAB7CD7F7A915B3081785AABB9FC42 (const RuntimeMethod* method);
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// System.Char[] System.UriHelper::EnsureDestinationSize(System.Char*,System.Char[],System.Int32,System.Int16,System.Int16,System.Int32&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* UriHelper_EnsureDestinationSize_mE185843AD5B8A829F920147F03FB252CF06129B4 (Il2CppChar* ___pStr0, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___dest1, int32_t ___currentInputPos2, int16_t ___charsToAdd3, int16_t ___minReallocateChars4, int32_t* ___destPos5, int32_t ___prevInputPos6, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E (const RuntimeMethod* method);
// System.Void System.UriHelper::EscapeAsciiChar(System.Char,System.Char[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriHelper_EscapeAsciiChar_m7590A6410A9F1AE1207006EF9B46578E1A3DFD33 (Il2CppChar ___ch0, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___to1, int32_t* ___pos2, const RuntimeMethod* method);
// System.Char System.UriHelper::EscapedAscii(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar UriHelper_EscapedAscii_m80D926F5C8B177B5D041BBFEADEAB2363A324461 (Il2CppChar ___digit0, Il2CppChar ___next1, const RuntimeMethod* method);
// System.Boolean System.UriHelper::IsUnreserved(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UriHelper_IsUnreserved_m6B1C0AA7DEC462F62400ACFC7EFC5807730CD5B1 (Il2CppChar ___c0, const RuntimeMethod* method);
// System.Boolean System.UriHelper::IsReservedUnreservedOrHash(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UriHelper_IsReservedUnreservedOrHash_m155B0658622E15DED0A384A2E6A6013CE23016D6 (Il2CppChar ___c0, const RuntimeMethod* method);
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725 (RuntimeArray * ___src0, int32_t ___srcOffset1, RuntimeArray * ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method);
// System.Char[] System.UriHelper::UnescapeString(System.Char*,System.Int32,System.Int32,System.Char[],System.Int32&,System.Char,System.Char,System.Char,System.UnescapeMode,System.UriParser,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* UriHelper_UnescapeString_m92E5C90E7DAE8DA5C7C1E6FB72B0F58321B6484C (Il2CppChar* ___pStr0, int32_t ___start1, int32_t ___end2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___dest3, int32_t* ___destPosition4, Il2CppChar ___rsvd15, Il2CppChar ___rsvd26, Il2CppChar ___rsvd37, int32_t ___unescapeMode8, UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___syntax9, bool ___isQuery10, const RuntimeMethod* method);
// System.Boolean System.Uri::IriParsingStatic(System.UriParser)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_IriParsingStatic_m0F2797FEA328A2B1A72EE03F9BD88C577A7A0471 (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___syntax0, const RuntimeMethod* method);
// System.Boolean System.UriHelper::IsNotSafeForUnescape(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UriHelper_IsNotSafeForUnescape_m5504A36A2CC19ABC23255896A98D9912D390107F (Il2CppChar ___ch0, const RuntimeMethod* method);
// System.Boolean System.IriHelper::CheckIriUnicodeRange(System.Char,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IriHelper_CheckIriUnicodeRange_m5E205B2F096045DE5259E0E98A062DD0813206F6 (Il2CppChar ___unicode0, bool ___isQuery1, const RuntimeMethod* method);
// System.Void System.Text.EncoderReplacementFallback::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncoderReplacementFallback__ctor_m07299910DC3D3F6B9F8F37A4ADD40A500F97D1D4 (EncoderReplacementFallback_t61E36A507D7FA8034B49F86DBE560EC77A6A8418 * __this, String_t* ___replacement0, const RuntimeMethod* method);
// System.Void System.Text.Encoding::set_EncoderFallback(System.Text.EncoderFallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoding_set_EncoderFallback_m75BA39C6302BD7EFBB4A48B02C406A14789B244A (Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * __this, EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___value0, const RuntimeMethod* method);
// System.Void System.Text.DecoderReplacementFallback::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecoderReplacementFallback__ctor_m7E6C273B2682E373C787568EB0BB0B2E4B6C2253 (DecoderReplacementFallback_t8DA345EC4EF3A35A2667365F691EE69408A62130 * __this, String_t* ___replacement0, const RuntimeMethod* method);
// System.Void System.Text.Encoding::set_DecoderFallback(System.Text.DecoderFallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoding_set_DecoderFallback_m771EA02DA99D57E19B6FC48E8C3A46F8A6D4CBB8 (Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * __this, DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___value0, const RuntimeMethod* method);
// System.Void System.UriHelper::MatchUTF8Sequence(System.Char*,System.Char[],System.Int32&,System.Char[],System.Int32,System.Byte[],System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriHelper_MatchUTF8Sequence_m4A148931E07097731DC7EA68EAA933E9330BE81B (Il2CppChar* ___pDest0, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___dest1, int32_t* ___destOffset2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___unescapedChars3, int32_t ___charCount4, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes5, int32_t ___byteCount6, bool ___isQuery7, bool ___iriParsing8, const RuntimeMethod* method);
// System.Boolean System.Char::IsHighSurrogate(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsHighSurrogate_m7BECD1C98C902946F069D8936F8A557F1F7DFF01 (Il2CppChar ___c0, const RuntimeMethod* method);
// System.Boolean System.IriHelper::CheckIriUnicodeRange(System.Char,System.Char,System.Boolean&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IriHelper_CheckIriUnicodeRange_m03144D55C396E2870F76F85B29852F8314346A1A (Il2CppChar ___highSurr0, Il2CppChar ___lowSurr1, bool* ___surrogatePair2, bool ___isQuery3, const RuntimeMethod* method);
// System.Boolean System.Uri::IsBidiControlCharacter(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_IsBidiControlCharacter_m36A30E0708EE0209208B23136C2BEC9C802C697B (Il2CppChar ___ch0, const RuntimeMethod* method);
// System.Boolean System.UriParser::get_ShouldUseLegacyV2Quirks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UriParser_get_ShouldUseLegacyV2Quirks_mB8917CAC10CD13E44F2EB21D4033044BEAF132B2 (const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Boolean System.Uri::IsAsciiLetterOrDigit(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_IsAsciiLetterOrDigit_m1DDFA9F464FD15F8482F0C669E7E22B20DE07DCA (Il2CppChar ___character0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F (RuntimeArray * ___array0, RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  ___fldHandle1, const RuntimeMethod* method);
// System.UriFormatException System.Uri::ParseMinimal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * Uri_ParseMinimal_m47FF7ACAEB543DE87332F9DEA79F92ADC575107F (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.Boolean System.Uri::get_UserDrivenParsing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_get_UserDrivenParsing_mF09087D4DE9A0823EBF1FC0C14101335D01393F2 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.String SR::GetString(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetString_m4FFAF18248A54C5B67E4760C5ED4869A87BCAD7F (String_t* ___name0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean System.Uri::get_IsAbsoluteUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_get_IsAbsoluteUri_m013346D65055CFEDF9E742534A584573C18A0E25 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.Uri System.Uri::ResolveHelper(System.Uri,System.Uri,System.String&,System.Boolean&,System.UriFormatException&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * Uri_ResolveHelper_m2C5CDF42841B464E75B3AA102A24BABA8B51698E (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___baseUri0, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___relativeUri1, String_t** ___newUriString2, bool* ___userEscaped3, UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D ** ___e4, const RuntimeMethod* method);
// System.Boolean System.Uri::op_Inequality(System.Uri,System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_op_Inequality_m3B3733CAA19866A20EF76A772B368EFB5FC89A4F (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___uri10, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___uri21, const RuntimeMethod* method);
// System.String System.Uri::get_OriginalString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_OriginalString_mBD94B4BB84AE9C051C1CA8BA33C14D5BAD25B0AC (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m7C5B3BE7792B7C73E7D82C4DBAD4ACA2DAE71AA9 (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, RuntimeObject * ___actualValue1, String_t* ___message2, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.String System.Uri::GetComponentsHelper(System.UriComponents,System.UriFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_GetComponentsHelper_mAA39E421157735AAD7D93A187CCCAED5A122C8E8 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, int32_t ___uriComponents0, int32_t ___uriFormat1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.UriParser>::.ctor(System.Int32)
inline void Dictionary_2__ctor_mEF275C708A9D8C75BE351DE8D63068D20522B707 (Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 *, int32_t, const RuntimeMethod*))Dictionary_2__ctor_mBD7199657787018123B7B8F2B048B503D484C097_gshared)(__this, ___capacity0, method);
}
// System.Void System.UriParser/BuiltInUriParser::.ctor(System.String,System.Int32,System.UriSyntaxFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuiltInUriParser__ctor_m525296A62BB8A30ABA12A9DFE8C20CE22DA9CEAA (BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 * __this, String_t* ___lwrCaseScheme0, int32_t ___defaultPort1, int32_t ___syntaxFlags2, const RuntimeMethod* method);
// System.String System.UriParser::get_SchemeName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* UriParser_get_SchemeName_mFCD123235673631E05FE9BAF6955A0B43EEEBD80_inline (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.UriParser>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993 (Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * __this, String_t* ___key0, UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 *, String_t*, UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A *, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.UriParser::IsFullMatch(System.UriSyntaxFlags,System.UriSyntaxFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UriParser_IsFullMatch_m3967BB43AFB5C11B75DA3BD1CE18B8DAE8F0C32E (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * __this, int32_t ___flags0, int32_t ___expected1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.UriParser>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m05B3B2E9A02468956D9D51C30093821BFBC3C63A (Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * __this, String_t* ___key0, UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 *, String_t*, UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A **, const RuntimeMethod*))Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.UriParser>::get_Count()
inline int32_t Dictionary_2_get_Count_mC890D4862BCE096F4E905A751AEE39B30478357C (Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 *, const RuntimeMethod*))Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA_gshared)(__this, method);
}
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.UriParser::InFact(System.UriSyntaxFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UriParser_InFact_m4E58BAFAB5A9BC24854C815FC093E16D4F1CFA4D (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * __this, int32_t ___flags0, const RuntimeMethod* method);
// System.Void System.ComponentModel.TypeConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConverter__ctor_mCD87E569A2C4CB1331A069396FFA98E65726A16C (TypeConverter_t004F185B630F00F509F08BD8F8D82471867323B4 * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Int32 System.Runtime.InteropServices.Marshal::GetLastWin32Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_GetLastWin32Error_m87DFFDB64662B46C9CF913EC08E5CEFF3A6E314D (const RuntimeMethod* method);
// System.Void System.ComponentModel.Win32Exception::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Win32Exception__ctor_mF8FAD9681BA8B2EFBD1EDA7C690764FF60E85A6F (Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950 * __this, int32_t ___error0, const RuntimeMethod* method);
// System.String System.ComponentModel.Win32Exception::GetErrorMessage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Win32Exception_GetErrorMessage_m97F829AC1253FC3BAD24E9F484ECA9F227360C9A (int32_t ___error0, const RuntimeMethod* method);
// System.Void System.ComponentModel.Win32Exception::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Win32Exception__ctor_mC836B11093135ABE3B7F402DCD0564E58B8CDA02 (Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950 * __this, int32_t ___error0, String_t* ___message1, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.ExternalException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalException__ctor_m8A6870938AE42D989A00B950B2F298F70FD32AAA (ExternalException_tC18275DD0AEB2CDF9F85D94670C5A49A4DC3B783 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.ExternalException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalException__ctor_mF237400F375CB6BA1857B5C5EE7419AA59069184 (ExternalException_tC18275DD0AEB2CDF9F85D94670C5A49A4DC3B783 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method);
// System.Int32 System.Runtime.Serialization.SerializationInfo::GetInt32(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializationInfo_GetInt32_mB22BBD01CBC189B7A76465CBFF7224F619395D30 (SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m3DF5B182A63FFCD12287E97EA38944D0C6405BB5 (SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method);
// System.Void System.ComponentModel.Win32Exception::InitializeErrorMessages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Win32Exception_InitializeErrorMessages_mDC8118C693BE2CA20C9E9D5822BEFAC621F3C535 (const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.String>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mA9A5AC6DC5483E78A8A41145515BF11AF259409E (Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * __this, int32_t ___key0, String_t** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB *, int32_t, String_t**, const RuntimeMethod*))Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared)(__this, ___key0, ___value1, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void System.ComponentModel.Win32Exception::InitializeErrorMessages1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Win32Exception_InitializeErrorMessages1_mDB6558EB5202E7110C6702CC1837399830906C89 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::Add(!0,!1)
inline void Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0 (Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * __this, int32_t ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB *, int32_t, String_t*, const RuntimeMethod*))Dictionary_2_Add_m39BC00F21EE9459BB8DEF5479F95F79C5C740682_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::.ctor()
inline void Dictionary_2__ctor_mB40672A269C34DB22BA5BFAF2511631483E1690E (Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB *, const RuntimeMethod*))Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared)(__this, method);
}
// System.Void System.Security.Cryptography.X509Certificates.X509Extension::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Extension__ctor_m4DF31A0909F64A47F2F8E64E814FE16E022794E7 (X509Extension_t9142CAA11EB46CC4CAB51A26D3B84BDA06FA9FF5 * __this, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.Oid::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Oid__ctor_m90964DEF8B3A9EEFAB59023627E2008E4A34983E (Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 * __this, String_t* ___value0, String_t* ___friendlyName1, const RuntimeMethod* method);
// System.Byte[] System.Security.Cryptography.AsnEncodedData::get_RawData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* AsnEncodedData_get_RawData_mDCA2B393570BA050D3840B2449447A2C10639278_inline (AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA * __this, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.X509Certificates.X509Extension::set_Critical(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void X509Extension_set_Critical_mF361A9EB776A20CA39923BD48C4A492A734144E0_inline (X509Extension_t9142CAA11EB46CC4CAB51A26D3B84BDA06FA9FF5 * __this, bool ___value0, const RuntimeMethod* method);
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::Decode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509BasicConstraintsExtension_Decode_m02EECEF97728108FE014735EDAD8C74B8461B384 (X509BasicConstraintsExtension_t790FA4E7D9715A72A621A290FF0CDD5A647EF3CF * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___extension0, const RuntimeMethod* method);
// System.Byte[] System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::Encode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* X509BasicConstraintsExtension_Encode_mC5E34F1B66DE0BCBD7C524C968C2C010B566843C (X509BasicConstraintsExtension_t790FA4E7D9715A72A621A290FF0CDD5A647EF3CF * __this, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.AsnEncodedData::set_RawData(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsnEncodedData_set_RawData_m867F92C32F87E4D8932D17EDF21785CA0FDA3BEA (AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.CryptographicException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CryptographicException__ctor_mE6D40FE819914DA1C6600907D160AD4231B46C31 (CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.String Locale::GetText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Locale_GetText_mF8FE147379A36330B41A5D5E2CAD23C18931E66E (String_t* ___msg0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.Oid::.ctor(System.Security.Cryptography.Oid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Oid__ctor_m8C4B7AE0D9207BCF03960553182B43B8D1536ED0 (Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 * __this, Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 * ___oid0, const RuntimeMethod* method);
// System.Boolean System.Security.Cryptography.X509Certificates.X509Extension::get_Critical()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool X509Extension_get_Critical_m56CF11BDF0C2D2917C326013630709C7709DCF12_inline (X509Extension_t9142CAA11EB46CC4CAB51A26D3B84BDA06FA9FF5 * __this, const RuntimeMethod* method);
// System.Void Mono.Security.ASN1::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ASN1__ctor_mE534D499DABEAAA35E0F30572CD295A9FCFA1C7E (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method);
// Mono.Security.ASN1 Mono.Security.ASN1::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50 (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Byte Mono.Security.ASN1::get_Tag()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t ASN1_get_Tag_mA82F15B6EB97BF0F3EBAA69C21765909D7A675D3_inline (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * __this, const RuntimeMethod* method);
// System.Byte[] Mono.Security.ASN1::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ASN1_get_Value_m95545A82635424B999816713F09A224ED01DF0C2 (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * __this, const RuntimeMethod* method);
// System.Int32 Mono.Security.ASN1Convert::ToInt32(Mono.Security.ASN1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ASN1Convert_ToInt32_m381CC48A18572F6F58C4332C3E07906562034A77 (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * ___asn10, const RuntimeMethod* method);
// System.Void Mono.Security.ASN1::.ctor(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ASN1__ctor_mC8594B7A2376B58F26F1D0457B0F9F5880D87142 (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * __this, uint8_t ___tag0, const RuntimeMethod* method);
// System.Void Mono.Security.ASN1::.ctor(System.Byte,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ASN1__ctor_mB8A19279E6079D30BB6A594ADAC7FEE89E822CDC (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * __this, uint8_t ___tag0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data1, const RuntimeMethod* method);
// Mono.Security.ASN1 Mono.Security.ASN1::Add(Mono.Security.ASN1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * ASN1_Add_m35AB44F469BE9C185A91D2E265A7DA6B27311F7B (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * __this, ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * ___asn10, const RuntimeMethod* method);
// Mono.Security.ASN1 Mono.Security.ASN1Convert::FromInt32(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * ASN1Convert_FromInt32_m2EB0E4A8D3D06D4EE1BEFD4F50E9021FF6B82FA2 (int32_t ___value0, const RuntimeMethod* method);
// System.String System.Security.Cryptography.X509Certificates.X509Extension::FormatUnkownData(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509Extension_FormatUnkownData_mEF1E719F7AD312B099351C581F4A06925AD9F18A (X509Extension_t9142CAA11EB46CC4CAB51A26D3B84BDA06FA9FF5 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method);
// System.String System.Security.Cryptography.Oid::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Oid_get_Value_mD6F4D8AC1A3821D5DA263728C2DC0C208D084A78_inline (Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.Environment::get_NewLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_get_NewLine_mD145C8EE917C986BAA7C5243DEFAF4D333C521B4 (const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m796285D173EEA5261E85B95FC79DD4F996CC93DD (StringBuilder_t * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::Decode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509EnhancedKeyUsageExtension_Decode_m610C0C741966205F6DC0492BD17B28E1FED8D648 (X509EnhancedKeyUsageExtension_tD53B0C2AF93C2496461F2960946C5F40A33AC82B * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___extension0, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.OidCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OidCollection__ctor_m99E1CCEB955F4BB57DEAE0BF8E7326380F93E111 (OidCollection_tA091E185B8840648BE96A6C547F0C26F88E3A902 * __this, const RuntimeMethod* method);
// System.String Mono.Security.ASN1Convert::ToOid(Mono.Security.ASN1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ASN1Convert_ToOid_m6F617C7AC370CC5D6EAC2F813D8F7B73A3D8F61F (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * ___asn10, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.Oid::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Oid__ctor_mDB319C52BC09ED73F02F5BEC5950F728059405C2 (Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 * __this, String_t* ___oid0, const RuntimeMethod* method);
// System.Int32 System.Security.Cryptography.OidCollection::Add(System.Security.Cryptography.Oid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OidCollection_Add_m13C7466BB24E047C88F27AC6AB5E9439AA491EF1 (OidCollection_tA091E185B8840648BE96A6C547F0C26F88E3A902 * __this, Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 * ___oid0, const RuntimeMethod* method);
// System.Int32 Mono.Security.ASN1::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ASN1_get_Count_mBF134B153CFA218C251FB692A25AA392DCF9F583 (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * __this, const RuntimeMethod* method);
// System.Int32 System.Security.Cryptography.OidCollection::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OidCollection_get_Count_m35D85FFEC009FD8195DA9E0EE0CD5B66290FA3C6 (OidCollection_tA091E185B8840648BE96A6C547F0C26F88E3A902 * __this, const RuntimeMethod* method);
// System.Security.Cryptography.Oid System.Security.Cryptography.OidCollection::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 * OidCollection_get_Item_mB8F51EB0825BDE39504BC7090B8AEEE13D0A9967 (OidCollection_tA091E185B8840648BE96A6C547F0C26F88E3A902 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.AsnEncodedData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsnEncodedData__ctor_m0CF86C874705C96B224222BEBB6BF5703EAB29E2 (AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA * __this, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.AsnEncodedData::CopyFrom(System.Security.Cryptography.AsnEncodedData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsnEncodedData_CopyFrom_mA350785B8AF676AB7856E705FA2F2D20FD54CC46 (AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA * __this, AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA * ___asnEncodedData0, const RuntimeMethod* method);
// System.String System.Byte::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Byte_ToString_mABEF6F24915951FF4A4D87B389D8418B2638178C (uint8_t* __this, String_t* ___format0, const RuntimeMethod* method);
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::Decode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509KeyUsageExtension_Decode_m8D2236720B86833EAFCB87C19BF616E84A15A385 (X509KeyUsageExtension_tF78A71F87AEE0E0DC54DFF837AB2880E3D9CF227 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___extension0, const RuntimeMethod* method);
// System.Security.Cryptography.X509Certificates.X509KeyUsageFlags System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::GetValidFlags(System.Security.Cryptography.X509Certificates.X509KeyUsageFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509KeyUsageExtension_GetValidFlags_m3141215EE841412F2C65E9CD7C90AE26E4D05C9A (X509KeyUsageExtension_tF78A71F87AEE0E0DC54DFF837AB2880E3D9CF227 * __this, int32_t ___flags0, const RuntimeMethod* method);
// System.Byte[] System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::Encode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* X509KeyUsageExtension_Encode_m14D2F2E0777C7CFA424399E66349940A923764E5 (X509KeyUsageExtension_tF78A71F87AEE0E0DC54DFF837AB2880E3D9CF227 * __this, const RuntimeMethod* method);
// System.Int32 System.Text.StringBuilder::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::Decode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509SubjectKeyIdentifierExtension_Decode_m6ED45FB642F2A5EDAD51EE357CAB8EB95BC8EBA9 (X509SubjectKeyIdentifierExtension_t9781D24066D84C09C7137124FBC848491BF54567 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___extension0, const RuntimeMethod* method);
// System.Object System.Array::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Array_Clone_m3C566B3D3F4333212411BD7C3B61D798BADB3F3C (RuntimeArray * __this, const RuntimeMethod* method);
// System.Byte[] System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::Encode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* X509SubjectKeyIdentifierExtension_Encode_m6BEC26EF891B31FF98EF4FDF96CC0E9CEDF0B208 (X509SubjectKeyIdentifierExtension_t9781D24066D84C09C7137124FBC848491BF54567 * __this, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Byte[] System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHex(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* X509SubjectKeyIdentifierExtension_FromHex_m8CAB896F210E058270EB9492F05D2776FEB6A1EA (String_t* ___hex0, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.X509Certificates.PublicKey,System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509SubjectKeyIdentifierExtension__ctor_m7CE599E8BEFBF176243E07100E2B9D1AD40E109E (X509SubjectKeyIdentifierExtension_t9781D24066D84C09C7137124FBC848491BF54567 * __this, PublicKey_t40ABE7E0985F3E274C9564670970EC6F3B39A4A2 * ___key0, int32_t ___algorithm1, bool ___critical2, const RuntimeMethod* method);
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA * PublicKey_get_EncodedKeyValue_m0294AF8C29C7329BEB243543D8FDA98B60FDB291_inline (PublicKey_t40ABE7E0985F3E274C9564670970EC6F3B39A4A2 * __this, const RuntimeMethod* method);
// System.Security.Cryptography.SHA1 System.Security.Cryptography.SHA1::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SHA1_t15B592B9935E19EC3FD5679B969239AC572E2C0E * SHA1_Create_mC0C045956B56FC33D44AF7146C0E1DF27A3D102A (const RuntimeMethod* method);
// System.Byte[] System.Security.Cryptography.HashAlgorithm::ComputeHash(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* HashAlgorithm_ComputeHash_m54AE40F9CD9E46736384369DBB5739FBCBDF67D9 (HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, const RuntimeMethod* method);
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 * PublicKey_get_Oid_mE3207B84A9090EC5404F6CD4AEABB1F37EC1F988_inline (PublicKey_t40ABE7E0985F3E274C9564670970EC6F3B39A4A2 * __this, const RuntimeMethod* method);
// System.Byte[] System.Security.Cryptography.CryptoConfig::EncodeOID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* CryptoConfig_EncodeOID_mD433EFD5608689AA7A858351D34DB7EEDBE1494B (String_t* ___str0, const RuntimeMethod* method);
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA * PublicKey_get_EncodedParameters_mFF4F9A39D91C0A00D1B36C93944816154C7255B3_inline (PublicKey_t40ABE7E0985F3E274C9564670970EC6F3B39A4A2 * __this, const RuntimeMethod* method);
// System.String Mono.Security.Cryptography.CryptoConvert::ToHex(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CryptoConvert_ToHex_m567E8BF67E972F8A8AC9DC37BEE4F06521082EF4 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___input0, const RuntimeMethod* method);
// System.Byte System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHexChar(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t X509SubjectKeyIdentifierExtension_FromHexChar_m7E53F7E025E6DD03B6BC137CA6F9C43808BFAB92 (Il2CppChar ___c0, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Byte System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHexChars(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t X509SubjectKeyIdentifierExtension_FromHexChars_mB25E5A16CF6637BF846D2B22898E552E092AADFA (Il2CppChar ___c10, Il2CppChar ___c21, const RuntimeMethod* method);
// System.String System.Security.Cryptography.CAPI::CryptFindOIDInfoNameFromKey(System.String,System.Security.Cryptography.OidGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_CryptFindOIDInfoNameFromKey_m283438D1BC7309F1642EBCE405CC9BFAEED43544 (String_t* ___key0, int32_t ___oidGroup1, const RuntimeMethod* method);
// System.String System.Security.Cryptography.CAPI::CryptFindOIDInfoKeyFromName(System.String,System.Security.Cryptography.OidGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_CryptFindOIDInfoKeyFromName_m4ED4943191307DF7392E82CE3E04C5A5777EA3AB (String_t* ___name0, int32_t ___oidGroup1, const RuntimeMethod* method);
// System.String System.UInt32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt32_ToString_mEB55F257429D34ED2BF41AE9567096F1F969B9A0 (uint32_t* __this, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m8A9AA4499614A5BC57DD21713D0720630C130AEB (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.String System.Security.Cryptography.X509Certificates.X509Utils::FindOidInfo(System.UInt32,System.String,System.Security.Cryptography.OidGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509Utils_FindOidInfo_m7CC1462A6CC9DA7C40CA09FA5EACEE9B9117EC8C (uint32_t ___keyType0, String_t* ___keyValue1, int32_t ___oidGroup2, const RuntimeMethod* method);
// System.Void System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping::.ctor(System.Char,System.Char,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowerCaseMapping__ctor_m0236442CB5098331DEAE7CACFCAC42741945D3E8 (LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE * __this, Il2CppChar ___chMin0, Il2CppChar ___chMax1, int32_t ___lcOp2, int32_t ___data3, const RuntimeMethod* method);
// System.Void System.UriParser::.ctor(System.UriSyntaxFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriParser__ctor_m9A2C47C1F30EF65ADFBAEB0A569FB972F383825C (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * __this, int32_t ___flags0, const RuntimeMethod* method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriFormatException__ctor_m2B9D2DCA45C6A4C42CAC0DF830E3448E1F67D9DD (UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * __this, const RuntimeMethod* method)
{
	{
		FormatException__ctor_m782FDB1A7F0BA932C9937FDB8E936D0E4724AA67(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UriFormatException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriFormatException__ctor_mC9CB29EF00CB33869659306AC3FCA69342FD044F (UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * __this, String_t* ___textString0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___textString0;
		FormatException__ctor_mB8F9A26F985EF9A6C0C082F7D70CFDF2DBDBB23B(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UriFormatException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriFormatException__ctor_mE91E0D915423F0506A5C6AB2885ECA712669A02D (UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___serializationInfo0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___streamingContext1, const RuntimeMethod* method)
{
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___serializationInfo0;
		StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  L_1 = ___streamingContext1;
		FormatException__ctor_m9D50D1A9FC1B72427455B7FFBDB80198D996667F(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UriFormatException::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriFormatException_System_Runtime_Serialization_ISerializable_GetObjectData_m064FAD00616310EEE1CBA5BE4B438F73C9EF489B (UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___serializationInfo0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___streamingContext1, const RuntimeMethod* method)
{
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___serializationInfo0;
		StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  L_1 = ___streamingContext1;
		Exception_GetObjectData_m2031046D41E7BEE3C743E918B358A336F99D6882(__this, L_0, L_1, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* UriHelper_EscapeString_m322E8737F58BBAF891A75032EC1800BE548F84D7 (String_t* ___input0, int32_t ___start1, int32_t ___end2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___dest3, int32_t* ___destPos4, bool ___isUriString5, Il2CppChar ___force16, Il2CppChar ___force27, Il2CppChar ___rsvd8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
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
		String_t* L_2;
		L_2 = SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDDA0FEDECC3765A8D5F295C4B302D615D29F3483)), /*hidden argument*/NULL);
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * L_3 = (UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D_il2cpp_TypeInfo_var)));
		UriFormatException__ctor_mC9CB29EF00CB33869659306AC3FCA69342FD044F(L_3, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UriHelper_EscapeString_m322E8737F58BBAF891A75032EC1800BE548F84D7_RuntimeMethod_var)));
	}

IL_001a:
	{
		int32_t L_4 = ___start1;
		V_0 = L_4;
		int32_t L_5 = ___start1;
		V_1 = L_5;
		int8_t* L_6 = (int8_t*) alloca(((uintptr_t)((int32_t)160)));
		memset(L_6, 0, ((uintptr_t)((int32_t)160)));
		V_2 = (uint8_t*)(L_6);
		String_t* L_7 = ___input0;
		V_4 = L_7;
		String_t* L_8 = V_4;
		V_3 = (Il2CppChar*)((uintptr_t)L_8);
		Il2CppChar* L_9 = V_3;
		if (!L_9)
		{
			goto IL_0250;
		}
	}
	{
		Il2CppChar* L_10 = V_3;
		int32_t L_11;
		L_11 = RuntimeHelpers_get_OffsetToStringData_mEB8E6EAEBAFAB7CD7F7A915B3081785AABB9FC42(/*hidden argument*/NULL);
		V_3 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_10, (int32_t)L_11));
		goto IL_0250;
	}

IL_0041:
	{
		Il2CppChar* L_12 = V_3;
		int32_t L_13 = V_0;
		int32_t L_14 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_12, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_13), (int32_t)2)))));
		V_5 = L_14;
		Il2CppChar L_15 = V_5;
		if ((((int32_t)L_15) <= ((int32_t)((int32_t)127))))
		{
			goto IL_0140;
		}
	}
	{
		int32_t L_16 = ___end2;
		int32_t L_17 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_18;
		L_18 = Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574(((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)L_17)), ((int32_t)39), /*hidden argument*/NULL);
		V_6 = ((int16_t)((int16_t)L_18));
		V_7 = (int16_t)1;
		goto IL_006c;
	}

IL_0065:
	{
		int16_t L_19 = V_7;
		V_7 = ((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1))));
	}

IL_006c:
	{
		int16_t L_20 = V_7;
		int16_t L_21 = V_6;
		if ((((int32_t)L_20) >= ((int32_t)L_21)))
		{
			goto IL_0080;
		}
	}
	{
		Il2CppChar* L_22 = V_3;
		int32_t L_23 = V_0;
		int16_t L_24 = V_7;
		int32_t L_25 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_22, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)L_24))), (int32_t)2)))));
		if ((((int32_t)L_25) > ((int32_t)((int32_t)127))))
		{
			goto IL_0065;
		}
	}

IL_0080:
	{
		Il2CppChar* L_26 = V_3;
		int32_t L_27 = V_0;
		int16_t L_28 = V_7;
		int32_t L_29 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_26, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)L_28)), (int32_t)1))), (int32_t)2)))));
		if ((((int32_t)L_29) < ((int32_t)((int32_t)55296))))
		{
			goto IL_00c9;
		}
	}
	{
		Il2CppChar* L_30 = V_3;
		int32_t L_31 = V_0;
		int16_t L_32 = V_7;
		int32_t L_33 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_30, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)L_32)), (int32_t)1))), (int32_t)2)))));
		if ((((int32_t)L_33) > ((int32_t)((int32_t)56319))))
		{
			goto IL_00c9;
		}
	}
	{
		int16_t L_34 = V_7;
		if ((((int32_t)L_34) == ((int32_t)1)))
		{
			goto IL_00b2;
		}
	}
	{
		int16_t L_35 = V_7;
		int32_t L_36 = ___end2;
		int32_t L_37 = V_0;
		if ((!(((uint32_t)L_35) == ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_36, (int32_t)L_37))))))
		{
			goto IL_00c2;
		}
	}

IL_00b2:
	{
		String_t* L_38;
		L_38 = SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCC86C197E0FEFBC58402C83C0D74784A5C39CD74)), /*hidden argument*/NULL);
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * L_39 = (UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D_il2cpp_TypeInfo_var)));
		UriFormatException__ctor_mC9CB29EF00CB33869659306AC3FCA69342FD044F(L_39, L_38, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_39, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UriHelper_EscapeString_m322E8737F58BBAF891A75032EC1800BE548F84D7_RuntimeMethod_var)));
	}

IL_00c2:
	{
		int16_t L_40 = V_7;
		V_7 = ((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1))));
	}

IL_00c9:
	{
		Il2CppChar* L_41 = V_3;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_42 = ___dest3;
		int32_t L_43 = V_0;
		int16_t L_44 = V_7;
		int32_t* L_45 = ___destPos4;
		int32_t L_46 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_47;
		L_47 = UriHelper_EnsureDestinationSize_mE185843AD5B8A829F920147F03FB252CF06129B4((Il2CppChar*)(Il2CppChar*)L_41, L_42, L_43, ((int16_t)((int16_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_44, (int32_t)4)), (int32_t)3)))), (int16_t)((int32_t)480), (int32_t*)L_45, L_46, /*hidden argument*/NULL);
		___dest3 = L_47;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_48;
		L_48 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		Il2CppChar* L_49 = V_3;
		int32_t L_50 = V_0;
		int16_t L_51 = V_7;
		uint8_t* L_52 = V_2;
		NullCheck(L_48);
		int32_t L_53;
		L_53 = VirtFuncInvoker4< int32_t, Il2CppChar*, int32_t, uint8_t*, int32_t >::Invoke(28 /* System.Int32 System.Text.Encoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32) */, L_48, (Il2CppChar*)(Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_49, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_50), (int32_t)2)))), L_51, (uint8_t*)(uint8_t*)L_52, ((int32_t)160));
		V_8 = ((int16_t)((int16_t)L_53));
		int16_t L_54 = V_8;
		if (L_54)
		{
			goto IL_0111;
		}
	}
	{
		String_t* L_55;
		L_55 = SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCC86C197E0FEFBC58402C83C0D74784A5C39CD74)), /*hidden argument*/NULL);
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * L_56 = (UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D_il2cpp_TypeInfo_var)));
		UriFormatException__ctor_mC9CB29EF00CB33869659306AC3FCA69342FD044F(L_56, L_55, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_56, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UriHelper_EscapeString_m322E8737F58BBAF891A75032EC1800BE548F84D7_RuntimeMethod_var)));
	}

IL_0111:
	{
		int32_t L_57 = V_0;
		int16_t L_58 = V_7;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_58, (int32_t)1))));
		V_7 = (int16_t)0;
		goto IL_0131;
	}

IL_011d:
	{
		uint8_t* L_59 = V_2;
		int16_t L_60 = V_7;
		int32_t L_61 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_59, (int32_t)L_60)));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_62 = ___dest3;
		int32_t* L_63 = ___destPos4;
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		UriHelper_EscapeAsciiChar_m7590A6410A9F1AE1207006EF9B46578E1A3DFD33(L_61, L_62, (int32_t*)L_63, /*hidden argument*/NULL);
		int16_t L_64 = V_7;
		V_7 = ((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)1))));
	}

IL_0131:
	{
		int16_t L_65 = V_7;
		int16_t L_66 = V_8;
		if ((((int32_t)L_65) < ((int32_t)L_66)))
		{
			goto IL_011d;
		}
	}
	{
		int32_t L_67 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_67, (int32_t)1));
		goto IL_024c;
	}

IL_0140:
	{
		Il2CppChar L_68 = V_5;
		if ((!(((uint32_t)L_68) == ((uint32_t)((int32_t)37)))))
		{
			goto IL_01e0;
		}
	}
	{
		Il2CppChar L_69 = ___rsvd8;
		if ((!(((uint32_t)L_69) == ((uint32_t)((int32_t)37)))))
		{
			goto IL_01e0;
		}
	}
	{
		Il2CppChar* L_70 = V_3;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_71 = ___dest3;
		int32_t L_72 = V_0;
		int32_t* L_73 = ___destPos4;
		int32_t L_74 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_75;
		L_75 = UriHelper_EnsureDestinationSize_mE185843AD5B8A829F920147F03FB252CF06129B4((Il2CppChar*)(Il2CppChar*)L_70, L_71, L_72, (int16_t)3, (int16_t)((int32_t)120), (int32_t*)L_73, L_74, /*hidden argument*/NULL);
		___dest3 = L_75;
		int32_t L_76 = V_0;
		int32_t L_77 = ___end2;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)2))) >= ((int32_t)L_77)))
		{
			goto IL_01d0;
		}
	}
	{
		Il2CppChar* L_78 = V_3;
		int32_t L_79 = V_0;
		int32_t L_80 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_78, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_79, (int32_t)1))), (int32_t)2)))));
		Il2CppChar* L_81 = V_3;
		int32_t L_82 = V_0;
		int32_t L_83 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_81, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_82, (int32_t)2))), (int32_t)2)))));
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		Il2CppChar L_84;
		L_84 = UriHelper_EscapedAscii_m80D926F5C8B177B5D041BBFEADEAB2363A324461(L_80, L_83, /*hidden argument*/NULL);
		if ((((int32_t)L_84) == ((int32_t)((int32_t)65535))))
		{
			goto IL_01d0;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_85 = ___dest3;
		int32_t* L_86 = ___destPos4;
		int32_t* L_87 = ___destPos4;
		int32_t L_88 = *((int32_t*)L_87);
		V_9 = L_88;
		int32_t L_89 = V_9;
		*((int32_t*)L_86) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_89, (int32_t)1));
		int32_t L_90 = V_9;
		NullCheck(L_85);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(L_90), (Il2CppChar)((int32_t)37));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_91 = ___dest3;
		int32_t* L_92 = ___destPos4;
		int32_t* L_93 = ___destPos4;
		int32_t L_94 = *((int32_t*)L_93);
		V_9 = L_94;
		int32_t L_95 = V_9;
		*((int32_t*)L_92) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_95, (int32_t)1));
		int32_t L_96 = V_9;
		Il2CppChar* L_97 = V_3;
		int32_t L_98 = V_0;
		int32_t L_99 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_97, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_98, (int32_t)1))), (int32_t)2)))));
		NullCheck(L_91);
		(L_91)->SetAt(static_cast<il2cpp_array_size_t>(L_96), (Il2CppChar)L_99);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_100 = ___dest3;
		int32_t* L_101 = ___destPos4;
		int32_t* L_102 = ___destPos4;
		int32_t L_103 = *((int32_t*)L_102);
		V_9 = L_103;
		int32_t L_104 = V_9;
		*((int32_t*)L_101) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_104, (int32_t)1));
		int32_t L_105 = V_9;
		Il2CppChar* L_106 = V_3;
		int32_t L_107 = V_0;
		int32_t L_108 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_106, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_107, (int32_t)2))), (int32_t)2)))));
		NullCheck(L_100);
		(L_100)->SetAt(static_cast<il2cpp_array_size_t>(L_105), (Il2CppChar)L_108);
		int32_t L_109 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_109, (int32_t)2));
		goto IL_01da;
	}

IL_01d0:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_110 = ___dest3;
		int32_t* L_111 = ___destPos4;
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		UriHelper_EscapeAsciiChar_m7590A6410A9F1AE1207006EF9B46578E1A3DFD33(((int32_t)37), L_110, (int32_t*)L_111, /*hidden argument*/NULL);
	}

IL_01da:
	{
		int32_t L_112 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_112, (int32_t)1));
		goto IL_024c;
	}

IL_01e0:
	{
		Il2CppChar L_113 = V_5;
		Il2CppChar L_114 = ___force16;
		if ((((int32_t)L_113) == ((int32_t)L_114)))
		{
			goto IL_01ec;
		}
	}
	{
		Il2CppChar L_115 = V_5;
		Il2CppChar L_116 = ___force27;
		if ((!(((uint32_t)L_115) == ((uint32_t)L_116))))
		{
			goto IL_020c;
		}
	}

IL_01ec:
	{
		Il2CppChar* L_117 = V_3;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_118 = ___dest3;
		int32_t L_119 = V_0;
		int32_t* L_120 = ___destPos4;
		int32_t L_121 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_122;
		L_122 = UriHelper_EnsureDestinationSize_mE185843AD5B8A829F920147F03FB252CF06129B4((Il2CppChar*)(Il2CppChar*)L_117, L_118, L_119, (int16_t)3, (int16_t)((int32_t)120), (int32_t*)L_120, L_121, /*hidden argument*/NULL);
		___dest3 = L_122;
		Il2CppChar L_123 = V_5;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_124 = ___dest3;
		int32_t* L_125 = ___destPos4;
		UriHelper_EscapeAsciiChar_m7590A6410A9F1AE1207006EF9B46578E1A3DFD33(L_123, L_124, (int32_t*)L_125, /*hidden argument*/NULL);
		int32_t L_126 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_126, (int32_t)1));
		goto IL_024c;
	}

IL_020c:
	{
		Il2CppChar L_127 = V_5;
		Il2CppChar L_128 = ___rsvd8;
		if ((((int32_t)L_127) == ((int32_t)L_128)))
		{
			goto IL_024c;
		}
	}
	{
		bool L_129 = ___isUriString5;
		if (L_129)
		{
			goto IL_0222;
		}
	}
	{
		Il2CppChar L_130 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		bool L_131;
		L_131 = UriHelper_IsUnreserved_m6B1C0AA7DEC462F62400ACFC7EFC5807730CD5B1(L_130, /*hidden argument*/NULL);
		G_B35_0 = ((((int32_t)L_131) == ((int32_t)0))? 1 : 0);
		goto IL_022c;
	}

IL_0222:
	{
		Il2CppChar L_132 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		bool L_133;
		L_133 = UriHelper_IsReservedUnreservedOrHash_m155B0658622E15DED0A384A2E6A6013CE23016D6(L_132, /*hidden argument*/NULL);
		G_B35_0 = ((((int32_t)L_133) == ((int32_t)0))? 1 : 0);
	}

IL_022c:
	{
		if (!G_B35_0)
		{
			goto IL_024c;
		}
	}
	{
		Il2CppChar* L_134 = V_3;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_135 = ___dest3;
		int32_t L_136 = V_0;
		int32_t* L_137 = ___destPos4;
		int32_t L_138 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_139;
		L_139 = UriHelper_EnsureDestinationSize_mE185843AD5B8A829F920147F03FB252CF06129B4((Il2CppChar*)(Il2CppChar*)L_134, L_135, L_136, (int16_t)3, (int16_t)((int32_t)120), (int32_t*)L_137, L_138, /*hidden argument*/NULL);
		___dest3 = L_139;
		Il2CppChar L_140 = V_5;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_141 = ___dest3;
		int32_t* L_142 = ___destPos4;
		UriHelper_EscapeAsciiChar_m7590A6410A9F1AE1207006EF9B46578E1A3DFD33(L_140, L_141, (int32_t*)L_142, /*hidden argument*/NULL);
		int32_t L_143 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_143, (int32_t)1));
	}

IL_024c:
	{
		int32_t L_144 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_144, (int32_t)1));
	}

IL_0250:
	{
		int32_t L_145 = V_0;
		int32_t L_146 = ___end2;
		if ((((int32_t)L_145) < ((int32_t)L_146)))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_147 = V_1;
		int32_t L_148 = V_0;
		if ((((int32_t)L_147) == ((int32_t)L_148)))
		{
			goto IL_0271;
		}
	}
	{
		int32_t L_149 = V_1;
		int32_t L_150 = ___start1;
		if ((!(((uint32_t)L_149) == ((uint32_t)L_150))))
		{
			goto IL_0262;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_151 = ___dest3;
		if (!L_151)
		{
			goto IL_0271;
		}
	}

IL_0262:
	{
		Il2CppChar* L_152 = V_3;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_153 = ___dest3;
		int32_t L_154 = V_0;
		int32_t* L_155 = ___destPos4;
		int32_t L_156 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_157;
		L_157 = UriHelper_EnsureDestinationSize_mE185843AD5B8A829F920147F03FB252CF06129B4((Il2CppChar*)(Il2CppChar*)L_152, L_153, L_154, (int16_t)0, (int16_t)0, (int32_t*)L_155, L_156, /*hidden argument*/NULL);
		___dest3 = L_157;
	}

IL_0271:
	{
		V_4 = (String_t*)NULL;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_158 = ___dest3;
		return L_158;
	}
}
// System.Char[] System.UriHelper::EnsureDestinationSize(System.Char*,System.Char[],System.Int32,System.Int16,System.Int16,System.Int32&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* UriHelper_EnsureDestinationSize_mE185843AD5B8A829F920147F03FB252CF06129B4 (Il2CppChar* ___pStr0, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___dest1, int32_t ___currentInputPos2, int16_t ___charsToAdd3, int16_t ___minReallocateChars4, int32_t* ___destPos5, int32_t ___prevInputPos6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_0 = NULL;
	int32_t V_1 = 0;
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = ___dest1;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = ___dest1;
		NullCheck(L_1);
		int32_t* L_2 = ___destPos5;
		int32_t L_3 = *((int32_t*)L_2);
		int32_t L_4 = ___currentInputPos2;
		int32_t L_5 = ___prevInputPos6;
		int16_t L_6 = ___charsToAdd3;
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))) >= ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)L_5)))), (int32_t)L_6)))))
		{
			goto IL_0058;
		}
	}

IL_0012:
	{
		int32_t* L_7 = ___destPos5;
		int32_t L_8 = *((int32_t*)L_7);
		int32_t L_9 = ___currentInputPos2;
		int32_t L_10 = ___prevInputPos6;
		int16_t L_11 = ___minReallocateChars4;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_12 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)L_10)))), (int32_t)L_11)));
		V_0 = L_12;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_13 = ___dest1;
		if (!L_13)
		{
			goto IL_0039;
		}
	}
	{
		int32_t* L_14 = ___destPos5;
		int32_t L_15 = *((int32_t*)L_14);
		if (!L_15)
		{
			goto IL_0039;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_16 = ___dest1;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_17 = V_0;
		int32_t* L_18 = ___destPos5;
		int32_t L_19 = *((int32_t*)L_18);
		Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_16, 0, (RuntimeArray *)(RuntimeArray *)L_17, 0, ((int32_t)((int32_t)L_19<<(int32_t)1)), /*hidden argument*/NULL);
	}

IL_0039:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_20 = V_0;
		___dest1 = L_20;
		goto IL_0058;
	}

IL_003e:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_21 = ___dest1;
		int32_t* L_22 = ___destPos5;
		int32_t* L_23 = ___destPos5;
		int32_t L_24 = *((int32_t*)L_23);
		V_1 = L_24;
		int32_t L_25 = V_1;
		*((int32_t*)L_22) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
		int32_t L_26 = V_1;
		Il2CppChar* L_27 = ___pStr0;
		int32_t L_28 = ___prevInputPos6;
		int32_t L_29 = L_28;
		___prevInputPos6 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
		int32_t L_30 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_27, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_29), (int32_t)2)))));
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (Il2CppChar)L_30);
	}

IL_0058:
	{
		int32_t L_31 = ___prevInputPos6;
		int32_t L_32 = ___currentInputPos2;
		if ((!(((uint32_t)L_31) == ((uint32_t)L_32))))
		{
			goto IL_003e;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_33 = ___dest1;
		return L_33;
	}
}
// System.Char[] System.UriHelper::UnescapeString(System.String,System.Int32,System.Int32,System.Char[],System.Int32&,System.Char,System.Char,System.Char,System.UnescapeMode,System.UriParser,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* UriHelper_UnescapeString_mA17D82F433C1E293A09957A12BBA31A2617BB300 (String_t* ___input0, int32_t ___start1, int32_t ___end2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___dest3, int32_t* ___destPosition4, Il2CppChar ___rsvd15, Il2CppChar ___rsvd26, Il2CppChar ___rsvd37, int32_t ___unescapeMode8, UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___syntax9, bool ___isQuery10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		String_t* L_0 = ___input0;
		V_1 = L_0;
		String_t* L_1 = V_1;
		V_0 = (Il2CppChar*)((uintptr_t)L_1);
		Il2CppChar* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		Il2CppChar* L_3 = V_0;
		int32_t L_4;
		L_4 = RuntimeHelpers_get_OffsetToStringData_mEB8E6EAEBAFAB7CD7F7A915B3081785AABB9FC42(/*hidden argument*/NULL);
		V_0 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_3, (int32_t)L_4));
	}

IL_0010:
	{
		Il2CppChar* L_5 = V_0;
		int32_t L_6 = ___start1;
		int32_t L_7 = ___end2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_8 = ___dest3;
		int32_t* L_9 = ___destPosition4;
		Il2CppChar L_10 = ___rsvd15;
		Il2CppChar L_11 = ___rsvd26;
		Il2CppChar L_12 = ___rsvd37;
		int32_t L_13 = ___unescapeMode8;
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_14 = ___syntax9;
		bool L_15 = ___isQuery10;
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_16;
		L_16 = UriHelper_UnescapeString_m92E5C90E7DAE8DA5C7C1E6FB72B0F58321B6484C((Il2CppChar*)(Il2CppChar*)L_5, L_6, L_7, L_8, (int32_t*)L_9, L_10, L_11, L_12, L_13, L_14, L_15, /*hidden argument*/NULL);
		return L_16;
	}
}
// System.Char[] System.UriHelper::UnescapeString(System.Char*,System.Int32,System.Int32,System.Char[],System.Int32&,System.Char,System.Char,System.Char,System.UnescapeMode,System.UriParser,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* UriHelper_UnescapeString_m92E5C90E7DAE8DA5C7C1E6FB72B0F58321B6484C (Il2CppChar* ___pStr0, int32_t ___start1, int32_t ___end2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___dest3, int32_t* ___destPosition4, Il2CppChar ___rsvd15, Il2CppChar ___rsvd26, Il2CppChar ___rsvd37, int32_t ___unescapeMode8, UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___syntax9, bool ___isQuery10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DecoderReplacementFallback_t8DA345EC4EF3A35A2667365F691EE69408A62130_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EncoderReplacementFallback_t61E36A507D7FA8034B49F86DBE560EC77A6A8418_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	uint8_t V_1 = 0x0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	Il2CppChar* V_5 = NULL;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_6 = NULL;
	int32_t V_7 = 0;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_8 = NULL;
	Il2CppChar V_9 = 0x0;
	int32_t V_10 = 0;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_11 = NULL;
	int32_t V_12 = 0;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_13 = NULL;
	Il2CppChar* V_14 = NULL;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_15 = NULL;
	int32_t V_16 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	int32_t G_B3_0 = 0;
	{
		V_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL;
		V_1 = (uint8_t)0;
		V_2 = (bool)0;
		int32_t L_0 = ___start1;
		V_3 = L_0;
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_1 = ___syntax9;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Uri_IriParsingStatic_m0F2797FEA328A2B1A72EE03F9BD88C577A7A0471(L_1, /*hidden argument*/NULL);
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
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4 = ___dest3;
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_5 = L_4;
			V_6 = L_5;
			if (!L_5)
			{
				goto IL_002a;
			}
		}

IL_0024:
		{
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_6 = V_6;
			NullCheck(L_6);
			if (((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))
			{
				goto IL_0030;
			}
		}

IL_002a:
		{
			V_5 = (Il2CppChar*)((uintptr_t)0);
			goto IL_003b;
		}

IL_0030:
		{
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_7 = V_6;
			NullCheck(L_7);
			V_5 = (Il2CppChar*)((uintptr_t)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
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
			int32_t L_12 = *((int32_t*)L_11);
			V_7 = L_12;
			int32_t L_13 = V_7;
			*((int32_t*)L_10) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
			int32_t L_14 = V_7;
			Il2CppChar* L_15 = ___pStr0;
			int32_t L_16 = ___start1;
			int32_t L_17 = L_16;
			___start1 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
			int32_t L_18 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_15, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_17), (int32_t)2)))));
			*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_9, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_14), (int32_t)2))))) = (int16_t)L_18;
		}

IL_0064:
		{
			int32_t L_19 = ___start1;
			int32_t L_20 = ___end2;
			if ((((int32_t)L_19) < ((int32_t)L_20)))
			{
				goto IL_0043;
			}
		}

IL_0068:
		{
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_21 = ___dest3;
			V_8 = L_21;
			IL2CPP_LEAVE(0x39C, FINALLY_0396);
		}

IL_0070:
		{
			V_9 = 0;
			goto IL_01dd;
		}

IL_0078:
		{
			Il2CppChar* L_22 = ___pStr0;
			int32_t L_23 = V_3;
			int32_t L_24 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_22, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_23), (int32_t)2)))));
			int32_t L_25 = L_24;
			V_9 = L_25;
			if ((!(((uint32_t)L_25) == ((uint32_t)((int32_t)37)))))
			{
				goto IL_0195;
			}
		}

IL_0089:
		{
			int32_t L_26 = ___unescapeMode8;
			if (((int32_t)((int32_t)L_26&(int32_t)2)))
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
			int32_t L_27 = V_3;
			int32_t L_28 = ___end2;
			if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)2))) >= ((int32_t)L_28)))
			{
				goto IL_0176;
			}
		}

IL_009f:
		{
			Il2CppChar* L_29 = ___pStr0;
			int32_t L_30 = V_3;
			int32_t L_31 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_29, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1))), (int32_t)2)))));
			Il2CppChar* L_32 = ___pStr0;
			int32_t L_33 = V_3;
			int32_t L_34 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_32, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)2))), (int32_t)2)))));
			IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
			Il2CppChar L_35;
			L_35 = UriHelper_EscapedAscii_m80D926F5C8B177B5D041BBFEADEAB2363A324461(L_31, L_34, /*hidden argument*/NULL);
			V_9 = L_35;
			int32_t L_36 = ___unescapeMode8;
			if ((((int32_t)L_36) < ((int32_t)8)))
			{
				goto IL_00e2;
			}
		}

IL_00bd:
		{
			Il2CppChar L_37 = V_9;
			if ((!(((uint32_t)L_37) == ((uint32_t)((int32_t)65535)))))
			{
				goto IL_0207;
			}
		}

IL_00c9:
		{
			int32_t L_38 = ___unescapeMode8;
			if ((((int32_t)L_38) < ((int32_t)((int32_t)24))))
			{
				goto IL_01d9;
			}
		}

IL_00d2:
		{
			String_t* L_39;
			L_39 = SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCC86C197E0FEFBC58402C83C0D74784A5C39CD74)), /*hidden argument*/NULL);
			UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * L_40 = (UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D_il2cpp_TypeInfo_var)));
			UriFormatException__ctor_mC9CB29EF00CB33869659306AC3FCA69342FD044F(L_40, L_39, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_40, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UriHelper_UnescapeString_m92E5C90E7DAE8DA5C7C1E6FB72B0F58321B6484C_RuntimeMethod_var)));
		}

IL_00e2:
		{
			Il2CppChar L_41 = V_9;
			if ((!(((uint32_t)L_41) == ((uint32_t)((int32_t)65535)))))
			{
				goto IL_00fb;
			}
		}

IL_00eb:
		{
			int32_t L_42 = ___unescapeMode8;
			if (!((int32_t)((int32_t)L_42&(int32_t)1)))
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
			Il2CppChar L_43 = V_9;
			if ((!(((uint32_t)L_43) == ((uint32_t)((int32_t)37)))))
			{
				goto IL_010a;
			}
		}

IL_0101:
		{
			int32_t L_44 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)2));
			goto IL_01d9;
		}

IL_010a:
		{
			Il2CppChar L_45 = V_9;
			Il2CppChar L_46 = ___rsvd15;
			if ((((int32_t)L_45) == ((int32_t)L_46)))
			{
				goto IL_011c;
			}
		}

IL_0110:
		{
			Il2CppChar L_47 = V_9;
			Il2CppChar L_48 = ___rsvd26;
			if ((((int32_t)L_47) == ((int32_t)L_48)))
			{
				goto IL_011c;
			}
		}

IL_0116:
		{
			Il2CppChar L_49 = V_9;
			Il2CppChar L_50 = ___rsvd37;
			if ((!(((uint32_t)L_49) == ((uint32_t)L_50))))
			{
				goto IL_0125;
			}
		}

IL_011c:
		{
			int32_t L_51 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)2));
			goto IL_01d9;
		}

IL_0125:
		{
			int32_t L_52 = ___unescapeMode8;
			if (((int32_t)((int32_t)L_52&(int32_t)4)))
			{
				goto IL_013d;
			}
		}

IL_012b:
		{
			Il2CppChar L_53 = V_9;
			IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
			bool L_54;
			L_54 = UriHelper_IsNotSafeForUnescape_m5504A36A2CC19ABC23255896A98D9912D390107F(L_53, /*hidden argument*/NULL);
			if (!L_54)
			{
				goto IL_013d;
			}
		}

IL_0134:
		{
			int32_t L_55 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)2));
			goto IL_01d9;
		}

IL_013d:
		{
			bool L_56 = V_4;
			if (!L_56)
			{
				goto IL_0207;
			}
		}

IL_0144:
		{
			Il2CppChar L_57 = V_9;
			if ((((int32_t)L_57) > ((int32_t)((int32_t)159))))
			{
				goto IL_0156;
			}
		}

IL_014d:
		{
			Il2CppChar L_58 = V_9;
			IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
			bool L_59;
			L_59 = UriHelper_IsNotSafeForUnescape_m5504A36A2CC19ABC23255896A98D9912D390107F(L_58, /*hidden argument*/NULL);
			if (L_59)
			{
				goto IL_0170;
			}
		}

IL_0156:
		{
			Il2CppChar L_60 = V_9;
			if ((((int32_t)L_60) <= ((int32_t)((int32_t)159))))
			{
				goto IL_0207;
			}
		}

IL_0162:
		{
			Il2CppChar L_61 = V_9;
			bool L_62 = ___isQuery10;
			bool L_63;
			L_63 = IriHelper_CheckIriUnicodeRange_m5E205B2F096045DE5259E0E98A062DD0813206F6(L_61, L_62, /*hidden argument*/NULL);
			if (L_63)
			{
				goto IL_0207;
			}
		}

IL_0170:
		{
			int32_t L_64 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)2));
			goto IL_01d9;
		}

IL_0176:
		{
			int32_t L_65 = ___unescapeMode8;
			if ((((int32_t)L_65) < ((int32_t)8)))
			{
				goto IL_0191;
			}
		}

IL_017b:
		{
			int32_t L_66 = ___unescapeMode8;
			if ((((int32_t)L_66) < ((int32_t)((int32_t)24))))
			{
				goto IL_01d9;
			}
		}

IL_0181:
		{
			String_t* L_67;
			L_67 = SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCC86C197E0FEFBC58402C83C0D74784A5C39CD74)), /*hidden argument*/NULL);
			UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * L_68 = (UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D_il2cpp_TypeInfo_var)));
			UriFormatException__ctor_mC9CB29EF00CB33869659306AC3FCA69342FD044F(L_68, L_67, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_68, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UriHelper_UnescapeString_m92E5C90E7DAE8DA5C7C1E6FB72B0F58321B6484C_RuntimeMethod_var)));
		}

IL_0191:
		{
			V_2 = (bool)1;
			goto IL_0207;
		}

IL_0195:
		{
			int32_t L_69 = ___unescapeMode8;
			if ((((int32_t)((int32_t)((int32_t)L_69&(int32_t)((int32_t)10)))) == ((int32_t)((int32_t)10))))
			{
				goto IL_01d9;
			}
		}

IL_019e:
		{
			int32_t L_70 = ___unescapeMode8;
			if (!((int32_t)((int32_t)L_70&(int32_t)1)))
			{
				goto IL_01d9;
			}
		}

IL_01a4:
		{
			Il2CppChar L_71 = V_9;
			Il2CppChar L_72 = ___rsvd15;
			if ((((int32_t)L_71) == ((int32_t)L_72)))
			{
				goto IL_01b6;
			}
		}

IL_01aa:
		{
			Il2CppChar L_73 = V_9;
			Il2CppChar L_74 = ___rsvd26;
			if ((((int32_t)L_73) == ((int32_t)L_74)))
			{
				goto IL_01b6;
			}
		}

IL_01b0:
		{
			Il2CppChar L_75 = V_9;
			Il2CppChar L_76 = ___rsvd37;
			if ((!(((uint32_t)L_75) == ((uint32_t)L_76))))
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
			int32_t L_77 = ___unescapeMode8;
			if (((int32_t)((int32_t)L_77&(int32_t)4)))
			{
				goto IL_01d9;
			}
		}

IL_01c0:
		{
			Il2CppChar L_78 = V_9;
			if ((((int32_t)L_78) <= ((int32_t)((int32_t)31))))
			{
				goto IL_01d5;
			}
		}

IL_01c6:
		{
			Il2CppChar L_79 = V_9;
			if ((((int32_t)L_79) < ((int32_t)((int32_t)127))))
			{
				goto IL_01d9;
			}
		}

IL_01cc:
		{
			Il2CppChar L_80 = V_9;
			if ((((int32_t)L_80) > ((int32_t)((int32_t)159))))
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
			int32_t L_81 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_81, (int32_t)1));
		}

IL_01dd:
		{
			int32_t L_82 = V_3;
			int32_t L_83 = ___end2;
			if ((((int32_t)L_82) < ((int32_t)L_83)))
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
			Il2CppChar* L_84 = V_5;
			int32_t* L_85 = ___destPosition4;
			int32_t* L_86 = ___destPosition4;
			int32_t L_87 = *((int32_t*)L_86);
			V_7 = L_87;
			int32_t L_88 = V_7;
			*((int32_t*)L_85) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_88, (int32_t)1));
			int32_t L_89 = V_7;
			Il2CppChar* L_90 = ___pStr0;
			int32_t L_91 = ___start1;
			int32_t L_92 = L_91;
			___start1 = ((int32_t)il2cpp_codegen_add((int32_t)L_92, (int32_t)1));
			int32_t L_93 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_90, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_92), (int32_t)2)))));
			*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_84, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_89), (int32_t)2))))) = (int16_t)L_93;
		}

IL_0207:
		{
			int32_t L_94 = ___start1;
			int32_t L_95 = V_3;
			if ((((int32_t)L_94) < ((int32_t)L_95)))
			{
				goto IL_01e6;
			}
		}

IL_020b:
		{
			int32_t L_96 = V_3;
			int32_t L_97 = ___end2;
			if ((((int32_t)L_96) == ((int32_t)L_97)))
			{
				goto IL_038d;
			}
		}

IL_0212:
		{
			bool L_98 = V_2;
			if (!L_98)
			{
				goto IL_029c;
			}
		}

IL_0218:
		{
			uint8_t L_99 = V_1;
			if (L_99)
			{
				goto IL_027a;
			}
		}

IL_021b:
		{
			V_1 = (uint8_t)((int32_t)30);
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_100 = ___dest3;
			NullCheck(L_100);
			uint8_t L_101 = V_1;
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_102 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_100)->max_length))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_101, (int32_t)3)))));
			V_13 = L_102;
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_103 = V_13;
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_104 = L_103;
			V_15 = L_104;
			if (!L_104)
			{
				goto IL_0239;
			}
		}

IL_0233:
		{
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_105 = V_15;
			NullCheck(L_105);
			if (((int32_t)((int32_t)(((RuntimeArray*)L_105)->max_length))))
			{
				goto IL_023f;
			}
		}

IL_0239:
		{
			V_14 = (Il2CppChar*)((uintptr_t)0);
			goto IL_024a;
		}

IL_023f:
		{
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_106 = V_15;
			NullCheck(L_106);
			V_14 = (Il2CppChar*)((uintptr_t)((L_106)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
		}

IL_024a:
		{
			V_16 = 0;
			goto IL_0267;
		}

IL_024f:
		{
			Il2CppChar* L_107 = V_14;
			int32_t L_108 = V_16;
			Il2CppChar* L_109 = V_5;
			int32_t L_110 = V_16;
			int32_t L_111 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_109, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_110), (int32_t)2)))));
			*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_107, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_108), (int32_t)2))))) = (int16_t)L_111;
			int32_t L_112 = V_16;
			V_16 = ((int32_t)il2cpp_codegen_add((int32_t)L_112, (int32_t)1));
		}

IL_0267:
		{
			int32_t L_113 = V_16;
			int32_t* L_114 = ___destPosition4;
			int32_t L_115 = *((int32_t*)L_114);
			if ((((int32_t)L_113) < ((int32_t)L_115)))
			{
				goto IL_024f;
			}
		}

IL_026e:
		{
			V_15 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)NULL;
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_116 = V_13;
			___dest3 = L_116;
			IL2CPP_LEAVE(0x1D, FINALLY_0396);
		}

IL_027a:
		{
			uint8_t L_117 = V_1;
			V_1 = (uint8_t)((int32_t)((uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_117, (int32_t)1))));
			Il2CppChar* L_118 = ___pStr0;
			int32_t L_119 = V_3;
			int32_t L_120 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_118, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_119), (int32_t)2)))));
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_121 = ___dest3;
			int32_t* L_122 = ___destPosition4;
			IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
			UriHelper_EscapeAsciiChar_m7590A6410A9F1AE1207006EF9B46578E1A3DFD33(L_120, L_121, (int32_t*)L_122, /*hidden argument*/NULL);
			V_2 = (bool)0;
			int32_t L_123 = V_3;
			int32_t L_124 = ((int32_t)il2cpp_codegen_add((int32_t)L_123, (int32_t)1));
			V_3 = L_124;
			___start1 = L_124;
			goto IL_0070;
		}

IL_029c:
		{
			Il2CppChar L_125 = V_9;
			if ((((int32_t)L_125) > ((int32_t)((int32_t)127))))
			{
				goto IL_02c0;
			}
		}

IL_02a2:
		{
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_126 = ___dest3;
			int32_t* L_127 = ___destPosition4;
			int32_t* L_128 = ___destPosition4;
			int32_t L_129 = *((int32_t*)L_128);
			V_7 = L_129;
			int32_t L_130 = V_7;
			*((int32_t*)L_127) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_130, (int32_t)1));
			int32_t L_131 = V_7;
			Il2CppChar L_132 = V_9;
			NullCheck(L_126);
			(L_126)->SetAt(static_cast<il2cpp_array_size_t>(L_131), (Il2CppChar)L_132);
			int32_t L_133 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_133, (int32_t)3));
			int32_t L_134 = V_3;
			___start1 = L_134;
			goto IL_0070;
		}

IL_02c0:
		{
			V_10 = 1;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_135 = V_0;
			if (L_135)
			{
				goto IL_02cf;
			}
		}

IL_02c6:
		{
			int32_t L_136 = ___end2;
			int32_t L_137 = V_3;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_138 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_136, (int32_t)L_137)));
			V_0 = L_138;
		}

IL_02cf:
		{
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_139 = V_0;
			Il2CppChar L_140 = V_9;
			NullCheck(L_139);
			(L_139)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)((uint8_t)L_140)));
			int32_t L_141 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_141, (int32_t)3));
			goto IL_032a;
		}

IL_02db:
		{
			Il2CppChar* L_142 = ___pStr0;
			int32_t L_143 = V_3;
			int32_t L_144 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_142, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_143), (int32_t)2)))));
			int32_t L_145 = L_144;
			V_9 = L_145;
			if ((!(((uint32_t)L_145) == ((uint32_t)((int32_t)37)))))
			{
				goto IL_032e;
			}
		}

IL_02e9:
		{
			int32_t L_146 = V_3;
			int32_t L_147 = ___end2;
			if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_146, (int32_t)2))) >= ((int32_t)L_147)))
			{
				goto IL_032e;
			}
		}

IL_02ef:
		{
			Il2CppChar* L_148 = ___pStr0;
			int32_t L_149 = V_3;
			int32_t L_150 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_148, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_149, (int32_t)1))), (int32_t)2)))));
			Il2CppChar* L_151 = ___pStr0;
			int32_t L_152 = V_3;
			int32_t L_153 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_151, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_152, (int32_t)2))), (int32_t)2)))));
			IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
			Il2CppChar L_154;
			L_154 = UriHelper_EscapedAscii_m80D926F5C8B177B5D041BBFEADEAB2363A324461(L_150, L_153, /*hidden argument*/NULL);
			V_9 = L_154;
			Il2CppChar L_155 = V_9;
			if ((((int32_t)L_155) == ((int32_t)((int32_t)65535))))
			{
				goto IL_032e;
			}
		}

IL_0311:
		{
			Il2CppChar L_156 = V_9;
			if ((((int32_t)L_156) < ((int32_t)((int32_t)128))))
			{
				goto IL_032e;
			}
		}

IL_031a:
		{
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_157 = V_0;
			int32_t L_158 = V_10;
			int32_t L_159 = L_158;
			V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_159, (int32_t)1));
			Il2CppChar L_160 = V_9;
			NullCheck(L_157);
			(L_157)->SetAt(static_cast<il2cpp_array_size_t>(L_159), (uint8_t)((int32_t)((uint8_t)L_160)));
			int32_t L_161 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_161, (int32_t)3));
		}

IL_032a:
		{
			int32_t L_162 = V_3;
			int32_t L_163 = ___end2;
			if ((((int32_t)L_162) < ((int32_t)L_163)))
			{
				goto IL_02db;
			}
		}

IL_032e:
		{
			Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_164;
			L_164 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
			NullCheck(L_164);
			RuntimeObject * L_165;
			L_165 = VirtFuncInvoker0< RuntimeObject * >::Invoke(17 /* System.Object System.Text.Encoding::Clone() */, L_164);
			Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_166 = ((Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 *)CastclassClass((RuntimeObject*)L_165, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_il2cpp_TypeInfo_var));
			EncoderReplacementFallback_t61E36A507D7FA8034B49F86DBE560EC77A6A8418 * L_167 = (EncoderReplacementFallback_t61E36A507D7FA8034B49F86DBE560EC77A6A8418 *)il2cpp_codegen_object_new(EncoderReplacementFallback_t61E36A507D7FA8034B49F86DBE560EC77A6A8418_il2cpp_TypeInfo_var);
			EncoderReplacementFallback__ctor_m07299910DC3D3F6B9F8F37A4ADD40A500F97D1D4(L_167, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
			NullCheck(L_166);
			Encoding_set_EncoderFallback_m75BA39C6302BD7EFBB4A48B02C406A14789B244A(L_166, L_167, /*hidden argument*/NULL);
			Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_168 = L_166;
			DecoderReplacementFallback_t8DA345EC4EF3A35A2667365F691EE69408A62130 * L_169 = (DecoderReplacementFallback_t8DA345EC4EF3A35A2667365F691EE69408A62130 *)il2cpp_codegen_object_new(DecoderReplacementFallback_t8DA345EC4EF3A35A2667365F691EE69408A62130_il2cpp_TypeInfo_var);
			DecoderReplacementFallback__ctor_m7E6C273B2682E373C787568EB0BB0B2E4B6C2253(L_169, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
			NullCheck(L_168);
			Encoding_set_DecoderFallback_m771EA02DA99D57E19B6FC48E8C3A46F8A6D4CBB8(L_168, L_169, /*hidden argument*/NULL);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_170 = V_0;
			NullCheck(L_170);
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_171 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_170)->max_length))));
			V_11 = L_171;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_172 = V_0;
			int32_t L_173 = V_10;
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_174 = V_11;
			NullCheck(L_168);
			int32_t L_175;
			L_175 = VirtFuncInvoker5< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, int32_t >::Invoke(33 /* System.Int32 System.Text.Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32) */, L_168, L_172, 0, L_173, L_174, 0);
			V_12 = L_175;
			int32_t L_176 = V_3;
			___start1 = L_176;
			Il2CppChar* L_177 = V_5;
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_178 = ___dest3;
			int32_t* L_179 = ___destPosition4;
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_180 = V_11;
			int32_t L_181 = V_12;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_182 = V_0;
			int32_t L_183 = V_10;
			bool L_184 = ___isQuery10;
			bool L_185 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
			UriHelper_MatchUTF8Sequence_m4A148931E07097731DC7EA68EAA933E9330BE81B((Il2CppChar*)(Il2CppChar*)L_177, L_178, (int32_t*)L_179, L_180, L_181, L_182, L_183, L_184, L_185, /*hidden argument*/NULL);
		}

IL_038d:
		{
			int32_t L_186 = V_3;
			int32_t L_187 = ___end2;
			if ((!(((uint32_t)L_186) == ((uint32_t)L_187))))
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
		V_6 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)NULL;
		IL2CPP_END_FINALLY(918)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(918)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x39C, IL_039c)
		IL2CPP_JUMP_TBL(0x1D, IL_001d)
		IL2CPP_JUMP_TBL(0x39A, IL_039a)
	}

IL_039a:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_188 = ___dest3;
		return L_188;
	}

IL_039c:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_189 = V_8;
		return L_189;
	}
}
// System.Void System.UriHelper::MatchUTF8Sequence(System.Char*,System.Char[],System.Int32&,System.Char[],System.Int32,System.Byte[],System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriHelper_MatchUTF8Sequence_m4A148931E07097731DC7EA68EAA933E9330BE81B (Il2CppChar* ___pDest0, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___dest1, int32_t* ___destOffset2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___unescapedChars3, int32_t ___charCount4, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes5, int32_t ___byteCount6, bool ___isQuery7, bool ___iriParsing8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Il2CppChar* V_1 = NULL;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_5 = NULL;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* G_B7_1 = NULL;
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * G_B7_2 = NULL;
	int32_t G_B6_0 = 0;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* G_B6_1 = NULL;
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * G_B6_2 = NULL;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* G_B8_2 = NULL;
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * G_B8_3 = NULL;
	{
		V_0 = 0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = ___unescapedChars3;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = L_0;
		V_2 = L_1;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = V_2;
		NullCheck(L_2);
		if (((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))
		{
			goto IL_0011;
		}
	}

IL_000c:
	{
		V_1 = (Il2CppChar*)((uintptr_t)0);
		goto IL_001a;
	}

IL_0011:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = V_2;
		NullCheck(L_3);
		V_1 = (Il2CppChar*)((uintptr_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
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
		int32_t L_6 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_4, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_5), (int32_t)2)))));
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Char_IsHighSurrogate_m7BECD1C98C902946F069D8936F8A557F1F7DFF01(L_6, /*hidden argument*/NULL);
		V_4 = L_7;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_8;
		L_8 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_9 = ___unescapedChars3;
		int32_t L_10 = V_3;
		bool L_11 = V_4;
		G_B6_0 = L_10;
		G_B6_1 = L_9;
		G_B6_2 = L_8;
		if (L_11)
		{
			G_B7_0 = L_10;
			G_B7_1 = L_9;
			G_B7_2 = L_8;
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
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12;
		L_12 = VirtFuncInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, int32_t, int32_t >::Invoke(23 /* System.Byte[] System.Text.Encoding::GetBytes(System.Char[],System.Int32,System.Int32) */, G_B8_3, G_B8_2, G_B8_1, G_B8_0);
		V_5 = L_12;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = V_5;
		NullCheck(L_13);
		V_6 = ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)));
		V_7 = (bool)0;
		bool L_14 = ___iriParsing8;
		if (!L_14)
		{
			goto IL_008b;
		}
	}
	{
		bool L_15 = V_4;
		if (L_15)
		{
			goto IL_0064;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_16 = ___unescapedChars3;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		uint16_t L_19 = (uint16_t)(L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		bool L_20 = ___isQuery7;
		bool L_21;
		L_21 = IriHelper_CheckIriUnicodeRange_m5E205B2F096045DE5259E0E98A062DD0813206F6(L_19, L_20, /*hidden argument*/NULL);
		V_7 = L_21;
		goto IL_008b;
	}

IL_0064:
	{
		V_8 = (bool)0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_22 = ___unescapedChars3;
		int32_t L_23 = V_3;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		uint16_t L_25 = (uint16_t)(L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_26 = ___unescapedChars3;
		int32_t L_27 = V_3;
		NullCheck(L_26);
		int32_t L_28 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
		uint16_t L_29 = (uint16_t)(L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		bool L_30 = ___isQuery7;
		bool L_31;
		L_31 = IriHelper_CheckIriUnicodeRange_m03144D55C396E2870F76F85B29852F8314346A1A(L_25, L_29, (bool*)(&V_8), L_30, /*hidden argument*/NULL);
		V_7 = L_31;
		goto IL_008b;
	}

IL_007c:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_32 = ___bytes5;
		int32_t L_33 = V_0;
		int32_t L_34 = L_33;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
		NullCheck(L_32);
		int32_t L_35 = L_34;
		uint8_t L_36 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_37 = ___dest1;
		int32_t* L_38 = ___destOffset2;
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		UriHelper_EscapeAsciiChar_m7590A6410A9F1AE1207006EF9B46578E1A3DFD33(L_36, L_37, (int32_t*)L_38, /*hidden argument*/NULL);
	}

IL_008b:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_39 = ___bytes5;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		uint8_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_43 = V_5;
		NullCheck(L_43);
		int32_t L_44 = 0;
		uint8_t L_45 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		if ((!(((uint32_t)L_42) == ((uint32_t)L_45))))
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
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_46 = ___bytes5;
		int32_t L_47 = V_0;
		int32_t L_48 = V_10;
		NullCheck(L_46);
		int32_t L_49 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)L_48));
		uint8_t L_50 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_51 = V_5;
		int32_t L_52 = V_10;
		NullCheck(L_51);
		int32_t L_53 = L_52;
		uint8_t L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		if ((((int32_t)L_50) == ((int32_t)L_54)))
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
		int32_t L_55 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)1));
	}

IL_00b6:
	{
		int32_t L_56 = V_10;
		int32_t L_57 = V_6;
		if ((((int32_t)L_56) < ((int32_t)L_57)))
		{
			goto IL_009d;
		}
	}

IL_00bc:
	{
		bool L_58 = V_9;
		if (!L_58)
		{
			goto IL_0179;
		}
	}
	{
		int32_t L_59 = V_0;
		int32_t L_60 = V_6;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)L_60));
		bool L_61 = ___iriParsing8;
		if (!L_61)
		{
			goto IL_013f;
		}
	}
	{
		bool L_62 = V_7;
		if (L_62)
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
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_63 = V_5;
		int32_t L_64 = V_11;
		NullCheck(L_63);
		int32_t L_65 = L_64;
		uint8_t L_66 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_67 = ___dest1;
		int32_t* L_68 = ___destOffset2;
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		UriHelper_EscapeAsciiChar_m7590A6410A9F1AE1207006EF9B46578E1A3DFD33(L_66, L_67, (int32_t*)L_68, /*hidden argument*/NULL);
		int32_t L_69 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_69, (int32_t)1));
	}

IL_00e7:
	{
		int32_t L_70 = V_11;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_71 = V_5;
		NullCheck(L_71);
		if ((((int32_t)L_70) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_71)->max_length))))))
		{
			goto IL_00d5;
		}
	}
	{
		goto IL_019e;
	}

IL_00f4:
	{
		Il2CppChar* L_72 = V_1;
		int32_t L_73 = V_3;
		int32_t L_74 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_72, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_73), (int32_t)2)))));
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_75;
		L_75 = Uri_IsBidiControlCharacter_m36A30E0708EE0209208B23136C2BEC9C802C697B(L_74, /*hidden argument*/NULL);
		if (L_75)
		{
			goto IL_019e;
		}
	}
	{
		Il2CppChar* L_76 = ___pDest0;
		int32_t* L_77 = ___destOffset2;
		int32_t* L_78 = ___destOffset2;
		int32_t L_79 = *((int32_t*)L_78);
		V_12 = L_79;
		int32_t L_80 = V_12;
		*((int32_t*)L_77) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_80, (int32_t)1));
		int32_t L_81 = V_12;
		Il2CppChar* L_82 = V_1;
		int32_t L_83 = V_3;
		int32_t L_84 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_82, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_83), (int32_t)2)))));
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_76, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_81), (int32_t)2))))) = (int16_t)L_84;
		bool L_85 = V_4;
		if (!L_85)
		{
			goto IL_019e;
		}
	}
	{
		Il2CppChar* L_86 = ___pDest0;
		int32_t* L_87 = ___destOffset2;
		int32_t* L_88 = ___destOffset2;
		int32_t L_89 = *((int32_t*)L_88);
		V_12 = L_89;
		int32_t L_90 = V_12;
		*((int32_t*)L_87) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_90, (int32_t)1));
		int32_t L_91 = V_12;
		Il2CppChar* L_92 = V_1;
		int32_t L_93 = V_3;
		int32_t L_94 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_92, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_93, (int32_t)1))), (int32_t)2)))));
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_86, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_91), (int32_t)2))))) = (int16_t)L_94;
		goto IL_019e;
	}

IL_013f:
	{
		Il2CppChar* L_95 = ___pDest0;
		int32_t* L_96 = ___destOffset2;
		int32_t* L_97 = ___destOffset2;
		int32_t L_98 = *((int32_t*)L_97);
		V_12 = L_98;
		int32_t L_99 = V_12;
		*((int32_t*)L_96) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_99, (int32_t)1));
		int32_t L_100 = V_12;
		Il2CppChar* L_101 = V_1;
		int32_t L_102 = V_3;
		int32_t L_103 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_101, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_102), (int32_t)2)))));
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_95, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_100), (int32_t)2))))) = (int16_t)L_103;
		bool L_104 = V_4;
		if (!L_104)
		{
			goto IL_019e;
		}
	}
	{
		Il2CppChar* L_105 = ___pDest0;
		int32_t* L_106 = ___destOffset2;
		int32_t* L_107 = ___destOffset2;
		int32_t L_108 = *((int32_t*)L_107);
		V_12 = L_108;
		int32_t L_109 = V_12;
		*((int32_t*)L_106) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_109, (int32_t)1));
		int32_t L_110 = V_12;
		Il2CppChar* L_111 = V_1;
		int32_t L_112 = V_3;
		int32_t L_113 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_111, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_112, (int32_t)1))), (int32_t)2)))));
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_105, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_110), (int32_t)2))))) = (int16_t)L_113;
		goto IL_019e;
	}

IL_0179:
	{
		V_13 = 0;
		goto IL_0193;
	}

IL_017e:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_114 = ___bytes5;
		int32_t L_115 = V_0;
		int32_t L_116 = L_115;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_116, (int32_t)1));
		NullCheck(L_114);
		int32_t L_117 = L_116;
		uint8_t L_118 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_119 = ___dest1;
		int32_t* L_120 = ___destOffset2;
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		UriHelper_EscapeAsciiChar_m7590A6410A9F1AE1207006EF9B46578E1A3DFD33(L_118, L_119, (int32_t*)L_120, /*hidden argument*/NULL);
		int32_t L_121 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_121, (int32_t)1));
	}

IL_0193:
	{
		int32_t L_122 = V_13;
		int32_t L_123 = V_10;
		if ((((int32_t)L_122) < ((int32_t)L_123)))
		{
			goto IL_017e;
		}
	}
	{
		goto IL_008b;
	}

IL_019e:
	{
		bool L_124 = V_4;
		if (!L_124)
		{
			goto IL_01a6;
		}
	}
	{
		int32_t L_125 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_125, (int32_t)1));
	}

IL_01a6:
	{
		int32_t L_126 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_126, (int32_t)1));
	}

IL_01aa:
	{
		int32_t L_127 = V_3;
		int32_t L_128 = ___charCount4;
		if ((((int32_t)L_127) < ((int32_t)L_128)))
		{
			goto IL_0021;
		}
	}
	{
		V_2 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)NULL;
		goto IL_01c5;
	}

IL_01b6:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_129 = ___bytes5;
		int32_t L_130 = V_0;
		int32_t L_131 = L_130;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_131, (int32_t)1));
		NullCheck(L_129);
		int32_t L_132 = L_131;
		uint8_t L_133 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_132));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_134 = ___dest1;
		int32_t* L_135 = ___destOffset2;
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		UriHelper_EscapeAsciiChar_m7590A6410A9F1AE1207006EF9B46578E1A3DFD33(L_133, L_134, (int32_t*)L_135, /*hidden argument*/NULL);
	}

IL_01c5:
	{
		int32_t L_136 = V_0;
		int32_t L_137 = ___byteCount6;
		if ((((int32_t)L_136) < ((int32_t)L_137)))
		{
			goto IL_01b6;
		}
	}
	{
		return;
	}
}
// System.Void System.UriHelper::EscapeAsciiChar(System.Char,System.Char[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriHelper_EscapeAsciiChar_m7590A6410A9F1AE1207006EF9B46578E1A3DFD33 (Il2CppChar ___ch0, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___to1, int32_t* ___pos2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = ___to1;
		int32_t* L_1 = ___pos2;
		int32_t* L_2 = ___pos2;
		int32_t L_3 = *((int32_t*)L_2);
		V_0 = L_3;
		int32_t L_4 = V_0;
		*((int32_t*)L_1) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
		int32_t L_5 = V_0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (Il2CppChar)((int32_t)37));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_6 = ___to1;
		int32_t* L_7 = ___pos2;
		int32_t* L_8 = ___pos2;
		int32_t L_9 = *((int32_t*)L_8);
		V_0 = L_9;
		int32_t L_10 = V_0;
		*((int32_t*)L_7) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
		int32_t L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_12 = ((UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_StaticFields*)il2cpp_codegen_static_fields_for(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var))->get_HexUpperChars_0();
		Il2CppChar L_13 = ___ch0;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)((int32_t)((int32_t)((int32_t)L_13&(int32_t)((int32_t)240)))>>(int32_t)4));
		uint16_t L_15 = (uint16_t)(L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (Il2CppChar)L_15);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_16 = ___to1;
		int32_t* L_17 = ___pos2;
		int32_t* L_18 = ___pos2;
		int32_t L_19 = *((int32_t*)L_18);
		V_0 = L_19;
		int32_t L_20 = V_0;
		*((int32_t*)L_17) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
		int32_t L_21 = V_0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_22 = ((UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_StaticFields*)il2cpp_codegen_static_fields_for(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var))->get_HexUpperChars_0();
		Il2CppChar L_23 = ___ch0;
		NullCheck(L_22);
		int32_t L_24 = ((int32_t)((int32_t)L_23&(int32_t)((int32_t)15)));
		uint16_t L_25 = (uint16_t)(L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (Il2CppChar)L_25);
		return;
	}
}
// System.Char System.UriHelper::EscapedAscii(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar UriHelper_EscapedAscii_m80D926F5C8B177B5D041BBFEADEAB2363A324461 (Il2CppChar ___digit0, Il2CppChar ___next1, const RuntimeMethod* method)
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
		return ((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)G_B26_1, (int32_t)G_B26_0))));
	}
}
// System.Boolean System.UriHelper::IsNotSafeForUnescape(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UriHelper_IsNotSafeForUnescape_m5504A36A2CC19ABC23255896A98D9912D390107F (Il2CppChar ___ch0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UriHelper_IsReservedUnreservedOrHash_m155B0658622E15DED0A384A2E6A6013CE23016D6 (Il2CppChar ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84A0343BF19D2274E807E1B6505C382F81D6E3C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA1D72164D93990AA279210A8D4332B3E0A6C411);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar L_0 = ___c0;
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = UriHelper_IsUnreserved_m6B1C0AA7DEC462F62400ACFC7EFC5807730CD5B1(L_0, /*hidden argument*/NULL);
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
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = UriParser_get_ShouldUseLegacyV2Quirks_mB8917CAC10CD13E44F2EB21D4033044BEAF132B2(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		Il2CppChar L_3 = ___c0;
		NullCheck(_stringLiteral84A0343BF19D2274E807E1B6505C382F81D6E3C9);
		int32_t L_4;
		L_4 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(_stringLiteral84A0343BF19D2274E807E1B6505C382F81D6E3C9, L_3, /*hidden argument*/NULL);
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
		NullCheck(_stringLiteralFA1D72164D93990AA279210A8D4332B3E0A6C411);
		int32_t L_7;
		L_7 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(_stringLiteralFA1D72164D93990AA279210A8D4332B3E0A6C411, L_6, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.UriHelper::IsUnreserved(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UriHelper_IsUnreserved_m6B1C0AA7DEC462F62400ACFC7EFC5807730CD5B1 (Il2CppChar ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70ACDB62BA3184CF43D7E26D62FB85E2340ED892);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83F837B4325FC4400C4089A21E353D2D0CD0EF29);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar L_0 = ___c0;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Uri_IsAsciiLetterOrDigit_m1DDFA9F464FD15F8482F0C669E7E22B20DE07DCA(L_0, /*hidden argument*/NULL);
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
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = UriParser_get_ShouldUseLegacyV2Quirks_mB8917CAC10CD13E44F2EB21D4033044BEAF132B2(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		Il2CppChar L_3 = ___c0;
		NullCheck(_stringLiteral70ACDB62BA3184CF43D7E26D62FB85E2340ED892);
		int32_t L_4;
		L_4 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(_stringLiteral70ACDB62BA3184CF43D7E26D62FB85E2340ED892, L_3, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_4) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0023:
	{
		Il2CppChar L_5 = ___c0;
		NullCheck(_stringLiteral83F837B4325FC4400C4089A21E353D2D0CD0EF29);
		int32_t L_6;
		L_6 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(_stringLiteral83F837B4325FC4400C4089A21E353D2D0CD0EF29, L_5, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_6) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.UriHelper::Is3986Unreserved(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UriHelper_Is3986Unreserved_m0532DF2A1577C475D0D83F10C6C5D91F125AC028 (Il2CppChar ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83F837B4325FC4400C4089A21E353D2D0CD0EF29);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar L_0 = ___c0;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Uri_IsAsciiLetterOrDigit_m1DDFA9F464FD15F8482F0C669E7E22B20DE07DCA(L_0, /*hidden argument*/NULL);
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
		NullCheck(_stringLiteral83F837B4325FC4400C4089A21E353D2D0CD0EF29);
		int32_t L_3;
		L_3 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(_stringLiteral83F837B4325FC4400C4089A21E353D2D0CD0EF29, L_2, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.UriHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriHelper__cctor_m3C84C4F90301AB1F9B4979FA9B0C8926D4A7B96D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t1267FAF6E08D720F26ABF676554E6948A7F6A2D0____59F5BD34B6C013DEACC784F69C67E95150033A84_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t1267FAF6E08D720F26ABF676554E6948A7F6A2D0____59F5BD34B6C013DEACC784F69C67E95150033A84_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_StaticFields*)il2cpp_codegen_static_fields_for(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var))->set_HexUpperChars_0(L_1);
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
// System.String System.UriParser::get_SchemeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UriParser_get_SchemeName_mFCD123235673631E05FE9BAF6955A0B43EEEBD80 (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_m_Scheme_6();
		return L_0;
	}
}
// System.Int32 System.UriParser::get_DefaultPort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UriParser_get_DefaultPort_m7ECA5BE839D36C7FF854FEA0795D8DE701487D33 (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_Port_5();
		return L_0;
	}
}
// System.UriParser System.UriParser::OnNewUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * UriParser_OnNewUri_m44FB81344517268B51B276DF7A9E236C04134ED5 (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * __this, const RuntimeMethod* method)
{
	{
		return __this;
	}
}
// System.Void System.UriParser::InitializeAndValidate(System.Uri,System.UriFormatException&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriParser_InitializeAndValidate_mE7C239F559C834F7C156FC21F175023D98E11A45 (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * __this, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___uri0, UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D ** ___parsingError1, const RuntimeMethod* method)
{
	{
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D ** L_0 = ___parsingError1;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_1 = ___uri0;
		NullCheck(L_1);
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * L_2;
		L_2 = Uri_ParseMinimal_m47FF7ACAEB543DE87332F9DEA79F92ADC575107F(L_1, /*hidden argument*/NULL);
		*((RuntimeObject **)L_0) = (RuntimeObject *)L_2;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_0, (void*)(RuntimeObject *)L_2);
		return;
	}
}
// System.String System.UriParser::Resolve(System.Uri,System.Uri,System.UriFormatException&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UriParser_Resolve_m031E03AD4141D77F023345D8FB087FA06CEA41C0 (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * __this, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___baseUri0, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___relativeUri1, UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D ** ___parsingError2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * V_2 = NULL;
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_0 = ___baseUri0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Uri_get_UserDrivenParsing_mF09087D4DE9A0823EBF1FC0C14101335D01393F2(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var)), (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2;
		Type_t * L_4;
		L_4 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_4);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		String_t* L_6;
		L_6 = SR_GetString_m4FFAF18248A54C5B67E4760C5ED4869A87BCAD7F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3EE5BCAF4F2ABF8C2E555D5760FA880AAB22CABF)), L_3, /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_7 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_7, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UriParser_Resolve_m031E03AD4141D77F023345D8FB087FA06CEA41C0_RuntimeMethod_var)));
	}

IL_002c:
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_8 = ___baseUri0;
		NullCheck(L_8);
		bool L_9;
		L_9 = Uri_get_IsAbsoluteUri_m013346D65055CFEDF9E742534A584573C18A0E25(L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0044;
		}
	}
	{
		String_t* L_10;
		L_10 = SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE657126EBF76C06687ED6EAD2C714E37315C927F)), /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_11 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_11, L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UriParser_Resolve_m031E03AD4141D77F023345D8FB087FA06CEA41C0_RuntimeMethod_var)));
	}

IL_0044:
	{
		V_0 = (String_t*)NULL;
		V_1 = (bool)0;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_12 = ___baseUri0;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_13 = ___relativeUri1;
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D ** L_14 = ___parsingError2;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_15;
		L_15 = Uri_ResolveHelper_m2C5CDF42841B464E75B3AA102A24BABA8B51698E(L_12, L_13, (String_t**)(&V_0), (bool*)(&V_1), (UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D **)L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D ** L_16 = ___parsingError2;
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * L_17 = *((UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D **)L_16);
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
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_18 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Uri_op_Inequality_m3B3733CAA19866A20EF76A772B368EFB5FC89A4F(L_18, (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)NULL, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_006b;
		}
	}
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_20 = V_2;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = Uri_get_OriginalString_mBD94B4BB84AE9C051C1CA8BA33C14D5BAD25B0AC(L_20, /*hidden argument*/NULL);
		return L_21;
	}

IL_006b:
	{
		String_t* L_22 = V_0;
		return L_22;
	}
}
// System.String System.UriParser::GetComponents(System.Uri,System.UriComponents,System.UriFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UriParser_GetComponents_mEF92B7D8CD59B1C8502D195D775D02D2C844FC1B (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * __this, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___uri0, int32_t ___components1, int32_t ___format2, const RuntimeMethod* method)
{
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
		RuntimeObject * L_4 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UriComponents_tA599793722A9810EC23036FF1B1B02A905B4EA76_il2cpp_TypeInfo_var)), &L_3);
		String_t* L_5;
		L_5 = SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE13258345AC5ED7FA38D641004219DBE3A3FB56C)), /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_6 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m7C5B3BE7792B7C73E7D82C4DBAD4ACA2DAE71AA9(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7C03E97995F6950303A46C204A216735E6B4582)), L_4, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UriParser_GetComponents_mEF92B7D8CD59B1C8502D195D775D02D2C844FC1B_RuntimeMethod_var)));
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
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_8 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral75C9716749EA210206E3467390B7A11F3F33DDFA)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UriParser_GetComponents_mEF92B7D8CD59B1C8502D195D775D02D2C844FC1B_RuntimeMethod_var)));
	}

IL_003d:
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_9 = ___uri0;
		NullCheck(L_9);
		bool L_10;
		L_10 = Uri_get_UserDrivenParsing_mF09087D4DE9A0823EBF1FC0C14101335D01393F2(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0069;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var)), (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = L_11;
		Type_t * L_13;
		L_13 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_13);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_14);
		String_t* L_15;
		L_15 = SR_GetString_m4FFAF18248A54C5B67E4760C5ED4869A87BCAD7F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3EE5BCAF4F2ABF8C2E555D5760FA880AAB22CABF)), L_12, /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_16 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_16, L_15, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UriParser_GetComponents_mEF92B7D8CD59B1C8502D195D775D02D2C844FC1B_RuntimeMethod_var)));
	}

IL_0069:
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_17 = ___uri0;
		NullCheck(L_17);
		bool L_18;
		L_18 = Uri_get_IsAbsoluteUri_m013346D65055CFEDF9E742534A584573C18A0E25(L_17, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_0081;
		}
	}
	{
		String_t* L_19;
		L_19 = SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE657126EBF76C06687ED6EAD2C714E37315C927F)), /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_20 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_20, L_19, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UriParser_GetComponents_mEF92B7D8CD59B1C8502D195D775D02D2C844FC1B_RuntimeMethod_var)));
	}

IL_0081:
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_21 = ___uri0;
		int32_t L_22 = ___components1;
		int32_t L_23 = ___format2;
		NullCheck(L_21);
		String_t* L_24;
		L_24 = Uri_GetComponentsHelper_mAA39E421157735AAD7D93A187CCCAED5A122C8E8(L_21, L_22, L_23, /*hidden argument*/NULL);
		return L_24;
	}
}
// System.Boolean System.UriParser::get_ShouldUseLegacyV2Quirks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UriParser_get_ShouldUseLegacyV2Quirks_mB8917CAC10CD13E44F2EB21D4033044BEAF132B2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
		int32_t L_0 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_s_QuirksVersion_23();
		return (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.UriParser::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriParser__cctor_mE4EC170DEC3DCA59D51181F240BABD3404816DA2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryCompatibility_t44EDF0C684F7241E727B341DF3896349BC34D810_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mEF275C708A9D8C75BE351DE8D63068D20522B707_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19A87220AA9460BCE77166C6A721ECA99780C3E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3AB04459C95BC4FFBBDA41BF1A685753EB83D903);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56D7741BCA89552362FD24D11BB8980E3D8A444C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral587B0E053519266A1A5628C5DBE03AA33A3BBE95);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58B716FF5428F7961E1403E6D969E605D0F27EAF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D81741866E0AFB5638DF15167E9A90CDC2CF124);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FB56C8861544146EF414DAE01766AD43F440960);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BF693870A1CA202D2EE1A186395E62B409214FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8CB5CAE4A06CBA4A72564C688228877DD24B9906);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9753F194FF9C1EAC5D2E1FAADADC2E63D96E516E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C5DC11C0F491C18EA087784CC4C662A0629733);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE9CA5A938D04349B649020FA52D9EC24C97099D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC05DD95A56B355AAD74E9CE147B236E03FF8905E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD39E208E1EDCA34C72FCD76197E0EA7CD671D2F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE0A8A4B33338D09BDE82F544CF26FB4B56B9F98);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF27E4C631EBEFA337EC21BE8552E169C9DED78A2);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(BinaryCompatibility_t44EDF0C684F7241E727B341DF3896349BC34D810_il2cpp_TypeInfo_var);
		bool L_0 = ((BinaryCompatibility_t44EDF0C684F7241E727B341DF3896349BC34D810_StaticFields*)il2cpp_codegen_static_fields_for(BinaryCompatibility_t44EDF0C684F7241E727B341DF3896349BC34D810_il2cpp_TypeInfo_var))->get_TargetsAtLeast_Desktop_V4_5_0();
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		G_B3_0 = 2;
		goto IL_000b;
	}

IL_000a:
	{
		G_B3_0 = 3;
	}

IL_000b:
	{
		((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->set_s_QuirksVersion_23(G_B3_0);
		bool L_1;
		L_1 = UriParser_get_ShouldUseLegacyV2Quirks_mB8917CAC10CD13E44F2EB21D4033044BEAF132B2(/*hidden argument*/NULL);
		G_B4_0 = ((int32_t)31461245);
		if (L_1)
		{
			G_B5_0 = ((int32_t)31461245);
			goto IL_001f;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		goto IL_0024;
	}

IL_001f:
	{
		G_B6_0 = ((int32_t)33554432);
		G_B6_1 = G_B5_0;
	}

IL_0024:
	{
		((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->set_HttpSyntaxFlags_24(((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)G_B6_1|(int32_t)G_B6_0))|(int32_t)((int32_t)67108864)))|(int32_t)((int32_t)268435456))));
		bool L_2;
		L_2 = UriParser_get_ShouldUseLegacyV2Quirks_mB8917CAC10CD13E44F2EB21D4033044BEAF132B2(/*hidden argument*/NULL);
		G_B7_0 = ((int32_t)4049);
		if (L_2)
		{
			G_B8_0 = ((int32_t)4049);
			goto IL_0046;
		}
	}
	{
		G_B9_0 = ((int32_t)32);
		G_B9_1 = G_B7_0;
		goto IL_0047;
	}

IL_0046:
	{
		G_B9_0 = 0;
		G_B9_1 = G_B8_0;
	}

IL_0047:
	{
		((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->set_FileSyntaxFlags_25(((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)G_B9_1|(int32_t)G_B9_0))|(int32_t)((int32_t)8192)))|(int32_t)((int32_t)2097152)))|(int32_t)((int32_t)1048576)))|(int32_t)((int32_t)4194304)))|(int32_t)((int32_t)8388608)))|(int32_t)((int32_t)16777216)))|(int32_t)((int32_t)33554432)))|(int32_t)((int32_t)67108864)))|(int32_t)((int32_t)268435456))));
		Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * L_3 = (Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 *)il2cpp_codegen_object_new(Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mEF275C708A9D8C75BE351DE8D63068D20522B707(L_3, ((int32_t)25), /*hidden argument*/Dictionary_2__ctor_mEF275C708A9D8C75BE351DE8D63068D20522B707_RuntimeMethod_var);
		((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->set_m_Table_0(L_3);
		Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * L_4 = (Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 *)il2cpp_codegen_object_new(Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mEF275C708A9D8C75BE351DE8D63068D20522B707(L_4, ((int32_t)25), /*hidden argument*/Dictionary_2__ctor_mEF275C708A9D8C75BE351DE8D63068D20522B707_RuntimeMethod_var);
		((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->set_m_TempTable_1(L_4);
		int32_t L_5 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_HttpSyntaxFlags_24();
		BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 * L_6 = (BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 *)il2cpp_codegen_object_new(BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26_il2cpp_TypeInfo_var);
		BuiltInUriParser__ctor_m525296A62BB8A30ABA12A9DFE8C20CE22DA9CEAA(L_6, _stringLiteral58B716FF5428F7961E1403E6D969E605D0F27EAF, ((int32_t)80), L_5, /*hidden argument*/NULL);
		((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->set_HttpUri_7(L_6);
		Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * L_7 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_m_Table_0();
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_8 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_HttpUri_7();
		NullCheck(L_8);
		String_t* L_9;
		L_9 = UriParser_get_SchemeName_mFCD123235673631E05FE9BAF6955A0B43EEEBD80_inline(L_8, /*hidden argument*/NULL);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_10 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_HttpUri_7();
		NullCheck(L_7);
		Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993(L_7, L_9, L_10, /*hidden argument*/Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993_RuntimeMethod_var);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_11 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_HttpUri_7();
		NullCheck(L_11);
		int32_t L_12 = L_11->get_m_Flags_2();
		BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 * L_13 = (BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 *)il2cpp_codegen_object_new(BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26_il2cpp_TypeInfo_var);
		BuiltInUriParser__ctor_m525296A62BB8A30ABA12A9DFE8C20CE22DA9CEAA(L_13, _stringLiteralF27E4C631EBEFA337EC21BE8552E169C9DED78A2, ((int32_t)443), L_12, /*hidden argument*/NULL);
		((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->set_HttpsUri_8(L_13);
		Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * L_14 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_m_Table_0();
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_15 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_HttpsUri_8();
		NullCheck(L_15);
		String_t* L_16;
		L_16 = UriParser_get_SchemeName_mFCD123235673631E05FE9BAF6955A0B43EEEBD80_inline(L_15, /*hidden argument*/NULL);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_17 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_HttpsUri_8();
		NullCheck(L_14);
		Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993(L_14, L_16, L_17, /*hidden argument*/Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993_RuntimeMethod_var);
		int32_t L_18 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_HttpSyntaxFlags_24();
		BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 * L_19 = (BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 *)il2cpp_codegen_object_new(BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26_il2cpp_TypeInfo_var);
		BuiltInUriParser__ctor_m525296A62BB8A30ABA12A9DFE8C20CE22DA9CEAA(L_19, _stringLiteral587B0E053519266A1A5628C5DBE03AA33A3BBE95, ((int32_t)80), L_18, /*hidden argument*/NULL);
		((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->set_WsUri_9(L_19);
		Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * L_20 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_m_Table_0();
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_21 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_WsUri_9();
		NullCheck(L_21);
		String_t* L_22;
		L_22 = UriParser_get_SchemeName_mFCD123235673631E05FE9BAF6955A0B43EEEBD80_inline(L_21, /*hidden argument*/NULL);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_23 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_WsUri_9();
		NullCheck(L_20);
		Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993(L_20, L_22, L_23, /*hidden argument*/Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993_RuntimeMethod_var);
		int32_t L_24 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_HttpSyntaxFlags_24();
		BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 * L_25 = (BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 *)il2cpp_codegen_object_new(BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26_il2cpp_TypeInfo_var);
		BuiltInUriParser__ctor_m525296A62BB8A30ABA12A9DFE8C20CE22DA9CEAA(L_25, _stringLiteral56D7741BCA89552362FD24D11BB8980E3D8A444C, ((int32_t)443), L_24, /*hidden argument*/NULL);
		((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->set_WssUri_10(L_25);
		Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * L_26 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_m_Table_0();
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_27 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_WssUri_10();
		NullCheck(L_27);
		String_t* L_28;
		L_28 = UriParser_get_SchemeName_mFCD123235673631E05FE9BAF6955A0B43EEEBD80_inline(L_27, /*hidden argument*/NULL);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_29 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_WssUri_10();
		NullCheck(L_26);
		Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993(L_26, L_28, L_29, /*hidden argument*/Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993_RuntimeMethod_var);
		BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 * L_30 = (BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 *)il2cpp_codegen_object_new(BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26_il2cpp_TypeInfo_var);
		BuiltInUriParser__ctor_m525296A62BB8A30ABA12A9DFE8C20CE22DA9CEAA(L_30, _stringLiteral8CB5CAE4A06CBA4A72564C688228877DD24B9906, ((int32_t)21), ((int32_t)367005533), /*hidden argument*/NULL);
		((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->set_FtpUri_11(L_30);
		Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * L_31 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_m_Table_0();
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_32 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_FtpUri_11();
		NullCheck(L_32);
		String_t* L_33;
		L_33 = UriParser_get_SchemeName_mFCD123235673631E05FE9BAF6955A0B43EEEBD80_inline(L_32, /*hidden argument*/NULL);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_34 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_FtpUri_11();
		NullCheck(L_31);
		Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993(L_31, L_33, L_34, /*hidden argument*/Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993_RuntimeMethod_var);
		int32_t L_35 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_FileSyntaxFlags_25();
		BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 * L_36 = (BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 *)il2cpp_codegen_object_new(BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26_il2cpp_TypeInfo_var);
		BuiltInUriParser__ctor_m525296A62BB8A30ABA12A9DFE8C20CE22DA9CEAA(L_36, _stringLiteralC05DD95A56B355AAD74E9CE147B236E03FF8905E, (-1), L_35, /*hidden argument*/NULL);
		((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->set_FileUri_12(L_36);
		Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * L_37 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_m_Table_0();
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_38 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_FileUri_12();
		NullCheck(L_38);
		String_t* L_39;
		L_39 = UriParser_get_SchemeName_mFCD123235673631E05FE9BAF6955A0B43EEEBD80_inline(L_38, /*hidden argument*/NULL);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_40 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_FileUri_12();
		NullCheck(L_37);
		Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993(L_37, L_39, L_40, /*hidden argument*/Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993_RuntimeMethod_var);
		BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 * L_41 = (BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 *)il2cpp_codegen_object_new(BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26_il2cpp_TypeInfo_var);
		BuiltInUriParser__ctor_m525296A62BB8A30ABA12A9DFE8C20CE22DA9CEAA(L_41, _stringLiteralBE9CA5A938D04349B649020FA52D9EC24C97099D, ((int32_t)70), ((int32_t)337645405), /*hidden argument*/NULL);
		((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->set_GopherUri_13(L_41);
		Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * L_42 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_m_Table_0();
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_43 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_GopherUri_13();
		NullCheck(L_43);
		String_t* L_44;
		L_44 = UriParser_get_SchemeName_mFCD123235673631E05FE9BAF6955A0B43EEEBD80_inline(L_43, /*hidden argument*/NULL);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_45 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_GopherUri_13();
		NullCheck(L_42);
		Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993(L_42, L_44, L_45, /*hidden argument*/Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993_RuntimeMethod_var);
		BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 * L_46 = (BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 *)il2cpp_codegen_object_new(BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26_il2cpp_TypeInfo_var);
		BuiltInUriParser__ctor_m525296A62BB8A30ABA12A9DFE8C20CE22DA9CEAA(L_46, _stringLiteralA3C5DC11C0F491C18EA087784CC4C662A0629733, ((int32_t)119), ((int32_t)337645405), /*hidden argument*/NULL);
		((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->set_NntpUri_14(L_46);
		Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * L_47 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_m_Table_0();
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_48 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_NntpUri_14();
		NullCheck(L_48);
		String_t* L_49;
		L_49 = UriParser_get_SchemeName_mFCD123235673631E05FE9BAF6955A0B43EEEBD80_inline(L_48, /*hidden argument*/NULL);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_50 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_NntpUri_14();
		NullCheck(L_47);
		Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993(L_47, L_49, L_50, /*hidden argument*/Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993_RuntimeMethod_var);
		BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 * L_51 = (BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 *)il2cpp_codegen_object_new(BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26_il2cpp_TypeInfo_var);
		BuiltInUriParser__ctor_m525296A62BB8A30ABA12A9DFE8C20CE22DA9CEAA(L_51, _stringLiteral5FB56C8861544146EF414DAE01766AD43F440960, (-1), ((int32_t)268435536), /*hidden argument*/NULL);
		((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->set_NewsUri_15(L_51);
		Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * L_52 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_m_Table_0();
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_53 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_NewsUri_15();
		NullCheck(L_53);
		String_t* L_54;
		L_54 = UriParser_get_SchemeName_mFCD123235673631E05FE9BAF6955A0B43EEEBD80_inline(L_53, /*hidden argument*/NULL);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_55 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_NewsUri_15();
		NullCheck(L_52);
		Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993(L_52, L_54, L_55, /*hidden argument*/Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993_RuntimeMethod_var);
		BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 * L_56 = (BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 *)il2cpp_codegen_object_new(BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26_il2cpp_TypeInfo_var);
		BuiltInUriParser__ctor_m525296A62BB8A30ABA12A9DFE8C20CE22DA9CEAA(L_56, _stringLiteralDE0A8A4B33338D09BDE82F544CF26FB4B56B9F98, ((int32_t)25), ((int32_t)335564796), /*hidden argument*/NULL);
		((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->set_MailToUri_16(L_56);
		Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * L_57 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_m_Table_0();
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_58 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_MailToUri_16();
		NullCheck(L_58);
		String_t* L_59;
		L_59 = UriParser_get_SchemeName_mFCD123235673631E05FE9BAF6955A0B43EEEBD80_inline(L_58, /*hidden argument*/NULL);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_60 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_MailToUri_16();
		NullCheck(L_57);
		Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993(L_57, L_59, L_60, /*hidden argument*/Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993_RuntimeMethod_var);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_61 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_NewsUri_15();
		NullCheck(L_61);
		int32_t L_62 = L_61->get_m_Flags_2();
		BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 * L_63 = (BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 *)il2cpp_codegen_object_new(BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26_il2cpp_TypeInfo_var);
		BuiltInUriParser__ctor_m525296A62BB8A30ABA12A9DFE8C20CE22DA9CEAA(L_63, _stringLiteral8BF693870A1CA202D2EE1A186395E62B409214FD, (-1), L_62, /*hidden argument*/NULL);
		((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->set_UuidUri_17(L_63);
		Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * L_64 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_m_Table_0();
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_65 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_UuidUri_17();
		NullCheck(L_65);
		String_t* L_66;
		L_66 = UriParser_get_SchemeName_mFCD123235673631E05FE9BAF6955A0B43EEEBD80_inline(L_65, /*hidden argument*/NULL);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_67 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_UuidUri_17();
		NullCheck(L_64);
		Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993(L_64, L_66, L_67, /*hidden argument*/Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993_RuntimeMethod_var);
		BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 * L_68 = (BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 *)il2cpp_codegen_object_new(BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26_il2cpp_TypeInfo_var);
		BuiltInUriParser__ctor_m525296A62BB8A30ABA12A9DFE8C20CE22DA9CEAA(L_68, _stringLiteral5D81741866E0AFB5638DF15167E9A90CDC2CF124, ((int32_t)23), ((int32_t)337645405), /*hidden argument*/NULL);
		((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->set_TelnetUri_18(L_68);
		Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * L_69 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_m_Table_0();
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_70 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_TelnetUri_18();
		NullCheck(L_70);
		String_t* L_71;
		L_71 = UriParser_get_SchemeName_mFCD123235673631E05FE9BAF6955A0B43EEEBD80_inline(L_70, /*hidden argument*/NULL);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_72 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_TelnetUri_18();
		NullCheck(L_69);
		Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993(L_69, L_71, L_72, /*hidden argument*/Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993_RuntimeMethod_var);
		BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 * L_73 = (BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 *)il2cpp_codegen_object_new(BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26_il2cpp_TypeInfo_var);
		BuiltInUriParser__ctor_m525296A62BB8A30ABA12A9DFE8C20CE22DA9CEAA(L_73, _stringLiteral9753F194FF9C1EAC5D2E1FAADADC2E63D96E516E, ((int32_t)389), ((int32_t)337645565), /*hidden argument*/NULL);
		((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->set_LdapUri_19(L_73);
		Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * L_74 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_m_Table_0();
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_75 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_LdapUri_19();
		NullCheck(L_75);
		String_t* L_76;
		L_76 = UriParser_get_SchemeName_mFCD123235673631E05FE9BAF6955A0B43EEEBD80_inline(L_75, /*hidden argument*/NULL);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_77 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_LdapUri_19();
		NullCheck(L_74);
		Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993(L_74, L_76, L_77, /*hidden argument*/Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993_RuntimeMethod_var);
		BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 * L_78 = (BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 *)il2cpp_codegen_object_new(BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26_il2cpp_TypeInfo_var);
		BuiltInUriParser__ctor_m525296A62BB8A30ABA12A9DFE8C20CE22DA9CEAA(L_78, _stringLiteralD39E208E1EDCA34C72FCD76197E0EA7CD671D2F9, ((int32_t)808), ((int32_t)400559737), /*hidden argument*/NULL);
		((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->set_NetTcpUri_20(L_78);
		Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * L_79 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_m_Table_0();
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_80 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_NetTcpUri_20();
		NullCheck(L_80);
		String_t* L_81;
		L_81 = UriParser_get_SchemeName_mFCD123235673631E05FE9BAF6955A0B43EEEBD80_inline(L_80, /*hidden argument*/NULL);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_82 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_NetTcpUri_20();
		NullCheck(L_79);
		Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993(L_79, L_81, L_82, /*hidden argument*/Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993_RuntimeMethod_var);
		BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 * L_83 = (BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 *)il2cpp_codegen_object_new(BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26_il2cpp_TypeInfo_var);
		BuiltInUriParser__ctor_m525296A62BB8A30ABA12A9DFE8C20CE22DA9CEAA(L_83, _stringLiteral3AB04459C95BC4FFBBDA41BF1A685753EB83D903, (-1), ((int32_t)400559729), /*hidden argument*/NULL);
		((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->set_NetPipeUri_21(L_83);
		Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * L_84 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_m_Table_0();
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_85 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_NetPipeUri_21();
		NullCheck(L_85);
		String_t* L_86;
		L_86 = UriParser_get_SchemeName_mFCD123235673631E05FE9BAF6955A0B43EEEBD80_inline(L_85, /*hidden argument*/NULL);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_87 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_NetPipeUri_21();
		NullCheck(L_84);
		Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993(L_84, L_86, L_87, /*hidden argument*/Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993_RuntimeMethod_var);
		BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 * L_88 = (BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 *)il2cpp_codegen_object_new(BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26_il2cpp_TypeInfo_var);
		BuiltInUriParser__ctor_m525296A62BB8A30ABA12A9DFE8C20CE22DA9CEAA(L_88, _stringLiteral19A87220AA9460BCE77166C6A721ECA99780C3E7, (-1), ((int32_t)399519697), /*hidden argument*/NULL);
		((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->set_VsMacrosUri_22(L_88);
		Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * L_89 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_m_Table_0();
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_90 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_VsMacrosUri_22();
		NullCheck(L_90);
		String_t* L_91;
		L_91 = UriParser_get_SchemeName_mFCD123235673631E05FE9BAF6955A0B43EEEBD80_inline(L_90, /*hidden argument*/NULL);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_92 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_VsMacrosUri_22();
		NullCheck(L_89);
		Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993(L_89, L_91, L_92, /*hidden argument*/Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993_RuntimeMethod_var);
		return;
	}
}
// System.UriSyntaxFlags System.UriParser::get_Flags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UriParser_get_Flags_mDAA0D828057CA2CA4493FD152D3760E975BAE7F0 (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_Flags_2();
		return L_0;
	}
}
// System.Boolean System.UriParser::NotAny(System.UriSyntaxFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UriParser_NotAny_m6A42FAC623F0EBDE441782DAC3E3B2ED34756D91 (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * __this, int32_t ___flags0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___flags0;
		bool L_1;
		L_1 = UriParser_IsFullMatch_m3967BB43AFB5C11B75DA3BD1CE18B8DAE8F0C32E(__this, L_0, 0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.UriParser::InFact(System.UriSyntaxFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UriParser_InFact_m4E58BAFAB5A9BC24854C815FC093E16D4F1CFA4D (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * __this, int32_t ___flags0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___flags0;
		bool L_1;
		L_1 = UriParser_IsFullMatch_m3967BB43AFB5C11B75DA3BD1CE18B8DAE8F0C32E(__this, L_0, 0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.UriParser::IsAllSet(System.UriSyntaxFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UriParser_IsAllSet_m356BD044D8A53560B6A7AA9B81A20A364E015C18 (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * __this, int32_t ___flags0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___flags0;
		int32_t L_1 = ___flags0;
		bool L_2;
		L_2 = UriParser_IsFullMatch_m3967BB43AFB5C11B75DA3BD1CE18B8DAE8F0C32E(__this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.UriParser::IsFullMatch(System.UriSyntaxFlags,System.UriSyntaxFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UriParser_IsFullMatch_m3967BB43AFB5C11B75DA3BD1CE18B8DAE8F0C32E (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * __this, int32_t ___flags0, int32_t ___expected1, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriParser__ctor_m9A2C47C1F30EF65ADFBAEB0A569FB972F383825C (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * __this, int32_t ___flags0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___flags0;
		__this->set_m_Flags_2(L_0);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_m_Scheme_6(L_1);
		return;
	}
}
// System.UriParser System.UriParser::FindOrFetchAsUnknownV1Syntax(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * UriParser_FindOrFetchAsUnknownV1Syntax_m7844992E6D0B5FD676AEE47EBD4806305418D6CC (String_t* ___lwrCaseScheme0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m05B3B2E9A02468956D9D51C30093821BFBC3C63A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mEF275C708A9D8C75BE351DE8D63068D20522B707_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_mC890D4862BCE096F4E905A751AEE39B30478357C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * V_0 = NULL;
	Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * V_1 = NULL;
	bool V_2 = false;
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		V_0 = (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A *)NULL;
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
		Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * L_0 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_m_Table_0();
		String_t* L_1 = ___lwrCaseScheme0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m05B3B2E9A02468956D9D51C30093821BFBC3C63A(L_0, L_1, (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m05B3B2E9A02468956D9D51C30093821BFBC3C63A_RuntimeMethod_var);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_3 = V_0;
		if (!L_3)
		{
			goto IL_0015;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_4 = V_0;
		return L_4;
	}

IL_0015:
	{
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
		Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * L_5 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_m_TempTable_1();
		String_t* L_6 = ___lwrCaseScheme0;
		NullCheck(L_5);
		bool L_7;
		L_7 = Dictionary_2_TryGetValue_m05B3B2E9A02468956D9D51C30093821BFBC3C63A(L_5, L_6, (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m05B3B2E9A02468956D9D51C30093821BFBC3C63A_RuntimeMethod_var);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_8 = V_0;
		if (!L_8)
		{
			goto IL_0028;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_9 = V_0;
		return L_9;
	}

IL_0028:
	{
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
		Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * L_10 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_m_Table_0();
		V_1 = L_10;
		V_2 = (bool)0;
	}

IL_0030:
	try
	{ // begin try (depth: 1)
		{
			Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * L_11 = V_1;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_11, (bool*)(&V_2), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
			Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * L_12 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_m_TempTable_1();
			NullCheck(L_12);
			int32_t L_13;
			L_13 = Dictionary_2_get_Count_mC890D4862BCE096F4E905A751AEE39B30478357C(L_12, /*hidden argument*/Dictionary_2_get_Count_mC890D4862BCE096F4E905A751AEE39B30478357C_RuntimeMethod_var);
			if ((((int32_t)L_13) < ((int32_t)((int32_t)512))))
			{
				goto IL_0055;
			}
		}

IL_0049:
		{
			Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * L_14 = (Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 *)il2cpp_codegen_object_new(Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5_il2cpp_TypeInfo_var);
			Dictionary_2__ctor_mEF275C708A9D8C75BE351DE8D63068D20522B707(L_14, ((int32_t)25), /*hidden argument*/Dictionary_2__ctor_mEF275C708A9D8C75BE351DE8D63068D20522B707_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
			((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->set_m_TempTable_1(L_14);
		}

IL_0055:
		{
			String_t* L_15 = ___lwrCaseScheme0;
			BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 * L_16 = (BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 *)il2cpp_codegen_object_new(BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26_il2cpp_TypeInfo_var);
			BuiltInUriParser__ctor_m525296A62BB8A30ABA12A9DFE8C20CE22DA9CEAA(L_16, L_15, (-1), ((int32_t)351342590), /*hidden argument*/NULL);
			V_0 = L_16;
			IL2CPP_RUNTIME_CLASS_INIT(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
			Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * L_17 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_m_TempTable_1();
			String_t* L_18 = ___lwrCaseScheme0;
			UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_19 = V_0;
			NullCheck(L_17);
			Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993(L_17, L_18, L_19, /*hidden argument*/Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993_RuntimeMethod_var);
			UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_20 = V_0;
			V_3 = L_20;
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
			bool L_21 = V_2;
			if (!L_21)
			{
				goto IL_007b;
			}
		}

IL_0075:
		{
			Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * L_22 = V_1;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_22, /*hidden argument*/NULL);
		}

IL_007b:
		{
			IL2CPP_END_FINALLY(114)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(114)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x7C, IL_007c)
	}

IL_007c:
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_23 = V_3;
		return L_23;
	}
}
// System.Boolean System.UriParser::get_IsSimple()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UriParser_get_IsSimple_m09BA6505FDD1AE0BF6C711AE9C2C3F9379B868F8 (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * __this, const RuntimeMethod* method)
{
	{
		bool L_0;
		L_0 = UriParser_InFact_m4E58BAFAB5A9BC24854C815FC093E16D4F1CFA4D(__this, ((int32_t)131072), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.UriParser System.UriParser::InternalOnNewUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * UriParser_InternalOnNewUri_m0AC629BCCA398E9A193AC16A5E91D445B9B70D79 (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * __this, const RuntimeMethod* method)
{
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * V_0 = NULL;
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_0;
		L_0 = VirtFuncInvoker0< UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * >::Invoke(4 /* System.UriParser System.UriParser::OnNewUri() */, __this);
		V_0 = L_0;
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_1 = V_0;
		if ((((RuntimeObject*)(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A *)__this) == ((RuntimeObject*)(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A *)L_1)))
		{
			goto IL_002f;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_2 = V_0;
		String_t* L_3 = __this->get_m_Scheme_6();
		NullCheck(L_2);
		L_2->set_m_Scheme_6(L_3);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_4 = V_0;
		int32_t L_5 = __this->get_m_Port_5();
		NullCheck(L_4);
		L_4->set_m_Port_5(L_5);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_6 = V_0;
		int32_t L_7 = __this->get_m_Flags_2();
		NullCheck(L_6);
		L_6->set_m_Flags_2(L_7);
	}

IL_002f:
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_8 = V_0;
		return L_8;
	}
}
// System.Void System.UriParser::InternalValidate(System.Uri,System.UriFormatException&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriParser_InternalValidate_mB845C482B4B01EDFE012DD4C4CEF62C8F4FFE94F (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * __this, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___thisUri0, UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D ** ___parsingError1, const RuntimeMethod* method)
{
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_0 = ___thisUri0;
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D ** L_1 = ___parsingError1;
		VirtActionInvoker2< Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *, UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D ** >::Invoke(5 /* System.Void System.UriParser::InitializeAndValidate(System.Uri,System.UriFormatException&) */, __this, L_0, (UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D **)L_1);
		return;
	}
}
// System.String System.UriParser::InternalResolve(System.Uri,System.Uri,System.UriFormatException&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UriParser_InternalResolve_m7EF249EAEFB9DDE866F9830E91CC61E09F1548E9 (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * __this, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___thisBaseUri0, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___uriLink1, UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D ** ___parsingError2, const RuntimeMethod* method)
{
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_0 = ___thisBaseUri0;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_1 = ___uriLink1;
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D ** L_2 = ___parsingError2;
		String_t* L_3;
		L_3 = VirtFuncInvoker3< String_t*, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *, UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D ** >::Invoke(6 /* System.String System.UriParser::Resolve(System.Uri,System.Uri,System.UriFormatException&) */, __this, L_0, L_1, (UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D **)L_2);
		return L_3;
	}
}
// System.String System.UriParser::InternalGetComponents(System.Uri,System.UriComponents,System.UriFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UriParser_InternalGetComponents_mAB0A54E462724FA417D0EF3A2AD0BD24BC66DFF8 (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * __this, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___thisUri0, int32_t ___uriComponents1, int32_t ___uriFormat2, const RuntimeMethod* method)
{
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_0 = ___thisUri0;
		int32_t L_1 = ___uriComponents1;
		int32_t L_2 = ___uriFormat2;
		String_t* L_3;
		L_3 = VirtFuncInvoker3< String_t*, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *, int32_t, int32_t >::Invoke(7 /* System.String System.UriParser::GetComponents(System.Uri,System.UriComponents,System.UriFormat) */, __this, L_0, L_1, L_2);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.UriTypeConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriTypeConverter__ctor_mA17261C142F48B539C7255CC50CA95F730854EAB (UriTypeConverter_tF512B4F48E57AC42B460E2847743CD78F4D24694 * __this, const RuntimeMethod* method)
{
	{
		TypeConverter__ctor_mCD87E569A2C4CB1331A069396FFA98E65726A16C(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.UriTypeConverter::CanConvert(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UriTypeConverter_CanConvert_mA0211689C50AF82982D1A12135FA0CFB8548A392 (UriTypeConverter_tF512B4F48E57AC42B460E2847743CD78F4D24694 * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___type0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_0, L_2, /*hidden argument*/NULL);
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
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6;
		L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		bool L_7;
		L_7 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_4, L_6, /*hidden argument*/NULL);
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
		return (bool)0;
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
// System.Void System.Net.Configuration.WebProxyScriptElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebProxyScriptElement__ctor_m943D653C6A20D602A9ED7F0D13E0ED41691CC2C2 (WebProxyScriptElement_t6E2DB4259FF77920BA00BBA7AC7E0BAC995FD76F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebProxyScriptElement__ctor_m943D653C6A20D602A9ED7F0D13E0ED41691CC2C2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebProxyScriptElement__ctor_m943D653C6A20D602A9ED7F0D13E0ED41691CC2C2_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.WebProxyScriptElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t8C098DB59DF7BA2C2A71369978F4225B92B2F59B * WebProxyScriptElement_get_Properties_mD29E00ECE9AAA868495BECD6D88C48BBFE74F26E (WebProxyScriptElement_t6E2DB4259FF77920BA00BBA7AC7E0BAC995FD76F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebProxyScriptElement_get_Properties_mD29E00ECE9AAA868495BECD6D88C48BBFE74F26E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebProxyScriptElement_get_Properties_mD29E00ECE9AAA868495BECD6D88C48BBFE74F26E_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t8C098DB59DF7BA2C2A71369978F4225B92B2F59B *)NULL;
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
// System.Void System.Net.Configuration.WebRequestModuleElementCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestModuleElementCollection__ctor_mE32DEB8FF2F3E3582D6E9C291B6496BAFD182D3B (WebRequestModuleElementCollection_tC1A60891298C544F74DA731DDEEFE603015C09C9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestModuleElementCollection__ctor_mE32DEB8FF2F3E3582D6E9C291B6496BAFD182D3B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebRequestModuleElementCollection__ctor_mE32DEB8FF2F3E3582D6E9C291B6496BAFD182D3B_RuntimeMethod_var);
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
// System.Void System.Net.Configuration.WebRequestModulesSection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestModulesSection__ctor_mE9CD09355B8B10829D4B6D2681811DC7F199B8D2 (WebRequestModulesSection_t2F6BB673DEE919615116B391BA37F70831084603 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestModulesSection__ctor_mE9CD09355B8B10829D4B6D2681811DC7F199B8D2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebRequestModulesSection__ctor_mE9CD09355B8B10829D4B6D2681811DC7F199B8D2_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.WebRequestModulesSection::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t8C098DB59DF7BA2C2A71369978F4225B92B2F59B * WebRequestModulesSection_get_Properties_mF7B71DE46486B2AF3D42FB3B877CDBC35B5FFC2E (WebRequestModulesSection_t2F6BB673DEE919615116B391BA37F70831084603 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestModulesSection_get_Properties_mF7B71DE46486B2AF3D42FB3B877CDBC35B5FFC2E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebRequestModulesSection_get_Properties_mF7B71DE46486B2AF3D42FB3B877CDBC35B5FFC2E_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t8C098DB59DF7BA2C2A71369978F4225B92B2F59B *)NULL;
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
// System.Void System.ComponentModel.Win32Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Win32Exception__ctor_m0DCDDC4BEF1DCC24190F7AAE8BB309FB5A8A9474 (Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = Marshal_GetLastWin32Error_m87DFFDB64662B46C9CF913EC08E5CEFF3A6E314D(/*hidden argument*/NULL);
		Win32Exception__ctor_mF8FAD9681BA8B2EFBD1EDA7C690764FF60E85A6F(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.ComponentModel.Win32Exception::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Win32Exception__ctor_mF8FAD9681BA8B2EFBD1EDA7C690764FF60E85A6F (Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950 * __this, int32_t ___error0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___error0;
		int32_t L_1 = ___error0;
		IL2CPP_RUNTIME_CLASS_INIT(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Win32Exception_GetErrorMessage_m97F829AC1253FC3BAD24E9F484ECA9F227360C9A(L_1, /*hidden argument*/NULL);
		Win32Exception__ctor_mC836B11093135ABE3B7F402DCD0564E58B8CDA02(__this, L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.ComponentModel.Win32Exception::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Win32Exception__ctor_mC836B11093135ABE3B7F402DCD0564E58B8CDA02 (Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950 * __this, int32_t ___error0, String_t* ___message1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message1;
		ExternalException__ctor_m8A6870938AE42D989A00B950B2F298F70FD32AAA(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___error0;
		__this->set_nativeErrorCode_17(L_1);
		return;
	}
}
// System.Void System.ComponentModel.Win32Exception::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Win32Exception__ctor_m712FC6079EE6F92FAB0B3DDAFD652B24FF163CC6 (Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BF6290AF676E80C38F6589505DFD9ECD0590836);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  L_1 = ___context1;
		ExternalException__ctor_mF237400F375CB6BA1857B5C5EE7419AA59069184(__this, L_0, L_1, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = SerializationInfo_GetInt32_mB22BBD01CBC189B7A76465CBFF7224F619395D30(L_2, _stringLiteral3BF6290AF676E80C38F6589505DFD9ECD0590836, /*hidden argument*/NULL);
		__this->set_nativeErrorCode_17(L_3);
		return;
	}
}
// System.Void System.ComponentModel.Win32Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Win32Exception_GetObjectData_mFB1F75CC318DB1FA595ECA5466F331AEC686BB07 (Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BF6290AF676E80C38F6589505DFD9ECD0590836);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Win32Exception_GetObjectData_mFB1F75CC318DB1FA595ECA5466F331AEC686BB07_RuntimeMethod_var)));
	}

IL_000e:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		int32_t L_3 = __this->get_nativeErrorCode_17();
		NullCheck(L_2);
		SerializationInfo_AddValue_m3DF5B182A63FFCD12287E97EA38944D0C6405BB5(L_2, _stringLiteral3BF6290AF676E80C38F6589505DFD9ECD0590836, L_3, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_4 = ___info0;
		StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  L_5 = ___context1;
		Exception_GetObjectData_m2031046D41E7BEE3C743E918B358A336F99D6882(__this, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.ComponentModel.Win32Exception::GetErrorMessage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Win32Exception_GetErrorMessage_m97F829AC1253FC3BAD24E9F484ECA9F227360C9A (int32_t ___error0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mA9A5AC6DC5483E78A8A41145515BF11AF259409E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFA84BE1B233FD908181C2B76616E356218E5B31);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var);
		bool L_0 = ((Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields*)il2cpp_codegen_static_fields_for(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var))->get_s_ErrorMessagesInitialized_18();
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var);
		Win32Exception_InitializeErrorMessages_mDC8118C693BE2CA20C9E9D5822BEFAC621F3C535(/*hidden argument*/NULL);
	}

IL_000c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var);
		Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * L_1 = ((Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields*)il2cpp_codegen_static_fields_for(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var))->get_s_ErrorMessage_19();
		int32_t L_2 = ___error0;
		NullCheck(L_1);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_mA9A5AC6DC5483E78A8A41145515BF11AF259409E(L_1, L_2, (String_t**)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_mA9A5AC6DC5483E78A8A41145515BF11AF259409E_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		String_t* L_4 = V_0;
		return L_4;
	}

IL_001d:
	{
		int32_t L_5 = ___error0;
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralAFA84BE1B233FD908181C2B76616E356218E5B31, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Void System.ComponentModel.Win32Exception::InitializeErrorMessages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Win32Exception_InitializeErrorMessages_mDC8118C693BE2CA20C9E9D5822BEFAC621F3C535 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var);
		bool L_0 = ((Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields*)il2cpp_codegen_static_fields_for(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var))->get_s_ErrorMessagesInitialized_18();
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		return;
	}

IL_0008:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var);
		Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * L_1 = ((Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields*)il2cpp_codegen_static_fields_for(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var))->get_s_ErrorMessage_19();
		V_0 = L_1;
		V_1 = (bool)0;
	}

IL_0010:
	try
	{ // begin try (depth: 1)
		{
			Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * L_2 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_2, (bool*)(&V_1), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var);
			bool L_3 = ((Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields*)il2cpp_codegen_static_fields_for(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var))->get_s_ErrorMessagesInitialized_18();
			if (!L_3)
			{
				goto IL_0021;
			}
		}

IL_001f:
		{
			IL2CPP_LEAVE(0x38, FINALLY_002e);
		}

IL_0021:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var);
			Win32Exception_InitializeErrorMessages1_mDB6558EB5202E7110C6702CC1837399830906C89(/*hidden argument*/NULL);
			((Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields*)il2cpp_codegen_static_fields_for(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var))->set_s_ErrorMessagesInitialized_18((bool)1);
			IL2CPP_LEAVE(0x38, FINALLY_002e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002e;
	}

FINALLY_002e:
	{ // begin finally (depth: 1)
		{
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_0037;
			}
		}

IL_0031:
		{
			Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * L_5 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_5, /*hidden argument*/NULL);
		}

IL_0037:
		{
			IL2CPP_END_FINALLY(46)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(46)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x38, IL_0038)
	}

IL_0038:
	{
		return;
	}
}
// System.Void System.ComponentModel.Win32Exception::InitializeErrorMessages1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Win32Exception_InitializeErrorMessages1_mDB6558EB5202E7110C6702CC1837399830906C89 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10FC672FB9F87F9D6AFF9F8D6BFF4199EF333405);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11F95AF2256BE4BBDBEAF89CB3904A6AB1B3A01D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1207530D7D4A8643E4DA91D94090C5B782E8D4AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E8AB4D0974C246EABB424179864CCBA5DCEE064);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20F8CFBBD4C388C4999BC67998CD7310A3357E3F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2243F389E5AA3DE4541A15C92A9BACE59F8BE4E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral254B65344AFC181606CA4DFAD96AD5ECAF4EC1A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A97A21771096701008C3221E4E58C40E34C5D2A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C0C7BE659E23DAFA1146EBB9040344301391983);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F709974418B85825D8E38ADF52E90B7496ED7A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral324033F505A57738479E4A50C6C83DD40C3EEC72);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36A832BCE093B1C64A8D587D84C04716FC3D8123);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D3AA5822C64FA34CB5E37391CFC58263F937F30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D578B33304CEDE293DF5286833AF99CB7582472);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F87CFEF1A1BA898EEFCE807810982D16AC01A99);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49FCFEB950E4FC1E14C6AB9024A0D20CC2BEB985);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4ACEC7A42FAB928B0D1510DB60C3D35BC6DC4D9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4FA8C3994CCEF6319AF0BED6CBC74C41F5E23E78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5274194BE573E6D86BDC850C768FAEBD25A0C72E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54C50EBA1F9B7D1A0F12E6A2A0DC78BF59231F31);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EF9365F8C43E6AB95C818EEEE9E5EF0D539BF1A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EFEED0117DD1A53229D6D374013D42D30B1B19E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A1647F2AA7442466F1E26B4E54D7ACAA785F886);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F42498ADE17E452CCFC96AF356C74D51ACA0524);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F60E896CBE94313C35CDF8C33C899216DA269EF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6FEF7F07E4E5C8758103389685FF14ABCB30BD0B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral751F5076C7A89E0EBF4B8BBF42D19173A068D0FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A4031343C4BF504EC9F4A28169986445F910C6A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8398C464CEF2A8E224363DAF635848402299705A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C411E2A2C61BD26D48EEB5D245D2D203BD74BA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95FFF748EEEE6E0D4ADA84ED41FB391126B8CFF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9610F86E2CB2A021571D9CE9BF9630C0084AAF00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98086E81726E63C07D5EE51033D818164107DDF6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA07CCE227D5A4E151B0A5EF141705717C77B8CFE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA431B02F755D1ADA246246ACF4AD7497CFB57892);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC705511F599E168CB4A19DE96F050E694A04892);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4F44FFF8E8B6A3CA093580564BB4F0DF515EB8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0A48EDC742B92D7EFD262D5F90073EE36ECFEFF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC32ED50300303AD9E773DE5B27CD33A424A6F172);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC517A672C519F103745EEF18967AD4081CBFAEE2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC54E67FF6B0A0F7026D9F0CA0C1E11CC59B88ADC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD808C493DAE7E08DD825B3BE75EC7DF375082B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEF86F29033280F9E4D053455DDC08C8746E5E5E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9EDAE09EFB19C1354AEFDA553B4B5DC28D5CD87);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA0721C1938DB62218B172D4D91AD61AFD6EA65A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE9E1E6A7FD6E2514E97545C0BC4A067C0DAD5E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF9B137BC764E0190EA1D7EEB32F2364F3F3A2DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6FA6FADCE3B49C8F065918B497F388AB44DA05D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB9599E9ABB0C609991C09C03544164393F9661D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEEAB711A5B5FD0EFECB9A5166B548777BDDB7901);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF388C7719B1FB6CFBD759164BEE4F33BB420FF6E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF64982ECFBBDC20AF3E40B6D5C0B68965820A033);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCC60170DC9ECA079BBFC781ACD49B93D0E8C4AE);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var);
		Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * L_0 = ((Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields*)il2cpp_codegen_static_fields_for(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var))->get_s_ErrorMessage_19();
		NullCheck(L_0);
		Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0(L_0, ((int32_t)10036), _stringLiteralD9EDAE09EFB19C1354AEFDA553B4B5DC28D5CD87, /*hidden argument*/Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0_RuntimeMethod_var);
		Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * L_1 = ((Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields*)il2cpp_codegen_static_fields_for(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var))->get_s_ErrorMessage_19();
		NullCheck(L_1);
		Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0(L_1, ((int32_t)10037), _stringLiteralFCC60170DC9ECA079BBFC781ACD49B93D0E8C4AE, /*hidden argument*/Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0_RuntimeMethod_var);
		Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * L_2 = ((Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields*)il2cpp_codegen_static_fields_for(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var))->get_s_ErrorMessage_19();
		NullCheck(L_2);
		Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0(L_2, ((int32_t)10038), _stringLiteralC517A672C519F103745EEF18967AD4081CBFAEE2, /*hidden argument*/Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0_RuntimeMethod_var);
		Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * L_3 = ((Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields*)il2cpp_codegen_static_fields_for(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var))->get_s_ErrorMessage_19();
		NullCheck(L_3);
		Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0(L_3, ((int32_t)10039), _stringLiteral2C0C7BE659E23DAFA1146EBB9040344301391983, /*hidden argument*/Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0_RuntimeMethod_var);
		Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * L_4 = ((Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields*)il2cpp_codegen_static_fields_for(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var))->get_s_ErrorMessage_19();
		NullCheck(L_4);
		Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0(L_4, ((int32_t)10040), _stringLiteral95FFF748EEEE6E0D4ADA84ED41FB391126B8CFF7, /*hidden argument*/Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0_RuntimeMethod_var);
		Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * L_5 = ((Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields*)il2cpp_codegen_static_fields_for(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var))->get_s_ErrorMessage_19();
		NullCheck(L_5);
		Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0(L_5, ((int32_t)10041), _stringLiteral54C50EBA1F9B7D1A0F12E6A2A0DC78BF59231F31, /*hidden argument*/Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0_RuntimeMethod_var);
		Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * L_6 = ((Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields*)il2cpp_codegen_static_fields_for(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var))->get_s_ErrorMessage_19();
		NullCheck(L_6);
		Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0(L_6, ((int32_t)10042), _stringLiteral3D578B33304CEDE293DF5286833AF99CB7582472, /*hidden argument*/Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0_RuntimeMethod_var);
		Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * L_7 = ((Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields*)il2cpp_codegen_static_fields_for(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var))->get_s_ErrorMessage_19();
		NullCheck(L_7);
		Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0(L_7, ((int32_t)10043), _stringLiteral3F87CFEF1A1BA898EEFCE807810982D16AC01A99, /*hidden argument*/Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0_RuntimeMethod_var);
		Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * L_8 = ((Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields*)il2cpp_codegen_static_fields_for(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var))->get_s_ErrorMessage_19();
		NullCheck(L_8);
		Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0(L_8, ((int32_t)10044), _stringLiteralA07CCE227D5A4E151B0A5EF141705717C77B8CFE, /*hidden argument*/Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0_RuntimeMethod_var);
		Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * L_9 = ((Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields*)il2cpp_codegen_static_fields_for(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var))->get_s_ErrorMessage_19();
		NullCheck(L_9);
		Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0(L_9, ((int32_t)10045), _stringLiteralC0A48EDC742B92D7EFD262D5F90073EE36ECFEFF, /*hidden argument*/Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0_RuntimeMethod_var);
		Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * L_10 = ((Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields*)il2cpp_codegen_static_fields_for(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var))->get_s_ErrorMessage_19();
		NullCheck(L_10);
		Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0(L_10, ((int32_t)10046), _stringLiteral8398C464CEF2A8E224363DAF635848402299705A, /*hidden argument*/Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0_RuntimeMethod_var);
		Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * L_11 = ((Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields*)il2cpp_codegen_static_fields_for(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var))->get_s_ErrorMessage_19();
		NullCheck(L_11);
		Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0(L_11, ((int32_t)10047), _stringLiteral98086E81726E63C07D5EE51033D818164107DDF6, /*hidden argument*/Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0_RuntimeMethod_var);
		Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * L_12 = ((Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields*)il2cpp_codegen_static_fields_for(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var))->get_s_ErrorMessage_19();
		NullCheck(L_12);
		Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0(L_12, ((int32_t)10048), _stringLiteralC54E67FF6B0A0F7026D9F0CA0C1E11CC59B88ADC, /*hidden argument*/Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0_RuntimeMethod_var);
		Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * L_13 = ((Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields*)il2cpp_codegen_static_fields_for(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var))->get_s_ErrorMessage_19();
		NullCheck(L_13);
		Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0(L_13, ((int32_t)10049), _stringLiteralDF9B137BC764E0190EA1D7EEB32F2364F3F3A2DF, /*hidden argument*/Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0_RuntimeMethod_var);
		Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * L_14 = ((Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields*)il2cpp_codegen_static_fields_for(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var))->get_s_ErrorMessage_19();
		NullCheck(L_14);
		Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0(L_14, ((int32_t)10050), _stringLiteral4ACEC7A42FAB928B0D1510DB60C3D35BC6DC4D9F, /*hidden argument*/Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0_RuntimeMethod_var);
		Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * L_15 = ((Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields*)il2cpp_codegen_static_fields_for(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var))->get_s_ErrorMessage_19();
		NullCheck(L_15);
		Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0(L_15, ((int32_t)10051), _stringLiteral2F709974418B85825D8E38ADF52E90B7496ED7A3, /*hidden argument*/Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0_RuntimeMethod_var);
		Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * L_16 = ((Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields*)il2cpp_codegen_static_fields_for(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var))->get_s_ErrorMessage_19();
		NullCheck(L_16);
		Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0(L_16, ((int32_t)10052), _stringLiteral6F60E896CBE94313C35CDF8C33C899216DA269EF, /*hidden argument*/Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0_RuntimeMethod_var);
		Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * L_17 = ((Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields*)il2cpp_codegen_static_fields_for(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var))->get_s_ErrorMessage_19();
		NullCheck(L_17);
		Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0(L_17, ((int32_t)10053), _stringLiteral5274194BE573E6D86BDC850C768FAEBD25A0C72E, /*hidden argument*/Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0_RuntimeMethod_var);
		Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * L_18 = ((Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields*)il2cpp_codegen_static_fields_for(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var))->get_s_ErrorMessage_19();
		NullCheck(L_18);
		Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0(L_18, ((int32_t)10054), _stringLiteral6F42498ADE17E452CCFC96AF356C74D51ACA0524, /*hidden argument*/Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0_RuntimeMethod_var);
		Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * L_19 = ((Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields*)il2cpp_codegen_static_fields_for(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var))->get_s_ErrorMessage_19();
		NullCheck(L_19);
		Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0(L_19, ((int32_t)10055), _stringLiteralF388C7719B1FB6CFBD759164BEE4F33BB420FF6E, /*hidden argument*/Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0_RuntimeMethod_var);
		Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * L_20 = ((Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields*)il2cpp_codegen_static_fields_for(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var))->get_s_ErrorMessage_19();
		NullCheck(L_20);
		Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0(L_20, ((int32_t)10056), _stringLiteral751F5076C7A89E0EBF4B8BBF42D19173A068D0FE, /*hidden argument*/Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0_RuntimeMethod_var);
		Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * L_21 = ((Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields*)il2cpp_codegen_static_fields_for(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var))->get_s_ErrorMessage_19();
		NullCheck(L_21);
		Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0(L_21, ((int32_t)10057), _stringLiteral5EFEED0117DD1A53229D6D374013D42D30B1B19E, /*hidden argument*/Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0_RuntimeMethod_var);
		Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * L_22 = ((Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields*)il2cpp_codegen_static_fields_for(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var))->get_s_ErrorMessage_19();
		NullCheck(L_22);
		Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0(L_22, ((int32_t)10058), _stringLiteral85C411E2A2C61BD26D48EEB5D245D2D203BD74BA, /*hidden argument*/Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0_RuntimeMethod_var);
		Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * L_23 = ((Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields*)il2cpp_codegen_static_fields_for(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var))->get_s_ErrorMessage_19();
		NullCheck(L_23);
		Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0(L_23, ((int32_t)10059), _stringLiteralAC705511F599E168CB4A19DE96F050E694A04892, /*hidden argument*/Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0_RuntimeMethod_var);
		Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * L_24 = ((Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields*)il2cpp_codegen_static_fields_for(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var))->get_s_ErrorMessage_19();
		NullCheck(L_24);
		Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0(L_24, ((int32_t)10060), _stringLiteralE6FA6FADCE3B49C8F065918B497F388AB44DA05D, /*hidden argument*/Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0_RuntimeMethod_var);
		Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * L_25 = ((Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields*)il2cpp_codegen_static_fields_for(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var))->get_s_ErrorMessage_19();
		NullCheck(L_25);
		Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0(L_25, ((int32_t)10061), _stringLiteralA431B02F755D1ADA246246ACF4AD7497CFB57892, /*hidden argument*/Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0_RuntimeMethod_var);
		Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * L_26 = ((Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields*)il2cpp_codegen_static_fields_for(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var))->get_s_ErrorMessage_19();
		NullCheck(L_26);
		Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0(L_26, ((int32_t)10062), _stringLiteral4FA8C3994CCEF6319AF0BED6CBC74C41F5E23E78, /*hidden argument*/Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0_RuntimeMethod_var);
		Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * L_27 = ((Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields*)il2cpp_codegen_static_fields_for(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var))->get_s_ErrorMessage_19();
		NullCheck(L_27);
		Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0(L_27, ((int32_t)10063), _stringLiteralCD808C493DAE7E08DD825B3BE75EC7DF375082B6, /*hidden argument*/Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0_RuntimeMethod_var);
		Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * L_28 = ((Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields*)il2cpp_codegen_static_fields_for(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var))->get_s_ErrorMessage_19();
		NullCheck(L_28);
		Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0(L_28, ((int32_t)10064), _stringLiteralC32ED50300303AD9E773DE5B27CD33A424A6F172, /*hidden argument*/Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0_RuntimeMethod_var);
		Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * L_29 = ((Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields*)il2cpp_codegen_static_fields_for(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var))->get_s_ErrorMessage_19();
		NullCheck(L_29);
		Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0(L_29, ((int32_t)10065), _stringLiteralCEF86F29033280F9E4D053455DDC08C8746E5E5E, /*hidden argument*/Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0_RuntimeMethod_var);
		Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * L_30 = ((Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields*)il2cpp_codegen_static_fields_for(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var))->get_s_ErrorMessage_19();
		NullCheck(L_30);
		Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0(L_30, ((int32_t)10066), _stringLiteral254B65344AFC181606CA4DFAD96AD5ECAF4EC1A4, /*hidden argument*/Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0_RuntimeMethod_var);
		Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * L_31 = ((Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields*)il2cpp_codegen_static_fields_for(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var))->get_s_ErrorMessage_19();
		NullCheck(L_31);
		Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0(L_31, ((int32_t)10067), _stringLiteralEEAB711A5B5FD0EFECB9A5166B548777BDDB7901, /*hidden argument*/Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0_RuntimeMethod_var);
		Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * L_32 = ((Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields*)il2cpp_codegen_static_fields_for(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var))->get_s_ErrorMessage_19();
		NullCheck(L_32);
		Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0(L_32, ((int32_t)10068), _stringLiteral2A97A21771096701008C3221E4E58C40E34C5D2A, /*hidden argument*/Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0_RuntimeMethod_var);
		Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * L_33 = ((Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields*)il2cpp_codegen_static_fields_for(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var))->get_s_ErrorMessage_19();
		NullCheck(L_33);
		Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0(L_33, ((int32_t)10069), _stringLiteral10FC672FB9F87F9D6AFF9F8D6BFF4199EF333405, /*hidden argument*/Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0_RuntimeMethod_var);
		Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * L_34 = ((Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields*)il2cpp_codegen_static_fields_for(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var))->get_s_ErrorMessage_19();
		NullCheck(L_34);
		Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0(L_34, ((int32_t)10070), _stringLiteral20F8CFBBD4C388C4999BC67998CD7310A3357E3F, /*hidden argument*/Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0_RuntimeMethod_var);
		Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * L_35 = ((Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields*)il2cpp_codegen_static_fields_for(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var))->get_s_ErrorMessage_19();
		NullCheck(L_35);
		Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0(L_35, ((int32_t)10071), _stringLiteral1207530D7D4A8643E4DA91D94090C5B782E8D4AA, /*hidden argument*/Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0_RuntimeMethod_var);
		Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * L_36 = ((Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields*)il2cpp_codegen_static_fields_for(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var))->get_s_ErrorMessage_19();
		NullCheck(L_36);
		Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0(L_36, ((int32_t)10091), _stringLiteral6A1647F2AA7442466F1E26B4E54D7ACAA785F886, /*hidden argument*/Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0_RuntimeMethod_var);
		Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * L_37 = ((Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields*)il2cpp_codegen_static_fields_for(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var))->get_s_ErrorMessage_19();
		NullCheck(L_37);
		Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0(L_37, ((int32_t)10092), _stringLiteral36A832BCE093B1C64A8D587D84C04716FC3D8123, /*hidden argument*/Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0_RuntimeMethod_var);
		Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * L_38 = ((Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields*)il2cpp_codegen_static_fields_for(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var))->get_s_ErrorMessage_19();
		NullCheck(L_38);
		Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0(L_38, ((int32_t)10093), _stringLiteral2243F389E5AA3DE4541A15C92A9BACE59F8BE4E3, /*hidden argument*/Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0_RuntimeMethod_var);
		Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * L_39 = ((Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields*)il2cpp_codegen_static_fields_for(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var))->get_s_ErrorMessage_19();
		NullCheck(L_39);
		Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0(L_39, ((int32_t)10101), _stringLiteral49FCFEB950E4FC1E14C6AB9024A0D20CC2BEB985, /*hidden argument*/Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0_RuntimeMethod_var);
		Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * L_40 = ((Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields*)il2cpp_codegen_static_fields_for(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var))->get_s_ErrorMessage_19();
		NullCheck(L_40);
		Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0(L_40, ((int32_t)10102), _stringLiteral3D3AA5822C64FA34CB5E37391CFC58263F937F30, /*hidden argument*/Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0_RuntimeMethod_var);
		Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * L_41 = ((Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields*)il2cpp_codegen_static_fields_for(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var))->get_s_ErrorMessage_19();
		NullCheck(L_41);
		Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0(L_41, ((int32_t)10103), _stringLiteral324033F505A57738479E4A50C6C83DD40C3EEC72, /*hidden argument*/Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0_RuntimeMethod_var);
		Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * L_42 = ((Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields*)il2cpp_codegen_static_fields_for(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var))->get_s_ErrorMessage_19();
		NullCheck(L_42);
		Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0(L_42, ((int32_t)10104), _stringLiteralB4F44FFF8E8B6A3CA093580564BB4F0DF515EB8E, /*hidden argument*/Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0_RuntimeMethod_var);
		Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * L_43 = ((Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields*)il2cpp_codegen_static_fields_for(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var))->get_s_ErrorMessage_19();
		NullCheck(L_43);
		Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0(L_43, ((int32_t)10105), _stringLiteralEB9599E9ABB0C609991C09C03544164393F9661D, /*hidden argument*/Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0_RuntimeMethod_var);
		Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * L_44 = ((Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields*)il2cpp_codegen_static_fields_for(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var))->get_s_ErrorMessage_19();
		NullCheck(L_44);
		Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0(L_44, ((int32_t)10106), _stringLiteral6FEF7F07E4E5C8758103389685FF14ABCB30BD0B, /*hidden argument*/Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0_RuntimeMethod_var);
		Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * L_45 = ((Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields*)il2cpp_codegen_static_fields_for(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var))->get_s_ErrorMessage_19();
		NullCheck(L_45);
		Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0(L_45, ((int32_t)10107), _stringLiteral1E8AB4D0974C246EABB424179864CCBA5DCEE064, /*hidden argument*/Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0_RuntimeMethod_var);
		Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * L_46 = ((Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields*)il2cpp_codegen_static_fields_for(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var))->get_s_ErrorMessage_19();
		NullCheck(L_46);
		Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0(L_46, ((int32_t)10108), _stringLiteralDA0721C1938DB62218B172D4D91AD61AFD6EA65A, /*hidden argument*/Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0_RuntimeMethod_var);
		Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * L_47 = ((Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields*)il2cpp_codegen_static_fields_for(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var))->get_s_ErrorMessage_19();
		NullCheck(L_47);
		Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0(L_47, ((int32_t)10109), _stringLiteral7A4031343C4BF504EC9F4A28169986445F910C6A, /*hidden argument*/Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0_RuntimeMethod_var);
		Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * L_48 = ((Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields*)il2cpp_codegen_static_fields_for(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var))->get_s_ErrorMessage_19();
		NullCheck(L_48);
		Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0(L_48, ((int32_t)10112), _stringLiteral9610F86E2CB2A021571D9CE9BF9630C0084AAF00, /*hidden argument*/Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0_RuntimeMethod_var);
		Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * L_49 = ((Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields*)il2cpp_codegen_static_fields_for(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var))->get_s_ErrorMessage_19();
		NullCheck(L_49);
		Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0(L_49, ((int32_t)11001), _stringLiteralDE9E1E6A7FD6E2514E97545C0BC4A067C0DAD5E7, /*hidden argument*/Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0_RuntimeMethod_var);
		Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * L_50 = ((Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields*)il2cpp_codegen_static_fields_for(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var))->get_s_ErrorMessage_19();
		NullCheck(L_50);
		Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0(L_50, ((int32_t)11002), _stringLiteral11F95AF2256BE4BBDBEAF89CB3904A6AB1B3A01D, /*hidden argument*/Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0_RuntimeMethod_var);
		Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * L_51 = ((Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields*)il2cpp_codegen_static_fields_for(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var))->get_s_ErrorMessage_19();
		NullCheck(L_51);
		Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0(L_51, ((int32_t)11003), _stringLiteralF64982ECFBBDC20AF3E40B6D5C0B68965820A033, /*hidden argument*/Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0_RuntimeMethod_var);
		Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * L_52 = ((Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields*)il2cpp_codegen_static_fields_for(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var))->get_s_ErrorMessage_19();
		NullCheck(L_52);
		Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0(L_52, ((int32_t)11004), _stringLiteral5EF9365F8C43E6AB95C818EEEE9E5EF0D539BF1A, /*hidden argument*/Dictionary_2_Add_m1F0637B069C2F1C8CFC43C8B2D8C5564FA7013B0_RuntimeMethod_var);
		return;
	}
}
// System.Void System.ComponentModel.Win32Exception::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Win32Exception__cctor_mE3B207777037932E599ED5F10568FD108903A5F0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mB40672A269C34DB22BA5BFAF2511631483E1690E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields*)il2cpp_codegen_static_fields_for(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var))->set_s_ErrorMessagesInitialized_18((bool)0);
		Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * L_0 = (Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB *)il2cpp_codegen_object_new(Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mB40672A269C34DB22BA5BFAF2511631483E1690E(L_0, /*hidden argument*/Dictionary_2__ctor_mB40672A269C34DB22BA5BFAF2511631483E1690E_RuntimeMethod_var);
		((Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields*)il2cpp_codegen_static_fields_for(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_il2cpp_TypeInfo_var))->set_s_ErrorMessage_19(L_0);
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
// System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509BasicConstraintsExtension__ctor_mBFE792A93883E704745E589380F1DD7F12ECB36E (X509BasicConstraintsExtension_t790FA4E7D9715A72A621A290FF0CDD5A647EF3CF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCBD089553BED56941C157C4F715B4365F724D7C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDDFDA94752EB5111EC566E5CAF709B7133C43DA);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Extension__ctor_m4DF31A0909F64A47F2F8E64E814FE16E022794E7(__this, /*hidden argument*/NULL);
		Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 * L_0 = (Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 *)il2cpp_codegen_object_new(Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800_il2cpp_TypeInfo_var);
		Oid__ctor_m90964DEF8B3A9EEFAB59023627E2008E4A34983E(L_0, _stringLiteralEDDFDA94752EB5111EC566E5CAF709B7133C43DA, _stringLiteralBCBD089553BED56941C157C4F715B4365F724D7C, /*hidden argument*/NULL);
		((AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA *)__this)->set__oid_0(L_0);
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509BasicConstraintsExtension__ctor_m67462D9110118C82677CE42C2685C05C0767EB00 (X509BasicConstraintsExtension_t790FA4E7D9715A72A621A290FF0CDD5A647EF3CF * __this, AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA * ___encodedBasicConstraints0, bool ___critical1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCBD089553BED56941C157C4F715B4365F724D7C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDDFDA94752EB5111EC566E5CAF709B7133C43DA);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Extension__ctor_m4DF31A0909F64A47F2F8E64E814FE16E022794E7(__this, /*hidden argument*/NULL);
		Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 * L_0 = (Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 *)il2cpp_codegen_object_new(Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800_il2cpp_TypeInfo_var);
		Oid__ctor_m90964DEF8B3A9EEFAB59023627E2008E4A34983E(L_0, _stringLiteralEDDFDA94752EB5111EC566E5CAF709B7133C43DA, _stringLiteralBCBD089553BED56941C157C4F715B4365F724D7C, /*hidden argument*/NULL);
		((AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA *)__this)->set__oid_0(L_0);
		AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA * L_1 = ___encodedBasicConstraints0;
		NullCheck(L_1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = AsnEncodedData_get_RawData_mDCA2B393570BA050D3840B2449447A2C10639278_inline(L_1, /*hidden argument*/NULL);
		((AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA *)__this)->set__raw_1(L_2);
		bool L_3 = ___critical1;
		X509Extension_set_Critical_mF361A9EB776A20CA39923BD48C4A492A734144E0_inline(__this, L_3, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4;
		L_4 = AsnEncodedData_get_RawData_mDCA2B393570BA050D3840B2449447A2C10639278_inline(__this, /*hidden argument*/NULL);
		int32_t L_5;
		L_5 = X509BasicConstraintsExtension_Decode_m02EECEF97728108FE014735EDAD8C74B8461B384(__this, L_4, /*hidden argument*/NULL);
		__this->set__status_8(L_5);
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::.ctor(System.Boolean,System.Boolean,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509BasicConstraintsExtension__ctor_m27365A2183995553C17661A9C5E6CFF474AEB33D (X509BasicConstraintsExtension_t790FA4E7D9715A72A621A290FF0CDD5A647EF3CF * __this, bool ___certificateAuthority0, bool ___hasPathLengthConstraint1, int32_t ___pathLengthConstraint2, bool ___critical3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCBD089553BED56941C157C4F715B4365F724D7C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDDFDA94752EB5111EC566E5CAF709B7133C43DA);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Extension__ctor_m4DF31A0909F64A47F2F8E64E814FE16E022794E7(__this, /*hidden argument*/NULL);
		bool L_0 = ___hasPathLengthConstraint1;
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_1 = ___pathLengthConstraint2;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_2 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5D1D45B6F90EF153C0073C0B7E9492B4DBF540F1)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509BasicConstraintsExtension__ctor_m27365A2183995553C17661A9C5E6CFF474AEB33D_RuntimeMethod_var)));
	}

IL_0018:
	{
		int32_t L_3 = ___pathLengthConstraint2;
		__this->set__pathLengthConstraint_7(L_3);
	}

IL_001f:
	{
		bool L_4 = ___hasPathLengthConstraint1;
		__this->set__hasPathLengthConstraint_6(L_4);
		bool L_5 = ___certificateAuthority0;
		__this->set__certificateAuthority_5(L_5);
		Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 * L_6 = (Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 *)il2cpp_codegen_object_new(Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800_il2cpp_TypeInfo_var);
		Oid__ctor_m90964DEF8B3A9EEFAB59023627E2008E4A34983E(L_6, _stringLiteralEDDFDA94752EB5111EC566E5CAF709B7133C43DA, _stringLiteralBCBD089553BED56941C157C4F715B4365F724D7C, /*hidden argument*/NULL);
		((AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA *)__this)->set__oid_0(L_6);
		bool L_7 = ___critical3;
		X509Extension_set_Critical_mF361A9EB776A20CA39923BD48C4A492A734144E0_inline(__this, L_7, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8;
		L_8 = X509BasicConstraintsExtension_Encode_mC5E34F1B66DE0BCBD7C524C968C2C010B566843C(__this, /*hidden argument*/NULL);
		AsnEncodedData_set_RawData_m867F92C32F87E4D8932D17EDF21785CA0FDA3BEA(__this, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::get_CertificateAuthority()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X509BasicConstraintsExtension_get_CertificateAuthority_mF7C866A45B3DE24A06EA3256B8FC0BA1989D038D (X509BasicConstraintsExtension_t790FA4E7D9715A72A621A290FF0CDD5A647EF3CF * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get__status_8();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)4))))
		{
			goto IL_0015;
		}
	}

IL_000e:
	{
		bool L_3 = __this->get__certificateAuthority_5();
		return L_3;
	}

IL_0015:
	{
		CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 * L_4 = (CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5_il2cpp_TypeInfo_var)));
		CryptographicException__ctor_mE6D40FE819914DA1C6600907D160AD4231B46C31(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD20A4058B7B405BF173793FAAC54A85874A0CDDE)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509BasicConstraintsExtension_get_CertificateAuthority_mF7C866A45B3DE24A06EA3256B8FC0BA1989D038D_RuntimeMethod_var)));
	}
}
// System.Boolean System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::get_HasPathLengthConstraint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X509BasicConstraintsExtension_get_HasPathLengthConstraint_m04C1B45C4FF2FF902B45A5B1AE309D3816A3457A (X509BasicConstraintsExtension_t790FA4E7D9715A72A621A290FF0CDD5A647EF3CF * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get__status_8();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)4))))
		{
			goto IL_0015;
		}
	}

IL_000e:
	{
		bool L_3 = __this->get__hasPathLengthConstraint_6();
		return L_3;
	}

IL_0015:
	{
		CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 * L_4 = (CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5_il2cpp_TypeInfo_var)));
		CryptographicException__ctor_mE6D40FE819914DA1C6600907D160AD4231B46C31(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD20A4058B7B405BF173793FAAC54A85874A0CDDE)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509BasicConstraintsExtension_get_HasPathLengthConstraint_m04C1B45C4FF2FF902B45A5B1AE309D3816A3457A_RuntimeMethod_var)));
	}
}
// System.Int32 System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::get_PathLengthConstraint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509BasicConstraintsExtension_get_PathLengthConstraint_m9401525125A220F1D51F130E3CC6E4C938E45566 (X509BasicConstraintsExtension_t790FA4E7D9715A72A621A290FF0CDD5A647EF3CF * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get__status_8();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)4))))
		{
			goto IL_0015;
		}
	}

IL_000e:
	{
		int32_t L_3 = __this->get__pathLengthConstraint_7();
		return L_3;
	}

IL_0015:
	{
		CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 * L_4 = (CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5_il2cpp_TypeInfo_var)));
		CryptographicException__ctor_mE6D40FE819914DA1C6600907D160AD4231B46C31(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD20A4058B7B405BF173793FAAC54A85874A0CDDE)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509BasicConstraintsExtension_get_PathLengthConstraint_m9401525125A220F1D51F130E3CC6E4C938E45566_RuntimeMethod_var)));
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509BasicConstraintsExtension_CopyFrom_mB87E2C5337CEE107018289CF81AD4ED7956A6ECD (X509BasicConstraintsExtension_t790FA4E7D9715A72A621A290FF0CDD5A647EF3CF * __this, AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA * ___asnEncodedData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509Extension_t9142CAA11EB46CC4CAB51A26D3B84BDA06FA9FF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCBD089553BED56941C157C4F715B4365F724D7C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDDFDA94752EB5111EC566E5CAF709B7133C43DA);
		s_Il2CppMethodInitialized = true;
	}
	X509Extension_t9142CAA11EB46CC4CAB51A26D3B84BDA06FA9FF5 * V_0 = NULL;
	{
		AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA * L_0 = ___asnEncodedData0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC9FB8C73B342D5B3C700EDA7C5212DD547D29E4E)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509BasicConstraintsExtension_CopyFrom_mB87E2C5337CEE107018289CF81AD4ED7956A6ECD_RuntimeMethod_var)));
	}

IL_000e:
	{
		AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA * L_2 = ___asnEncodedData0;
		V_0 = ((X509Extension_t9142CAA11EB46CC4CAB51A26D3B84BDA06FA9FF5 *)IsInstClass((RuntimeObject*)L_2, X509Extension_t9142CAA11EB46CC4CAB51A26D3B84BDA06FA9FF5_il2cpp_TypeInfo_var));
		X509Extension_t9142CAA11EB46CC4CAB51A26D3B84BDA06FA9FF5 * L_3 = V_0;
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		String_t* L_4;
		L_4 = Locale_GetText_mF8FE147379A36330B41A5D5E2CAD23C18931E66E(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD615D452AAA84D559E3E5FFF5168A1AF47500E8D)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_5 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_5, L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC9FB8C73B342D5B3C700EDA7C5212DD547D29E4E)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509BasicConstraintsExtension_CopyFrom_mB87E2C5337CEE107018289CF81AD4ED7956A6ECD_RuntimeMethod_var)));
	}

IL_002d:
	{
		X509Extension_t9142CAA11EB46CC4CAB51A26D3B84BDA06FA9FF5 * L_6 = V_0;
		NullCheck(L_6);
		Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 * L_7 = ((AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA *)L_6)->get__oid_0();
		if (L_7)
		{
			goto IL_004c;
		}
	}
	{
		Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 * L_8 = (Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 *)il2cpp_codegen_object_new(Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800_il2cpp_TypeInfo_var);
		Oid__ctor_m90964DEF8B3A9EEFAB59023627E2008E4A34983E(L_8, _stringLiteralEDDFDA94752EB5111EC566E5CAF709B7133C43DA, _stringLiteralBCBD089553BED56941C157C4F715B4365F724D7C, /*hidden argument*/NULL);
		((AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA *)__this)->set__oid_0(L_8);
		goto IL_005d;
	}

IL_004c:
	{
		X509Extension_t9142CAA11EB46CC4CAB51A26D3B84BDA06FA9FF5 * L_9 = V_0;
		NullCheck(L_9);
		Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 * L_10 = ((AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA *)L_9)->get__oid_0();
		Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 * L_11 = (Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 *)il2cpp_codegen_object_new(Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800_il2cpp_TypeInfo_var);
		Oid__ctor_m8C4B7AE0D9207BCF03960553182B43B8D1536ED0(L_11, L_10, /*hidden argument*/NULL);
		((AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA *)__this)->set__oid_0(L_11);
	}

IL_005d:
	{
		X509Extension_t9142CAA11EB46CC4CAB51A26D3B84BDA06FA9FF5 * L_12 = V_0;
		NullCheck(L_12);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13;
		L_13 = AsnEncodedData_get_RawData_mDCA2B393570BA050D3840B2449447A2C10639278_inline(L_12, /*hidden argument*/NULL);
		AsnEncodedData_set_RawData_m867F92C32F87E4D8932D17EDF21785CA0FDA3BEA(__this, L_13, /*hidden argument*/NULL);
		X509Extension_t9142CAA11EB46CC4CAB51A26D3B84BDA06FA9FF5 * L_14 = V_0;
		NullCheck(L_14);
		bool L_15;
		L_15 = X509Extension_get_Critical_m56CF11BDF0C2D2917C326013630709C7709DCF12_inline(L_14, /*hidden argument*/NULL);
		X509Extension_set_Critical_mF361A9EB776A20CA39923BD48C4A492A734144E0_inline(__this, L_15, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16;
		L_16 = AsnEncodedData_get_RawData_mDCA2B393570BA050D3840B2449447A2C10639278_inline(__this, /*hidden argument*/NULL);
		int32_t L_17;
		L_17 = X509BasicConstraintsExtension_Decode_m02EECEF97728108FE014735EDAD8C74B8461B384(__this, L_16, /*hidden argument*/NULL);
		__this->set__status_8(L_17);
		return;
	}
}
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::Decode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509BasicConstraintsExtension_Decode_m02EECEF97728108FE014735EDAD8C74B8461B384 (X509BasicConstraintsExtension_t790FA4E7D9715A72A621A290FF0CDD5A647EF3CF * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___extension0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * V_0 = NULL;
	int32_t V_1 = 0;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * V_2 = NULL;
	int32_t V_3 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___extension0;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___extension0;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0009;
		}
	}

IL_0007:
	{
		return (int32_t)(1);
	}

IL_0009:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___extension0;
		NullCheck(L_2);
		int32_t L_3 = 0;
		uint8_t L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if ((((int32_t)L_4) == ((int32_t)((int32_t)48))))
		{
			goto IL_0012;
		}
	}
	{
		return (int32_t)(2);
	}

IL_0012:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = ___extension0;
		NullCheck(L_5);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))) >= ((int32_t)3)))
		{
			goto IL_0025;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___extension0;
		NullCheck(L_6);
		if ((!(((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))) == ((uint32_t)2))))
		{
			goto IL_0023;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = ___extension0;
		NullCheck(L_7);
		int32_t L_8 = 1;
		uint8_t L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		if (!L_9)
		{
			goto IL_0025;
		}
	}

IL_0023:
	{
		return (int32_t)(3);
	}

IL_0025:
	{
	}

IL_0026:
	try
	{ // begin try (depth: 1)
		{
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = ___extension0;
			ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_11 = (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 *)il2cpp_codegen_object_new(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8_il2cpp_TypeInfo_var);
			ASN1__ctor_mE534D499DABEAAA35E0F30572CD295A9FCFA1C7E(L_11, L_10, /*hidden argument*/NULL);
			V_0 = L_11;
			V_1 = 0;
			ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_12 = V_0;
			int32_t L_13 = V_1;
			int32_t L_14 = L_13;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
			NullCheck(L_12);
			ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_15;
			L_15 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_12, L_14, /*hidden argument*/NULL);
			V_2 = L_15;
			ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_16 = V_2;
			if (!L_16)
			{
				goto IL_0068;
			}
		}

IL_003e:
		{
			ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_17 = V_2;
			NullCheck(L_17);
			uint8_t L_18;
			L_18 = ASN1_get_Tag_mA82F15B6EB97BF0F3EBAA69C21765909D7A675D3_inline(L_17, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_18) == ((uint32_t)1))))
			{
				goto IL_0068;
			}
		}

IL_0047:
		{
			ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_19 = V_2;
			NullCheck(L_19);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_20;
			L_20 = ASN1_get_Value_m95545A82635424B999816713F09A224ED01DF0C2(L_19, /*hidden argument*/NULL);
			NullCheck(L_20);
			int32_t L_21 = 0;
			uint8_t L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
			__this->set__certificateAuthority_5((bool)((((int32_t)L_22) == ((int32_t)((int32_t)255)))? 1 : 0));
			ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_23 = V_0;
			int32_t L_24 = V_1;
			int32_t L_25 = L_24;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
			NullCheck(L_23);
			ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_26;
			L_26 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_23, L_25, /*hidden argument*/NULL);
			V_2 = L_26;
		}

IL_0068:
		{
			ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_27 = V_2;
			if (!L_27)
			{
				goto IL_0087;
			}
		}

IL_006b:
		{
			ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_28 = V_2;
			NullCheck(L_28);
			uint8_t L_29;
			L_29 = ASN1_get_Tag_mA82F15B6EB97BF0F3EBAA69C21765909D7A675D3_inline(L_28, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_29) == ((uint32_t)2))))
			{
				goto IL_0087;
			}
		}

IL_0074:
		{
			__this->set__hasPathLengthConstraint_6((bool)1);
			ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_30 = V_2;
			int32_t L_31;
			L_31 = ASN1Convert_ToInt32_m381CC48A18572F6F58C4332C3E07906562034A77(L_30, /*hidden argument*/NULL);
			__this->set__pathLengthConstraint_7(L_31);
		}

IL_0087:
		{
			goto IL_008e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0089;
		}
		throw e;
	}

CATCH_0089:
	{ // begin catch(System.Object)
		V_3 = 1;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0090;
	} // end catch (depth: 1)

IL_008e:
	{
		return (int32_t)(0);
	}

IL_0090:
	{
		int32_t L_32 = V_3;
		return L_32;
	}
}
// System.Byte[] System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::Encode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* X509BasicConstraintsExtension_Encode_mC5E34F1B66DE0BCBD7C524C968C2C010B566843C (X509BasicConstraintsExtension_t790FA4E7D9715A72A621A290FF0CDD5A647EF3CF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * V_0 = NULL;
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_0 = (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 *)il2cpp_codegen_object_new(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8_il2cpp_TypeInfo_var);
		ASN1__ctor_mC8594B7A2376B58F26F1D0457B0F9F5880D87142(L_0, (uint8_t)((int32_t)48), /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = __this->get__certificateAuthority_5();
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_2 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = L_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)255));
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_5 = (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 *)il2cpp_codegen_object_new(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8_il2cpp_TypeInfo_var);
		ASN1__ctor_mB8A19279E6079D30BB6A594ADAC7FEE89E822CDC(L_5, (uint8_t)1, L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_6;
		L_6 = ASN1_Add_m35AB44F469BE9C185A91D2E265A7DA6B27311F7B(L_2, L_5, /*hidden argument*/NULL);
	}

IL_002b:
	{
		bool L_7 = __this->get__hasPathLengthConstraint_6();
		if (!L_7)
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_8 = __this->get__pathLengthConstraint_7();
		if (L_8)
		{
			goto IL_0050;
		}
	}
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_9 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)1);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_11 = (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 *)il2cpp_codegen_object_new(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8_il2cpp_TypeInfo_var);
		ASN1__ctor_mB8A19279E6079D30BB6A594ADAC7FEE89E822CDC(L_11, (uint8_t)2, L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_12;
		L_12 = ASN1_Add_m35AB44F469BE9C185A91D2E265A7DA6B27311F7B(L_9, L_11, /*hidden argument*/NULL);
		goto IL_0062;
	}

IL_0050:
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_13 = V_0;
		int32_t L_14 = __this->get__pathLengthConstraint_7();
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_15;
		L_15 = ASN1Convert_FromInt32_m2EB0E4A8D3D06D4EE1BEFD4F50E9021FF6B82FA2(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_16;
		L_16 = ASN1_Add_m35AB44F469BE9C185A91D2E265A7DA6B27311F7B(L_13, L_15, /*hidden argument*/NULL);
	}

IL_0062:
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_17 = V_0;
		NullCheck(L_17);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18;
		L_18 = VirtFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(4 /* System.Byte[] Mono.Security.ASN1::GetBytes() */, L_17);
		return L_18;
	}
}
// System.String System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::ToString(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509BasicConstraintsExtension_ToString_m4ABD6F1E1B7271403EA6250EFDCF400D68B8256D (X509BasicConstraintsExtension_t790FA4E7D9715A72A621A290FF0CDD5A647EF3CF * __this, bool ___multiLine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral244BA6FE8878C6A66F7648332C07125DF3AFBC4B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F874A32C0360779E461A5ED6063EF8E6729A514);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral324A15BBCCD67A1997F37BF20414A7EB61126AB5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral548D93DDB2AC6B24373148B19D9A625571AB2318);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D1E32D587015A9DB04576A49D22A6924F1B9D62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD32F08BAB4EE365057213BCC6332DD39C2DE46B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9B53FE83B364433B53BD1F5712DD31D58258FB4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDDFDA94752EB5111EC566E5CAF709B7133C43DA);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->get__status_8();
		V_1 = L_0;
		int32_t L_1 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0027;
			}
			case 2:
			{
				goto IL_0027;
			}
			case 3:
			{
				goto IL_0034;
			}
		}
	}
	{
		goto IL_003a;
	}

IL_0021:
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_2;
	}

IL_0027:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ((AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA *)__this)->get__raw_1();
		String_t* L_4;
		L_4 = X509Extension_FormatUnkownData_mEF1E719F7AD312B099351C581F4A06925AD9F18A(__this, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0034:
	{
		return _stringLiteralCD32F08BAB4EE365057213BCC6332DD39C2DE46B;
	}

IL_003a:
	{
		Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 * L_5 = ((AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA *)__this)->get__oid_0();
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Oid_get_Value_mD6F4D8AC1A3821D5DA263728C2DC0C208D084A78_inline(L_5, /*hidden argument*/NULL);
		bool L_7;
		L_7 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_6, _stringLiteralEDDFDA94752EB5111EC566E5CAF709B7133C43DA, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0067;
		}
	}
	{
		Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 * L_8 = ((AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA *)__this)->get__oid_0();
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Oid_get_Value_mD6F4D8AC1A3821D5DA263728C2DC0C208D084A78_inline(L_8, /*hidden argument*/NULL);
		String_t* L_10;
		L_10 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralD9B53FE83B364433B53BD1F5712DD31D58258FB4, L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_0067:
	{
		StringBuilder_t * L_11 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_11, /*hidden argument*/NULL);
		V_0 = L_11;
		StringBuilder_t * L_12 = V_0;
		NullCheck(L_12);
		StringBuilder_t * L_13;
		L_13 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_12, _stringLiteral244BA6FE8878C6A66F7648332C07125DF3AFBC4B, /*hidden argument*/NULL);
		bool L_14 = __this->get__certificateAuthority_5();
		if (!L_14)
		{
			goto IL_008f;
		}
	}
	{
		StringBuilder_t * L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t * L_16;
		L_16 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_15, _stringLiteral2F874A32C0360779E461A5ED6063EF8E6729A514, /*hidden argument*/NULL);
		goto IL_009b;
	}

IL_008f:
	{
		StringBuilder_t * L_17 = V_0;
		NullCheck(L_17);
		StringBuilder_t * L_18;
		L_18 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_17, _stringLiteral8D1E32D587015A9DB04576A49D22A6924F1B9D62, /*hidden argument*/NULL);
	}

IL_009b:
	{
		bool L_19 = ___multiLine0;
		if (!L_19)
		{
			goto IL_00ac;
		}
	}
	{
		StringBuilder_t * L_20 = V_0;
		String_t* L_21;
		L_21 = Environment_get_NewLine_mD145C8EE917C986BAA7C5243DEFAF4D333C521B4(/*hidden argument*/NULL);
		NullCheck(L_20);
		StringBuilder_t * L_22;
		L_22 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_20, L_21, /*hidden argument*/NULL);
		goto IL_00b8;
	}

IL_00ac:
	{
		StringBuilder_t * L_23 = V_0;
		NullCheck(L_23);
		StringBuilder_t * L_24;
		L_24 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_23, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, /*hidden argument*/NULL);
	}

IL_00b8:
	{
		StringBuilder_t * L_25 = V_0;
		NullCheck(L_25);
		StringBuilder_t * L_26;
		L_26 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_25, _stringLiteral324A15BBCCD67A1997F37BF20414A7EB61126AB5, /*hidden argument*/NULL);
		bool L_27 = __this->get__hasPathLengthConstraint_6();
		if (!L_27)
		{
			goto IL_00db;
		}
	}
	{
		StringBuilder_t * L_28 = V_0;
		int32_t L_29 = __this->get__pathLengthConstraint_7();
		NullCheck(L_28);
		StringBuilder_t * L_30;
		L_30 = StringBuilder_Append_m796285D173EEA5261E85B95FC79DD4F996CC93DD(L_28, L_29, /*hidden argument*/NULL);
		goto IL_00e7;
	}

IL_00db:
	{
		StringBuilder_t * L_31 = V_0;
		NullCheck(L_31);
		StringBuilder_t * L_32;
		L_32 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_31, _stringLiteral548D93DDB2AC6B24373148B19D9A625571AB2318, /*hidden argument*/NULL);
	}

IL_00e7:
	{
		bool L_33 = ___multiLine0;
		if (!L_33)
		{
			goto IL_00f6;
		}
	}
	{
		StringBuilder_t * L_34 = V_0;
		String_t* L_35;
		L_35 = Environment_get_NewLine_mD145C8EE917C986BAA7C5243DEFAF4D333C521B4(/*hidden argument*/NULL);
		NullCheck(L_34);
		StringBuilder_t * L_36;
		L_36 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_34, L_35, /*hidden argument*/NULL);
	}

IL_00f6:
	{
		StringBuilder_t * L_37 = V_0;
		NullCheck(L_37);
		String_t* L_38;
		L_38 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_37);
		return L_38;
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
// System.Void System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509EnhancedKeyUsageExtension__ctor_m64F507CB1938AA4BC20287D731B74DF5CC99A96C (X509EnhancedKeyUsageExtension_tD53B0C2AF93C2496461F2960946C5F40A33AC82B * __this, AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA * ___encodedEnhancedKeyUsages0, bool ___critical1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EF9E33E97E3023577871E2EA773996440F2F5F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EDC47BC71D706BB11343CC890323569C143CD50);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Extension__ctor_m4DF31A0909F64A47F2F8E64E814FE16E022794E7(__this, /*hidden argument*/NULL);
		Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 * L_0 = (Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 *)il2cpp_codegen_object_new(Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800_il2cpp_TypeInfo_var);
		Oid__ctor_m90964DEF8B3A9EEFAB59023627E2008E4A34983E(L_0, _stringLiteral5EDC47BC71D706BB11343CC890323569C143CD50, _stringLiteral1EF9E33E97E3023577871E2EA773996440F2F5F9, /*hidden argument*/NULL);
		((AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA *)__this)->set__oid_0(L_0);
		AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA * L_1 = ___encodedEnhancedKeyUsages0;
		NullCheck(L_1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = AsnEncodedData_get_RawData_mDCA2B393570BA050D3840B2449447A2C10639278_inline(L_1, /*hidden argument*/NULL);
		((AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA *)__this)->set__raw_1(L_2);
		bool L_3 = ___critical1;
		X509Extension_set_Critical_mF361A9EB776A20CA39923BD48C4A492A734144E0_inline(__this, L_3, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4;
		L_4 = AsnEncodedData_get_RawData_mDCA2B393570BA050D3840B2449447A2C10639278_inline(__this, /*hidden argument*/NULL);
		int32_t L_5;
		L_5 = X509EnhancedKeyUsageExtension_Decode_m610C0C741966205F6DC0492BD17B28E1FED8D648(__this, L_4, /*hidden argument*/NULL);
		__this->set__status_4(L_5);
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509EnhancedKeyUsageExtension_CopyFrom_mDD12A69F6804BA6B137A459CD941B367274C2B25 (X509EnhancedKeyUsageExtension_tD53B0C2AF93C2496461F2960946C5F40A33AC82B * __this, AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA * ___asnEncodedData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509Extension_t9142CAA11EB46CC4CAB51A26D3B84BDA06FA9FF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EF9E33E97E3023577871E2EA773996440F2F5F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EDC47BC71D706BB11343CC890323569C143CD50);
		s_Il2CppMethodInitialized = true;
	}
	X509Extension_t9142CAA11EB46CC4CAB51A26D3B84BDA06FA9FF5 * V_0 = NULL;
	{
		AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA * L_0 = ___asnEncodedData0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB2AED74A19DD9414DD0792FD340CC531536B8454)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509EnhancedKeyUsageExtension_CopyFrom_mDD12A69F6804BA6B137A459CD941B367274C2B25_RuntimeMethod_var)));
	}

IL_000e:
	{
		AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA * L_2 = ___asnEncodedData0;
		V_0 = ((X509Extension_t9142CAA11EB46CC4CAB51A26D3B84BDA06FA9FF5 *)IsInstClass((RuntimeObject*)L_2, X509Extension_t9142CAA11EB46CC4CAB51A26D3B84BDA06FA9FF5_il2cpp_TypeInfo_var));
		X509Extension_t9142CAA11EB46CC4CAB51A26D3B84BDA06FA9FF5 * L_3 = V_0;
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		String_t* L_4;
		L_4 = Locale_GetText_mF8FE147379A36330B41A5D5E2CAD23C18931E66E(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD615D452AAA84D559E3E5FFF5168A1AF47500E8D)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_5 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_5, L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC9FB8C73B342D5B3C700EDA7C5212DD547D29E4E)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509EnhancedKeyUsageExtension_CopyFrom_mDD12A69F6804BA6B137A459CD941B367274C2B25_RuntimeMethod_var)));
	}

IL_002d:
	{
		X509Extension_t9142CAA11EB46CC4CAB51A26D3B84BDA06FA9FF5 * L_6 = V_0;
		NullCheck(L_6);
		Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 * L_7 = ((AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA *)L_6)->get__oid_0();
		if (L_7)
		{
			goto IL_004c;
		}
	}
	{
		Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 * L_8 = (Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 *)il2cpp_codegen_object_new(Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800_il2cpp_TypeInfo_var);
		Oid__ctor_m90964DEF8B3A9EEFAB59023627E2008E4A34983E(L_8, _stringLiteral5EDC47BC71D706BB11343CC890323569C143CD50, _stringLiteral1EF9E33E97E3023577871E2EA773996440F2F5F9, /*hidden argument*/NULL);
		((AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA *)__this)->set__oid_0(L_8);
		goto IL_005d;
	}

IL_004c:
	{
		X509Extension_t9142CAA11EB46CC4CAB51A26D3B84BDA06FA9FF5 * L_9 = V_0;
		NullCheck(L_9);
		Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 * L_10 = ((AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA *)L_9)->get__oid_0();
		Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 * L_11 = (Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 *)il2cpp_codegen_object_new(Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800_il2cpp_TypeInfo_var);
		Oid__ctor_m8C4B7AE0D9207BCF03960553182B43B8D1536ED0(L_11, L_10, /*hidden argument*/NULL);
		((AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA *)__this)->set__oid_0(L_11);
	}

IL_005d:
	{
		X509Extension_t9142CAA11EB46CC4CAB51A26D3B84BDA06FA9FF5 * L_12 = V_0;
		NullCheck(L_12);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13;
		L_13 = AsnEncodedData_get_RawData_mDCA2B393570BA050D3840B2449447A2C10639278_inline(L_12, /*hidden argument*/NULL);
		AsnEncodedData_set_RawData_m867F92C32F87E4D8932D17EDF21785CA0FDA3BEA(__this, L_13, /*hidden argument*/NULL);
		X509Extension_t9142CAA11EB46CC4CAB51A26D3B84BDA06FA9FF5 * L_14 = V_0;
		NullCheck(L_14);
		bool L_15;
		L_15 = X509Extension_get_Critical_m56CF11BDF0C2D2917C326013630709C7709DCF12_inline(L_14, /*hidden argument*/NULL);
		X509Extension_set_Critical_mF361A9EB776A20CA39923BD48C4A492A734144E0_inline(__this, L_15, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16;
		L_16 = AsnEncodedData_get_RawData_mDCA2B393570BA050D3840B2449447A2C10639278_inline(__this, /*hidden argument*/NULL);
		int32_t L_17;
		L_17 = X509EnhancedKeyUsageExtension_Decode_m610C0C741966205F6DC0492BD17B28E1FED8D648(__this, L_16, /*hidden argument*/NULL);
		__this->set__status_4(L_17);
		return;
	}
}
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::Decode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509EnhancedKeyUsageExtension_Decode_m610C0C741966205F6DC0492BD17B28E1FED8D648 (X509EnhancedKeyUsageExtension_tD53B0C2AF93C2496461F2960946C5F40A33AC82B * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___extension0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OidCollection_tA091E185B8840648BE96A6C547F0C26F88E3A902_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___extension0;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___extension0;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0009;
		}
	}

IL_0007:
	{
		return (int32_t)(1);
	}

IL_0009:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___extension0;
		NullCheck(L_2);
		int32_t L_3 = 0;
		uint8_t L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if ((((int32_t)L_4) == ((int32_t)((int32_t)48))))
		{
			goto IL_0012;
		}
	}
	{
		return (int32_t)(2);
	}

IL_0012:
	{
		OidCollection_tA091E185B8840648BE96A6C547F0C26F88E3A902 * L_5 = __this->get__enhKeyUsage_3();
		if (L_5)
		{
			goto IL_0025;
		}
	}
	{
		OidCollection_tA091E185B8840648BE96A6C547F0C26F88E3A902 * L_6 = (OidCollection_tA091E185B8840648BE96A6C547F0C26F88E3A902 *)il2cpp_codegen_object_new(OidCollection_tA091E185B8840648BE96A6C547F0C26F88E3A902_il2cpp_TypeInfo_var);
		OidCollection__ctor_m99E1CCEB955F4BB57DEAE0BF8E7326380F93E111(L_6, /*hidden argument*/NULL);
		__this->set__enhKeyUsage_3(L_6);
	}

IL_0025:
	{
	}

IL_0026:
	try
	{ // begin try (depth: 1)
		{
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = ___extension0;
			ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_8 = (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 *)il2cpp_codegen_object_new(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8_il2cpp_TypeInfo_var);
			ASN1__ctor_mE534D499DABEAAA35E0F30572CD295A9FCFA1C7E(L_8, L_7, /*hidden argument*/NULL);
			V_0 = L_8;
			ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_9 = V_0;
			NullCheck(L_9);
			uint8_t L_10;
			L_10 = ASN1_get_Tag_mA82F15B6EB97BF0F3EBAA69C21765909D7A675D3_inline(L_9, /*hidden argument*/NULL);
			if ((((int32_t)L_10) == ((int32_t)((int32_t)48))))
			{
				goto IL_0047;
			}
		}

IL_0037:
		{
			String_t* L_11;
			L_11 = Locale_GetText_mF8FE147379A36330B41A5D5E2CAD23C18931E66E(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral212797907CC7AD095EFEBD10D643DF1F9608C8C1)), /*hidden argument*/NULL);
			CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 * L_12 = (CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5_il2cpp_TypeInfo_var)));
			CryptographicException__ctor_mE6D40FE819914DA1C6600907D160AD4231B46C31(L_12, L_11, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509EnhancedKeyUsageExtension_Decode_m610C0C741966205F6DC0492BD17B28E1FED8D648_RuntimeMethod_var)));
		}

IL_0047:
		{
			V_1 = 0;
			goto IL_006c;
		}

IL_004b:
		{
			OidCollection_tA091E185B8840648BE96A6C547F0C26F88E3A902 * L_13 = __this->get__enhKeyUsage_3();
			ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_14 = V_0;
			int32_t L_15 = V_1;
			NullCheck(L_14);
			ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_16;
			L_16 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_14, L_15, /*hidden argument*/NULL);
			String_t* L_17;
			L_17 = ASN1Convert_ToOid_m6F617C7AC370CC5D6EAC2F813D8F7B73A3D8F61F(L_16, /*hidden argument*/NULL);
			Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 * L_18 = (Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 *)il2cpp_codegen_object_new(Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800_il2cpp_TypeInfo_var);
			Oid__ctor_mDB319C52BC09ED73F02F5BEC5950F728059405C2(L_18, L_17, /*hidden argument*/NULL);
			NullCheck(L_13);
			int32_t L_19;
			L_19 = OidCollection_Add_m13C7466BB24E047C88F27AC6AB5E9439AA491EF1(L_13, L_18, /*hidden argument*/NULL);
			int32_t L_20 = V_1;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
		}

IL_006c:
		{
			int32_t L_21 = V_1;
			ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_22 = V_0;
			NullCheck(L_22);
			int32_t L_23;
			L_23 = ASN1_get_Count_mBF134B153CFA218C251FB692A25AA392DCF9F583(L_22, /*hidden argument*/NULL);
			if ((((int32_t)L_21) < ((int32_t)L_23)))
			{
				goto IL_004b;
			}
		}

IL_0075:
		{
			goto IL_007c;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0077;
		}
		throw e;
	}

CATCH_0077:
	{ // begin catch(System.Object)
		V_2 = 1;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_007e;
	} // end catch (depth: 1)

IL_007c:
	{
		return (int32_t)(0);
	}

IL_007e:
	{
		int32_t L_24 = V_2;
		return L_24;
	}
}
// System.String System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::ToString(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509EnhancedKeyUsageExtension_ToString_m12992C4F3BE30FC9662680B8CDAC07F7F7C67134 (X509EnhancedKeyUsageExtension_tD53B0C2AF93C2496461F2960946C5F40A33AC82B * __this, bool ___multiLine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3ECCF64C0782442EC426220868830513FD924C3C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EDC47BC71D706BB11343CC890323569C143CD50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63DCC50AED43B00BB793B2D0F054171D9D12A15E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD32F08BAB4EE365057213BCC6332DD39C2DE46B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9B53FE83B364433B53BD1F5712DD31D58258FB4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7C7449D840A91B3AF035F43E6106A0BC8372CC6);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 * V_3 = NULL;
	String_t* V_4 = NULL;
	{
		int32_t L_0 = __this->get__status_4();
		V_1 = L_0;
		int32_t L_1 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0027;
			}
			case 2:
			{
				goto IL_0027;
			}
			case 3:
			{
				goto IL_0034;
			}
		}
	}
	{
		goto IL_003a;
	}

IL_0021:
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_2;
	}

IL_0027:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ((AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA *)__this)->get__raw_1();
		String_t* L_4;
		L_4 = X509Extension_FormatUnkownData_mEF1E719F7AD312B099351C581F4A06925AD9F18A(__this, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0034:
	{
		return _stringLiteralCD32F08BAB4EE365057213BCC6332DD39C2DE46B;
	}

IL_003a:
	{
		Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 * L_5 = ((AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA *)__this)->get__oid_0();
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Oid_get_Value_mD6F4D8AC1A3821D5DA263728C2DC0C208D084A78_inline(L_5, /*hidden argument*/NULL);
		bool L_7;
		L_7 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_6, _stringLiteral5EDC47BC71D706BB11343CC890323569C143CD50, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0067;
		}
	}
	{
		Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 * L_8 = ((AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA *)__this)->get__oid_0();
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Oid_get_Value_mD6F4D8AC1A3821D5DA263728C2DC0C208D084A78_inline(L_8, /*hidden argument*/NULL);
		String_t* L_10;
		L_10 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralD9B53FE83B364433B53BD1F5712DD31D58258FB4, L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_0067:
	{
		OidCollection_tA091E185B8840648BE96A6C547F0C26F88E3A902 * L_11 = __this->get__enhKeyUsage_3();
		NullCheck(L_11);
		int32_t L_12;
		L_12 = OidCollection_get_Count_m35D85FFEC009FD8195DA9E0EE0CD5B66290FA3C6(L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_007a;
		}
	}
	{
		return _stringLiteralCD32F08BAB4EE365057213BCC6332DD39C2DE46B;
	}

IL_007a:
	{
		StringBuilder_t * L_13 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_13, /*hidden argument*/NULL);
		V_0 = L_13;
		V_2 = 0;
		goto IL_010e;
	}

IL_0087:
	{
		OidCollection_tA091E185B8840648BE96A6C547F0C26F88E3A902 * L_14 = __this->get__enhKeyUsage_3();
		int32_t L_15 = V_2;
		NullCheck(L_14);
		Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 * L_16;
		L_16 = OidCollection_get_Item_mB8F51EB0825BDE39504BC7090B8AEEE13D0A9967(L_14, L_15, /*hidden argument*/NULL);
		V_3 = L_16;
		Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 * L_17 = V_3;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = Oid_get_Value_mD6F4D8AC1A3821D5DA263728C2DC0C208D084A78_inline(L_17, /*hidden argument*/NULL);
		V_4 = L_18;
		String_t* L_19 = V_4;
		bool L_20;
		L_20 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_19, _stringLiteralE7C7449D840A91B3AF035F43E6106A0BC8372CC6, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00b8;
		}
	}
	{
		StringBuilder_t * L_21 = V_0;
		NullCheck(L_21);
		StringBuilder_t * L_22;
		L_22 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_21, _stringLiteral63DCC50AED43B00BB793B2D0F054171D9D12A15E, /*hidden argument*/NULL);
		goto IL_00c4;
	}

IL_00b8:
	{
		StringBuilder_t * L_23 = V_0;
		NullCheck(L_23);
		StringBuilder_t * L_24;
		L_24 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_23, _stringLiteral3ECCF64C0782442EC426220868830513FD924C3C, /*hidden argument*/NULL);
	}

IL_00c4:
	{
		StringBuilder_t * L_25 = V_0;
		Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 * L_26 = V_3;
		NullCheck(L_26);
		String_t* L_27;
		L_27 = Oid_get_Value_mD6F4D8AC1A3821D5DA263728C2DC0C208D084A78_inline(L_26, /*hidden argument*/NULL);
		NullCheck(L_25);
		StringBuilder_t * L_28;
		L_28 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_25, L_27, /*hidden argument*/NULL);
		StringBuilder_t * L_29 = V_0;
		NullCheck(L_29);
		StringBuilder_t * L_30;
		L_30 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_29, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, /*hidden argument*/NULL);
		bool L_31 = ___multiLine0;
		if (!L_31)
		{
			goto IL_00ee;
		}
	}
	{
		StringBuilder_t * L_32 = V_0;
		String_t* L_33;
		L_33 = Environment_get_NewLine_mD145C8EE917C986BAA7C5243DEFAF4D333C521B4(/*hidden argument*/NULL);
		NullCheck(L_32);
		StringBuilder_t * L_34;
		L_34 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_32, L_33, /*hidden argument*/NULL);
		goto IL_010a;
	}

IL_00ee:
	{
		int32_t L_35 = V_2;
		OidCollection_tA091E185B8840648BE96A6C547F0C26F88E3A902 * L_36 = __this->get__enhKeyUsage_3();
		NullCheck(L_36);
		int32_t L_37;
		L_37 = OidCollection_get_Count_m35D85FFEC009FD8195DA9E0EE0CD5B66290FA3C6(L_36, /*hidden argument*/NULL);
		if ((((int32_t)L_35) == ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_37, (int32_t)1)))))
		{
			goto IL_010a;
		}
	}
	{
		StringBuilder_t * L_38 = V_0;
		NullCheck(L_38);
		StringBuilder_t * L_39;
		L_39 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_38, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, /*hidden argument*/NULL);
	}

IL_010a:
	{
		int32_t L_40 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1));
	}

IL_010e:
	{
		int32_t L_41 = V_2;
		OidCollection_tA091E185B8840648BE96A6C547F0C26F88E3A902 * L_42 = __this->get__enhKeyUsage_3();
		NullCheck(L_42);
		int32_t L_43;
		L_43 = OidCollection_get_Count_m35D85FFEC009FD8195DA9E0EE0CD5B66290FA3C6(L_42, /*hidden argument*/NULL);
		if ((((int32_t)L_41) < ((int32_t)L_43)))
		{
			goto IL_0087;
		}
	}
	{
		StringBuilder_t * L_44 = V_0;
		NullCheck(L_44);
		String_t* L_45;
		L_45 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_44);
		return L_45;
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
// System.Void System.Security.Cryptography.X509Certificates.X509Extension::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Extension__ctor_m4DF31A0909F64A47F2F8E64E814FE16E022794E7 (X509Extension_t9142CAA11EB46CC4CAB51A26D3B84BDA06FA9FF5 * __this, const RuntimeMethod* method)
{
	{
		AsnEncodedData__ctor_m0CF86C874705C96B224222BEBB6BF5703EAB29E2(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Security.Cryptography.X509Certificates.X509Extension::get_Critical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X509Extension_get_Critical_m56CF11BDF0C2D2917C326013630709C7709DCF12 (X509Extension_t9142CAA11EB46CC4CAB51A26D3B84BDA06FA9FF5 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__critical_2();
		return L_0;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509Extension::set_Critical(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Extension_set_Critical_mF361A9EB776A20CA39923BD48C4A492A734144E0 (X509Extension_t9142CAA11EB46CC4CAB51A26D3B84BDA06FA9FF5 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set__critical_2(L_0);
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509Extension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Extension_CopyFrom_m1D101C0A8E17FDC25EF1D7645F2A07E5AB7A3D1C (X509Extension_t9142CAA11EB46CC4CAB51A26D3B84BDA06FA9FF5 * __this, AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA * ___asnEncodedData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509Extension_t9142CAA11EB46CC4CAB51A26D3B84BDA06FA9FF5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	X509Extension_t9142CAA11EB46CC4CAB51A26D3B84BDA06FA9FF5 * V_0 = NULL;
	{
		AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA * L_0 = ___asnEncodedData0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB2AED74A19DD9414DD0792FD340CC531536B8454)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509Extension_CopyFrom_m1D101C0A8E17FDC25EF1D7645F2A07E5AB7A3D1C_RuntimeMethod_var)));
	}

IL_000e:
	{
		AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA * L_2 = ___asnEncodedData0;
		V_0 = ((X509Extension_t9142CAA11EB46CC4CAB51A26D3B84BDA06FA9FF5 *)IsInstClass((RuntimeObject*)L_2, X509Extension_t9142CAA11EB46CC4CAB51A26D3B84BDA06FA9FF5_il2cpp_TypeInfo_var));
		X509Extension_t9142CAA11EB46CC4CAB51A26D3B84BDA06FA9FF5 * L_3 = V_0;
		if (L_3)
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_4;
		L_4 = Locale_GetText_mF8FE147379A36330B41A5D5E2CAD23C18931E66E(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3C77EE02D0B62256DB746EEC2F12CB9BC801126A)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_5 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_5, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509Extension_CopyFrom_m1D101C0A8E17FDC25EF1D7645F2A07E5AB7A3D1C_RuntimeMethod_var)));
	}

IL_0028:
	{
		AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA * L_6 = ___asnEncodedData0;
		AsnEncodedData_CopyFrom_mA350785B8AF676AB7856E705FA2F2D20FD54CC46(__this, L_6, /*hidden argument*/NULL);
		X509Extension_t9142CAA11EB46CC4CAB51A26D3B84BDA06FA9FF5 * L_7 = V_0;
		NullCheck(L_7);
		bool L_8;
		L_8 = X509Extension_get_Critical_m56CF11BDF0C2D2917C326013630709C7709DCF12_inline(L_7, /*hidden argument*/NULL);
		__this->set__critical_2(L_8);
		return;
	}
}
// System.String System.Security.Cryptography.X509Certificates.X509Extension::FormatUnkownData(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509Extension_FormatUnkownData_mEF1E719F7AD312B099351C581F4A06925AD9F18A (X509Extension_t9142CAA11EB46CC4CAB51A26D3B84BDA06FA9FF5 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4A94E440E57B3321B2097CEC9E046D28EE1C0CD);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	int32_t V_1 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___data0;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___data0;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_000d;
		}
	}

IL_0007:
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_2;
	}

IL_000d:
	{
		StringBuilder_t * L_3 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_3, /*hidden argument*/NULL);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0033;
	}

IL_0017:
	{
		StringBuilder_t * L_4 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = ___data0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		String_t* L_7;
		L_7 = Byte_ToString_mABEF6F24915951FF4A4D87B389D8418B2638178C((uint8_t*)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))), _stringLiteralB4A94E440E57B3321B2097CEC9E046D28EE1C0CD, /*hidden argument*/NULL);
		NullCheck(L_4);
		StringBuilder_t * L_8;
		L_8 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_4, L_7, /*hidden argument*/NULL);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0033:
	{
		int32_t L_10 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = ___data0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t * L_12 = V_0;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_12);
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
// System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509KeyUsageExtension__ctor_mE735C27BA5C2BBEA264B0FDB229E7DA7A2E3416D (X509KeyUsageExtension_tF78A71F87AEE0E0DC54DFF837AB2880E3D9CF227 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FDCE7F577695853459152469012B0121731CD52);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEB31152738116748FADCEF38CE0C9964DACCF2F);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Extension__ctor_m4DF31A0909F64A47F2F8E64E814FE16E022794E7(__this, /*hidden argument*/NULL);
		Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 * L_0 = (Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 *)il2cpp_codegen_object_new(Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800_il2cpp_TypeInfo_var);
		Oid__ctor_m90964DEF8B3A9EEFAB59023627E2008E4A34983E(L_0, _stringLiteralDEB31152738116748FADCEF38CE0C9964DACCF2F, _stringLiteral2FDCE7F577695853459152469012B0121731CD52, /*hidden argument*/NULL);
		((AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA *)__this)->set__oid_0(L_0);
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509KeyUsageExtension__ctor_m6D2F83567A69553296EB7CC93466B20C7884C54E (X509KeyUsageExtension_tF78A71F87AEE0E0DC54DFF837AB2880E3D9CF227 * __this, AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA * ___encodedKeyUsage0, bool ___critical1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FDCE7F577695853459152469012B0121731CD52);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEB31152738116748FADCEF38CE0C9964DACCF2F);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Extension__ctor_m4DF31A0909F64A47F2F8E64E814FE16E022794E7(__this, /*hidden argument*/NULL);
		Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 * L_0 = (Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 *)il2cpp_codegen_object_new(Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800_il2cpp_TypeInfo_var);
		Oid__ctor_m90964DEF8B3A9EEFAB59023627E2008E4A34983E(L_0, _stringLiteralDEB31152738116748FADCEF38CE0C9964DACCF2F, _stringLiteral2FDCE7F577695853459152469012B0121731CD52, /*hidden argument*/NULL);
		((AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA *)__this)->set__oid_0(L_0);
		AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA * L_1 = ___encodedKeyUsage0;
		NullCheck(L_1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = AsnEncodedData_get_RawData_mDCA2B393570BA050D3840B2449447A2C10639278_inline(L_1, /*hidden argument*/NULL);
		((AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA *)__this)->set__raw_1(L_2);
		bool L_3 = ___critical1;
		X509Extension_set_Critical_mF361A9EB776A20CA39923BD48C4A492A734144E0_inline(__this, L_3, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4;
		L_4 = AsnEncodedData_get_RawData_mDCA2B393570BA050D3840B2449447A2C10639278_inline(__this, /*hidden argument*/NULL);
		int32_t L_5;
		L_5 = X509KeyUsageExtension_Decode_m8D2236720B86833EAFCB87C19BF616E84A15A385(__this, L_4, /*hidden argument*/NULL);
		__this->set__status_7(L_5);
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::.ctor(System.Security.Cryptography.X509Certificates.X509KeyUsageFlags,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509KeyUsageExtension__ctor_m0E105A1E8A7ED901E90E53B33EF86DFB3D2F3B9C (X509KeyUsageExtension_tF78A71F87AEE0E0DC54DFF837AB2880E3D9CF227 * __this, int32_t ___keyUsages0, bool ___critical1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FDCE7F577695853459152469012B0121731CD52);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEB31152738116748FADCEF38CE0C9964DACCF2F);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Extension__ctor_m4DF31A0909F64A47F2F8E64E814FE16E022794E7(__this, /*hidden argument*/NULL);
		Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 * L_0 = (Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 *)il2cpp_codegen_object_new(Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800_il2cpp_TypeInfo_var);
		Oid__ctor_m90964DEF8B3A9EEFAB59023627E2008E4A34983E(L_0, _stringLiteralDEB31152738116748FADCEF38CE0C9964DACCF2F, _stringLiteral2FDCE7F577695853459152469012B0121731CD52, /*hidden argument*/NULL);
		((AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA *)__this)->set__oid_0(L_0);
		bool L_1 = ___critical1;
		X509Extension_set_Critical_mF361A9EB776A20CA39923BD48C4A492A734144E0_inline(__this, L_1, /*hidden argument*/NULL);
		int32_t L_2 = ___keyUsages0;
		int32_t L_3;
		L_3 = X509KeyUsageExtension_GetValidFlags_m3141215EE841412F2C65E9CD7C90AE26E4D05C9A(__this, L_2, /*hidden argument*/NULL);
		__this->set__keyUsages_6(L_3);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4;
		L_4 = X509KeyUsageExtension_Encode_m14D2F2E0777C7CFA424399E66349940A923764E5(__this, /*hidden argument*/NULL);
		AsnEncodedData_set_RawData_m867F92C32F87E4D8932D17EDF21785CA0FDA3BEA(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Security.Cryptography.X509Certificates.X509KeyUsageFlags System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::get_KeyUsages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509KeyUsageExtension_get_KeyUsages_mD2ADFD4CC335B85D453BCA75A8541D3DF099A8FB (X509KeyUsageExtension_tF78A71F87AEE0E0DC54DFF837AB2880E3D9CF227 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get__status_7();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)4))))
		{
			goto IL_0015;
		}
	}

IL_000e:
	{
		int32_t L_3 = __this->get__keyUsages_6();
		return L_3;
	}

IL_0015:
	{
		CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 * L_4 = (CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5_il2cpp_TypeInfo_var)));
		CryptographicException__ctor_mE6D40FE819914DA1C6600907D160AD4231B46C31(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD20A4058B7B405BF173793FAAC54A85874A0CDDE)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509KeyUsageExtension_get_KeyUsages_mD2ADFD4CC335B85D453BCA75A8541D3DF099A8FB_RuntimeMethod_var)));
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509KeyUsageExtension_CopyFrom_m029A26C577528A8DF077CF68AD2787DC1E76FA7F (X509KeyUsageExtension_tF78A71F87AEE0E0DC54DFF837AB2880E3D9CF227 * __this, AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA * ___asnEncodedData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509Extension_t9142CAA11EB46CC4CAB51A26D3B84BDA06FA9FF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FDCE7F577695853459152469012B0121731CD52);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEB31152738116748FADCEF38CE0C9964DACCF2F);
		s_Il2CppMethodInitialized = true;
	}
	X509Extension_t9142CAA11EB46CC4CAB51A26D3B84BDA06FA9FF5 * V_0 = NULL;
	{
		AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA * L_0 = ___asnEncodedData0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC9FB8C73B342D5B3C700EDA7C5212DD547D29E4E)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509KeyUsageExtension_CopyFrom_m029A26C577528A8DF077CF68AD2787DC1E76FA7F_RuntimeMethod_var)));
	}

IL_000e:
	{
		AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA * L_2 = ___asnEncodedData0;
		V_0 = ((X509Extension_t9142CAA11EB46CC4CAB51A26D3B84BDA06FA9FF5 *)IsInstClass((RuntimeObject*)L_2, X509Extension_t9142CAA11EB46CC4CAB51A26D3B84BDA06FA9FF5_il2cpp_TypeInfo_var));
		X509Extension_t9142CAA11EB46CC4CAB51A26D3B84BDA06FA9FF5 * L_3 = V_0;
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		String_t* L_4;
		L_4 = Locale_GetText_mF8FE147379A36330B41A5D5E2CAD23C18931E66E(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD615D452AAA84D559E3E5FFF5168A1AF47500E8D)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_5 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_5, L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC9FB8C73B342D5B3C700EDA7C5212DD547D29E4E)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509KeyUsageExtension_CopyFrom_m029A26C577528A8DF077CF68AD2787DC1E76FA7F_RuntimeMethod_var)));
	}

IL_002d:
	{
		X509Extension_t9142CAA11EB46CC4CAB51A26D3B84BDA06FA9FF5 * L_6 = V_0;
		NullCheck(L_6);
		Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 * L_7 = ((AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA *)L_6)->get__oid_0();
		if (L_7)
		{
			goto IL_004c;
		}
	}
	{
		Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 * L_8 = (Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 *)il2cpp_codegen_object_new(Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800_il2cpp_TypeInfo_var);
		Oid__ctor_m90964DEF8B3A9EEFAB59023627E2008E4A34983E(L_8, _stringLiteralDEB31152738116748FADCEF38CE0C9964DACCF2F, _stringLiteral2FDCE7F577695853459152469012B0121731CD52, /*hidden argument*/NULL);
		((AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA *)__this)->set__oid_0(L_8);
		goto IL_005d;
	}

IL_004c:
	{
		X509Extension_t9142CAA11EB46CC4CAB51A26D3B84BDA06FA9FF5 * L_9 = V_0;
		NullCheck(L_9);
		Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 * L_10 = ((AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA *)L_9)->get__oid_0();
		Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 * L_11 = (Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 *)il2cpp_codegen_object_new(Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800_il2cpp_TypeInfo_var);
		Oid__ctor_m8C4B7AE0D9207BCF03960553182B43B8D1536ED0(L_11, L_10, /*hidden argument*/NULL);
		((AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA *)__this)->set__oid_0(L_11);
	}

IL_005d:
	{
		X509Extension_t9142CAA11EB46CC4CAB51A26D3B84BDA06FA9FF5 * L_12 = V_0;
		NullCheck(L_12);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13;
		L_13 = AsnEncodedData_get_RawData_mDCA2B393570BA050D3840B2449447A2C10639278_inline(L_12, /*hidden argument*/NULL);
		AsnEncodedData_set_RawData_m867F92C32F87E4D8932D17EDF21785CA0FDA3BEA(__this, L_13, /*hidden argument*/NULL);
		X509Extension_t9142CAA11EB46CC4CAB51A26D3B84BDA06FA9FF5 * L_14 = V_0;
		NullCheck(L_14);
		bool L_15;
		L_15 = X509Extension_get_Critical_m56CF11BDF0C2D2917C326013630709C7709DCF12_inline(L_14, /*hidden argument*/NULL);
		X509Extension_set_Critical_mF361A9EB776A20CA39923BD48C4A492A734144E0_inline(__this, L_15, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16;
		L_16 = AsnEncodedData_get_RawData_mDCA2B393570BA050D3840B2449447A2C10639278_inline(__this, /*hidden argument*/NULL);
		int32_t L_17;
		L_17 = X509KeyUsageExtension_Decode_m8D2236720B86833EAFCB87C19BF616E84A15A385(__this, L_16, /*hidden argument*/NULL);
		__this->set__status_7(L_17);
		return;
	}
}
// System.Security.Cryptography.X509Certificates.X509KeyUsageFlags System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::GetValidFlags(System.Security.Cryptography.X509Certificates.X509KeyUsageFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509KeyUsageExtension_GetValidFlags_m3141215EE841412F2C65E9CD7C90AE26E4D05C9A (X509KeyUsageExtension_tF78A71F87AEE0E0DC54DFF837AB2880E3D9CF227 * __this, int32_t ___flags0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___flags0;
		int32_t L_1 = ___flags0;
		if ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)33023)))) == ((int32_t)L_1)))
		{
			goto IL_000c;
		}
	}
	{
		return (int32_t)(0);
	}

IL_000c:
	{
		int32_t L_2 = ___flags0;
		return L_2;
	}
}
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::Decode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509KeyUsageExtension_Decode_m8D2236720B86833EAFCB87C19BF616E84A15A385 (X509KeyUsageExtension_tF78A71F87AEE0E0DC54DFF837AB2880E3D9CF227 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___extension0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___extension0;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___extension0;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0009;
		}
	}

IL_0007:
	{
		return (int32_t)(1);
	}

IL_0009:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___extension0;
		NullCheck(L_2);
		int32_t L_3 = 0;
		uint8_t L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if ((((int32_t)L_4) == ((int32_t)3)))
		{
			goto IL_0011;
		}
	}
	{
		return (int32_t)(2);
	}

IL_0011:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = ___extension0;
		NullCheck(L_5);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))) >= ((int32_t)3)))
		{
			goto IL_0019;
		}
	}
	{
		return (int32_t)(3);
	}

IL_0019:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___extension0;
		NullCheck(L_6);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))) >= ((int32_t)4)))
		{
			goto IL_0021;
		}
	}
	{
		return (int32_t)(4);
	}

IL_0021:
	{
	}

IL_0022:
	try
	{ // begin try (depth: 1)
		{
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = ___extension0;
			ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_8 = (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 *)il2cpp_codegen_object_new(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8_il2cpp_TypeInfo_var);
			ASN1__ctor_mE534D499DABEAAA35E0F30572CD295A9FCFA1C7E(L_8, L_7, /*hidden argument*/NULL);
			V_0 = L_8;
			V_1 = 0;
			V_2 = 1;
			goto IL_0040;
		}

IL_002f:
		{
			int32_t L_9 = V_1;
			ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_10 = V_0;
			NullCheck(L_10);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11;
			L_11 = ASN1_get_Value_m95545A82635424B999816713F09A224ED01DF0C2(L_10, /*hidden argument*/NULL);
			int32_t L_12 = V_2;
			int32_t L_13 = L_12;
			V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
			NullCheck(L_11);
			int32_t L_14 = L_13;
			uint8_t L_15 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_9<<(int32_t)8)), (int32_t)L_15));
		}

IL_0040:
		{
			int32_t L_16 = V_2;
			ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_17 = V_0;
			NullCheck(L_17);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18;
			L_18 = ASN1_get_Value_m95545A82635424B999816713F09A224ED01DF0C2(L_17, /*hidden argument*/NULL);
			NullCheck(L_18);
			if ((((int32_t)L_16) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))))))
			{
				goto IL_002f;
			}
		}

IL_004b:
		{
			int32_t L_19 = V_1;
			int32_t L_20;
			L_20 = X509KeyUsageExtension_GetValidFlags_m3141215EE841412F2C65E9CD7C90AE26E4D05C9A(__this, L_19, /*hidden argument*/NULL);
			__this->set__keyUsages_6(L_20);
			goto IL_005f;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_005a;
		}
		throw e;
	}

CATCH_005a:
	{ // begin catch(System.Object)
		V_3 = 1;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0061;
	} // end catch (depth: 1)

IL_005f:
	{
		return (int32_t)(0);
	}

IL_0061:
	{
		int32_t L_21 = V_3;
		return L_21;
	}
}
// System.Byte[] System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::Encode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* X509KeyUsageExtension_Encode_m14D2F2E0777C7CFA424399E66349940A923764E5 (X509KeyUsageExtension_tF78A71F87AEE0E0DC54DFF837AB2880E3D9CF227 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * V_0 = NULL;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	int32_t V_3 = 0;
	int32_t G_B5_0 = 0;
	{
		V_0 = (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 *)NULL;
		int32_t L_0 = __this->get__keyUsages_6();
		V_1 = L_0;
		V_2 = (uint8_t)0;
		int32_t L_1 = V_1;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = L_2;
		uint8_t L_4 = V_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_4);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_5 = (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 *)il2cpp_codegen_object_new(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8_il2cpp_TypeInfo_var);
		ASN1__ctor_mB8A19279E6079D30BB6A594ADAC7FEE89E822CDC(L_5, (uint8_t)3, L_3, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_0081;
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)255))))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_7 = V_1;
		G_B5_0 = ((int32_t)((int32_t)L_7>>(int32_t)8));
		goto IL_002f;
	}

IL_002e:
	{
		int32_t L_8 = V_1;
		G_B5_0 = L_8;
	}

IL_002f:
	{
		V_3 = G_B5_0;
		goto IL_003b;
	}

IL_0032:
	{
		uint8_t L_9 = V_2;
		V_2 = (uint8_t)((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1))));
		int32_t L_10 = V_3;
		V_3 = ((int32_t)((int32_t)L_10>>(int32_t)1));
	}

IL_003b:
	{
		int32_t L_11 = V_3;
		if (((int32_t)((int32_t)L_11&(int32_t)1)))
		{
			goto IL_0044;
		}
	}
	{
		uint8_t L_12 = V_2;
		if ((((int32_t)L_12) < ((int32_t)8)))
		{
			goto IL_0032;
		}
	}

IL_0044:
	{
		int32_t L_13 = V_1;
		if ((((int32_t)L_13) > ((int32_t)((int32_t)255))))
		{
			goto IL_0064;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)2);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = L_14;
		uint8_t L_16 = V_2;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_16);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17 = L_15;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)((uint8_t)L_18)));
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_19 = (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 *)il2cpp_codegen_object_new(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8_il2cpp_TypeInfo_var);
		ASN1__ctor_mB8A19279E6079D30BB6A594ADAC7FEE89E822CDC(L_19, (uint8_t)3, L_17, /*hidden argument*/NULL);
		V_0 = L_19;
		goto IL_0081;
	}

IL_0064:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_20 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)3);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_21 = L_20;
		uint8_t L_22 = V_2;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_22);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23 = L_21;
		int32_t L_24 = V_1;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)((uint8_t)L_24)));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_25 = L_23;
		int32_t L_26 = V_1;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_26>>(int32_t)8)))));
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_27 = (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 *)il2cpp_codegen_object_new(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8_il2cpp_TypeInfo_var);
		ASN1__ctor_mB8A19279E6079D30BB6A594ADAC7FEE89E822CDC(L_27, (uint8_t)3, L_25, /*hidden argument*/NULL);
		V_0 = L_27;
	}

IL_0081:
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_28 = V_0;
		NullCheck(L_28);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_29;
		L_29 = VirtFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(4 /* System.Byte[] Mono.Security.ASN1::GetBytes() */, L_28);
		return L_29;
	}
}
// System.String System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::ToString(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509KeyUsageExtension_ToString_m16FC486E9C54EBAEF7CA8C62C820DE7F0BE1E084 (X509KeyUsageExtension_tF78A71F87AEE0E0DC54DFF837AB2880E3D9CF227 * __this, bool ___multiLine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral001611EA36FEB747E4C160A3E7A402813B416AF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B85D604B5CD78CCF01CDA620C0DEF5DCC5C1FD7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral315E5D2D2D07B33F565952A5C0509A988785ABF6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62F92E932A25B80B40DBB89A07F4AD690B6F800D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75C57EB9FD95FB9243FE99EBB78A77B0117BD190);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91E2D84A2649FBF80361A807D1020FB40280EF31);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C1ED970007229D4BBE511BC369FF3ACD197B1F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCABCFE6297E437347D23F1B446C58DD70094E306);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD32F08BAB4EE365057213BCC6332DD39C2DE46B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9B53FE83B364433B53BD1F5712DD31D58258FB4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEB31152738116748FADCEF38CE0C9964DACCF2F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB6BBFD5D01FC65219978A6C56AF3DD9C51AD35E);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint8_t V_3 = 0x0;
	{
		int32_t L_0 = __this->get__status_7();
		V_2 = L_0;
		int32_t L_1 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0027;
			}
			case 2:
			{
				goto IL_0027;
			}
			case 3:
			{
				goto IL_0034;
			}
		}
	}
	{
		goto IL_003a;
	}

IL_0021:
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_2;
	}

IL_0027:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ((AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA *)__this)->get__raw_1();
		String_t* L_4;
		L_4 = X509Extension_FormatUnkownData_mEF1E719F7AD312B099351C581F4A06925AD9F18A(__this, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0034:
	{
		return _stringLiteralCD32F08BAB4EE365057213BCC6332DD39C2DE46B;
	}

IL_003a:
	{
		Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 * L_5 = ((AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA *)__this)->get__oid_0();
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Oid_get_Value_mD6F4D8AC1A3821D5DA263728C2DC0C208D084A78_inline(L_5, /*hidden argument*/NULL);
		bool L_7;
		L_7 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_6, _stringLiteralDEB31152738116748FADCEF38CE0C9964DACCF2F, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0067;
		}
	}
	{
		Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 * L_8 = ((AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA *)__this)->get__oid_0();
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Oid_get_Value_mD6F4D8AC1A3821D5DA263728C2DC0C208D084A78_inline(L_8, /*hidden argument*/NULL);
		String_t* L_10;
		L_10 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralD9B53FE83B364433B53BD1F5712DD31D58258FB4, L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_0067:
	{
		int32_t L_11 = __this->get__keyUsages_6();
		if (L_11)
		{
			goto IL_0075;
		}
	}
	{
		return _stringLiteralCD32F08BAB4EE365057213BCC6332DD39C2DE46B;
	}

IL_0075:
	{
		StringBuilder_t * L_12 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_12, /*hidden argument*/NULL);
		V_0 = L_12;
		int32_t L_13 = __this->get__keyUsages_6();
		if (!((int32_t)((int32_t)L_13&(int32_t)((int32_t)128))))
		{
			goto IL_0095;
		}
	}
	{
		StringBuilder_t * L_14 = V_0;
		NullCheck(L_14);
		StringBuilder_t * L_15;
		L_15 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_14, _stringLiteralCABCFE6297E437347D23F1B446C58DD70094E306, /*hidden argument*/NULL);
	}

IL_0095:
	{
		int32_t L_16 = __this->get__keyUsages_6();
		if (!((int32_t)((int32_t)L_16&(int32_t)((int32_t)64))))
		{
			goto IL_00c1;
		}
	}
	{
		StringBuilder_t * L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0(L_17, /*hidden argument*/NULL);
		if ((((int32_t)L_18) <= ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		StringBuilder_t * L_19 = V_0;
		NullCheck(L_19);
		StringBuilder_t * L_20;
		L_20 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_19, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, /*hidden argument*/NULL);
	}

IL_00b5:
	{
		StringBuilder_t * L_21 = V_0;
		NullCheck(L_21);
		StringBuilder_t * L_22;
		L_22 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_21, _stringLiteral91E2D84A2649FBF80361A807D1020FB40280EF31, /*hidden argument*/NULL);
	}

IL_00c1:
	{
		int32_t L_23 = __this->get__keyUsages_6();
		if (!((int32_t)((int32_t)L_23&(int32_t)((int32_t)32))))
		{
			goto IL_00ed;
		}
	}
	{
		StringBuilder_t * L_24 = V_0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0(L_24, /*hidden argument*/NULL);
		if ((((int32_t)L_25) <= ((int32_t)0)))
		{
			goto IL_00e1;
		}
	}
	{
		StringBuilder_t * L_26 = V_0;
		NullCheck(L_26);
		StringBuilder_t * L_27;
		L_27 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_26, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, /*hidden argument*/NULL);
	}

IL_00e1:
	{
		StringBuilder_t * L_28 = V_0;
		NullCheck(L_28);
		StringBuilder_t * L_29;
		L_29 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_28, _stringLiteralEB6BBFD5D01FC65219978A6C56AF3DD9C51AD35E, /*hidden argument*/NULL);
	}

IL_00ed:
	{
		int32_t L_30 = __this->get__keyUsages_6();
		if (!((int32_t)((int32_t)L_30&(int32_t)((int32_t)16))))
		{
			goto IL_0119;
		}
	}
	{
		StringBuilder_t * L_31 = V_0;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0(L_31, /*hidden argument*/NULL);
		if ((((int32_t)L_32) <= ((int32_t)0)))
		{
			goto IL_010d;
		}
	}
	{
		StringBuilder_t * L_33 = V_0;
		NullCheck(L_33);
		StringBuilder_t * L_34;
		L_34 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_33, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, /*hidden argument*/NULL);
	}

IL_010d:
	{
		StringBuilder_t * L_35 = V_0;
		NullCheck(L_35);
		StringBuilder_t * L_36;
		L_36 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_35, _stringLiteral9C1ED970007229D4BBE511BC369FF3ACD197B1F2, /*hidden argument*/NULL);
	}

IL_0119:
	{
		int32_t L_37 = __this->get__keyUsages_6();
		if (!((int32_t)((int32_t)L_37&(int32_t)8)))
		{
			goto IL_0144;
		}
	}
	{
		StringBuilder_t * L_38 = V_0;
		NullCheck(L_38);
		int32_t L_39;
		L_39 = StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0(L_38, /*hidden argument*/NULL);
		if ((((int32_t)L_39) <= ((int32_t)0)))
		{
			goto IL_0138;
		}
	}
	{
		StringBuilder_t * L_40 = V_0;
		NullCheck(L_40);
		StringBuilder_t * L_41;
		L_41 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_40, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, /*hidden argument*/NULL);
	}

IL_0138:
	{
		StringBuilder_t * L_42 = V_0;
		NullCheck(L_42);
		StringBuilder_t * L_43;
		L_43 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_42, _stringLiteral001611EA36FEB747E4C160A3E7A402813B416AF1, /*hidden argument*/NULL);
	}

IL_0144:
	{
		int32_t L_44 = __this->get__keyUsages_6();
		if (!((int32_t)((int32_t)L_44&(int32_t)4)))
		{
			goto IL_016f;
		}
	}
	{
		StringBuilder_t * L_45 = V_0;
		NullCheck(L_45);
		int32_t L_46;
		L_46 = StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0(L_45, /*hidden argument*/NULL);
		if ((((int32_t)L_46) <= ((int32_t)0)))
		{
			goto IL_0163;
		}
	}
	{
		StringBuilder_t * L_47 = V_0;
		NullCheck(L_47);
		StringBuilder_t * L_48;
		L_48 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_47, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, /*hidden argument*/NULL);
	}

IL_0163:
	{
		StringBuilder_t * L_49 = V_0;
		NullCheck(L_49);
		StringBuilder_t * L_50;
		L_50 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_49, _stringLiteral0B85D604B5CD78CCF01CDA620C0DEF5DCC5C1FD7, /*hidden argument*/NULL);
	}

IL_016f:
	{
		int32_t L_51 = __this->get__keyUsages_6();
		if (!((int32_t)((int32_t)L_51&(int32_t)2)))
		{
			goto IL_019a;
		}
	}
	{
		StringBuilder_t * L_52 = V_0;
		NullCheck(L_52);
		int32_t L_53;
		L_53 = StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0(L_52, /*hidden argument*/NULL);
		if ((((int32_t)L_53) <= ((int32_t)0)))
		{
			goto IL_018e;
		}
	}
	{
		StringBuilder_t * L_54 = V_0;
		NullCheck(L_54);
		StringBuilder_t * L_55;
		L_55 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_54, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, /*hidden argument*/NULL);
	}

IL_018e:
	{
		StringBuilder_t * L_56 = V_0;
		NullCheck(L_56);
		StringBuilder_t * L_57;
		L_57 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_56, _stringLiteral315E5D2D2D07B33F565952A5C0509A988785ABF6, /*hidden argument*/NULL);
	}

IL_019a:
	{
		int32_t L_58 = __this->get__keyUsages_6();
		if (!((int32_t)((int32_t)L_58&(int32_t)1)))
		{
			goto IL_01c5;
		}
	}
	{
		StringBuilder_t * L_59 = V_0;
		NullCheck(L_59);
		int32_t L_60;
		L_60 = StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0(L_59, /*hidden argument*/NULL);
		if ((((int32_t)L_60) <= ((int32_t)0)))
		{
			goto IL_01b9;
		}
	}
	{
		StringBuilder_t * L_61 = V_0;
		NullCheck(L_61);
		StringBuilder_t * L_62;
		L_62 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_61, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, /*hidden argument*/NULL);
	}

IL_01b9:
	{
		StringBuilder_t * L_63 = V_0;
		NullCheck(L_63);
		StringBuilder_t * L_64;
		L_64 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_63, _stringLiteral75C57EB9FD95FB9243FE99EBB78A77B0117BD190, /*hidden argument*/NULL);
	}

IL_01c5:
	{
		int32_t L_65 = __this->get__keyUsages_6();
		if (!((int32_t)((int32_t)L_65&(int32_t)((int32_t)32768))))
		{
			goto IL_01f4;
		}
	}
	{
		StringBuilder_t * L_66 = V_0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0(L_66, /*hidden argument*/NULL);
		if ((((int32_t)L_67) <= ((int32_t)0)))
		{
			goto IL_01e8;
		}
	}
	{
		StringBuilder_t * L_68 = V_0;
		NullCheck(L_68);
		StringBuilder_t * L_69;
		L_69 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_68, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, /*hidden argument*/NULL);
	}

IL_01e8:
	{
		StringBuilder_t * L_70 = V_0;
		NullCheck(L_70);
		StringBuilder_t * L_71;
		L_71 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_70, _stringLiteral62F92E932A25B80B40DBB89A07F4AD690B6F800D, /*hidden argument*/NULL);
	}

IL_01f4:
	{
		int32_t L_72 = __this->get__keyUsages_6();
		V_1 = L_72;
		StringBuilder_t * L_73 = V_0;
		NullCheck(L_73);
		StringBuilder_t * L_74;
		L_74 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_73, _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32, /*hidden argument*/NULL);
		StringBuilder_t * L_75 = V_0;
		int32_t L_76 = V_1;
		V_3 = (uint8_t)((int32_t)((uint8_t)L_76));
		String_t* L_77;
		L_77 = Byte_ToString_mABEF6F24915951FF4A4D87B389D8418B2638178C((uint8_t*)(&V_3), _stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260, /*hidden argument*/NULL);
		NullCheck(L_75);
		StringBuilder_t * L_78;
		L_78 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_75, L_77, /*hidden argument*/NULL);
		int32_t L_79 = V_1;
		if ((((int32_t)L_79) <= ((int32_t)((int32_t)255))))
		{
			goto IL_0249;
		}
	}
	{
		StringBuilder_t * L_80 = V_0;
		NullCheck(L_80);
		StringBuilder_t * L_81;
		L_81 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_80, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, /*hidden argument*/NULL);
		StringBuilder_t * L_82 = V_0;
		int32_t L_83 = V_1;
		V_3 = (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_83>>(int32_t)8))));
		String_t* L_84;
		L_84 = Byte_ToString_mABEF6F24915951FF4A4D87B389D8418B2638178C((uint8_t*)(&V_3), _stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260, /*hidden argument*/NULL);
		NullCheck(L_82);
		StringBuilder_t * L_85;
		L_85 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_82, L_84, /*hidden argument*/NULL);
	}

IL_0249:
	{
		StringBuilder_t * L_86 = V_0;
		NullCheck(L_86);
		StringBuilder_t * L_87;
		L_87 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_86, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, /*hidden argument*/NULL);
		bool L_88 = ___multiLine0;
		if (!L_88)
		{
			goto IL_0264;
		}
	}
	{
		StringBuilder_t * L_89 = V_0;
		String_t* L_90;
		L_90 = Environment_get_NewLine_mD145C8EE917C986BAA7C5243DEFAF4D333C521B4(/*hidden argument*/NULL);
		NullCheck(L_89);
		StringBuilder_t * L_91;
		L_91 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_89, L_90, /*hidden argument*/NULL);
	}

IL_0264:
	{
		StringBuilder_t * L_92 = V_0;
		NullCheck(L_92);
		String_t* L_93;
		L_93 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_92);
		return L_93;
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
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509SubjectKeyIdentifierExtension__ctor_m0A09F64706823AF7D0494B62B041FF11AFA587CF (X509SubjectKeyIdentifierExtension_t9781D24066D84C09C7137124FBC848491BF54567 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral830B64B4254C502C612E53C83DBEE6238E710499);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD5A04FDCE8EDE26B5E78DE17CAB2D9DB4D10C73);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Extension__ctor_m4DF31A0909F64A47F2F8E64E814FE16E022794E7(__this, /*hidden argument*/NULL);
		Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 * L_0 = (Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 *)il2cpp_codegen_object_new(Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800_il2cpp_TypeInfo_var);
		Oid__ctor_m90964DEF8B3A9EEFAB59023627E2008E4A34983E(L_0, _stringLiteral830B64B4254C502C612E53C83DBEE6238E710499, _stringLiteralDD5A04FDCE8EDE26B5E78DE17CAB2D9DB4D10C73, /*hidden argument*/NULL);
		((AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA *)__this)->set__oid_0(L_0);
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509SubjectKeyIdentifierExtension__ctor_m6D7E57ECBE71290733F6658D8197F034A615DB02 (X509SubjectKeyIdentifierExtension_t9781D24066D84C09C7137124FBC848491BF54567 * __this, AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA * ___encodedSubjectKeyIdentifier0, bool ___critical1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral830B64B4254C502C612E53C83DBEE6238E710499);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD5A04FDCE8EDE26B5E78DE17CAB2D9DB4D10C73);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Extension__ctor_m4DF31A0909F64A47F2F8E64E814FE16E022794E7(__this, /*hidden argument*/NULL);
		Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 * L_0 = (Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 *)il2cpp_codegen_object_new(Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800_il2cpp_TypeInfo_var);
		Oid__ctor_m90964DEF8B3A9EEFAB59023627E2008E4A34983E(L_0, _stringLiteral830B64B4254C502C612E53C83DBEE6238E710499, _stringLiteralDD5A04FDCE8EDE26B5E78DE17CAB2D9DB4D10C73, /*hidden argument*/NULL);
		((AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA *)__this)->set__oid_0(L_0);
		AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA * L_1 = ___encodedSubjectKeyIdentifier0;
		NullCheck(L_1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = AsnEncodedData_get_RawData_mDCA2B393570BA050D3840B2449447A2C10639278_inline(L_1, /*hidden argument*/NULL);
		((AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA *)__this)->set__raw_1(L_2);
		bool L_3 = ___critical1;
		X509Extension_set_Critical_mF361A9EB776A20CA39923BD48C4A492A734144E0_inline(__this, L_3, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4;
		L_4 = AsnEncodedData_get_RawData_mDCA2B393570BA050D3840B2449447A2C10639278_inline(__this, /*hidden argument*/NULL);
		int32_t L_5;
		L_5 = X509SubjectKeyIdentifierExtension_Decode_m6ED45FB642F2A5EDAD51EE357CAB8EB95BC8EBA9(__this, L_4, /*hidden argument*/NULL);
		__this->set__status_7(L_5);
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509SubjectKeyIdentifierExtension__ctor_m178F0928E93C151B64754E82C9613687D80671A0 (X509SubjectKeyIdentifierExtension_t9781D24066D84C09C7137124FBC848491BF54567 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___subjectKeyIdentifier0, bool ___critical1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral830B64B4254C502C612E53C83DBEE6238E710499);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD5A04FDCE8EDE26B5E78DE17CAB2D9DB4D10C73);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Extension__ctor_m4DF31A0909F64A47F2F8E64E814FE16E022794E7(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___subjectKeyIdentifier0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC4E1CA5F695C0687C577DB8E17E55E7B5845A445)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509SubjectKeyIdentifierExtension__ctor_m178F0928E93C151B64754E82C9613687D80671A0_RuntimeMethod_var)));
	}

IL_0014:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___subjectKeyIdentifier0;
		NullCheck(L_2);
		if ((((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0023;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_3 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC4E1CA5F695C0687C577DB8E17E55E7B5845A445)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509SubjectKeyIdentifierExtension__ctor_m178F0928E93C151B64754E82C9613687D80671A0_RuntimeMethod_var)));
	}

IL_0023:
	{
		Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 * L_4 = (Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 *)il2cpp_codegen_object_new(Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800_il2cpp_TypeInfo_var);
		Oid__ctor_m90964DEF8B3A9EEFAB59023627E2008E4A34983E(L_4, _stringLiteral830B64B4254C502C612E53C83DBEE6238E710499, _stringLiteralDD5A04FDCE8EDE26B5E78DE17CAB2D9DB4D10C73, /*hidden argument*/NULL);
		((AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA *)__this)->set__oid_0(L_4);
		bool L_5 = ___critical1;
		X509Extension_set_Critical_mF361A9EB776A20CA39923BD48C4A492A734144E0_inline(__this, L_5, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___subjectKeyIdentifier0;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_6);
		RuntimeObject * L_7;
		L_7 = Array_Clone_m3C566B3D3F4333212411BD7C3B61D798BADB3F3C((RuntimeArray *)(RuntimeArray *)L_6, /*hidden argument*/NULL);
		__this->set__subjectKeyIdentifier_5(((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)Castclass((RuntimeObject*)L_7, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var)));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8;
		L_8 = X509SubjectKeyIdentifierExtension_Encode_m6BEC26EF891B31FF98EF4FDF96CC0E9CEDF0B208(__this, /*hidden argument*/NULL);
		AsnEncodedData_set_RawData_m867F92C32F87E4D8932D17EDF21785CA0FDA3BEA(__this, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509SubjectKeyIdentifierExtension__ctor_mDEF8BD36D2A43B1BDC54760AC6E57458E5ECBFE6 (X509SubjectKeyIdentifierExtension_t9781D24066D84C09C7137124FBC848491BF54567 * __this, String_t* ___subjectKeyIdentifier0, bool ___critical1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral830B64B4254C502C612E53C83DBEE6238E710499);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD5A04FDCE8EDE26B5E78DE17CAB2D9DB4D10C73);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Extension__ctor_m4DF31A0909F64A47F2F8E64E814FE16E022794E7(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___subjectKeyIdentifier0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC4E1CA5F695C0687C577DB8E17E55E7B5845A445)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509SubjectKeyIdentifierExtension__ctor_mDEF8BD36D2A43B1BDC54760AC6E57458E5ECBFE6_RuntimeMethod_var)));
	}

IL_0014:
	{
		String_t* L_2 = ___subjectKeyIdentifier0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) >= ((int32_t)2)))
		{
			goto IL_0028;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_4 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC4E1CA5F695C0687C577DB8E17E55E7B5845A445)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509SubjectKeyIdentifierExtension__ctor_mDEF8BD36D2A43B1BDC54760AC6E57458E5ECBFE6_RuntimeMethod_var)));
	}

IL_0028:
	{
		Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 * L_5 = (Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 *)il2cpp_codegen_object_new(Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800_il2cpp_TypeInfo_var);
		Oid__ctor_m90964DEF8B3A9EEFAB59023627E2008E4A34983E(L_5, _stringLiteral830B64B4254C502C612E53C83DBEE6238E710499, _stringLiteralDD5A04FDCE8EDE26B5E78DE17CAB2D9DB4D10C73, /*hidden argument*/NULL);
		((AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA *)__this)->set__oid_0(L_5);
		bool L_6 = ___critical1;
		X509Extension_set_Critical_mF361A9EB776A20CA39923BD48C4A492A734144E0_inline(__this, L_6, /*hidden argument*/NULL);
		String_t* L_7 = ___subjectKeyIdentifier0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8;
		L_8 = X509SubjectKeyIdentifierExtension_FromHex_m8CAB896F210E058270EB9492F05D2776FEB6A1EA(L_7, /*hidden argument*/NULL);
		__this->set__subjectKeyIdentifier_5(L_8);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9;
		L_9 = X509SubjectKeyIdentifierExtension_Encode_m6BEC26EF891B31FF98EF4FDF96CC0E9CEDF0B208(__this, /*hidden argument*/NULL);
		AsnEncodedData_set_RawData_m867F92C32F87E4D8932D17EDF21785CA0FDA3BEA(__this, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.X509Certificates.PublicKey,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509SubjectKeyIdentifierExtension__ctor_m50305847B96BE3F6CB0816EB143AB89108DA493A (X509SubjectKeyIdentifierExtension_t9781D24066D84C09C7137124FBC848491BF54567 * __this, PublicKey_t40ABE7E0985F3E274C9564670970EC6F3B39A4A2 * ___key0, bool ___critical1, const RuntimeMethod* method)
{
	{
		PublicKey_t40ABE7E0985F3E274C9564670970EC6F3B39A4A2 * L_0 = ___key0;
		bool L_1 = ___critical1;
		X509SubjectKeyIdentifierExtension__ctor_m7CE599E8BEFBF176243E07100E2B9D1AD40E109E(__this, L_0, 0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.X509Certificates.PublicKey,System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509SubjectKeyIdentifierExtension__ctor_m7CE599E8BEFBF176243E07100E2B9D1AD40E109E (X509SubjectKeyIdentifierExtension_t9781D24066D84C09C7137124FBC848491BF54567 * __this, PublicKey_t40ABE7E0985F3E274C9564670970EC6F3B39A4A2 * ___key0, int32_t ___algorithm1, bool ___critical2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral830B64B4254C502C612E53C83DBEE6238E710499);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD5A04FDCE8EDE26B5E78DE17CAB2D9DB4D10C73);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * V_1 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_2 = NULL;
	{
		X509Extension__ctor_m4DF31A0909F64A47F2F8E64E814FE16E022794E7(__this, /*hidden argument*/NULL);
		PublicKey_t40ABE7E0985F3E274C9564670970EC6F3B39A4A2 * L_0 = ___key0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509SubjectKeyIdentifierExtension__ctor_m7CE599E8BEFBF176243E07100E2B9D1AD40E109E_RuntimeMethod_var)));
	}

IL_0014:
	{
		PublicKey_t40ABE7E0985F3E274C9564670970EC6F3B39A4A2 * L_2 = ___key0;
		NullCheck(L_2);
		AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA * L_3;
		L_3 = PublicKey_get_EncodedKeyValue_m0294AF8C29C7329BEB243543D8FDA98B60FDB291_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4;
		L_4 = AsnEncodedData_get_RawData_mDCA2B393570BA050D3840B2449447A2C10639278_inline(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = ___algorithm1;
		switch (L_5)
		{
			case 0:
			{
				goto IL_0037;
			}
			case 1:
			{
				goto IL_004d;
			}
			case 2:
			{
				goto IL_008f;
			}
		}
	}
	{
		goto IL_0113;
	}

IL_0037:
	{
		SHA1_t15B592B9935E19EC3FD5679B969239AC572E2C0E * L_6;
		L_6 = SHA1_Create_mC0C045956B56FC33D44AF7146C0E1DF27A3D102A(/*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = V_0;
		NullCheck(L_6);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8;
		L_8 = HashAlgorithm_ComputeHash_m54AE40F9CD9E46736384369DBB5739FBCBDF67D9(L_6, L_7, /*hidden argument*/NULL);
		__this->set__subjectKeyIdentifier_5(L_8);
		goto IL_011e;
	}

IL_004d:
	{
		SHA1_t15B592B9935E19EC3FD5679B969239AC572E2C0E * L_9;
		L_9 = SHA1_Create_mC0C045956B56FC33D44AF7146C0E1DF27A3D102A(/*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = V_0;
		NullCheck(L_9);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11;
		L_11 = HashAlgorithm_ComputeHash_m54AE40F9CD9E46736384369DBB5739FBCBDF67D9(L_9, L_10, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)8);
		__this->set__subjectKeyIdentifier_5(L_12);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = __this->get__subjectKeyIdentifier_5();
		Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_11, ((int32_t)12), (RuntimeArray *)(RuntimeArray *)L_13, 0, 8, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = __this->get__subjectKeyIdentifier_5();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = __this->get__subjectKeyIdentifier_5();
		NullCheck(L_15);
		int32_t L_16 = 0;
		uint8_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)64)|(int32_t)((int32_t)((int32_t)L_17&(int32_t)((int32_t)15))))))));
		goto IL_011e;
	}

IL_008f:
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_18 = (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 *)il2cpp_codegen_object_new(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8_il2cpp_TypeInfo_var);
		ASN1__ctor_mC8594B7A2376B58F26F1D0457B0F9F5880D87142(L_18, (uint8_t)((int32_t)48), /*hidden argument*/NULL);
		V_1 = L_18;
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_19 = V_1;
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_20 = (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 *)il2cpp_codegen_object_new(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8_il2cpp_TypeInfo_var);
		ASN1__ctor_mC8594B7A2376B58F26F1D0457B0F9F5880D87142(L_20, (uint8_t)((int32_t)48), /*hidden argument*/NULL);
		NullCheck(L_19);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_21;
		L_21 = ASN1_Add_m35AB44F469BE9C185A91D2E265A7DA6B27311F7B(L_19, L_20, /*hidden argument*/NULL);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_22 = L_21;
		PublicKey_t40ABE7E0985F3E274C9564670970EC6F3B39A4A2 * L_23 = ___key0;
		NullCheck(L_23);
		Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 * L_24;
		L_24 = PublicKey_get_Oid_mE3207B84A9090EC5404F6CD4AEABB1F37EC1F988_inline(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		String_t* L_25;
		L_25 = Oid_get_Value_mD6F4D8AC1A3821D5DA263728C2DC0C208D084A78_inline(L_24, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_26;
		L_26 = CryptoConfig_EncodeOID_mD433EFD5608689AA7A858351D34DB7EEDBE1494B(L_25, /*hidden argument*/NULL);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_27 = (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 *)il2cpp_codegen_object_new(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8_il2cpp_TypeInfo_var);
		ASN1__ctor_mE534D499DABEAAA35E0F30572CD295A9FCFA1C7E(L_27, L_26, /*hidden argument*/NULL);
		NullCheck(L_22);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_28;
		L_28 = ASN1_Add_m35AB44F469BE9C185A91D2E265A7DA6B27311F7B(L_22, L_27, /*hidden argument*/NULL);
		PublicKey_t40ABE7E0985F3E274C9564670970EC6F3B39A4A2 * L_29 = ___key0;
		NullCheck(L_29);
		AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA * L_30;
		L_30 = PublicKey_get_EncodedParameters_mFF4F9A39D91C0A00D1B36C93944816154C7255B3_inline(L_29, /*hidden argument*/NULL);
		NullCheck(L_30);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_31;
		L_31 = AsnEncodedData_get_RawData_mDCA2B393570BA050D3840B2449447A2C10639278_inline(L_30, /*hidden argument*/NULL);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_32 = (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 *)il2cpp_codegen_object_new(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8_il2cpp_TypeInfo_var);
		ASN1__ctor_mE534D499DABEAAA35E0F30572CD295A9FCFA1C7E(L_32, L_31, /*hidden argument*/NULL);
		NullCheck(L_22);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_33;
		L_33 = ASN1_Add_m35AB44F469BE9C185A91D2E265A7DA6B27311F7B(L_22, L_32, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_34 = V_0;
		NullCheck(L_34);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_35 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_34)->max_length))), (int32_t)1)));
		V_2 = L_35;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_36 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_37 = V_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_38 = V_0;
		NullCheck(L_38);
		Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_36, 0, (RuntimeArray *)(RuntimeArray *)L_37, 1, ((int32_t)((int32_t)(((RuntimeArray*)L_38)->max_length))), /*hidden argument*/NULL);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_39 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_40 = V_2;
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_41 = (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 *)il2cpp_codegen_object_new(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8_il2cpp_TypeInfo_var);
		ASN1__ctor_mB8A19279E6079D30BB6A594ADAC7FEE89E822CDC(L_41, (uint8_t)3, L_40, /*hidden argument*/NULL);
		NullCheck(L_39);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_42;
		L_42 = ASN1_Add_m35AB44F469BE9C185A91D2E265A7DA6B27311F7B(L_39, L_41, /*hidden argument*/NULL);
		SHA1_t15B592B9935E19EC3FD5679B969239AC572E2C0E * L_43;
		L_43 = SHA1_Create_mC0C045956B56FC33D44AF7146C0E1DF27A3D102A(/*hidden argument*/NULL);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_44 = V_1;
		NullCheck(L_44);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_45;
		L_45 = VirtFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(4 /* System.Byte[] Mono.Security.ASN1::GetBytes() */, L_44);
		NullCheck(L_43);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_46;
		L_46 = HashAlgorithm_ComputeHash_m54AE40F9CD9E46736384369DBB5739FBCBDF67D9(L_43, L_45, /*hidden argument*/NULL);
		__this->set__subjectKeyIdentifier_5(L_46);
		goto IL_011e;
	}

IL_0113:
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_47 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA9AF8D13B64E63A31A01386E007E5C9CF3A6CF5B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509SubjectKeyIdentifierExtension__ctor_m7CE599E8BEFBF176243E07100E2B9D1AD40E109E_RuntimeMethod_var)));
	}

IL_011e:
	{
		Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 * L_48 = (Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 *)il2cpp_codegen_object_new(Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800_il2cpp_TypeInfo_var);
		Oid__ctor_m90964DEF8B3A9EEFAB59023627E2008E4A34983E(L_48, _stringLiteral830B64B4254C502C612E53C83DBEE6238E710499, _stringLiteralDD5A04FDCE8EDE26B5E78DE17CAB2D9DB4D10C73, /*hidden argument*/NULL);
		((AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA *)__this)->set__oid_0(L_48);
		bool L_49 = ___critical2;
		X509Extension_set_Critical_mF361A9EB776A20CA39923BD48C4A492A734144E0_inline(__this, L_49, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_50;
		L_50 = X509SubjectKeyIdentifierExtension_Encode_m6BEC26EF891B31FF98EF4FDF96CC0E9CEDF0B208(__this, /*hidden argument*/NULL);
		AsnEncodedData_set_RawData_m867F92C32F87E4D8932D17EDF21785CA0FDA3BEA(__this, L_50, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::get_SubjectKeyIdentifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509SubjectKeyIdentifierExtension_get_SubjectKeyIdentifier_mD90F985708EE4E69C37AA8B09AEBBE64A4002601 (X509SubjectKeyIdentifierExtension_t9781D24066D84C09C7137124FBC848491BF54567 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get__status_7();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)4))))
		{
			goto IL_002e;
		}
	}

IL_000e:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = __this->get__subjectKeyIdentifier_5();
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = __this->get__subjectKeyIdentifier_5();
		String_t* L_5;
		L_5 = CryptoConvert_ToHex_m567E8BF67E972F8A8AC9DC37BEE4F06521082EF4(L_4, /*hidden argument*/NULL);
		__this->set__ski_6(L_5);
	}

IL_0027:
	{
		String_t* L_6 = __this->get__ski_6();
		return L_6;
	}

IL_002e:
	{
		CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 * L_7 = (CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5_il2cpp_TypeInfo_var)));
		CryptographicException__ctor_mE6D40FE819914DA1C6600907D160AD4231B46C31(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD20A4058B7B405BF173793FAAC54A85874A0CDDE)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509SubjectKeyIdentifierExtension_get_SubjectKeyIdentifier_mD90F985708EE4E69C37AA8B09AEBBE64A4002601_RuntimeMethod_var)));
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509SubjectKeyIdentifierExtension_CopyFrom_mA94CE978304FA27C3CD9719F34D85CD34FC3695D (X509SubjectKeyIdentifierExtension_t9781D24066D84C09C7137124FBC848491BF54567 * __this, AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA * ___asnEncodedData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509Extension_t9142CAA11EB46CC4CAB51A26D3B84BDA06FA9FF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral830B64B4254C502C612E53C83DBEE6238E710499);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD5A04FDCE8EDE26B5E78DE17CAB2D9DB4D10C73);
		s_Il2CppMethodInitialized = true;
	}
	X509Extension_t9142CAA11EB46CC4CAB51A26D3B84BDA06FA9FF5 * V_0 = NULL;
	{
		AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA * L_0 = ___asnEncodedData0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC9FB8C73B342D5B3C700EDA7C5212DD547D29E4E)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509SubjectKeyIdentifierExtension_CopyFrom_mA94CE978304FA27C3CD9719F34D85CD34FC3695D_RuntimeMethod_var)));
	}

IL_000e:
	{
		AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA * L_2 = ___asnEncodedData0;
		V_0 = ((X509Extension_t9142CAA11EB46CC4CAB51A26D3B84BDA06FA9FF5 *)IsInstClass((RuntimeObject*)L_2, X509Extension_t9142CAA11EB46CC4CAB51A26D3B84BDA06FA9FF5_il2cpp_TypeInfo_var));
		X509Extension_t9142CAA11EB46CC4CAB51A26D3B84BDA06FA9FF5 * L_3 = V_0;
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		String_t* L_4;
		L_4 = Locale_GetText_mF8FE147379A36330B41A5D5E2CAD23C18931E66E(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD615D452AAA84D559E3E5FFF5168A1AF47500E8D)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_5 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_5, L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC9FB8C73B342D5B3C700EDA7C5212DD547D29E4E)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509SubjectKeyIdentifierExtension_CopyFrom_mA94CE978304FA27C3CD9719F34D85CD34FC3695D_RuntimeMethod_var)));
	}

IL_002d:
	{
		X509Extension_t9142CAA11EB46CC4CAB51A26D3B84BDA06FA9FF5 * L_6 = V_0;
		NullCheck(L_6);
		Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 * L_7 = ((AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA *)L_6)->get__oid_0();
		if (L_7)
		{
			goto IL_004c;
		}
	}
	{
		Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 * L_8 = (Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 *)il2cpp_codegen_object_new(Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800_il2cpp_TypeInfo_var);
		Oid__ctor_m90964DEF8B3A9EEFAB59023627E2008E4A34983E(L_8, _stringLiteral830B64B4254C502C612E53C83DBEE6238E710499, _stringLiteralDD5A04FDCE8EDE26B5E78DE17CAB2D9DB4D10C73, /*hidden argument*/NULL);
		((AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA *)__this)->set__oid_0(L_8);
		goto IL_005d;
	}

IL_004c:
	{
		X509Extension_t9142CAA11EB46CC4CAB51A26D3B84BDA06FA9FF5 * L_9 = V_0;
		NullCheck(L_9);
		Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 * L_10 = ((AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA *)L_9)->get__oid_0();
		Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 * L_11 = (Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 *)il2cpp_codegen_object_new(Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800_il2cpp_TypeInfo_var);
		Oid__ctor_m8C4B7AE0D9207BCF03960553182B43B8D1536ED0(L_11, L_10, /*hidden argument*/NULL);
		((AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA *)__this)->set__oid_0(L_11);
	}

IL_005d:
	{
		X509Extension_t9142CAA11EB46CC4CAB51A26D3B84BDA06FA9FF5 * L_12 = V_0;
		NullCheck(L_12);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13;
		L_13 = AsnEncodedData_get_RawData_mDCA2B393570BA050D3840B2449447A2C10639278_inline(L_12, /*hidden argument*/NULL);
		AsnEncodedData_set_RawData_m867F92C32F87E4D8932D17EDF21785CA0FDA3BEA(__this, L_13, /*hidden argument*/NULL);
		X509Extension_t9142CAA11EB46CC4CAB51A26D3B84BDA06FA9FF5 * L_14 = V_0;
		NullCheck(L_14);
		bool L_15;
		L_15 = X509Extension_get_Critical_m56CF11BDF0C2D2917C326013630709C7709DCF12_inline(L_14, /*hidden argument*/NULL);
		X509Extension_set_Critical_mF361A9EB776A20CA39923BD48C4A492A734144E0_inline(__this, L_15, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16;
		L_16 = AsnEncodedData_get_RawData_mDCA2B393570BA050D3840B2449447A2C10639278_inline(__this, /*hidden argument*/NULL);
		int32_t L_17;
		L_17 = X509SubjectKeyIdentifierExtension_Decode_m6ED45FB642F2A5EDAD51EE357CAB8EB95BC8EBA9(__this, L_16, /*hidden argument*/NULL);
		__this->set__status_7(L_17);
		return;
	}
}
// System.Byte System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHexChar(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t X509SubjectKeyIdentifierExtension_FromHexChar_m7E53F7E025E6DD03B6BC137CA6F9C43808BFAB92 (Il2CppChar ___c0, const RuntimeMethod* method)
{
	{
		Il2CppChar L_0 = ___c0;
		if ((((int32_t)L_0) < ((int32_t)((int32_t)97))))
		{
			goto IL_0013;
		}
	}
	{
		Il2CppChar L_1 = ___c0;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)102))))
		{
			goto IL_0013;
		}
	}
	{
		Il2CppChar L_2 = ___c0;
		return (uint8_t)((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)((int32_t)97))), (int32_t)((int32_t)10)))));
	}

IL_0013:
	{
		Il2CppChar L_3 = ___c0;
		if ((((int32_t)L_3) < ((int32_t)((int32_t)65))))
		{
			goto IL_0026;
		}
	}
	{
		Il2CppChar L_4 = ___c0;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)70))))
		{
			goto IL_0026;
		}
	}
	{
		Il2CppChar L_5 = ___c0;
		return (uint8_t)((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)((int32_t)65))), (int32_t)((int32_t)10)))));
	}

IL_0026:
	{
		Il2CppChar L_6 = ___c0;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)48))))
		{
			goto IL_0036;
		}
	}
	{
		Il2CppChar L_7 = ___c0;
		if ((((int32_t)L_7) > ((int32_t)((int32_t)57))))
		{
			goto IL_0036;
		}
	}
	{
		Il2CppChar L_8 = ___c0;
		return (uint8_t)((int32_t)((uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)((int32_t)48)))));
	}

IL_0036:
	{
		return (uint8_t)((int32_t)255);
	}
}
// System.Byte System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHexChars(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t X509SubjectKeyIdentifierExtension_FromHexChars_mB25E5A16CF6637BF846D2B22898E552E092AADFA (Il2CppChar ___c10, Il2CppChar ___c21, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	{
		Il2CppChar L_0 = ___c10;
		uint8_t L_1;
		L_1 = X509SubjectKeyIdentifierExtension_FromHexChar_m7E53F7E025E6DD03B6BC137CA6F9C43808BFAB92(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		uint8_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)255))))
		{
			goto IL_001b;
		}
	}
	{
		uint8_t L_3 = V_0;
		Il2CppChar L_4 = ___c21;
		uint8_t L_5;
		L_5 = X509SubjectKeyIdentifierExtension_FromHexChar_m7E53F7E025E6DD03B6BC137CA6F9C43808BFAB92(L_4, /*hidden argument*/NULL);
		V_0 = (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_3<<(int32_t)4))|(int32_t)L_5))));
	}

IL_001b:
	{
		uint8_t L_6 = V_0;
		return L_6;
	}
}
// System.Byte[] System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHex(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* X509SubjectKeyIdentifierExtension_FromHex_m8CAB896F210E058270EB9492F05D2776FEB6A1EA (String_t* ___hex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		String_t* L_0 = ___hex0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL;
	}

IL_0005:
	{
		String_t* L_1 = ___hex0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_1, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_2>>(int32_t)1));
		int32_t L_3 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_1 = L_4;
		V_2 = 0;
		V_3 = 0;
		goto IL_003d;
	}

IL_001b:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = V_1;
		int32_t L_6 = V_2;
		int32_t L_7 = L_6;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		String_t* L_8 = ___hex0;
		int32_t L_9 = V_3;
		int32_t L_10 = L_9;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
		NullCheck(L_8);
		Il2CppChar L_11;
		L_11 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_8, L_10, /*hidden argument*/NULL);
		String_t* L_12 = ___hex0;
		int32_t L_13 = V_3;
		int32_t L_14 = L_13;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
		NullCheck(L_12);
		Il2CppChar L_15;
		L_15 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_12, L_14, /*hidden argument*/NULL);
		uint8_t L_16;
		L_16 = X509SubjectKeyIdentifierExtension_FromHexChars_mB25E5A16CF6637BF846D2B22898E552E092AADFA(L_11, L_15, /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (uint8_t)L_16);
	}

IL_003d:
	{
		int32_t L_17 = V_2;
		int32_t L_18 = V_0;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_001b;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_19 = V_1;
		return L_19;
	}
}
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::Decode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509SubjectKeyIdentifierExtension_Decode_m6ED45FB642F2A5EDAD51EE357CAB8EB95BC8EBA9 (X509SubjectKeyIdentifierExtension_t9781D24066D84C09C7137124FBC848491BF54567 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___extension0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * V_0 = NULL;
	int32_t V_1 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___extension0;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___extension0;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0009;
		}
	}

IL_0007:
	{
		return (int32_t)(1);
	}

IL_0009:
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set__ski_6(L_2);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___extension0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		uint8_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		if ((((int32_t)L_5) == ((int32_t)4)))
		{
			goto IL_001c;
		}
	}
	{
		return (int32_t)(2);
	}

IL_001c:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___extension0;
		NullCheck(L_6);
		if ((!(((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))) == ((uint32_t)2))))
		{
			goto IL_0024;
		}
	}
	{
		return (int32_t)(4);
	}

IL_0024:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = ___extension0;
		NullCheck(L_7);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))) >= ((int32_t)3)))
		{
			goto IL_002c;
		}
	}
	{
		return (int32_t)(3);
	}

IL_002c:
	{
	}

IL_002d:
	try
	{ // begin try (depth: 1)
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = ___extension0;
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_9 = (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 *)il2cpp_codegen_object_new(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8_il2cpp_TypeInfo_var);
		ASN1__ctor_mE534D499DABEAAA35E0F30572CD295A9FCFA1C7E(L_9, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_10 = V_0;
		NullCheck(L_10);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11;
		L_11 = ASN1_get_Value_m95545A82635424B999816713F09A224ED01DF0C2(L_10, /*hidden argument*/NULL);
		__this->set__subjectKeyIdentifier_5(L_11);
		goto IL_0047;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0042;
		}
		throw e;
	}

CATCH_0042:
	{ // begin catch(System.Object)
		V_1 = 1;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0049;
	} // end catch (depth: 1)

IL_0047:
	{
		return (int32_t)(0);
	}

IL_0049:
	{
		int32_t L_12 = V_1;
		return L_12;
	}
}
// System.Byte[] System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::Encode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* X509SubjectKeyIdentifierExtension_Encode_m6BEC26EF891B31FF98EF4FDF96CC0E9CEDF0B208 (X509SubjectKeyIdentifierExtension_t9781D24066D84C09C7137124FBC848491BF54567 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get__subjectKeyIdentifier_5();
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_1 = (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 *)il2cpp_codegen_object_new(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8_il2cpp_TypeInfo_var);
		ASN1__ctor_mB8A19279E6079D30BB6A594ADAC7FEE89E822CDC(L_1, (uint8_t)4, L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = VirtFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(4 /* System.Byte[] Mono.Security.ASN1::GetBytes() */, L_1);
		return L_2;
	}
}
// System.String System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::ToString(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509SubjectKeyIdentifierExtension_ToString_mBD5BE20274B5B56104E6ECD3137DE0718DE50537 (X509SubjectKeyIdentifierExtension_t9781D24066D84C09C7137124FBC848491BF54567 * __this, bool ___multiLine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral830B64B4254C502C612E53C83DBEE6238E710499);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD32F08BAB4EE365057213BCC6332DD39C2DE46B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9B53FE83B364433B53BD1F5712DD31D58258FB4);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get__status_7();
		V_1 = L_0;
		int32_t L_1 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0027;
			}
			case 2:
			{
				goto IL_0027;
			}
			case 3:
			{
				goto IL_0034;
			}
		}
	}
	{
		goto IL_003a;
	}

IL_0021:
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_2;
	}

IL_0027:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ((AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA *)__this)->get__raw_1();
		String_t* L_4;
		L_4 = X509Extension_FormatUnkownData_mEF1E719F7AD312B099351C581F4A06925AD9F18A(__this, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0034:
	{
		return _stringLiteralCD32F08BAB4EE365057213BCC6332DD39C2DE46B;
	}

IL_003a:
	{
		Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 * L_5 = ((AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA *)__this)->get__oid_0();
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Oid_get_Value_mD6F4D8AC1A3821D5DA263728C2DC0C208D084A78_inline(L_5, /*hidden argument*/NULL);
		bool L_7;
		L_7 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_6, _stringLiteral830B64B4254C502C612E53C83DBEE6238E710499, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0067;
		}
	}
	{
		Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 * L_8 = ((AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA *)__this)->get__oid_0();
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Oid_get_Value_mD6F4D8AC1A3821D5DA263728C2DC0C208D084A78_inline(L_8, /*hidden argument*/NULL);
		String_t* L_10;
		L_10 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralD9B53FE83B364433B53BD1F5712DD31D58258FB4, L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_0067:
	{
		StringBuilder_t * L_11 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_11, /*hidden argument*/NULL);
		V_0 = L_11;
		V_2 = 0;
		goto IL_00ab;
	}

IL_0071:
	{
		StringBuilder_t * L_12 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = __this->get__subjectKeyIdentifier_5();
		int32_t L_14 = V_2;
		NullCheck(L_13);
		String_t* L_15;
		L_15 = Byte_ToString_mABEF6F24915951FF4A4D87B389D8418B2638178C((uint8_t*)((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14))), _stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260, /*hidden argument*/NULL);
		NullCheck(L_12);
		StringBuilder_t * L_16;
		L_16 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_12, L_15, /*hidden argument*/NULL);
		int32_t L_17 = V_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18 = __this->get__subjectKeyIdentifier_5();
		NullCheck(L_18);
		if ((((int32_t)L_17) == ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))), (int32_t)1)))))
		{
			goto IL_00a7;
		}
	}
	{
		StringBuilder_t * L_19 = V_0;
		NullCheck(L_19);
		StringBuilder_t * L_20;
		L_20 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_19, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, /*hidden argument*/NULL);
	}

IL_00a7:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_00ab:
	{
		int32_t L_22 = V_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23 = __this->get__subjectKeyIdentifier_5();
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length))))))
		{
			goto IL_0071;
		}
	}
	{
		bool L_24 = ___multiLine0;
		if (!L_24)
		{
			goto IL_00c5;
		}
	}
	{
		StringBuilder_t * L_25 = V_0;
		String_t* L_26;
		L_26 = Environment_get_NewLine_mD145C8EE917C986BAA7C5243DEFAF4D333C521B4(/*hidden argument*/NULL);
		NullCheck(L_25);
		StringBuilder_t * L_27;
		L_27 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_25, L_26, /*hidden argument*/NULL);
	}

IL_00c5:
	{
		StringBuilder_t * L_28 = V_0;
		NullCheck(L_28);
		String_t* L_29;
		L_29 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_28);
		return L_29;
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
// System.String System.Security.Cryptography.X509Certificates.X509Utils::FindOidInfo(System.UInt32,System.String,System.Security.Cryptography.OidGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509Utils_FindOidInfo_m7CC1462A6CC9DA7C40CA09FA5EACEE9B9117EC8C (uint32_t ___keyType0, String_t* ___keyValue1, int32_t ___oidGroup2, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___keyValue1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral87D7C5E974D9C89FB52B8A53360C0C2E1DAAEC63)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509Utils_FindOidInfo_m7CC1462A6CC9DA7C40CA09FA5EACEE9B9117EC8C_RuntimeMethod_var)));
	}

IL_000e:
	{
		String_t* L_2 = ___keyValue1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0018;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0018:
	{
		uint32_t L_4 = ___keyType0;
		if ((((int32_t)L_4) == ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		uint32_t L_5 = ___keyType0;
		if ((((int32_t)L_5) == ((int32_t)2)))
		{
			goto IL_002a;
		}
	}
	{
		goto IL_0032;
	}

IL_0022:
	{
		String_t* L_6 = ___keyValue1;
		int32_t L_7 = ___oidGroup2;
		String_t* L_8;
		L_8 = CAPI_CryptFindOIDInfoNameFromKey_m283438D1BC7309F1642EBCE405CC9BFAEED43544(L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_002a:
	{
		String_t* L_9 = ___keyValue1;
		int32_t L_10 = ___oidGroup2;
		String_t* L_11;
		L_11 = CAPI_CryptFindOIDInfoKeyFromName_m4ED4943191307DF7392E82CE3E04C5A5777EA3AB(L_9, L_10, /*hidden argument*/NULL);
		return L_11;
	}

IL_0032:
	{
		String_t* L_12;
		L_12 = UInt32_ToString_mEB55F257429D34ED2BF41AE9567096F1F969B9A0((uint32_t*)(&___keyType0), /*hidden argument*/NULL);
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_13 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_m8A9AA4499614A5BC57DD21713D0720630C130AEB(L_13, L_12, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509Utils_FindOidInfo_m7CC1462A6CC9DA7C40CA09FA5EACEE9B9117EC8C_RuntimeMethod_var)));
	}
}
// System.String System.Security.Cryptography.X509Certificates.X509Utils::FindOidInfoWithFallback(System.UInt32,System.String,System.Security.Cryptography.OidGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509Utils_FindOidInfoWithFallback_m863F372B324E59321550DCCBF4E23ABCE0A1ABB1 (uint32_t ___key0, String_t* ___value1, int32_t ___group2, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		uint32_t L_0 = ___key0;
		String_t* L_1 = ___value1;
		int32_t L_2 = ___group2;
		String_t* L_3;
		L_3 = X509Utils_FindOidInfo_m7CC1462A6CC9DA7C40CA09FA5EACEE9B9117EC8C(L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4 = V_0;
		if (L_4)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_5 = ___group2;
		if (!L_5)
		{
			goto IL_0018;
		}
	}
	{
		uint32_t L_6 = ___key0;
		String_t* L_7 = ___value1;
		String_t* L_8;
		L_8 = X509Utils_FindOidInfo_m7CC1462A6CC9DA7C40CA09FA5EACEE9B9117EC8C(L_6, L_7, 0, /*hidden argument*/NULL);
		V_0 = L_8;
	}

IL_0018:
	{
		String_t* L_9 = V_0;
		return L_9;
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
// Conversion methods for marshalling of: System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping
IL2CPP_EXTERN_C void LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE_marshal_pinvoke(const LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE& unmarshaled, LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE_marshaled_pinvoke& marshaled)
{
	marshaled.____chMin_0 = static_cast<uint8_t>(unmarshaled.get__chMin_0());
	marshaled.____chMax_1 = static_cast<uint8_t>(unmarshaled.get__chMax_1());
	marshaled.____lcOp_2 = unmarshaled.get__lcOp_2();
	marshaled.____data_3 = unmarshaled.get__data_3();
}
IL2CPP_EXTERN_C void LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE_marshal_pinvoke_back(const LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE_marshaled_pinvoke& marshaled, LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE& unmarshaled)
{
	Il2CppChar unmarshaled__chMin_temp_0 = 0x0;
	unmarshaled__chMin_temp_0 = static_cast<Il2CppChar>(marshaled.____chMin_0);
	unmarshaled.set__chMin_0(unmarshaled__chMin_temp_0);
	Il2CppChar unmarshaled__chMax_temp_1 = 0x0;
	unmarshaled__chMax_temp_1 = static_cast<Il2CppChar>(marshaled.____chMax_1);
	unmarshaled.set__chMax_1(unmarshaled__chMax_temp_1);
	int32_t unmarshaled__lcOp_temp_2 = 0;
	unmarshaled__lcOp_temp_2 = marshaled.____lcOp_2;
	unmarshaled.set__lcOp_2(unmarshaled__lcOp_temp_2);
	int32_t unmarshaled__data_temp_3 = 0;
	unmarshaled__data_temp_3 = marshaled.____data_3;
	unmarshaled.set__data_3(unmarshaled__data_temp_3);
}
// Conversion method for clean up from marshalling of: System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping
IL2CPP_EXTERN_C void LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE_marshal_pinvoke_cleanup(LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping
IL2CPP_EXTERN_C void LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE_marshal_com(const LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE& unmarshaled, LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE_marshaled_com& marshaled)
{
	marshaled.____chMin_0 = static_cast<uint8_t>(unmarshaled.get__chMin_0());
	marshaled.____chMax_1 = static_cast<uint8_t>(unmarshaled.get__chMax_1());
	marshaled.____lcOp_2 = unmarshaled.get__lcOp_2();
	marshaled.____data_3 = unmarshaled.get__data_3();
}
IL2CPP_EXTERN_C void LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE_marshal_com_back(const LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE_marshaled_com& marshaled, LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE& unmarshaled)
{
	Il2CppChar unmarshaled__chMin_temp_0 = 0x0;
	unmarshaled__chMin_temp_0 = static_cast<Il2CppChar>(marshaled.____chMin_0);
	unmarshaled.set__chMin_0(unmarshaled__chMin_temp_0);
	Il2CppChar unmarshaled__chMax_temp_1 = 0x0;
	unmarshaled__chMax_temp_1 = static_cast<Il2CppChar>(marshaled.____chMax_1);
	unmarshaled.set__chMax_1(unmarshaled__chMax_temp_1);
	int32_t unmarshaled__lcOp_temp_2 = 0;
	unmarshaled__lcOp_temp_2 = marshaled.____lcOp_2;
	unmarshaled.set__lcOp_2(unmarshaled__lcOp_temp_2);
	int32_t unmarshaled__data_temp_3 = 0;
	unmarshaled__data_temp_3 = marshaled.____data_3;
	unmarshaled.set__data_3(unmarshaled__data_temp_3);
}
// Conversion method for clean up from marshalling of: System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping
IL2CPP_EXTERN_C void LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE_marshal_com_cleanup(LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE_marshaled_com& marshaled)
{
}
// System.Void System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping::.ctor(System.Char,System.Char,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowerCaseMapping__ctor_m0236442CB5098331DEAE7CACFCAC42741945D3E8 (LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE * __this, Il2CppChar ___chMin0, Il2CppChar ___chMax1, int32_t ___lcOp2, int32_t ___data3, const RuntimeMethod* method)
{
	{
		Il2CppChar L_0 = ___chMin0;
		__this->set__chMin_0(L_0);
		Il2CppChar L_1 = ___chMax1;
		__this->set__chMax_1(L_1);
		int32_t L_2 = ___lcOp2;
		__this->set__lcOp_2(L_2);
		int32_t L_3 = ___data3;
		__this->set__data_3(L_3);
		return;
	}
}
IL2CPP_EXTERN_C  void LowerCaseMapping__ctor_m0236442CB5098331DEAE7CACFCAC42741945D3E8_AdjustorThunk (RuntimeObject * __this, Il2CppChar ___chMin0, Il2CppChar ___chMax1, int32_t ___lcOp2, int32_t ___data3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE * _thisAdjusted = reinterpret_cast<LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE *>(__this + _offset);
	LowerCaseMapping__ctor_m0236442CB5098331DEAE7CACFCAC42741945D3E8(_thisAdjusted, ___chMin0, ___chMax1, ___lcOp2, ___data3, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Text.RegularExpressions.RegexCharClass/SingleRange::.ctor(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleRange__ctor_m886247FFB10501E4CDDC575B221D8CD1BC85E3B6 (SingleRange_tEE8EA054843A8B8979D082D2CCC8E52A12155624 * __this, Il2CppChar ___first0, Il2CppChar ___last1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		Il2CppChar L_0 = ___first0;
		__this->set__first_0(L_0);
		Il2CppChar L_1 = ___last1;
		__this->set__last_1(L_1);
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
// System.Int32 System.Text.RegularExpressions.RegexCharClass/SingleRangeComparer::Compare(System.Text.RegularExpressions.RegexCharClass/SingleRange,System.Text.RegularExpressions.RegexCharClass/SingleRange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SingleRangeComparer_Compare_m54BB5AFA11BF2F18A0C2F9491CE48E409D64AD3E (SingleRangeComparer_t2D22B185700E925165F9548B3647E0E1FC9DB075 * __this, SingleRange_tEE8EA054843A8B8979D082D2CCC8E52A12155624 * ___x0, SingleRange_tEE8EA054843A8B8979D082D2CCC8E52A12155624 * ___y1, const RuntimeMethod* method)
{
	{
		SingleRange_tEE8EA054843A8B8979D082D2CCC8E52A12155624 * L_0 = ___x0;
		NullCheck(L_0);
		Il2CppChar L_1 = L_0->get__first_0();
		SingleRange_tEE8EA054843A8B8979D082D2CCC8E52A12155624 * L_2 = ___y1;
		NullCheck(L_2);
		Il2CppChar L_3 = L_2->get__first_0();
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0020;
		}
	}
	{
		SingleRange_tEE8EA054843A8B8979D082D2CCC8E52A12155624 * L_4 = ___x0;
		NullCheck(L_4);
		Il2CppChar L_5 = L_4->get__first_0();
		SingleRange_tEE8EA054843A8B8979D082D2CCC8E52A12155624 * L_6 = ___y1;
		NullCheck(L_6);
		Il2CppChar L_7 = L_6->get__first_0();
		if ((((int32_t)L_5) > ((int32_t)L_7)))
		{
			goto IL_001e;
		}
	}
	{
		return 0;
	}

IL_001e:
	{
		return 1;
	}

IL_0020:
	{
		return (-1);
	}
}
// System.Void System.Text.RegularExpressions.RegexCharClass/SingleRangeComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleRangeComparer__ctor_mCEFF5ECE77E53783E5B8EAC98A5E194B6C743E73 (SingleRangeComparer_t2D22B185700E925165F9548B3647E0E1FC9DB075 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void System.Uri/MoreInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoreInfo__ctor_mF8515B2BCCB5E7DC008164794946ADE7ADBCD2BD (MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriInfo__ctor_m990C9CA368096AFE12B92F3605FAA70EC0C69BB8 (UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void System.UriParser/BuiltInUriParser::.ctor(System.String,System.Int32,System.UriSyntaxFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuiltInUriParser__ctor_m525296A62BB8A30ABA12A9DFE8C20CE22DA9CEAA (BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 * __this, String_t* ___lwrCaseScheme0, int32_t ___defaultPort1, int32_t ___syntaxFlags2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___syntaxFlags2;
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
		UriParser__ctor_m9A2C47C1F30EF65ADFBAEB0A569FB972F383825C(__this, ((int32_t)((int32_t)((int32_t)((int32_t)L_0|(int32_t)((int32_t)131072)))|(int32_t)((int32_t)262144))), /*hidden argument*/NULL);
		String_t* L_1 = ___lwrCaseScheme0;
		((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A *)__this)->set_m_Scheme_6(L_1);
		int32_t L_2 = ___defaultPort1;
		((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A *)__this)->set_m_Port_5(L_2);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* UriParser_get_SchemeName_mFCD123235673631E05FE9BAF6955A0B43EEEBD80_inline (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_m_Scheme_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* AsnEncodedData_get_RawData_mDCA2B393570BA050D3840B2449447A2C10639278_inline (AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA * __this, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get__raw_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void X509Extension_set_Critical_mF361A9EB776A20CA39923BD48C4A492A734144E0_inline (X509Extension_t9142CAA11EB46CC4CAB51A26D3B84BDA06FA9FF5 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set__critical_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool X509Extension_get_Critical_m56CF11BDF0C2D2917C326013630709C7709DCF12_inline (X509Extension_t9142CAA11EB46CC4CAB51A26D3B84BDA06FA9FF5 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__critical_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t ASN1_get_Tag_mA82F15B6EB97BF0F3EBAA69C21765909D7A675D3_inline (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_m_nTag_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Oid_get_Value_mD6F4D8AC1A3821D5DA263728C2DC0C208D084A78_inline (Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_m_value_0();
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA * PublicKey_get_EncodedKeyValue_m0294AF8C29C7329BEB243543D8FDA98B60FDB291_inline (PublicKey_t40ABE7E0985F3E274C9564670970EC6F3B39A4A2 * __this, const RuntimeMethod* method)
{
	{
		AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA * L_0 = __this->get__keyValue_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 * PublicKey_get_Oid_mE3207B84A9090EC5404F6CD4AEABB1F37EC1F988_inline (PublicKey_t40ABE7E0985F3E274C9564670970EC6F3B39A4A2 * __this, const RuntimeMethod* method)
{
	{
		Oid_tD6586F9C615C5CBE741A5099DFB67FE0F99F4800 * L_0 = __this->get__oid_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA * PublicKey_get_EncodedParameters_mFF4F9A39D91C0A00D1B36C93944816154C7255B3_inline (PublicKey_t40ABE7E0985F3E274C9564670970EC6F3B39A4A2 * __this, const RuntimeMethod* method)
{
	{
		AsnEncodedData_t88A440F72C4F1143E416540D78B910A875CC0FDA * L_0 = __this->get__params_1();
		return L_0;
	}
}
